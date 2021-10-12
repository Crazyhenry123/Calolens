// Copyright (c) Microsoft Corporation.
// Licensed under the MIT License.

using System;
using System.Threading.Tasks;
using UnityEngine;
using UnityEngine.XR.OpenXR;

#if UNITY_EDITOR
using UnityEditor;
using UnityEditor.XR.OpenXR.Features;
#endif

namespace Microsoft.MixedReality.OpenXR.Remoting
{
#if UNITY_EDITOR
    [OpenXRFeature(UiName = "Holographic Remoting for Play Mode",
        BuildTargetGroups = new[] { BuildTargetGroup.Standalone },
        Company = "Microsoft",
        Desc = "Holographic Remoting for Play Mode in Unity editor",
        DocumentationLink = "https://aka.ms/openxr-unity-editor-remoting",
        OpenxrExtensionStrings = requestedExtensions,
        Category = FeatureCategory.Feature,
        Required = false,
        Priority = -100,    // hookup before other plugins so it affects json before GetProcAddr.
        FeatureId = featureId,
        Version = "1.0.2")]
#endif
    [NativeLibToken(NativeLibToken = NativeLibToken.Remoting)]
    internal class PlayModeRemotingPlugin : OpenXRFeaturePlugin<PlayModeRemotingPlugin>
    {
        internal const string featureId = "com.microsoft.openxr.feature.playmoderemoting";
        private const string requestedExtensions = "XR_MSFT_holographic_remoting";

        [SerializeField, Tooltip("The host name or IP address of the player running in network server mode to connect to.")]
        private string m_remoteHostName = "";

        [SerializeField, Tooltip("The port number of the server's handshake port.")]
        private ushort m_remoteHostPort = 8265;

        [SerializeField, Tooltip("The max bitrate in Kbps to use for the connection.")]
        private uint m_maxBitrate = 20000;

        [SerializeField, Tooltip("The video codec to use for the connection.")]
        private RemotingVideoCodec m_videoCodec = RemotingVideoCodec.Auto;

        [SerializeField, Tooltip("Enable/disable audio remoting.")]
        private bool m_enableAudio = false;

        private bool m_remotingExtensionEnabled = false;
        private bool m_runtimeOverrideAttempted = false;

        private readonly bool m_playModeRemotingEnabled =
#if UNITY_EDITOR
            true;
#else
            false;
#endif
        protected override IntPtr HookGetInstanceProcAddr(IntPtr func)
        {
            if (m_playModeRemotingEnabled && !m_runtimeOverrideAttempted)
            {
                m_runtimeOverrideAttempted = true;
                if (!NativeLib.TryEnableRemotingOverride(nativeLibToken))
                {
                    Debug.LogError($"Failed to enable remoting runtime.");
                }
            }
            return base.HookGetInstanceProcAddr(func);
        }

        protected override bool OnInstanceCreate(ulong instance)
        {
            m_remotingExtensionEnabled = OpenXRRuntime.IsExtensionEnabled("XR_MSFT_holographic_remoting");
            return base.OnInstanceCreate(instance);
        }

        protected override void OnInstanceDestroy(ulong instance)
        {
            m_remotingExtensionEnabled = false;
            if (m_playModeRemotingEnabled && m_runtimeOverrideAttempted)
            {
                m_runtimeOverrideAttempted = false;
                NativeLib.ResetRemotingOverride(nativeLibToken);
            }
            base.OnInstanceDestroy(instance);
        }

        protected override void OnSystemChange(ulong systemId)
        {
            base.OnSystemChange(systemId);

            if (m_playModeRemotingEnabled && systemId != 0 && m_remotingExtensionEnabled)
            {
                RemotingConfiguration configuration = new RemotingConfiguration
                {
                    RemoteHostName = m_remoteHostName,
                    RemotePort = m_remoteHostPort,
                    MaxBitrateKbps = m_maxBitrate,
                    VideoCodec = m_videoCodec,
                    EnableAudio = m_enableAudio
                };
                NativeLib.ConnectRemoting(nativeLibToken, configuration);
            }
        }

        protected override void OnSessionStateChange(int oldState, int newState)
        {
            if (m_playModeRemotingEnabled && (XrSessionState)newState == XrSessionState.LossPending)
            {
                ConnectionState connectionState;
                DisconnectReason disconnectReason;
                Remoting.AppRemoting.TryGetConnectionState(out connectionState, out disconnectReason);

                Debug.LogWarning($"Cannot establish a connection to Holographic Remoting " +
                    $"on the target with IP Address {m_remoteHostName}:{m_remoteHostPort}. " +
                    $"ConnectionState = {connectionState}, DisconnectReason = {disconnectReason}. ");
            }
        }

        internal bool HasValidSettings()
        {
            return !string.IsNullOrEmpty(m_remoteHostName);
        }

#if UNITY_EDITOR
        protected override void GetValidationChecks(System.Collections.Generic.List<ValidationRule> results, BuildTargetGroup targetGroup)
        {
            PlayModeRemotingValidator.GetValidationChecks(this, results);
        }
#endif
    }
}
