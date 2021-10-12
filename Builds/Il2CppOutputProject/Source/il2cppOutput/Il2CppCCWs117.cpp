#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <stdint.h>
#include <limits>

#include "vm/CachedCCWBase.h"
#include "utils/New.h"

template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Experimental.SpatialAwareness.SpatialAwarenessSceneObject/MeshData>
struct List_1_tDA72B8042DB16E2653995D03C28908F831161AB7;
// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Experimental.SpatialAwareness.SpatialAwarenessSceneObject/QuadData>
struct List_1_t2451ECBE44D1E41FEE087E44A20F10D688CF2C8F;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// System.UInt32[]
struct UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF;
// UnityEngine.BoxCollider
struct BoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5;
// System.Globalization.CompareInfo
struct CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// System.IFormatProvider
struct IFormatProvider_tF2AECC4B14F41D36718920D67F930CED940412DF;
// UnityEngine.MeshCollider
struct MeshCollider_t1983F4E7E53D8C6B65FE21A8B4E2345A84D57E98;
// UnityEngine.MeshFilter
struct MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A;
// UnityEngine.MeshRenderer
struct MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50;
// Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver
struct Solver_tA2792575C8F41F0E48DDDB6CB63608F8AA24541A;
// Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler
struct SolverHandler_tBA5A2A64D18A2DE89D8CC8817DC0E65DD7943FA1;
// Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject
struct SpatialAwarenessMeshObject_tE3B25350576B52757F2CF7031F93D9E690972899;
// Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessPlanarObject
struct SpatialAwarenessPlanarObject_t153BC2F70AA3C6FE6D4184D6396293B601E81582;
// Microsoft.MixedReality.Toolkit.Experimental.SpatialAwareness.SpatialAwarenessSceneObject
struct SpatialAwarenessSceneObject_tAC052BA8D6B83B9DEB7AD61378718D40B7C9C12F;
// UnityEngine.Sprite
struct Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9;
// System.Data.SqlTypes.SqlBytes
struct SqlBytes_tA89570BFA7CB45E83EAFB32FF13B8ABEC21555B6;
// System.Data.SqlTypes.SqlChars
struct SqlChars_t123841A0B03CA780E6710DFE1A63ABA7CDE1CD53;
// System.Data.SqlTypes.SqlStreamChars
struct SqlStreamChars_t910B848D31E31CB82C6F50F1ECE148D614DE4665;
// System.IO.Stream
struct Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB;
// System.String
struct String_t;
// System.Text.UnicodeEncoding
struct UnicodeEncoding_tBB60B97AFC49D6246F28BF16D3E09822FCCACC68;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;

IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2_il2cpp_TypeInfo_var;
struct DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C ;
struct Guid_t ;
struct IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB;
struct IBindableVectorView_tD80A01049DD2609FEA5FACD5E77BF95A875534FA;
struct IIterator_1_t53A3C573D4888D0C268E9C0D9515A4BDAD329CCC;
struct IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C;
struct IVectorView_1_t0652AC4EC7AA575BE5D7797DFD20689718705BE0;
struct Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 ;
struct Rect_tC45F1DDF39812623644DE296D8057A4958176627 ;
struct Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 ;
struct TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 ;

struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
struct DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB;
struct GuidU5BU5D_t6DCED1B9FC5592C43FAA73D81705104BD18151B8;
struct Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD;
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
struct Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6;
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA;
struct SolverU5BU5D_tCDFF4AA7AC3D1F953967DC80B932F9FF5F205D4B;
struct SpatialAwarenessMeshObjectU5BU5D_t411C31FFC63D0C64513DABEC7E1F54D6849F7300;
struct SpatialAwarenessPlanarObjectU5BU5D_t36CFD4AD8AD6EB85F67310C71BCE6BF9D5EE2FD8;
struct SpatialAwarenessSceneObjectU5BU5D_t4BD41115CAD73B8A43C3C559C436F5BAE253C589;
struct SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77;
struct SqlBinaryU5BU5D_t4A1CD2FDEEC6E9EAEC15A8C28A7701484B8D4485;
struct SqlBooleanU5BU5D_t07B79EADC41ED65294851549545D3F3918FDC6A0;
struct SqlByteU5BU5D_tB403A2418F730327A0789B78506CDACCECBB4CB6;
struct SqlBytesU5BU5D_t6F60DB18D1E498C69C2A2A292075B88252A47C49;
struct SqlCharsU5BU5D_t20FD646DC66170A3025ACFD16C890584136139FC;
struct SqlDateTimeU5BU5D_t12EEE5C7616A30E9F9CE304F76B5912B2A47EABF;
struct SqlDecimalU5BU5D_t436F1578CFBAD13111599A27A32FB894D8307CBD;
struct SqlDoubleU5BU5D_t65F627E3E10E5B61B332C69E3E8180BB1B5C5EA7;
struct SqlGuidU5BU5D_t7B958D75216823CC6FD381B81133477AFD2DE5E2;
struct SqlInt16U5BU5D_tFDBC98064CCDBA5EF1A928770767FF5E428F68B0;
struct SqlInt32U5BU5D_t4E9A0DCCD18A21ED32AE342EE7288F4722D13002;
struct SqlInt64U5BU5D_t07215C71C5947E0BE4CF431CB6124BC53ADA28C5;
struct SqlMoneyU5BU5D_tF5702E9AA3B2D27362711637FFD105D198723C95;
struct SqlSingleU5BU5D_t2F81D199741A89C70F73D8FAC1385A28379B442F;
struct SqlStringU5BU5D_tB34569068C89C1DE7211001B8C5A6C84787554D5;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
struct UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67;
struct UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF;
struct UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Windows.Foundation.Collections.IIterable`1<System.Object>
struct NOVTABLE IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) = 0;
};
// Windows.Foundation.Collections.IIterable`1<System.Single>
struct NOVTABLE IIterable_1_t0EA6FF8BF23034840DB9F5189AF1D72411992F7E : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IIterable_1_First_mBD8D20BBA2E9F188C15175F2C9AB4039C6400ED1(IIterator_1_t53A3C573D4888D0C268E9C0D9515A4BDAD329CCC** comReturnValue) = 0;
};
// Windows.Foundation.IReferenceArray`1<System.Single>
struct NOVTABLE IReferenceArray_1_t1BB7D08F28C5D27D16C0145A86D139290E764ABC : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReferenceArray_1_get_Value_mDB41698A556618F72FF5F33C60E6D9B78435F619(uint32_t* comReturnValueArraySize, float** comReturnValue) = 0;
};
// Windows.Foundation.Collections.IVectorView`1<System.Object>
struct NOVTABLE IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260(uint32_t ___index0, Il2CppIInspectable** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1(uint32_t ___startIndex0, uint32_t ___items1ArraySize, Il2CppIInspectable** ___items1, uint32_t* comReturnValue) = 0;
};
// Windows.Foundation.Collections.IVectorView`1<System.Single>
struct NOVTABLE IVectorView_1_t0652AC4EC7AA575BE5D7797DFD20689718705BE0 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m3D2911EEE429BEE9DFCCFD08528A6B62938AE14E(uint32_t ___index0, float* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_mE51A5C7833E725EA8286E5878D80E9D44ECDFF41(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_m4C0458BD59B3F97E792DE7EB4399297542D76C97(float ___value0, uint32_t* ___index1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m481FCAC8A5B7E6C75882A80893023447977DA78B(uint32_t ___startIndex0, uint32_t ___items1ArraySize, float* ___items1, uint32_t* comReturnValue) = 0;
};
// Windows.Foundation.Collections.IVector`1<System.Single>
struct NOVTABLE IVector_1_t5FBA1DB686EDD35620DC2CCA810C0754A18E8C9D : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IVector_1_GetAt_mB49A020A8CDF0AAF8DCFB381FD74A77688B0FA71(uint32_t ___index0, float* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_get_Size_m494C6D174D411D7FC20D21CE0FA2C0EDD5E91568(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_GetView_m2720307D308D3DCD49B6AF4C4A08D67498D2B186(IVectorView_1_t0652AC4EC7AA575BE5D7797DFD20689718705BE0** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_IndexOf_mC1E5DFCDEDC953A4E1CA8BB1C427FBE7EA517FF4(float ___value0, uint32_t* ___index1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_SetAt_m478207B3FCA7EB1D8264306765201B9B4C8725AD(uint32_t ___index0, float ___value1) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_InsertAt_m6C9D77B26BDE0B12FE238687DA397FC58C2032A2(uint32_t ___index0, float ___value1) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_RemoveAt_m3EFDAC8DAF08714CB4FDF41FA54DF4EB2E0F9D97(uint32_t ___index0) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_Append_mB47ED34CA2102C71646E947495BA9D14451E29C6(float ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_RemoveAtEnd_m04EB0AD3F455408D30F0FFE3100BEB8367635CFC() = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_Clear_mE43500616C5480A63657796BB0AE2E60D7BA49A9() = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_GetMany_m436FF76C0F1FFB49549025672552A1353FEF8745(uint32_t ___startIndex0, uint32_t ___items1ArraySize, float* ___items1, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_ReplaceAll_mF925EE20FE793EF0740B86913574AE2E17FD6B93(uint32_t ___items0ArraySize, float* ___items0) = 0;
};
// Windows.UI.Xaml.Interop.IBindableIterable
struct NOVTABLE IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) = 0;
};
// Windows.UI.Xaml.Interop.IBindableVector
struct NOVTABLE IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED(uint32_t ___index0, Il2CppIInspectable** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38(IBindableVectorView_tD80A01049DD2609FEA5FACD5E77BF95A875534FA** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213(uint32_t ___index0, Il2CppIInspectable* ___value1) = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5(uint32_t ___index0, Il2CppIInspectable* ___value1) = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0(uint32_t ___index0) = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F(Il2CppIInspectable* ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3() = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF() = 0;
};

// System.Object


// Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialAwarenessObject
struct BaseSpatialAwarenessObject_t457D46D5F2BDBFC7EC4775738F6569ABF7D5947E  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialAwarenessObject::<Id>k__BackingField
	int32_t ___U3CIdU3Ek__BackingField_0;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialAwarenessObject::<GameObject>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3CGameObjectU3Ek__BackingField_1;
	// UnityEngine.MeshRenderer Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialAwarenessObject::<Renderer>k__BackingField
	MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * ___U3CRendererU3Ek__BackingField_2;
	// UnityEngine.MeshFilter Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialAwarenessObject::<Filter>k__BackingField
	MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * ___U3CFilterU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CIdU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(BaseSpatialAwarenessObject_t457D46D5F2BDBFC7EC4775738F6569ABF7D5947E, ___U3CIdU3Ek__BackingField_0)); }
	inline int32_t get_U3CIdU3Ek__BackingField_0() const { return ___U3CIdU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CIdU3Ek__BackingField_0() { return &___U3CIdU3Ek__BackingField_0; }
	inline void set_U3CIdU3Ek__BackingField_0(int32_t value)
	{
		___U3CIdU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CGameObjectU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(BaseSpatialAwarenessObject_t457D46D5F2BDBFC7EC4775738F6569ABF7D5947E, ___U3CGameObjectU3Ek__BackingField_1)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3CGameObjectU3Ek__BackingField_1() const { return ___U3CGameObjectU3Ek__BackingField_1; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3CGameObjectU3Ek__BackingField_1() { return &___U3CGameObjectU3Ek__BackingField_1; }
	inline void set_U3CGameObjectU3Ek__BackingField_1(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3CGameObjectU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CGameObjectU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CRendererU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(BaseSpatialAwarenessObject_t457D46D5F2BDBFC7EC4775738F6569ABF7D5947E, ___U3CRendererU3Ek__BackingField_2)); }
	inline MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * get_U3CRendererU3Ek__BackingField_2() const { return ___U3CRendererU3Ek__BackingField_2; }
	inline MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B ** get_address_of_U3CRendererU3Ek__BackingField_2() { return &___U3CRendererU3Ek__BackingField_2; }
	inline void set_U3CRendererU3Ek__BackingField_2(MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * value)
	{
		___U3CRendererU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CRendererU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CFilterU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(BaseSpatialAwarenessObject_t457D46D5F2BDBFC7EC4775738F6569ABF7D5947E, ___U3CFilterU3Ek__BackingField_3)); }
	inline MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * get_U3CFilterU3Ek__BackingField_3() const { return ___U3CFilterU3Ek__BackingField_3; }
	inline MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A ** get_address_of_U3CFilterU3Ek__BackingField_3() { return &___U3CFilterU3Ek__BackingField_3; }
	inline void set_U3CFilterU3Ek__BackingField_3(MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * value)
	{
		___U3CFilterU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CFilterU3Ek__BackingField_3), (void*)value);
	}
};


// System.String
struct String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Byte
struct Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};


// System.DateTime
struct DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 
{
public:
	// System.UInt64 System.DateTime::dateData
	uint64_t ___dateData_44;

public:
	inline static int32_t get_offset_of_dateData_44() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405, ___dateData_44)); }
	inline uint64_t get_dateData_44() const { return ___dateData_44; }
	inline uint64_t* get_address_of_dateData_44() { return &___dateData_44; }
	inline void set_dateData_44(uint64_t value)
	{
		___dateData_44 = value;
	}
};

struct DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields
{
public:
	// System.Int32[] System.DateTime::DaysToMonth365
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___DaysToMonth365_29;
	// System.Int32[] System.DateTime::DaysToMonth366
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___DaysToMonth366_30;
	// System.DateTime System.DateTime::MinValue
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___MinValue_31;
	// System.DateTime System.DateTime::MaxValue
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___MaxValue_32;

public:
	inline static int32_t get_offset_of_DaysToMonth365_29() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___DaysToMonth365_29)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_DaysToMonth365_29() const { return ___DaysToMonth365_29; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_DaysToMonth365_29() { return &___DaysToMonth365_29; }
	inline void set_DaysToMonth365_29(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___DaysToMonth365_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth365_29), (void*)value);
	}

	inline static int32_t get_offset_of_DaysToMonth366_30() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___DaysToMonth366_30)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_DaysToMonth366_30() const { return ___DaysToMonth366_30; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_DaysToMonth366_30() { return &___DaysToMonth366_30; }
	inline void set_DaysToMonth366_30(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___DaysToMonth366_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth366_30), (void*)value);
	}

	inline static int32_t get_offset_of_MinValue_31() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___MinValue_31)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_MinValue_31() const { return ___MinValue_31; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_MinValue_31() { return &___MinValue_31; }
	inline void set_MinValue_31(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___MinValue_31 = value;
	}

	inline static int32_t get_offset_of_MaxValue_32() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___MaxValue_32)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_MaxValue_32() const { return ___MaxValue_32; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_MaxValue_32() { return &___MaxValue_32; }
	inline void set_MaxValue_32(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___MaxValue_32 = value;
	}
};


// Windows.Foundation.DateTime
struct DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C 
{
public:
	// System.Int64 Windows.Foundation.DateTime::UniversalTime
	int64_t ___UniversalTime_0;

public:
	inline static int32_t get_offset_of_UniversalTime_0() { return static_cast<int32_t>(offsetof(DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C, ___UniversalTime_0)); }
	inline int64_t get_UniversalTime_0() const { return ___UniversalTime_0; }
	inline int64_t* get_address_of_UniversalTime_0() { return &___UniversalTime_0; }
	inline void set_UniversalTime_0(int64_t value)
	{
		___UniversalTime_0 = value;
	}
};


// System.Double
struct Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181, ___m_value_0)); }
	inline double get_m_value_0() const { return ___m_value_0; }
	inline double* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(double value)
	{
		___m_value_0 = value;
	}
};

struct Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields
{
public:
	// System.Double System.Double::NegativeZero
	double ___NegativeZero_7;

public:
	inline static int32_t get_offset_of_NegativeZero_7() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields, ___NegativeZero_7)); }
	inline double get_NegativeZero_7() const { return ___NegativeZero_7; }
	inline double* get_address_of_NegativeZero_7() { return &___NegativeZero_7; }
	inline void set_NegativeZero_7(double value)
	{
		___NegativeZero_7 = value;
	}
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Guid
struct Guid_t 
{
public:
	// System.Int32 System.Guid::_a
	int32_t ____a_1;
	// System.Int16 System.Guid::_b
	int16_t ____b_2;
	// System.Int16 System.Guid::_c
	int16_t ____c_3;
	// System.Byte System.Guid::_d
	uint8_t ____d_4;
	// System.Byte System.Guid::_e
	uint8_t ____e_5;
	// System.Byte System.Guid::_f
	uint8_t ____f_6;
	// System.Byte System.Guid::_g
	uint8_t ____g_7;
	// System.Byte System.Guid::_h
	uint8_t ____h_8;
	// System.Byte System.Guid::_i
	uint8_t ____i_9;
	// System.Byte System.Guid::_j
	uint8_t ____j_10;
	// System.Byte System.Guid::_k
	uint8_t ____k_11;

public:
	inline static int32_t get_offset_of__a_1() { return static_cast<int32_t>(offsetof(Guid_t, ____a_1)); }
	inline int32_t get__a_1() const { return ____a_1; }
	inline int32_t* get_address_of__a_1() { return &____a_1; }
	inline void set__a_1(int32_t value)
	{
		____a_1 = value;
	}

	inline static int32_t get_offset_of__b_2() { return static_cast<int32_t>(offsetof(Guid_t, ____b_2)); }
	inline int16_t get__b_2() const { return ____b_2; }
	inline int16_t* get_address_of__b_2() { return &____b_2; }
	inline void set__b_2(int16_t value)
	{
		____b_2 = value;
	}

	inline static int32_t get_offset_of__c_3() { return static_cast<int32_t>(offsetof(Guid_t, ____c_3)); }
	inline int16_t get__c_3() const { return ____c_3; }
	inline int16_t* get_address_of__c_3() { return &____c_3; }
	inline void set__c_3(int16_t value)
	{
		____c_3 = value;
	}

	inline static int32_t get_offset_of__d_4() { return static_cast<int32_t>(offsetof(Guid_t, ____d_4)); }
	inline uint8_t get__d_4() const { return ____d_4; }
	inline uint8_t* get_address_of__d_4() { return &____d_4; }
	inline void set__d_4(uint8_t value)
	{
		____d_4 = value;
	}

	inline static int32_t get_offset_of__e_5() { return static_cast<int32_t>(offsetof(Guid_t, ____e_5)); }
	inline uint8_t get__e_5() const { return ____e_5; }
	inline uint8_t* get_address_of__e_5() { return &____e_5; }
	inline void set__e_5(uint8_t value)
	{
		____e_5 = value;
	}

	inline static int32_t get_offset_of__f_6() { return static_cast<int32_t>(offsetof(Guid_t, ____f_6)); }
	inline uint8_t get__f_6() const { return ____f_6; }
	inline uint8_t* get_address_of__f_6() { return &____f_6; }
	inline void set__f_6(uint8_t value)
	{
		____f_6 = value;
	}

	inline static int32_t get_offset_of__g_7() { return static_cast<int32_t>(offsetof(Guid_t, ____g_7)); }
	inline uint8_t get__g_7() const { return ____g_7; }
	inline uint8_t* get_address_of__g_7() { return &____g_7; }
	inline void set__g_7(uint8_t value)
	{
		____g_7 = value;
	}

	inline static int32_t get_offset_of__h_8() { return static_cast<int32_t>(offsetof(Guid_t, ____h_8)); }
	inline uint8_t get__h_8() const { return ____h_8; }
	inline uint8_t* get_address_of__h_8() { return &____h_8; }
	inline void set__h_8(uint8_t value)
	{
		____h_8 = value;
	}

	inline static int32_t get_offset_of__i_9() { return static_cast<int32_t>(offsetof(Guid_t, ____i_9)); }
	inline uint8_t get__i_9() const { return ____i_9; }
	inline uint8_t* get_address_of__i_9() { return &____i_9; }
	inline void set__i_9(uint8_t value)
	{
		____i_9 = value;
	}

	inline static int32_t get_offset_of__j_10() { return static_cast<int32_t>(offsetof(Guid_t, ____j_10)); }
	inline uint8_t get__j_10() const { return ____j_10; }
	inline uint8_t* get_address_of__j_10() { return &____j_10; }
	inline void set__j_10(uint8_t value)
	{
		____j_10 = value;
	}

	inline static int32_t get_offset_of__k_11() { return static_cast<int32_t>(offsetof(Guid_t, ____k_11)); }
	inline uint8_t get__k_11() const { return ____k_11; }
	inline uint8_t* get_address_of__k_11() { return &____k_11; }
	inline void set__k_11(uint8_t value)
	{
		____k_11 = value;
	}
};

struct Guid_t_StaticFields
{
public:
	// System.Guid System.Guid::Empty
	Guid_t  ___Empty_0;
	// System.Object System.Guid::_rngAccess
	RuntimeObject * ____rngAccess_12;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_rng
	RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * ____rng_13;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_fastRng
	RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * ____fastRng_14;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ___Empty_0)); }
	inline Guid_t  get_Empty_0() const { return ___Empty_0; }
	inline Guid_t * get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(Guid_t  value)
	{
		___Empty_0 = value;
	}

	inline static int32_t get_offset_of__rngAccess_12() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rngAccess_12)); }
	inline RuntimeObject * get__rngAccess_12() const { return ____rngAccess_12; }
	inline RuntimeObject ** get_address_of__rngAccess_12() { return &____rngAccess_12; }
	inline void set__rngAccess_12(RuntimeObject * value)
	{
		____rngAccess_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rngAccess_12), (void*)value);
	}

	inline static int32_t get_offset_of__rng_13() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rng_13)); }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * get__rng_13() const { return ____rng_13; }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 ** get_address_of__rng_13() { return &____rng_13; }
	inline void set__rng_13(RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * value)
	{
		____rng_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rng_13), (void*)value);
	}

	inline static int32_t get_offset_of__fastRng_14() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____fastRng_14)); }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * get__fastRng_14() const { return ____fastRng_14; }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 ** get_address_of__fastRng_14() { return &____fastRng_14; }
	inline void set__fastRng_14(RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * value)
	{
		____fastRng_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____fastRng_14), (void*)value);
	}
};


// System.Int16
struct Int16_tD0F031114106263BB459DA1F099FF9F42691295A 
{
public:
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int16_tD0F031114106263BB459DA1F099FF9F42691295A, ___m_value_0)); }
	inline int16_t get_m_value_0() const { return ___m_value_0; }
	inline int16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int16_t value)
	{
		___m_value_0 = value;
	}
};


// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.Int64
struct Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// Windows.Foundation.Point
struct Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 
{
public:
	// System.Single Windows.Foundation.Point::_x
	float ____x_0;
	// System.Single Windows.Foundation.Point::_y
	float ____y_1;

public:
	inline static int32_t get_offset_of__x_0() { return static_cast<int32_t>(offsetof(Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578, ____x_0)); }
	inline float get__x_0() const { return ____x_0; }
	inline float* get_address_of__x_0() { return &____x_0; }
	inline void set__x_0(float value)
	{
		____x_0 = value;
	}

	inline static int32_t get_offset_of__y_1() { return static_cast<int32_t>(offsetof(Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578, ____y_1)); }
	inline float get__y_1() const { return ____y_1; }
	inline float* get_address_of__y_1() { return &____y_1; }
	inline void set__y_1(float value)
	{
		____y_1 = value;
	}
};


// UnityEngine.Quaternion
struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___identityQuaternion_4 = value;
	}
};


// Windows.Foundation.Rect
struct Rect_tC45F1DDF39812623644DE296D8057A4958176627 
{
public:
	// System.Single Windows.Foundation.Rect::_x
	float ____x_0;
	// System.Single Windows.Foundation.Rect::_y
	float ____y_1;
	// System.Single Windows.Foundation.Rect::_width
	float ____width_2;
	// System.Single Windows.Foundation.Rect::_height
	float ____height_3;

public:
	inline static int32_t get_offset_of__x_0() { return static_cast<int32_t>(offsetof(Rect_tC45F1DDF39812623644DE296D8057A4958176627, ____x_0)); }
	inline float get__x_0() const { return ____x_0; }
	inline float* get_address_of__x_0() { return &____x_0; }
	inline void set__x_0(float value)
	{
		____x_0 = value;
	}

	inline static int32_t get_offset_of__y_1() { return static_cast<int32_t>(offsetof(Rect_tC45F1DDF39812623644DE296D8057A4958176627, ____y_1)); }
	inline float get__y_1() const { return ____y_1; }
	inline float* get_address_of__y_1() { return &____y_1; }
	inline void set__y_1(float value)
	{
		____y_1 = value;
	}

	inline static int32_t get_offset_of__width_2() { return static_cast<int32_t>(offsetof(Rect_tC45F1DDF39812623644DE296D8057A4958176627, ____width_2)); }
	inline float get__width_2() const { return ____width_2; }
	inline float* get_address_of__width_2() { return &____width_2; }
	inline void set__width_2(float value)
	{
		____width_2 = value;
	}

	inline static int32_t get_offset_of__height_3() { return static_cast<int32_t>(offsetof(Rect_tC45F1DDF39812623644DE296D8057A4958176627, ____height_3)); }
	inline float get__height_3() const { return ____height_3; }
	inline float* get_address_of__height_3() { return &____height_3; }
	inline void set__height_3(float value)
	{
		____height_3 = value;
	}
};


// System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// Windows.Foundation.Size
struct Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 
{
public:
	// System.Single Windows.Foundation.Size::_width
	float ____width_0;
	// System.Single Windows.Foundation.Size::_height
	float ____height_1;

public:
	inline static int32_t get_offset_of__width_0() { return static_cast<int32_t>(offsetof(Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92, ____width_0)); }
	inline float get__width_0() const { return ____width_0; }
	inline float* get_address_of__width_0() { return &____width_0; }
	inline void set__width_0(float value)
	{
		____width_0 = value;
	}

	inline static int32_t get_offset_of__height_1() { return static_cast<int32_t>(offsetof(Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92, ____height_1)); }
	inline float get__height_1() const { return ____height_1; }
	inline float* get_address_of__height_1() { return &____height_1; }
	inline void set__height_1(float value)
	{
		____height_1 = value;
	}
};


// Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject
struct SpatialAwarenessMeshObject_tE3B25350576B52757F2CF7031F93D9E690972899  : public BaseSpatialAwarenessObject_t457D46D5F2BDBFC7EC4775738F6569ABF7D5947E
{
public:
	// UnityEngine.MeshCollider Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject::<Collider>k__BackingField
	MeshCollider_t1983F4E7E53D8C6B65FE21A8B4E2345A84D57E98 * ___U3CColliderU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_U3CColliderU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(SpatialAwarenessMeshObject_tE3B25350576B52757F2CF7031F93D9E690972899, ___U3CColliderU3Ek__BackingField_5)); }
	inline MeshCollider_t1983F4E7E53D8C6B65FE21A8B4E2345A84D57E98 * get_U3CColliderU3Ek__BackingField_5() const { return ___U3CColliderU3Ek__BackingField_5; }
	inline MeshCollider_t1983F4E7E53D8C6B65FE21A8B4E2345A84D57E98 ** get_address_of_U3CColliderU3Ek__BackingField_5() { return &___U3CColliderU3Ek__BackingField_5; }
	inline void set_U3CColliderU3Ek__BackingField_5(MeshCollider_t1983F4E7E53D8C6B65FE21A8B4E2345A84D57E98 * value)
	{
		___U3CColliderU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CColliderU3Ek__BackingField_5), (void*)value);
	}
};

struct SpatialAwarenessMeshObject_tE3B25350576B52757F2CF7031F93D9E690972899_StaticFields
{
public:
	// System.Type[] Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject::RequiredMeshComponents
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___RequiredMeshComponents_4;

public:
	inline static int32_t get_offset_of_RequiredMeshComponents_4() { return static_cast<int32_t>(offsetof(SpatialAwarenessMeshObject_tE3B25350576B52757F2CF7031F93D9E690972899_StaticFields, ___RequiredMeshComponents_4)); }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* get_RequiredMeshComponents_4() const { return ___RequiredMeshComponents_4; }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755** get_address_of_RequiredMeshComponents_4() { return &___RequiredMeshComponents_4; }
	inline void set_RequiredMeshComponents_4(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* value)
	{
		___RequiredMeshComponents_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RequiredMeshComponents_4), (void*)value);
	}
};


// System.Data.SqlTypes.SqlBinary
struct SqlBinary_t83BA1113ACB82E306D2EC534B0864D8A4A7D125B 
{
public:
	// System.Byte[] System.Data.SqlTypes.SqlBinary::_value
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ____value_0;

public:
	inline static int32_t get_offset_of__value_0() { return static_cast<int32_t>(offsetof(SqlBinary_t83BA1113ACB82E306D2EC534B0864D8A4A7D125B, ____value_0)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get__value_0() const { return ____value_0; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of__value_0() { return &____value_0; }
	inline void set__value_0(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		____value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____value_0), (void*)value);
	}
};

struct SqlBinary_t83BA1113ACB82E306D2EC534B0864D8A4A7D125B_StaticFields
{
public:
	// System.Data.SqlTypes.SqlBinary System.Data.SqlTypes.SqlBinary::Null
	SqlBinary_t83BA1113ACB82E306D2EC534B0864D8A4A7D125B  ___Null_1;

public:
	inline static int32_t get_offset_of_Null_1() { return static_cast<int32_t>(offsetof(SqlBinary_t83BA1113ACB82E306D2EC534B0864D8A4A7D125B_StaticFields, ___Null_1)); }
	inline SqlBinary_t83BA1113ACB82E306D2EC534B0864D8A4A7D125B  get_Null_1() const { return ___Null_1; }
	inline SqlBinary_t83BA1113ACB82E306D2EC534B0864D8A4A7D125B * get_address_of_Null_1() { return &___Null_1; }
	inline void set_Null_1(SqlBinary_t83BA1113ACB82E306D2EC534B0864D8A4A7D125B  value)
	{
		___Null_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___Null_1))->____value_0), (void*)NULL);
	}
};

// Native definition for P/Invoke marshalling of System.Data.SqlTypes.SqlBinary
struct SqlBinary_t83BA1113ACB82E306D2EC534B0864D8A4A7D125B_marshaled_pinvoke
{
	Il2CppSafeArray/*NONE*/* ____value_0;
};
// Native definition for COM marshalling of System.Data.SqlTypes.SqlBinary
struct SqlBinary_t83BA1113ACB82E306D2EC534B0864D8A4A7D125B_marshaled_com
{
	Il2CppSafeArray/*NONE*/* ____value_0;
};

// System.Data.SqlTypes.SqlBoolean
struct SqlBoolean_tD34BC5894C8A7061B0E2D2D2CBE8E4A5257FD4F3 
{
public:
	// System.Byte System.Data.SqlTypes.SqlBoolean::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(SqlBoolean_tD34BC5894C8A7061B0E2D2D2CBE8E4A5257FD4F3, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};

struct SqlBoolean_tD34BC5894C8A7061B0E2D2D2CBE8E4A5257FD4F3_StaticFields
{
public:
	// System.Data.SqlTypes.SqlBoolean System.Data.SqlTypes.SqlBoolean::True
	SqlBoolean_tD34BC5894C8A7061B0E2D2D2CBE8E4A5257FD4F3  ___True_1;
	// System.Data.SqlTypes.SqlBoolean System.Data.SqlTypes.SqlBoolean::False
	SqlBoolean_tD34BC5894C8A7061B0E2D2D2CBE8E4A5257FD4F3  ___False_2;
	// System.Data.SqlTypes.SqlBoolean System.Data.SqlTypes.SqlBoolean::Null
	SqlBoolean_tD34BC5894C8A7061B0E2D2D2CBE8E4A5257FD4F3  ___Null_3;
	// System.Data.SqlTypes.SqlBoolean System.Data.SqlTypes.SqlBoolean::Zero
	SqlBoolean_tD34BC5894C8A7061B0E2D2D2CBE8E4A5257FD4F3  ___Zero_4;
	// System.Data.SqlTypes.SqlBoolean System.Data.SqlTypes.SqlBoolean::One
	SqlBoolean_tD34BC5894C8A7061B0E2D2D2CBE8E4A5257FD4F3  ___One_5;

public:
	inline static int32_t get_offset_of_True_1() { return static_cast<int32_t>(offsetof(SqlBoolean_tD34BC5894C8A7061B0E2D2D2CBE8E4A5257FD4F3_StaticFields, ___True_1)); }
	inline SqlBoolean_tD34BC5894C8A7061B0E2D2D2CBE8E4A5257FD4F3  get_True_1() const { return ___True_1; }
	inline SqlBoolean_tD34BC5894C8A7061B0E2D2D2CBE8E4A5257FD4F3 * get_address_of_True_1() { return &___True_1; }
	inline void set_True_1(SqlBoolean_tD34BC5894C8A7061B0E2D2D2CBE8E4A5257FD4F3  value)
	{
		___True_1 = value;
	}

	inline static int32_t get_offset_of_False_2() { return static_cast<int32_t>(offsetof(SqlBoolean_tD34BC5894C8A7061B0E2D2D2CBE8E4A5257FD4F3_StaticFields, ___False_2)); }
	inline SqlBoolean_tD34BC5894C8A7061B0E2D2D2CBE8E4A5257FD4F3  get_False_2() const { return ___False_2; }
	inline SqlBoolean_tD34BC5894C8A7061B0E2D2D2CBE8E4A5257FD4F3 * get_address_of_False_2() { return &___False_2; }
	inline void set_False_2(SqlBoolean_tD34BC5894C8A7061B0E2D2D2CBE8E4A5257FD4F3  value)
	{
		___False_2 = value;
	}

	inline static int32_t get_offset_of_Null_3() { return static_cast<int32_t>(offsetof(SqlBoolean_tD34BC5894C8A7061B0E2D2D2CBE8E4A5257FD4F3_StaticFields, ___Null_3)); }
	inline SqlBoolean_tD34BC5894C8A7061B0E2D2D2CBE8E4A5257FD4F3  get_Null_3() const { return ___Null_3; }
	inline SqlBoolean_tD34BC5894C8A7061B0E2D2D2CBE8E4A5257FD4F3 * get_address_of_Null_3() { return &___Null_3; }
	inline void set_Null_3(SqlBoolean_tD34BC5894C8A7061B0E2D2D2CBE8E4A5257FD4F3  value)
	{
		___Null_3 = value;
	}

	inline static int32_t get_offset_of_Zero_4() { return static_cast<int32_t>(offsetof(SqlBoolean_tD34BC5894C8A7061B0E2D2D2CBE8E4A5257FD4F3_StaticFields, ___Zero_4)); }
	inline SqlBoolean_tD34BC5894C8A7061B0E2D2D2CBE8E4A5257FD4F3  get_Zero_4() const { return ___Zero_4; }
	inline SqlBoolean_tD34BC5894C8A7061B0E2D2D2CBE8E4A5257FD4F3 * get_address_of_Zero_4() { return &___Zero_4; }
	inline void set_Zero_4(SqlBoolean_tD34BC5894C8A7061B0E2D2D2CBE8E4A5257FD4F3  value)
	{
		___Zero_4 = value;
	}

	inline static int32_t get_offset_of_One_5() { return static_cast<int32_t>(offsetof(SqlBoolean_tD34BC5894C8A7061B0E2D2D2CBE8E4A5257FD4F3_StaticFields, ___One_5)); }
	inline SqlBoolean_tD34BC5894C8A7061B0E2D2D2CBE8E4A5257FD4F3  get_One_5() const { return ___One_5; }
	inline SqlBoolean_tD34BC5894C8A7061B0E2D2D2CBE8E4A5257FD4F3 * get_address_of_One_5() { return &___One_5; }
	inline void set_One_5(SqlBoolean_tD34BC5894C8A7061B0E2D2D2CBE8E4A5257FD4F3  value)
	{
		___One_5 = value;
	}
};


// System.Data.SqlTypes.SqlByte
struct SqlByte_t5E78C40CFCD84AF432F47D15743E513022E09B41 
{
public:
	// System.Boolean System.Data.SqlTypes.SqlByte::m_fNotNull
	bool ___m_fNotNull_0;
	// System.Byte System.Data.SqlTypes.SqlByte::m_value
	uint8_t ___m_value_1;

public:
	inline static int32_t get_offset_of_m_fNotNull_0() { return static_cast<int32_t>(offsetof(SqlByte_t5E78C40CFCD84AF432F47D15743E513022E09B41, ___m_fNotNull_0)); }
	inline bool get_m_fNotNull_0() const { return ___m_fNotNull_0; }
	inline bool* get_address_of_m_fNotNull_0() { return &___m_fNotNull_0; }
	inline void set_m_fNotNull_0(bool value)
	{
		___m_fNotNull_0 = value;
	}

	inline static int32_t get_offset_of_m_value_1() { return static_cast<int32_t>(offsetof(SqlByte_t5E78C40CFCD84AF432F47D15743E513022E09B41, ___m_value_1)); }
	inline uint8_t get_m_value_1() const { return ___m_value_1; }
	inline uint8_t* get_address_of_m_value_1() { return &___m_value_1; }
	inline void set_m_value_1(uint8_t value)
	{
		___m_value_1 = value;
	}
};

struct SqlByte_t5E78C40CFCD84AF432F47D15743E513022E09B41_StaticFields
{
public:
	// System.Int32 System.Data.SqlTypes.SqlByte::s_iBitNotByteMax
	int32_t ___s_iBitNotByteMax_2;
	// System.Data.SqlTypes.SqlByte System.Data.SqlTypes.SqlByte::Null
	SqlByte_t5E78C40CFCD84AF432F47D15743E513022E09B41  ___Null_3;
	// System.Data.SqlTypes.SqlByte System.Data.SqlTypes.SqlByte::Zero
	SqlByte_t5E78C40CFCD84AF432F47D15743E513022E09B41  ___Zero_4;
	// System.Data.SqlTypes.SqlByte System.Data.SqlTypes.SqlByte::MinValue
	SqlByte_t5E78C40CFCD84AF432F47D15743E513022E09B41  ___MinValue_5;
	// System.Data.SqlTypes.SqlByte System.Data.SqlTypes.SqlByte::MaxValue
	SqlByte_t5E78C40CFCD84AF432F47D15743E513022E09B41  ___MaxValue_6;

public:
	inline static int32_t get_offset_of_s_iBitNotByteMax_2() { return static_cast<int32_t>(offsetof(SqlByte_t5E78C40CFCD84AF432F47D15743E513022E09B41_StaticFields, ___s_iBitNotByteMax_2)); }
	inline int32_t get_s_iBitNotByteMax_2() const { return ___s_iBitNotByteMax_2; }
	inline int32_t* get_address_of_s_iBitNotByteMax_2() { return &___s_iBitNotByteMax_2; }
	inline void set_s_iBitNotByteMax_2(int32_t value)
	{
		___s_iBitNotByteMax_2 = value;
	}

	inline static int32_t get_offset_of_Null_3() { return static_cast<int32_t>(offsetof(SqlByte_t5E78C40CFCD84AF432F47D15743E513022E09B41_StaticFields, ___Null_3)); }
	inline SqlByte_t5E78C40CFCD84AF432F47D15743E513022E09B41  get_Null_3() const { return ___Null_3; }
	inline SqlByte_t5E78C40CFCD84AF432F47D15743E513022E09B41 * get_address_of_Null_3() { return &___Null_3; }
	inline void set_Null_3(SqlByte_t5E78C40CFCD84AF432F47D15743E513022E09B41  value)
	{
		___Null_3 = value;
	}

	inline static int32_t get_offset_of_Zero_4() { return static_cast<int32_t>(offsetof(SqlByte_t5E78C40CFCD84AF432F47D15743E513022E09B41_StaticFields, ___Zero_4)); }
	inline SqlByte_t5E78C40CFCD84AF432F47D15743E513022E09B41  get_Zero_4() const { return ___Zero_4; }
	inline SqlByte_t5E78C40CFCD84AF432F47D15743E513022E09B41 * get_address_of_Zero_4() { return &___Zero_4; }
	inline void set_Zero_4(SqlByte_t5E78C40CFCD84AF432F47D15743E513022E09B41  value)
	{
		___Zero_4 = value;
	}

	inline static int32_t get_offset_of_MinValue_5() { return static_cast<int32_t>(offsetof(SqlByte_t5E78C40CFCD84AF432F47D15743E513022E09B41_StaticFields, ___MinValue_5)); }
	inline SqlByte_t5E78C40CFCD84AF432F47D15743E513022E09B41  get_MinValue_5() const { return ___MinValue_5; }
	inline SqlByte_t5E78C40CFCD84AF432F47D15743E513022E09B41 * get_address_of_MinValue_5() { return &___MinValue_5; }
	inline void set_MinValue_5(SqlByte_t5E78C40CFCD84AF432F47D15743E513022E09B41  value)
	{
		___MinValue_5 = value;
	}

	inline static int32_t get_offset_of_MaxValue_6() { return static_cast<int32_t>(offsetof(SqlByte_t5E78C40CFCD84AF432F47D15743E513022E09B41_StaticFields, ___MaxValue_6)); }
	inline SqlByte_t5E78C40CFCD84AF432F47D15743E513022E09B41  get_MaxValue_6() const { return ___MaxValue_6; }
	inline SqlByte_t5E78C40CFCD84AF432F47D15743E513022E09B41 * get_address_of_MaxValue_6() { return &___MaxValue_6; }
	inline void set_MaxValue_6(SqlByte_t5E78C40CFCD84AF432F47D15743E513022E09B41  value)
	{
		___MaxValue_6 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Data.SqlTypes.SqlByte
struct SqlByte_t5E78C40CFCD84AF432F47D15743E513022E09B41_marshaled_pinvoke
{
	int32_t ___m_fNotNull_0;
	uint8_t ___m_value_1;
};
// Native definition for COM marshalling of System.Data.SqlTypes.SqlByte
struct SqlByte_t5E78C40CFCD84AF432F47D15743E513022E09B41_marshaled_com
{
	int32_t ___m_fNotNull_0;
	uint8_t ___m_value_1;
};

// System.Data.SqlTypes.SqlDecimal
struct SqlDecimal_t2E3764DA58ABCDADAC6F390C24C8273EF87AA54B 
{
public:
	// System.Byte System.Data.SqlTypes.SqlDecimal::_bStatus
	uint8_t ____bStatus_0;
	// System.Byte System.Data.SqlTypes.SqlDecimal::_bLen
	uint8_t ____bLen_1;
	// System.Byte System.Data.SqlTypes.SqlDecimal::_bPrec
	uint8_t ____bPrec_2;
	// System.Byte System.Data.SqlTypes.SqlDecimal::_bScale
	uint8_t ____bScale_3;
	// System.UInt32 System.Data.SqlTypes.SqlDecimal::_data1
	uint32_t ____data1_4;
	// System.UInt32 System.Data.SqlTypes.SqlDecimal::_data2
	uint32_t ____data2_5;
	// System.UInt32 System.Data.SqlTypes.SqlDecimal::_data3
	uint32_t ____data3_6;
	// System.UInt32 System.Data.SqlTypes.SqlDecimal::_data4
	uint32_t ____data4_7;

public:
	inline static int32_t get_offset_of__bStatus_0() { return static_cast<int32_t>(offsetof(SqlDecimal_t2E3764DA58ABCDADAC6F390C24C8273EF87AA54B, ____bStatus_0)); }
	inline uint8_t get__bStatus_0() const { return ____bStatus_0; }
	inline uint8_t* get_address_of__bStatus_0() { return &____bStatus_0; }
	inline void set__bStatus_0(uint8_t value)
	{
		____bStatus_0 = value;
	}

	inline static int32_t get_offset_of__bLen_1() { return static_cast<int32_t>(offsetof(SqlDecimal_t2E3764DA58ABCDADAC6F390C24C8273EF87AA54B, ____bLen_1)); }
	inline uint8_t get__bLen_1() const { return ____bLen_1; }
	inline uint8_t* get_address_of__bLen_1() { return &____bLen_1; }
	inline void set__bLen_1(uint8_t value)
	{
		____bLen_1 = value;
	}

	inline static int32_t get_offset_of__bPrec_2() { return static_cast<int32_t>(offsetof(SqlDecimal_t2E3764DA58ABCDADAC6F390C24C8273EF87AA54B, ____bPrec_2)); }
	inline uint8_t get__bPrec_2() const { return ____bPrec_2; }
	inline uint8_t* get_address_of__bPrec_2() { return &____bPrec_2; }
	inline void set__bPrec_2(uint8_t value)
	{
		____bPrec_2 = value;
	}

	inline static int32_t get_offset_of__bScale_3() { return static_cast<int32_t>(offsetof(SqlDecimal_t2E3764DA58ABCDADAC6F390C24C8273EF87AA54B, ____bScale_3)); }
	inline uint8_t get__bScale_3() const { return ____bScale_3; }
	inline uint8_t* get_address_of__bScale_3() { return &____bScale_3; }
	inline void set__bScale_3(uint8_t value)
	{
		____bScale_3 = value;
	}

	inline static int32_t get_offset_of__data1_4() { return static_cast<int32_t>(offsetof(SqlDecimal_t2E3764DA58ABCDADAC6F390C24C8273EF87AA54B, ____data1_4)); }
	inline uint32_t get__data1_4() const { return ____data1_4; }
	inline uint32_t* get_address_of__data1_4() { return &____data1_4; }
	inline void set__data1_4(uint32_t value)
	{
		____data1_4 = value;
	}

	inline static int32_t get_offset_of__data2_5() { return static_cast<int32_t>(offsetof(SqlDecimal_t2E3764DA58ABCDADAC6F390C24C8273EF87AA54B, ____data2_5)); }
	inline uint32_t get__data2_5() const { return ____data2_5; }
	inline uint32_t* get_address_of__data2_5() { return &____data2_5; }
	inline void set__data2_5(uint32_t value)
	{
		____data2_5 = value;
	}

	inline static int32_t get_offset_of__data3_6() { return static_cast<int32_t>(offsetof(SqlDecimal_t2E3764DA58ABCDADAC6F390C24C8273EF87AA54B, ____data3_6)); }
	inline uint32_t get__data3_6() const { return ____data3_6; }
	inline uint32_t* get_address_of__data3_6() { return &____data3_6; }
	inline void set__data3_6(uint32_t value)
	{
		____data3_6 = value;
	}

	inline static int32_t get_offset_of__data4_7() { return static_cast<int32_t>(offsetof(SqlDecimal_t2E3764DA58ABCDADAC6F390C24C8273EF87AA54B, ____data4_7)); }
	inline uint32_t get__data4_7() const { return ____data4_7; }
	inline uint32_t* get_address_of__data4_7() { return &____data4_7; }
	inline void set__data4_7(uint32_t value)
	{
		____data4_7 = value;
	}
};

struct SqlDecimal_t2E3764DA58ABCDADAC6F390C24C8273EF87AA54B_StaticFields
{
public:
	// System.Byte System.Data.SqlTypes.SqlDecimal::s_NUMERIC_MAX_PRECISION
	uint8_t ___s_NUMERIC_MAX_PRECISION_8;
	// System.Byte System.Data.SqlTypes.SqlDecimal::MaxPrecision
	uint8_t ___MaxPrecision_9;
	// System.Byte System.Data.SqlTypes.SqlDecimal::MaxScale
	uint8_t ___MaxScale_10;
	// System.Byte System.Data.SqlTypes.SqlDecimal::s_bNullMask
	uint8_t ___s_bNullMask_11;
	// System.Byte System.Data.SqlTypes.SqlDecimal::s_bIsNull
	uint8_t ___s_bIsNull_12;
	// System.Byte System.Data.SqlTypes.SqlDecimal::s_bNotNull
	uint8_t ___s_bNotNull_13;
	// System.Byte System.Data.SqlTypes.SqlDecimal::s_bReverseNullMask
	uint8_t ___s_bReverseNullMask_14;
	// System.Byte System.Data.SqlTypes.SqlDecimal::s_bSignMask
	uint8_t ___s_bSignMask_15;
	// System.Byte System.Data.SqlTypes.SqlDecimal::s_bPositive
	uint8_t ___s_bPositive_16;
	// System.Byte System.Data.SqlTypes.SqlDecimal::s_bNegative
	uint8_t ___s_bNegative_17;
	// System.Byte System.Data.SqlTypes.SqlDecimal::s_bReverseSignMask
	uint8_t ___s_bReverseSignMask_18;
	// System.UInt32 System.Data.SqlTypes.SqlDecimal::s_uiZero
	uint32_t ___s_uiZero_19;
	// System.Int32 System.Data.SqlTypes.SqlDecimal::s_cNumeMax
	int32_t ___s_cNumeMax_20;
	// System.Int64 System.Data.SqlTypes.SqlDecimal::s_lInt32Base
	int64_t ___s_lInt32Base_21;
	// System.UInt64 System.Data.SqlTypes.SqlDecimal::s_ulInt32Base
	uint64_t ___s_ulInt32Base_22;
	// System.UInt64 System.Data.SqlTypes.SqlDecimal::s_ulInt32BaseForMod
	uint64_t ___s_ulInt32BaseForMod_23;
	// System.UInt64 System.Data.SqlTypes.SqlDecimal::s_llMax
	uint64_t ___s_llMax_24;
	// System.UInt32 System.Data.SqlTypes.SqlDecimal::s_ulBase10
	uint32_t ___s_ulBase10_25;
	// System.Double System.Data.SqlTypes.SqlDecimal::s_DUINT_BASE
	double ___s_DUINT_BASE_26;
	// System.Double System.Data.SqlTypes.SqlDecimal::s_DUINT_BASE2
	double ___s_DUINT_BASE2_27;
	// System.Double System.Data.SqlTypes.SqlDecimal::s_DUINT_BASE3
	double ___s_DUINT_BASE3_28;
	// System.Double System.Data.SqlTypes.SqlDecimal::s_DMAX_NUME
	double ___s_DMAX_NUME_29;
	// System.UInt32 System.Data.SqlTypes.SqlDecimal::s_DBL_DIG
	uint32_t ___s_DBL_DIG_30;
	// System.Byte System.Data.SqlTypes.SqlDecimal::s_cNumeDivScaleMin
	uint8_t ___s_cNumeDivScaleMin_31;
	// System.UInt32[] System.Data.SqlTypes.SqlDecimal::s_rgulShiftBase
	UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* ___s_rgulShiftBase_32;
	// System.UInt32[] System.Data.SqlTypes.SqlDecimal::s_decimalHelpersLo
	UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* ___s_decimalHelpersLo_33;
	// System.UInt32[] System.Data.SqlTypes.SqlDecimal::s_decimalHelpersMid
	UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* ___s_decimalHelpersMid_34;
	// System.UInt32[] System.Data.SqlTypes.SqlDecimal::s_decimalHelpersHi
	UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* ___s_decimalHelpersHi_35;
	// System.UInt32[] System.Data.SqlTypes.SqlDecimal::s_decimalHelpersHiHi
	UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* ___s_decimalHelpersHiHi_36;
	// System.Byte[] System.Data.SqlTypes.SqlDecimal::s_rgCLenFromPrec
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___s_rgCLenFromPrec_37;
	// System.UInt32 System.Data.SqlTypes.SqlDecimal::s_ulT1
	uint32_t ___s_ulT1_38;
	// System.UInt32 System.Data.SqlTypes.SqlDecimal::s_ulT2
	uint32_t ___s_ulT2_39;
	// System.UInt32 System.Data.SqlTypes.SqlDecimal::s_ulT3
	uint32_t ___s_ulT3_40;
	// System.UInt32 System.Data.SqlTypes.SqlDecimal::s_ulT4
	uint32_t ___s_ulT4_41;
	// System.UInt32 System.Data.SqlTypes.SqlDecimal::s_ulT5
	uint32_t ___s_ulT5_42;
	// System.UInt32 System.Data.SqlTypes.SqlDecimal::s_ulT6
	uint32_t ___s_ulT6_43;
	// System.UInt32 System.Data.SqlTypes.SqlDecimal::s_ulT7
	uint32_t ___s_ulT7_44;
	// System.UInt32 System.Data.SqlTypes.SqlDecimal::s_ulT8
	uint32_t ___s_ulT8_45;
	// System.UInt32 System.Data.SqlTypes.SqlDecimal::s_ulT9
	uint32_t ___s_ulT9_46;
	// System.UInt64 System.Data.SqlTypes.SqlDecimal::s_dwlT10
	uint64_t ___s_dwlT10_47;
	// System.UInt64 System.Data.SqlTypes.SqlDecimal::s_dwlT11
	uint64_t ___s_dwlT11_48;
	// System.UInt64 System.Data.SqlTypes.SqlDecimal::s_dwlT12
	uint64_t ___s_dwlT12_49;
	// System.UInt64 System.Data.SqlTypes.SqlDecimal::s_dwlT13
	uint64_t ___s_dwlT13_50;
	// System.UInt64 System.Data.SqlTypes.SqlDecimal::s_dwlT14
	uint64_t ___s_dwlT14_51;
	// System.UInt64 System.Data.SqlTypes.SqlDecimal::s_dwlT15
	uint64_t ___s_dwlT15_52;
	// System.UInt64 System.Data.SqlTypes.SqlDecimal::s_dwlT16
	uint64_t ___s_dwlT16_53;
	// System.UInt64 System.Data.SqlTypes.SqlDecimal::s_dwlT17
	uint64_t ___s_dwlT17_54;
	// System.UInt64 System.Data.SqlTypes.SqlDecimal::s_dwlT18
	uint64_t ___s_dwlT18_55;
	// System.UInt64 System.Data.SqlTypes.SqlDecimal::s_dwlT19
	uint64_t ___s_dwlT19_56;
	// System.Data.SqlTypes.SqlDecimal System.Data.SqlTypes.SqlDecimal::Null
	SqlDecimal_t2E3764DA58ABCDADAC6F390C24C8273EF87AA54B  ___Null_57;
	// System.Data.SqlTypes.SqlDecimal System.Data.SqlTypes.SqlDecimal::MinValue
	SqlDecimal_t2E3764DA58ABCDADAC6F390C24C8273EF87AA54B  ___MinValue_58;
	// System.Data.SqlTypes.SqlDecimal System.Data.SqlTypes.SqlDecimal::MaxValue
	SqlDecimal_t2E3764DA58ABCDADAC6F390C24C8273EF87AA54B  ___MaxValue_59;

public:
	inline static int32_t get_offset_of_s_NUMERIC_MAX_PRECISION_8() { return static_cast<int32_t>(offsetof(SqlDecimal_t2E3764DA58ABCDADAC6F390C24C8273EF87AA54B_StaticFields, ___s_NUMERIC_MAX_PRECISION_8)); }
	inline uint8_t get_s_NUMERIC_MAX_PRECISION_8() const { return ___s_NUMERIC_MAX_PRECISION_8; }
	inline uint8_t* get_address_of_s_NUMERIC_MAX_PRECISION_8() { return &___s_NUMERIC_MAX_PRECISION_8; }
	inline void set_s_NUMERIC_MAX_PRECISION_8(uint8_t value)
	{
		___s_NUMERIC_MAX_PRECISION_8 = value;
	}

	inline static int32_t get_offset_of_MaxPrecision_9() { return static_cast<int32_t>(offsetof(SqlDecimal_t2E3764DA58ABCDADAC6F390C24C8273EF87AA54B_StaticFields, ___MaxPrecision_9)); }
	inline uint8_t get_MaxPrecision_9() const { return ___MaxPrecision_9; }
	inline uint8_t* get_address_of_MaxPrecision_9() { return &___MaxPrecision_9; }
	inline void set_MaxPrecision_9(uint8_t value)
	{
		___MaxPrecision_9 = value;
	}

	inline static int32_t get_offset_of_MaxScale_10() { return static_cast<int32_t>(offsetof(SqlDecimal_t2E3764DA58ABCDADAC6F390C24C8273EF87AA54B_StaticFields, ___MaxScale_10)); }
	inline uint8_t get_MaxScale_10() const { return ___MaxScale_10; }
	inline uint8_t* get_address_of_MaxScale_10() { return &___MaxScale_10; }
	inline void set_MaxScale_10(uint8_t value)
	{
		___MaxScale_10 = value;
	}

	inline static int32_t get_offset_of_s_bNullMask_11() { return static_cast<int32_t>(offsetof(SqlDecimal_t2E3764DA58ABCDADAC6F390C24C8273EF87AA54B_StaticFields, ___s_bNullMask_11)); }
	inline uint8_t get_s_bNullMask_11() const { return ___s_bNullMask_11; }
	inline uint8_t* get_address_of_s_bNullMask_11() { return &___s_bNullMask_11; }
	inline void set_s_bNullMask_11(uint8_t value)
	{
		___s_bNullMask_11 = value;
	}

	inline static int32_t get_offset_of_s_bIsNull_12() { return static_cast<int32_t>(offsetof(SqlDecimal_t2E3764DA58ABCDADAC6F390C24C8273EF87AA54B_StaticFields, ___s_bIsNull_12)); }
	inline uint8_t get_s_bIsNull_12() const { return ___s_bIsNull_12; }
	inline uint8_t* get_address_of_s_bIsNull_12() { return &___s_bIsNull_12; }
	inline void set_s_bIsNull_12(uint8_t value)
	{
		___s_bIsNull_12 = value;
	}

	inline static int32_t get_offset_of_s_bNotNull_13() { return static_cast<int32_t>(offsetof(SqlDecimal_t2E3764DA58ABCDADAC6F390C24C8273EF87AA54B_StaticFields, ___s_bNotNull_13)); }
	inline uint8_t get_s_bNotNull_13() const { return ___s_bNotNull_13; }
	inline uint8_t* get_address_of_s_bNotNull_13() { return &___s_bNotNull_13; }
	inline void set_s_bNotNull_13(uint8_t value)
	{
		___s_bNotNull_13 = value;
	}

	inline static int32_t get_offset_of_s_bReverseNullMask_14() { return static_cast<int32_t>(offsetof(SqlDecimal_t2E3764DA58ABCDADAC6F390C24C8273EF87AA54B_StaticFields, ___s_bReverseNullMask_14)); }
	inline uint8_t get_s_bReverseNullMask_14() const { return ___s_bReverseNullMask_14; }
	inline uint8_t* get_address_of_s_bReverseNullMask_14() { return &___s_bReverseNullMask_14; }
	inline void set_s_bReverseNullMask_14(uint8_t value)
	{
		___s_bReverseNullMask_14 = value;
	}

	inline static int32_t get_offset_of_s_bSignMask_15() { return static_cast<int32_t>(offsetof(SqlDecimal_t2E3764DA58ABCDADAC6F390C24C8273EF87AA54B_StaticFields, ___s_bSignMask_15)); }
	inline uint8_t get_s_bSignMask_15() const { return ___s_bSignMask_15; }
	inline uint8_t* get_address_of_s_bSignMask_15() { return &___s_bSignMask_15; }
	inline void set_s_bSignMask_15(uint8_t value)
	{
		___s_bSignMask_15 = value;
	}

	inline static int32_t get_offset_of_s_bPositive_16() { return static_cast<int32_t>(offsetof(SqlDecimal_t2E3764DA58ABCDADAC6F390C24C8273EF87AA54B_StaticFields, ___s_bPositive_16)); }
	inline uint8_t get_s_bPositive_16() const { return ___s_bPositive_16; }
	inline uint8_t* get_address_of_s_bPositive_16() { return &___s_bPositive_16; }
	inline void set_s_bPositive_16(uint8_t value)
	{
		___s_bPositive_16 = value;
	}

	inline static int32_t get_offset_of_s_bNegative_17() { return static_cast<int32_t>(offsetof(SqlDecimal_t2E3764DA58ABCDADAC6F390C24C8273EF87AA54B_StaticFields, ___s_bNegative_17)); }
	inline uint8_t get_s_bNegative_17() const { return ___s_bNegative_17; }
	inline uint8_t* get_address_of_s_bNegative_17() { return &___s_bNegative_17; }
	inline void set_s_bNegative_17(uint8_t value)
	{
		___s_bNegative_17 = value;
	}

	inline static int32_t get_offset_of_s_bReverseSignMask_18() { return static_cast<int32_t>(offsetof(SqlDecimal_t2E3764DA58ABCDADAC6F390C24C8273EF87AA54B_StaticFields, ___s_bReverseSignMask_18)); }
	inline uint8_t get_s_bReverseSignMask_18() const { return ___s_bReverseSignMask_18; }
	inline uint8_t* get_address_of_s_bReverseSignMask_18() { return &___s_bReverseSignMask_18; }
	inline void set_s_bReverseSignMask_18(uint8_t value)
	{
		___s_bReverseSignMask_18 = value;
	}

	inline static int32_t get_offset_of_s_uiZero_19() { return static_cast<int32_t>(offsetof(SqlDecimal_t2E3764DA58ABCDADAC6F390C24C8273EF87AA54B_StaticFields, ___s_uiZero_19)); }
	inline uint32_t get_s_uiZero_19() const { return ___s_uiZero_19; }
	inline uint32_t* get_address_of_s_uiZero_19() { return &___s_uiZero_19; }
	inline void set_s_uiZero_19(uint32_t value)
	{
		___s_uiZero_19 = value;
	}

	inline static int32_t get_offset_of_s_cNumeMax_20() { return static_cast<int32_t>(offsetof(SqlDecimal_t2E3764DA58ABCDADAC6F390C24C8273EF87AA54B_StaticFields, ___s_cNumeMax_20)); }
	inline int32_t get_s_cNumeMax_20() const { return ___s_cNumeMax_20; }
	inline int32_t* get_address_of_s_cNumeMax_20() { return &___s_cNumeMax_20; }
	inline void set_s_cNumeMax_20(int32_t value)
	{
		___s_cNumeMax_20 = value;
	}

	inline static int32_t get_offset_of_s_lInt32Base_21() { return static_cast<int32_t>(offsetof(SqlDecimal_t2E3764DA58ABCDADAC6F390C24C8273EF87AA54B_StaticFields, ___s_lInt32Base_21)); }
	inline int64_t get_s_lInt32Base_21() const { return ___s_lInt32Base_21; }
	inline int64_t* get_address_of_s_lInt32Base_21() { return &___s_lInt32Base_21; }
	inline void set_s_lInt32Base_21(int64_t value)
	{
		___s_lInt32Base_21 = value;
	}

	inline static int32_t get_offset_of_s_ulInt32Base_22() { return static_cast<int32_t>(offsetof(SqlDecimal_t2E3764DA58ABCDADAC6F390C24C8273EF87AA54B_StaticFields, ___s_ulInt32Base_22)); }
	inline uint64_t get_s_ulInt32Base_22() const { return ___s_ulInt32Base_22; }
	inline uint64_t* get_address_of_s_ulInt32Base_22() { return &___s_ulInt32Base_22; }
	inline void set_s_ulInt32Base_22(uint64_t value)
	{
		___s_ulInt32Base_22 = value;
	}

	inline static int32_t get_offset_of_s_ulInt32BaseForMod_23() { return static_cast<int32_t>(offsetof(SqlDecimal_t2E3764DA58ABCDADAC6F390C24C8273EF87AA54B_StaticFields, ___s_ulInt32BaseForMod_23)); }
	inline uint64_t get_s_ulInt32BaseForMod_23() const { return ___s_ulInt32BaseForMod_23; }
	inline uint64_t* get_address_of_s_ulInt32BaseForMod_23() { return &___s_ulInt32BaseForMod_23; }
	inline void set_s_ulInt32BaseForMod_23(uint64_t value)
	{
		___s_ulInt32BaseForMod_23 = value;
	}

	inline static int32_t get_offset_of_s_llMax_24() { return static_cast<int32_t>(offsetof(SqlDecimal_t2E3764DA58ABCDADAC6F390C24C8273EF87AA54B_StaticFields, ___s_llMax_24)); }
	inline uint64_t get_s_llMax_24() const { return ___s_llMax_24; }
	inline uint64_t* get_address_of_s_llMax_24() { return &___s_llMax_24; }
	inline void set_s_llMax_24(uint64_t value)
	{
		___s_llMax_24 = value;
	}

	inline static int32_t get_offset_of_s_ulBase10_25() { return static_cast<int32_t>(offsetof(SqlDecimal_t2E3764DA58ABCDADAC6F390C24C8273EF87AA54B_StaticFields, ___s_ulBase10_25)); }
	inline uint32_t get_s_ulBase10_25() const { return ___s_ulBase10_25; }
	inline uint32_t* get_address_of_s_ulBase10_25() { return &___s_ulBase10_25; }
	inline void set_s_ulBase10_25(uint32_t value)
	{
		___s_ulBase10_25 = value;
	}

	inline static int32_t get_offset_of_s_DUINT_BASE_26() { return static_cast<int32_t>(offsetof(SqlDecimal_t2E3764DA58ABCDADAC6F390C24C8273EF87AA54B_StaticFields, ___s_DUINT_BASE_26)); }
	inline double get_s_DUINT_BASE_26() const { return ___s_DUINT_BASE_26; }
	inline double* get_address_of_s_DUINT_BASE_26() { return &___s_DUINT_BASE_26; }
	inline void set_s_DUINT_BASE_26(double value)
	{
		___s_DUINT_BASE_26 = value;
	}

	inline static int32_t get_offset_of_s_DUINT_BASE2_27() { return static_cast<int32_t>(offsetof(SqlDecimal_t2E3764DA58ABCDADAC6F390C24C8273EF87AA54B_StaticFields, ___s_DUINT_BASE2_27)); }
	inline double get_s_DUINT_BASE2_27() const { return ___s_DUINT_BASE2_27; }
	inline double* get_address_of_s_DUINT_BASE2_27() { return &___s_DUINT_BASE2_27; }
	inline void set_s_DUINT_BASE2_27(double value)
	{
		___s_DUINT_BASE2_27 = value;
	}

	inline static int32_t get_offset_of_s_DUINT_BASE3_28() { return static_cast<int32_t>(offsetof(SqlDecimal_t2E3764DA58ABCDADAC6F390C24C8273EF87AA54B_StaticFields, ___s_DUINT_BASE3_28)); }
	inline double get_s_DUINT_BASE3_28() const { return ___s_DUINT_BASE3_28; }
	inline double* get_address_of_s_DUINT_BASE3_28() { return &___s_DUINT_BASE3_28; }
	inline void set_s_DUINT_BASE3_28(double value)
	{
		___s_DUINT_BASE3_28 = value;
	}

	inline static int32_t get_offset_of_s_DMAX_NUME_29() { return static_cast<int32_t>(offsetof(SqlDecimal_t2E3764DA58ABCDADAC6F390C24C8273EF87AA54B_StaticFields, ___s_DMAX_NUME_29)); }
	inline double get_s_DMAX_NUME_29() const { return ___s_DMAX_NUME_29; }
	inline double* get_address_of_s_DMAX_NUME_29() { return &___s_DMAX_NUME_29; }
	inline void set_s_DMAX_NUME_29(double value)
	{
		___s_DMAX_NUME_29 = value;
	}

	inline static int32_t get_offset_of_s_DBL_DIG_30() { return static_cast<int32_t>(offsetof(SqlDecimal_t2E3764DA58ABCDADAC6F390C24C8273EF87AA54B_StaticFields, ___s_DBL_DIG_30)); }
	inline uint32_t get_s_DBL_DIG_30() const { return ___s_DBL_DIG_30; }
	inline uint32_t* get_address_of_s_DBL_DIG_30() { return &___s_DBL_DIG_30; }
	inline void set_s_DBL_DIG_30(uint32_t value)
	{
		___s_DBL_DIG_30 = value;
	}

	inline static int32_t get_offset_of_s_cNumeDivScaleMin_31() { return static_cast<int32_t>(offsetof(SqlDecimal_t2E3764DA58ABCDADAC6F390C24C8273EF87AA54B_StaticFields, ___s_cNumeDivScaleMin_31)); }
	inline uint8_t get_s_cNumeDivScaleMin_31() const { return ___s_cNumeDivScaleMin_31; }
	inline uint8_t* get_address_of_s_cNumeDivScaleMin_31() { return &___s_cNumeDivScaleMin_31; }
	inline void set_s_cNumeDivScaleMin_31(uint8_t value)
	{
		___s_cNumeDivScaleMin_31 = value;
	}

	inline static int32_t get_offset_of_s_rgulShiftBase_32() { return static_cast<int32_t>(offsetof(SqlDecimal_t2E3764DA58ABCDADAC6F390C24C8273EF87AA54B_StaticFields, ___s_rgulShiftBase_32)); }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* get_s_rgulShiftBase_32() const { return ___s_rgulShiftBase_32; }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF** get_address_of_s_rgulShiftBase_32() { return &___s_rgulShiftBase_32; }
	inline void set_s_rgulShiftBase_32(UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* value)
	{
		___s_rgulShiftBase_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_rgulShiftBase_32), (void*)value);
	}

	inline static int32_t get_offset_of_s_decimalHelpersLo_33() { return static_cast<int32_t>(offsetof(SqlDecimal_t2E3764DA58ABCDADAC6F390C24C8273EF87AA54B_StaticFields, ___s_decimalHelpersLo_33)); }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* get_s_decimalHelpersLo_33() const { return ___s_decimalHelpersLo_33; }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF** get_address_of_s_decimalHelpersLo_33() { return &___s_decimalHelpersLo_33; }
	inline void set_s_decimalHelpersLo_33(UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* value)
	{
		___s_decimalHelpersLo_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_decimalHelpersLo_33), (void*)value);
	}

	inline static int32_t get_offset_of_s_decimalHelpersMid_34() { return static_cast<int32_t>(offsetof(SqlDecimal_t2E3764DA58ABCDADAC6F390C24C8273EF87AA54B_StaticFields, ___s_decimalHelpersMid_34)); }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* get_s_decimalHelpersMid_34() const { return ___s_decimalHelpersMid_34; }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF** get_address_of_s_decimalHelpersMid_34() { return &___s_decimalHelpersMid_34; }
	inline void set_s_decimalHelpersMid_34(UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* value)
	{
		___s_decimalHelpersMid_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_decimalHelpersMid_34), (void*)value);
	}

	inline static int32_t get_offset_of_s_decimalHelpersHi_35() { return static_cast<int32_t>(offsetof(SqlDecimal_t2E3764DA58ABCDADAC6F390C24C8273EF87AA54B_StaticFields, ___s_decimalHelpersHi_35)); }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* get_s_decimalHelpersHi_35() const { return ___s_decimalHelpersHi_35; }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF** get_address_of_s_decimalHelpersHi_35() { return &___s_decimalHelpersHi_35; }
	inline void set_s_decimalHelpersHi_35(UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* value)
	{
		___s_decimalHelpersHi_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_decimalHelpersHi_35), (void*)value);
	}

	inline static int32_t get_offset_of_s_decimalHelpersHiHi_36() { return static_cast<int32_t>(offsetof(SqlDecimal_t2E3764DA58ABCDADAC6F390C24C8273EF87AA54B_StaticFields, ___s_decimalHelpersHiHi_36)); }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* get_s_decimalHelpersHiHi_36() const { return ___s_decimalHelpersHiHi_36; }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF** get_address_of_s_decimalHelpersHiHi_36() { return &___s_decimalHelpersHiHi_36; }
	inline void set_s_decimalHelpersHiHi_36(UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* value)
	{
		___s_decimalHelpersHiHi_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_decimalHelpersHiHi_36), (void*)value);
	}

	inline static int32_t get_offset_of_s_rgCLenFromPrec_37() { return static_cast<int32_t>(offsetof(SqlDecimal_t2E3764DA58ABCDADAC6F390C24C8273EF87AA54B_StaticFields, ___s_rgCLenFromPrec_37)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_s_rgCLenFromPrec_37() const { return ___s_rgCLenFromPrec_37; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_s_rgCLenFromPrec_37() { return &___s_rgCLenFromPrec_37; }
	inline void set_s_rgCLenFromPrec_37(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___s_rgCLenFromPrec_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_rgCLenFromPrec_37), (void*)value);
	}

	inline static int32_t get_offset_of_s_ulT1_38() { return static_cast<int32_t>(offsetof(SqlDecimal_t2E3764DA58ABCDADAC6F390C24C8273EF87AA54B_StaticFields, ___s_ulT1_38)); }
	inline uint32_t get_s_ulT1_38() const { return ___s_ulT1_38; }
	inline uint32_t* get_address_of_s_ulT1_38() { return &___s_ulT1_38; }
	inline void set_s_ulT1_38(uint32_t value)
	{
		___s_ulT1_38 = value;
	}

	inline static int32_t get_offset_of_s_ulT2_39() { return static_cast<int32_t>(offsetof(SqlDecimal_t2E3764DA58ABCDADAC6F390C24C8273EF87AA54B_StaticFields, ___s_ulT2_39)); }
	inline uint32_t get_s_ulT2_39() const { return ___s_ulT2_39; }
	inline uint32_t* get_address_of_s_ulT2_39() { return &___s_ulT2_39; }
	inline void set_s_ulT2_39(uint32_t value)
	{
		___s_ulT2_39 = value;
	}

	inline static int32_t get_offset_of_s_ulT3_40() { return static_cast<int32_t>(offsetof(SqlDecimal_t2E3764DA58ABCDADAC6F390C24C8273EF87AA54B_StaticFields, ___s_ulT3_40)); }
	inline uint32_t get_s_ulT3_40() const { return ___s_ulT3_40; }
	inline uint32_t* get_address_of_s_ulT3_40() { return &___s_ulT3_40; }
	inline void set_s_ulT3_40(uint32_t value)
	{
		___s_ulT3_40 = value;
	}

	inline static int32_t get_offset_of_s_ulT4_41() { return static_cast<int32_t>(offsetof(SqlDecimal_t2E3764DA58ABCDADAC6F390C24C8273EF87AA54B_StaticFields, ___s_ulT4_41)); }
	inline uint32_t get_s_ulT4_41() const { return ___s_ulT4_41; }
	inline uint32_t* get_address_of_s_ulT4_41() { return &___s_ulT4_41; }
	inline void set_s_ulT4_41(uint32_t value)
	{
		___s_ulT4_41 = value;
	}

	inline static int32_t get_offset_of_s_ulT5_42() { return static_cast<int32_t>(offsetof(SqlDecimal_t2E3764DA58ABCDADAC6F390C24C8273EF87AA54B_StaticFields, ___s_ulT5_42)); }
	inline uint32_t get_s_ulT5_42() const { return ___s_ulT5_42; }
	inline uint32_t* get_address_of_s_ulT5_42() { return &___s_ulT5_42; }
	inline void set_s_ulT5_42(uint32_t value)
	{
		___s_ulT5_42 = value;
	}

	inline static int32_t get_offset_of_s_ulT6_43() { return static_cast<int32_t>(offsetof(SqlDecimal_t2E3764DA58ABCDADAC6F390C24C8273EF87AA54B_StaticFields, ___s_ulT6_43)); }
	inline uint32_t get_s_ulT6_43() const { return ___s_ulT6_43; }
	inline uint32_t* get_address_of_s_ulT6_43() { return &___s_ulT6_43; }
	inline void set_s_ulT6_43(uint32_t value)
	{
		___s_ulT6_43 = value;
	}

	inline static int32_t get_offset_of_s_ulT7_44() { return static_cast<int32_t>(offsetof(SqlDecimal_t2E3764DA58ABCDADAC6F390C24C8273EF87AA54B_StaticFields, ___s_ulT7_44)); }
	inline uint32_t get_s_ulT7_44() const { return ___s_ulT7_44; }
	inline uint32_t* get_address_of_s_ulT7_44() { return &___s_ulT7_44; }
	inline void set_s_ulT7_44(uint32_t value)
	{
		___s_ulT7_44 = value;
	}

	inline static int32_t get_offset_of_s_ulT8_45() { return static_cast<int32_t>(offsetof(SqlDecimal_t2E3764DA58ABCDADAC6F390C24C8273EF87AA54B_StaticFields, ___s_ulT8_45)); }
	inline uint32_t get_s_ulT8_45() const { return ___s_ulT8_45; }
	inline uint32_t* get_address_of_s_ulT8_45() { return &___s_ulT8_45; }
	inline void set_s_ulT8_45(uint32_t value)
	{
		___s_ulT8_45 = value;
	}

	inline static int32_t get_offset_of_s_ulT9_46() { return static_cast<int32_t>(offsetof(SqlDecimal_t2E3764DA58ABCDADAC6F390C24C8273EF87AA54B_StaticFields, ___s_ulT9_46)); }
	inline uint32_t get_s_ulT9_46() const { return ___s_ulT9_46; }
	inline uint32_t* get_address_of_s_ulT9_46() { return &___s_ulT9_46; }
	inline void set_s_ulT9_46(uint32_t value)
	{
		___s_ulT9_46 = value;
	}

	inline static int32_t get_offset_of_s_dwlT10_47() { return static_cast<int32_t>(offsetof(SqlDecimal_t2E3764DA58ABCDADAC6F390C24C8273EF87AA54B_StaticFields, ___s_dwlT10_47)); }
	inline uint64_t get_s_dwlT10_47() const { return ___s_dwlT10_47; }
	inline uint64_t* get_address_of_s_dwlT10_47() { return &___s_dwlT10_47; }
	inline void set_s_dwlT10_47(uint64_t value)
	{
		___s_dwlT10_47 = value;
	}

	inline static int32_t get_offset_of_s_dwlT11_48() { return static_cast<int32_t>(offsetof(SqlDecimal_t2E3764DA58ABCDADAC6F390C24C8273EF87AA54B_StaticFields, ___s_dwlT11_48)); }
	inline uint64_t get_s_dwlT11_48() const { return ___s_dwlT11_48; }
	inline uint64_t* get_address_of_s_dwlT11_48() { return &___s_dwlT11_48; }
	inline void set_s_dwlT11_48(uint64_t value)
	{
		___s_dwlT11_48 = value;
	}

	inline static int32_t get_offset_of_s_dwlT12_49() { return static_cast<int32_t>(offsetof(SqlDecimal_t2E3764DA58ABCDADAC6F390C24C8273EF87AA54B_StaticFields, ___s_dwlT12_49)); }
	inline uint64_t get_s_dwlT12_49() const { return ___s_dwlT12_49; }
	inline uint64_t* get_address_of_s_dwlT12_49() { return &___s_dwlT12_49; }
	inline void set_s_dwlT12_49(uint64_t value)
	{
		___s_dwlT12_49 = value;
	}

	inline static int32_t get_offset_of_s_dwlT13_50() { return static_cast<int32_t>(offsetof(SqlDecimal_t2E3764DA58ABCDADAC6F390C24C8273EF87AA54B_StaticFields, ___s_dwlT13_50)); }
	inline uint64_t get_s_dwlT13_50() const { return ___s_dwlT13_50; }
	inline uint64_t* get_address_of_s_dwlT13_50() { return &___s_dwlT13_50; }
	inline void set_s_dwlT13_50(uint64_t value)
	{
		___s_dwlT13_50 = value;
	}

	inline static int32_t get_offset_of_s_dwlT14_51() { return static_cast<int32_t>(offsetof(SqlDecimal_t2E3764DA58ABCDADAC6F390C24C8273EF87AA54B_StaticFields, ___s_dwlT14_51)); }
	inline uint64_t get_s_dwlT14_51() const { return ___s_dwlT14_51; }
	inline uint64_t* get_address_of_s_dwlT14_51() { return &___s_dwlT14_51; }
	inline void set_s_dwlT14_51(uint64_t value)
	{
		___s_dwlT14_51 = value;
	}

	inline static int32_t get_offset_of_s_dwlT15_52() { return static_cast<int32_t>(offsetof(SqlDecimal_t2E3764DA58ABCDADAC6F390C24C8273EF87AA54B_StaticFields, ___s_dwlT15_52)); }
	inline uint64_t get_s_dwlT15_52() const { return ___s_dwlT15_52; }
	inline uint64_t* get_address_of_s_dwlT15_52() { return &___s_dwlT15_52; }
	inline void set_s_dwlT15_52(uint64_t value)
	{
		___s_dwlT15_52 = value;
	}

	inline static int32_t get_offset_of_s_dwlT16_53() { return static_cast<int32_t>(offsetof(SqlDecimal_t2E3764DA58ABCDADAC6F390C24C8273EF87AA54B_StaticFields, ___s_dwlT16_53)); }
	inline uint64_t get_s_dwlT16_53() const { return ___s_dwlT16_53; }
	inline uint64_t* get_address_of_s_dwlT16_53() { return &___s_dwlT16_53; }
	inline void set_s_dwlT16_53(uint64_t value)
	{
		___s_dwlT16_53 = value;
	}

	inline static int32_t get_offset_of_s_dwlT17_54() { return static_cast<int32_t>(offsetof(SqlDecimal_t2E3764DA58ABCDADAC6F390C24C8273EF87AA54B_StaticFields, ___s_dwlT17_54)); }
	inline uint64_t get_s_dwlT17_54() const { return ___s_dwlT17_54; }
	inline uint64_t* get_address_of_s_dwlT17_54() { return &___s_dwlT17_54; }
	inline void set_s_dwlT17_54(uint64_t value)
	{
		___s_dwlT17_54 = value;
	}

	inline static int32_t get_offset_of_s_dwlT18_55() { return static_cast<int32_t>(offsetof(SqlDecimal_t2E3764DA58ABCDADAC6F390C24C8273EF87AA54B_StaticFields, ___s_dwlT18_55)); }
	inline uint64_t get_s_dwlT18_55() const { return ___s_dwlT18_55; }
	inline uint64_t* get_address_of_s_dwlT18_55() { return &___s_dwlT18_55; }
	inline void set_s_dwlT18_55(uint64_t value)
	{
		___s_dwlT18_55 = value;
	}

	inline static int32_t get_offset_of_s_dwlT19_56() { return static_cast<int32_t>(offsetof(SqlDecimal_t2E3764DA58ABCDADAC6F390C24C8273EF87AA54B_StaticFields, ___s_dwlT19_56)); }
	inline uint64_t get_s_dwlT19_56() const { return ___s_dwlT19_56; }
	inline uint64_t* get_address_of_s_dwlT19_56() { return &___s_dwlT19_56; }
	inline void set_s_dwlT19_56(uint64_t value)
	{
		___s_dwlT19_56 = value;
	}

	inline static int32_t get_offset_of_Null_57() { return static_cast<int32_t>(offsetof(SqlDecimal_t2E3764DA58ABCDADAC6F390C24C8273EF87AA54B_StaticFields, ___Null_57)); }
	inline SqlDecimal_t2E3764DA58ABCDADAC6F390C24C8273EF87AA54B  get_Null_57() const { return ___Null_57; }
	inline SqlDecimal_t2E3764DA58ABCDADAC6F390C24C8273EF87AA54B * get_address_of_Null_57() { return &___Null_57; }
	inline void set_Null_57(SqlDecimal_t2E3764DA58ABCDADAC6F390C24C8273EF87AA54B  value)
	{
		___Null_57 = value;
	}

	inline static int32_t get_offset_of_MinValue_58() { return static_cast<int32_t>(offsetof(SqlDecimal_t2E3764DA58ABCDADAC6F390C24C8273EF87AA54B_StaticFields, ___MinValue_58)); }
	inline SqlDecimal_t2E3764DA58ABCDADAC6F390C24C8273EF87AA54B  get_MinValue_58() const { return ___MinValue_58; }
	inline SqlDecimal_t2E3764DA58ABCDADAC6F390C24C8273EF87AA54B * get_address_of_MinValue_58() { return &___MinValue_58; }
	inline void set_MinValue_58(SqlDecimal_t2E3764DA58ABCDADAC6F390C24C8273EF87AA54B  value)
	{
		___MinValue_58 = value;
	}

	inline static int32_t get_offset_of_MaxValue_59() { return static_cast<int32_t>(offsetof(SqlDecimal_t2E3764DA58ABCDADAC6F390C24C8273EF87AA54B_StaticFields, ___MaxValue_59)); }
	inline SqlDecimal_t2E3764DA58ABCDADAC6F390C24C8273EF87AA54B  get_MaxValue_59() const { return ___MaxValue_59; }
	inline SqlDecimal_t2E3764DA58ABCDADAC6F390C24C8273EF87AA54B * get_address_of_MaxValue_59() { return &___MaxValue_59; }
	inline void set_MaxValue_59(SqlDecimal_t2E3764DA58ABCDADAC6F390C24C8273EF87AA54B  value)
	{
		___MaxValue_59 = value;
	}
};


// System.Data.SqlTypes.SqlDouble
struct SqlDouble_t0D9EDD6B609690459BDBBB52962B791D3D40B1FA 
{
public:
	// System.Boolean System.Data.SqlTypes.SqlDouble::m_fNotNull
	bool ___m_fNotNull_0;
	// System.Double System.Data.SqlTypes.SqlDouble::m_value
	double ___m_value_1;

public:
	inline static int32_t get_offset_of_m_fNotNull_0() { return static_cast<int32_t>(offsetof(SqlDouble_t0D9EDD6B609690459BDBBB52962B791D3D40B1FA, ___m_fNotNull_0)); }
	inline bool get_m_fNotNull_0() const { return ___m_fNotNull_0; }
	inline bool* get_address_of_m_fNotNull_0() { return &___m_fNotNull_0; }
	inline void set_m_fNotNull_0(bool value)
	{
		___m_fNotNull_0 = value;
	}

	inline static int32_t get_offset_of_m_value_1() { return static_cast<int32_t>(offsetof(SqlDouble_t0D9EDD6B609690459BDBBB52962B791D3D40B1FA, ___m_value_1)); }
	inline double get_m_value_1() const { return ___m_value_1; }
	inline double* get_address_of_m_value_1() { return &___m_value_1; }
	inline void set_m_value_1(double value)
	{
		___m_value_1 = value;
	}
};

struct SqlDouble_t0D9EDD6B609690459BDBBB52962B791D3D40B1FA_StaticFields
{
public:
	// System.Data.SqlTypes.SqlDouble System.Data.SqlTypes.SqlDouble::Null
	SqlDouble_t0D9EDD6B609690459BDBBB52962B791D3D40B1FA  ___Null_2;
	// System.Data.SqlTypes.SqlDouble System.Data.SqlTypes.SqlDouble::Zero
	SqlDouble_t0D9EDD6B609690459BDBBB52962B791D3D40B1FA  ___Zero_3;
	// System.Data.SqlTypes.SqlDouble System.Data.SqlTypes.SqlDouble::MinValue
	SqlDouble_t0D9EDD6B609690459BDBBB52962B791D3D40B1FA  ___MinValue_4;
	// System.Data.SqlTypes.SqlDouble System.Data.SqlTypes.SqlDouble::MaxValue
	SqlDouble_t0D9EDD6B609690459BDBBB52962B791D3D40B1FA  ___MaxValue_5;

public:
	inline static int32_t get_offset_of_Null_2() { return static_cast<int32_t>(offsetof(SqlDouble_t0D9EDD6B609690459BDBBB52962B791D3D40B1FA_StaticFields, ___Null_2)); }
	inline SqlDouble_t0D9EDD6B609690459BDBBB52962B791D3D40B1FA  get_Null_2() const { return ___Null_2; }
	inline SqlDouble_t0D9EDD6B609690459BDBBB52962B791D3D40B1FA * get_address_of_Null_2() { return &___Null_2; }
	inline void set_Null_2(SqlDouble_t0D9EDD6B609690459BDBBB52962B791D3D40B1FA  value)
	{
		___Null_2 = value;
	}

	inline static int32_t get_offset_of_Zero_3() { return static_cast<int32_t>(offsetof(SqlDouble_t0D9EDD6B609690459BDBBB52962B791D3D40B1FA_StaticFields, ___Zero_3)); }
	inline SqlDouble_t0D9EDD6B609690459BDBBB52962B791D3D40B1FA  get_Zero_3() const { return ___Zero_3; }
	inline SqlDouble_t0D9EDD6B609690459BDBBB52962B791D3D40B1FA * get_address_of_Zero_3() { return &___Zero_3; }
	inline void set_Zero_3(SqlDouble_t0D9EDD6B609690459BDBBB52962B791D3D40B1FA  value)
	{
		___Zero_3 = value;
	}

	inline static int32_t get_offset_of_MinValue_4() { return static_cast<int32_t>(offsetof(SqlDouble_t0D9EDD6B609690459BDBBB52962B791D3D40B1FA_StaticFields, ___MinValue_4)); }
	inline SqlDouble_t0D9EDD6B609690459BDBBB52962B791D3D40B1FA  get_MinValue_4() const { return ___MinValue_4; }
	inline SqlDouble_t0D9EDD6B609690459BDBBB52962B791D3D40B1FA * get_address_of_MinValue_4() { return &___MinValue_4; }
	inline void set_MinValue_4(SqlDouble_t0D9EDD6B609690459BDBBB52962B791D3D40B1FA  value)
	{
		___MinValue_4 = value;
	}

	inline static int32_t get_offset_of_MaxValue_5() { return static_cast<int32_t>(offsetof(SqlDouble_t0D9EDD6B609690459BDBBB52962B791D3D40B1FA_StaticFields, ___MaxValue_5)); }
	inline SqlDouble_t0D9EDD6B609690459BDBBB52962B791D3D40B1FA  get_MaxValue_5() const { return ___MaxValue_5; }
	inline SqlDouble_t0D9EDD6B609690459BDBBB52962B791D3D40B1FA * get_address_of_MaxValue_5() { return &___MaxValue_5; }
	inline void set_MaxValue_5(SqlDouble_t0D9EDD6B609690459BDBBB52962B791D3D40B1FA  value)
	{
		___MaxValue_5 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Data.SqlTypes.SqlDouble
struct SqlDouble_t0D9EDD6B609690459BDBBB52962B791D3D40B1FA_marshaled_pinvoke
{
	int32_t ___m_fNotNull_0;
	double ___m_value_1;
};
// Native definition for COM marshalling of System.Data.SqlTypes.SqlDouble
struct SqlDouble_t0D9EDD6B609690459BDBBB52962B791D3D40B1FA_marshaled_com
{
	int32_t ___m_fNotNull_0;
	double ___m_value_1;
};

// System.Data.SqlTypes.SqlGuid
struct SqlGuid_t5D26918EA5666BC8EBF86F12192E616F0BA8DE46 
{
public:
	// System.Byte[] System.Data.SqlTypes.SqlGuid::m_value
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(SqlGuid_t5D26918EA5666BC8EBF86F12192E616F0BA8DE46, ___m_value_2)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_m_value_2() const { return ___m_value_2; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___m_value_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_value_2), (void*)value);
	}
};

struct SqlGuid_t5D26918EA5666BC8EBF86F12192E616F0BA8DE46_StaticFields
{
public:
	// System.Int32 System.Data.SqlTypes.SqlGuid::s_sizeOfGuid
	int32_t ___s_sizeOfGuid_0;
	// System.Int32[] System.Data.SqlTypes.SqlGuid::s_rgiGuidOrder
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___s_rgiGuidOrder_1;
	// System.Data.SqlTypes.SqlGuid System.Data.SqlTypes.SqlGuid::Null
	SqlGuid_t5D26918EA5666BC8EBF86F12192E616F0BA8DE46  ___Null_3;

public:
	inline static int32_t get_offset_of_s_sizeOfGuid_0() { return static_cast<int32_t>(offsetof(SqlGuid_t5D26918EA5666BC8EBF86F12192E616F0BA8DE46_StaticFields, ___s_sizeOfGuid_0)); }
	inline int32_t get_s_sizeOfGuid_0() const { return ___s_sizeOfGuid_0; }
	inline int32_t* get_address_of_s_sizeOfGuid_0() { return &___s_sizeOfGuid_0; }
	inline void set_s_sizeOfGuid_0(int32_t value)
	{
		___s_sizeOfGuid_0 = value;
	}

	inline static int32_t get_offset_of_s_rgiGuidOrder_1() { return static_cast<int32_t>(offsetof(SqlGuid_t5D26918EA5666BC8EBF86F12192E616F0BA8DE46_StaticFields, ___s_rgiGuidOrder_1)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_s_rgiGuidOrder_1() const { return ___s_rgiGuidOrder_1; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_s_rgiGuidOrder_1() { return &___s_rgiGuidOrder_1; }
	inline void set_s_rgiGuidOrder_1(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___s_rgiGuidOrder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_rgiGuidOrder_1), (void*)value);
	}

	inline static int32_t get_offset_of_Null_3() { return static_cast<int32_t>(offsetof(SqlGuid_t5D26918EA5666BC8EBF86F12192E616F0BA8DE46_StaticFields, ___Null_3)); }
	inline SqlGuid_t5D26918EA5666BC8EBF86F12192E616F0BA8DE46  get_Null_3() const { return ___Null_3; }
	inline SqlGuid_t5D26918EA5666BC8EBF86F12192E616F0BA8DE46 * get_address_of_Null_3() { return &___Null_3; }
	inline void set_Null_3(SqlGuid_t5D26918EA5666BC8EBF86F12192E616F0BA8DE46  value)
	{
		___Null_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___Null_3))->___m_value_2), (void*)NULL);
	}
};

// Native definition for P/Invoke marshalling of System.Data.SqlTypes.SqlGuid
struct SqlGuid_t5D26918EA5666BC8EBF86F12192E616F0BA8DE46_marshaled_pinvoke
{
	Il2CppSafeArray/*NONE*/* ___m_value_2;
};
// Native definition for COM marshalling of System.Data.SqlTypes.SqlGuid
struct SqlGuid_t5D26918EA5666BC8EBF86F12192E616F0BA8DE46_marshaled_com
{
	Il2CppSafeArray/*NONE*/* ___m_value_2;
};

// System.Data.SqlTypes.SqlInt16
struct SqlInt16_tB003889273CEF2625C06174D4DB23DBBAFEDD72F 
{
public:
	// System.Boolean System.Data.SqlTypes.SqlInt16::m_fNotNull
	bool ___m_fNotNull_0;
	// System.Int16 System.Data.SqlTypes.SqlInt16::m_value
	int16_t ___m_value_1;

public:
	inline static int32_t get_offset_of_m_fNotNull_0() { return static_cast<int32_t>(offsetof(SqlInt16_tB003889273CEF2625C06174D4DB23DBBAFEDD72F, ___m_fNotNull_0)); }
	inline bool get_m_fNotNull_0() const { return ___m_fNotNull_0; }
	inline bool* get_address_of_m_fNotNull_0() { return &___m_fNotNull_0; }
	inline void set_m_fNotNull_0(bool value)
	{
		___m_fNotNull_0 = value;
	}

	inline static int32_t get_offset_of_m_value_1() { return static_cast<int32_t>(offsetof(SqlInt16_tB003889273CEF2625C06174D4DB23DBBAFEDD72F, ___m_value_1)); }
	inline int16_t get_m_value_1() const { return ___m_value_1; }
	inline int16_t* get_address_of_m_value_1() { return &___m_value_1; }
	inline void set_m_value_1(int16_t value)
	{
		___m_value_1 = value;
	}
};

struct SqlInt16_tB003889273CEF2625C06174D4DB23DBBAFEDD72F_StaticFields
{
public:
	// System.Int32 System.Data.SqlTypes.SqlInt16::s_MASKI2
	int32_t ___s_MASKI2_2;
	// System.Data.SqlTypes.SqlInt16 System.Data.SqlTypes.SqlInt16::Null
	SqlInt16_tB003889273CEF2625C06174D4DB23DBBAFEDD72F  ___Null_3;
	// System.Data.SqlTypes.SqlInt16 System.Data.SqlTypes.SqlInt16::Zero
	SqlInt16_tB003889273CEF2625C06174D4DB23DBBAFEDD72F  ___Zero_4;
	// System.Data.SqlTypes.SqlInt16 System.Data.SqlTypes.SqlInt16::MinValue
	SqlInt16_tB003889273CEF2625C06174D4DB23DBBAFEDD72F  ___MinValue_5;
	// System.Data.SqlTypes.SqlInt16 System.Data.SqlTypes.SqlInt16::MaxValue
	SqlInt16_tB003889273CEF2625C06174D4DB23DBBAFEDD72F  ___MaxValue_6;

public:
	inline static int32_t get_offset_of_s_MASKI2_2() { return static_cast<int32_t>(offsetof(SqlInt16_tB003889273CEF2625C06174D4DB23DBBAFEDD72F_StaticFields, ___s_MASKI2_2)); }
	inline int32_t get_s_MASKI2_2() const { return ___s_MASKI2_2; }
	inline int32_t* get_address_of_s_MASKI2_2() { return &___s_MASKI2_2; }
	inline void set_s_MASKI2_2(int32_t value)
	{
		___s_MASKI2_2 = value;
	}

	inline static int32_t get_offset_of_Null_3() { return static_cast<int32_t>(offsetof(SqlInt16_tB003889273CEF2625C06174D4DB23DBBAFEDD72F_StaticFields, ___Null_3)); }
	inline SqlInt16_tB003889273CEF2625C06174D4DB23DBBAFEDD72F  get_Null_3() const { return ___Null_3; }
	inline SqlInt16_tB003889273CEF2625C06174D4DB23DBBAFEDD72F * get_address_of_Null_3() { return &___Null_3; }
	inline void set_Null_3(SqlInt16_tB003889273CEF2625C06174D4DB23DBBAFEDD72F  value)
	{
		___Null_3 = value;
	}

	inline static int32_t get_offset_of_Zero_4() { return static_cast<int32_t>(offsetof(SqlInt16_tB003889273CEF2625C06174D4DB23DBBAFEDD72F_StaticFields, ___Zero_4)); }
	inline SqlInt16_tB003889273CEF2625C06174D4DB23DBBAFEDD72F  get_Zero_4() const { return ___Zero_4; }
	inline SqlInt16_tB003889273CEF2625C06174D4DB23DBBAFEDD72F * get_address_of_Zero_4() { return &___Zero_4; }
	inline void set_Zero_4(SqlInt16_tB003889273CEF2625C06174D4DB23DBBAFEDD72F  value)
	{
		___Zero_4 = value;
	}

	inline static int32_t get_offset_of_MinValue_5() { return static_cast<int32_t>(offsetof(SqlInt16_tB003889273CEF2625C06174D4DB23DBBAFEDD72F_StaticFields, ___MinValue_5)); }
	inline SqlInt16_tB003889273CEF2625C06174D4DB23DBBAFEDD72F  get_MinValue_5() const { return ___MinValue_5; }
	inline SqlInt16_tB003889273CEF2625C06174D4DB23DBBAFEDD72F * get_address_of_MinValue_5() { return &___MinValue_5; }
	inline void set_MinValue_5(SqlInt16_tB003889273CEF2625C06174D4DB23DBBAFEDD72F  value)
	{
		___MinValue_5 = value;
	}

	inline static int32_t get_offset_of_MaxValue_6() { return static_cast<int32_t>(offsetof(SqlInt16_tB003889273CEF2625C06174D4DB23DBBAFEDD72F_StaticFields, ___MaxValue_6)); }
	inline SqlInt16_tB003889273CEF2625C06174D4DB23DBBAFEDD72F  get_MaxValue_6() const { return ___MaxValue_6; }
	inline SqlInt16_tB003889273CEF2625C06174D4DB23DBBAFEDD72F * get_address_of_MaxValue_6() { return &___MaxValue_6; }
	inline void set_MaxValue_6(SqlInt16_tB003889273CEF2625C06174D4DB23DBBAFEDD72F  value)
	{
		___MaxValue_6 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Data.SqlTypes.SqlInt16
struct SqlInt16_tB003889273CEF2625C06174D4DB23DBBAFEDD72F_marshaled_pinvoke
{
	int32_t ___m_fNotNull_0;
	int16_t ___m_value_1;
};
// Native definition for COM marshalling of System.Data.SqlTypes.SqlInt16
struct SqlInt16_tB003889273CEF2625C06174D4DB23DBBAFEDD72F_marshaled_com
{
	int32_t ___m_fNotNull_0;
	int16_t ___m_value_1;
};

// System.Data.SqlTypes.SqlInt32
struct SqlInt32_t2AB23DF9003BEBE6DBD94E94C8C679454A8AF0E5 
{
public:
	// System.Boolean System.Data.SqlTypes.SqlInt32::m_fNotNull
	bool ___m_fNotNull_0;
	// System.Int32 System.Data.SqlTypes.SqlInt32::m_value
	int32_t ___m_value_1;

public:
	inline static int32_t get_offset_of_m_fNotNull_0() { return static_cast<int32_t>(offsetof(SqlInt32_t2AB23DF9003BEBE6DBD94E94C8C679454A8AF0E5, ___m_fNotNull_0)); }
	inline bool get_m_fNotNull_0() const { return ___m_fNotNull_0; }
	inline bool* get_address_of_m_fNotNull_0() { return &___m_fNotNull_0; }
	inline void set_m_fNotNull_0(bool value)
	{
		___m_fNotNull_0 = value;
	}

	inline static int32_t get_offset_of_m_value_1() { return static_cast<int32_t>(offsetof(SqlInt32_t2AB23DF9003BEBE6DBD94E94C8C679454A8AF0E5, ___m_value_1)); }
	inline int32_t get_m_value_1() const { return ___m_value_1; }
	inline int32_t* get_address_of_m_value_1() { return &___m_value_1; }
	inline void set_m_value_1(int32_t value)
	{
		___m_value_1 = value;
	}
};

struct SqlInt32_t2AB23DF9003BEBE6DBD94E94C8C679454A8AF0E5_StaticFields
{
public:
	// System.Int64 System.Data.SqlTypes.SqlInt32::s_iIntMin
	int64_t ___s_iIntMin_2;
	// System.Int64 System.Data.SqlTypes.SqlInt32::s_lBitNotIntMax
	int64_t ___s_lBitNotIntMax_3;
	// System.Data.SqlTypes.SqlInt32 System.Data.SqlTypes.SqlInt32::Null
	SqlInt32_t2AB23DF9003BEBE6DBD94E94C8C679454A8AF0E5  ___Null_4;
	// System.Data.SqlTypes.SqlInt32 System.Data.SqlTypes.SqlInt32::Zero
	SqlInt32_t2AB23DF9003BEBE6DBD94E94C8C679454A8AF0E5  ___Zero_5;
	// System.Data.SqlTypes.SqlInt32 System.Data.SqlTypes.SqlInt32::MinValue
	SqlInt32_t2AB23DF9003BEBE6DBD94E94C8C679454A8AF0E5  ___MinValue_6;
	// System.Data.SqlTypes.SqlInt32 System.Data.SqlTypes.SqlInt32::MaxValue
	SqlInt32_t2AB23DF9003BEBE6DBD94E94C8C679454A8AF0E5  ___MaxValue_7;

public:
	inline static int32_t get_offset_of_s_iIntMin_2() { return static_cast<int32_t>(offsetof(SqlInt32_t2AB23DF9003BEBE6DBD94E94C8C679454A8AF0E5_StaticFields, ___s_iIntMin_2)); }
	inline int64_t get_s_iIntMin_2() const { return ___s_iIntMin_2; }
	inline int64_t* get_address_of_s_iIntMin_2() { return &___s_iIntMin_2; }
	inline void set_s_iIntMin_2(int64_t value)
	{
		___s_iIntMin_2 = value;
	}

	inline static int32_t get_offset_of_s_lBitNotIntMax_3() { return static_cast<int32_t>(offsetof(SqlInt32_t2AB23DF9003BEBE6DBD94E94C8C679454A8AF0E5_StaticFields, ___s_lBitNotIntMax_3)); }
	inline int64_t get_s_lBitNotIntMax_3() const { return ___s_lBitNotIntMax_3; }
	inline int64_t* get_address_of_s_lBitNotIntMax_3() { return &___s_lBitNotIntMax_3; }
	inline void set_s_lBitNotIntMax_3(int64_t value)
	{
		___s_lBitNotIntMax_3 = value;
	}

	inline static int32_t get_offset_of_Null_4() { return static_cast<int32_t>(offsetof(SqlInt32_t2AB23DF9003BEBE6DBD94E94C8C679454A8AF0E5_StaticFields, ___Null_4)); }
	inline SqlInt32_t2AB23DF9003BEBE6DBD94E94C8C679454A8AF0E5  get_Null_4() const { return ___Null_4; }
	inline SqlInt32_t2AB23DF9003BEBE6DBD94E94C8C679454A8AF0E5 * get_address_of_Null_4() { return &___Null_4; }
	inline void set_Null_4(SqlInt32_t2AB23DF9003BEBE6DBD94E94C8C679454A8AF0E5  value)
	{
		___Null_4 = value;
	}

	inline static int32_t get_offset_of_Zero_5() { return static_cast<int32_t>(offsetof(SqlInt32_t2AB23DF9003BEBE6DBD94E94C8C679454A8AF0E5_StaticFields, ___Zero_5)); }
	inline SqlInt32_t2AB23DF9003BEBE6DBD94E94C8C679454A8AF0E5  get_Zero_5() const { return ___Zero_5; }
	inline SqlInt32_t2AB23DF9003BEBE6DBD94E94C8C679454A8AF0E5 * get_address_of_Zero_5() { return &___Zero_5; }
	inline void set_Zero_5(SqlInt32_t2AB23DF9003BEBE6DBD94E94C8C679454A8AF0E5  value)
	{
		___Zero_5 = value;
	}

	inline static int32_t get_offset_of_MinValue_6() { return static_cast<int32_t>(offsetof(SqlInt32_t2AB23DF9003BEBE6DBD94E94C8C679454A8AF0E5_StaticFields, ___MinValue_6)); }
	inline SqlInt32_t2AB23DF9003BEBE6DBD94E94C8C679454A8AF0E5  get_MinValue_6() const { return ___MinValue_6; }
	inline SqlInt32_t2AB23DF9003BEBE6DBD94E94C8C679454A8AF0E5 * get_address_of_MinValue_6() { return &___MinValue_6; }
	inline void set_MinValue_6(SqlInt32_t2AB23DF9003BEBE6DBD94E94C8C679454A8AF0E5  value)
	{
		___MinValue_6 = value;
	}

	inline static int32_t get_offset_of_MaxValue_7() { return static_cast<int32_t>(offsetof(SqlInt32_t2AB23DF9003BEBE6DBD94E94C8C679454A8AF0E5_StaticFields, ___MaxValue_7)); }
	inline SqlInt32_t2AB23DF9003BEBE6DBD94E94C8C679454A8AF0E5  get_MaxValue_7() const { return ___MaxValue_7; }
	inline SqlInt32_t2AB23DF9003BEBE6DBD94E94C8C679454A8AF0E5 * get_address_of_MaxValue_7() { return &___MaxValue_7; }
	inline void set_MaxValue_7(SqlInt32_t2AB23DF9003BEBE6DBD94E94C8C679454A8AF0E5  value)
	{
		___MaxValue_7 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Data.SqlTypes.SqlInt32
struct SqlInt32_t2AB23DF9003BEBE6DBD94E94C8C679454A8AF0E5_marshaled_pinvoke
{
	int32_t ___m_fNotNull_0;
	int32_t ___m_value_1;
};
// Native definition for COM marshalling of System.Data.SqlTypes.SqlInt32
struct SqlInt32_t2AB23DF9003BEBE6DBD94E94C8C679454A8AF0E5_marshaled_com
{
	int32_t ___m_fNotNull_0;
	int32_t ___m_value_1;
};

// System.Data.SqlTypes.SqlInt64
struct SqlInt64_tCF441A47D276F6121644D08D6BEE0296E84E46AE 
{
public:
	// System.Boolean System.Data.SqlTypes.SqlInt64::m_fNotNull
	bool ___m_fNotNull_0;
	// System.Int64 System.Data.SqlTypes.SqlInt64::m_value
	int64_t ___m_value_1;

public:
	inline static int32_t get_offset_of_m_fNotNull_0() { return static_cast<int32_t>(offsetof(SqlInt64_tCF441A47D276F6121644D08D6BEE0296E84E46AE, ___m_fNotNull_0)); }
	inline bool get_m_fNotNull_0() const { return ___m_fNotNull_0; }
	inline bool* get_address_of_m_fNotNull_0() { return &___m_fNotNull_0; }
	inline void set_m_fNotNull_0(bool value)
	{
		___m_fNotNull_0 = value;
	}

	inline static int32_t get_offset_of_m_value_1() { return static_cast<int32_t>(offsetof(SqlInt64_tCF441A47D276F6121644D08D6BEE0296E84E46AE, ___m_value_1)); }
	inline int64_t get_m_value_1() const { return ___m_value_1; }
	inline int64_t* get_address_of_m_value_1() { return &___m_value_1; }
	inline void set_m_value_1(int64_t value)
	{
		___m_value_1 = value;
	}
};

struct SqlInt64_tCF441A47D276F6121644D08D6BEE0296E84E46AE_StaticFields
{
public:
	// System.Int64 System.Data.SqlTypes.SqlInt64::s_lLowIntMask
	int64_t ___s_lLowIntMask_2;
	// System.Int64 System.Data.SqlTypes.SqlInt64::s_lHighIntMask
	int64_t ___s_lHighIntMask_3;
	// System.Data.SqlTypes.SqlInt64 System.Data.SqlTypes.SqlInt64::Null
	SqlInt64_tCF441A47D276F6121644D08D6BEE0296E84E46AE  ___Null_4;
	// System.Data.SqlTypes.SqlInt64 System.Data.SqlTypes.SqlInt64::Zero
	SqlInt64_tCF441A47D276F6121644D08D6BEE0296E84E46AE  ___Zero_5;
	// System.Data.SqlTypes.SqlInt64 System.Data.SqlTypes.SqlInt64::MinValue
	SqlInt64_tCF441A47D276F6121644D08D6BEE0296E84E46AE  ___MinValue_6;
	// System.Data.SqlTypes.SqlInt64 System.Data.SqlTypes.SqlInt64::MaxValue
	SqlInt64_tCF441A47D276F6121644D08D6BEE0296E84E46AE  ___MaxValue_7;

public:
	inline static int32_t get_offset_of_s_lLowIntMask_2() { return static_cast<int32_t>(offsetof(SqlInt64_tCF441A47D276F6121644D08D6BEE0296E84E46AE_StaticFields, ___s_lLowIntMask_2)); }
	inline int64_t get_s_lLowIntMask_2() const { return ___s_lLowIntMask_2; }
	inline int64_t* get_address_of_s_lLowIntMask_2() { return &___s_lLowIntMask_2; }
	inline void set_s_lLowIntMask_2(int64_t value)
	{
		___s_lLowIntMask_2 = value;
	}

	inline static int32_t get_offset_of_s_lHighIntMask_3() { return static_cast<int32_t>(offsetof(SqlInt64_tCF441A47D276F6121644D08D6BEE0296E84E46AE_StaticFields, ___s_lHighIntMask_3)); }
	inline int64_t get_s_lHighIntMask_3() const { return ___s_lHighIntMask_3; }
	inline int64_t* get_address_of_s_lHighIntMask_3() { return &___s_lHighIntMask_3; }
	inline void set_s_lHighIntMask_3(int64_t value)
	{
		___s_lHighIntMask_3 = value;
	}

	inline static int32_t get_offset_of_Null_4() { return static_cast<int32_t>(offsetof(SqlInt64_tCF441A47D276F6121644D08D6BEE0296E84E46AE_StaticFields, ___Null_4)); }
	inline SqlInt64_tCF441A47D276F6121644D08D6BEE0296E84E46AE  get_Null_4() const { return ___Null_4; }
	inline SqlInt64_tCF441A47D276F6121644D08D6BEE0296E84E46AE * get_address_of_Null_4() { return &___Null_4; }
	inline void set_Null_4(SqlInt64_tCF441A47D276F6121644D08D6BEE0296E84E46AE  value)
	{
		___Null_4 = value;
	}

	inline static int32_t get_offset_of_Zero_5() { return static_cast<int32_t>(offsetof(SqlInt64_tCF441A47D276F6121644D08D6BEE0296E84E46AE_StaticFields, ___Zero_5)); }
	inline SqlInt64_tCF441A47D276F6121644D08D6BEE0296E84E46AE  get_Zero_5() const { return ___Zero_5; }
	inline SqlInt64_tCF441A47D276F6121644D08D6BEE0296E84E46AE * get_address_of_Zero_5() { return &___Zero_5; }
	inline void set_Zero_5(SqlInt64_tCF441A47D276F6121644D08D6BEE0296E84E46AE  value)
	{
		___Zero_5 = value;
	}

	inline static int32_t get_offset_of_MinValue_6() { return static_cast<int32_t>(offsetof(SqlInt64_tCF441A47D276F6121644D08D6BEE0296E84E46AE_StaticFields, ___MinValue_6)); }
	inline SqlInt64_tCF441A47D276F6121644D08D6BEE0296E84E46AE  get_MinValue_6() const { return ___MinValue_6; }
	inline SqlInt64_tCF441A47D276F6121644D08D6BEE0296E84E46AE * get_address_of_MinValue_6() { return &___MinValue_6; }
	inline void set_MinValue_6(SqlInt64_tCF441A47D276F6121644D08D6BEE0296E84E46AE  value)
	{
		___MinValue_6 = value;
	}

	inline static int32_t get_offset_of_MaxValue_7() { return static_cast<int32_t>(offsetof(SqlInt64_tCF441A47D276F6121644D08D6BEE0296E84E46AE_StaticFields, ___MaxValue_7)); }
	inline SqlInt64_tCF441A47D276F6121644D08D6BEE0296E84E46AE  get_MaxValue_7() const { return ___MaxValue_7; }
	inline SqlInt64_tCF441A47D276F6121644D08D6BEE0296E84E46AE * get_address_of_MaxValue_7() { return &___MaxValue_7; }
	inline void set_MaxValue_7(SqlInt64_tCF441A47D276F6121644D08D6BEE0296E84E46AE  value)
	{
		___MaxValue_7 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Data.SqlTypes.SqlInt64
struct SqlInt64_tCF441A47D276F6121644D08D6BEE0296E84E46AE_marshaled_pinvoke
{
	int32_t ___m_fNotNull_0;
	int64_t ___m_value_1;
};
// Native definition for COM marshalling of System.Data.SqlTypes.SqlInt64
struct SqlInt64_tCF441A47D276F6121644D08D6BEE0296E84E46AE_marshaled_com
{
	int32_t ___m_fNotNull_0;
	int64_t ___m_value_1;
};

// System.Data.SqlTypes.SqlMoney
struct SqlMoney_t3AFB18BE9EB489D660B42B8A4276B7C3054E00CA 
{
public:
	// System.Boolean System.Data.SqlTypes.SqlMoney::_fNotNull
	bool ____fNotNull_0;
	// System.Int64 System.Data.SqlTypes.SqlMoney::_value
	int64_t ____value_1;

public:
	inline static int32_t get_offset_of__fNotNull_0() { return static_cast<int32_t>(offsetof(SqlMoney_t3AFB18BE9EB489D660B42B8A4276B7C3054E00CA, ____fNotNull_0)); }
	inline bool get__fNotNull_0() const { return ____fNotNull_0; }
	inline bool* get_address_of__fNotNull_0() { return &____fNotNull_0; }
	inline void set__fNotNull_0(bool value)
	{
		____fNotNull_0 = value;
	}

	inline static int32_t get_offset_of__value_1() { return static_cast<int32_t>(offsetof(SqlMoney_t3AFB18BE9EB489D660B42B8A4276B7C3054E00CA, ____value_1)); }
	inline int64_t get__value_1() const { return ____value_1; }
	inline int64_t* get_address_of__value_1() { return &____value_1; }
	inline void set__value_1(int64_t value)
	{
		____value_1 = value;
	}
};

struct SqlMoney_t3AFB18BE9EB489D660B42B8A4276B7C3054E00CA_StaticFields
{
public:
	// System.Int32 System.Data.SqlTypes.SqlMoney::s_iMoneyScale
	int32_t ___s_iMoneyScale_2;
	// System.Int64 System.Data.SqlTypes.SqlMoney::s_lTickBase
	int64_t ___s_lTickBase_3;
	// System.Double System.Data.SqlTypes.SqlMoney::s_dTickBase
	double ___s_dTickBase_4;
	// System.Int64 System.Data.SqlTypes.SqlMoney::s_minLong
	int64_t ___s_minLong_5;
	// System.Int64 System.Data.SqlTypes.SqlMoney::s_maxLong
	int64_t ___s_maxLong_6;
	// System.Data.SqlTypes.SqlMoney System.Data.SqlTypes.SqlMoney::Null
	SqlMoney_t3AFB18BE9EB489D660B42B8A4276B7C3054E00CA  ___Null_7;
	// System.Data.SqlTypes.SqlMoney System.Data.SqlTypes.SqlMoney::Zero
	SqlMoney_t3AFB18BE9EB489D660B42B8A4276B7C3054E00CA  ___Zero_8;
	// System.Data.SqlTypes.SqlMoney System.Data.SqlTypes.SqlMoney::MinValue
	SqlMoney_t3AFB18BE9EB489D660B42B8A4276B7C3054E00CA  ___MinValue_9;
	// System.Data.SqlTypes.SqlMoney System.Data.SqlTypes.SqlMoney::MaxValue
	SqlMoney_t3AFB18BE9EB489D660B42B8A4276B7C3054E00CA  ___MaxValue_10;

public:
	inline static int32_t get_offset_of_s_iMoneyScale_2() { return static_cast<int32_t>(offsetof(SqlMoney_t3AFB18BE9EB489D660B42B8A4276B7C3054E00CA_StaticFields, ___s_iMoneyScale_2)); }
	inline int32_t get_s_iMoneyScale_2() const { return ___s_iMoneyScale_2; }
	inline int32_t* get_address_of_s_iMoneyScale_2() { return &___s_iMoneyScale_2; }
	inline void set_s_iMoneyScale_2(int32_t value)
	{
		___s_iMoneyScale_2 = value;
	}

	inline static int32_t get_offset_of_s_lTickBase_3() { return static_cast<int32_t>(offsetof(SqlMoney_t3AFB18BE9EB489D660B42B8A4276B7C3054E00CA_StaticFields, ___s_lTickBase_3)); }
	inline int64_t get_s_lTickBase_3() const { return ___s_lTickBase_3; }
	inline int64_t* get_address_of_s_lTickBase_3() { return &___s_lTickBase_3; }
	inline void set_s_lTickBase_3(int64_t value)
	{
		___s_lTickBase_3 = value;
	}

	inline static int32_t get_offset_of_s_dTickBase_4() { return static_cast<int32_t>(offsetof(SqlMoney_t3AFB18BE9EB489D660B42B8A4276B7C3054E00CA_StaticFields, ___s_dTickBase_4)); }
	inline double get_s_dTickBase_4() const { return ___s_dTickBase_4; }
	inline double* get_address_of_s_dTickBase_4() { return &___s_dTickBase_4; }
	inline void set_s_dTickBase_4(double value)
	{
		___s_dTickBase_4 = value;
	}

	inline static int32_t get_offset_of_s_minLong_5() { return static_cast<int32_t>(offsetof(SqlMoney_t3AFB18BE9EB489D660B42B8A4276B7C3054E00CA_StaticFields, ___s_minLong_5)); }
	inline int64_t get_s_minLong_5() const { return ___s_minLong_5; }
	inline int64_t* get_address_of_s_minLong_5() { return &___s_minLong_5; }
	inline void set_s_minLong_5(int64_t value)
	{
		___s_minLong_5 = value;
	}

	inline static int32_t get_offset_of_s_maxLong_6() { return static_cast<int32_t>(offsetof(SqlMoney_t3AFB18BE9EB489D660B42B8A4276B7C3054E00CA_StaticFields, ___s_maxLong_6)); }
	inline int64_t get_s_maxLong_6() const { return ___s_maxLong_6; }
	inline int64_t* get_address_of_s_maxLong_6() { return &___s_maxLong_6; }
	inline void set_s_maxLong_6(int64_t value)
	{
		___s_maxLong_6 = value;
	}

	inline static int32_t get_offset_of_Null_7() { return static_cast<int32_t>(offsetof(SqlMoney_t3AFB18BE9EB489D660B42B8A4276B7C3054E00CA_StaticFields, ___Null_7)); }
	inline SqlMoney_t3AFB18BE9EB489D660B42B8A4276B7C3054E00CA  get_Null_7() const { return ___Null_7; }
	inline SqlMoney_t3AFB18BE9EB489D660B42B8A4276B7C3054E00CA * get_address_of_Null_7() { return &___Null_7; }
	inline void set_Null_7(SqlMoney_t3AFB18BE9EB489D660B42B8A4276B7C3054E00CA  value)
	{
		___Null_7 = value;
	}

	inline static int32_t get_offset_of_Zero_8() { return static_cast<int32_t>(offsetof(SqlMoney_t3AFB18BE9EB489D660B42B8A4276B7C3054E00CA_StaticFields, ___Zero_8)); }
	inline SqlMoney_t3AFB18BE9EB489D660B42B8A4276B7C3054E00CA  get_Zero_8() const { return ___Zero_8; }
	inline SqlMoney_t3AFB18BE9EB489D660B42B8A4276B7C3054E00CA * get_address_of_Zero_8() { return &___Zero_8; }
	inline void set_Zero_8(SqlMoney_t3AFB18BE9EB489D660B42B8A4276B7C3054E00CA  value)
	{
		___Zero_8 = value;
	}

	inline static int32_t get_offset_of_MinValue_9() { return static_cast<int32_t>(offsetof(SqlMoney_t3AFB18BE9EB489D660B42B8A4276B7C3054E00CA_StaticFields, ___MinValue_9)); }
	inline SqlMoney_t3AFB18BE9EB489D660B42B8A4276B7C3054E00CA  get_MinValue_9() const { return ___MinValue_9; }
	inline SqlMoney_t3AFB18BE9EB489D660B42B8A4276B7C3054E00CA * get_address_of_MinValue_9() { return &___MinValue_9; }
	inline void set_MinValue_9(SqlMoney_t3AFB18BE9EB489D660B42B8A4276B7C3054E00CA  value)
	{
		___MinValue_9 = value;
	}

	inline static int32_t get_offset_of_MaxValue_10() { return static_cast<int32_t>(offsetof(SqlMoney_t3AFB18BE9EB489D660B42B8A4276B7C3054E00CA_StaticFields, ___MaxValue_10)); }
	inline SqlMoney_t3AFB18BE9EB489D660B42B8A4276B7C3054E00CA  get_MaxValue_10() const { return ___MaxValue_10; }
	inline SqlMoney_t3AFB18BE9EB489D660B42B8A4276B7C3054E00CA * get_address_of_MaxValue_10() { return &___MaxValue_10; }
	inline void set_MaxValue_10(SqlMoney_t3AFB18BE9EB489D660B42B8A4276B7C3054E00CA  value)
	{
		___MaxValue_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Data.SqlTypes.SqlMoney
struct SqlMoney_t3AFB18BE9EB489D660B42B8A4276B7C3054E00CA_marshaled_pinvoke
{
	int32_t ____fNotNull_0;
	int64_t ____value_1;
};
// Native definition for COM marshalling of System.Data.SqlTypes.SqlMoney
struct SqlMoney_t3AFB18BE9EB489D660B42B8A4276B7C3054E00CA_marshaled_com
{
	int32_t ____fNotNull_0;
	int64_t ____value_1;
};

// System.Data.SqlTypes.SqlSingle
struct SqlSingle_t2CD814E1AA8A493B2181D8240064E7A0A034A32E 
{
public:
	// System.Boolean System.Data.SqlTypes.SqlSingle::_fNotNull
	bool ____fNotNull_0;
	// System.Single System.Data.SqlTypes.SqlSingle::_value
	float ____value_1;

public:
	inline static int32_t get_offset_of__fNotNull_0() { return static_cast<int32_t>(offsetof(SqlSingle_t2CD814E1AA8A493B2181D8240064E7A0A034A32E, ____fNotNull_0)); }
	inline bool get__fNotNull_0() const { return ____fNotNull_0; }
	inline bool* get_address_of__fNotNull_0() { return &____fNotNull_0; }
	inline void set__fNotNull_0(bool value)
	{
		____fNotNull_0 = value;
	}

	inline static int32_t get_offset_of__value_1() { return static_cast<int32_t>(offsetof(SqlSingle_t2CD814E1AA8A493B2181D8240064E7A0A034A32E, ____value_1)); }
	inline float get__value_1() const { return ____value_1; }
	inline float* get_address_of__value_1() { return &____value_1; }
	inline void set__value_1(float value)
	{
		____value_1 = value;
	}
};

struct SqlSingle_t2CD814E1AA8A493B2181D8240064E7A0A034A32E_StaticFields
{
public:
	// System.Data.SqlTypes.SqlSingle System.Data.SqlTypes.SqlSingle::Null
	SqlSingle_t2CD814E1AA8A493B2181D8240064E7A0A034A32E  ___Null_2;
	// System.Data.SqlTypes.SqlSingle System.Data.SqlTypes.SqlSingle::Zero
	SqlSingle_t2CD814E1AA8A493B2181D8240064E7A0A034A32E  ___Zero_3;
	// System.Data.SqlTypes.SqlSingle System.Data.SqlTypes.SqlSingle::MinValue
	SqlSingle_t2CD814E1AA8A493B2181D8240064E7A0A034A32E  ___MinValue_4;
	// System.Data.SqlTypes.SqlSingle System.Data.SqlTypes.SqlSingle::MaxValue
	SqlSingle_t2CD814E1AA8A493B2181D8240064E7A0A034A32E  ___MaxValue_5;

public:
	inline static int32_t get_offset_of_Null_2() { return static_cast<int32_t>(offsetof(SqlSingle_t2CD814E1AA8A493B2181D8240064E7A0A034A32E_StaticFields, ___Null_2)); }
	inline SqlSingle_t2CD814E1AA8A493B2181D8240064E7A0A034A32E  get_Null_2() const { return ___Null_2; }
	inline SqlSingle_t2CD814E1AA8A493B2181D8240064E7A0A034A32E * get_address_of_Null_2() { return &___Null_2; }
	inline void set_Null_2(SqlSingle_t2CD814E1AA8A493B2181D8240064E7A0A034A32E  value)
	{
		___Null_2 = value;
	}

	inline static int32_t get_offset_of_Zero_3() { return static_cast<int32_t>(offsetof(SqlSingle_t2CD814E1AA8A493B2181D8240064E7A0A034A32E_StaticFields, ___Zero_3)); }
	inline SqlSingle_t2CD814E1AA8A493B2181D8240064E7A0A034A32E  get_Zero_3() const { return ___Zero_3; }
	inline SqlSingle_t2CD814E1AA8A493B2181D8240064E7A0A034A32E * get_address_of_Zero_3() { return &___Zero_3; }
	inline void set_Zero_3(SqlSingle_t2CD814E1AA8A493B2181D8240064E7A0A034A32E  value)
	{
		___Zero_3 = value;
	}

	inline static int32_t get_offset_of_MinValue_4() { return static_cast<int32_t>(offsetof(SqlSingle_t2CD814E1AA8A493B2181D8240064E7A0A034A32E_StaticFields, ___MinValue_4)); }
	inline SqlSingle_t2CD814E1AA8A493B2181D8240064E7A0A034A32E  get_MinValue_4() const { return ___MinValue_4; }
	inline SqlSingle_t2CD814E1AA8A493B2181D8240064E7A0A034A32E * get_address_of_MinValue_4() { return &___MinValue_4; }
	inline void set_MinValue_4(SqlSingle_t2CD814E1AA8A493B2181D8240064E7A0A034A32E  value)
	{
		___MinValue_4 = value;
	}

	inline static int32_t get_offset_of_MaxValue_5() { return static_cast<int32_t>(offsetof(SqlSingle_t2CD814E1AA8A493B2181D8240064E7A0A034A32E_StaticFields, ___MaxValue_5)); }
	inline SqlSingle_t2CD814E1AA8A493B2181D8240064E7A0A034A32E  get_MaxValue_5() const { return ___MaxValue_5; }
	inline SqlSingle_t2CD814E1AA8A493B2181D8240064E7A0A034A32E * get_address_of_MaxValue_5() { return &___MaxValue_5; }
	inline void set_MaxValue_5(SqlSingle_t2CD814E1AA8A493B2181D8240064E7A0A034A32E  value)
	{
		___MaxValue_5 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Data.SqlTypes.SqlSingle
struct SqlSingle_t2CD814E1AA8A493B2181D8240064E7A0A034A32E_marshaled_pinvoke
{
	int32_t ____fNotNull_0;
	float ____value_1;
};
// Native definition for COM marshalling of System.Data.SqlTypes.SqlSingle
struct SqlSingle_t2CD814E1AA8A493B2181D8240064E7A0A034A32E_marshaled_com
{
	int32_t ____fNotNull_0;
	float ____value_1;
};

// System.UInt16
struct UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD 
{
public:
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD, ___m_value_0)); }
	inline uint16_t get_m_value_0() const { return ___m_value_0; }
	inline uint16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint16_t value)
	{
		___m_value_0 = value;
	}
};


// System.UInt32
struct UInt32_tE60352A06233E4E69DD198BCC67142159F686B15 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_tE60352A06233E4E69DD198BCC67142159F686B15, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
	}
};


// System.UInt64
struct UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281 
{
public:
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281, ___m_value_0)); }
	inline uint64_t get_m_value_0() const { return ___m_value_0; }
	inline uint64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint64_t value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.Vector3
struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___zeroVector_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___oneVector_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___upVector_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___downVector_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___leftVector_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___rightVector_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___forwardVector_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___backVector_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// System.Globalization.CompareOptions
struct CompareOptions_tD3D7F165240DC4D784A11B1E2F21DC0D6D18E725 
{
public:
	// System.Int32 System.Globalization.CompareOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CompareOptions_tD3D7F165240DC4D784A11B1E2F21DC0D6D18E725, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// Windows.Foundation.PropertyType
struct PropertyType_tE0EA93A7BFC9AC532D4D960D9F87C6E0B5C4F808 
{
public:
	// System.Int32 Windows.Foundation.PropertyType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PropertyType_tE0EA93A7BFC9AC532D4D960D9F87C6E0B5C4F808, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessSurfaceTypes
struct SpatialAwarenessSurfaceTypes_t4171AD7D18FC43C9953C069EB4D0A2A4DEA4B0F3 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessSurfaceTypes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SpatialAwarenessSurfaceTypes_t4171AD7D18FC43C9953C069EB4D0A2A4DEA4B0F3, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Data.SqlTypes.SqlBytesCharsState
struct SqlBytesCharsState_tDE947198DFA4F1F888E5CEFB59A92F6D4DF59685 
{
public:
	// System.Int32 System.Data.SqlTypes.SqlBytesCharsState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SqlBytesCharsState_tDE947198DFA4F1F888E5CEFB59A92F6D4DF59685, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Data.SqlTypes.SqlCompareOptions
struct SqlCompareOptions_tE6B6889C977EFFF3D7DE2B565D89163F9FA6ECE3 
{
public:
	// System.Int32 System.Data.SqlTypes.SqlCompareOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SqlCompareOptions_tE6B6889C977EFFF3D7DE2B565D89163F9FA6ECE3, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.TimeSpan
struct TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 
{
public:
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_22;

public:
	inline static int32_t get_offset_of__ticks_22() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203, ____ticks_22)); }
	inline int64_t get__ticks_22() const { return ____ticks_22; }
	inline int64_t* get_address_of__ticks_22() { return &____ticks_22; }
	inline void set__ticks_22(int64_t value)
	{
		____ticks_22 = value;
	}
};

struct TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields
{
public:
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___Zero_19;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___MaxValue_20;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___MinValue_21;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyConfigChecked
	bool ____legacyConfigChecked_23;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyMode
	bool ____legacyMode_24;

public:
	inline static int32_t get_offset_of_Zero_19() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___Zero_19)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_Zero_19() const { return ___Zero_19; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_Zero_19() { return &___Zero_19; }
	inline void set_Zero_19(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___Zero_19 = value;
	}

	inline static int32_t get_offset_of_MaxValue_20() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___MaxValue_20)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_MaxValue_20() const { return ___MaxValue_20; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_MaxValue_20() { return &___MaxValue_20; }
	inline void set_MaxValue_20(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___MaxValue_20 = value;
	}

	inline static int32_t get_offset_of_MinValue_21() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___MinValue_21)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_MinValue_21() const { return ___MinValue_21; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_MinValue_21() { return &___MinValue_21; }
	inline void set_MinValue_21(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___MinValue_21 = value;
	}

	inline static int32_t get_offset_of__legacyConfigChecked_23() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ____legacyConfigChecked_23)); }
	inline bool get__legacyConfigChecked_23() const { return ____legacyConfigChecked_23; }
	inline bool* get_address_of__legacyConfigChecked_23() { return &____legacyConfigChecked_23; }
	inline void set__legacyConfigChecked_23(bool value)
	{
		____legacyConfigChecked_23 = value;
	}

	inline static int32_t get_offset_of__legacyMode_24() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ____legacyMode_24)); }
	inline bool get__legacyMode_24() const { return ____legacyMode_24; }
	inline bool* get_address_of__legacyMode_24() { return &____legacyMode_24; }
	inline void set__legacyMode_24(bool value)
	{
		____legacyMode_24 = value;
	}
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};

// Windows.Foundation.IPropertyValue
struct NOVTABLE IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_get_Type_m2BC440F5119A133BE4DD895657519ADAA3B34272(int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_get_IsNumericScalar_mC8DE97926668A5F2EA3F4A9B128E966CBC7B0D60(bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt8_m25D96C5F9AC133BF7B682C59FE83EE05A0075B05(uint8_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt16_mBE4A7DC8A2B92F83EE058AE7515E84DADFA206AE(int16_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt16_mCF513D800195CA7050FD5AFB4E710FB0CFB531B5(uint16_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt32_mDE5543C20D3D3C9E773CB6EDBDBC789D12CC59BA(int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt32_mD48C2097876EAE6D1E218D9123F58F168B374205(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt64_m4BAC154BEC3584DF3E34EDA6033EEF3DB6D4132E(int64_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt64_m981379F85C0C44EDBDD830A293693BE0BB3F62CA(uint64_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSingle_mED031D57B17B0F7BD3B4B250821D070155889F1F(float* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDouble_mA0880A7E89CE09C2639D6F8065B18E8F77EB082F(double* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetChar16_m7B2226E30F72B0CCAE54B8EDB1AC4ACF1BE860A8(Il2CppChar* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetBoolean_m21FCEEA690B32CD86A36D40FB837FC7D894D5587(bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetString_m8D5702E4E1C67366D65DA23CA2812D6572DF819C(Il2CppHString* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetGuid_m885F2850B49DB4B046564BC5FE414256801D9A11(Guid_t * comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDateTime_m023A766ED6FC58B347CF6F777F5C18C6AE246A3C(DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C * comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetTimeSpan_m063CE76264EDAF37A1DA3CA5C9CF4AF85D8FC239(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetPoint_m014D5E859273BA28DE642E38438EDCC64AB5C41B(Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 * comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSize_m0A952D186E59BEA03E6185EDEBAC26D544AFADAC(Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 * comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetRect_m0A96600149C7E6A493B8420CB316938AEF9A1A06(Rect_tC45F1DDF39812623644DE296D8057A4958176627 * comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt8Array_m540E0503D8CFAE2579D449884B6AA883509C79D1(uint32_t* ___value0ArraySize, uint8_t** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt16Array_m279C289854DE8A2D45A6B6B09112DD9D2F0DF849(uint32_t* ___value0ArraySize, int16_t** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt16Array_m090AA712F6BB39F869BCC5CB90236377EE8673B1(uint32_t* ___value0ArraySize, uint16_t** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt32Array_mADF499B8CD16185128795A7B74D63E8CFE692B9A(uint32_t* ___value0ArraySize, int32_t** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt32Array_m9B44B8D2EA2907A9A96ED653ACEF04873D9483F8(uint32_t* ___value0ArraySize, uint32_t** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt64Array_m9A04AC5F477463928280B42E2C40F13B15A1D564(uint32_t* ___value0ArraySize, int64_t** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt64Array_m776484C9C41D5A03991D89401FF84F9D425D6A5E(uint32_t* ___value0ArraySize, uint64_t** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSingleArray_m1E9CE76FA942B3AFA8995FBAE605E84733917B57(uint32_t* ___value0ArraySize, float** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDoubleArray_m5DAB086BEB4816CAF7553E325B91A4B0B07953A5(uint32_t* ___value0ArraySize, double** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetChar16Array_m2C69248F68D7705FE44FA8F777B061FA77C706A1(uint32_t* ___value0ArraySize, Il2CppChar** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetBooleanArray_m083CB5579BC465B4D1BD84CE8382CB747A9FCC8C(uint32_t* ___value0ArraySize, bool** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetStringArray_m680617C6226187D28C4978B710AFBB8581AAC98F(uint32_t* ___value0ArraySize, Il2CppHString** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInspectableArray_m6DCBE370A8CAC129E6D6BD91C6503D14A8109F79(uint32_t* ___value0ArraySize, Il2CppIInspectable*** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetGuidArray_mE9983D9B5EE9AC1935C3EBD2F9E82DC7188E1D07(uint32_t* ___value0ArraySize, Guid_t ** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDateTimeArray_mEECFC6C321405CDBC425D321E2A8EF3E7BC306A7(uint32_t* ___value0ArraySize, DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C ** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetTimeSpanArray_mEAF3CA18AA928DAF3046F0F530B9324711650167(uint32_t* ___value0ArraySize, TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 ** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetPointArray_mD4ACB0F49C7BFEC1C03A4EE4263B23B2040CECD0(uint32_t* ___value0ArraySize, Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 ** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSizeArray_m3C079B4191330FAC3B2131D308C825BC72A5F0DC(uint32_t* ___value0ArraySize, Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 ** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetRectArray_m09598924D31716E1E653AE941186F8B16EA11A87(uint32_t* ___value0ArraySize, Rect_tC45F1DDF39812623644DE296D8057A4958176627 ** ___value0) = 0;
};

// Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessPlanarObject
struct SpatialAwarenessPlanarObject_t153BC2F70AA3C6FE6D4184D6396293B601E81582  : public BaseSpatialAwarenessObject_t457D46D5F2BDBFC7EC4775738F6569ABF7D5947E
{
public:
	// UnityEngine.BoxCollider Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessPlanarObject::<Collider>k__BackingField
	BoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5 * ___U3CColliderU3Ek__BackingField_4;
	// Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessSurfaceTypes Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessPlanarObject::planeType
	int32_t ___planeType_5;

public:
	inline static int32_t get_offset_of_U3CColliderU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(SpatialAwarenessPlanarObject_t153BC2F70AA3C6FE6D4184D6396293B601E81582, ___U3CColliderU3Ek__BackingField_4)); }
	inline BoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5 * get_U3CColliderU3Ek__BackingField_4() const { return ___U3CColliderU3Ek__BackingField_4; }
	inline BoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5 ** get_address_of_U3CColliderU3Ek__BackingField_4() { return &___U3CColliderU3Ek__BackingField_4; }
	inline void set_U3CColliderU3Ek__BackingField_4(BoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5 * value)
	{
		___U3CColliderU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CColliderU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_planeType_5() { return static_cast<int32_t>(offsetof(SpatialAwarenessPlanarObject_t153BC2F70AA3C6FE6D4184D6396293B601E81582, ___planeType_5)); }
	inline int32_t get_planeType_5() const { return ___planeType_5; }
	inline int32_t* get_address_of_planeType_5() { return &___planeType_5; }
	inline void set_planeType_5(int32_t value)
	{
		___planeType_5 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Experimental.SpatialAwareness.SpatialAwarenessSceneObject
struct SpatialAwarenessSceneObject_tAC052BA8D6B83B9DEB7AD61378718D40B7C9C12F  : public BaseSpatialAwarenessObject_t457D46D5F2BDBFC7EC4775738F6569ABF7D5947E
{
public:
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Experimental.SpatialAwareness.SpatialAwarenessSceneObject::<Position>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CPositionU3Ek__BackingField_4;
	// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Experimental.SpatialAwareness.SpatialAwarenessSceneObject::<Rotation>k__BackingField
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___U3CRotationU3Ek__BackingField_5;
	// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Experimental.SpatialAwareness.SpatialAwarenessSceneObject/QuadData> Microsoft.MixedReality.Toolkit.Experimental.SpatialAwareness.SpatialAwarenessSceneObject::<Quads>k__BackingField
	List_1_t2451ECBE44D1E41FEE087E44A20F10D688CF2C8F * ___U3CQuadsU3Ek__BackingField_6;
	// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Experimental.SpatialAwareness.SpatialAwarenessSceneObject/MeshData> Microsoft.MixedReality.Toolkit.Experimental.SpatialAwareness.SpatialAwarenessSceneObject::<Meshes>k__BackingField
	List_1_tDA72B8042DB16E2653995D03C28908F831161AB7 * ___U3CMeshesU3Ek__BackingField_7;
	// Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessSurfaceTypes Microsoft.MixedReality.Toolkit.Experimental.SpatialAwareness.SpatialAwarenessSceneObject::<SurfaceType>k__BackingField
	int32_t ___U3CSurfaceTypeU3Ek__BackingField_8;

public:
	inline static int32_t get_offset_of_U3CPositionU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(SpatialAwarenessSceneObject_tAC052BA8D6B83B9DEB7AD61378718D40B7C9C12F, ___U3CPositionU3Ek__BackingField_4)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CPositionU3Ek__BackingField_4() const { return ___U3CPositionU3Ek__BackingField_4; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CPositionU3Ek__BackingField_4() { return &___U3CPositionU3Ek__BackingField_4; }
	inline void set_U3CPositionU3Ek__BackingField_4(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CPositionU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CRotationU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(SpatialAwarenessSceneObject_tAC052BA8D6B83B9DEB7AD61378718D40B7C9C12F, ___U3CRotationU3Ek__BackingField_5)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_U3CRotationU3Ek__BackingField_5() const { return ___U3CRotationU3Ek__BackingField_5; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_U3CRotationU3Ek__BackingField_5() { return &___U3CRotationU3Ek__BackingField_5; }
	inline void set_U3CRotationU3Ek__BackingField_5(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___U3CRotationU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CQuadsU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(SpatialAwarenessSceneObject_tAC052BA8D6B83B9DEB7AD61378718D40B7C9C12F, ___U3CQuadsU3Ek__BackingField_6)); }
	inline List_1_t2451ECBE44D1E41FEE087E44A20F10D688CF2C8F * get_U3CQuadsU3Ek__BackingField_6() const { return ___U3CQuadsU3Ek__BackingField_6; }
	inline List_1_t2451ECBE44D1E41FEE087E44A20F10D688CF2C8F ** get_address_of_U3CQuadsU3Ek__BackingField_6() { return &___U3CQuadsU3Ek__BackingField_6; }
	inline void set_U3CQuadsU3Ek__BackingField_6(List_1_t2451ECBE44D1E41FEE087E44A20F10D688CF2C8F * value)
	{
		___U3CQuadsU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CQuadsU3Ek__BackingField_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CMeshesU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(SpatialAwarenessSceneObject_tAC052BA8D6B83B9DEB7AD61378718D40B7C9C12F, ___U3CMeshesU3Ek__BackingField_7)); }
	inline List_1_tDA72B8042DB16E2653995D03C28908F831161AB7 * get_U3CMeshesU3Ek__BackingField_7() const { return ___U3CMeshesU3Ek__BackingField_7; }
	inline List_1_tDA72B8042DB16E2653995D03C28908F831161AB7 ** get_address_of_U3CMeshesU3Ek__BackingField_7() { return &___U3CMeshesU3Ek__BackingField_7; }
	inline void set_U3CMeshesU3Ek__BackingField_7(List_1_tDA72B8042DB16E2653995D03C28908F831161AB7 * value)
	{
		___U3CMeshesU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CMeshesU3Ek__BackingField_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CSurfaceTypeU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(SpatialAwarenessSceneObject_tAC052BA8D6B83B9DEB7AD61378718D40B7C9C12F, ___U3CSurfaceTypeU3Ek__BackingField_8)); }
	inline int32_t get_U3CSurfaceTypeU3Ek__BackingField_8() const { return ___U3CSurfaceTypeU3Ek__BackingField_8; }
	inline int32_t* get_address_of_U3CSurfaceTypeU3Ek__BackingField_8() { return &___U3CSurfaceTypeU3Ek__BackingField_8; }
	inline void set_U3CSurfaceTypeU3Ek__BackingField_8(int32_t value)
	{
		___U3CSurfaceTypeU3Ek__BackingField_8 = value;
	}
};


// UnityEngine.Sprite
struct Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// System.Data.SqlTypes.SqlBytes
struct SqlBytes_tA89570BFA7CB45E83EAFB32FF13B8ABEC21555B6  : public RuntimeObject
{
public:
	// System.Byte[] System.Data.SqlTypes.SqlBytes::_rgbBuf
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ____rgbBuf_0;
	// System.Int64 System.Data.SqlTypes.SqlBytes::_lCurLen
	int64_t ____lCurLen_1;
	// System.IO.Stream System.Data.SqlTypes.SqlBytes::_stream
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ____stream_2;
	// System.Data.SqlTypes.SqlBytesCharsState System.Data.SqlTypes.SqlBytes::_state
	int32_t ____state_3;
	// System.Byte[] System.Data.SqlTypes.SqlBytes::_rgbWorkBuf
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ____rgbWorkBuf_4;

public:
	inline static int32_t get_offset_of__rgbBuf_0() { return static_cast<int32_t>(offsetof(SqlBytes_tA89570BFA7CB45E83EAFB32FF13B8ABEC21555B6, ____rgbBuf_0)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get__rgbBuf_0() const { return ____rgbBuf_0; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of__rgbBuf_0() { return &____rgbBuf_0; }
	inline void set__rgbBuf_0(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		____rgbBuf_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rgbBuf_0), (void*)value);
	}

	inline static int32_t get_offset_of__lCurLen_1() { return static_cast<int32_t>(offsetof(SqlBytes_tA89570BFA7CB45E83EAFB32FF13B8ABEC21555B6, ____lCurLen_1)); }
	inline int64_t get__lCurLen_1() const { return ____lCurLen_1; }
	inline int64_t* get_address_of__lCurLen_1() { return &____lCurLen_1; }
	inline void set__lCurLen_1(int64_t value)
	{
		____lCurLen_1 = value;
	}

	inline static int32_t get_offset_of__stream_2() { return static_cast<int32_t>(offsetof(SqlBytes_tA89570BFA7CB45E83EAFB32FF13B8ABEC21555B6, ____stream_2)); }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * get__stream_2() const { return ____stream_2; }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB ** get_address_of__stream_2() { return &____stream_2; }
	inline void set__stream_2(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * value)
	{
		____stream_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stream_2), (void*)value);
	}

	inline static int32_t get_offset_of__state_3() { return static_cast<int32_t>(offsetof(SqlBytes_tA89570BFA7CB45E83EAFB32FF13B8ABEC21555B6, ____state_3)); }
	inline int32_t get__state_3() const { return ____state_3; }
	inline int32_t* get_address_of__state_3() { return &____state_3; }
	inline void set__state_3(int32_t value)
	{
		____state_3 = value;
	}

	inline static int32_t get_offset_of__rgbWorkBuf_4() { return static_cast<int32_t>(offsetof(SqlBytes_tA89570BFA7CB45E83EAFB32FF13B8ABEC21555B6, ____rgbWorkBuf_4)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get__rgbWorkBuf_4() const { return ____rgbWorkBuf_4; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of__rgbWorkBuf_4() { return &____rgbWorkBuf_4; }
	inline void set__rgbWorkBuf_4(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		____rgbWorkBuf_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rgbWorkBuf_4), (void*)value);
	}
};


// System.Data.SqlTypes.SqlChars
struct SqlChars_t123841A0B03CA780E6710DFE1A63ABA7CDE1CD53  : public RuntimeObject
{
public:
	// System.Char[] System.Data.SqlTypes.SqlChars::_rgchBuf
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ____rgchBuf_0;
	// System.Int64 System.Data.SqlTypes.SqlChars::_lCurLen
	int64_t ____lCurLen_1;
	// System.Data.SqlTypes.SqlStreamChars System.Data.SqlTypes.SqlChars::_stream
	SqlStreamChars_t910B848D31E31CB82C6F50F1ECE148D614DE4665 * ____stream_2;
	// System.Data.SqlTypes.SqlBytesCharsState System.Data.SqlTypes.SqlChars::_state
	int32_t ____state_3;
	// System.Char[] System.Data.SqlTypes.SqlChars::_rgchWorkBuf
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ____rgchWorkBuf_4;

public:
	inline static int32_t get_offset_of__rgchBuf_0() { return static_cast<int32_t>(offsetof(SqlChars_t123841A0B03CA780E6710DFE1A63ABA7CDE1CD53, ____rgchBuf_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get__rgchBuf_0() const { return ____rgchBuf_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of__rgchBuf_0() { return &____rgchBuf_0; }
	inline void set__rgchBuf_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		____rgchBuf_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rgchBuf_0), (void*)value);
	}

	inline static int32_t get_offset_of__lCurLen_1() { return static_cast<int32_t>(offsetof(SqlChars_t123841A0B03CA780E6710DFE1A63ABA7CDE1CD53, ____lCurLen_1)); }
	inline int64_t get__lCurLen_1() const { return ____lCurLen_1; }
	inline int64_t* get_address_of__lCurLen_1() { return &____lCurLen_1; }
	inline void set__lCurLen_1(int64_t value)
	{
		____lCurLen_1 = value;
	}

	inline static int32_t get_offset_of__stream_2() { return static_cast<int32_t>(offsetof(SqlChars_t123841A0B03CA780E6710DFE1A63ABA7CDE1CD53, ____stream_2)); }
	inline SqlStreamChars_t910B848D31E31CB82C6F50F1ECE148D614DE4665 * get__stream_2() const { return ____stream_2; }
	inline SqlStreamChars_t910B848D31E31CB82C6F50F1ECE148D614DE4665 ** get_address_of__stream_2() { return &____stream_2; }
	inline void set__stream_2(SqlStreamChars_t910B848D31E31CB82C6F50F1ECE148D614DE4665 * value)
	{
		____stream_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stream_2), (void*)value);
	}

	inline static int32_t get_offset_of__state_3() { return static_cast<int32_t>(offsetof(SqlChars_t123841A0B03CA780E6710DFE1A63ABA7CDE1CD53, ____state_3)); }
	inline int32_t get__state_3() const { return ____state_3; }
	inline int32_t* get_address_of__state_3() { return &____state_3; }
	inline void set__state_3(int32_t value)
	{
		____state_3 = value;
	}

	inline static int32_t get_offset_of__rgchWorkBuf_4() { return static_cast<int32_t>(offsetof(SqlChars_t123841A0B03CA780E6710DFE1A63ABA7CDE1CD53, ____rgchWorkBuf_4)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get__rgchWorkBuf_4() const { return ____rgchWorkBuf_4; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of__rgchWorkBuf_4() { return &____rgchWorkBuf_4; }
	inline void set__rgchWorkBuf_4(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		____rgchWorkBuf_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rgchWorkBuf_4), (void*)value);
	}
};


// System.Data.SqlTypes.SqlDateTime
struct SqlDateTime_t18DC6DADB09444EBDCCF6536AA4F1567EC19337D 
{
public:
	// System.Boolean System.Data.SqlTypes.SqlDateTime::m_fNotNull
	bool ___m_fNotNull_0;
	// System.Int32 System.Data.SqlTypes.SqlDateTime::m_day
	int32_t ___m_day_1;
	// System.Int32 System.Data.SqlTypes.SqlDateTime::m_time
	int32_t ___m_time_2;

public:
	inline static int32_t get_offset_of_m_fNotNull_0() { return static_cast<int32_t>(offsetof(SqlDateTime_t18DC6DADB09444EBDCCF6536AA4F1567EC19337D, ___m_fNotNull_0)); }
	inline bool get_m_fNotNull_0() const { return ___m_fNotNull_0; }
	inline bool* get_address_of_m_fNotNull_0() { return &___m_fNotNull_0; }
	inline void set_m_fNotNull_0(bool value)
	{
		___m_fNotNull_0 = value;
	}

	inline static int32_t get_offset_of_m_day_1() { return static_cast<int32_t>(offsetof(SqlDateTime_t18DC6DADB09444EBDCCF6536AA4F1567EC19337D, ___m_day_1)); }
	inline int32_t get_m_day_1() const { return ___m_day_1; }
	inline int32_t* get_address_of_m_day_1() { return &___m_day_1; }
	inline void set_m_day_1(int32_t value)
	{
		___m_day_1 = value;
	}

	inline static int32_t get_offset_of_m_time_2() { return static_cast<int32_t>(offsetof(SqlDateTime_t18DC6DADB09444EBDCCF6536AA4F1567EC19337D, ___m_time_2)); }
	inline int32_t get_m_time_2() const { return ___m_time_2; }
	inline int32_t* get_address_of_m_time_2() { return &___m_time_2; }
	inline void set_m_time_2(int32_t value)
	{
		___m_time_2 = value;
	}
};

struct SqlDateTime_t18DC6DADB09444EBDCCF6536AA4F1567EC19337D_StaticFields
{
public:
	// System.Double System.Data.SqlTypes.SqlDateTime::s_SQLTicksPerMillisecond
	double ___s_SQLTicksPerMillisecond_3;
	// System.Int32 System.Data.SqlTypes.SqlDateTime::SQLTicksPerSecond
	int32_t ___SQLTicksPerSecond_4;
	// System.Int32 System.Data.SqlTypes.SqlDateTime::SQLTicksPerMinute
	int32_t ___SQLTicksPerMinute_5;
	// System.Int32 System.Data.SqlTypes.SqlDateTime::SQLTicksPerHour
	int32_t ___SQLTicksPerHour_6;
	// System.Int32 System.Data.SqlTypes.SqlDateTime::s_SQLTicksPerDay
	int32_t ___s_SQLTicksPerDay_7;
	// System.Int64 System.Data.SqlTypes.SqlDateTime::s_ticksPerSecond
	int64_t ___s_ticksPerSecond_8;
	// System.DateTime System.Data.SqlTypes.SqlDateTime::s_SQLBaseDate
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___s_SQLBaseDate_9;
	// System.Int64 System.Data.SqlTypes.SqlDateTime::s_SQLBaseDateTicks
	int64_t ___s_SQLBaseDateTicks_10;
	// System.Int32 System.Data.SqlTypes.SqlDateTime::s_minYear
	int32_t ___s_minYear_11;
	// System.Int32 System.Data.SqlTypes.SqlDateTime::s_maxYear
	int32_t ___s_maxYear_12;
	// System.Int32 System.Data.SqlTypes.SqlDateTime::s_minDay
	int32_t ___s_minDay_13;
	// System.Int32 System.Data.SqlTypes.SqlDateTime::s_maxDay
	int32_t ___s_maxDay_14;
	// System.Int32 System.Data.SqlTypes.SqlDateTime::s_minTime
	int32_t ___s_minTime_15;
	// System.Int32 System.Data.SqlTypes.SqlDateTime::s_maxTime
	int32_t ___s_maxTime_16;
	// System.Int32 System.Data.SqlTypes.SqlDateTime::s_dayBase
	int32_t ___s_dayBase_17;
	// System.Int32[] System.Data.SqlTypes.SqlDateTime::s_daysToMonth365
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___s_daysToMonth365_18;
	// System.Int32[] System.Data.SqlTypes.SqlDateTime::s_daysToMonth366
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___s_daysToMonth366_19;
	// System.DateTime System.Data.SqlTypes.SqlDateTime::s_minDateTime
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___s_minDateTime_20;
	// System.DateTime System.Data.SqlTypes.SqlDateTime::s_maxDateTime
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___s_maxDateTime_21;
	// System.TimeSpan System.Data.SqlTypes.SqlDateTime::s_minTimeSpan
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___s_minTimeSpan_22;
	// System.TimeSpan System.Data.SqlTypes.SqlDateTime::s_maxTimeSpan
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___s_maxTimeSpan_23;
	// System.String System.Data.SqlTypes.SqlDateTime::s_ISO8601_DateTimeFormat
	String_t* ___s_ISO8601_DateTimeFormat_24;
	// System.String[] System.Data.SqlTypes.SqlDateTime::s_dateTimeFormats
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___s_dateTimeFormats_25;
	// System.Data.SqlTypes.SqlDateTime System.Data.SqlTypes.SqlDateTime::MinValue
	SqlDateTime_t18DC6DADB09444EBDCCF6536AA4F1567EC19337D  ___MinValue_26;
	// System.Data.SqlTypes.SqlDateTime System.Data.SqlTypes.SqlDateTime::MaxValue
	SqlDateTime_t18DC6DADB09444EBDCCF6536AA4F1567EC19337D  ___MaxValue_27;
	// System.Data.SqlTypes.SqlDateTime System.Data.SqlTypes.SqlDateTime::Null
	SqlDateTime_t18DC6DADB09444EBDCCF6536AA4F1567EC19337D  ___Null_28;

public:
	inline static int32_t get_offset_of_s_SQLTicksPerMillisecond_3() { return static_cast<int32_t>(offsetof(SqlDateTime_t18DC6DADB09444EBDCCF6536AA4F1567EC19337D_StaticFields, ___s_SQLTicksPerMillisecond_3)); }
	inline double get_s_SQLTicksPerMillisecond_3() const { return ___s_SQLTicksPerMillisecond_3; }
	inline double* get_address_of_s_SQLTicksPerMillisecond_3() { return &___s_SQLTicksPerMillisecond_3; }
	inline void set_s_SQLTicksPerMillisecond_3(double value)
	{
		___s_SQLTicksPerMillisecond_3 = value;
	}

	inline static int32_t get_offset_of_SQLTicksPerSecond_4() { return static_cast<int32_t>(offsetof(SqlDateTime_t18DC6DADB09444EBDCCF6536AA4F1567EC19337D_StaticFields, ___SQLTicksPerSecond_4)); }
	inline int32_t get_SQLTicksPerSecond_4() const { return ___SQLTicksPerSecond_4; }
	inline int32_t* get_address_of_SQLTicksPerSecond_4() { return &___SQLTicksPerSecond_4; }
	inline void set_SQLTicksPerSecond_4(int32_t value)
	{
		___SQLTicksPerSecond_4 = value;
	}

	inline static int32_t get_offset_of_SQLTicksPerMinute_5() { return static_cast<int32_t>(offsetof(SqlDateTime_t18DC6DADB09444EBDCCF6536AA4F1567EC19337D_StaticFields, ___SQLTicksPerMinute_5)); }
	inline int32_t get_SQLTicksPerMinute_5() const { return ___SQLTicksPerMinute_5; }
	inline int32_t* get_address_of_SQLTicksPerMinute_5() { return &___SQLTicksPerMinute_5; }
	inline void set_SQLTicksPerMinute_5(int32_t value)
	{
		___SQLTicksPerMinute_5 = value;
	}

	inline static int32_t get_offset_of_SQLTicksPerHour_6() { return static_cast<int32_t>(offsetof(SqlDateTime_t18DC6DADB09444EBDCCF6536AA4F1567EC19337D_StaticFields, ___SQLTicksPerHour_6)); }
	inline int32_t get_SQLTicksPerHour_6() const { return ___SQLTicksPerHour_6; }
	inline int32_t* get_address_of_SQLTicksPerHour_6() { return &___SQLTicksPerHour_6; }
	inline void set_SQLTicksPerHour_6(int32_t value)
	{
		___SQLTicksPerHour_6 = value;
	}

	inline static int32_t get_offset_of_s_SQLTicksPerDay_7() { return static_cast<int32_t>(offsetof(SqlDateTime_t18DC6DADB09444EBDCCF6536AA4F1567EC19337D_StaticFields, ___s_SQLTicksPerDay_7)); }
	inline int32_t get_s_SQLTicksPerDay_7() const { return ___s_SQLTicksPerDay_7; }
	inline int32_t* get_address_of_s_SQLTicksPerDay_7() { return &___s_SQLTicksPerDay_7; }
	inline void set_s_SQLTicksPerDay_7(int32_t value)
	{
		___s_SQLTicksPerDay_7 = value;
	}

	inline static int32_t get_offset_of_s_ticksPerSecond_8() { return static_cast<int32_t>(offsetof(SqlDateTime_t18DC6DADB09444EBDCCF6536AA4F1567EC19337D_StaticFields, ___s_ticksPerSecond_8)); }
	inline int64_t get_s_ticksPerSecond_8() const { return ___s_ticksPerSecond_8; }
	inline int64_t* get_address_of_s_ticksPerSecond_8() { return &___s_ticksPerSecond_8; }
	inline void set_s_ticksPerSecond_8(int64_t value)
	{
		___s_ticksPerSecond_8 = value;
	}

	inline static int32_t get_offset_of_s_SQLBaseDate_9() { return static_cast<int32_t>(offsetof(SqlDateTime_t18DC6DADB09444EBDCCF6536AA4F1567EC19337D_StaticFields, ___s_SQLBaseDate_9)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_s_SQLBaseDate_9() const { return ___s_SQLBaseDate_9; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_s_SQLBaseDate_9() { return &___s_SQLBaseDate_9; }
	inline void set_s_SQLBaseDate_9(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___s_SQLBaseDate_9 = value;
	}

	inline static int32_t get_offset_of_s_SQLBaseDateTicks_10() { return static_cast<int32_t>(offsetof(SqlDateTime_t18DC6DADB09444EBDCCF6536AA4F1567EC19337D_StaticFields, ___s_SQLBaseDateTicks_10)); }
	inline int64_t get_s_SQLBaseDateTicks_10() const { return ___s_SQLBaseDateTicks_10; }
	inline int64_t* get_address_of_s_SQLBaseDateTicks_10() { return &___s_SQLBaseDateTicks_10; }
	inline void set_s_SQLBaseDateTicks_10(int64_t value)
	{
		___s_SQLBaseDateTicks_10 = value;
	}

	inline static int32_t get_offset_of_s_minYear_11() { return static_cast<int32_t>(offsetof(SqlDateTime_t18DC6DADB09444EBDCCF6536AA4F1567EC19337D_StaticFields, ___s_minYear_11)); }
	inline int32_t get_s_minYear_11() const { return ___s_minYear_11; }
	inline int32_t* get_address_of_s_minYear_11() { return &___s_minYear_11; }
	inline void set_s_minYear_11(int32_t value)
	{
		___s_minYear_11 = value;
	}

	inline static int32_t get_offset_of_s_maxYear_12() { return static_cast<int32_t>(offsetof(SqlDateTime_t18DC6DADB09444EBDCCF6536AA4F1567EC19337D_StaticFields, ___s_maxYear_12)); }
	inline int32_t get_s_maxYear_12() const { return ___s_maxYear_12; }
	inline int32_t* get_address_of_s_maxYear_12() { return &___s_maxYear_12; }
	inline void set_s_maxYear_12(int32_t value)
	{
		___s_maxYear_12 = value;
	}

	inline static int32_t get_offset_of_s_minDay_13() { return static_cast<int32_t>(offsetof(SqlDateTime_t18DC6DADB09444EBDCCF6536AA4F1567EC19337D_StaticFields, ___s_minDay_13)); }
	inline int32_t get_s_minDay_13() const { return ___s_minDay_13; }
	inline int32_t* get_address_of_s_minDay_13() { return &___s_minDay_13; }
	inline void set_s_minDay_13(int32_t value)
	{
		___s_minDay_13 = value;
	}

	inline static int32_t get_offset_of_s_maxDay_14() { return static_cast<int32_t>(offsetof(SqlDateTime_t18DC6DADB09444EBDCCF6536AA4F1567EC19337D_StaticFields, ___s_maxDay_14)); }
	inline int32_t get_s_maxDay_14() const { return ___s_maxDay_14; }
	inline int32_t* get_address_of_s_maxDay_14() { return &___s_maxDay_14; }
	inline void set_s_maxDay_14(int32_t value)
	{
		___s_maxDay_14 = value;
	}

	inline static int32_t get_offset_of_s_minTime_15() { return static_cast<int32_t>(offsetof(SqlDateTime_t18DC6DADB09444EBDCCF6536AA4F1567EC19337D_StaticFields, ___s_minTime_15)); }
	inline int32_t get_s_minTime_15() const { return ___s_minTime_15; }
	inline int32_t* get_address_of_s_minTime_15() { return &___s_minTime_15; }
	inline void set_s_minTime_15(int32_t value)
	{
		___s_minTime_15 = value;
	}

	inline static int32_t get_offset_of_s_maxTime_16() { return static_cast<int32_t>(offsetof(SqlDateTime_t18DC6DADB09444EBDCCF6536AA4F1567EC19337D_StaticFields, ___s_maxTime_16)); }
	inline int32_t get_s_maxTime_16() const { return ___s_maxTime_16; }
	inline int32_t* get_address_of_s_maxTime_16() { return &___s_maxTime_16; }
	inline void set_s_maxTime_16(int32_t value)
	{
		___s_maxTime_16 = value;
	}

	inline static int32_t get_offset_of_s_dayBase_17() { return static_cast<int32_t>(offsetof(SqlDateTime_t18DC6DADB09444EBDCCF6536AA4F1567EC19337D_StaticFields, ___s_dayBase_17)); }
	inline int32_t get_s_dayBase_17() const { return ___s_dayBase_17; }
	inline int32_t* get_address_of_s_dayBase_17() { return &___s_dayBase_17; }
	inline void set_s_dayBase_17(int32_t value)
	{
		___s_dayBase_17 = value;
	}

	inline static int32_t get_offset_of_s_daysToMonth365_18() { return static_cast<int32_t>(offsetof(SqlDateTime_t18DC6DADB09444EBDCCF6536AA4F1567EC19337D_StaticFields, ___s_daysToMonth365_18)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_s_daysToMonth365_18() const { return ___s_daysToMonth365_18; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_s_daysToMonth365_18() { return &___s_daysToMonth365_18; }
	inline void set_s_daysToMonth365_18(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___s_daysToMonth365_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_daysToMonth365_18), (void*)value);
	}

	inline static int32_t get_offset_of_s_daysToMonth366_19() { return static_cast<int32_t>(offsetof(SqlDateTime_t18DC6DADB09444EBDCCF6536AA4F1567EC19337D_StaticFields, ___s_daysToMonth366_19)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_s_daysToMonth366_19() const { return ___s_daysToMonth366_19; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_s_daysToMonth366_19() { return &___s_daysToMonth366_19; }
	inline void set_s_daysToMonth366_19(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___s_daysToMonth366_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_daysToMonth366_19), (void*)value);
	}

	inline static int32_t get_offset_of_s_minDateTime_20() { return static_cast<int32_t>(offsetof(SqlDateTime_t18DC6DADB09444EBDCCF6536AA4F1567EC19337D_StaticFields, ___s_minDateTime_20)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_s_minDateTime_20() const { return ___s_minDateTime_20; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_s_minDateTime_20() { return &___s_minDateTime_20; }
	inline void set_s_minDateTime_20(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___s_minDateTime_20 = value;
	}

	inline static int32_t get_offset_of_s_maxDateTime_21() { return static_cast<int32_t>(offsetof(SqlDateTime_t18DC6DADB09444EBDCCF6536AA4F1567EC19337D_StaticFields, ___s_maxDateTime_21)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_s_maxDateTime_21() const { return ___s_maxDateTime_21; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_s_maxDateTime_21() { return &___s_maxDateTime_21; }
	inline void set_s_maxDateTime_21(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___s_maxDateTime_21 = value;
	}

	inline static int32_t get_offset_of_s_minTimeSpan_22() { return static_cast<int32_t>(offsetof(SqlDateTime_t18DC6DADB09444EBDCCF6536AA4F1567EC19337D_StaticFields, ___s_minTimeSpan_22)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_s_minTimeSpan_22() const { return ___s_minTimeSpan_22; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_s_minTimeSpan_22() { return &___s_minTimeSpan_22; }
	inline void set_s_minTimeSpan_22(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___s_minTimeSpan_22 = value;
	}

	inline static int32_t get_offset_of_s_maxTimeSpan_23() { return static_cast<int32_t>(offsetof(SqlDateTime_t18DC6DADB09444EBDCCF6536AA4F1567EC19337D_StaticFields, ___s_maxTimeSpan_23)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_s_maxTimeSpan_23() const { return ___s_maxTimeSpan_23; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_s_maxTimeSpan_23() { return &___s_maxTimeSpan_23; }
	inline void set_s_maxTimeSpan_23(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___s_maxTimeSpan_23 = value;
	}

	inline static int32_t get_offset_of_s_ISO8601_DateTimeFormat_24() { return static_cast<int32_t>(offsetof(SqlDateTime_t18DC6DADB09444EBDCCF6536AA4F1567EC19337D_StaticFields, ___s_ISO8601_DateTimeFormat_24)); }
	inline String_t* get_s_ISO8601_DateTimeFormat_24() const { return ___s_ISO8601_DateTimeFormat_24; }
	inline String_t** get_address_of_s_ISO8601_DateTimeFormat_24() { return &___s_ISO8601_DateTimeFormat_24; }
	inline void set_s_ISO8601_DateTimeFormat_24(String_t* value)
	{
		___s_ISO8601_DateTimeFormat_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ISO8601_DateTimeFormat_24), (void*)value);
	}

	inline static int32_t get_offset_of_s_dateTimeFormats_25() { return static_cast<int32_t>(offsetof(SqlDateTime_t18DC6DADB09444EBDCCF6536AA4F1567EC19337D_StaticFields, ___s_dateTimeFormats_25)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_s_dateTimeFormats_25() const { return ___s_dateTimeFormats_25; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_s_dateTimeFormats_25() { return &___s_dateTimeFormats_25; }
	inline void set_s_dateTimeFormats_25(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___s_dateTimeFormats_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_dateTimeFormats_25), (void*)value);
	}

	inline static int32_t get_offset_of_MinValue_26() { return static_cast<int32_t>(offsetof(SqlDateTime_t18DC6DADB09444EBDCCF6536AA4F1567EC19337D_StaticFields, ___MinValue_26)); }
	inline SqlDateTime_t18DC6DADB09444EBDCCF6536AA4F1567EC19337D  get_MinValue_26() const { return ___MinValue_26; }
	inline SqlDateTime_t18DC6DADB09444EBDCCF6536AA4F1567EC19337D * get_address_of_MinValue_26() { return &___MinValue_26; }
	inline void set_MinValue_26(SqlDateTime_t18DC6DADB09444EBDCCF6536AA4F1567EC19337D  value)
	{
		___MinValue_26 = value;
	}

	inline static int32_t get_offset_of_MaxValue_27() { return static_cast<int32_t>(offsetof(SqlDateTime_t18DC6DADB09444EBDCCF6536AA4F1567EC19337D_StaticFields, ___MaxValue_27)); }
	inline SqlDateTime_t18DC6DADB09444EBDCCF6536AA4F1567EC19337D  get_MaxValue_27() const { return ___MaxValue_27; }
	inline SqlDateTime_t18DC6DADB09444EBDCCF6536AA4F1567EC19337D * get_address_of_MaxValue_27() { return &___MaxValue_27; }
	inline void set_MaxValue_27(SqlDateTime_t18DC6DADB09444EBDCCF6536AA4F1567EC19337D  value)
	{
		___MaxValue_27 = value;
	}

	inline static int32_t get_offset_of_Null_28() { return static_cast<int32_t>(offsetof(SqlDateTime_t18DC6DADB09444EBDCCF6536AA4F1567EC19337D_StaticFields, ___Null_28)); }
	inline SqlDateTime_t18DC6DADB09444EBDCCF6536AA4F1567EC19337D  get_Null_28() const { return ___Null_28; }
	inline SqlDateTime_t18DC6DADB09444EBDCCF6536AA4F1567EC19337D * get_address_of_Null_28() { return &___Null_28; }
	inline void set_Null_28(SqlDateTime_t18DC6DADB09444EBDCCF6536AA4F1567EC19337D  value)
	{
		___Null_28 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Data.SqlTypes.SqlDateTime
struct SqlDateTime_t18DC6DADB09444EBDCCF6536AA4F1567EC19337D_marshaled_pinvoke
{
	int32_t ___m_fNotNull_0;
	int32_t ___m_day_1;
	int32_t ___m_time_2;
};
// Native definition for COM marshalling of System.Data.SqlTypes.SqlDateTime
struct SqlDateTime_t18DC6DADB09444EBDCCF6536AA4F1567EC19337D_marshaled_com
{
	int32_t ___m_fNotNull_0;
	int32_t ___m_day_1;
	int32_t ___m_time_2;
};

// System.Data.SqlTypes.SqlString
struct SqlString_t2CFD797DC19AC10EFAE0277F867ABCFCD7F7AA6E 
{
public:
	// System.String System.Data.SqlTypes.SqlString::m_value
	String_t* ___m_value_0;
	// System.Globalization.CompareInfo System.Data.SqlTypes.SqlString::m_cmpInfo
	CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * ___m_cmpInfo_1;
	// System.Int32 System.Data.SqlTypes.SqlString::m_lcid
	int32_t ___m_lcid_2;
	// System.Data.SqlTypes.SqlCompareOptions System.Data.SqlTypes.SqlString::m_flag
	int32_t ___m_flag_3;
	// System.Boolean System.Data.SqlTypes.SqlString::m_fNotNull
	bool ___m_fNotNull_4;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(SqlString_t2CFD797DC19AC10EFAE0277F867ABCFCD7F7AA6E, ___m_value_0)); }
	inline String_t* get_m_value_0() const { return ___m_value_0; }
	inline String_t** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(String_t* value)
	{
		___m_value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_value_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_cmpInfo_1() { return static_cast<int32_t>(offsetof(SqlString_t2CFD797DC19AC10EFAE0277F867ABCFCD7F7AA6E, ___m_cmpInfo_1)); }
	inline CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * get_m_cmpInfo_1() const { return ___m_cmpInfo_1; }
	inline CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 ** get_address_of_m_cmpInfo_1() { return &___m_cmpInfo_1; }
	inline void set_m_cmpInfo_1(CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * value)
	{
		___m_cmpInfo_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_cmpInfo_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_lcid_2() { return static_cast<int32_t>(offsetof(SqlString_t2CFD797DC19AC10EFAE0277F867ABCFCD7F7AA6E, ___m_lcid_2)); }
	inline int32_t get_m_lcid_2() const { return ___m_lcid_2; }
	inline int32_t* get_address_of_m_lcid_2() { return &___m_lcid_2; }
	inline void set_m_lcid_2(int32_t value)
	{
		___m_lcid_2 = value;
	}

	inline static int32_t get_offset_of_m_flag_3() { return static_cast<int32_t>(offsetof(SqlString_t2CFD797DC19AC10EFAE0277F867ABCFCD7F7AA6E, ___m_flag_3)); }
	inline int32_t get_m_flag_3() const { return ___m_flag_3; }
	inline int32_t* get_address_of_m_flag_3() { return &___m_flag_3; }
	inline void set_m_flag_3(int32_t value)
	{
		___m_flag_3 = value;
	}

	inline static int32_t get_offset_of_m_fNotNull_4() { return static_cast<int32_t>(offsetof(SqlString_t2CFD797DC19AC10EFAE0277F867ABCFCD7F7AA6E, ___m_fNotNull_4)); }
	inline bool get_m_fNotNull_4() const { return ___m_fNotNull_4; }
	inline bool* get_address_of_m_fNotNull_4() { return &___m_fNotNull_4; }
	inline void set_m_fNotNull_4(bool value)
	{
		___m_fNotNull_4 = value;
	}
};

struct SqlString_t2CFD797DC19AC10EFAE0277F867ABCFCD7F7AA6E_StaticFields
{
public:
	// System.Data.SqlTypes.SqlString System.Data.SqlTypes.SqlString::Null
	SqlString_t2CFD797DC19AC10EFAE0277F867ABCFCD7F7AA6E  ___Null_5;
	// System.Text.UnicodeEncoding System.Data.SqlTypes.SqlString::s_unicodeEncoding
	UnicodeEncoding_tBB60B97AFC49D6246F28BF16D3E09822FCCACC68 * ___s_unicodeEncoding_6;
	// System.Int32 System.Data.SqlTypes.SqlString::IgnoreCase
	int32_t ___IgnoreCase_7;
	// System.Int32 System.Data.SqlTypes.SqlString::IgnoreWidth
	int32_t ___IgnoreWidth_8;
	// System.Int32 System.Data.SqlTypes.SqlString::IgnoreNonSpace
	int32_t ___IgnoreNonSpace_9;
	// System.Int32 System.Data.SqlTypes.SqlString::IgnoreKanaType
	int32_t ___IgnoreKanaType_10;
	// System.Int32 System.Data.SqlTypes.SqlString::BinarySort
	int32_t ___BinarySort_11;
	// System.Int32 System.Data.SqlTypes.SqlString::BinarySort2
	int32_t ___BinarySort2_12;
	// System.Data.SqlTypes.SqlCompareOptions System.Data.SqlTypes.SqlString::s_iDefaultFlag
	int32_t ___s_iDefaultFlag_13;
	// System.Globalization.CompareOptions System.Data.SqlTypes.SqlString::s_iValidCompareOptionMask
	int32_t ___s_iValidCompareOptionMask_14;
	// System.Data.SqlTypes.SqlCompareOptions System.Data.SqlTypes.SqlString::s_iValidSqlCompareOptionMask
	int32_t ___s_iValidSqlCompareOptionMask_15;
	// System.Int32 System.Data.SqlTypes.SqlString::s_lcidUSEnglish
	int32_t ___s_lcidUSEnglish_16;
	// System.Int32 System.Data.SqlTypes.SqlString::s_lcidBinary
	int32_t ___s_lcidBinary_17;

public:
	inline static int32_t get_offset_of_Null_5() { return static_cast<int32_t>(offsetof(SqlString_t2CFD797DC19AC10EFAE0277F867ABCFCD7F7AA6E_StaticFields, ___Null_5)); }
	inline SqlString_t2CFD797DC19AC10EFAE0277F867ABCFCD7F7AA6E  get_Null_5() const { return ___Null_5; }
	inline SqlString_t2CFD797DC19AC10EFAE0277F867ABCFCD7F7AA6E * get_address_of_Null_5() { return &___Null_5; }
	inline void set_Null_5(SqlString_t2CFD797DC19AC10EFAE0277F867ABCFCD7F7AA6E  value)
	{
		___Null_5 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___Null_5))->___m_value_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___Null_5))->___m_cmpInfo_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_s_unicodeEncoding_6() { return static_cast<int32_t>(offsetof(SqlString_t2CFD797DC19AC10EFAE0277F867ABCFCD7F7AA6E_StaticFields, ___s_unicodeEncoding_6)); }
	inline UnicodeEncoding_tBB60B97AFC49D6246F28BF16D3E09822FCCACC68 * get_s_unicodeEncoding_6() const { return ___s_unicodeEncoding_6; }
	inline UnicodeEncoding_tBB60B97AFC49D6246F28BF16D3E09822FCCACC68 ** get_address_of_s_unicodeEncoding_6() { return &___s_unicodeEncoding_6; }
	inline void set_s_unicodeEncoding_6(UnicodeEncoding_tBB60B97AFC49D6246F28BF16D3E09822FCCACC68 * value)
	{
		___s_unicodeEncoding_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_unicodeEncoding_6), (void*)value);
	}

	inline static int32_t get_offset_of_IgnoreCase_7() { return static_cast<int32_t>(offsetof(SqlString_t2CFD797DC19AC10EFAE0277F867ABCFCD7F7AA6E_StaticFields, ___IgnoreCase_7)); }
	inline int32_t get_IgnoreCase_7() const { return ___IgnoreCase_7; }
	inline int32_t* get_address_of_IgnoreCase_7() { return &___IgnoreCase_7; }
	inline void set_IgnoreCase_7(int32_t value)
	{
		___IgnoreCase_7 = value;
	}

	inline static int32_t get_offset_of_IgnoreWidth_8() { return static_cast<int32_t>(offsetof(SqlString_t2CFD797DC19AC10EFAE0277F867ABCFCD7F7AA6E_StaticFields, ___IgnoreWidth_8)); }
	inline int32_t get_IgnoreWidth_8() const { return ___IgnoreWidth_8; }
	inline int32_t* get_address_of_IgnoreWidth_8() { return &___IgnoreWidth_8; }
	inline void set_IgnoreWidth_8(int32_t value)
	{
		___IgnoreWidth_8 = value;
	}

	inline static int32_t get_offset_of_IgnoreNonSpace_9() { return static_cast<int32_t>(offsetof(SqlString_t2CFD797DC19AC10EFAE0277F867ABCFCD7F7AA6E_StaticFields, ___IgnoreNonSpace_9)); }
	inline int32_t get_IgnoreNonSpace_9() const { return ___IgnoreNonSpace_9; }
	inline int32_t* get_address_of_IgnoreNonSpace_9() { return &___IgnoreNonSpace_9; }
	inline void set_IgnoreNonSpace_9(int32_t value)
	{
		___IgnoreNonSpace_9 = value;
	}

	inline static int32_t get_offset_of_IgnoreKanaType_10() { return static_cast<int32_t>(offsetof(SqlString_t2CFD797DC19AC10EFAE0277F867ABCFCD7F7AA6E_StaticFields, ___IgnoreKanaType_10)); }
	inline int32_t get_IgnoreKanaType_10() const { return ___IgnoreKanaType_10; }
	inline int32_t* get_address_of_IgnoreKanaType_10() { return &___IgnoreKanaType_10; }
	inline void set_IgnoreKanaType_10(int32_t value)
	{
		___IgnoreKanaType_10 = value;
	}

	inline static int32_t get_offset_of_BinarySort_11() { return static_cast<int32_t>(offsetof(SqlString_t2CFD797DC19AC10EFAE0277F867ABCFCD7F7AA6E_StaticFields, ___BinarySort_11)); }
	inline int32_t get_BinarySort_11() const { return ___BinarySort_11; }
	inline int32_t* get_address_of_BinarySort_11() { return &___BinarySort_11; }
	inline void set_BinarySort_11(int32_t value)
	{
		___BinarySort_11 = value;
	}

	inline static int32_t get_offset_of_BinarySort2_12() { return static_cast<int32_t>(offsetof(SqlString_t2CFD797DC19AC10EFAE0277F867ABCFCD7F7AA6E_StaticFields, ___BinarySort2_12)); }
	inline int32_t get_BinarySort2_12() const { return ___BinarySort2_12; }
	inline int32_t* get_address_of_BinarySort2_12() { return &___BinarySort2_12; }
	inline void set_BinarySort2_12(int32_t value)
	{
		___BinarySort2_12 = value;
	}

	inline static int32_t get_offset_of_s_iDefaultFlag_13() { return static_cast<int32_t>(offsetof(SqlString_t2CFD797DC19AC10EFAE0277F867ABCFCD7F7AA6E_StaticFields, ___s_iDefaultFlag_13)); }
	inline int32_t get_s_iDefaultFlag_13() const { return ___s_iDefaultFlag_13; }
	inline int32_t* get_address_of_s_iDefaultFlag_13() { return &___s_iDefaultFlag_13; }
	inline void set_s_iDefaultFlag_13(int32_t value)
	{
		___s_iDefaultFlag_13 = value;
	}

	inline static int32_t get_offset_of_s_iValidCompareOptionMask_14() { return static_cast<int32_t>(offsetof(SqlString_t2CFD797DC19AC10EFAE0277F867ABCFCD7F7AA6E_StaticFields, ___s_iValidCompareOptionMask_14)); }
	inline int32_t get_s_iValidCompareOptionMask_14() const { return ___s_iValidCompareOptionMask_14; }
	inline int32_t* get_address_of_s_iValidCompareOptionMask_14() { return &___s_iValidCompareOptionMask_14; }
	inline void set_s_iValidCompareOptionMask_14(int32_t value)
	{
		___s_iValidCompareOptionMask_14 = value;
	}

	inline static int32_t get_offset_of_s_iValidSqlCompareOptionMask_15() { return static_cast<int32_t>(offsetof(SqlString_t2CFD797DC19AC10EFAE0277F867ABCFCD7F7AA6E_StaticFields, ___s_iValidSqlCompareOptionMask_15)); }
	inline int32_t get_s_iValidSqlCompareOptionMask_15() const { return ___s_iValidSqlCompareOptionMask_15; }
	inline int32_t* get_address_of_s_iValidSqlCompareOptionMask_15() { return &___s_iValidSqlCompareOptionMask_15; }
	inline void set_s_iValidSqlCompareOptionMask_15(int32_t value)
	{
		___s_iValidSqlCompareOptionMask_15 = value;
	}

	inline static int32_t get_offset_of_s_lcidUSEnglish_16() { return static_cast<int32_t>(offsetof(SqlString_t2CFD797DC19AC10EFAE0277F867ABCFCD7F7AA6E_StaticFields, ___s_lcidUSEnglish_16)); }
	inline int32_t get_s_lcidUSEnglish_16() const { return ___s_lcidUSEnglish_16; }
	inline int32_t* get_address_of_s_lcidUSEnglish_16() { return &___s_lcidUSEnglish_16; }
	inline void set_s_lcidUSEnglish_16(int32_t value)
	{
		___s_lcidUSEnglish_16 = value;
	}

	inline static int32_t get_offset_of_s_lcidBinary_17() { return static_cast<int32_t>(offsetof(SqlString_t2CFD797DC19AC10EFAE0277F867ABCFCD7F7AA6E_StaticFields, ___s_lcidBinary_17)); }
	inline int32_t get_s_lcidBinary_17() const { return ___s_lcidBinary_17; }
	inline int32_t* get_address_of_s_lcidBinary_17() { return &___s_lcidBinary_17; }
	inline void set_s_lcidBinary_17(int32_t value)
	{
		___s_lcidBinary_17 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Data.SqlTypes.SqlString
struct SqlString_t2CFD797DC19AC10EFAE0277F867ABCFCD7F7AA6E_marshaled_pinvoke
{
	char* ___m_value_0;
	CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * ___m_cmpInfo_1;
	int32_t ___m_lcid_2;
	int32_t ___m_flag_3;
	int32_t ___m_fNotNull_4;
};
// Native definition for COM marshalling of System.Data.SqlTypes.SqlString
struct SqlString_t2CFD797DC19AC10EFAE0277F867ABCFCD7F7AA6E_marshaled_com
{
	Il2CppChar* ___m_value_0;
	CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * ___m_cmpInfo_1;
	int32_t ___m_lcid_2;
	int32_t ___m_flag_3;
	int32_t ___m_fNotNull_4;
};

// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver
struct Solver_tA2792575C8F41F0E48DDDB6CB63608F8AA24541A  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::updateLinkedTransform
	bool ___updateLinkedTransform_4;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::moveLerpTime
	float ___moveLerpTime_5;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::rotateLerpTime
	float ___rotateLerpTime_6;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::scaleLerpTime
	float ___scaleLerpTime_7;
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::maintainScaleOnInitialization
	bool ___maintainScaleOnInitialization_8;
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::smoothing
	bool ___smoothing_9;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::lifetime
	float ___lifetime_10;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::currentLifetime
	float ___currentLifetime_11;
	// Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::SolverHandler
	SolverHandler_tBA5A2A64D18A2DE89D8CC8817DC0E65DD7943FA1 * ___SolverHandler_12;

public:
	inline static int32_t get_offset_of_updateLinkedTransform_4() { return static_cast<int32_t>(offsetof(Solver_tA2792575C8F41F0E48DDDB6CB63608F8AA24541A, ___updateLinkedTransform_4)); }
	inline bool get_updateLinkedTransform_4() const { return ___updateLinkedTransform_4; }
	inline bool* get_address_of_updateLinkedTransform_4() { return &___updateLinkedTransform_4; }
	inline void set_updateLinkedTransform_4(bool value)
	{
		___updateLinkedTransform_4 = value;
	}

	inline static int32_t get_offset_of_moveLerpTime_5() { return static_cast<int32_t>(offsetof(Solver_tA2792575C8F41F0E48DDDB6CB63608F8AA24541A, ___moveLerpTime_5)); }
	inline float get_moveLerpTime_5() const { return ___moveLerpTime_5; }
	inline float* get_address_of_moveLerpTime_5() { return &___moveLerpTime_5; }
	inline void set_moveLerpTime_5(float value)
	{
		___moveLerpTime_5 = value;
	}

	inline static int32_t get_offset_of_rotateLerpTime_6() { return static_cast<int32_t>(offsetof(Solver_tA2792575C8F41F0E48DDDB6CB63608F8AA24541A, ___rotateLerpTime_6)); }
	inline float get_rotateLerpTime_6() const { return ___rotateLerpTime_6; }
	inline float* get_address_of_rotateLerpTime_6() { return &___rotateLerpTime_6; }
	inline void set_rotateLerpTime_6(float value)
	{
		___rotateLerpTime_6 = value;
	}

	inline static int32_t get_offset_of_scaleLerpTime_7() { return static_cast<int32_t>(offsetof(Solver_tA2792575C8F41F0E48DDDB6CB63608F8AA24541A, ___scaleLerpTime_7)); }
	inline float get_scaleLerpTime_7() const { return ___scaleLerpTime_7; }
	inline float* get_address_of_scaleLerpTime_7() { return &___scaleLerpTime_7; }
	inline void set_scaleLerpTime_7(float value)
	{
		___scaleLerpTime_7 = value;
	}

	inline static int32_t get_offset_of_maintainScaleOnInitialization_8() { return static_cast<int32_t>(offsetof(Solver_tA2792575C8F41F0E48DDDB6CB63608F8AA24541A, ___maintainScaleOnInitialization_8)); }
	inline bool get_maintainScaleOnInitialization_8() const { return ___maintainScaleOnInitialization_8; }
	inline bool* get_address_of_maintainScaleOnInitialization_8() { return &___maintainScaleOnInitialization_8; }
	inline void set_maintainScaleOnInitialization_8(bool value)
	{
		___maintainScaleOnInitialization_8 = value;
	}

	inline static int32_t get_offset_of_smoothing_9() { return static_cast<int32_t>(offsetof(Solver_tA2792575C8F41F0E48DDDB6CB63608F8AA24541A, ___smoothing_9)); }
	inline bool get_smoothing_9() const { return ___smoothing_9; }
	inline bool* get_address_of_smoothing_9() { return &___smoothing_9; }
	inline void set_smoothing_9(bool value)
	{
		___smoothing_9 = value;
	}

	inline static int32_t get_offset_of_lifetime_10() { return static_cast<int32_t>(offsetof(Solver_tA2792575C8F41F0E48DDDB6CB63608F8AA24541A, ___lifetime_10)); }
	inline float get_lifetime_10() const { return ___lifetime_10; }
	inline float* get_address_of_lifetime_10() { return &___lifetime_10; }
	inline void set_lifetime_10(float value)
	{
		___lifetime_10 = value;
	}

	inline static int32_t get_offset_of_currentLifetime_11() { return static_cast<int32_t>(offsetof(Solver_tA2792575C8F41F0E48DDDB6CB63608F8AA24541A, ___currentLifetime_11)); }
	inline float get_currentLifetime_11() const { return ___currentLifetime_11; }
	inline float* get_address_of_currentLifetime_11() { return &___currentLifetime_11; }
	inline void set_currentLifetime_11(float value)
	{
		___currentLifetime_11 = value;
	}

	inline static int32_t get_offset_of_SolverHandler_12() { return static_cast<int32_t>(offsetof(Solver_tA2792575C8F41F0E48DDDB6CB63608F8AA24541A, ___SolverHandler_12)); }
	inline SolverHandler_tBA5A2A64D18A2DE89D8CC8817DC0E65DD7943FA1 * get_SolverHandler_12() const { return ___SolverHandler_12; }
	inline SolverHandler_tBA5A2A64D18A2DE89D8CC8817DC0E65DD7943FA1 ** get_address_of_SolverHandler_12() { return &___SolverHandler_12; }
	inline void set_SolverHandler_12(SolverHandler_tBA5A2A64D18A2DE89D8CC8817DC0E65DD7943FA1 * value)
	{
		___SolverHandler_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SolverHandler_12), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Single[]
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) float m_Items[1];

public:
	inline float GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float value)
	{
		m_Items[index] = value;
	}
};
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint8_t m_Items[1];

public:
	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
// System.Int16[]
struct Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int16_t m_Items[1];

public:
	inline int16_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int16_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int16_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int16_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int16_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int16_t value)
	{
		m_Items[index] = value;
	}
};
// System.UInt16[]
struct UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint16_t m_Items[1];

public:
	inline uint16_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint16_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint16_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint16_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint16_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint16_t value)
	{
		m_Items[index] = value;
	}
};
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// System.UInt32[]
struct UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint32_t m_Items[1];

public:
	inline uint32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint32_t value)
	{
		m_Items[index] = value;
	}
};
// System.Int64[]
struct Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int64_t m_Items[1];

public:
	inline int64_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int64_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int64_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int64_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int64_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int64_t value)
	{
		m_Items[index] = value;
	}
};
// System.UInt64[]
struct UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint64_t m_Items[1];

public:
	inline uint64_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint64_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint64_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint64_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint64_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint64_t value)
	{
		m_Items[index] = value;
	}
};
// System.Double[]
struct DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) double m_Items[1];

public:
	inline double GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline double* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, double value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline double GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline double* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, double value)
	{
		m_Items[index] = value;
	}
};
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Guid[]
struct GuidU5BU5D_t6DCED1B9FC5592C43FAA73D81705104BD18151B8  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Guid_t  m_Items[1];

public:
	inline Guid_t  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Guid_t * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Guid_t  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Guid_t  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Guid_t * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Guid_t  value)
	{
		m_Items[index] = value;
	}
};
// Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver[]
struct SolverU5BU5D_tCDFF4AA7AC3D1F953967DC80B932F9FF5F205D4B  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Solver_tA2792575C8F41F0E48DDDB6CB63608F8AA24541A * m_Items[1];

public:
	inline Solver_tA2792575C8F41F0E48DDDB6CB63608F8AA24541A * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Solver_tA2792575C8F41F0E48DDDB6CB63608F8AA24541A ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Solver_tA2792575C8F41F0E48DDDB6CB63608F8AA24541A * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Solver_tA2792575C8F41F0E48DDDB6CB63608F8AA24541A * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Solver_tA2792575C8F41F0E48DDDB6CB63608F8AA24541A ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Solver_tA2792575C8F41F0E48DDDB6CB63608F8AA24541A * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject[]
struct SpatialAwarenessMeshObjectU5BU5D_t411C31FFC63D0C64513DABEC7E1F54D6849F7300  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) SpatialAwarenessMeshObject_tE3B25350576B52757F2CF7031F93D9E690972899 * m_Items[1];

public:
	inline SpatialAwarenessMeshObject_tE3B25350576B52757F2CF7031F93D9E690972899 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline SpatialAwarenessMeshObject_tE3B25350576B52757F2CF7031F93D9E690972899 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, SpatialAwarenessMeshObject_tE3B25350576B52757F2CF7031F93D9E690972899 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline SpatialAwarenessMeshObject_tE3B25350576B52757F2CF7031F93D9E690972899 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline SpatialAwarenessMeshObject_tE3B25350576B52757F2CF7031F93D9E690972899 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, SpatialAwarenessMeshObject_tE3B25350576B52757F2CF7031F93D9E690972899 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessPlanarObject[]
struct SpatialAwarenessPlanarObjectU5BU5D_t36CFD4AD8AD6EB85F67310C71BCE6BF9D5EE2FD8  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) SpatialAwarenessPlanarObject_t153BC2F70AA3C6FE6D4184D6396293B601E81582 * m_Items[1];

public:
	inline SpatialAwarenessPlanarObject_t153BC2F70AA3C6FE6D4184D6396293B601E81582 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline SpatialAwarenessPlanarObject_t153BC2F70AA3C6FE6D4184D6396293B601E81582 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, SpatialAwarenessPlanarObject_t153BC2F70AA3C6FE6D4184D6396293B601E81582 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline SpatialAwarenessPlanarObject_t153BC2F70AA3C6FE6D4184D6396293B601E81582 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline SpatialAwarenessPlanarObject_t153BC2F70AA3C6FE6D4184D6396293B601E81582 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, SpatialAwarenessPlanarObject_t153BC2F70AA3C6FE6D4184D6396293B601E81582 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Microsoft.MixedReality.Toolkit.Experimental.SpatialAwareness.SpatialAwarenessSceneObject[]
struct SpatialAwarenessSceneObjectU5BU5D_t4BD41115CAD73B8A43C3C559C436F5BAE253C589  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) SpatialAwarenessSceneObject_tAC052BA8D6B83B9DEB7AD61378718D40B7C9C12F * m_Items[1];

public:
	inline SpatialAwarenessSceneObject_tAC052BA8D6B83B9DEB7AD61378718D40B7C9C12F * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline SpatialAwarenessSceneObject_tAC052BA8D6B83B9DEB7AD61378718D40B7C9C12F ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, SpatialAwarenessSceneObject_tAC052BA8D6B83B9DEB7AD61378718D40B7C9C12F * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline SpatialAwarenessSceneObject_tAC052BA8D6B83B9DEB7AD61378718D40B7C9C12F * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline SpatialAwarenessSceneObject_tAC052BA8D6B83B9DEB7AD61378718D40B7C9C12F ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, SpatialAwarenessSceneObject_tAC052BA8D6B83B9DEB7AD61378718D40B7C9C12F * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Sprite[]
struct SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * m_Items[1];

public:
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Data.SqlTypes.SqlBinary[]
struct SqlBinaryU5BU5D_t4A1CD2FDEEC6E9EAEC15A8C28A7701484B8D4485  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) SqlBinary_t83BA1113ACB82E306D2EC534B0864D8A4A7D125B  m_Items[1];

public:
	inline SqlBinary_t83BA1113ACB82E306D2EC534B0864D8A4A7D125B  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline SqlBinary_t83BA1113ACB82E306D2EC534B0864D8A4A7D125B * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, SqlBinary_t83BA1113ACB82E306D2EC534B0864D8A4A7D125B  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____value_0), (void*)NULL);
	}
	inline SqlBinary_t83BA1113ACB82E306D2EC534B0864D8A4A7D125B  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline SqlBinary_t83BA1113ACB82E306D2EC534B0864D8A4A7D125B * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, SqlBinary_t83BA1113ACB82E306D2EC534B0864D8A4A7D125B  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____value_0), (void*)NULL);
	}
};
// System.Data.SqlTypes.SqlBoolean[]
struct SqlBooleanU5BU5D_t07B79EADC41ED65294851549545D3F3918FDC6A0  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) SqlBoolean_tD34BC5894C8A7061B0E2D2D2CBE8E4A5257FD4F3  m_Items[1];

public:
	inline SqlBoolean_tD34BC5894C8A7061B0E2D2D2CBE8E4A5257FD4F3  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline SqlBoolean_tD34BC5894C8A7061B0E2D2D2CBE8E4A5257FD4F3 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, SqlBoolean_tD34BC5894C8A7061B0E2D2D2CBE8E4A5257FD4F3  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline SqlBoolean_tD34BC5894C8A7061B0E2D2D2CBE8E4A5257FD4F3  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline SqlBoolean_tD34BC5894C8A7061B0E2D2D2CBE8E4A5257FD4F3 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, SqlBoolean_tD34BC5894C8A7061B0E2D2D2CBE8E4A5257FD4F3  value)
	{
		m_Items[index] = value;
	}
};
// System.Data.SqlTypes.SqlByte[]
struct SqlByteU5BU5D_tB403A2418F730327A0789B78506CDACCECBB4CB6  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) SqlByte_t5E78C40CFCD84AF432F47D15743E513022E09B41  m_Items[1];

public:
	inline SqlByte_t5E78C40CFCD84AF432F47D15743E513022E09B41  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline SqlByte_t5E78C40CFCD84AF432F47D15743E513022E09B41 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, SqlByte_t5E78C40CFCD84AF432F47D15743E513022E09B41  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline SqlByte_t5E78C40CFCD84AF432F47D15743E513022E09B41  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline SqlByte_t5E78C40CFCD84AF432F47D15743E513022E09B41 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, SqlByte_t5E78C40CFCD84AF432F47D15743E513022E09B41  value)
	{
		m_Items[index] = value;
	}
};
// System.Data.SqlTypes.SqlBytes[]
struct SqlBytesU5BU5D_t6F60DB18D1E498C69C2A2A292075B88252A47C49  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) SqlBytes_tA89570BFA7CB45E83EAFB32FF13B8ABEC21555B6 * m_Items[1];

public:
	inline SqlBytes_tA89570BFA7CB45E83EAFB32FF13B8ABEC21555B6 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline SqlBytes_tA89570BFA7CB45E83EAFB32FF13B8ABEC21555B6 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, SqlBytes_tA89570BFA7CB45E83EAFB32FF13B8ABEC21555B6 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline SqlBytes_tA89570BFA7CB45E83EAFB32FF13B8ABEC21555B6 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline SqlBytes_tA89570BFA7CB45E83EAFB32FF13B8ABEC21555B6 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, SqlBytes_tA89570BFA7CB45E83EAFB32FF13B8ABEC21555B6 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Data.SqlTypes.SqlChars[]
struct SqlCharsU5BU5D_t20FD646DC66170A3025ACFD16C890584136139FC  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) SqlChars_t123841A0B03CA780E6710DFE1A63ABA7CDE1CD53 * m_Items[1];

public:
	inline SqlChars_t123841A0B03CA780E6710DFE1A63ABA7CDE1CD53 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline SqlChars_t123841A0B03CA780E6710DFE1A63ABA7CDE1CD53 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, SqlChars_t123841A0B03CA780E6710DFE1A63ABA7CDE1CD53 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline SqlChars_t123841A0B03CA780E6710DFE1A63ABA7CDE1CD53 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline SqlChars_t123841A0B03CA780E6710DFE1A63ABA7CDE1CD53 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, SqlChars_t123841A0B03CA780E6710DFE1A63ABA7CDE1CD53 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Data.SqlTypes.SqlDateTime[]
struct SqlDateTimeU5BU5D_t12EEE5C7616A30E9F9CE304F76B5912B2A47EABF  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) SqlDateTime_t18DC6DADB09444EBDCCF6536AA4F1567EC19337D  m_Items[1];

public:
	inline SqlDateTime_t18DC6DADB09444EBDCCF6536AA4F1567EC19337D  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline SqlDateTime_t18DC6DADB09444EBDCCF6536AA4F1567EC19337D * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, SqlDateTime_t18DC6DADB09444EBDCCF6536AA4F1567EC19337D  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline SqlDateTime_t18DC6DADB09444EBDCCF6536AA4F1567EC19337D  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline SqlDateTime_t18DC6DADB09444EBDCCF6536AA4F1567EC19337D * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, SqlDateTime_t18DC6DADB09444EBDCCF6536AA4F1567EC19337D  value)
	{
		m_Items[index] = value;
	}
};
// System.Data.SqlTypes.SqlDecimal[]
struct SqlDecimalU5BU5D_t436F1578CFBAD13111599A27A32FB894D8307CBD  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) SqlDecimal_t2E3764DA58ABCDADAC6F390C24C8273EF87AA54B  m_Items[1];

public:
	inline SqlDecimal_t2E3764DA58ABCDADAC6F390C24C8273EF87AA54B  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline SqlDecimal_t2E3764DA58ABCDADAC6F390C24C8273EF87AA54B * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, SqlDecimal_t2E3764DA58ABCDADAC6F390C24C8273EF87AA54B  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline SqlDecimal_t2E3764DA58ABCDADAC6F390C24C8273EF87AA54B  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline SqlDecimal_t2E3764DA58ABCDADAC6F390C24C8273EF87AA54B * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, SqlDecimal_t2E3764DA58ABCDADAC6F390C24C8273EF87AA54B  value)
	{
		m_Items[index] = value;
	}
};
// System.Data.SqlTypes.SqlDouble[]
struct SqlDoubleU5BU5D_t65F627E3E10E5B61B332C69E3E8180BB1B5C5EA7  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) SqlDouble_t0D9EDD6B609690459BDBBB52962B791D3D40B1FA  m_Items[1];

public:
	inline SqlDouble_t0D9EDD6B609690459BDBBB52962B791D3D40B1FA  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline SqlDouble_t0D9EDD6B609690459BDBBB52962B791D3D40B1FA * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, SqlDouble_t0D9EDD6B609690459BDBBB52962B791D3D40B1FA  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline SqlDouble_t0D9EDD6B609690459BDBBB52962B791D3D40B1FA  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline SqlDouble_t0D9EDD6B609690459BDBBB52962B791D3D40B1FA * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, SqlDouble_t0D9EDD6B609690459BDBBB52962B791D3D40B1FA  value)
	{
		m_Items[index] = value;
	}
};
// System.Data.SqlTypes.SqlGuid[]
struct SqlGuidU5BU5D_t7B958D75216823CC6FD381B81133477AFD2DE5E2  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) SqlGuid_t5D26918EA5666BC8EBF86F12192E616F0BA8DE46  m_Items[1];

public:
	inline SqlGuid_t5D26918EA5666BC8EBF86F12192E616F0BA8DE46  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline SqlGuid_t5D26918EA5666BC8EBF86F12192E616F0BA8DE46 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, SqlGuid_t5D26918EA5666BC8EBF86F12192E616F0BA8DE46  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_value_2), (void*)NULL);
	}
	inline SqlGuid_t5D26918EA5666BC8EBF86F12192E616F0BA8DE46  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline SqlGuid_t5D26918EA5666BC8EBF86F12192E616F0BA8DE46 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, SqlGuid_t5D26918EA5666BC8EBF86F12192E616F0BA8DE46  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_value_2), (void*)NULL);
	}
};
// System.Data.SqlTypes.SqlInt16[]
struct SqlInt16U5BU5D_tFDBC98064CCDBA5EF1A928770767FF5E428F68B0  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) SqlInt16_tB003889273CEF2625C06174D4DB23DBBAFEDD72F  m_Items[1];

public:
	inline SqlInt16_tB003889273CEF2625C06174D4DB23DBBAFEDD72F  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline SqlInt16_tB003889273CEF2625C06174D4DB23DBBAFEDD72F * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, SqlInt16_tB003889273CEF2625C06174D4DB23DBBAFEDD72F  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline SqlInt16_tB003889273CEF2625C06174D4DB23DBBAFEDD72F  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline SqlInt16_tB003889273CEF2625C06174D4DB23DBBAFEDD72F * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, SqlInt16_tB003889273CEF2625C06174D4DB23DBBAFEDD72F  value)
	{
		m_Items[index] = value;
	}
};
// System.Data.SqlTypes.SqlInt32[]
struct SqlInt32U5BU5D_t4E9A0DCCD18A21ED32AE342EE7288F4722D13002  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) SqlInt32_t2AB23DF9003BEBE6DBD94E94C8C679454A8AF0E5  m_Items[1];

public:
	inline SqlInt32_t2AB23DF9003BEBE6DBD94E94C8C679454A8AF0E5  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline SqlInt32_t2AB23DF9003BEBE6DBD94E94C8C679454A8AF0E5 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, SqlInt32_t2AB23DF9003BEBE6DBD94E94C8C679454A8AF0E5  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline SqlInt32_t2AB23DF9003BEBE6DBD94E94C8C679454A8AF0E5  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline SqlInt32_t2AB23DF9003BEBE6DBD94E94C8C679454A8AF0E5 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, SqlInt32_t2AB23DF9003BEBE6DBD94E94C8C679454A8AF0E5  value)
	{
		m_Items[index] = value;
	}
};
// System.Data.SqlTypes.SqlInt64[]
struct SqlInt64U5BU5D_t07215C71C5947E0BE4CF431CB6124BC53ADA28C5  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) SqlInt64_tCF441A47D276F6121644D08D6BEE0296E84E46AE  m_Items[1];

public:
	inline SqlInt64_tCF441A47D276F6121644D08D6BEE0296E84E46AE  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline SqlInt64_tCF441A47D276F6121644D08D6BEE0296E84E46AE * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, SqlInt64_tCF441A47D276F6121644D08D6BEE0296E84E46AE  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline SqlInt64_tCF441A47D276F6121644D08D6BEE0296E84E46AE  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline SqlInt64_tCF441A47D276F6121644D08D6BEE0296E84E46AE * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, SqlInt64_tCF441A47D276F6121644D08D6BEE0296E84E46AE  value)
	{
		m_Items[index] = value;
	}
};
// System.Data.SqlTypes.SqlMoney[]
struct SqlMoneyU5BU5D_tF5702E9AA3B2D27362711637FFD105D198723C95  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) SqlMoney_t3AFB18BE9EB489D660B42B8A4276B7C3054E00CA  m_Items[1];

public:
	inline SqlMoney_t3AFB18BE9EB489D660B42B8A4276B7C3054E00CA  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline SqlMoney_t3AFB18BE9EB489D660B42B8A4276B7C3054E00CA * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, SqlMoney_t3AFB18BE9EB489D660B42B8A4276B7C3054E00CA  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline SqlMoney_t3AFB18BE9EB489D660B42B8A4276B7C3054E00CA  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline SqlMoney_t3AFB18BE9EB489D660B42B8A4276B7C3054E00CA * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, SqlMoney_t3AFB18BE9EB489D660B42B8A4276B7C3054E00CA  value)
	{
		m_Items[index] = value;
	}
};
// System.Data.SqlTypes.SqlSingle[]
struct SqlSingleU5BU5D_t2F81D199741A89C70F73D8FAC1385A28379B442F  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) SqlSingle_t2CD814E1AA8A493B2181D8240064E7A0A034A32E  m_Items[1];

public:
	inline SqlSingle_t2CD814E1AA8A493B2181D8240064E7A0A034A32E  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline SqlSingle_t2CD814E1AA8A493B2181D8240064E7A0A034A32E * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, SqlSingle_t2CD814E1AA8A493B2181D8240064E7A0A034A32E  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline SqlSingle_t2CD814E1AA8A493B2181D8240064E7A0A034A32E  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline SqlSingle_t2CD814E1AA8A493B2181D8240064E7A0A034A32E * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, SqlSingle_t2CD814E1AA8A493B2181D8240064E7A0A034A32E  value)
	{
		m_Items[index] = value;
	}
};
// System.Data.SqlTypes.SqlString[]
struct SqlStringU5BU5D_tB34569068C89C1DE7211001B8C5A6C84787554D5  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) SqlString_t2CFD797DC19AC10EFAE0277F867ABCFCD7F7AA6E  m_Items[1];

public:
	inline SqlString_t2CFD797DC19AC10EFAE0277F867ABCFCD7F7AA6E  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline SqlString_t2CFD797DC19AC10EFAE0277F867ABCFCD7F7AA6E * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, SqlString_t2CFD797DC19AC10EFAE0277F867ABCFCD7F7AA6E  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_value_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_cmpInfo_1), (void*)NULL);
		#endif
	}
	inline SqlString_t2CFD797DC19AC10EFAE0277F867ABCFCD7F7AA6E  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline SqlString_t2CFD797DC19AC10EFAE0277F867ABCFCD7F7AA6E * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, SqlString_t2CFD797DC19AC10EFAE0277F867ABCFCD7F7AA6E  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_value_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_cmpInfo_1), (void*)NULL);
		#endif
	}
};

il2cpp_hresult_t IVector_1_GetAt_mB49A020A8CDF0AAF8DCFB381FD74A77688B0FA71_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___index0, float* comReturnValue);
il2cpp_hresult_t IVector_1_get_Size_m494C6D174D411D7FC20D21CE0FA2C0EDD5E91568_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue);
il2cpp_hresult_t IVector_1_GetView_m2720307D308D3DCD49B6AF4C4A08D67498D2B186_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IVectorView_1_t0652AC4EC7AA575BE5D7797DFD20689718705BE0** comReturnValue);
il2cpp_hresult_t IVector_1_IndexOf_mC1E5DFCDEDC953A4E1CA8BB1C427FBE7EA517FF4_ComCallableWrapperProjectedMethod(RuntimeObject* __this, float ___value0, uint32_t* ___index1, bool* comReturnValue);
il2cpp_hresult_t IVector_1_SetAt_m478207B3FCA7EB1D8264306765201B9B4C8725AD_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___index0, float ___value1);
il2cpp_hresult_t IVector_1_InsertAt_m6C9D77B26BDE0B12FE238687DA397FC58C2032A2_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___index0, float ___value1);
il2cpp_hresult_t IVector_1_RemoveAt_m3EFDAC8DAF08714CB4FDF41FA54DF4EB2E0F9D97_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___index0);
il2cpp_hresult_t IVector_1_Append_mB47ED34CA2102C71646E947495BA9D14451E29C6_ComCallableWrapperProjectedMethod(RuntimeObject* __this, float ___value0);
il2cpp_hresult_t IVector_1_RemoveAtEnd_m04EB0AD3F455408D30F0FFE3100BEB8367635CFC_ComCallableWrapperProjectedMethod(RuntimeObject* __this);
il2cpp_hresult_t IVector_1_Clear_mE43500616C5480A63657796BB0AE2E60D7BA49A9_ComCallableWrapperProjectedMethod(RuntimeObject* __this);
il2cpp_hresult_t IVector_1_GetMany_m436FF76C0F1FFB49549025672552A1353FEF8745_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___startIndex0, uint32_t ___items1ArraySize, float* ___items1, uint32_t* comReturnValue);
il2cpp_hresult_t IVector_1_ReplaceAll_mF925EE20FE793EF0740B86913574AE2E17FD6B93_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___items0ArraySize, float* ___items0);
il2cpp_hresult_t IIterable_1_First_mBD8D20BBA2E9F188C15175F2C9AB4039C6400ED1_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IIterator_1_t53A3C573D4888D0C268E9C0D9515A4BDAD329CCC** comReturnValue);
il2cpp_hresult_t IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue);
il2cpp_hresult_t IVectorView_1_GetAt_m3D2911EEE429BEE9DFCCFD08528A6B62938AE14E_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___index0, float* comReturnValue);
il2cpp_hresult_t IVectorView_1_get_Size_mE51A5C7833E725EA8286E5878D80E9D44ECDFF41_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue);
il2cpp_hresult_t IVectorView_1_IndexOf_m4C0458BD59B3F97E792DE7EB4399297542D76C97_ComCallableWrapperProjectedMethod(RuntimeObject* __this, float ___value0, uint32_t* ___index1, bool* comReturnValue);
il2cpp_hresult_t IVectorView_1_GetMany_m481FCAC8A5B7E6C75882A80893023447977DA78B_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___startIndex0, uint32_t ___items1ArraySize, float* ___items1, uint32_t* comReturnValue);
il2cpp_hresult_t IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___index0, Il2CppIInspectable** comReturnValue);
il2cpp_hresult_t IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue);
il2cpp_hresult_t IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IBindableVectorView_tD80A01049DD2609FEA5FACD5E77BF95A875534FA** comReturnValue);
il2cpp_hresult_t IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue);
il2cpp_hresult_t IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___index0, Il2CppIInspectable* ___value1);
il2cpp_hresult_t IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___index0, Il2CppIInspectable* ___value1);
il2cpp_hresult_t IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___index0);
il2cpp_hresult_t IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppIInspectable* ___value0);
il2cpp_hresult_t IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3_ComCallableWrapperProjectedMethod(RuntimeObject* __this);
il2cpp_hresult_t IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF_ComCallableWrapperProjectedMethod(RuntimeObject* __this);
il2cpp_hresult_t IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue);
il2cpp_hresult_t IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___index0, Il2CppIInspectable** comReturnValue);
il2cpp_hresult_t IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue);
il2cpp_hresult_t IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue);
il2cpp_hresult_t IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___startIndex0, uint32_t ___items1ArraySize, Il2CppIInspectable** ___items1, uint32_t* comReturnValue);


// System.Byte System.Single::System.IConvertible.ToByte(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t Single_System_IConvertible_ToByte_m8FAE4E8EDDF055FF2F17C2C00D091EBAA0099D49 (float* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.Int16 System.Single::System.IConvertible.ToInt16(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t Single_System_IConvertible_ToInt16_mBED24FBB9C6465ABAECDC3C894F41B7CF0E6FC6A (float* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.UInt16 System.Single::System.IConvertible.ToUInt16(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t Single_System_IConvertible_ToUInt16_mCBB71CEDC4797B00D50B4417A96EC702076C757A (float* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.Int32 System.Single::System.IConvertible.ToInt32(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Single_System_IConvertible_ToInt32_mD144638A230B62184C32B38DFFFDF955353F42AC (float* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.UInt32 System.Single::System.IConvertible.ToUInt32(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Single_System_IConvertible_ToUInt32_mF7B0C9FE3652F3FE2E0BDEEC4B90A316099B525E (float* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.Int64 System.Single::System.IConvertible.ToInt64(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Single_System_IConvertible_ToInt64_mAC0D1AEA698E9A358F503A77DA9C2873465E7ADC (float* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.UInt64 System.Single::System.IConvertible.ToUInt64(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t Single_System_IConvertible_ToUInt64_m6A235CB0548A46C28B13E14D5F62DEADE7887613 (float* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.Double System.Single::System.IConvertible.ToDouble(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Single_System_IConvertible_ToDouble_m103B0F5DD6C36D37816B2524CCFAB7A60F9781E6 (float* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);

// COM Callable Wrapper for System.Single[]
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_ComCallableWrapper>, IVector_1_t5FBA1DB686EDD35620DC2CCA810C0754A18E8C9D, IIterable_1_t0EA6FF8BF23034840DB9F5189AF1D72411992F7E, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IVectorView_1_t0652AC4EC7AA575BE5D7797DFD20689718705BE0, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC, IReferenceArray_1_t1BB7D08F28C5D27D16C0145A86D139290E764ABC, IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8
{
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IVector_1_t5FBA1DB686EDD35620DC2CCA810C0754A18E8C9D::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IVector_1_t5FBA1DB686EDD35620DC2CCA810C0754A18E8C9D*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t0EA6FF8BF23034840DB9F5189AF1D72411992F7E::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t0EA6FF8BF23034840DB9F5189AF1D72411992F7E*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IVectorView_1_t0652AC4EC7AA575BE5D7797DFD20689718705BE0::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IVectorView_1_t0652AC4EC7AA575BE5D7797DFD20689718705BE0*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IReferenceArray_1_t1BB7D08F28C5D27D16C0145A86D139290E764ABC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IReferenceArray_1_t1BB7D08F28C5D27D16C0145A86D139290E764ABC*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(7);
		interfaceIds[0] = IVector_1_t5FBA1DB686EDD35620DC2CCA810C0754A18E8C9D::IID;
		interfaceIds[1] = IIterable_1_t0EA6FF8BF23034840DB9F5189AF1D72411992F7E::IID;
		interfaceIds[2] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[3] = IVectorView_1_t0652AC4EC7AA575BE5D7797DFD20689718705BE0::IID;
		interfaceIds[4] = IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID;
		interfaceIds[5] = IReferenceArray_1_t1BB7D08F28C5D27D16C0145A86D139290E764ABC::IID;
		interfaceIds[6] = IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8::IID;

		*iidCount = 7;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_GetAt_mB49A020A8CDF0AAF8DCFB381FD74A77688B0FA71(uint32_t ___index0, float* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVector_1_GetAt_mB49A020A8CDF0AAF8DCFB381FD74A77688B0FA71_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_get_Size_m494C6D174D411D7FC20D21CE0FA2C0EDD5E91568(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVector_1_get_Size_m494C6D174D411D7FC20D21CE0FA2C0EDD5E91568_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_GetView_m2720307D308D3DCD49B6AF4C4A08D67498D2B186(IVectorView_1_t0652AC4EC7AA575BE5D7797DFD20689718705BE0** comReturnValue) IL2CPP_OVERRIDE
	{
		return IVector_1_GetView_m2720307D308D3DCD49B6AF4C4A08D67498D2B186_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_IndexOf_mC1E5DFCDEDC953A4E1CA8BB1C427FBE7EA517FF4(float ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVector_1_IndexOf_mC1E5DFCDEDC953A4E1CA8BB1C427FBE7EA517FF4_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_SetAt_m478207B3FCA7EB1D8264306765201B9B4C8725AD(uint32_t ___index0, float ___value1) IL2CPP_OVERRIDE
	{
		return IVector_1_SetAt_m478207B3FCA7EB1D8264306765201B9B4C8725AD_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_InsertAt_m6C9D77B26BDE0B12FE238687DA397FC58C2032A2(uint32_t ___index0, float ___value1) IL2CPP_OVERRIDE
	{
		return IVector_1_InsertAt_m6C9D77B26BDE0B12FE238687DA397FC58C2032A2_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_RemoveAt_m3EFDAC8DAF08714CB4FDF41FA54DF4EB2E0F9D97(uint32_t ___index0) IL2CPP_OVERRIDE
	{
		return IVector_1_RemoveAt_m3EFDAC8DAF08714CB4FDF41FA54DF4EB2E0F9D97_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0);
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_Append_mB47ED34CA2102C71646E947495BA9D14451E29C6(float ___value0) IL2CPP_OVERRIDE
	{
		return IVector_1_Append_mB47ED34CA2102C71646E947495BA9D14451E29C6_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0);
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_RemoveAtEnd_m04EB0AD3F455408D30F0FFE3100BEB8367635CFC() IL2CPP_OVERRIDE
	{
		return IVector_1_RemoveAtEnd_m04EB0AD3F455408D30F0FFE3100BEB8367635CFC_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_Clear_mE43500616C5480A63657796BB0AE2E60D7BA49A9() IL2CPP_OVERRIDE
	{
		return IVector_1_Clear_mE43500616C5480A63657796BB0AE2E60D7BA49A9_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_GetMany_m436FF76C0F1FFB49549025672552A1353FEF8745(uint32_t ___startIndex0, uint32_t ___items1ArraySize, float* ___items1, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVector_1_GetMany_m436FF76C0F1FFB49549025672552A1353FEF8745_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___startIndex0, ___items1ArraySize, ___items1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_ReplaceAll_mF925EE20FE793EF0740B86913574AE2E17FD6B93(uint32_t ___items0ArraySize, float* ___items0) IL2CPP_OVERRIDE
	{
		return IVector_1_ReplaceAll_mF925EE20FE793EF0740B86913574AE2E17FD6B93_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___items0ArraySize, ___items0);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_mBD8D20BBA2E9F188C15175F2C9AB4039C6400ED1(IIterator_1_t53A3C573D4888D0C268E9C0D9515A4BDAD329CCC** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_mBD8D20BBA2E9F188C15175F2C9AB4039C6400ED1_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m3D2911EEE429BEE9DFCCFD08528A6B62938AE14E(uint32_t ___index0, float* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetAt_m3D2911EEE429BEE9DFCCFD08528A6B62938AE14E_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_mE51A5C7833E725EA8286E5878D80E9D44ECDFF41(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_get_Size_mE51A5C7833E725EA8286E5878D80E9D44ECDFF41_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_m4C0458BD59B3F97E792DE7EB4399297542D76C97(float ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_IndexOf_m4C0458BD59B3F97E792DE7EB4399297542D76C97_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m481FCAC8A5B7E6C75882A80893023447977DA78B(uint32_t ___startIndex0, uint32_t ___items1ArraySize, float* ___items1, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetMany_m481FCAC8A5B7E6C75882A80893023447977DA78B_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___startIndex0, ___items1ArraySize, ___items1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38(IBindableVectorView_tD80A01049DD2609FEA5FACD5E77BF95A875534FA** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0(uint32_t ___index0) IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F(Il2CppIInspectable* ___value0) IL2CPP_OVERRIDE
	{
		return IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3() IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF() IL2CPP_OVERRIDE
	{
		return IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IReferenceArray_1_get_Value_mDB41698A556618F72FF5F33C60E6D9B78435F619(uint32_t* comReturnValueArraySize, float** comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* returnValue;
		try
		{
			returnValue = static_cast<SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*>(GetManagedObjectInline());
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		// Marshaling of return value back from managed representation
		uint32_t _returnValue_marshaledArraySize = 0;
		float* _returnValue_marshaled = NULL;
		if (returnValue != NULL)
		{
			_returnValue_marshaledArraySize = static_cast<uint32_t>((returnValue)->max_length);
			_returnValue_marshaled = il2cpp_codegen_marshal_allocate_array<float>(static_cast<int32_t>(_returnValue_marshaledArraySize));
			for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(_returnValue_marshaledArraySize)); i++)
			{
				(_returnValue_marshaled)[i] = (returnValue)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			}
		}

		*comReturnValueArraySize = _returnValue_marshaledArraySize;
		*comReturnValue = _returnValue_marshaled;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_get_Type_m2BC440F5119A133BE4DD895657519ADAA3B34272(int32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		int32_t returnValue;
		try
		{
			returnValue = 1032;
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_get_IsNumericScalar_mC8DE97926668A5F2EA3F4A9B128E966CBC7B0D60(bool* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		bool returnValue;
		try
		{
			returnValue = false;
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt8_m25D96C5F9AC133BF7B682C59FE83EE05A0075B05(uint8_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("SingleArray", "Byte");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt16_mBE4A7DC8A2B92F83EE058AE7515E84DADFA206AE(int16_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("SingleArray", "Int16");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt16_mCF513D800195CA7050FD5AFB4E710FB0CFB531B5(uint16_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("SingleArray", "UInt16");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt32_mDE5543C20D3D3C9E773CB6EDBDBC789D12CC59BA(int32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("SingleArray", "Int32");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt32_mD48C2097876EAE6D1E218D9123F58F168B374205(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("SingleArray", "UInt32");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt64_m4BAC154BEC3584DF3E34EDA6033EEF3DB6D4132E(int64_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("SingleArray", "Int64");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt64_m981379F85C0C44EDBDD830A293693BE0BB3F62CA(uint64_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("SingleArray", "UInt64");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSingle_mED031D57B17B0F7BD3B4B250821D070155889F1F(float* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("SingleArray", "Single");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDouble_mA0880A7E89CE09C2639D6F8065B18E8F77EB082F(double* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("SingleArray", "Double");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetChar16_m7B2226E30F72B0CCAE54B8EDB1AC4ACF1BE860A8(Il2CppChar* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("SingleArray", "Char16");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetBoolean_m21FCEEA690B32CD86A36D40FB837FC7D894D5587(bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("SingleArray", "Boolean");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetString_m8D5702E4E1C67366D65DA23CA2812D6572DF819C(Il2CppHString* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("SingleArray", "String");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetGuid_m885F2850B49DB4B046564BC5FE414256801D9A11(Guid_t * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("SingleArray", "Guid");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDateTime_m023A766ED6FC58B347CF6F777F5C18C6AE246A3C(DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("SingleArray", "DateTime");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetTimeSpan_m063CE76264EDAF37A1DA3CA5C9CF4AF85D8FC239(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("SingleArray", "TimeSpan");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetPoint_m014D5E859273BA28DE642E38438EDCC64AB5C41B(Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("SingleArray", "Point");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSize_m0A952D186E59BEA03E6185EDEBAC26D544AFADAC(Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("SingleArray", "Size");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetRect_m0A96600149C7E6A493B8420CB316938AEF9A1A06(Rect_tC45F1DDF39812623644DE296D8057A4958176627 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("SingleArray", "Rect");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt8Array_m540E0503D8CFAE2579D449884B6AA883509C79D1(uint32_t* ___value0ArraySize, uint8_t** ___value0) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___value0' to managed representation
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ____value0_empty = NULL;

		// Managed method invocation
		try
		{
			SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* managedArray = static_cast<SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*>(GetManagedObjectInline());
			il2cpp_array_size_t arrayLength = managedArray->max_length;
			____value0_empty = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, static_cast<uint32_t>(arrayLength));
			for (il2cpp_array_size_t i = 0; i < arrayLength; i++)
			{
				float item = (managedArray)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
				if (item < 0)
				{
					return il2cpp_codegen_com_handle_invalid_ipropertyarray_conversion(Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, (managedArray)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(i))), "SingleArray", "Single", "Byte", i);
				}

				try
				{
					uint8_t il2cppRetVal;
					il2cppRetVal = Single_System_IConvertible_ToByte_m8FAE4E8EDDF055FF2F17C2C00D091EBAA0099D49((&item), NULL, NULL);
					(____value0_empty)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), il2cppRetVal);
				}
				catch (const Il2CppExceptionWrapper& ex)
				{
					if (IsInst((RuntimeObject*)ex.ex, OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var))
					{
						return il2cpp_codegen_com_handle_invalid_ipropertyarray_conversion(Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, (managedArray)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(i))), "SingleArray", "Single", "Byte", i);
					}

					return il2cpp_codegen_com_handle_invalid_ipropertyarray_conversion("SingleArray", "Single", "Byte", i);
				}
			}
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		// Marshaling of parameter '___value0' back from managed representation
		if (____value0_empty != NULL)
		{
			*___value0ArraySize = static_cast<uint32_t>((____value0_empty)->max_length);
			*___value0 = il2cpp_codegen_marshal_allocate_array<uint8_t>(static_cast<int32_t>(*___value0ArraySize));
			for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(*___value0ArraySize)); i++)
			{
				(*___value0)[i] = (____value0_empty)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			}
		}
		else
		{
			*___value0ArraySize = 0;
			*___value0 = NULL;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt16Array_m279C289854DE8A2D45A6B6B09112DD9D2F0DF849(uint32_t* ___value0ArraySize, int16_t** ___value0) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___value0' to managed representation
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* ____value0_empty = NULL;

		// Managed method invocation
		try
		{
			SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* managedArray = static_cast<SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*>(GetManagedObjectInline());
			il2cpp_array_size_t arrayLength = managedArray->max_length;
			____value0_empty = (Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD*)SZArrayNew(Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD_il2cpp_TypeInfo_var, static_cast<uint32_t>(arrayLength));
			for (il2cpp_array_size_t i = 0; i < arrayLength; i++)
			{
				float item = (managedArray)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
				try
				{
					int16_t il2cppRetVal;
					il2cppRetVal = Single_System_IConvertible_ToInt16_mBED24FBB9C6465ABAECDC3C894F41B7CF0E6FC6A((&item), NULL, NULL);
					(____value0_empty)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), il2cppRetVal);
				}
				catch (const Il2CppExceptionWrapper& ex)
				{
					if (IsInst((RuntimeObject*)ex.ex, OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var))
					{
						return il2cpp_codegen_com_handle_invalid_ipropertyarray_conversion(Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, (managedArray)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(i))), "SingleArray", "Single", "Int16", i);
					}

					return il2cpp_codegen_com_handle_invalid_ipropertyarray_conversion("SingleArray", "Single", "Int16", i);
				}
			}
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		// Marshaling of parameter '___value0' back from managed representation
		if (____value0_empty != NULL)
		{
			*___value0ArraySize = static_cast<uint32_t>((____value0_empty)->max_length);
			*___value0 = il2cpp_codegen_marshal_allocate_array<int16_t>(static_cast<int32_t>(*___value0ArraySize));
			for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(*___value0ArraySize)); i++)
			{
				(*___value0)[i] = (____value0_empty)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			}
		}
		else
		{
			*___value0ArraySize = 0;
			*___value0 = NULL;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt16Array_m090AA712F6BB39F869BCC5CB90236377EE8673B1(uint32_t* ___value0ArraySize, uint16_t** ___value0) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___value0' to managed representation
		UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67* ____value0_empty = NULL;

		// Managed method invocation
		try
		{
			SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* managedArray = static_cast<SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*>(GetManagedObjectInline());
			il2cpp_array_size_t arrayLength = managedArray->max_length;
			____value0_empty = (UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67*)SZArrayNew(UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67_il2cpp_TypeInfo_var, static_cast<uint32_t>(arrayLength));
			for (il2cpp_array_size_t i = 0; i < arrayLength; i++)
			{
				float item = (managedArray)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
				if (item < 0)
				{
					return il2cpp_codegen_com_handle_invalid_ipropertyarray_conversion(Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, (managedArray)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(i))), "SingleArray", "Single", "UInt16", i);
				}

				try
				{
					uint16_t il2cppRetVal;
					il2cppRetVal = Single_System_IConvertible_ToUInt16_mCBB71CEDC4797B00D50B4417A96EC702076C757A((&item), NULL, NULL);
					(____value0_empty)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), il2cppRetVal);
				}
				catch (const Il2CppExceptionWrapper& ex)
				{
					if (IsInst((RuntimeObject*)ex.ex, OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var))
					{
						return il2cpp_codegen_com_handle_invalid_ipropertyarray_conversion(Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, (managedArray)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(i))), "SingleArray", "Single", "UInt16", i);
					}

					return il2cpp_codegen_com_handle_invalid_ipropertyarray_conversion("SingleArray", "Single", "UInt16", i);
				}
			}
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		// Marshaling of parameter '___value0' back from managed representation
		if (____value0_empty != NULL)
		{
			*___value0ArraySize = static_cast<uint32_t>((____value0_empty)->max_length);
			*___value0 = il2cpp_codegen_marshal_allocate_array<uint16_t>(static_cast<int32_t>(*___value0ArraySize));
			for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(*___value0ArraySize)); i++)
			{
				(*___value0)[i] = (____value0_empty)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			}
		}
		else
		{
			*___value0ArraySize = 0;
			*___value0 = NULL;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt32Array_mADF499B8CD16185128795A7B74D63E8CFE692B9A(uint32_t* ___value0ArraySize, int32_t** ___value0) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___value0' to managed representation
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ____value0_empty = NULL;

		// Managed method invocation
		try
		{
			SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* managedArray = static_cast<SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*>(GetManagedObjectInline());
			il2cpp_array_size_t arrayLength = managedArray->max_length;
			____value0_empty = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, static_cast<uint32_t>(arrayLength));
			for (il2cpp_array_size_t i = 0; i < arrayLength; i++)
			{
				float item = (managedArray)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
				try
				{
					int32_t il2cppRetVal;
					il2cppRetVal = Single_System_IConvertible_ToInt32_mD144638A230B62184C32B38DFFFDF955353F42AC((&item), NULL, NULL);
					(____value0_empty)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), il2cppRetVal);
				}
				catch (const Il2CppExceptionWrapper& ex)
				{
					if (IsInst((RuntimeObject*)ex.ex, OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var))
					{
						return il2cpp_codegen_com_handle_invalid_ipropertyarray_conversion(Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, (managedArray)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(i))), "SingleArray", "Single", "Int32", i);
					}

					return il2cpp_codegen_com_handle_invalid_ipropertyarray_conversion("SingleArray", "Single", "Int32", i);
				}
			}
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		// Marshaling of parameter '___value0' back from managed representation
		if (____value0_empty != NULL)
		{
			*___value0ArraySize = static_cast<uint32_t>((____value0_empty)->max_length);
			*___value0 = il2cpp_codegen_marshal_allocate_array<int32_t>(static_cast<int32_t>(*___value0ArraySize));
			for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(*___value0ArraySize)); i++)
			{
				(*___value0)[i] = (____value0_empty)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			}
		}
		else
		{
			*___value0ArraySize = 0;
			*___value0 = NULL;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt32Array_m9B44B8D2EA2907A9A96ED653ACEF04873D9483F8(uint32_t* ___value0ArraySize, uint32_t** ___value0) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___value0' to managed representation
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* ____value0_empty = NULL;

		// Managed method invocation
		try
		{
			SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* managedArray = static_cast<SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*>(GetManagedObjectInline());
			il2cpp_array_size_t arrayLength = managedArray->max_length;
			____value0_empty = (UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF*)SZArrayNew(UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF_il2cpp_TypeInfo_var, static_cast<uint32_t>(arrayLength));
			for (il2cpp_array_size_t i = 0; i < arrayLength; i++)
			{
				float item = (managedArray)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
				if (item < 0)
				{
					return il2cpp_codegen_com_handle_invalid_ipropertyarray_conversion(Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, (managedArray)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(i))), "SingleArray", "Single", "UInt32", i);
				}

				try
				{
					uint32_t il2cppRetVal;
					il2cppRetVal = Single_System_IConvertible_ToUInt32_mF7B0C9FE3652F3FE2E0BDEEC4B90A316099B525E((&item), NULL, NULL);
					(____value0_empty)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), il2cppRetVal);
				}
				catch (const Il2CppExceptionWrapper& ex)
				{
					if (IsInst((RuntimeObject*)ex.ex, OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var))
					{
						return il2cpp_codegen_com_handle_invalid_ipropertyarray_conversion(Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, (managedArray)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(i))), "SingleArray", "Single", "UInt32", i);
					}

					return il2cpp_codegen_com_handle_invalid_ipropertyarray_conversion("SingleArray", "Single", "UInt32", i);
				}
			}
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		// Marshaling of parameter '___value0' back from managed representation
		if (____value0_empty != NULL)
		{
			*___value0ArraySize = static_cast<uint32_t>((____value0_empty)->max_length);
			*___value0 = il2cpp_codegen_marshal_allocate_array<uint32_t>(static_cast<int32_t>(*___value0ArraySize));
			for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(*___value0ArraySize)); i++)
			{
				(*___value0)[i] = (____value0_empty)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			}
		}
		else
		{
			*___value0ArraySize = 0;
			*___value0 = NULL;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt64Array_m9A04AC5F477463928280B42E2C40F13B15A1D564(uint32_t* ___value0ArraySize, int64_t** ___value0) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___value0' to managed representation
		Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6* ____value0_empty = NULL;

		// Managed method invocation
		try
		{
			SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* managedArray = static_cast<SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*>(GetManagedObjectInline());
			il2cpp_array_size_t arrayLength = managedArray->max_length;
			____value0_empty = (Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6*)SZArrayNew(Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6_il2cpp_TypeInfo_var, static_cast<uint32_t>(arrayLength));
			for (il2cpp_array_size_t i = 0; i < arrayLength; i++)
			{
				float item = (managedArray)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
				try
				{
					int64_t il2cppRetVal;
					il2cppRetVal = Single_System_IConvertible_ToInt64_mAC0D1AEA698E9A358F503A77DA9C2873465E7ADC((&item), NULL, NULL);
					(____value0_empty)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), il2cppRetVal);
				}
				catch (const Il2CppExceptionWrapper& ex)
				{
					if (IsInst((RuntimeObject*)ex.ex, OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var))
					{
						return il2cpp_codegen_com_handle_invalid_ipropertyarray_conversion(Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, (managedArray)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(i))), "SingleArray", "Single", "Int64", i);
					}

					return il2cpp_codegen_com_handle_invalid_ipropertyarray_conversion("SingleArray", "Single", "Int64", i);
				}
			}
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		// Marshaling of parameter '___value0' back from managed representation
		if (____value0_empty != NULL)
		{
			*___value0ArraySize = static_cast<uint32_t>((____value0_empty)->max_length);
			*___value0 = il2cpp_codegen_marshal_allocate_array<int64_t>(static_cast<int32_t>(*___value0ArraySize));
			for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(*___value0ArraySize)); i++)
			{
				(*___value0)[i] = (____value0_empty)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			}
		}
		else
		{
			*___value0ArraySize = 0;
			*___value0 = NULL;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt64Array_m776484C9C41D5A03991D89401FF84F9D425D6A5E(uint32_t* ___value0ArraySize, uint64_t** ___value0) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___value0' to managed representation
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* ____value0_empty = NULL;

		// Managed method invocation
		try
		{
			SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* managedArray = static_cast<SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*>(GetManagedObjectInline());
			il2cpp_array_size_t arrayLength = managedArray->max_length;
			____value0_empty = (UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2*)SZArrayNew(UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2_il2cpp_TypeInfo_var, static_cast<uint32_t>(arrayLength));
			for (il2cpp_array_size_t i = 0; i < arrayLength; i++)
			{
				float item = (managedArray)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
				if (item < 0)
				{
					return il2cpp_codegen_com_handle_invalid_ipropertyarray_conversion(Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, (managedArray)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(i))), "SingleArray", "Single", "UInt64", i);
				}

				try
				{
					uint64_t il2cppRetVal;
					il2cppRetVal = Single_System_IConvertible_ToUInt64_m6A235CB0548A46C28B13E14D5F62DEADE7887613((&item), NULL, NULL);
					(____value0_empty)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), il2cppRetVal);
				}
				catch (const Il2CppExceptionWrapper& ex)
				{
					if (IsInst((RuntimeObject*)ex.ex, OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var))
					{
						return il2cpp_codegen_com_handle_invalid_ipropertyarray_conversion(Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, (managedArray)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(i))), "SingleArray", "Single", "UInt64", i);
					}

					return il2cpp_codegen_com_handle_invalid_ipropertyarray_conversion("SingleArray", "Single", "UInt64", i);
				}
			}
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		// Marshaling of parameter '___value0' back from managed representation
		if (____value0_empty != NULL)
		{
			*___value0ArraySize = static_cast<uint32_t>((____value0_empty)->max_length);
			*___value0 = il2cpp_codegen_marshal_allocate_array<uint64_t>(static_cast<int32_t>(*___value0ArraySize));
			for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(*___value0ArraySize)); i++)
			{
				(*___value0)[i] = (____value0_empty)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			}
		}
		else
		{
			*___value0ArraySize = 0;
			*___value0 = NULL;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSingleArray_m1E9CE76FA942B3AFA8995FBAE605E84733917B57(uint32_t* ___value0ArraySize, float** ___value0) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___value0' to managed representation
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ____value0_empty = NULL;

		// Managed method invocation
		try
		{
			____value0_empty = static_cast<SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*>(GetManagedObjectInline());
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		// Marshaling of parameter '___value0' back from managed representation
		if (____value0_empty != NULL)
		{
			*___value0ArraySize = static_cast<uint32_t>((____value0_empty)->max_length);
			*___value0 = il2cpp_codegen_marshal_allocate_array<float>(static_cast<int32_t>(*___value0ArraySize));
			for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(*___value0ArraySize)); i++)
			{
				(*___value0)[i] = (____value0_empty)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			}
		}
		else
		{
			*___value0ArraySize = 0;
			*___value0 = NULL;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDoubleArray_m5DAB086BEB4816CAF7553E325B91A4B0B07953A5(uint32_t* ___value0ArraySize, double** ___value0) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___value0' to managed representation
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* ____value0_empty = NULL;

		// Managed method invocation
		try
		{
			SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* managedArray = static_cast<SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*>(GetManagedObjectInline());
			il2cpp_array_size_t arrayLength = managedArray->max_length;
			____value0_empty = (DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)SZArrayNew(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB_il2cpp_TypeInfo_var, static_cast<uint32_t>(arrayLength));
			for (il2cpp_array_size_t i = 0; i < arrayLength; i++)
			{
				float item = (managedArray)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
				try
				{
					double il2cppRetVal;
					il2cppRetVal = Single_System_IConvertible_ToDouble_m103B0F5DD6C36D37816B2524CCFAB7A60F9781E6((&item), NULL, NULL);
					(____value0_empty)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), il2cppRetVal);
				}
				catch (const Il2CppExceptionWrapper& ex)
				{
					if (IsInst((RuntimeObject*)ex.ex, OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var))
					{
						return il2cpp_codegen_com_handle_invalid_ipropertyarray_conversion(Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, (managedArray)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(i))), "SingleArray", "Single", "Double", i);
					}

					return il2cpp_codegen_com_handle_invalid_ipropertyarray_conversion("SingleArray", "Single", "Double", i);
				}
			}
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		// Marshaling of parameter '___value0' back from managed representation
		if (____value0_empty != NULL)
		{
			*___value0ArraySize = static_cast<uint32_t>((____value0_empty)->max_length);
			*___value0 = il2cpp_codegen_marshal_allocate_array<double>(static_cast<int32_t>(*___value0ArraySize));
			for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(*___value0ArraySize)); i++)
			{
				(*___value0)[i] = (____value0_empty)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			}
		}
		else
		{
			*___value0ArraySize = 0;
			*___value0 = NULL;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetChar16Array_m2C69248F68D7705FE44FA8F777B061FA77C706A1(uint32_t* ___value0ArraySize, Il2CppChar** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("SingleArray", "Char16[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetBooleanArray_m083CB5579BC465B4D1BD84CE8382CB747A9FCC8C(uint32_t* ___value0ArraySize, bool** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("SingleArray", "Boolean[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetStringArray_m680617C6226187D28C4978B710AFBB8581AAC98F(uint32_t* ___value0ArraySize, Il2CppHString** ___value0) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___value0' to managed representation
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ____value0_empty = NULL;

		// Managed method invocation
		try
		{
			SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* managedArray = static_cast<SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*>(GetManagedObjectInline());
			il2cpp_array_size_t arrayLength = managedArray->max_length;
			if (arrayLength > 0)
			{
				return il2cpp_codegen_com_handle_invalid_ipropertyarray_conversion("SingleArray", "Single", "String", 0);
			}

			____value0_empty = NULL;
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		// Marshaling of parameter '___value0' back from managed representation
		if (____value0_empty != NULL)
		{
			*___value0ArraySize = static_cast<uint32_t>((____value0_empty)->max_length);
			*___value0 = il2cpp_codegen_marshal_allocate_array<Il2CppHString>(static_cast<int32_t>(*___value0ArraySize));
			for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(*___value0ArraySize)); i++)
			{
				if ((____value0_empty)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)) == NULL)
				{
					IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("value"), NULL);
				}
				(*___value0)[i] = il2cpp_codegen_create_hstring((____value0_empty)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)));
			}
		}
		else
		{
			*___value0ArraySize = 0;
			*___value0 = NULL;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInspectableArray_m6DCBE370A8CAC129E6D6BD91C6503D14A8109F79(uint32_t* ___value0ArraySize, Il2CppIInspectable*** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("SingleArray", "Inspectable[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetGuidArray_mE9983D9B5EE9AC1935C3EBD2F9E82DC7188E1D07(uint32_t* ___value0ArraySize, Guid_t ** ___value0) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___value0' to managed representation
		GuidU5BU5D_t6DCED1B9FC5592C43FAA73D81705104BD18151B8* ____value0_empty = NULL;

		// Managed method invocation
		try
		{
			SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* managedArray = static_cast<SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*>(GetManagedObjectInline());
			il2cpp_array_size_t arrayLength = managedArray->max_length;
			if (arrayLength > 0)
			{
				return il2cpp_codegen_com_handle_invalid_ipropertyarray_conversion("SingleArray", "Single", "Guid", 0);
			}

			____value0_empty = NULL;
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		// Marshaling of parameter '___value0' back from managed representation
		if (____value0_empty != NULL)
		{
			*___value0ArraySize = static_cast<uint32_t>((____value0_empty)->max_length);
			*___value0 = il2cpp_codegen_marshal_allocate_array<Guid_t >(static_cast<int32_t>(*___value0ArraySize));
			for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(*___value0ArraySize)); i++)
			{
				(*___value0)[i] = (____value0_empty)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			}
		}
		else
		{
			*___value0ArraySize = 0;
			*___value0 = NULL;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDateTimeArray_mEECFC6C321405CDBC425D321E2A8EF3E7BC306A7(uint32_t* ___value0ArraySize, DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("SingleArray", "DateTimeOffset[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetTimeSpanArray_mEAF3CA18AA928DAF3046F0F530B9324711650167(uint32_t* ___value0ArraySize, TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("SingleArray", "TimeSpan[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetPointArray_mD4ACB0F49C7BFEC1C03A4EE4263B23B2040CECD0(uint32_t* ___value0ArraySize, Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("SingleArray", "Point[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSizeArray_m3C079B4191330FAC3B2131D308C825BC72A5F0DC(uint32_t* ___value0ArraySize, Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("SingleArray", "Size[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetRectArray_m09598924D31716E1E653AE941186F8B16EA11A87(uint32_t* ___value0ArraySize, Rect_tC45F1DDF39812623644DE296D8057A4958176627 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("SingleArray", "Rect[]");
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver[]
struct SolverU5BU5D_tCDFF4AA7AC3D1F953967DC80B932F9FF5F205D4B_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<SolverU5BU5D_tCDFF4AA7AC3D1F953967DC80B932F9FF5F205D4B_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC
{
	inline SolverU5BU5D_tCDFF4AA7AC3D1F953967DC80B932F9FF5F205D4B_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<SolverU5BU5D_tCDFF4AA7AC3D1F953967DC80B932F9FF5F205D4B_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(4);
		interfaceIds[0] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[2] = IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID;
		interfaceIds[3] = IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID;

		*iidCount = 4;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1(uint32_t ___startIndex0, uint32_t ___items1ArraySize, Il2CppIInspectable** ___items1, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___startIndex0, ___items1ArraySize, ___items1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38(IBindableVectorView_tD80A01049DD2609FEA5FACD5E77BF95A875534FA** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0(uint32_t ___index0) IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F(Il2CppIInspectable* ___value0) IL2CPP_OVERRIDE
	{
		return IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3() IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF() IL2CPP_OVERRIDE
	{
		return IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_SolverU5BU5D_tCDFF4AA7AC3D1F953967DC80B932F9FF5F205D4B(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(SolverU5BU5D_tCDFF4AA7AC3D1F953967DC80B932F9FF5F205D4B_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) SolverU5BU5D_tCDFF4AA7AC3D1F953967DC80B932F9FF5F205D4B_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject[]
struct SpatialAwarenessMeshObjectU5BU5D_t411C31FFC63D0C64513DABEC7E1F54D6849F7300_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<SpatialAwarenessMeshObjectU5BU5D_t411C31FFC63D0C64513DABEC7E1F54D6849F7300_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC
{
	inline SpatialAwarenessMeshObjectU5BU5D_t411C31FFC63D0C64513DABEC7E1F54D6849F7300_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<SpatialAwarenessMeshObjectU5BU5D_t411C31FFC63D0C64513DABEC7E1F54D6849F7300_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(4);
		interfaceIds[0] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[2] = IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID;
		interfaceIds[3] = IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID;

		*iidCount = 4;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1(uint32_t ___startIndex0, uint32_t ___items1ArraySize, Il2CppIInspectable** ___items1, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___startIndex0, ___items1ArraySize, ___items1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38(IBindableVectorView_tD80A01049DD2609FEA5FACD5E77BF95A875534FA** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0(uint32_t ___index0) IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F(Il2CppIInspectable* ___value0) IL2CPP_OVERRIDE
	{
		return IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3() IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF() IL2CPP_OVERRIDE
	{
		return IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_SpatialAwarenessMeshObjectU5BU5D_t411C31FFC63D0C64513DABEC7E1F54D6849F7300(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(SpatialAwarenessMeshObjectU5BU5D_t411C31FFC63D0C64513DABEC7E1F54D6849F7300_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) SpatialAwarenessMeshObjectU5BU5D_t411C31FFC63D0C64513DABEC7E1F54D6849F7300_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessPlanarObject[]
struct SpatialAwarenessPlanarObjectU5BU5D_t36CFD4AD8AD6EB85F67310C71BCE6BF9D5EE2FD8_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<SpatialAwarenessPlanarObjectU5BU5D_t36CFD4AD8AD6EB85F67310C71BCE6BF9D5EE2FD8_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC
{
	inline SpatialAwarenessPlanarObjectU5BU5D_t36CFD4AD8AD6EB85F67310C71BCE6BF9D5EE2FD8_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<SpatialAwarenessPlanarObjectU5BU5D_t36CFD4AD8AD6EB85F67310C71BCE6BF9D5EE2FD8_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(4);
		interfaceIds[0] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[2] = IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID;
		interfaceIds[3] = IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID;

		*iidCount = 4;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1(uint32_t ___startIndex0, uint32_t ___items1ArraySize, Il2CppIInspectable** ___items1, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___startIndex0, ___items1ArraySize, ___items1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38(IBindableVectorView_tD80A01049DD2609FEA5FACD5E77BF95A875534FA** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0(uint32_t ___index0) IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F(Il2CppIInspectable* ___value0) IL2CPP_OVERRIDE
	{
		return IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3() IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF() IL2CPP_OVERRIDE
	{
		return IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_SpatialAwarenessPlanarObjectU5BU5D_t36CFD4AD8AD6EB85F67310C71BCE6BF9D5EE2FD8(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(SpatialAwarenessPlanarObjectU5BU5D_t36CFD4AD8AD6EB85F67310C71BCE6BF9D5EE2FD8_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) SpatialAwarenessPlanarObjectU5BU5D_t36CFD4AD8AD6EB85F67310C71BCE6BF9D5EE2FD8_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.Experimental.SpatialAwareness.SpatialAwarenessSceneObject[]
struct SpatialAwarenessSceneObjectU5BU5D_t4BD41115CAD73B8A43C3C559C436F5BAE253C589_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<SpatialAwarenessSceneObjectU5BU5D_t4BD41115CAD73B8A43C3C559C436F5BAE253C589_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC
{
	inline SpatialAwarenessSceneObjectU5BU5D_t4BD41115CAD73B8A43C3C559C436F5BAE253C589_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<SpatialAwarenessSceneObjectU5BU5D_t4BD41115CAD73B8A43C3C559C436F5BAE253C589_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(4);
		interfaceIds[0] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[2] = IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID;
		interfaceIds[3] = IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID;

		*iidCount = 4;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1(uint32_t ___startIndex0, uint32_t ___items1ArraySize, Il2CppIInspectable** ___items1, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___startIndex0, ___items1ArraySize, ___items1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38(IBindableVectorView_tD80A01049DD2609FEA5FACD5E77BF95A875534FA** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0(uint32_t ___index0) IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F(Il2CppIInspectable* ___value0) IL2CPP_OVERRIDE
	{
		return IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3() IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF() IL2CPP_OVERRIDE
	{
		return IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_SpatialAwarenessSceneObjectU5BU5D_t4BD41115CAD73B8A43C3C559C436F5BAE253C589(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(SpatialAwarenessSceneObjectU5BU5D_t4BD41115CAD73B8A43C3C559C436F5BAE253C589_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) SpatialAwarenessSceneObjectU5BU5D_t4BD41115CAD73B8A43C3C559C436F5BAE253C589_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.Sprite[]
struct SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC
{
	inline SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(4);
		interfaceIds[0] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[2] = IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID;
		interfaceIds[3] = IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID;

		*iidCount = 4;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1(uint32_t ___startIndex0, uint32_t ___items1ArraySize, Il2CppIInspectable** ___items1, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___startIndex0, ___items1ArraySize, ___items1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38(IBindableVectorView_tD80A01049DD2609FEA5FACD5E77BF95A875534FA** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0(uint32_t ___index0) IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F(Il2CppIInspectable* ___value0) IL2CPP_OVERRIDE
	{
		return IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3() IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF() IL2CPP_OVERRIDE
	{
		return IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Data.SqlTypes.SqlBinary[]
struct SqlBinaryU5BU5D_t4A1CD2FDEEC6E9EAEC15A8C28A7701484B8D4485_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<SqlBinaryU5BU5D_t4A1CD2FDEEC6E9EAEC15A8C28A7701484B8D4485_ComCallableWrapper>, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC
{
	inline SqlBinaryU5BU5D_t4A1CD2FDEEC6E9EAEC15A8C28A7701484B8D4485_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<SqlBinaryU5BU5D_t4A1CD2FDEEC6E9EAEC15A8C28A7701484B8D4485_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[1] = IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38(IBindableVectorView_tD80A01049DD2609FEA5FACD5E77BF95A875534FA** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0(uint32_t ___index0) IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F(Il2CppIInspectable* ___value0) IL2CPP_OVERRIDE
	{
		return IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3() IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF() IL2CPP_OVERRIDE
	{
		return IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_SqlBinaryU5BU5D_t4A1CD2FDEEC6E9EAEC15A8C28A7701484B8D4485(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(SqlBinaryU5BU5D_t4A1CD2FDEEC6E9EAEC15A8C28A7701484B8D4485_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) SqlBinaryU5BU5D_t4A1CD2FDEEC6E9EAEC15A8C28A7701484B8D4485_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Data.SqlTypes.SqlBoolean[]
struct SqlBooleanU5BU5D_t07B79EADC41ED65294851549545D3F3918FDC6A0_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<SqlBooleanU5BU5D_t07B79EADC41ED65294851549545D3F3918FDC6A0_ComCallableWrapper>, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC
{
	inline SqlBooleanU5BU5D_t07B79EADC41ED65294851549545D3F3918FDC6A0_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<SqlBooleanU5BU5D_t07B79EADC41ED65294851549545D3F3918FDC6A0_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[1] = IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38(IBindableVectorView_tD80A01049DD2609FEA5FACD5E77BF95A875534FA** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0(uint32_t ___index0) IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F(Il2CppIInspectable* ___value0) IL2CPP_OVERRIDE
	{
		return IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3() IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF() IL2CPP_OVERRIDE
	{
		return IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_SqlBooleanU5BU5D_t07B79EADC41ED65294851549545D3F3918FDC6A0(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(SqlBooleanU5BU5D_t07B79EADC41ED65294851549545D3F3918FDC6A0_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) SqlBooleanU5BU5D_t07B79EADC41ED65294851549545D3F3918FDC6A0_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Data.SqlTypes.SqlByte[]
struct SqlByteU5BU5D_tB403A2418F730327A0789B78506CDACCECBB4CB6_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<SqlByteU5BU5D_tB403A2418F730327A0789B78506CDACCECBB4CB6_ComCallableWrapper>, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC
{
	inline SqlByteU5BU5D_tB403A2418F730327A0789B78506CDACCECBB4CB6_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<SqlByteU5BU5D_tB403A2418F730327A0789B78506CDACCECBB4CB6_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[1] = IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38(IBindableVectorView_tD80A01049DD2609FEA5FACD5E77BF95A875534FA** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0(uint32_t ___index0) IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F(Il2CppIInspectable* ___value0) IL2CPP_OVERRIDE
	{
		return IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3() IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF() IL2CPP_OVERRIDE
	{
		return IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_SqlByteU5BU5D_tB403A2418F730327A0789B78506CDACCECBB4CB6(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(SqlByteU5BU5D_tB403A2418F730327A0789B78506CDACCECBB4CB6_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) SqlByteU5BU5D_tB403A2418F730327A0789B78506CDACCECBB4CB6_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Data.SqlTypes.SqlBytes[]
struct SqlBytesU5BU5D_t6F60DB18D1E498C69C2A2A292075B88252A47C49_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<SqlBytesU5BU5D_t6F60DB18D1E498C69C2A2A292075B88252A47C49_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC
{
	inline SqlBytesU5BU5D_t6F60DB18D1E498C69C2A2A292075B88252A47C49_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<SqlBytesU5BU5D_t6F60DB18D1E498C69C2A2A292075B88252A47C49_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(4);
		interfaceIds[0] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[2] = IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID;
		interfaceIds[3] = IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID;

		*iidCount = 4;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1(uint32_t ___startIndex0, uint32_t ___items1ArraySize, Il2CppIInspectable** ___items1, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___startIndex0, ___items1ArraySize, ___items1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38(IBindableVectorView_tD80A01049DD2609FEA5FACD5E77BF95A875534FA** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0(uint32_t ___index0) IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F(Il2CppIInspectable* ___value0) IL2CPP_OVERRIDE
	{
		return IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3() IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF() IL2CPP_OVERRIDE
	{
		return IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_SqlBytesU5BU5D_t6F60DB18D1E498C69C2A2A292075B88252A47C49(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(SqlBytesU5BU5D_t6F60DB18D1E498C69C2A2A292075B88252A47C49_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) SqlBytesU5BU5D_t6F60DB18D1E498C69C2A2A292075B88252A47C49_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Data.SqlTypes.SqlChars[]
struct SqlCharsU5BU5D_t20FD646DC66170A3025ACFD16C890584136139FC_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<SqlCharsU5BU5D_t20FD646DC66170A3025ACFD16C890584136139FC_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC
{
	inline SqlCharsU5BU5D_t20FD646DC66170A3025ACFD16C890584136139FC_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<SqlCharsU5BU5D_t20FD646DC66170A3025ACFD16C890584136139FC_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(4);
		interfaceIds[0] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[2] = IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID;
		interfaceIds[3] = IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID;

		*iidCount = 4;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1(uint32_t ___startIndex0, uint32_t ___items1ArraySize, Il2CppIInspectable** ___items1, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___startIndex0, ___items1ArraySize, ___items1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38(IBindableVectorView_tD80A01049DD2609FEA5FACD5E77BF95A875534FA** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0(uint32_t ___index0) IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F(Il2CppIInspectable* ___value0) IL2CPP_OVERRIDE
	{
		return IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3() IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF() IL2CPP_OVERRIDE
	{
		return IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_SqlCharsU5BU5D_t20FD646DC66170A3025ACFD16C890584136139FC(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(SqlCharsU5BU5D_t20FD646DC66170A3025ACFD16C890584136139FC_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) SqlCharsU5BU5D_t20FD646DC66170A3025ACFD16C890584136139FC_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Data.SqlTypes.SqlDateTime[]
struct SqlDateTimeU5BU5D_t12EEE5C7616A30E9F9CE304F76B5912B2A47EABF_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<SqlDateTimeU5BU5D_t12EEE5C7616A30E9F9CE304F76B5912B2A47EABF_ComCallableWrapper>, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC
{
	inline SqlDateTimeU5BU5D_t12EEE5C7616A30E9F9CE304F76B5912B2A47EABF_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<SqlDateTimeU5BU5D_t12EEE5C7616A30E9F9CE304F76B5912B2A47EABF_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[1] = IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38(IBindableVectorView_tD80A01049DD2609FEA5FACD5E77BF95A875534FA** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0(uint32_t ___index0) IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F(Il2CppIInspectable* ___value0) IL2CPP_OVERRIDE
	{
		return IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3() IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF() IL2CPP_OVERRIDE
	{
		return IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_SqlDateTimeU5BU5D_t12EEE5C7616A30E9F9CE304F76B5912B2A47EABF(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(SqlDateTimeU5BU5D_t12EEE5C7616A30E9F9CE304F76B5912B2A47EABF_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) SqlDateTimeU5BU5D_t12EEE5C7616A30E9F9CE304F76B5912B2A47EABF_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Data.SqlTypes.SqlDecimal[]
struct SqlDecimalU5BU5D_t436F1578CFBAD13111599A27A32FB894D8307CBD_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<SqlDecimalU5BU5D_t436F1578CFBAD13111599A27A32FB894D8307CBD_ComCallableWrapper>, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC
{
	inline SqlDecimalU5BU5D_t436F1578CFBAD13111599A27A32FB894D8307CBD_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<SqlDecimalU5BU5D_t436F1578CFBAD13111599A27A32FB894D8307CBD_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[1] = IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38(IBindableVectorView_tD80A01049DD2609FEA5FACD5E77BF95A875534FA** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0(uint32_t ___index0) IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F(Il2CppIInspectable* ___value0) IL2CPP_OVERRIDE
	{
		return IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3() IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF() IL2CPP_OVERRIDE
	{
		return IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_SqlDecimalU5BU5D_t436F1578CFBAD13111599A27A32FB894D8307CBD(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(SqlDecimalU5BU5D_t436F1578CFBAD13111599A27A32FB894D8307CBD_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) SqlDecimalU5BU5D_t436F1578CFBAD13111599A27A32FB894D8307CBD_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Data.SqlTypes.SqlDouble[]
struct SqlDoubleU5BU5D_t65F627E3E10E5B61B332C69E3E8180BB1B5C5EA7_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<SqlDoubleU5BU5D_t65F627E3E10E5B61B332C69E3E8180BB1B5C5EA7_ComCallableWrapper>, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC
{
	inline SqlDoubleU5BU5D_t65F627E3E10E5B61B332C69E3E8180BB1B5C5EA7_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<SqlDoubleU5BU5D_t65F627E3E10E5B61B332C69E3E8180BB1B5C5EA7_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[1] = IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38(IBindableVectorView_tD80A01049DD2609FEA5FACD5E77BF95A875534FA** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0(uint32_t ___index0) IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F(Il2CppIInspectable* ___value0) IL2CPP_OVERRIDE
	{
		return IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3() IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF() IL2CPP_OVERRIDE
	{
		return IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_SqlDoubleU5BU5D_t65F627E3E10E5B61B332C69E3E8180BB1B5C5EA7(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(SqlDoubleU5BU5D_t65F627E3E10E5B61B332C69E3E8180BB1B5C5EA7_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) SqlDoubleU5BU5D_t65F627E3E10E5B61B332C69E3E8180BB1B5C5EA7_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Data.SqlTypes.SqlGuid[]
struct SqlGuidU5BU5D_t7B958D75216823CC6FD381B81133477AFD2DE5E2_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<SqlGuidU5BU5D_t7B958D75216823CC6FD381B81133477AFD2DE5E2_ComCallableWrapper>, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC
{
	inline SqlGuidU5BU5D_t7B958D75216823CC6FD381B81133477AFD2DE5E2_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<SqlGuidU5BU5D_t7B958D75216823CC6FD381B81133477AFD2DE5E2_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[1] = IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38(IBindableVectorView_tD80A01049DD2609FEA5FACD5E77BF95A875534FA** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0(uint32_t ___index0) IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F(Il2CppIInspectable* ___value0) IL2CPP_OVERRIDE
	{
		return IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3() IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF() IL2CPP_OVERRIDE
	{
		return IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_SqlGuidU5BU5D_t7B958D75216823CC6FD381B81133477AFD2DE5E2(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(SqlGuidU5BU5D_t7B958D75216823CC6FD381B81133477AFD2DE5E2_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) SqlGuidU5BU5D_t7B958D75216823CC6FD381B81133477AFD2DE5E2_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Data.SqlTypes.SqlInt16[]
struct SqlInt16U5BU5D_tFDBC98064CCDBA5EF1A928770767FF5E428F68B0_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<SqlInt16U5BU5D_tFDBC98064CCDBA5EF1A928770767FF5E428F68B0_ComCallableWrapper>, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC
{
	inline SqlInt16U5BU5D_tFDBC98064CCDBA5EF1A928770767FF5E428F68B0_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<SqlInt16U5BU5D_tFDBC98064CCDBA5EF1A928770767FF5E428F68B0_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[1] = IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38(IBindableVectorView_tD80A01049DD2609FEA5FACD5E77BF95A875534FA** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0(uint32_t ___index0) IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F(Il2CppIInspectable* ___value0) IL2CPP_OVERRIDE
	{
		return IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3() IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF() IL2CPP_OVERRIDE
	{
		return IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_SqlInt16U5BU5D_tFDBC98064CCDBA5EF1A928770767FF5E428F68B0(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(SqlInt16U5BU5D_tFDBC98064CCDBA5EF1A928770767FF5E428F68B0_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) SqlInt16U5BU5D_tFDBC98064CCDBA5EF1A928770767FF5E428F68B0_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Data.SqlTypes.SqlInt32[]
struct SqlInt32U5BU5D_t4E9A0DCCD18A21ED32AE342EE7288F4722D13002_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<SqlInt32U5BU5D_t4E9A0DCCD18A21ED32AE342EE7288F4722D13002_ComCallableWrapper>, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC
{
	inline SqlInt32U5BU5D_t4E9A0DCCD18A21ED32AE342EE7288F4722D13002_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<SqlInt32U5BU5D_t4E9A0DCCD18A21ED32AE342EE7288F4722D13002_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[1] = IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38(IBindableVectorView_tD80A01049DD2609FEA5FACD5E77BF95A875534FA** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0(uint32_t ___index0) IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F(Il2CppIInspectable* ___value0) IL2CPP_OVERRIDE
	{
		return IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3() IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF() IL2CPP_OVERRIDE
	{
		return IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_SqlInt32U5BU5D_t4E9A0DCCD18A21ED32AE342EE7288F4722D13002(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(SqlInt32U5BU5D_t4E9A0DCCD18A21ED32AE342EE7288F4722D13002_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) SqlInt32U5BU5D_t4E9A0DCCD18A21ED32AE342EE7288F4722D13002_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Data.SqlTypes.SqlInt64[]
struct SqlInt64U5BU5D_t07215C71C5947E0BE4CF431CB6124BC53ADA28C5_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<SqlInt64U5BU5D_t07215C71C5947E0BE4CF431CB6124BC53ADA28C5_ComCallableWrapper>, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC
{
	inline SqlInt64U5BU5D_t07215C71C5947E0BE4CF431CB6124BC53ADA28C5_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<SqlInt64U5BU5D_t07215C71C5947E0BE4CF431CB6124BC53ADA28C5_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[1] = IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38(IBindableVectorView_tD80A01049DD2609FEA5FACD5E77BF95A875534FA** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0(uint32_t ___index0) IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F(Il2CppIInspectable* ___value0) IL2CPP_OVERRIDE
	{
		return IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3() IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF() IL2CPP_OVERRIDE
	{
		return IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_SqlInt64U5BU5D_t07215C71C5947E0BE4CF431CB6124BC53ADA28C5(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(SqlInt64U5BU5D_t07215C71C5947E0BE4CF431CB6124BC53ADA28C5_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) SqlInt64U5BU5D_t07215C71C5947E0BE4CF431CB6124BC53ADA28C5_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Data.SqlTypes.SqlMoney[]
struct SqlMoneyU5BU5D_tF5702E9AA3B2D27362711637FFD105D198723C95_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<SqlMoneyU5BU5D_tF5702E9AA3B2D27362711637FFD105D198723C95_ComCallableWrapper>, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC
{
	inline SqlMoneyU5BU5D_tF5702E9AA3B2D27362711637FFD105D198723C95_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<SqlMoneyU5BU5D_tF5702E9AA3B2D27362711637FFD105D198723C95_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[1] = IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38(IBindableVectorView_tD80A01049DD2609FEA5FACD5E77BF95A875534FA** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0(uint32_t ___index0) IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F(Il2CppIInspectable* ___value0) IL2CPP_OVERRIDE
	{
		return IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3() IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF() IL2CPP_OVERRIDE
	{
		return IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_SqlMoneyU5BU5D_tF5702E9AA3B2D27362711637FFD105D198723C95(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(SqlMoneyU5BU5D_tF5702E9AA3B2D27362711637FFD105D198723C95_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) SqlMoneyU5BU5D_tF5702E9AA3B2D27362711637FFD105D198723C95_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Data.SqlTypes.SqlSingle[]
struct SqlSingleU5BU5D_t2F81D199741A89C70F73D8FAC1385A28379B442F_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<SqlSingleU5BU5D_t2F81D199741A89C70F73D8FAC1385A28379B442F_ComCallableWrapper>, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC
{
	inline SqlSingleU5BU5D_t2F81D199741A89C70F73D8FAC1385A28379B442F_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<SqlSingleU5BU5D_t2F81D199741A89C70F73D8FAC1385A28379B442F_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[1] = IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38(IBindableVectorView_tD80A01049DD2609FEA5FACD5E77BF95A875534FA** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0(uint32_t ___index0) IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F(Il2CppIInspectable* ___value0) IL2CPP_OVERRIDE
	{
		return IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3() IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF() IL2CPP_OVERRIDE
	{
		return IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_SqlSingleU5BU5D_t2F81D199741A89C70F73D8FAC1385A28379B442F(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(SqlSingleU5BU5D_t2F81D199741A89C70F73D8FAC1385A28379B442F_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) SqlSingleU5BU5D_t2F81D199741A89C70F73D8FAC1385A28379B442F_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Data.SqlTypes.SqlString[]
struct SqlStringU5BU5D_tB34569068C89C1DE7211001B8C5A6C84787554D5_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<SqlStringU5BU5D_tB34569068C89C1DE7211001B8C5A6C84787554D5_ComCallableWrapper>, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC
{
	inline SqlStringU5BU5D_tB34569068C89C1DE7211001B8C5A6C84787554D5_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<SqlStringU5BU5D_tB34569068C89C1DE7211001B8C5A6C84787554D5_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[1] = IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38(IBindableVectorView_tD80A01049DD2609FEA5FACD5E77BF95A875534FA** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0(uint32_t ___index0) IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F(Il2CppIInspectable* ___value0) IL2CPP_OVERRIDE
	{
		return IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3() IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF() IL2CPP_OVERRIDE
	{
		return IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_SqlStringU5BU5D_tB34569068C89C1DE7211001B8C5A6C84787554D5(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(SqlStringU5BU5D_tB34569068C89C1DE7211001B8C5A6C84787554D5_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) SqlStringU5BU5D_tB34569068C89C1DE7211001B8C5A6C84787554D5_ComCallableWrapper(obj));
}
