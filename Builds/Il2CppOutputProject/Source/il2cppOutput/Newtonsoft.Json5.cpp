#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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
template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct VirtFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Action`2<System.Object,System.Object>
struct Action_2_t4FB8E5660AE634E13BF340904C61FEA9DCE9D52D;
// System.Collections.ObjectModel.Collection`1<Newtonsoft.Json.Linq.JToken>
struct Collection_1_t4C6E257DCF9453754AD27FD3CEE7E20426D8D4DB;
// System.Collections.ObjectModel.Collection`1<System.Object>
struct Collection_1_tC70665E043EEEEE0CE76CFA285D8ACDB39D36EB0;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo>
struct Dictionary_2_t5B8303F2C9869A39ED3E03C0FBB09F817E479402;
// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo>
struct Dictionary_2_t0015CBF964B0687CBB5ECFDDE06671A8F3DDE4BC;
// System.Collections.Generic.Dictionary`2<System.String,Newtonsoft.Json.Linq.JToken>
struct Dictionary_2_t215EBC28480DA2BAFF6E9E422D371AF2EFD18921;
// Newtonsoft.Json.Utilities.DynamicProxy`1<Newtonsoft.Json.Linq.JObject>
struct DynamicProxy_1_tB32CF5596CE0637E7BE5E5379204E849C6E6691C;
// Newtonsoft.Json.Utilities.DynamicProxy`1<Newtonsoft.Json.Linq.JValue>
struct DynamicProxy_1_t586F0C5EE6DD22DC480272A4B3ACDFF9215CB1A0;
// Newtonsoft.Json.Utilities.DynamicProxy`1<System.Object>
struct DynamicProxy_1_t47FA933680D3A6A70869818FB5D58242943F5169;
// System.Func`1<System.Object>
struct Func_1_t807CEE610086E24A0167BAA97A64062016E09D49;
// System.Func`2<System.Reflection.ConstructorInfo,System.Boolean>
struct Func_2_t6D7DD0FE4DA742E557BDCA2D3A8E6D7638B5673C;
// System.Func`2<System.Reflection.FieldInfo,System.Boolean>
struct Func_2_t0BE5B54DD65017DAF1DC5DEC5A896A2B0550F8AE;
// System.Func`2<Newtonsoft.Json.Linq.JProperty,System.String>
struct Func_2_tA651E2F99CED91C9590800FA47A2E0E3D0BFE402;
// System.Func`2<Newtonsoft.Json.Serialization.JsonProperty,Newtonsoft.Json.Serialization.JsonProperty>
struct Func_2_t98F3186DEEBA9529F2FE0701CB3CEE9096478428;
// System.Func`2<Newtonsoft.Json.Serialization.JsonProperty,System.String>
struct Func_2_t96ACB13358EDC88778D0F3036E69D01C10A9AC77;
// System.Func`2<Newtonsoft.Json.Serialization.JsonProperty,Newtonsoft.Json.Serialization.JsonSerializerInternalReader/PropertyPresence>
struct Func_2_tDEB3C84C1013476E6E9803CFF1C1DFD71C5F5468;
// System.Func`2<System.Reflection.MemberInfo,System.String>
struct Func_2_t82BDCCD3F9984E63AFAFFE2E311FD4AA25753329;
// System.Func`2<System.Reflection.MethodInfo,System.Boolean>
struct Func_2_t736D5CB9E1D48C8363AF140355202C24D6CAE85D;
// System.Func`2<System.Object,System.Object>
struct Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436;
// System.Func`2<System.Object,System.Type>
struct Func_2_t1BAD9F1A22B63A9F2F0380E7FB5D5BB7FED704BF;
// System.Func`2<System.Reflection.ParameterInfo,System.Type>
struct Func_2_t5938BB484083AB6B9B4C4F0DBAD54A7F51611EBF;
// System.Collections.Generic.IEnumerable`1<Newtonsoft.Json.Linq.JProperty>
struct IEnumerable_1_t241A6F293AD2A78E79EA0AED9395D972956B5A9B;
// System.Collections.Generic.IEnumerable`1<Newtonsoft.Json.Linq.JToken>
struct IEnumerable_1_tA97507BE4EA999D3A37CBC336924BFEA67C9FE9E;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t52B1AC8D9E5E1ED28DF6C46A37C9A1B00B394F9D;
// System.Collections.Generic.IEnumerable`1<System.Reflection.ParameterInfo>
struct IEnumerable_1_t7893F3E646CA021CE48865708B04C4CDA68D7388;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_tBD60400523D840591A17E4CBBACC79397F68FAA2;
// System.Collections.Generic.IEnumerable`1<System.Type>
struct IEnumerable_1_tA2CFC624CD7D291A0E486D1A5FC78BF6425F9428;
// System.Collections.Generic.IEnumerator`1<Newtonsoft.Json.Linq.JToken>
struct IEnumerator_1_t6D746D34D007AC6D34C5279EA90DA276DDF70281;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t2DC97C7D486BF9E077C2BC2E517E434F393AA76E;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tE6A65C5E45E33FD7D9849FD0914DE3AD32B68050;
// System.Collections.Generic.IList`1<Newtonsoft.Json.Linq.JToken>
struct IList_1_t1CE534FF01FD10E59666202C498A7868A0306C67;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<System.String>
struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3;
// Newtonsoft.Json.Utilities.MethodCall`2<System.Object,System.Object>
struct MethodCall_2_t5E28B9DEE3B3A32CA955A9F5A149CC91CE1F9C6F;
// Newtonsoft.Json.Serialization.ObjectConstructor`1<System.Object>
struct ObjectConstructor_1_t3B1FEEAAE751376A314DA00A745060F2E5C298BA;
// System.Predicate`1<System.Object>
struct Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// Newtonsoft.Json.Linq.JToken[]
struct JTokenU5BU5D_tD269AF136EE7F4BFB20B35F3E6E8E7935793CC90;
// Newtonsoft.Json.Linq.JTokenType[]
struct JTokenTypeU5BU5D_t0E17AD07EC583E3368353F8D127FE39336FE31C7;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// System.Globalization.Calendar
struct Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A;
// System.Globalization.CompareInfo
struct CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9;
// System.Reflection.ConstructorInfo
struct ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B;
// System.Globalization.CultureData
struct CultureData_t53CDF1C5F789A28897415891667799420D3C5529;
// System.Globalization.CultureInfo
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// Newtonsoft.Json.Serialization.ErrorContext
struct ErrorContext_tEC7DD84C80D960CB3C16A138F5DE35DC9A131910;
// System.Exception
struct Exception_t;
// System.Reflection.FieldInfo
struct FieldInfo_t;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// Newtonsoft.Json.Serialization.IAttributeProvider
struct IAttributeProvider_tCB2FA984CEEC4E727CC03F117B261A3DEA7DF086;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// System.IFormatProvider
struct IFormatProvider_tF2AECC4B14F41D36718920D67F930CED940412DF;
// Newtonsoft.Json.Serialization.IValueProvider
struct IValueProvider_t0A3CB68B58496E0BF94427AF991FF6D74287B0CD;
// System.IndexOutOfRangeException
struct IndexOutOfRangeException_tDC9EF7A0346CE39E54DA1083F07BE6DFC3CE2EDD;
// System.InvalidOperationException
struct InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB;
// Newtonsoft.Json.Linq.JContainer
struct JContainer_t38DD4DF522660749764609AA408DFD0575BABE3F;
// Newtonsoft.Json.Linq.JObject
struct JObject_t3ABEFC12B3B74EC00B7032CD365434C91B076FDE;
// Newtonsoft.Json.Linq.JProperty
struct JProperty_tF9DA59F1EB857859581CDEE663A2A0040D5A9A53;
// Newtonsoft.Json.Linq.JPropertyKeyedCollection
struct JPropertyKeyedCollection_t53866F50942B265AFC54305B4437D5B9173FDF48;
// Newtonsoft.Json.Linq.JToken
struct JToken_t29F54EE35244E7B362E5D54E9517FCD2B0DBE359;
// Newtonsoft.Json.Serialization.JsonContract
struct JsonContract_t5B4355E6C6A7B78C25BC60D66117133E4CE83954;
// Newtonsoft.Json.JsonConverter
struct JsonConverter_t36490169A72CC2FE84A3114C40D7103DD83826D0;
// Newtonsoft.Json.JsonException
struct JsonException_t97C31FBFB6F0EFC40669CFF7E1F9E1FE6C7A54AD;
// Newtonsoft.Json.Serialization.JsonProperty
struct JsonProperty_tEC316772CD2F8406C84CDA3EEAD7430ED09055DB;
// Newtonsoft.Json.Linq.JsonSelectSettings
struct JsonSelectSettings_t473B56CACFC6E1C255C7191CE7FAD72AB78BFCEF;
// System.ComponentModel.ListChangedEventHandler
struct ListChangedEventHandler_t02874ED3C8355742E3E62AED85A53F3140506B8C;
// System.Runtime.InteropServices.MarshalAsAttribute
struct MarshalAsAttribute_t1689F84A11C34D0F35491C8F0DA4421467B6EFE6;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Reflection.MethodBase
struct MethodBase_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// System.Collections.Specialized.NotifyCollectionChangedEventHandler
struct NotifyCollectionChangedEventHandler_t737D98299AF810020BC5FC077CC664F46B6D0621;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D;
// System.Reflection.ParameterInfo
struct ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7;
// System.ComponentModel.PropertyChangedEventHandler
struct PropertyChangedEventHandler_t094CCD63C952DCD4E1ED794434160679C28A8E99;
// System.ComponentModel.PropertyChangingEventHandler
struct PropertyChangingEventHandler_t5EA6F6EAA933D35C0AAD9D347A3BD53D343E4C22;
// System.Reflection.PropertyInfo
struct PropertyInfo_t;
// Newtonsoft.Json.Linq.JsonPath.QueryExpression
struct QueryExpression_tAAC183FFC4E697E5ECD4CEE7D463FB07C8F54221;
// Newtonsoft.Json.Linq.JsonPath.QueryFilter
struct QueryFilter_t953A25C7D920832364FB38BFFB972F6811BA4F28;
// Newtonsoft.Json.Linq.JsonPath.QueryScanFilter
struct QueryScanFilter_tA0457204F988F3944CED5D7DE2620ABC6CEA1FA6;
// Newtonsoft.Json.Utilities.ReflectionDelegateFactory
struct ReflectionDelegateFactory_t7567424477B11CC830C07A6F07A352C2F2028E68;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// Newtonsoft.Json.Linq.JsonPath.ScanFilter
struct ScanFilter_tEAA0D66F60DC218A0AAE2CBEEFCEE961767F79D1;
// Newtonsoft.Json.Linq.JsonPath.ScanMultipleFilter
struct ScanMultipleFilter_tEEDD4258E063FF8636D579BAD3E8CA5AA084760A;
// System.String
struct String_t;
// System.Globalization.TextInfo
struct TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C;
// System.Type
struct Type_t;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// Newtonsoft.Json.Utilities.ImmutableCollectionsUtils/<>c
struct U3CU3Ec_tC7BF6D75D37E7B375E3ABA82A78DE1344084B231;
// Newtonsoft.Json.Utilities.ImmutableCollectionsUtils/<>c__DisplayClass24_0
struct U3CU3Ec__DisplayClass24_0_tC2CEDA75B8FFC26A954AFE3DDEC606C92CCB9AC1;
// Newtonsoft.Json.Utilities.ImmutableCollectionsUtils/<>c__DisplayClass25_0
struct U3CU3Ec__DisplayClass25_0_t06458F72EF35C25F3450D4C9073A0AECEF03E502;
// Newtonsoft.Json.Utilities.ImmutableCollectionsUtils/ImmutableCollectionTypeInfo
struct ImmutableCollectionTypeInfo_t89E5B5C21753029E7770B0AB5EE30D754F18F2B4;
// Newtonsoft.Json.Linq.JContainer/<GetDescendants>d__36
struct U3CGetDescendantsU3Ed__36_t2DF4F7529B67D1F4152A061154DFC629029DB527;
// Newtonsoft.Json.Linq.JObject/<GetEnumerator>d__63
struct U3CGetEnumeratorU3Ed__63_tE454846B9514A03E19A8106BCD94046B4D4A832D;
// Newtonsoft.Json.Linq.JObject/JObjectDynamicProxy
struct JObjectDynamicProxy_t188CA0FDD34F134B1C56CFD119F8E4A5FC5E1B97;
// Newtonsoft.Json.Linq.JProperty/JPropertyList
struct JPropertyList_tE978701AA0E5EA3DE317E8ABF5EC0C7CE5E713DB;
// Newtonsoft.Json.Linq.JToken/LineInfoAnnotation
struct LineInfoAnnotation_t87A131EB9B5EAEF1ACFE0A886EF4061C285B7E29;
// Newtonsoft.Json.Linq.JValue/JValueDynamicProxy
struct JValueDynamicProxy_t7E019E739D6C033ACFD9DB0B20CCDA560A9EDA6F;
// Newtonsoft.Json.Serialization.JsonContract/<>c__DisplayClass57_0
struct U3CU3Ec__DisplayClass57_0_t64942CC2AF348FF5EE4757CBE42C3E00369C0FD3;
// Newtonsoft.Json.Serialization.JsonContract/<>c__DisplayClass58_0
struct U3CU3Ec__DisplayClass58_0_t4BECBCC567D9F07194FFFD54D7E4BCFA61B56490;
// Newtonsoft.Json.Serialization.JsonSerializerInternalBase/ReferenceEqualsEqualityComparer
struct ReferenceEqualsEqualityComparer_t9A09775A8F850D58037215D62244D38CA209D014;
// Newtonsoft.Json.Serialization.JsonSerializerInternalReader/<>c
struct U3CU3Ec_t914CA97977CFC2D085D6D2EFD193E4C593C02E29;
// Newtonsoft.Json.Serialization.JsonSerializerInternalReader/<>c__DisplayClass38_0
struct U3CU3Ec__DisplayClass38_0_tC13F3834EB887BC11F6C1694C391869A1E436A85;
// Newtonsoft.Json.Serialization.JsonSerializerInternalReader/CreatorPropertyContext
struct CreatorPropertyContext_t6B0EB52BFB828942F28C8153669D89C8A75CED5F;
// Newtonsoft.Json.Serialization.JsonTypeReflector/<>c
struct U3CU3Ec_tE90ECA1894178BF3B7F18DCB97DBEC083303FAB6;
// Newtonsoft.Json.Serialization.JsonTypeReflector/<>c__DisplayClass22_0
struct U3CU3Ec__DisplayClass22_0_t79599FC1F9E8D5CF2D8CD48EB9B2685D46203DFE;
// Newtonsoft.Json.Utilities.LateBoundReflectionDelegateFactory/<>c__DisplayClass3_0
struct U3CU3Ec__DisplayClass3_0_t0E3160D956905841ACACA876BD7CCF771F4116AC;
// Newtonsoft.Json.Linq.JsonPath.QueryFilter/<ExecuteFilter>d__2
struct U3CExecuteFilterU3Ed__2_t66B87E7CFF03DC68D0E6A97FFEB4183AD5E7A1B4;
// Newtonsoft.Json.Linq.JsonPath.QueryScanFilter/<ExecuteFilter>d__2
struct U3CExecuteFilterU3Ed__2_t21E3C4FBFF60C5E17F946D9E0505FA0F13585478;
// Newtonsoft.Json.Utilities.ReflectionObject/<>c__DisplayClass11_0
struct U3CU3Ec__DisplayClass11_0_tF928E96E14BC8ECEB70C485002D09193B22513F2;
// Newtonsoft.Json.Utilities.ReflectionObject/<>c__DisplayClass11_1
struct U3CU3Ec__DisplayClass11_1_t78E2B27646A3CDFEBAB7C881F9DA8405FE8779CC;
// Newtonsoft.Json.Utilities.ReflectionObject/<>c__DisplayClass11_2
struct U3CU3Ec__DisplayClass11_2_t92F76CE0A268F4D1987C038EF709A6228BD72259;
// Newtonsoft.Json.Utilities.ReflectionUtils/<>c
struct U3CU3Ec_t8CE040292E2A95685256FEE59EF2868355725303;
// Newtonsoft.Json.Utilities.ReflectionUtils/<>c__DisplayClass31_0
struct U3CU3Ec__DisplayClass31_0_tCEC3365D1BD57BC604DAA5A57CC4C55E93F0B9F8;
// Newtonsoft.Json.Utilities.ReflectionUtils/<>c__DisplayClass44_0
struct U3CU3Ec__DisplayClass44_0_t5869AF36E0D5F069396C0CD6EAC9CFEDED43C29B;
// Newtonsoft.Json.Utilities.ReflectionUtils/<>c__DisplayClass44_1
struct U3CU3Ec__DisplayClass44_1_t0F0B1C1F120D3597373438C49039C3858E5E9BAC;
// Newtonsoft.Json.Utilities.ReflectionUtils/<>c__DisplayClass45_0
struct U3CU3Ec__DisplayClass45_0_t3F7A7DD4346628E64B108B2D3BF7E943577E2047;
// Newtonsoft.Json.Linq.JsonPath.ScanFilter/<ExecuteFilter>d__2
struct U3CExecuteFilterU3Ed__2_t6A9514CF3CFAEC5C49745D57B133C029C022CA5E;
// Newtonsoft.Json.Linq.JsonPath.ScanMultipleFilter/<ExecuteFilter>d__2
struct U3CExecuteFilterU3Ed__2_t67C36B546073E9FB034A92E9CDFC8558C33E597C;
// Newtonsoft.Json.Linq.JObject/JObjectDynamicProxy/<>c
struct U3CU3Ec_t69B92625E75B6733719EC0111D83CBBA38E18FB2;
// Newtonsoft.Json.Linq.JProperty/JPropertyList/<GetEnumerator>d__1
struct U3CGetEnumeratorU3Ed__1_t7C50A3D32B6527C6EEA9E4D7FABB016161DB0A9D;

IL2CPP_EXTERN_C RuntimeClass* ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t1BAD9F1A22B63A9F2F0380E7FB5D5BB7FED704BF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tA651E2F99CED91C9590800FA47A2E0E3D0BFE402_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_tA97507BE4EA999D3A37CBC336924BFEA67C9FE9E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t6D746D34D007AC6D34C5279EA90DA276DDF70281_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IndexOutOfRangeException_tDC9EF7A0346CE39E54DA1083F07BE6DFC3CE2EDD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JContainer_t38DD4DF522660749764609AA408DFD0575BABE3F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JProperty_tF9DA59F1EB857859581CDEE663A2A0040D5A9A53_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JsonException_t97C31FBFB6F0EFC40669CFF7E1F9E1FE6C7A54AD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JsonTypeReflector_t00010D63925C4A3D7651B5AF846432BC522BB521_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KeyValuePair_2_t9967CE3AA01B66D662E4BE42AC4A1AC4FA262636_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ReflectionUtils_t7644190A8F73F83DCD6612F14B3BBA31F1C00EE2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CExecuteFilterU3Ed__2_t21E3C4FBFF60C5E17F946D9E0505FA0F13585478_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CExecuteFilterU3Ed__2_t66B87E7CFF03DC68D0E6A97FFEB4183AD5E7A1B4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CExecuteFilterU3Ed__2_t67C36B546073E9FB034A92E9CDFC8558C33E597C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CExecuteFilterU3Ed__2_t6A9514CF3CFAEC5C49745D57B133C029C022CA5E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CGetDescendantsU3Ed__36_t2DF4F7529B67D1F4152A061154DFC629029DB527_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CGetEnumeratorU3Ed__1_t7C50A3D32B6527C6EEA9E4D7FABB016161DB0A9D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t69B92625E75B6733719EC0111D83CBBA38E18FB2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t8CE040292E2A95685256FEE59EF2868355725303_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t914CA97977CFC2D085D6D2EFD193E4C593C02E29_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tC7BF6D75D37E7B375E3ABA82A78DE1344084B231_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tE90ECA1894178BF3B7F18DCB97DBEC083303FAB6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral1071603CBA2BD3C11874C92C7C0DB97BF5899046;
IL2CPP_EXTERN_C String_t* _stringLiteral23B435163284C2F25AE5E84212B0650024F0760B;
IL2CPP_EXTERN_C String_t* _stringLiteral6699410DAF356A90DFDDE06D8F3571412FFE4442;
IL2CPP_EXTERN_C String_t* _stringLiteral92A38C953A6126D97ED1B04B582F3B4519E7D184;
IL2CPP_EXTERN_C String_t* _stringLiteralD7438454F3EF140B6B22CB3ED354178FA3A495D5;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Collection_1_GetEnumerator_m9A9AF809D0758FE594BBBC3CD836A13AC0D4E9B8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DynamicProxy_1__ctor_m25113953CD27E3BF12CC252D83165388DFA9BCA0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DynamicProxy_1__ctor_m8A9C57DF8542DEF86098C4EA3326446D6972F813_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Any_TisParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7_mC34A3CF45962BF5A4FDF04D029B51F4B0CFD938F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Select_TisJProperty_tF9DA59F1EB857859581CDEE663A2A0040D5A9A53_TisString_t_mEF0A3E7178D1CF8B087B34729FA56017EBCBA29B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Select_TisRuntimeObject_TisType_t_m9172D480F276E4D46B7848B73E3042F3A9771258_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToArray_TisType_t_mDB744C25D97BD49BD70979DC17395D271EA84945_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m65A91D17CADA79F187F4D68980A9C8640B6C9FC7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mCE70417061695048D84E473D50556E46B8630F54_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m9B0E356FA9FCFB9B1BECC6D7C5DF5C03309251AA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_1_Invoke_m4DB932CB3E45300394D6087DBF4C3D620606F726_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_m84B84849EC5A4CBDFA2EAC12D68E99B17D87EAFD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_mA2CDA945851C668EA7FAE2F3F4AF9D4939B93E4B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JPropertyList_get_Item_m617DE50138375FFFE029DC85E6597C9A7781B150_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JPropertyList_set_Item_m57F2A4BEFB8B0C728CF6054EB4B6EE4125000E93_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2__ctor_m4CD42BCF51048E24BA23842C9A59B9819BD9A94D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m35388695226DE2F7B0B5D0A07016716D6AD9CAEF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MethodCall_2_Invoke_m7CD4C7C78993C179E715B01E8A76BDFC3301C8F1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ObjectConstructor_1_Invoke_mD53EE7B7ADD5CD96FB1B370859ED28272081B953_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CExecuteFilterU3Ed__2_System_Collections_IEnumerator_Reset_m14BAF6EBE704F4BBB519927469B1A8A48D47E1F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CExecuteFilterU3Ed__2_System_Collections_IEnumerator_Reset_m36CFE38C6CBEB524C55A737C0612D4C91FB2E480_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CExecuteFilterU3Ed__2_System_Collections_IEnumerator_Reset_m4C7350A9AAC246B77D1CF00659BCDA35549DAC78_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CExecuteFilterU3Ed__2_System_Collections_IEnumerator_Reset_mEDE87C046D2A9B73DBA1C21B533E4D309945EFD3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CGetDescendantsU3Ed__36_System_Collections_IEnumerator_Reset_mFC4CC760F6B6332B82A1C790258B0E6C2B50E80F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CGetEnumeratorU3Ed__1_System_Collections_IEnumerator_Reset_mE76377CF2E706BB0ED1D02AD90A5203BCD8A2549_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CGetEnumeratorU3Ed__63_System_Collections_IEnumerator_Reset_m22A141669BCF4A5CE19D1A27F96C5166880BABAE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CGetCreatorU3Eb__22_1_m7B9FBD5F9F0115AD28AC079C923833FBBF9418F0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CGetDynamicMemberNamesU3Eb__2_0_mDB798406DCFA8C7F2DA660555006342828E1B907_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass22_0_U3CGetCreatorU3Eb__0_m3BFCC5379241404DF4CF7489B5B232C02960D0B9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* IEnumerable_1_t2DA210D3B033E1BEBFC81C153FA1C67749C6D264_0_0_0_var;
struct CultureData_t53CDF1C5F789A28897415891667799420D3C5529_marshaled_com;
struct CultureData_t53CDF1C5F789A28897415891667799420D3C5529_marshaled_pinvoke;
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_com;
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_pinvoke;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct JTokenU5BU5D_tD269AF136EE7F4BFB20B35F3E6E8E7935793CC90;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B;
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// System.Collections.ObjectModel.Collection`1<Newtonsoft.Json.Linq.JToken>
struct Collection_1_t4C6E257DCF9453754AD27FD3CEE7E20426D8D4DB  : public RuntimeObject
{
public:
	// System.Collections.Generic.IList`1<T> System.Collections.ObjectModel.Collection`1::items
	RuntimeObject* ___items_0;
	// System.Object System.Collections.ObjectModel.Collection`1::_syncRoot
	RuntimeObject * ____syncRoot_1;

public:
	inline static int32_t get_offset_of_items_0() { return static_cast<int32_t>(offsetof(Collection_1_t4C6E257DCF9453754AD27FD3CEE7E20426D8D4DB, ___items_0)); }
	inline RuntimeObject* get_items_0() const { return ___items_0; }
	inline RuntimeObject** get_address_of_items_0() { return &___items_0; }
	inline void set_items_0(RuntimeObject* value)
	{
		___items_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___items_0), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_1() { return static_cast<int32_t>(offsetof(Collection_1_t4C6E257DCF9453754AD27FD3CEE7E20426D8D4DB, ____syncRoot_1)); }
	inline RuntimeObject * get__syncRoot_1() const { return ____syncRoot_1; }
	inline RuntimeObject ** get_address_of__syncRoot_1() { return &____syncRoot_1; }
	inline void set__syncRoot_1(RuntimeObject * value)
	{
		____syncRoot_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_1), (void*)value);
	}
};


// Newtonsoft.Json.Utilities.DynamicProxy`1<Newtonsoft.Json.Linq.JObject>
struct DynamicProxy_1_tB32CF5596CE0637E7BE5E5379204E849C6E6691C  : public RuntimeObject
{
public:

public:
};


// Newtonsoft.Json.Utilities.DynamicProxy`1<Newtonsoft.Json.Linq.JValue>
struct DynamicProxy_1_t586F0C5EE6DD22DC480272A4B3ACDFF9215CB1A0  : public RuntimeObject
{
public:

public:
};


// System.EmptyArray`1<System.Object>
struct EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4  : public RuntimeObject
{
public:

public:
};

struct EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4_StaticFields
{
public:
	// T[] System.EmptyArray`1::Value
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___Value_0;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4_StaticFields, ___Value_0)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_Value_0() const { return ___Value_0; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___Value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Value_0), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.String>
struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____items_1)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get__items_1() const { return ____items_1; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_StaticFields, ____emptyArray_5)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get__emptyArray_5() const { return ____emptyArray_5; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.Globalization.CultureInfo
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98  : public RuntimeObject
{
public:
	// System.Boolean System.Globalization.CultureInfo::m_isReadOnly
	bool ___m_isReadOnly_3;
	// System.Int32 System.Globalization.CultureInfo::cultureID
	int32_t ___cultureID_4;
	// System.Int32 System.Globalization.CultureInfo::parent_lcid
	int32_t ___parent_lcid_5;
	// System.Int32 System.Globalization.CultureInfo::datetime_index
	int32_t ___datetime_index_6;
	// System.Int32 System.Globalization.CultureInfo::number_index
	int32_t ___number_index_7;
	// System.Int32 System.Globalization.CultureInfo::default_calendar_type
	int32_t ___default_calendar_type_8;
	// System.Boolean System.Globalization.CultureInfo::m_useUserOverride
	bool ___m_useUserOverride_9;
	// System.Globalization.NumberFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::numInfo
	NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * ___numInfo_10;
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::dateTimeInfo
	DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * ___dateTimeInfo_11;
	// System.Globalization.TextInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::textInfo
	TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C * ___textInfo_12;
	// System.String System.Globalization.CultureInfo::m_name
	String_t* ___m_name_13;
	// System.String System.Globalization.CultureInfo::englishname
	String_t* ___englishname_14;
	// System.String System.Globalization.CultureInfo::nativename
	String_t* ___nativename_15;
	// System.String System.Globalization.CultureInfo::iso3lang
	String_t* ___iso3lang_16;
	// System.String System.Globalization.CultureInfo::iso2lang
	String_t* ___iso2lang_17;
	// System.String System.Globalization.CultureInfo::win3lang
	String_t* ___win3lang_18;
	// System.String System.Globalization.CultureInfo::territory
	String_t* ___territory_19;
	// System.String[] System.Globalization.CultureInfo::native_calendar_names
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___native_calendar_names_20;
	// System.Globalization.CompareInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::compareInfo
	CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * ___compareInfo_21;
	// System.Void* System.Globalization.CultureInfo::textinfo_data
	void* ___textinfo_data_22;
	// System.Int32 System.Globalization.CultureInfo::m_dataItem
	int32_t ___m_dataItem_23;
	// System.Globalization.Calendar System.Globalization.CultureInfo::calendar
	Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * ___calendar_24;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::parent_culture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___parent_culture_25;
	// System.Boolean System.Globalization.CultureInfo::constructed
	bool ___constructed_26;
	// System.Byte[] System.Globalization.CultureInfo::cached_serialized_form
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___cached_serialized_form_27;
	// System.Globalization.CultureData System.Globalization.CultureInfo::m_cultureData
	CultureData_t53CDF1C5F789A28897415891667799420D3C5529 * ___m_cultureData_28;
	// System.Boolean System.Globalization.CultureInfo::m_isInherited
	bool ___m_isInherited_29;

public:
	inline static int32_t get_offset_of_m_isReadOnly_3() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_isReadOnly_3)); }
	inline bool get_m_isReadOnly_3() const { return ___m_isReadOnly_3; }
	inline bool* get_address_of_m_isReadOnly_3() { return &___m_isReadOnly_3; }
	inline void set_m_isReadOnly_3(bool value)
	{
		___m_isReadOnly_3 = value;
	}

	inline static int32_t get_offset_of_cultureID_4() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___cultureID_4)); }
	inline int32_t get_cultureID_4() const { return ___cultureID_4; }
	inline int32_t* get_address_of_cultureID_4() { return &___cultureID_4; }
	inline void set_cultureID_4(int32_t value)
	{
		___cultureID_4 = value;
	}

	inline static int32_t get_offset_of_parent_lcid_5() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___parent_lcid_5)); }
	inline int32_t get_parent_lcid_5() const { return ___parent_lcid_5; }
	inline int32_t* get_address_of_parent_lcid_5() { return &___parent_lcid_5; }
	inline void set_parent_lcid_5(int32_t value)
	{
		___parent_lcid_5 = value;
	}

	inline static int32_t get_offset_of_datetime_index_6() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___datetime_index_6)); }
	inline int32_t get_datetime_index_6() const { return ___datetime_index_6; }
	inline int32_t* get_address_of_datetime_index_6() { return &___datetime_index_6; }
	inline void set_datetime_index_6(int32_t value)
	{
		___datetime_index_6 = value;
	}

	inline static int32_t get_offset_of_number_index_7() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___number_index_7)); }
	inline int32_t get_number_index_7() const { return ___number_index_7; }
	inline int32_t* get_address_of_number_index_7() { return &___number_index_7; }
	inline void set_number_index_7(int32_t value)
	{
		___number_index_7 = value;
	}

	inline static int32_t get_offset_of_default_calendar_type_8() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___default_calendar_type_8)); }
	inline int32_t get_default_calendar_type_8() const { return ___default_calendar_type_8; }
	inline int32_t* get_address_of_default_calendar_type_8() { return &___default_calendar_type_8; }
	inline void set_default_calendar_type_8(int32_t value)
	{
		___default_calendar_type_8 = value;
	}

	inline static int32_t get_offset_of_m_useUserOverride_9() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_useUserOverride_9)); }
	inline bool get_m_useUserOverride_9() const { return ___m_useUserOverride_9; }
	inline bool* get_address_of_m_useUserOverride_9() { return &___m_useUserOverride_9; }
	inline void set_m_useUserOverride_9(bool value)
	{
		___m_useUserOverride_9 = value;
	}

	inline static int32_t get_offset_of_numInfo_10() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___numInfo_10)); }
	inline NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * get_numInfo_10() const { return ___numInfo_10; }
	inline NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D ** get_address_of_numInfo_10() { return &___numInfo_10; }
	inline void set_numInfo_10(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * value)
	{
		___numInfo_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___numInfo_10), (void*)value);
	}

	inline static int32_t get_offset_of_dateTimeInfo_11() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___dateTimeInfo_11)); }
	inline DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * get_dateTimeInfo_11() const { return ___dateTimeInfo_11; }
	inline DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 ** get_address_of_dateTimeInfo_11() { return &___dateTimeInfo_11; }
	inline void set_dateTimeInfo_11(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * value)
	{
		___dateTimeInfo_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dateTimeInfo_11), (void*)value);
	}

	inline static int32_t get_offset_of_textInfo_12() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___textInfo_12)); }
	inline TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C * get_textInfo_12() const { return ___textInfo_12; }
	inline TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C ** get_address_of_textInfo_12() { return &___textInfo_12; }
	inline void set_textInfo_12(TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C * value)
	{
		___textInfo_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___textInfo_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_name_13() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_name_13)); }
	inline String_t* get_m_name_13() const { return ___m_name_13; }
	inline String_t** get_address_of_m_name_13() { return &___m_name_13; }
	inline void set_m_name_13(String_t* value)
	{
		___m_name_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_name_13), (void*)value);
	}

	inline static int32_t get_offset_of_englishname_14() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___englishname_14)); }
	inline String_t* get_englishname_14() const { return ___englishname_14; }
	inline String_t** get_address_of_englishname_14() { return &___englishname_14; }
	inline void set_englishname_14(String_t* value)
	{
		___englishname_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___englishname_14), (void*)value);
	}

	inline static int32_t get_offset_of_nativename_15() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___nativename_15)); }
	inline String_t* get_nativename_15() const { return ___nativename_15; }
	inline String_t** get_address_of_nativename_15() { return &___nativename_15; }
	inline void set_nativename_15(String_t* value)
	{
		___nativename_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nativename_15), (void*)value);
	}

	inline static int32_t get_offset_of_iso3lang_16() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___iso3lang_16)); }
	inline String_t* get_iso3lang_16() const { return ___iso3lang_16; }
	inline String_t** get_address_of_iso3lang_16() { return &___iso3lang_16; }
	inline void set_iso3lang_16(String_t* value)
	{
		___iso3lang_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___iso3lang_16), (void*)value);
	}

	inline static int32_t get_offset_of_iso2lang_17() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___iso2lang_17)); }
	inline String_t* get_iso2lang_17() const { return ___iso2lang_17; }
	inline String_t** get_address_of_iso2lang_17() { return &___iso2lang_17; }
	inline void set_iso2lang_17(String_t* value)
	{
		___iso2lang_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___iso2lang_17), (void*)value);
	}

	inline static int32_t get_offset_of_win3lang_18() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___win3lang_18)); }
	inline String_t* get_win3lang_18() const { return ___win3lang_18; }
	inline String_t** get_address_of_win3lang_18() { return &___win3lang_18; }
	inline void set_win3lang_18(String_t* value)
	{
		___win3lang_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___win3lang_18), (void*)value);
	}

	inline static int32_t get_offset_of_territory_19() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___territory_19)); }
	inline String_t* get_territory_19() const { return ___territory_19; }
	inline String_t** get_address_of_territory_19() { return &___territory_19; }
	inline void set_territory_19(String_t* value)
	{
		___territory_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___territory_19), (void*)value);
	}

	inline static int32_t get_offset_of_native_calendar_names_20() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___native_calendar_names_20)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_native_calendar_names_20() const { return ___native_calendar_names_20; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_native_calendar_names_20() { return &___native_calendar_names_20; }
	inline void set_native_calendar_names_20(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___native_calendar_names_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_calendar_names_20), (void*)value);
	}

	inline static int32_t get_offset_of_compareInfo_21() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___compareInfo_21)); }
	inline CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * get_compareInfo_21() const { return ___compareInfo_21; }
	inline CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 ** get_address_of_compareInfo_21() { return &___compareInfo_21; }
	inline void set_compareInfo_21(CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * value)
	{
		___compareInfo_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___compareInfo_21), (void*)value);
	}

	inline static int32_t get_offset_of_textinfo_data_22() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___textinfo_data_22)); }
	inline void* get_textinfo_data_22() const { return ___textinfo_data_22; }
	inline void** get_address_of_textinfo_data_22() { return &___textinfo_data_22; }
	inline void set_textinfo_data_22(void* value)
	{
		___textinfo_data_22 = value;
	}

	inline static int32_t get_offset_of_m_dataItem_23() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_dataItem_23)); }
	inline int32_t get_m_dataItem_23() const { return ___m_dataItem_23; }
	inline int32_t* get_address_of_m_dataItem_23() { return &___m_dataItem_23; }
	inline void set_m_dataItem_23(int32_t value)
	{
		___m_dataItem_23 = value;
	}

	inline static int32_t get_offset_of_calendar_24() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___calendar_24)); }
	inline Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * get_calendar_24() const { return ___calendar_24; }
	inline Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A ** get_address_of_calendar_24() { return &___calendar_24; }
	inline void set_calendar_24(Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * value)
	{
		___calendar_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___calendar_24), (void*)value);
	}

	inline static int32_t get_offset_of_parent_culture_25() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___parent_culture_25)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_parent_culture_25() const { return ___parent_culture_25; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_parent_culture_25() { return &___parent_culture_25; }
	inline void set_parent_culture_25(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___parent_culture_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parent_culture_25), (void*)value);
	}

	inline static int32_t get_offset_of_constructed_26() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___constructed_26)); }
	inline bool get_constructed_26() const { return ___constructed_26; }
	inline bool* get_address_of_constructed_26() { return &___constructed_26; }
	inline void set_constructed_26(bool value)
	{
		___constructed_26 = value;
	}

	inline static int32_t get_offset_of_cached_serialized_form_27() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___cached_serialized_form_27)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_cached_serialized_form_27() const { return ___cached_serialized_form_27; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_cached_serialized_form_27() { return &___cached_serialized_form_27; }
	inline void set_cached_serialized_form_27(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___cached_serialized_form_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cached_serialized_form_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_cultureData_28() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_cultureData_28)); }
	inline CultureData_t53CDF1C5F789A28897415891667799420D3C5529 * get_m_cultureData_28() const { return ___m_cultureData_28; }
	inline CultureData_t53CDF1C5F789A28897415891667799420D3C5529 ** get_address_of_m_cultureData_28() { return &___m_cultureData_28; }
	inline void set_m_cultureData_28(CultureData_t53CDF1C5F789A28897415891667799420D3C5529 * value)
	{
		___m_cultureData_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_cultureData_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_isInherited_29() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_isInherited_29)); }
	inline bool get_m_isInherited_29() const { return ___m_isInherited_29; }
	inline bool* get_address_of_m_isInherited_29() { return &___m_isInherited_29; }
	inline void set_m_isInherited_29(bool value)
	{
		___m_isInherited_29 = value;
	}
};

struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields
{
public:
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::invariant_culture_info
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___invariant_culture_info_0;
	// System.Object System.Globalization.CultureInfo::shared_table_lock
	RuntimeObject * ___shared_table_lock_1;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::default_current_culture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___default_current_culture_2;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentUICulture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___s_DefaultThreadCurrentUICulture_33;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentCulture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___s_DefaultThreadCurrentCulture_34;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_number
	Dictionary_2_t5B8303F2C9869A39ED3E03C0FBB09F817E479402 * ___shared_by_number_35;
	// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_name
	Dictionary_2_t0015CBF964B0687CBB5ECFDDE06671A8F3DDE4BC * ___shared_by_name_36;
	// System.Boolean System.Globalization.CultureInfo::IsTaiwanSku
	bool ___IsTaiwanSku_37;

public:
	inline static int32_t get_offset_of_invariant_culture_info_0() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___invariant_culture_info_0)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_invariant_culture_info_0() const { return ___invariant_culture_info_0; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_invariant_culture_info_0() { return &___invariant_culture_info_0; }
	inline void set_invariant_culture_info_0(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___invariant_culture_info_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___invariant_culture_info_0), (void*)value);
	}

	inline static int32_t get_offset_of_shared_table_lock_1() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___shared_table_lock_1)); }
	inline RuntimeObject * get_shared_table_lock_1() const { return ___shared_table_lock_1; }
	inline RuntimeObject ** get_address_of_shared_table_lock_1() { return &___shared_table_lock_1; }
	inline void set_shared_table_lock_1(RuntimeObject * value)
	{
		___shared_table_lock_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shared_table_lock_1), (void*)value);
	}

	inline static int32_t get_offset_of_default_current_culture_2() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___default_current_culture_2)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_default_current_culture_2() const { return ___default_current_culture_2; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_default_current_culture_2() { return &___default_current_culture_2; }
	inline void set_default_current_culture_2(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___default_current_culture_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___default_current_culture_2), (void*)value);
	}

	inline static int32_t get_offset_of_s_DefaultThreadCurrentUICulture_33() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___s_DefaultThreadCurrentUICulture_33)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_s_DefaultThreadCurrentUICulture_33() const { return ___s_DefaultThreadCurrentUICulture_33; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_s_DefaultThreadCurrentUICulture_33() { return &___s_DefaultThreadCurrentUICulture_33; }
	inline void set_s_DefaultThreadCurrentUICulture_33(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___s_DefaultThreadCurrentUICulture_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultThreadCurrentUICulture_33), (void*)value);
	}

	inline static int32_t get_offset_of_s_DefaultThreadCurrentCulture_34() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___s_DefaultThreadCurrentCulture_34)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_s_DefaultThreadCurrentCulture_34() const { return ___s_DefaultThreadCurrentCulture_34; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_s_DefaultThreadCurrentCulture_34() { return &___s_DefaultThreadCurrentCulture_34; }
	inline void set_s_DefaultThreadCurrentCulture_34(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___s_DefaultThreadCurrentCulture_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultThreadCurrentCulture_34), (void*)value);
	}

	inline static int32_t get_offset_of_shared_by_number_35() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___shared_by_number_35)); }
	inline Dictionary_2_t5B8303F2C9869A39ED3E03C0FBB09F817E479402 * get_shared_by_number_35() const { return ___shared_by_number_35; }
	inline Dictionary_2_t5B8303F2C9869A39ED3E03C0FBB09F817E479402 ** get_address_of_shared_by_number_35() { return &___shared_by_number_35; }
	inline void set_shared_by_number_35(Dictionary_2_t5B8303F2C9869A39ED3E03C0FBB09F817E479402 * value)
	{
		___shared_by_number_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shared_by_number_35), (void*)value);
	}

	inline static int32_t get_offset_of_shared_by_name_36() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___shared_by_name_36)); }
	inline Dictionary_2_t0015CBF964B0687CBB5ECFDDE06671A8F3DDE4BC * get_shared_by_name_36() const { return ___shared_by_name_36; }
	inline Dictionary_2_t0015CBF964B0687CBB5ECFDDE06671A8F3DDE4BC ** get_address_of_shared_by_name_36() { return &___shared_by_name_36; }
	inline void set_shared_by_name_36(Dictionary_2_t0015CBF964B0687CBB5ECFDDE06671A8F3DDE4BC * value)
	{
		___shared_by_name_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shared_by_name_36), (void*)value);
	}

	inline static int32_t get_offset_of_IsTaiwanSku_37() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___IsTaiwanSku_37)); }
	inline bool get_IsTaiwanSku_37() const { return ___IsTaiwanSku_37; }
	inline bool* get_address_of_IsTaiwanSku_37() { return &___IsTaiwanSku_37; }
	inline void set_IsTaiwanSku_37(bool value)
	{
		___IsTaiwanSku_37 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Globalization.CultureInfo
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_pinvoke
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * ___numInfo_10;
	DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * ___dateTimeInfo_11;
	TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C * ___textInfo_12;
	char* ___m_name_13;
	char* ___englishname_14;
	char* ___nativename_15;
	char* ___iso3lang_16;
	char* ___iso2lang_17;
	char* ___win3lang_18;
	char* ___territory_19;
	char** ___native_calendar_names_20;
	CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * ___calendar_24;
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_pinvoke* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_t53CDF1C5F789A28897415891667799420D3C5529_marshaled_pinvoke* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};
// Native definition for COM marshalling of System.Globalization.CultureInfo
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_com
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * ___numInfo_10;
	DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * ___dateTimeInfo_11;
	TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C * ___textInfo_12;
	Il2CppChar* ___m_name_13;
	Il2CppChar* ___englishname_14;
	Il2CppChar* ___nativename_15;
	Il2CppChar* ___iso3lang_16;
	Il2CppChar* ___iso2lang_17;
	Il2CppChar* ___win3lang_18;
	Il2CppChar* ___territory_19;
	Il2CppChar** ___native_calendar_names_20;
	CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * ___calendar_24;
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_com* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_t53CDF1C5F789A28897415891667799420D3C5529_marshaled_com* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};

// Newtonsoft.Json.Serialization.ErrorContext
struct ErrorContext_tEC7DD84C80D960CB3C16A138F5DE35DC9A131910  : public RuntimeObject
{
public:
	// System.Boolean Newtonsoft.Json.Serialization.ErrorContext::<Traced>k__BackingField
	bool ___U3CTracedU3Ek__BackingField_0;
	// System.Exception Newtonsoft.Json.Serialization.ErrorContext::<Error>k__BackingField
	Exception_t * ___U3CErrorU3Ek__BackingField_1;
	// System.Object Newtonsoft.Json.Serialization.ErrorContext::<OriginalObject>k__BackingField
	RuntimeObject * ___U3COriginalObjectU3Ek__BackingField_2;
	// System.Object Newtonsoft.Json.Serialization.ErrorContext::<Member>k__BackingField
	RuntimeObject * ___U3CMemberU3Ek__BackingField_3;
	// System.String Newtonsoft.Json.Serialization.ErrorContext::<Path>k__BackingField
	String_t* ___U3CPathU3Ek__BackingField_4;
	// System.Boolean Newtonsoft.Json.Serialization.ErrorContext::<Handled>k__BackingField
	bool ___U3CHandledU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_U3CTracedU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(ErrorContext_tEC7DD84C80D960CB3C16A138F5DE35DC9A131910, ___U3CTracedU3Ek__BackingField_0)); }
	inline bool get_U3CTracedU3Ek__BackingField_0() const { return ___U3CTracedU3Ek__BackingField_0; }
	inline bool* get_address_of_U3CTracedU3Ek__BackingField_0() { return &___U3CTracedU3Ek__BackingField_0; }
	inline void set_U3CTracedU3Ek__BackingField_0(bool value)
	{
		___U3CTracedU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CErrorU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(ErrorContext_tEC7DD84C80D960CB3C16A138F5DE35DC9A131910, ___U3CErrorU3Ek__BackingField_1)); }
	inline Exception_t * get_U3CErrorU3Ek__BackingField_1() const { return ___U3CErrorU3Ek__BackingField_1; }
	inline Exception_t ** get_address_of_U3CErrorU3Ek__BackingField_1() { return &___U3CErrorU3Ek__BackingField_1; }
	inline void set_U3CErrorU3Ek__BackingField_1(Exception_t * value)
	{
		___U3CErrorU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CErrorU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3COriginalObjectU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(ErrorContext_tEC7DD84C80D960CB3C16A138F5DE35DC9A131910, ___U3COriginalObjectU3Ek__BackingField_2)); }
	inline RuntimeObject * get_U3COriginalObjectU3Ek__BackingField_2() const { return ___U3COriginalObjectU3Ek__BackingField_2; }
	inline RuntimeObject ** get_address_of_U3COriginalObjectU3Ek__BackingField_2() { return &___U3COriginalObjectU3Ek__BackingField_2; }
	inline void set_U3COriginalObjectU3Ek__BackingField_2(RuntimeObject * value)
	{
		___U3COriginalObjectU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3COriginalObjectU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CMemberU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ErrorContext_tEC7DD84C80D960CB3C16A138F5DE35DC9A131910, ___U3CMemberU3Ek__BackingField_3)); }
	inline RuntimeObject * get_U3CMemberU3Ek__BackingField_3() const { return ___U3CMemberU3Ek__BackingField_3; }
	inline RuntimeObject ** get_address_of_U3CMemberU3Ek__BackingField_3() { return &___U3CMemberU3Ek__BackingField_3; }
	inline void set_U3CMemberU3Ek__BackingField_3(RuntimeObject * value)
	{
		___U3CMemberU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CMemberU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CPathU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(ErrorContext_tEC7DD84C80D960CB3C16A138F5DE35DC9A131910, ___U3CPathU3Ek__BackingField_4)); }
	inline String_t* get_U3CPathU3Ek__BackingField_4() const { return ___U3CPathU3Ek__BackingField_4; }
	inline String_t** get_address_of_U3CPathU3Ek__BackingField_4() { return &___U3CPathU3Ek__BackingField_4; }
	inline void set_U3CPathU3Ek__BackingField_4(String_t* value)
	{
		___U3CPathU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CPathU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CHandledU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(ErrorContext_tEC7DD84C80D960CB3C16A138F5DE35DC9A131910, ___U3CHandledU3Ek__BackingField_5)); }
	inline bool get_U3CHandledU3Ek__BackingField_5() const { return ___U3CHandledU3Ek__BackingField_5; }
	inline bool* get_address_of_U3CHandledU3Ek__BackingField_5() { return &___U3CHandledU3Ek__BackingField_5; }
	inline void set_U3CHandledU3Ek__BackingField_5(bool value)
	{
		___U3CHandledU3Ek__BackingField_5 = value;
	}
};


// Newtonsoft.Json.Linq.JToken
struct JToken_t29F54EE35244E7B362E5D54E9517FCD2B0DBE359  : public RuntimeObject
{
public:
	// Newtonsoft.Json.Linq.JContainer Newtonsoft.Json.Linq.JToken::_parent
	JContainer_t38DD4DF522660749764609AA408DFD0575BABE3F * ____parent_0;
	// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JToken::_previous
	JToken_t29F54EE35244E7B362E5D54E9517FCD2B0DBE359 * ____previous_1;
	// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JToken::_next
	JToken_t29F54EE35244E7B362E5D54E9517FCD2B0DBE359 * ____next_2;
	// System.Object Newtonsoft.Json.Linq.JToken::_annotations
	RuntimeObject * ____annotations_3;

public:
	inline static int32_t get_offset_of__parent_0() { return static_cast<int32_t>(offsetof(JToken_t29F54EE35244E7B362E5D54E9517FCD2B0DBE359, ____parent_0)); }
	inline JContainer_t38DD4DF522660749764609AA408DFD0575BABE3F * get__parent_0() const { return ____parent_0; }
	inline JContainer_t38DD4DF522660749764609AA408DFD0575BABE3F ** get_address_of__parent_0() { return &____parent_0; }
	inline void set__parent_0(JContainer_t38DD4DF522660749764609AA408DFD0575BABE3F * value)
	{
		____parent_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____parent_0), (void*)value);
	}

	inline static int32_t get_offset_of__previous_1() { return static_cast<int32_t>(offsetof(JToken_t29F54EE35244E7B362E5D54E9517FCD2B0DBE359, ____previous_1)); }
	inline JToken_t29F54EE35244E7B362E5D54E9517FCD2B0DBE359 * get__previous_1() const { return ____previous_1; }
	inline JToken_t29F54EE35244E7B362E5D54E9517FCD2B0DBE359 ** get_address_of__previous_1() { return &____previous_1; }
	inline void set__previous_1(JToken_t29F54EE35244E7B362E5D54E9517FCD2B0DBE359 * value)
	{
		____previous_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____previous_1), (void*)value);
	}

	inline static int32_t get_offset_of__next_2() { return static_cast<int32_t>(offsetof(JToken_t29F54EE35244E7B362E5D54E9517FCD2B0DBE359, ____next_2)); }
	inline JToken_t29F54EE35244E7B362E5D54E9517FCD2B0DBE359 * get__next_2() const { return ____next_2; }
	inline JToken_t29F54EE35244E7B362E5D54E9517FCD2B0DBE359 ** get_address_of__next_2() { return &____next_2; }
	inline void set__next_2(JToken_t29F54EE35244E7B362E5D54E9517FCD2B0DBE359 * value)
	{
		____next_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____next_2), (void*)value);
	}

	inline static int32_t get_offset_of__annotations_3() { return static_cast<int32_t>(offsetof(JToken_t29F54EE35244E7B362E5D54E9517FCD2B0DBE359, ____annotations_3)); }
	inline RuntimeObject * get__annotations_3() const { return ____annotations_3; }
	inline RuntimeObject ** get_address_of__annotations_3() { return &____annotations_3; }
	inline void set__annotations_3(RuntimeObject * value)
	{
		____annotations_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____annotations_3), (void*)value);
	}
};

struct JToken_t29F54EE35244E7B362E5D54E9517FCD2B0DBE359_StaticFields
{
public:
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::BooleanTypes
	JTokenTypeU5BU5D_t0E17AD07EC583E3368353F8D127FE39336FE31C7* ___BooleanTypes_4;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::NumberTypes
	JTokenTypeU5BU5D_t0E17AD07EC583E3368353F8D127FE39336FE31C7* ___NumberTypes_5;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::BigIntegerTypes
	JTokenTypeU5BU5D_t0E17AD07EC583E3368353F8D127FE39336FE31C7* ___BigIntegerTypes_6;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::StringTypes
	JTokenTypeU5BU5D_t0E17AD07EC583E3368353F8D127FE39336FE31C7* ___StringTypes_7;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::GuidTypes
	JTokenTypeU5BU5D_t0E17AD07EC583E3368353F8D127FE39336FE31C7* ___GuidTypes_8;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::TimeSpanTypes
	JTokenTypeU5BU5D_t0E17AD07EC583E3368353F8D127FE39336FE31C7* ___TimeSpanTypes_9;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::UriTypes
	JTokenTypeU5BU5D_t0E17AD07EC583E3368353F8D127FE39336FE31C7* ___UriTypes_10;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::CharTypes
	JTokenTypeU5BU5D_t0E17AD07EC583E3368353F8D127FE39336FE31C7* ___CharTypes_11;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::DateTimeTypes
	JTokenTypeU5BU5D_t0E17AD07EC583E3368353F8D127FE39336FE31C7* ___DateTimeTypes_12;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::BytesTypes
	JTokenTypeU5BU5D_t0E17AD07EC583E3368353F8D127FE39336FE31C7* ___BytesTypes_13;

public:
	inline static int32_t get_offset_of_BooleanTypes_4() { return static_cast<int32_t>(offsetof(JToken_t29F54EE35244E7B362E5D54E9517FCD2B0DBE359_StaticFields, ___BooleanTypes_4)); }
	inline JTokenTypeU5BU5D_t0E17AD07EC583E3368353F8D127FE39336FE31C7* get_BooleanTypes_4() const { return ___BooleanTypes_4; }
	inline JTokenTypeU5BU5D_t0E17AD07EC583E3368353F8D127FE39336FE31C7** get_address_of_BooleanTypes_4() { return &___BooleanTypes_4; }
	inline void set_BooleanTypes_4(JTokenTypeU5BU5D_t0E17AD07EC583E3368353F8D127FE39336FE31C7* value)
	{
		___BooleanTypes_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BooleanTypes_4), (void*)value);
	}

	inline static int32_t get_offset_of_NumberTypes_5() { return static_cast<int32_t>(offsetof(JToken_t29F54EE35244E7B362E5D54E9517FCD2B0DBE359_StaticFields, ___NumberTypes_5)); }
	inline JTokenTypeU5BU5D_t0E17AD07EC583E3368353F8D127FE39336FE31C7* get_NumberTypes_5() const { return ___NumberTypes_5; }
	inline JTokenTypeU5BU5D_t0E17AD07EC583E3368353F8D127FE39336FE31C7** get_address_of_NumberTypes_5() { return &___NumberTypes_5; }
	inline void set_NumberTypes_5(JTokenTypeU5BU5D_t0E17AD07EC583E3368353F8D127FE39336FE31C7* value)
	{
		___NumberTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NumberTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_BigIntegerTypes_6() { return static_cast<int32_t>(offsetof(JToken_t29F54EE35244E7B362E5D54E9517FCD2B0DBE359_StaticFields, ___BigIntegerTypes_6)); }
	inline JTokenTypeU5BU5D_t0E17AD07EC583E3368353F8D127FE39336FE31C7* get_BigIntegerTypes_6() const { return ___BigIntegerTypes_6; }
	inline JTokenTypeU5BU5D_t0E17AD07EC583E3368353F8D127FE39336FE31C7** get_address_of_BigIntegerTypes_6() { return &___BigIntegerTypes_6; }
	inline void set_BigIntegerTypes_6(JTokenTypeU5BU5D_t0E17AD07EC583E3368353F8D127FE39336FE31C7* value)
	{
		___BigIntegerTypes_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BigIntegerTypes_6), (void*)value);
	}

	inline static int32_t get_offset_of_StringTypes_7() { return static_cast<int32_t>(offsetof(JToken_t29F54EE35244E7B362E5D54E9517FCD2B0DBE359_StaticFields, ___StringTypes_7)); }
	inline JTokenTypeU5BU5D_t0E17AD07EC583E3368353F8D127FE39336FE31C7* get_StringTypes_7() const { return ___StringTypes_7; }
	inline JTokenTypeU5BU5D_t0E17AD07EC583E3368353F8D127FE39336FE31C7** get_address_of_StringTypes_7() { return &___StringTypes_7; }
	inline void set_StringTypes_7(JTokenTypeU5BU5D_t0E17AD07EC583E3368353F8D127FE39336FE31C7* value)
	{
		___StringTypes_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___StringTypes_7), (void*)value);
	}

	inline static int32_t get_offset_of_GuidTypes_8() { return static_cast<int32_t>(offsetof(JToken_t29F54EE35244E7B362E5D54E9517FCD2B0DBE359_StaticFields, ___GuidTypes_8)); }
	inline JTokenTypeU5BU5D_t0E17AD07EC583E3368353F8D127FE39336FE31C7* get_GuidTypes_8() const { return ___GuidTypes_8; }
	inline JTokenTypeU5BU5D_t0E17AD07EC583E3368353F8D127FE39336FE31C7** get_address_of_GuidTypes_8() { return &___GuidTypes_8; }
	inline void set_GuidTypes_8(JTokenTypeU5BU5D_t0E17AD07EC583E3368353F8D127FE39336FE31C7* value)
	{
		___GuidTypes_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GuidTypes_8), (void*)value);
	}

	inline static int32_t get_offset_of_TimeSpanTypes_9() { return static_cast<int32_t>(offsetof(JToken_t29F54EE35244E7B362E5D54E9517FCD2B0DBE359_StaticFields, ___TimeSpanTypes_9)); }
	inline JTokenTypeU5BU5D_t0E17AD07EC583E3368353F8D127FE39336FE31C7* get_TimeSpanTypes_9() const { return ___TimeSpanTypes_9; }
	inline JTokenTypeU5BU5D_t0E17AD07EC583E3368353F8D127FE39336FE31C7** get_address_of_TimeSpanTypes_9() { return &___TimeSpanTypes_9; }
	inline void set_TimeSpanTypes_9(JTokenTypeU5BU5D_t0E17AD07EC583E3368353F8D127FE39336FE31C7* value)
	{
		___TimeSpanTypes_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TimeSpanTypes_9), (void*)value);
	}

	inline static int32_t get_offset_of_UriTypes_10() { return static_cast<int32_t>(offsetof(JToken_t29F54EE35244E7B362E5D54E9517FCD2B0DBE359_StaticFields, ___UriTypes_10)); }
	inline JTokenTypeU5BU5D_t0E17AD07EC583E3368353F8D127FE39336FE31C7* get_UriTypes_10() const { return ___UriTypes_10; }
	inline JTokenTypeU5BU5D_t0E17AD07EC583E3368353F8D127FE39336FE31C7** get_address_of_UriTypes_10() { return &___UriTypes_10; }
	inline void set_UriTypes_10(JTokenTypeU5BU5D_t0E17AD07EC583E3368353F8D127FE39336FE31C7* value)
	{
		___UriTypes_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriTypes_10), (void*)value);
	}

	inline static int32_t get_offset_of_CharTypes_11() { return static_cast<int32_t>(offsetof(JToken_t29F54EE35244E7B362E5D54E9517FCD2B0DBE359_StaticFields, ___CharTypes_11)); }
	inline JTokenTypeU5BU5D_t0E17AD07EC583E3368353F8D127FE39336FE31C7* get_CharTypes_11() const { return ___CharTypes_11; }
	inline JTokenTypeU5BU5D_t0E17AD07EC583E3368353F8D127FE39336FE31C7** get_address_of_CharTypes_11() { return &___CharTypes_11; }
	inline void set_CharTypes_11(JTokenTypeU5BU5D_t0E17AD07EC583E3368353F8D127FE39336FE31C7* value)
	{
		___CharTypes_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CharTypes_11), (void*)value);
	}

	inline static int32_t get_offset_of_DateTimeTypes_12() { return static_cast<int32_t>(offsetof(JToken_t29F54EE35244E7B362E5D54E9517FCD2B0DBE359_StaticFields, ___DateTimeTypes_12)); }
	inline JTokenTypeU5BU5D_t0E17AD07EC583E3368353F8D127FE39336FE31C7* get_DateTimeTypes_12() const { return ___DateTimeTypes_12; }
	inline JTokenTypeU5BU5D_t0E17AD07EC583E3368353F8D127FE39336FE31C7** get_address_of_DateTimeTypes_12() { return &___DateTimeTypes_12; }
	inline void set_DateTimeTypes_12(JTokenTypeU5BU5D_t0E17AD07EC583E3368353F8D127FE39336FE31C7* value)
	{
		___DateTimeTypes_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DateTimeTypes_12), (void*)value);
	}

	inline static int32_t get_offset_of_BytesTypes_13() { return static_cast<int32_t>(offsetof(JToken_t29F54EE35244E7B362E5D54E9517FCD2B0DBE359_StaticFields, ___BytesTypes_13)); }
	inline JTokenTypeU5BU5D_t0E17AD07EC583E3368353F8D127FE39336FE31C7* get_BytesTypes_13() const { return ___BytesTypes_13; }
	inline JTokenTypeU5BU5D_t0E17AD07EC583E3368353F8D127FE39336FE31C7** get_address_of_BytesTypes_13() { return &___BytesTypes_13; }
	inline void set_BytesTypes_13(JTokenTypeU5BU5D_t0E17AD07EC583E3368353F8D127FE39336FE31C7* value)
	{
		___BytesTypes_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BytesTypes_13), (void*)value);
	}
};


// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// Newtonsoft.Json.Linq.JsonPath.PathFilter
struct PathFilter_t26C6A1D29F5E0B63B1CA0DDB5217C9301E05157F  : public RuntimeObject
{
public:

public:
};


// Newtonsoft.Json.Utilities.ReflectionDelegateFactory
struct ReflectionDelegateFactory_t7567424477B11CC830C07A6F07A352C2F2028E68  : public RuntimeObject
{
public:

public:
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

// Newtonsoft.Json.Utilities.ImmutableCollectionsUtils/<>c
struct U3CU3Ec_tC7BF6D75D37E7B375E3ABA82A78DE1344084B231  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tC7BF6D75D37E7B375E3ABA82A78DE1344084B231_StaticFields
{
public:
	// Newtonsoft.Json.Utilities.ImmutableCollectionsUtils/<>c Newtonsoft.Json.Utilities.ImmutableCollectionsUtils/<>c::<>9
	U3CU3Ec_tC7BF6D75D37E7B375E3ABA82A78DE1344084B231 * ___U3CU3E9_0;
	// System.Func`2<System.Reflection.MethodInfo,System.Boolean> Newtonsoft.Json.Utilities.ImmutableCollectionsUtils/<>c::<>9__24_1
	Func_2_t736D5CB9E1D48C8363AF140355202C24D6CAE85D * ___U3CU3E9__24_1_1;
	// System.Func`2<System.Reflection.MethodInfo,System.Boolean> Newtonsoft.Json.Utilities.ImmutableCollectionsUtils/<>c::<>9__25_1
	Func_2_t736D5CB9E1D48C8363AF140355202C24D6CAE85D * ___U3CU3E9__25_1_2;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tC7BF6D75D37E7B375E3ABA82A78DE1344084B231_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tC7BF6D75D37E7B375E3ABA82A78DE1344084B231 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tC7BF6D75D37E7B375E3ABA82A78DE1344084B231 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tC7BF6D75D37E7B375E3ABA82A78DE1344084B231 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__24_1_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_tC7BF6D75D37E7B375E3ABA82A78DE1344084B231_StaticFields, ___U3CU3E9__24_1_1)); }
	inline Func_2_t736D5CB9E1D48C8363AF140355202C24D6CAE85D * get_U3CU3E9__24_1_1() const { return ___U3CU3E9__24_1_1; }
	inline Func_2_t736D5CB9E1D48C8363AF140355202C24D6CAE85D ** get_address_of_U3CU3E9__24_1_1() { return &___U3CU3E9__24_1_1; }
	inline void set_U3CU3E9__24_1_1(Func_2_t736D5CB9E1D48C8363AF140355202C24D6CAE85D * value)
	{
		___U3CU3E9__24_1_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__24_1_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__25_1_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_tC7BF6D75D37E7B375E3ABA82A78DE1344084B231_StaticFields, ___U3CU3E9__25_1_2)); }
	inline Func_2_t736D5CB9E1D48C8363AF140355202C24D6CAE85D * get_U3CU3E9__25_1_2() const { return ___U3CU3E9__25_1_2; }
	inline Func_2_t736D5CB9E1D48C8363AF140355202C24D6CAE85D ** get_address_of_U3CU3E9__25_1_2() { return &___U3CU3E9__25_1_2; }
	inline void set_U3CU3E9__25_1_2(Func_2_t736D5CB9E1D48C8363AF140355202C24D6CAE85D * value)
	{
		___U3CU3E9__25_1_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__25_1_2), (void*)value);
	}
};


// Newtonsoft.Json.Utilities.ImmutableCollectionsUtils/<>c__DisplayClass24_0
struct U3CU3Ec__DisplayClass24_0_tC2CEDA75B8FFC26A954AFE3DDEC606C92CCB9AC1  : public RuntimeObject
{
public:
	// System.String Newtonsoft.Json.Utilities.ImmutableCollectionsUtils/<>c__DisplayClass24_0::name
	String_t* ___name_0;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass24_0_tC2CEDA75B8FFC26A954AFE3DDEC606C92CCB9AC1, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_0), (void*)value);
	}
};


// Newtonsoft.Json.Utilities.ImmutableCollectionsUtils/<>c__DisplayClass25_0
struct U3CU3Ec__DisplayClass25_0_t06458F72EF35C25F3450D4C9073A0AECEF03E502  : public RuntimeObject
{
public:
	// System.String Newtonsoft.Json.Utilities.ImmutableCollectionsUtils/<>c__DisplayClass25_0::name
	String_t* ___name_0;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass25_0_t06458F72EF35C25F3450D4C9073A0AECEF03E502, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_0), (void*)value);
	}
};


// Newtonsoft.Json.Utilities.ImmutableCollectionsUtils/ImmutableCollectionTypeInfo
struct ImmutableCollectionTypeInfo_t89E5B5C21753029E7770B0AB5EE30D754F18F2B4  : public RuntimeObject
{
public:
	// System.String Newtonsoft.Json.Utilities.ImmutableCollectionsUtils/ImmutableCollectionTypeInfo::<ContractTypeName>k__BackingField
	String_t* ___U3CContractTypeNameU3Ek__BackingField_0;
	// System.String Newtonsoft.Json.Utilities.ImmutableCollectionsUtils/ImmutableCollectionTypeInfo::<CreatedTypeName>k__BackingField
	String_t* ___U3CCreatedTypeNameU3Ek__BackingField_1;
	// System.String Newtonsoft.Json.Utilities.ImmutableCollectionsUtils/ImmutableCollectionTypeInfo::<BuilderTypeName>k__BackingField
	String_t* ___U3CBuilderTypeNameU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CContractTypeNameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(ImmutableCollectionTypeInfo_t89E5B5C21753029E7770B0AB5EE30D754F18F2B4, ___U3CContractTypeNameU3Ek__BackingField_0)); }
	inline String_t* get_U3CContractTypeNameU3Ek__BackingField_0() const { return ___U3CContractTypeNameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CContractTypeNameU3Ek__BackingField_0() { return &___U3CContractTypeNameU3Ek__BackingField_0; }
	inline void set_U3CContractTypeNameU3Ek__BackingField_0(String_t* value)
	{
		___U3CContractTypeNameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CContractTypeNameU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CCreatedTypeNameU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(ImmutableCollectionTypeInfo_t89E5B5C21753029E7770B0AB5EE30D754F18F2B4, ___U3CCreatedTypeNameU3Ek__BackingField_1)); }
	inline String_t* get_U3CCreatedTypeNameU3Ek__BackingField_1() const { return ___U3CCreatedTypeNameU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CCreatedTypeNameU3Ek__BackingField_1() { return &___U3CCreatedTypeNameU3Ek__BackingField_1; }
	inline void set_U3CCreatedTypeNameU3Ek__BackingField_1(String_t* value)
	{
		___U3CCreatedTypeNameU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CCreatedTypeNameU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CBuilderTypeNameU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(ImmutableCollectionTypeInfo_t89E5B5C21753029E7770B0AB5EE30D754F18F2B4, ___U3CBuilderTypeNameU3Ek__BackingField_2)); }
	inline String_t* get_U3CBuilderTypeNameU3Ek__BackingField_2() const { return ___U3CBuilderTypeNameU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CBuilderTypeNameU3Ek__BackingField_2() { return &___U3CBuilderTypeNameU3Ek__BackingField_2; }
	inline void set_U3CBuilderTypeNameU3Ek__BackingField_2(String_t* value)
	{
		___U3CBuilderTypeNameU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CBuilderTypeNameU3Ek__BackingField_2), (void*)value);
	}
};


// Newtonsoft.Json.Linq.JContainer/<GetDescendants>d__36
struct U3CGetDescendantsU3Ed__36_t2DF4F7529B67D1F4152A061154DFC629029DB527  : public RuntimeObject
{
public:
	// System.Int32 Newtonsoft.Json.Linq.JContainer/<GetDescendants>d__36::<>1__state
	int32_t ___U3CU3E1__state_0;
	// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JContainer/<GetDescendants>d__36::<>2__current
	JToken_t29F54EE35244E7B362E5D54E9517FCD2B0DBE359 * ___U3CU3E2__current_1;
	// System.Int32 Newtonsoft.Json.Linq.JContainer/<GetDescendants>d__36::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// System.Boolean Newtonsoft.Json.Linq.JContainer/<GetDescendants>d__36::self
	bool ___self_3;
	// System.Boolean Newtonsoft.Json.Linq.JContainer/<GetDescendants>d__36::<>3__self
	bool ___U3CU3E3__self_4;
	// Newtonsoft.Json.Linq.JContainer Newtonsoft.Json.Linq.JContainer/<GetDescendants>d__36::<>4__this
	JContainer_t38DD4DF522660749764609AA408DFD0575BABE3F * ___U3CU3E4__this_5;
	// System.Collections.Generic.IEnumerator`1<Newtonsoft.Json.Linq.JToken> Newtonsoft.Json.Linq.JContainer/<GetDescendants>d__36::<>7__wrap1
	RuntimeObject* ___U3CU3E7__wrap1_6;
	// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JContainer/<GetDescendants>d__36::<o>5__3
	JToken_t29F54EE35244E7B362E5D54E9517FCD2B0DBE359 * ___U3CoU3E5__3_7;
	// System.Collections.Generic.IEnumerator`1<Newtonsoft.Json.Linq.JToken> Newtonsoft.Json.Linq.JContainer/<GetDescendants>d__36::<>7__wrap3
	RuntimeObject* ___U3CU3E7__wrap3_8;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CGetDescendantsU3Ed__36_t2DF4F7529B67D1F4152A061154DFC629029DB527, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CGetDescendantsU3Ed__36_t2DF4F7529B67D1F4152A061154DFC629029DB527, ___U3CU3E2__current_1)); }
	inline JToken_t29F54EE35244E7B362E5D54E9517FCD2B0DBE359 * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline JToken_t29F54EE35244E7B362E5D54E9517FCD2B0DBE359 ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(JToken_t29F54EE35244E7B362E5D54E9517FCD2B0DBE359 * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3El__initialThreadId_2() { return static_cast<int32_t>(offsetof(U3CGetDescendantsU3Ed__36_t2DF4F7529B67D1F4152A061154DFC629029DB527, ___U3CU3El__initialThreadId_2)); }
	inline int32_t get_U3CU3El__initialThreadId_2() const { return ___U3CU3El__initialThreadId_2; }
	inline int32_t* get_address_of_U3CU3El__initialThreadId_2() { return &___U3CU3El__initialThreadId_2; }
	inline void set_U3CU3El__initialThreadId_2(int32_t value)
	{
		___U3CU3El__initialThreadId_2 = value;
	}

	inline static int32_t get_offset_of_self_3() { return static_cast<int32_t>(offsetof(U3CGetDescendantsU3Ed__36_t2DF4F7529B67D1F4152A061154DFC629029DB527, ___self_3)); }
	inline bool get_self_3() const { return ___self_3; }
	inline bool* get_address_of_self_3() { return &___self_3; }
	inline void set_self_3(bool value)
	{
		___self_3 = value;
	}

	inline static int32_t get_offset_of_U3CU3E3__self_4() { return static_cast<int32_t>(offsetof(U3CGetDescendantsU3Ed__36_t2DF4F7529B67D1F4152A061154DFC629029DB527, ___U3CU3E3__self_4)); }
	inline bool get_U3CU3E3__self_4() const { return ___U3CU3E3__self_4; }
	inline bool* get_address_of_U3CU3E3__self_4() { return &___U3CU3E3__self_4; }
	inline void set_U3CU3E3__self_4(bool value)
	{
		___U3CU3E3__self_4 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_5() { return static_cast<int32_t>(offsetof(U3CGetDescendantsU3Ed__36_t2DF4F7529B67D1F4152A061154DFC629029DB527, ___U3CU3E4__this_5)); }
	inline JContainer_t38DD4DF522660749764609AA408DFD0575BABE3F * get_U3CU3E4__this_5() const { return ___U3CU3E4__this_5; }
	inline JContainer_t38DD4DF522660749764609AA408DFD0575BABE3F ** get_address_of_U3CU3E4__this_5() { return &___U3CU3E4__this_5; }
	inline void set_U3CU3E4__this_5(JContainer_t38DD4DF522660749764609AA408DFD0575BABE3F * value)
	{
		___U3CU3E4__this_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap1_6() { return static_cast<int32_t>(offsetof(U3CGetDescendantsU3Ed__36_t2DF4F7529B67D1F4152A061154DFC629029DB527, ___U3CU3E7__wrap1_6)); }
	inline RuntimeObject* get_U3CU3E7__wrap1_6() const { return ___U3CU3E7__wrap1_6; }
	inline RuntimeObject** get_address_of_U3CU3E7__wrap1_6() { return &___U3CU3E7__wrap1_6; }
	inline void set_U3CU3E7__wrap1_6(RuntimeObject* value)
	{
		___U3CU3E7__wrap1_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E7__wrap1_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CoU3E5__3_7() { return static_cast<int32_t>(offsetof(U3CGetDescendantsU3Ed__36_t2DF4F7529B67D1F4152A061154DFC629029DB527, ___U3CoU3E5__3_7)); }
	inline JToken_t29F54EE35244E7B362E5D54E9517FCD2B0DBE359 * get_U3CoU3E5__3_7() const { return ___U3CoU3E5__3_7; }
	inline JToken_t29F54EE35244E7B362E5D54E9517FCD2B0DBE359 ** get_address_of_U3CoU3E5__3_7() { return &___U3CoU3E5__3_7; }
	inline void set_U3CoU3E5__3_7(JToken_t29F54EE35244E7B362E5D54E9517FCD2B0DBE359 * value)
	{
		___U3CoU3E5__3_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CoU3E5__3_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap3_8() { return static_cast<int32_t>(offsetof(U3CGetDescendantsU3Ed__36_t2DF4F7529B67D1F4152A061154DFC629029DB527, ___U3CU3E7__wrap3_8)); }
	inline RuntimeObject* get_U3CU3E7__wrap3_8() const { return ___U3CU3E7__wrap3_8; }
	inline RuntimeObject** get_address_of_U3CU3E7__wrap3_8() { return &___U3CU3E7__wrap3_8; }
	inline void set_U3CU3E7__wrap3_8(RuntimeObject* value)
	{
		___U3CU3E7__wrap3_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E7__wrap3_8), (void*)value);
	}
};


// Newtonsoft.Json.Linq.JProperty/JPropertyList
struct JPropertyList_tE978701AA0E5EA3DE317E8ABF5EC0C7CE5E713DB  : public RuntimeObject
{
public:
	// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JProperty/JPropertyList::_token
	JToken_t29F54EE35244E7B362E5D54E9517FCD2B0DBE359 * ____token_0;

public:
	inline static int32_t get_offset_of__token_0() { return static_cast<int32_t>(offsetof(JPropertyList_tE978701AA0E5EA3DE317E8ABF5EC0C7CE5E713DB, ____token_0)); }
	inline JToken_t29F54EE35244E7B362E5D54E9517FCD2B0DBE359 * get__token_0() const { return ____token_0; }
	inline JToken_t29F54EE35244E7B362E5D54E9517FCD2B0DBE359 ** get_address_of__token_0() { return &____token_0; }
	inline void set__token_0(JToken_t29F54EE35244E7B362E5D54E9517FCD2B0DBE359 * value)
	{
		____token_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____token_0), (void*)value);
	}
};


// Newtonsoft.Json.Linq.JToken/LineInfoAnnotation
struct LineInfoAnnotation_t87A131EB9B5EAEF1ACFE0A886EF4061C285B7E29  : public RuntimeObject
{
public:
	// System.Int32 Newtonsoft.Json.Linq.JToken/LineInfoAnnotation::LineNumber
	int32_t ___LineNumber_0;
	// System.Int32 Newtonsoft.Json.Linq.JToken/LineInfoAnnotation::LinePosition
	int32_t ___LinePosition_1;

public:
	inline static int32_t get_offset_of_LineNumber_0() { return static_cast<int32_t>(offsetof(LineInfoAnnotation_t87A131EB9B5EAEF1ACFE0A886EF4061C285B7E29, ___LineNumber_0)); }
	inline int32_t get_LineNumber_0() const { return ___LineNumber_0; }
	inline int32_t* get_address_of_LineNumber_0() { return &___LineNumber_0; }
	inline void set_LineNumber_0(int32_t value)
	{
		___LineNumber_0 = value;
	}

	inline static int32_t get_offset_of_LinePosition_1() { return static_cast<int32_t>(offsetof(LineInfoAnnotation_t87A131EB9B5EAEF1ACFE0A886EF4061C285B7E29, ___LinePosition_1)); }
	inline int32_t get_LinePosition_1() const { return ___LinePosition_1; }
	inline int32_t* get_address_of_LinePosition_1() { return &___LinePosition_1; }
	inline void set_LinePosition_1(int32_t value)
	{
		___LinePosition_1 = value;
	}
};


// Newtonsoft.Json.Serialization.JsonContract/<>c__DisplayClass57_0
struct U3CU3Ec__DisplayClass57_0_t64942CC2AF348FF5EE4757CBE42C3E00369C0FD3  : public RuntimeObject
{
public:
	// System.Reflection.MethodInfo Newtonsoft.Json.Serialization.JsonContract/<>c__DisplayClass57_0::callbackMethodInfo
	MethodInfo_t * ___callbackMethodInfo_0;

public:
	inline static int32_t get_offset_of_callbackMethodInfo_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass57_0_t64942CC2AF348FF5EE4757CBE42C3E00369C0FD3, ___callbackMethodInfo_0)); }
	inline MethodInfo_t * get_callbackMethodInfo_0() const { return ___callbackMethodInfo_0; }
	inline MethodInfo_t ** get_address_of_callbackMethodInfo_0() { return &___callbackMethodInfo_0; }
	inline void set_callbackMethodInfo_0(MethodInfo_t * value)
	{
		___callbackMethodInfo_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callbackMethodInfo_0), (void*)value);
	}
};


// Newtonsoft.Json.Serialization.JsonContract/<>c__DisplayClass58_0
struct U3CU3Ec__DisplayClass58_0_t4BECBCC567D9F07194FFFD54D7E4BCFA61B56490  : public RuntimeObject
{
public:
	// System.Reflection.MethodInfo Newtonsoft.Json.Serialization.JsonContract/<>c__DisplayClass58_0::callbackMethodInfo
	MethodInfo_t * ___callbackMethodInfo_0;

public:
	inline static int32_t get_offset_of_callbackMethodInfo_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass58_0_t4BECBCC567D9F07194FFFD54D7E4BCFA61B56490, ___callbackMethodInfo_0)); }
	inline MethodInfo_t * get_callbackMethodInfo_0() const { return ___callbackMethodInfo_0; }
	inline MethodInfo_t ** get_address_of_callbackMethodInfo_0() { return &___callbackMethodInfo_0; }
	inline void set_callbackMethodInfo_0(MethodInfo_t * value)
	{
		___callbackMethodInfo_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callbackMethodInfo_0), (void*)value);
	}
};


// Newtonsoft.Json.Serialization.JsonSerializerInternalBase/ReferenceEqualsEqualityComparer
struct ReferenceEqualsEqualityComparer_t9A09775A8F850D58037215D62244D38CA209D014  : public RuntimeObject
{
public:

public:
};


// Newtonsoft.Json.Serialization.JsonSerializerInternalReader/<>c
struct U3CU3Ec_t914CA97977CFC2D085D6D2EFD193E4C593C02E29  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t914CA97977CFC2D085D6D2EFD193E4C593C02E29_StaticFields
{
public:
	// Newtonsoft.Json.Serialization.JsonSerializerInternalReader/<>c Newtonsoft.Json.Serialization.JsonSerializerInternalReader/<>c::<>9
	U3CU3Ec_t914CA97977CFC2D085D6D2EFD193E4C593C02E29 * ___U3CU3E9_0;
	// System.Func`2<Newtonsoft.Json.Serialization.JsonProperty,System.String> Newtonsoft.Json.Serialization.JsonSerializerInternalReader/<>c::<>9__38_0
	Func_2_t96ACB13358EDC88778D0F3036E69D01C10A9AC77 * ___U3CU3E9__38_0_1;
	// System.Func`2<Newtonsoft.Json.Serialization.JsonProperty,System.String> Newtonsoft.Json.Serialization.JsonSerializerInternalReader/<>c::<>9__38_2
	Func_2_t96ACB13358EDC88778D0F3036E69D01C10A9AC77 * ___U3CU3E9__38_2_2;
	// System.Func`2<Newtonsoft.Json.Serialization.JsonProperty,Newtonsoft.Json.Serialization.JsonProperty> Newtonsoft.Json.Serialization.JsonSerializerInternalReader/<>c::<>9__42_0
	Func_2_t98F3186DEEBA9529F2FE0701CB3CEE9096478428 * ___U3CU3E9__42_0_3;
	// System.Func`2<Newtonsoft.Json.Serialization.JsonProperty,Newtonsoft.Json.Serialization.JsonSerializerInternalReader/PropertyPresence> Newtonsoft.Json.Serialization.JsonSerializerInternalReader/<>c::<>9__42_1
	Func_2_tDEB3C84C1013476E6E9803CFF1C1DFD71C5F5468 * ___U3CU3E9__42_1_4;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t914CA97977CFC2D085D6D2EFD193E4C593C02E29_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t914CA97977CFC2D085D6D2EFD193E4C593C02E29 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t914CA97977CFC2D085D6D2EFD193E4C593C02E29 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t914CA97977CFC2D085D6D2EFD193E4C593C02E29 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__38_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t914CA97977CFC2D085D6D2EFD193E4C593C02E29_StaticFields, ___U3CU3E9__38_0_1)); }
	inline Func_2_t96ACB13358EDC88778D0F3036E69D01C10A9AC77 * get_U3CU3E9__38_0_1() const { return ___U3CU3E9__38_0_1; }
	inline Func_2_t96ACB13358EDC88778D0F3036E69D01C10A9AC77 ** get_address_of_U3CU3E9__38_0_1() { return &___U3CU3E9__38_0_1; }
	inline void set_U3CU3E9__38_0_1(Func_2_t96ACB13358EDC88778D0F3036E69D01C10A9AC77 * value)
	{
		___U3CU3E9__38_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__38_0_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__38_2_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_t914CA97977CFC2D085D6D2EFD193E4C593C02E29_StaticFields, ___U3CU3E9__38_2_2)); }
	inline Func_2_t96ACB13358EDC88778D0F3036E69D01C10A9AC77 * get_U3CU3E9__38_2_2() const { return ___U3CU3E9__38_2_2; }
	inline Func_2_t96ACB13358EDC88778D0F3036E69D01C10A9AC77 ** get_address_of_U3CU3E9__38_2_2() { return &___U3CU3E9__38_2_2; }
	inline void set_U3CU3E9__38_2_2(Func_2_t96ACB13358EDC88778D0F3036E69D01C10A9AC77 * value)
	{
		___U3CU3E9__38_2_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__38_2_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__42_0_3() { return static_cast<int32_t>(offsetof(U3CU3Ec_t914CA97977CFC2D085D6D2EFD193E4C593C02E29_StaticFields, ___U3CU3E9__42_0_3)); }
	inline Func_2_t98F3186DEEBA9529F2FE0701CB3CEE9096478428 * get_U3CU3E9__42_0_3() const { return ___U3CU3E9__42_0_3; }
	inline Func_2_t98F3186DEEBA9529F2FE0701CB3CEE9096478428 ** get_address_of_U3CU3E9__42_0_3() { return &___U3CU3E9__42_0_3; }
	inline void set_U3CU3E9__42_0_3(Func_2_t98F3186DEEBA9529F2FE0701CB3CEE9096478428 * value)
	{
		___U3CU3E9__42_0_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__42_0_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__42_1_4() { return static_cast<int32_t>(offsetof(U3CU3Ec_t914CA97977CFC2D085D6D2EFD193E4C593C02E29_StaticFields, ___U3CU3E9__42_1_4)); }
	inline Func_2_tDEB3C84C1013476E6E9803CFF1C1DFD71C5F5468 * get_U3CU3E9__42_1_4() const { return ___U3CU3E9__42_1_4; }
	inline Func_2_tDEB3C84C1013476E6E9803CFF1C1DFD71C5F5468 ** get_address_of_U3CU3E9__42_1_4() { return &___U3CU3E9__42_1_4; }
	inline void set_U3CU3E9__42_1_4(Func_2_tDEB3C84C1013476E6E9803CFF1C1DFD71C5F5468 * value)
	{
		___U3CU3E9__42_1_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__42_1_4), (void*)value);
	}
};


// Newtonsoft.Json.Serialization.JsonSerializerInternalReader/<>c__DisplayClass38_0
struct U3CU3Ec__DisplayClass38_0_tC13F3834EB887BC11F6C1694C391869A1E436A85  : public RuntimeObject
{
public:
	// Newtonsoft.Json.Serialization.JsonProperty Newtonsoft.Json.Serialization.JsonSerializerInternalReader/<>c__DisplayClass38_0::property
	JsonProperty_tEC316772CD2F8406C84CDA3EEAD7430ED09055DB * ___property_0;

public:
	inline static int32_t get_offset_of_property_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass38_0_tC13F3834EB887BC11F6C1694C391869A1E436A85, ___property_0)); }
	inline JsonProperty_tEC316772CD2F8406C84CDA3EEAD7430ED09055DB * get_property_0() const { return ___property_0; }
	inline JsonProperty_tEC316772CD2F8406C84CDA3EEAD7430ED09055DB ** get_address_of_property_0() { return &___property_0; }
	inline void set_property_0(JsonProperty_tEC316772CD2F8406C84CDA3EEAD7430ED09055DB * value)
	{
		___property_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___property_0), (void*)value);
	}
};


// Newtonsoft.Json.Serialization.JsonTypeReflector/<>c
struct U3CU3Ec_tE90ECA1894178BF3B7F18DCB97DBEC083303FAB6  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tE90ECA1894178BF3B7F18DCB97DBEC083303FAB6_StaticFields
{
public:
	// Newtonsoft.Json.Serialization.JsonTypeReflector/<>c Newtonsoft.Json.Serialization.JsonTypeReflector/<>c::<>9
	U3CU3Ec_tE90ECA1894178BF3B7F18DCB97DBEC083303FAB6 * ___U3CU3E9_0;
	// System.Func`2<System.Object,System.Type> Newtonsoft.Json.Serialization.JsonTypeReflector/<>c::<>9__22_1
	Func_2_t1BAD9F1A22B63A9F2F0380E7FB5D5BB7FED704BF * ___U3CU3E9__22_1_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tE90ECA1894178BF3B7F18DCB97DBEC083303FAB6_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tE90ECA1894178BF3B7F18DCB97DBEC083303FAB6 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tE90ECA1894178BF3B7F18DCB97DBEC083303FAB6 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tE90ECA1894178BF3B7F18DCB97DBEC083303FAB6 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__22_1_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_tE90ECA1894178BF3B7F18DCB97DBEC083303FAB6_StaticFields, ___U3CU3E9__22_1_1)); }
	inline Func_2_t1BAD9F1A22B63A9F2F0380E7FB5D5BB7FED704BF * get_U3CU3E9__22_1_1() const { return ___U3CU3E9__22_1_1; }
	inline Func_2_t1BAD9F1A22B63A9F2F0380E7FB5D5BB7FED704BF ** get_address_of_U3CU3E9__22_1_1() { return &___U3CU3E9__22_1_1; }
	inline void set_U3CU3E9__22_1_1(Func_2_t1BAD9F1A22B63A9F2F0380E7FB5D5BB7FED704BF * value)
	{
		___U3CU3E9__22_1_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__22_1_1), (void*)value);
	}
};


// Newtonsoft.Json.Serialization.JsonTypeReflector/<>c__DisplayClass22_0
struct U3CU3Ec__DisplayClass22_0_t79599FC1F9E8D5CF2D8CD48EB9B2685D46203DFE  : public RuntimeObject
{
public:
	// System.Type Newtonsoft.Json.Serialization.JsonTypeReflector/<>c__DisplayClass22_0::type
	Type_t * ___type_0;
	// System.Func`1<System.Object> Newtonsoft.Json.Serialization.JsonTypeReflector/<>c__DisplayClass22_0::defaultConstructor
	Func_1_t807CEE610086E24A0167BAA97A64062016E09D49 * ___defaultConstructor_1;

public:
	inline static int32_t get_offset_of_type_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass22_0_t79599FC1F9E8D5CF2D8CD48EB9B2685D46203DFE, ___type_0)); }
	inline Type_t * get_type_0() const { return ___type_0; }
	inline Type_t ** get_address_of_type_0() { return &___type_0; }
	inline void set_type_0(Type_t * value)
	{
		___type_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___type_0), (void*)value);
	}

	inline static int32_t get_offset_of_defaultConstructor_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass22_0_t79599FC1F9E8D5CF2D8CD48EB9B2685D46203DFE, ___defaultConstructor_1)); }
	inline Func_1_t807CEE610086E24A0167BAA97A64062016E09D49 * get_defaultConstructor_1() const { return ___defaultConstructor_1; }
	inline Func_1_t807CEE610086E24A0167BAA97A64062016E09D49 ** get_address_of_defaultConstructor_1() { return &___defaultConstructor_1; }
	inline void set_defaultConstructor_1(Func_1_t807CEE610086E24A0167BAA97A64062016E09D49 * value)
	{
		___defaultConstructor_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultConstructor_1), (void*)value);
	}
};


// Newtonsoft.Json.Utilities.LateBoundReflectionDelegateFactory/<>c__DisplayClass3_0
struct U3CU3Ec__DisplayClass3_0_t0E3160D956905841ACACA876BD7CCF771F4116AC  : public RuntimeObject
{
public:
	// System.Reflection.ConstructorInfo Newtonsoft.Json.Utilities.LateBoundReflectionDelegateFactory/<>c__DisplayClass3_0::c
	ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B * ___c_0;
	// System.Reflection.MethodBase Newtonsoft.Json.Utilities.LateBoundReflectionDelegateFactory/<>c__DisplayClass3_0::method
	MethodBase_t * ___method_1;

public:
	inline static int32_t get_offset_of_c_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass3_0_t0E3160D956905841ACACA876BD7CCF771F4116AC, ___c_0)); }
	inline ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B * get_c_0() const { return ___c_0; }
	inline ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B ** get_address_of_c_0() { return &___c_0; }
	inline void set_c_0(ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B * value)
	{
		___c_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___c_0), (void*)value);
	}

	inline static int32_t get_offset_of_method_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass3_0_t0E3160D956905841ACACA876BD7CCF771F4116AC, ___method_1)); }
	inline MethodBase_t * get_method_1() const { return ___method_1; }
	inline MethodBase_t ** get_address_of_method_1() { return &___method_1; }
	inline void set_method_1(MethodBase_t * value)
	{
		___method_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_1), (void*)value);
	}
};


// Newtonsoft.Json.Linq.JsonPath.QueryFilter/<ExecuteFilter>d__2
struct U3CExecuteFilterU3Ed__2_t66B87E7CFF03DC68D0E6A97FFEB4183AD5E7A1B4  : public RuntimeObject
{
public:
	// System.Int32 Newtonsoft.Json.Linq.JsonPath.QueryFilter/<ExecuteFilter>d__2::<>1__state
	int32_t ___U3CU3E1__state_0;
	// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JsonPath.QueryFilter/<ExecuteFilter>d__2::<>2__current
	JToken_t29F54EE35244E7B362E5D54E9517FCD2B0DBE359 * ___U3CU3E2__current_1;
	// System.Int32 Newtonsoft.Json.Linq.JsonPath.QueryFilter/<ExecuteFilter>d__2::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// System.Collections.Generic.IEnumerable`1<Newtonsoft.Json.Linq.JToken> Newtonsoft.Json.Linq.JsonPath.QueryFilter/<ExecuteFilter>d__2::current
	RuntimeObject* ___current_3;
	// System.Collections.Generic.IEnumerable`1<Newtonsoft.Json.Linq.JToken> Newtonsoft.Json.Linq.JsonPath.QueryFilter/<ExecuteFilter>d__2::<>3__current
	RuntimeObject* ___U3CU3E3__current_4;
	// Newtonsoft.Json.Linq.JsonPath.QueryFilter Newtonsoft.Json.Linq.JsonPath.QueryFilter/<ExecuteFilter>d__2::<>4__this
	QueryFilter_t953A25C7D920832364FB38BFFB972F6811BA4F28 * ___U3CU3E4__this_5;
	// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JsonPath.QueryFilter/<ExecuteFilter>d__2::root
	JToken_t29F54EE35244E7B362E5D54E9517FCD2B0DBE359 * ___root_6;
	// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JsonPath.QueryFilter/<ExecuteFilter>d__2::<>3__root
	JToken_t29F54EE35244E7B362E5D54E9517FCD2B0DBE359 * ___U3CU3E3__root_7;
	// Newtonsoft.Json.Linq.JsonSelectSettings Newtonsoft.Json.Linq.JsonPath.QueryFilter/<ExecuteFilter>d__2::settings
	JsonSelectSettings_t473B56CACFC6E1C255C7191CE7FAD72AB78BFCEF * ___settings_8;
	// Newtonsoft.Json.Linq.JsonSelectSettings Newtonsoft.Json.Linq.JsonPath.QueryFilter/<ExecuteFilter>d__2::<>3__settings
	JsonSelectSettings_t473B56CACFC6E1C255C7191CE7FAD72AB78BFCEF * ___U3CU3E3__settings_9;
	// System.Collections.Generic.IEnumerator`1<Newtonsoft.Json.Linq.JToken> Newtonsoft.Json.Linq.JsonPath.QueryFilter/<ExecuteFilter>d__2::<>7__wrap1
	RuntimeObject* ___U3CU3E7__wrap1_10;
	// System.Collections.Generic.IEnumerator`1<Newtonsoft.Json.Linq.JToken> Newtonsoft.Json.Linq.JsonPath.QueryFilter/<ExecuteFilter>d__2::<>7__wrap2
	RuntimeObject* ___U3CU3E7__wrap2_11;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CExecuteFilterU3Ed__2_t66B87E7CFF03DC68D0E6A97FFEB4183AD5E7A1B4, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CExecuteFilterU3Ed__2_t66B87E7CFF03DC68D0E6A97FFEB4183AD5E7A1B4, ___U3CU3E2__current_1)); }
	inline JToken_t29F54EE35244E7B362E5D54E9517FCD2B0DBE359 * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline JToken_t29F54EE35244E7B362E5D54E9517FCD2B0DBE359 ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(JToken_t29F54EE35244E7B362E5D54E9517FCD2B0DBE359 * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3El__initialThreadId_2() { return static_cast<int32_t>(offsetof(U3CExecuteFilterU3Ed__2_t66B87E7CFF03DC68D0E6A97FFEB4183AD5E7A1B4, ___U3CU3El__initialThreadId_2)); }
	inline int32_t get_U3CU3El__initialThreadId_2() const { return ___U3CU3El__initialThreadId_2; }
	inline int32_t* get_address_of_U3CU3El__initialThreadId_2() { return &___U3CU3El__initialThreadId_2; }
	inline void set_U3CU3El__initialThreadId_2(int32_t value)
	{
		___U3CU3El__initialThreadId_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(U3CExecuteFilterU3Ed__2_t66B87E7CFF03DC68D0E6A97FFEB4183AD5E7A1B4, ___current_3)); }
	inline RuntimeObject* get_current_3() const { return ___current_3; }
	inline RuntimeObject** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject* value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E3__current_4() { return static_cast<int32_t>(offsetof(U3CExecuteFilterU3Ed__2_t66B87E7CFF03DC68D0E6A97FFEB4183AD5E7A1B4, ___U3CU3E3__current_4)); }
	inline RuntimeObject* get_U3CU3E3__current_4() const { return ___U3CU3E3__current_4; }
	inline RuntimeObject** get_address_of_U3CU3E3__current_4() { return &___U3CU3E3__current_4; }
	inline void set_U3CU3E3__current_4(RuntimeObject* value)
	{
		___U3CU3E3__current_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E3__current_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_5() { return static_cast<int32_t>(offsetof(U3CExecuteFilterU3Ed__2_t66B87E7CFF03DC68D0E6A97FFEB4183AD5E7A1B4, ___U3CU3E4__this_5)); }
	inline QueryFilter_t953A25C7D920832364FB38BFFB972F6811BA4F28 * get_U3CU3E4__this_5() const { return ___U3CU3E4__this_5; }
	inline QueryFilter_t953A25C7D920832364FB38BFFB972F6811BA4F28 ** get_address_of_U3CU3E4__this_5() { return &___U3CU3E4__this_5; }
	inline void set_U3CU3E4__this_5(QueryFilter_t953A25C7D920832364FB38BFFB972F6811BA4F28 * value)
	{
		___U3CU3E4__this_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_5), (void*)value);
	}

	inline static int32_t get_offset_of_root_6() { return static_cast<int32_t>(offsetof(U3CExecuteFilterU3Ed__2_t66B87E7CFF03DC68D0E6A97FFEB4183AD5E7A1B4, ___root_6)); }
	inline JToken_t29F54EE35244E7B362E5D54E9517FCD2B0DBE359 * get_root_6() const { return ___root_6; }
	inline JToken_t29F54EE35244E7B362E5D54E9517FCD2B0DBE359 ** get_address_of_root_6() { return &___root_6; }
	inline void set_root_6(JToken_t29F54EE35244E7B362E5D54E9517FCD2B0DBE359 * value)
	{
		___root_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___root_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E3__root_7() { return static_cast<int32_t>(offsetof(U3CExecuteFilterU3Ed__2_t66B87E7CFF03DC68D0E6A97FFEB4183AD5E7A1B4, ___U3CU3E3__root_7)); }
	inline JToken_t29F54EE35244E7B362E5D54E9517FCD2B0DBE359 * get_U3CU3E3__root_7() const { return ___U3CU3E3__root_7; }
	inline JToken_t29F54EE35244E7B362E5D54E9517FCD2B0DBE359 ** get_address_of_U3CU3E3__root_7() { return &___U3CU3E3__root_7; }
	inline void set_U3CU3E3__root_7(JToken_t29F54EE35244E7B362E5D54E9517FCD2B0DBE359 * value)
	{
		___U3CU3E3__root_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E3__root_7), (void*)value);
	}

	inline static int32_t get_offset_of_settings_8() { return static_cast<int32_t>(offsetof(U3CExecuteFilterU3Ed__2_t66B87E7CFF03DC68D0E6A97FFEB4183AD5E7A1B4, ___settings_8)); }
	inline JsonSelectSettings_t473B56CACFC6E1C255C7191CE7FAD72AB78BFCEF * get_settings_8() const { return ___settings_8; }
	inline JsonSelectSettings_t473B56CACFC6E1C255C7191CE7FAD72AB78BFCEF ** get_address_of_settings_8() { return &___settings_8; }
	inline void set_settings_8(JsonSelectSettings_t473B56CACFC6E1C255C7191CE7FAD72AB78BFCEF * value)
	{
		___settings_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___settings_8), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E3__settings_9() { return static_cast<int32_t>(offsetof(U3CExecuteFilterU3Ed__2_t66B87E7CFF03DC68D0E6A97FFEB4183AD5E7A1B4, ___U3CU3E3__settings_9)); }
	inline JsonSelectSettings_t473B56CACFC6E1C255C7191CE7FAD72AB78BFCEF * get_U3CU3E3__settings_9() const { return ___U3CU3E3__settings_9; }
	inline JsonSelectSettings_t473B56CACFC6E1C255C7191CE7FAD72AB78BFCEF ** get_address_of_U3CU3E3__settings_9() { return &___U3CU3E3__settings_9; }
	inline void set_U3CU3E3__settings_9(JsonSelectSettings_t473B56CACFC6E1C255C7191CE7FAD72AB78BFCEF * value)
	{
		___U3CU3E3__settings_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E3__settings_9), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap1_10() { return static_cast<int32_t>(offsetof(U3CExecuteFilterU3Ed__2_t66B87E7CFF03DC68D0E6A97FFEB4183AD5E7A1B4, ___U3CU3E7__wrap1_10)); }
	inline RuntimeObject* get_U3CU3E7__wrap1_10() const { return ___U3CU3E7__wrap1_10; }
	inline RuntimeObject** get_address_of_U3CU3E7__wrap1_10() { return &___U3CU3E7__wrap1_10; }
	inline void set_U3CU3E7__wrap1_10(RuntimeObject* value)
	{
		___U3CU3E7__wrap1_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E7__wrap1_10), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap2_11() { return static_cast<int32_t>(offsetof(U3CExecuteFilterU3Ed__2_t66B87E7CFF03DC68D0E6A97FFEB4183AD5E7A1B4, ___U3CU3E7__wrap2_11)); }
	inline RuntimeObject* get_U3CU3E7__wrap2_11() const { return ___U3CU3E7__wrap2_11; }
	inline RuntimeObject** get_address_of_U3CU3E7__wrap2_11() { return &___U3CU3E7__wrap2_11; }
	inline void set_U3CU3E7__wrap2_11(RuntimeObject* value)
	{
		___U3CU3E7__wrap2_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E7__wrap2_11), (void*)value);
	}
};


// Newtonsoft.Json.Linq.JsonPath.QueryScanFilter/<ExecuteFilter>d__2
struct U3CExecuteFilterU3Ed__2_t21E3C4FBFF60C5E17F946D9E0505FA0F13585478  : public RuntimeObject
{
public:
	// System.Int32 Newtonsoft.Json.Linq.JsonPath.QueryScanFilter/<ExecuteFilter>d__2::<>1__state
	int32_t ___U3CU3E1__state_0;
	// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JsonPath.QueryScanFilter/<ExecuteFilter>d__2::<>2__current
	JToken_t29F54EE35244E7B362E5D54E9517FCD2B0DBE359 * ___U3CU3E2__current_1;
	// System.Int32 Newtonsoft.Json.Linq.JsonPath.QueryScanFilter/<ExecuteFilter>d__2::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// System.Collections.Generic.IEnumerable`1<Newtonsoft.Json.Linq.JToken> Newtonsoft.Json.Linq.JsonPath.QueryScanFilter/<ExecuteFilter>d__2::current
	RuntimeObject* ___current_3;
	// System.Collections.Generic.IEnumerable`1<Newtonsoft.Json.Linq.JToken> Newtonsoft.Json.Linq.JsonPath.QueryScanFilter/<ExecuteFilter>d__2::<>3__current
	RuntimeObject* ___U3CU3E3__current_4;
	// Newtonsoft.Json.Linq.JsonPath.QueryScanFilter Newtonsoft.Json.Linq.JsonPath.QueryScanFilter/<ExecuteFilter>d__2::<>4__this
	QueryScanFilter_tA0457204F988F3944CED5D7DE2620ABC6CEA1FA6 * ___U3CU3E4__this_5;
	// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JsonPath.QueryScanFilter/<ExecuteFilter>d__2::root
	JToken_t29F54EE35244E7B362E5D54E9517FCD2B0DBE359 * ___root_6;
	// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JsonPath.QueryScanFilter/<ExecuteFilter>d__2::<>3__root
	JToken_t29F54EE35244E7B362E5D54E9517FCD2B0DBE359 * ___U3CU3E3__root_7;
	// Newtonsoft.Json.Linq.JsonSelectSettings Newtonsoft.Json.Linq.JsonPath.QueryScanFilter/<ExecuteFilter>d__2::settings
	JsonSelectSettings_t473B56CACFC6E1C255C7191CE7FAD72AB78BFCEF * ___settings_8;
	// Newtonsoft.Json.Linq.JsonSelectSettings Newtonsoft.Json.Linq.JsonPath.QueryScanFilter/<ExecuteFilter>d__2::<>3__settings
	JsonSelectSettings_t473B56CACFC6E1C255C7191CE7FAD72AB78BFCEF * ___U3CU3E3__settings_9;
	// System.Collections.Generic.IEnumerator`1<Newtonsoft.Json.Linq.JToken> Newtonsoft.Json.Linq.JsonPath.QueryScanFilter/<ExecuteFilter>d__2::<>7__wrap1
	RuntimeObject* ___U3CU3E7__wrap1_10;
	// System.Collections.Generic.IEnumerator`1<Newtonsoft.Json.Linq.JToken> Newtonsoft.Json.Linq.JsonPath.QueryScanFilter/<ExecuteFilter>d__2::<>7__wrap2
	RuntimeObject* ___U3CU3E7__wrap2_11;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CExecuteFilterU3Ed__2_t21E3C4FBFF60C5E17F946D9E0505FA0F13585478, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CExecuteFilterU3Ed__2_t21E3C4FBFF60C5E17F946D9E0505FA0F13585478, ___U3CU3E2__current_1)); }
	inline JToken_t29F54EE35244E7B362E5D54E9517FCD2B0DBE359 * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline JToken_t29F54EE35244E7B362E5D54E9517FCD2B0DBE359 ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(JToken_t29F54EE35244E7B362E5D54E9517FCD2B0DBE359 * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3El__initialThreadId_2() { return static_cast<int32_t>(offsetof(U3CExecuteFilterU3Ed__2_t21E3C4FBFF60C5E17F946D9E0505FA0F13585478, ___U3CU3El__initialThreadId_2)); }
	inline int32_t get_U3CU3El__initialThreadId_2() const { return ___U3CU3El__initialThreadId_2; }
	inline int32_t* get_address_of_U3CU3El__initialThreadId_2() { return &___U3CU3El__initialThreadId_2; }
	inline void set_U3CU3El__initialThreadId_2(int32_t value)
	{
		___U3CU3El__initialThreadId_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(U3CExecuteFilterU3Ed__2_t21E3C4FBFF60C5E17F946D9E0505FA0F13585478, ___current_3)); }
	inline RuntimeObject* get_current_3() const { return ___current_3; }
	inline RuntimeObject** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject* value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E3__current_4() { return static_cast<int32_t>(offsetof(U3CExecuteFilterU3Ed__2_t21E3C4FBFF60C5E17F946D9E0505FA0F13585478, ___U3CU3E3__current_4)); }
	inline RuntimeObject* get_U3CU3E3__current_4() const { return ___U3CU3E3__current_4; }
	inline RuntimeObject** get_address_of_U3CU3E3__current_4() { return &___U3CU3E3__current_4; }
	inline void set_U3CU3E3__current_4(RuntimeObject* value)
	{
		___U3CU3E3__current_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E3__current_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_5() { return static_cast<int32_t>(offsetof(U3CExecuteFilterU3Ed__2_t21E3C4FBFF60C5E17F946D9E0505FA0F13585478, ___U3CU3E4__this_5)); }
	inline QueryScanFilter_tA0457204F988F3944CED5D7DE2620ABC6CEA1FA6 * get_U3CU3E4__this_5() const { return ___U3CU3E4__this_5; }
	inline QueryScanFilter_tA0457204F988F3944CED5D7DE2620ABC6CEA1FA6 ** get_address_of_U3CU3E4__this_5() { return &___U3CU3E4__this_5; }
	inline void set_U3CU3E4__this_5(QueryScanFilter_tA0457204F988F3944CED5D7DE2620ABC6CEA1FA6 * value)
	{
		___U3CU3E4__this_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_5), (void*)value);
	}

	inline static int32_t get_offset_of_root_6() { return static_cast<int32_t>(offsetof(U3CExecuteFilterU3Ed__2_t21E3C4FBFF60C5E17F946D9E0505FA0F13585478, ___root_6)); }
	inline JToken_t29F54EE35244E7B362E5D54E9517FCD2B0DBE359 * get_root_6() const { return ___root_6; }
	inline JToken_t29F54EE35244E7B362E5D54E9517FCD2B0DBE359 ** get_address_of_root_6() { return &___root_6; }
	inline void set_root_6(JToken_t29F54EE35244E7B362E5D54E9517FCD2B0DBE359 * value)
	{
		___root_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___root_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E3__root_7() { return static_cast<int32_t>(offsetof(U3CExecuteFilterU3Ed__2_t21E3C4FBFF60C5E17F946D9E0505FA0F13585478, ___U3CU3E3__root_7)); }
	inline JToken_t29F54EE35244E7B362E5D54E9517FCD2B0DBE359 * get_U3CU3E3__root_7() const { return ___U3CU3E3__root_7; }
	inline JToken_t29F54EE35244E7B362E5D54E9517FCD2B0DBE359 ** get_address_of_U3CU3E3__root_7() { return &___U3CU3E3__root_7; }
	inline void set_U3CU3E3__root_7(JToken_t29F54EE35244E7B362E5D54E9517FCD2B0DBE359 * value)
	{
		___U3CU3E3__root_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E3__root_7), (void*)value);
	}

	inline static int32_t get_offset_of_settings_8() { return static_cast<int32_t>(offsetof(U3CExecuteFilterU3Ed__2_t21E3C4FBFF60C5E17F946D9E0505FA0F13585478, ___settings_8)); }
	inline JsonSelectSettings_t473B56CACFC6E1C255C7191CE7FAD72AB78BFCEF * get_settings_8() const { return ___settings_8; }
	inline JsonSelectSettings_t473B56CACFC6E1C255C7191CE7FAD72AB78BFCEF ** get_address_of_settings_8() { return &___settings_8; }
	inline void set_settings_8(JsonSelectSettings_t473B56CACFC6E1C255C7191CE7FAD72AB78BFCEF * value)
	{
		___settings_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___settings_8), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E3__settings_9() { return static_cast<int32_t>(offsetof(U3CExecuteFilterU3Ed__2_t21E3C4FBFF60C5E17F946D9E0505FA0F13585478, ___U3CU3E3__settings_9)); }
	inline JsonSelectSettings_t473B56CACFC6E1C255C7191CE7FAD72AB78BFCEF * get_U3CU3E3__settings_9() const { return ___U3CU3E3__settings_9; }
	inline JsonSelectSettings_t473B56CACFC6E1C255C7191CE7FAD72AB78BFCEF ** get_address_of_U3CU3E3__settings_9() { return &___U3CU3E3__settings_9; }
	inline void set_U3CU3E3__settings_9(JsonSelectSettings_t473B56CACFC6E1C255C7191CE7FAD72AB78BFCEF * value)
	{
		___U3CU3E3__settings_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E3__settings_9), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap1_10() { return static_cast<int32_t>(offsetof(U3CExecuteFilterU3Ed__2_t21E3C4FBFF60C5E17F946D9E0505FA0F13585478, ___U3CU3E7__wrap1_10)); }
	inline RuntimeObject* get_U3CU3E7__wrap1_10() const { return ___U3CU3E7__wrap1_10; }
	inline RuntimeObject** get_address_of_U3CU3E7__wrap1_10() { return &___U3CU3E7__wrap1_10; }
	inline void set_U3CU3E7__wrap1_10(RuntimeObject* value)
	{
		___U3CU3E7__wrap1_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E7__wrap1_10), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap2_11() { return static_cast<int32_t>(offsetof(U3CExecuteFilterU3Ed__2_t21E3C4FBFF60C5E17F946D9E0505FA0F13585478, ___U3CU3E7__wrap2_11)); }
	inline RuntimeObject* get_U3CU3E7__wrap2_11() const { return ___U3CU3E7__wrap2_11; }
	inline RuntimeObject** get_address_of_U3CU3E7__wrap2_11() { return &___U3CU3E7__wrap2_11; }
	inline void set_U3CU3E7__wrap2_11(RuntimeObject* value)
	{
		___U3CU3E7__wrap2_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E7__wrap2_11), (void*)value);
	}
};


// Newtonsoft.Json.Utilities.ReflectionObject/<>c__DisplayClass11_0
struct U3CU3Ec__DisplayClass11_0_tF928E96E14BC8ECEB70C485002D09193B22513F2  : public RuntimeObject
{
public:
	// System.Func`1<System.Object> Newtonsoft.Json.Utilities.ReflectionObject/<>c__DisplayClass11_0::ctor
	Func_1_t807CEE610086E24A0167BAA97A64062016E09D49 * ___ctor_0;

public:
	inline static int32_t get_offset_of_ctor_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass11_0_tF928E96E14BC8ECEB70C485002D09193B22513F2, ___ctor_0)); }
	inline Func_1_t807CEE610086E24A0167BAA97A64062016E09D49 * get_ctor_0() const { return ___ctor_0; }
	inline Func_1_t807CEE610086E24A0167BAA97A64062016E09D49 ** get_address_of_ctor_0() { return &___ctor_0; }
	inline void set_ctor_0(Func_1_t807CEE610086E24A0167BAA97A64062016E09D49 * value)
	{
		___ctor_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ctor_0), (void*)value);
	}
};


// Newtonsoft.Json.Utilities.ReflectionObject/<>c__DisplayClass11_1
struct U3CU3Ec__DisplayClass11_1_t78E2B27646A3CDFEBAB7C881F9DA8405FE8779CC  : public RuntimeObject
{
public:
	// Newtonsoft.Json.Utilities.MethodCall`2<System.Object,System.Object> Newtonsoft.Json.Utilities.ReflectionObject/<>c__DisplayClass11_1::call
	MethodCall_2_t5E28B9DEE3B3A32CA955A9F5A149CC91CE1F9C6F * ___call_0;

public:
	inline static int32_t get_offset_of_call_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass11_1_t78E2B27646A3CDFEBAB7C881F9DA8405FE8779CC, ___call_0)); }
	inline MethodCall_2_t5E28B9DEE3B3A32CA955A9F5A149CC91CE1F9C6F * get_call_0() const { return ___call_0; }
	inline MethodCall_2_t5E28B9DEE3B3A32CA955A9F5A149CC91CE1F9C6F ** get_address_of_call_0() { return &___call_0; }
	inline void set_call_0(MethodCall_2_t5E28B9DEE3B3A32CA955A9F5A149CC91CE1F9C6F * value)
	{
		___call_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___call_0), (void*)value);
	}
};


// Newtonsoft.Json.Utilities.ReflectionObject/<>c__DisplayClass11_2
struct U3CU3Ec__DisplayClass11_2_t92F76CE0A268F4D1987C038EF709A6228BD72259  : public RuntimeObject
{
public:
	// Newtonsoft.Json.Utilities.MethodCall`2<System.Object,System.Object> Newtonsoft.Json.Utilities.ReflectionObject/<>c__DisplayClass11_2::call
	MethodCall_2_t5E28B9DEE3B3A32CA955A9F5A149CC91CE1F9C6F * ___call_0;

public:
	inline static int32_t get_offset_of_call_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass11_2_t92F76CE0A268F4D1987C038EF709A6228BD72259, ___call_0)); }
	inline MethodCall_2_t5E28B9DEE3B3A32CA955A9F5A149CC91CE1F9C6F * get_call_0() const { return ___call_0; }
	inline MethodCall_2_t5E28B9DEE3B3A32CA955A9F5A149CC91CE1F9C6F ** get_address_of_call_0() { return &___call_0; }
	inline void set_call_0(MethodCall_2_t5E28B9DEE3B3A32CA955A9F5A149CC91CE1F9C6F * value)
	{
		___call_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___call_0), (void*)value);
	}
};


// Newtonsoft.Json.Utilities.ReflectionUtils/<>c
struct U3CU3Ec_t8CE040292E2A95685256FEE59EF2868355725303  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t8CE040292E2A95685256FEE59EF2868355725303_StaticFields
{
public:
	// Newtonsoft.Json.Utilities.ReflectionUtils/<>c Newtonsoft.Json.Utilities.ReflectionUtils/<>c::<>9
	U3CU3Ec_t8CE040292E2A95685256FEE59EF2868355725303 * ___U3CU3E9_0;
	// System.Func`2<System.Reflection.ConstructorInfo,System.Boolean> Newtonsoft.Json.Utilities.ReflectionUtils/<>c::<>9__11_0
	Func_2_t6D7DD0FE4DA742E557BDCA2D3A8E6D7638B5673C * ___U3CU3E9__11_0_1;
	// System.Func`2<System.Reflection.MemberInfo,System.String> Newtonsoft.Json.Utilities.ReflectionUtils/<>c::<>9__31_0
	Func_2_t82BDCCD3F9984E63AFAFFE2E311FD4AA25753329 * ___U3CU3E9__31_0_2;
	// System.Func`2<System.Reflection.ParameterInfo,System.Type> Newtonsoft.Json.Utilities.ReflectionUtils/<>c::<>9__39_0
	Func_2_t5938BB484083AB6B9B4C4F0DBAD54A7F51611EBF * ___U3CU3E9__39_0_3;
	// System.Func`2<System.Reflection.FieldInfo,System.Boolean> Newtonsoft.Json.Utilities.ReflectionUtils/<>c::<>9__41_0
	Func_2_t0BE5B54DD65017DAF1DC5DEC5A896A2B0550F8AE * ___U3CU3E9__41_0_4;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t8CE040292E2A95685256FEE59EF2868355725303_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t8CE040292E2A95685256FEE59EF2868355725303 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t8CE040292E2A95685256FEE59EF2868355725303 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t8CE040292E2A95685256FEE59EF2868355725303 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__11_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t8CE040292E2A95685256FEE59EF2868355725303_StaticFields, ___U3CU3E9__11_0_1)); }
	inline Func_2_t6D7DD0FE4DA742E557BDCA2D3A8E6D7638B5673C * get_U3CU3E9__11_0_1() const { return ___U3CU3E9__11_0_1; }
	inline Func_2_t6D7DD0FE4DA742E557BDCA2D3A8E6D7638B5673C ** get_address_of_U3CU3E9__11_0_1() { return &___U3CU3E9__11_0_1; }
	inline void set_U3CU3E9__11_0_1(Func_2_t6D7DD0FE4DA742E557BDCA2D3A8E6D7638B5673C * value)
	{
		___U3CU3E9__11_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__11_0_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__31_0_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_t8CE040292E2A95685256FEE59EF2868355725303_StaticFields, ___U3CU3E9__31_0_2)); }
	inline Func_2_t82BDCCD3F9984E63AFAFFE2E311FD4AA25753329 * get_U3CU3E9__31_0_2() const { return ___U3CU3E9__31_0_2; }
	inline Func_2_t82BDCCD3F9984E63AFAFFE2E311FD4AA25753329 ** get_address_of_U3CU3E9__31_0_2() { return &___U3CU3E9__31_0_2; }
	inline void set_U3CU3E9__31_0_2(Func_2_t82BDCCD3F9984E63AFAFFE2E311FD4AA25753329 * value)
	{
		___U3CU3E9__31_0_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__31_0_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__39_0_3() { return static_cast<int32_t>(offsetof(U3CU3Ec_t8CE040292E2A95685256FEE59EF2868355725303_StaticFields, ___U3CU3E9__39_0_3)); }
	inline Func_2_t5938BB484083AB6B9B4C4F0DBAD54A7F51611EBF * get_U3CU3E9__39_0_3() const { return ___U3CU3E9__39_0_3; }
	inline Func_2_t5938BB484083AB6B9B4C4F0DBAD54A7F51611EBF ** get_address_of_U3CU3E9__39_0_3() { return &___U3CU3E9__39_0_3; }
	inline void set_U3CU3E9__39_0_3(Func_2_t5938BB484083AB6B9B4C4F0DBAD54A7F51611EBF * value)
	{
		___U3CU3E9__39_0_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__39_0_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__41_0_4() { return static_cast<int32_t>(offsetof(U3CU3Ec_t8CE040292E2A95685256FEE59EF2868355725303_StaticFields, ___U3CU3E9__41_0_4)); }
	inline Func_2_t0BE5B54DD65017DAF1DC5DEC5A896A2B0550F8AE * get_U3CU3E9__41_0_4() const { return ___U3CU3E9__41_0_4; }
	inline Func_2_t0BE5B54DD65017DAF1DC5DEC5A896A2B0550F8AE ** get_address_of_U3CU3E9__41_0_4() { return &___U3CU3E9__41_0_4; }
	inline void set_U3CU3E9__41_0_4(Func_2_t0BE5B54DD65017DAF1DC5DEC5A896A2B0550F8AE * value)
	{
		___U3CU3E9__41_0_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__41_0_4), (void*)value);
	}
};


// Newtonsoft.Json.Utilities.ReflectionUtils/<>c__DisplayClass31_0
struct U3CU3Ec__DisplayClass31_0_tCEC3365D1BD57BC604DAA5A57CC4C55E93F0B9F8  : public RuntimeObject
{
public:
	// System.Reflection.MemberInfo Newtonsoft.Json.Utilities.ReflectionUtils/<>c__DisplayClass31_0::memberInfo
	MemberInfo_t * ___memberInfo_0;

public:
	inline static int32_t get_offset_of_memberInfo_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass31_0_tCEC3365D1BD57BC604DAA5A57CC4C55E93F0B9F8, ___memberInfo_0)); }
	inline MemberInfo_t * get_memberInfo_0() const { return ___memberInfo_0; }
	inline MemberInfo_t ** get_address_of_memberInfo_0() { return &___memberInfo_0; }
	inline void set_memberInfo_0(MemberInfo_t * value)
	{
		___memberInfo_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___memberInfo_0), (void*)value);
	}
};


// Newtonsoft.Json.Utilities.ReflectionUtils/<>c__DisplayClass44_0
struct U3CU3Ec__DisplayClass44_0_t5869AF36E0D5F069396C0CD6EAC9CFEDED43C29B  : public RuntimeObject
{
public:
	// System.Reflection.PropertyInfo Newtonsoft.Json.Utilities.ReflectionUtils/<>c__DisplayClass44_0::subTypeProperty
	PropertyInfo_t * ___subTypeProperty_0;

public:
	inline static int32_t get_offset_of_subTypeProperty_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass44_0_t5869AF36E0D5F069396C0CD6EAC9CFEDED43C29B, ___subTypeProperty_0)); }
	inline PropertyInfo_t * get_subTypeProperty_0() const { return ___subTypeProperty_0; }
	inline PropertyInfo_t ** get_address_of_subTypeProperty_0() { return &___subTypeProperty_0; }
	inline void set_subTypeProperty_0(PropertyInfo_t * value)
	{
		___subTypeProperty_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___subTypeProperty_0), (void*)value);
	}
};


// Newtonsoft.Json.Utilities.ReflectionUtils/<>c__DisplayClass44_1
struct U3CU3Ec__DisplayClass44_1_t0F0B1C1F120D3597373438C49039C3858E5E9BAC  : public RuntimeObject
{
public:
	// System.Type Newtonsoft.Json.Utilities.ReflectionUtils/<>c__DisplayClass44_1::subTypePropertyDeclaringType
	Type_t * ___subTypePropertyDeclaringType_0;
	// Newtonsoft.Json.Utilities.ReflectionUtils/<>c__DisplayClass44_0 Newtonsoft.Json.Utilities.ReflectionUtils/<>c__DisplayClass44_1::CS$<>8__locals1
	U3CU3Ec__DisplayClass44_0_t5869AF36E0D5F069396C0CD6EAC9CFEDED43C29B * ___CSU24U3CU3E8__locals1_1;

public:
	inline static int32_t get_offset_of_subTypePropertyDeclaringType_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass44_1_t0F0B1C1F120D3597373438C49039C3858E5E9BAC, ___subTypePropertyDeclaringType_0)); }
	inline Type_t * get_subTypePropertyDeclaringType_0() const { return ___subTypePropertyDeclaringType_0; }
	inline Type_t ** get_address_of_subTypePropertyDeclaringType_0() { return &___subTypePropertyDeclaringType_0; }
	inline void set_subTypePropertyDeclaringType_0(Type_t * value)
	{
		___subTypePropertyDeclaringType_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___subTypePropertyDeclaringType_0), (void*)value);
	}

	inline static int32_t get_offset_of_CSU24U3CU3E8__locals1_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass44_1_t0F0B1C1F120D3597373438C49039C3858E5E9BAC, ___CSU24U3CU3E8__locals1_1)); }
	inline U3CU3Ec__DisplayClass44_0_t5869AF36E0D5F069396C0CD6EAC9CFEDED43C29B * get_CSU24U3CU3E8__locals1_1() const { return ___CSU24U3CU3E8__locals1_1; }
	inline U3CU3Ec__DisplayClass44_0_t5869AF36E0D5F069396C0CD6EAC9CFEDED43C29B ** get_address_of_CSU24U3CU3E8__locals1_1() { return &___CSU24U3CU3E8__locals1_1; }
	inline void set_CSU24U3CU3E8__locals1_1(U3CU3Ec__DisplayClass44_0_t5869AF36E0D5F069396C0CD6EAC9CFEDED43C29B * value)
	{
		___CSU24U3CU3E8__locals1_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CSU24U3CU3E8__locals1_1), (void*)value);
	}
};


// Newtonsoft.Json.Utilities.ReflectionUtils/<>c__DisplayClass45_0
struct U3CU3Ec__DisplayClass45_0_t3F7A7DD4346628E64B108B2D3BF7E943577E2047  : public RuntimeObject
{
public:
	// System.String Newtonsoft.Json.Utilities.ReflectionUtils/<>c__DisplayClass45_0::method
	String_t* ___method_0;
	// System.Type Newtonsoft.Json.Utilities.ReflectionUtils/<>c__DisplayClass45_0::methodDeclaringType
	Type_t * ___methodDeclaringType_1;

public:
	inline static int32_t get_offset_of_method_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass45_0_t3F7A7DD4346628E64B108B2D3BF7E943577E2047, ___method_0)); }
	inline String_t* get_method_0() const { return ___method_0; }
	inline String_t** get_address_of_method_0() { return &___method_0; }
	inline void set_method_0(String_t* value)
	{
		___method_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_0), (void*)value);
	}

	inline static int32_t get_offset_of_methodDeclaringType_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass45_0_t3F7A7DD4346628E64B108B2D3BF7E943577E2047, ___methodDeclaringType_1)); }
	inline Type_t * get_methodDeclaringType_1() const { return ___methodDeclaringType_1; }
	inline Type_t ** get_address_of_methodDeclaringType_1() { return &___methodDeclaringType_1; }
	inline void set_methodDeclaringType_1(Type_t * value)
	{
		___methodDeclaringType_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___methodDeclaringType_1), (void*)value);
	}
};


// Newtonsoft.Json.Linq.JsonPath.ScanFilter/<ExecuteFilter>d__2
struct U3CExecuteFilterU3Ed__2_t6A9514CF3CFAEC5C49745D57B133C029C022CA5E  : public RuntimeObject
{
public:
	// System.Int32 Newtonsoft.Json.Linq.JsonPath.ScanFilter/<ExecuteFilter>d__2::<>1__state
	int32_t ___U3CU3E1__state_0;
	// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JsonPath.ScanFilter/<ExecuteFilter>d__2::<>2__current
	JToken_t29F54EE35244E7B362E5D54E9517FCD2B0DBE359 * ___U3CU3E2__current_1;
	// System.Int32 Newtonsoft.Json.Linq.JsonPath.ScanFilter/<ExecuteFilter>d__2::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// System.Collections.Generic.IEnumerable`1<Newtonsoft.Json.Linq.JToken> Newtonsoft.Json.Linq.JsonPath.ScanFilter/<ExecuteFilter>d__2::current
	RuntimeObject* ___current_3;
	// System.Collections.Generic.IEnumerable`1<Newtonsoft.Json.Linq.JToken> Newtonsoft.Json.Linq.JsonPath.ScanFilter/<ExecuteFilter>d__2::<>3__current
	RuntimeObject* ___U3CU3E3__current_4;
	// Newtonsoft.Json.Linq.JsonPath.ScanFilter Newtonsoft.Json.Linq.JsonPath.ScanFilter/<ExecuteFilter>d__2::<>4__this
	ScanFilter_tEAA0D66F60DC218A0AAE2CBEEFCEE961767F79D1 * ___U3CU3E4__this_5;
	// System.Collections.Generic.IEnumerator`1<Newtonsoft.Json.Linq.JToken> Newtonsoft.Json.Linq.JsonPath.ScanFilter/<ExecuteFilter>d__2::<>7__wrap1
	RuntimeObject* ___U3CU3E7__wrap1_6;
	// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JsonPath.ScanFilter/<ExecuteFilter>d__2::<c>5__3
	JToken_t29F54EE35244E7B362E5D54E9517FCD2B0DBE359 * ___U3CcU3E5__3_7;
	// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JsonPath.ScanFilter/<ExecuteFilter>d__2::<value>5__4
	JToken_t29F54EE35244E7B362E5D54E9517FCD2B0DBE359 * ___U3CvalueU3E5__4_8;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CExecuteFilterU3Ed__2_t6A9514CF3CFAEC5C49745D57B133C029C022CA5E, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CExecuteFilterU3Ed__2_t6A9514CF3CFAEC5C49745D57B133C029C022CA5E, ___U3CU3E2__current_1)); }
	inline JToken_t29F54EE35244E7B362E5D54E9517FCD2B0DBE359 * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline JToken_t29F54EE35244E7B362E5D54E9517FCD2B0DBE359 ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(JToken_t29F54EE35244E7B362E5D54E9517FCD2B0DBE359 * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3El__initialThreadId_2() { return static_cast<int32_t>(offsetof(U3CExecuteFilterU3Ed__2_t6A9514CF3CFAEC5C49745D57B133C029C022CA5E, ___U3CU3El__initialThreadId_2)); }
	inline int32_t get_U3CU3El__initialThreadId_2() const { return ___U3CU3El__initialThreadId_2; }
	inline int32_t* get_address_of_U3CU3El__initialThreadId_2() { return &___U3CU3El__initialThreadId_2; }
	inline void set_U3CU3El__initialThreadId_2(int32_t value)
	{
		___U3CU3El__initialThreadId_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(U3CExecuteFilterU3Ed__2_t6A9514CF3CFAEC5C49745D57B133C029C022CA5E, ___current_3)); }
	inline RuntimeObject* get_current_3() const { return ___current_3; }
	inline RuntimeObject** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject* value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E3__current_4() { return static_cast<int32_t>(offsetof(U3CExecuteFilterU3Ed__2_t6A9514CF3CFAEC5C49745D57B133C029C022CA5E, ___U3CU3E3__current_4)); }
	inline RuntimeObject* get_U3CU3E3__current_4() const { return ___U3CU3E3__current_4; }
	inline RuntimeObject** get_address_of_U3CU3E3__current_4() { return &___U3CU3E3__current_4; }
	inline void set_U3CU3E3__current_4(RuntimeObject* value)
	{
		___U3CU3E3__current_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E3__current_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_5() { return static_cast<int32_t>(offsetof(U3CExecuteFilterU3Ed__2_t6A9514CF3CFAEC5C49745D57B133C029C022CA5E, ___U3CU3E4__this_5)); }
	inline ScanFilter_tEAA0D66F60DC218A0AAE2CBEEFCEE961767F79D1 * get_U3CU3E4__this_5() const { return ___U3CU3E4__this_5; }
	inline ScanFilter_tEAA0D66F60DC218A0AAE2CBEEFCEE961767F79D1 ** get_address_of_U3CU3E4__this_5() { return &___U3CU3E4__this_5; }
	inline void set_U3CU3E4__this_5(ScanFilter_tEAA0D66F60DC218A0AAE2CBEEFCEE961767F79D1 * value)
	{
		___U3CU3E4__this_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap1_6() { return static_cast<int32_t>(offsetof(U3CExecuteFilterU3Ed__2_t6A9514CF3CFAEC5C49745D57B133C029C022CA5E, ___U3CU3E7__wrap1_6)); }
	inline RuntimeObject* get_U3CU3E7__wrap1_6() const { return ___U3CU3E7__wrap1_6; }
	inline RuntimeObject** get_address_of_U3CU3E7__wrap1_6() { return &___U3CU3E7__wrap1_6; }
	inline void set_U3CU3E7__wrap1_6(RuntimeObject* value)
	{
		___U3CU3E7__wrap1_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E7__wrap1_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CcU3E5__3_7() { return static_cast<int32_t>(offsetof(U3CExecuteFilterU3Ed__2_t6A9514CF3CFAEC5C49745D57B133C029C022CA5E, ___U3CcU3E5__3_7)); }
	inline JToken_t29F54EE35244E7B362E5D54E9517FCD2B0DBE359 * get_U3CcU3E5__3_7() const { return ___U3CcU3E5__3_7; }
	inline JToken_t29F54EE35244E7B362E5D54E9517FCD2B0DBE359 ** get_address_of_U3CcU3E5__3_7() { return &___U3CcU3E5__3_7; }
	inline void set_U3CcU3E5__3_7(JToken_t29F54EE35244E7B362E5D54E9517FCD2B0DBE359 * value)
	{
		___U3CcU3E5__3_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CcU3E5__3_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CvalueU3E5__4_8() { return static_cast<int32_t>(offsetof(U3CExecuteFilterU3Ed__2_t6A9514CF3CFAEC5C49745D57B133C029C022CA5E, ___U3CvalueU3E5__4_8)); }
	inline JToken_t29F54EE35244E7B362E5D54E9517FCD2B0DBE359 * get_U3CvalueU3E5__4_8() const { return ___U3CvalueU3E5__4_8; }
	inline JToken_t29F54EE35244E7B362E5D54E9517FCD2B0DBE359 ** get_address_of_U3CvalueU3E5__4_8() { return &___U3CvalueU3E5__4_8; }
	inline void set_U3CvalueU3E5__4_8(JToken_t29F54EE35244E7B362E5D54E9517FCD2B0DBE359 * value)
	{
		___U3CvalueU3E5__4_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CvalueU3E5__4_8), (void*)value);
	}
};


// Newtonsoft.Json.Linq.JObject/JObjectDynamicProxy/<>c
struct U3CU3Ec_t69B92625E75B6733719EC0111D83CBBA38E18FB2  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t69B92625E75B6733719EC0111D83CBBA38E18FB2_StaticFields
{
public:
	// Newtonsoft.Json.Linq.JObject/JObjectDynamicProxy/<>c Newtonsoft.Json.Linq.JObject/JObjectDynamicProxy/<>c::<>9
	U3CU3Ec_t69B92625E75B6733719EC0111D83CBBA38E18FB2 * ___U3CU3E9_0;
	// System.Func`2<Newtonsoft.Json.Linq.JProperty,System.String> Newtonsoft.Json.Linq.JObject/JObjectDynamicProxy/<>c::<>9__2_0
	Func_2_tA651E2F99CED91C9590800FA47A2E0E3D0BFE402 * ___U3CU3E9__2_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t69B92625E75B6733719EC0111D83CBBA38E18FB2_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t69B92625E75B6733719EC0111D83CBBA38E18FB2 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t69B92625E75B6733719EC0111D83CBBA38E18FB2 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t69B92625E75B6733719EC0111D83CBBA38E18FB2 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__2_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t69B92625E75B6733719EC0111D83CBBA38E18FB2_StaticFields, ___U3CU3E9__2_0_1)); }
	inline Func_2_tA651E2F99CED91C9590800FA47A2E0E3D0BFE402 * get_U3CU3E9__2_0_1() const { return ___U3CU3E9__2_0_1; }
	inline Func_2_tA651E2F99CED91C9590800FA47A2E0E3D0BFE402 ** get_address_of_U3CU3E9__2_0_1() { return &___U3CU3E9__2_0_1; }
	inline void set_U3CU3E9__2_0_1(Func_2_tA651E2F99CED91C9590800FA47A2E0E3D0BFE402 * value)
	{
		___U3CU3E9__2_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__2_0_1), (void*)value);
	}
};


// Newtonsoft.Json.Linq.JProperty/JPropertyList/<GetEnumerator>d__1
struct U3CGetEnumeratorU3Ed__1_t7C50A3D32B6527C6EEA9E4D7FABB016161DB0A9D  : public RuntimeObject
{
public:
	// System.Int32 Newtonsoft.Json.Linq.JProperty/JPropertyList/<GetEnumerator>d__1::<>1__state
	int32_t ___U3CU3E1__state_0;
	// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JProperty/JPropertyList/<GetEnumerator>d__1::<>2__current
	JToken_t29F54EE35244E7B362E5D54E9517FCD2B0DBE359 * ___U3CU3E2__current_1;
	// Newtonsoft.Json.Linq.JProperty/JPropertyList Newtonsoft.Json.Linq.JProperty/JPropertyList/<GetEnumerator>d__1::<>4__this
	JPropertyList_tE978701AA0E5EA3DE317E8ABF5EC0C7CE5E713DB * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__1_t7C50A3D32B6527C6EEA9E4D7FABB016161DB0A9D, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__1_t7C50A3D32B6527C6EEA9E4D7FABB016161DB0A9D, ___U3CU3E2__current_1)); }
	inline JToken_t29F54EE35244E7B362E5D54E9517FCD2B0DBE359 * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline JToken_t29F54EE35244E7B362E5D54E9517FCD2B0DBE359 ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(JToken_t29F54EE35244E7B362E5D54E9517FCD2B0DBE359 * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__1_t7C50A3D32B6527C6EEA9E4D7FABB016161DB0A9D, ___U3CU3E4__this_2)); }
	inline JPropertyList_tE978701AA0E5EA3DE317E8ABF5EC0C7CE5E713DB * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline JPropertyList_tE978701AA0E5EA3DE317E8ABF5EC0C7CE5E713DB ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(JPropertyList_tE978701AA0E5EA3DE317E8ABF5EC0C7CE5E713DB * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___list_0)); }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * get_list_0() const { return ___list_0; }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<System.String>
struct Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	String_t* ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B, ___list_0)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_list_0() const { return ___list_0; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B, ___current_3)); }
	inline String_t* get_current_3() const { return ___current_3; }
	inline String_t** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(String_t* value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
struct KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.String,Newtonsoft.Json.Linq.JToken>
struct KeyValuePair_2_t9967CE3AA01B66D662E4BE42AC4A1AC4FA262636 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	JToken_t29F54EE35244E7B362E5D54E9517FCD2B0DBE359 * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t9967CE3AA01B66D662E4BE42AC4A1AC4FA262636, ___key_0)); }
	inline String_t* get_key_0() const { return ___key_0; }
	inline String_t** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(String_t* value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t9967CE3AA01B66D662E4BE42AC4A1AC4FA262636, ___value_1)); }
	inline JToken_t29F54EE35244E7B362E5D54E9517FCD2B0DBE359 * get_value_1() const { return ___value_1; }
	inline JToken_t29F54EE35244E7B362E5D54E9517FCD2B0DBE359 ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(JToken_t29F54EE35244E7B362E5D54E9517FCD2B0DBE359 * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Nullable`1<System.Boolean>
struct Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 
{
public:
	// T System.Nullable`1::value
	bool ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3, ___value_0)); }
	inline bool get_value_0() const { return ___value_0; }
	inline bool* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(bool value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<System.Int32>
struct Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
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

// System.Reflection.FieldInfo
struct FieldInfo_t  : public MemberInfo_t
{
public:

public:
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


// Newtonsoft.Json.Linq.JContainer
struct JContainer_t38DD4DF522660749764609AA408DFD0575BABE3F  : public JToken_t29F54EE35244E7B362E5D54E9517FCD2B0DBE359
{
public:
	// System.ComponentModel.ListChangedEventHandler Newtonsoft.Json.Linq.JContainer::_listChanged
	ListChangedEventHandler_t02874ED3C8355742E3E62AED85A53F3140506B8C * ____listChanged_14;
	// System.Collections.Specialized.NotifyCollectionChangedEventHandler Newtonsoft.Json.Linq.JContainer::_collectionChanged
	NotifyCollectionChangedEventHandler_t737D98299AF810020BC5FC077CC664F46B6D0621 * ____collectionChanged_15;
	// System.Object Newtonsoft.Json.Linq.JContainer::_syncRoot
	RuntimeObject * ____syncRoot_16;
	// System.Boolean Newtonsoft.Json.Linq.JContainer::_busy
	bool ____busy_17;

public:
	inline static int32_t get_offset_of__listChanged_14() { return static_cast<int32_t>(offsetof(JContainer_t38DD4DF522660749764609AA408DFD0575BABE3F, ____listChanged_14)); }
	inline ListChangedEventHandler_t02874ED3C8355742E3E62AED85A53F3140506B8C * get__listChanged_14() const { return ____listChanged_14; }
	inline ListChangedEventHandler_t02874ED3C8355742E3E62AED85A53F3140506B8C ** get_address_of__listChanged_14() { return &____listChanged_14; }
	inline void set__listChanged_14(ListChangedEventHandler_t02874ED3C8355742E3E62AED85A53F3140506B8C * value)
	{
		____listChanged_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____listChanged_14), (void*)value);
	}

	inline static int32_t get_offset_of__collectionChanged_15() { return static_cast<int32_t>(offsetof(JContainer_t38DD4DF522660749764609AA408DFD0575BABE3F, ____collectionChanged_15)); }
	inline NotifyCollectionChangedEventHandler_t737D98299AF810020BC5FC077CC664F46B6D0621 * get__collectionChanged_15() const { return ____collectionChanged_15; }
	inline NotifyCollectionChangedEventHandler_t737D98299AF810020BC5FC077CC664F46B6D0621 ** get_address_of__collectionChanged_15() { return &____collectionChanged_15; }
	inline void set__collectionChanged_15(NotifyCollectionChangedEventHandler_t737D98299AF810020BC5FC077CC664F46B6D0621 * value)
	{
		____collectionChanged_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____collectionChanged_15), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_16() { return static_cast<int32_t>(offsetof(JContainer_t38DD4DF522660749764609AA408DFD0575BABE3F, ____syncRoot_16)); }
	inline RuntimeObject * get__syncRoot_16() const { return ____syncRoot_16; }
	inline RuntimeObject ** get_address_of__syncRoot_16() { return &____syncRoot_16; }
	inline void set__syncRoot_16(RuntimeObject * value)
	{
		____syncRoot_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_16), (void*)value);
	}

	inline static int32_t get_offset_of__busy_17() { return static_cast<int32_t>(offsetof(JContainer_t38DD4DF522660749764609AA408DFD0575BABE3F, ____busy_17)); }
	inline bool get__busy_17() const { return ____busy_17; }
	inline bool* get_address_of__busy_17() { return &____busy_17; }
	inline void set__busy_17(bool value)
	{
		____busy_17 = value;
	}
};


// Newtonsoft.Json.Linq.JPropertyKeyedCollection
struct JPropertyKeyedCollection_t53866F50942B265AFC54305B4437D5B9173FDF48  : public Collection_1_t4C6E257DCF9453754AD27FD3CEE7E20426D8D4DB
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,Newtonsoft.Json.Linq.JToken> Newtonsoft.Json.Linq.JPropertyKeyedCollection::_dictionary
	Dictionary_2_t215EBC28480DA2BAFF6E9E422D371AF2EFD18921 * ____dictionary_3;

public:
	inline static int32_t get_offset_of__dictionary_3() { return static_cast<int32_t>(offsetof(JPropertyKeyedCollection_t53866F50942B265AFC54305B4437D5B9173FDF48, ____dictionary_3)); }
	inline Dictionary_2_t215EBC28480DA2BAFF6E9E422D371AF2EFD18921 * get__dictionary_3() const { return ____dictionary_3; }
	inline Dictionary_2_t215EBC28480DA2BAFF6E9E422D371AF2EFD18921 ** get_address_of__dictionary_3() { return &____dictionary_3; }
	inline void set__dictionary_3(Dictionary_2_t215EBC28480DA2BAFF6E9E422D371AF2EFD18921 * value)
	{
		____dictionary_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dictionary_3), (void*)value);
	}
};

struct JPropertyKeyedCollection_t53866F50942B265AFC54305B4437D5B9173FDF48_StaticFields
{
public:
	// System.Collections.Generic.IEqualityComparer`1<System.String> Newtonsoft.Json.Linq.JPropertyKeyedCollection::Comparer
	RuntimeObject* ___Comparer_2;

public:
	inline static int32_t get_offset_of_Comparer_2() { return static_cast<int32_t>(offsetof(JPropertyKeyedCollection_t53866F50942B265AFC54305B4437D5B9173FDF48_StaticFields, ___Comparer_2)); }
	inline RuntimeObject* get_Comparer_2() const { return ___Comparer_2; }
	inline RuntimeObject** get_address_of_Comparer_2() { return &___Comparer_2; }
	inline void set_Comparer_2(RuntimeObject* value)
	{
		___Comparer_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Comparer_2), (void*)value);
	}
};


// System.Reflection.MethodBase
struct MethodBase_t  : public MemberInfo_t
{
public:

public:
};


// System.Reflection.PropertyInfo
struct PropertyInfo_t  : public MemberInfo_t
{
public:

public:
};


// Newtonsoft.Json.Linq.JsonPath.QueryFilter
struct QueryFilter_t953A25C7D920832364FB38BFFB972F6811BA4F28  : public PathFilter_t26C6A1D29F5E0B63B1CA0DDB5217C9301E05157F
{
public:
	// Newtonsoft.Json.Linq.JsonPath.QueryExpression Newtonsoft.Json.Linq.JsonPath.QueryFilter::Expression
	QueryExpression_tAAC183FFC4E697E5ECD4CEE7D463FB07C8F54221 * ___Expression_0;

public:
	inline static int32_t get_offset_of_Expression_0() { return static_cast<int32_t>(offsetof(QueryFilter_t953A25C7D920832364FB38BFFB972F6811BA4F28, ___Expression_0)); }
	inline QueryExpression_tAAC183FFC4E697E5ECD4CEE7D463FB07C8F54221 * get_Expression_0() const { return ___Expression_0; }
	inline QueryExpression_tAAC183FFC4E697E5ECD4CEE7D463FB07C8F54221 ** get_address_of_Expression_0() { return &___Expression_0; }
	inline void set_Expression_0(QueryExpression_tAAC183FFC4E697E5ECD4CEE7D463FB07C8F54221 * value)
	{
		___Expression_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Expression_0), (void*)value);
	}
};


// Newtonsoft.Json.Linq.JsonPath.QueryScanFilter
struct QueryScanFilter_tA0457204F988F3944CED5D7DE2620ABC6CEA1FA6  : public PathFilter_t26C6A1D29F5E0B63B1CA0DDB5217C9301E05157F
{
public:
	// Newtonsoft.Json.Linq.JsonPath.QueryExpression Newtonsoft.Json.Linq.JsonPath.QueryScanFilter::Expression
	QueryExpression_tAAC183FFC4E697E5ECD4CEE7D463FB07C8F54221 * ___Expression_0;

public:
	inline static int32_t get_offset_of_Expression_0() { return static_cast<int32_t>(offsetof(QueryScanFilter_tA0457204F988F3944CED5D7DE2620ABC6CEA1FA6, ___Expression_0)); }
	inline QueryExpression_tAAC183FFC4E697E5ECD4CEE7D463FB07C8F54221 * get_Expression_0() const { return ___Expression_0; }
	inline QueryExpression_tAAC183FFC4E697E5ECD4CEE7D463FB07C8F54221 ** get_address_of_Expression_0() { return &___Expression_0; }
	inline void set_Expression_0(QueryExpression_tAAC183FFC4E697E5ECD4CEE7D463FB07C8F54221 * value)
	{
		___Expression_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Expression_0), (void*)value);
	}
};


// Newtonsoft.Json.Linq.JsonPath.ScanFilter
struct ScanFilter_tEAA0D66F60DC218A0AAE2CBEEFCEE961767F79D1  : public PathFilter_t26C6A1D29F5E0B63B1CA0DDB5217C9301E05157F
{
public:
	// System.String Newtonsoft.Json.Linq.JsonPath.ScanFilter::Name
	String_t* ___Name_0;

public:
	inline static int32_t get_offset_of_Name_0() { return static_cast<int32_t>(offsetof(ScanFilter_tEAA0D66F60DC218A0AAE2CBEEFCEE961767F79D1, ___Name_0)); }
	inline String_t* get_Name_0() const { return ___Name_0; }
	inline String_t** get_address_of_Name_0() { return &___Name_0; }
	inline void set_Name_0(String_t* value)
	{
		___Name_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Name_0), (void*)value);
	}
};


// Newtonsoft.Json.Linq.JsonPath.ScanMultipleFilter
struct ScanMultipleFilter_tEEDD4258E063FF8636D579BAD3E8CA5AA084760A  : public PathFilter_t26C6A1D29F5E0B63B1CA0DDB5217C9301E05157F
{
public:
	// System.Collections.Generic.List`1<System.String> Newtonsoft.Json.Linq.JsonPath.ScanMultipleFilter::_names
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ____names_0;

public:
	inline static int32_t get_offset_of__names_0() { return static_cast<int32_t>(offsetof(ScanMultipleFilter_tEEDD4258E063FF8636D579BAD3E8CA5AA084760A, ____names_0)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get__names_0() const { return ____names_0; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of__names_0() { return &____names_0; }
	inline void set__names_0(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		____names_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____names_0), (void*)value);
	}
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// Newtonsoft.Json.Linq.JObject/JObjectDynamicProxy
struct JObjectDynamicProxy_t188CA0FDD34F134B1C56CFD119F8E4A5FC5E1B97  : public DynamicProxy_1_tB32CF5596CE0637E7BE5E5379204E849C6E6691C
{
public:

public:
};


// Newtonsoft.Json.Linq.JValue/JValueDynamicProxy
struct JValueDynamicProxy_t7E019E739D6C033ACFD9DB0B20CCDA560A9EDA6F  : public DynamicProxy_1_t586F0C5EE6DD22DC480272A4B3ACDFF9215CB1A0
{
public:

public:
};


// System.Reflection.BindingFlags
struct BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Reflection.ConstructorInfo
struct ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B  : public MethodBase_t
{
public:

public:
};

struct ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B_StaticFields
{
public:
	// System.String System.Reflection.ConstructorInfo::ConstructorName
	String_t* ___ConstructorName_0;
	// System.String System.Reflection.ConstructorInfo::TypeConstructorName
	String_t* ___TypeConstructorName_1;

public:
	inline static int32_t get_offset_of_ConstructorName_0() { return static_cast<int32_t>(offsetof(ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B_StaticFields, ___ConstructorName_0)); }
	inline String_t* get_ConstructorName_0() const { return ___ConstructorName_0; }
	inline String_t** get_address_of_ConstructorName_0() { return &___ConstructorName_0; }
	inline void set_ConstructorName_0(String_t* value)
	{
		___ConstructorName_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ConstructorName_0), (void*)value);
	}

	inline static int32_t get_offset_of_TypeConstructorName_1() { return static_cast<int32_t>(offsetof(ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B_StaticFields, ___TypeConstructorName_1)); }
	inline String_t* get_TypeConstructorName_1() const { return ___TypeConstructorName_1; }
	inline String_t** get_address_of_TypeConstructorName_1() { return &___TypeConstructorName_1; }
	inline void set_TypeConstructorName_1(String_t* value)
	{
		___TypeConstructorName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TypeConstructorName_1), (void*)value);
	}
};


// Newtonsoft.Json.DefaultValueHandling
struct DefaultValueHandling_t4CB37AFF490D2BFD6233BC82F164989C805BF0E6 
{
public:
	// System.Int32 Newtonsoft.Json.DefaultValueHandling::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DefaultValueHandling_t4CB37AFF490D2BFD6233BC82F164989C805BF0E6, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Delegate
struct Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// Newtonsoft.Json.Linq.JObject
struct JObject_t3ABEFC12B3B74EC00B7032CD365434C91B076FDE  : public JContainer_t38DD4DF522660749764609AA408DFD0575BABE3F
{
public:
	// Newtonsoft.Json.Linq.JPropertyKeyedCollection Newtonsoft.Json.Linq.JObject::_properties
	JPropertyKeyedCollection_t53866F50942B265AFC54305B4437D5B9173FDF48 * ____properties_18;
	// System.ComponentModel.PropertyChangedEventHandler Newtonsoft.Json.Linq.JObject::PropertyChanged
	PropertyChangedEventHandler_t094CCD63C952DCD4E1ED794434160679C28A8E99 * ___PropertyChanged_19;
	// System.ComponentModel.PropertyChangingEventHandler Newtonsoft.Json.Linq.JObject::PropertyChanging
	PropertyChangingEventHandler_t5EA6F6EAA933D35C0AAD9D347A3BD53D343E4C22 * ___PropertyChanging_20;

public:
	inline static int32_t get_offset_of__properties_18() { return static_cast<int32_t>(offsetof(JObject_t3ABEFC12B3B74EC00B7032CD365434C91B076FDE, ____properties_18)); }
	inline JPropertyKeyedCollection_t53866F50942B265AFC54305B4437D5B9173FDF48 * get__properties_18() const { return ____properties_18; }
	inline JPropertyKeyedCollection_t53866F50942B265AFC54305B4437D5B9173FDF48 ** get_address_of__properties_18() { return &____properties_18; }
	inline void set__properties_18(JPropertyKeyedCollection_t53866F50942B265AFC54305B4437D5B9173FDF48 * value)
	{
		____properties_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____properties_18), (void*)value);
	}

	inline static int32_t get_offset_of_PropertyChanged_19() { return static_cast<int32_t>(offsetof(JObject_t3ABEFC12B3B74EC00B7032CD365434C91B076FDE, ___PropertyChanged_19)); }
	inline PropertyChangedEventHandler_t094CCD63C952DCD4E1ED794434160679C28A8E99 * get_PropertyChanged_19() const { return ___PropertyChanged_19; }
	inline PropertyChangedEventHandler_t094CCD63C952DCD4E1ED794434160679C28A8E99 ** get_address_of_PropertyChanged_19() { return &___PropertyChanged_19; }
	inline void set_PropertyChanged_19(PropertyChangedEventHandler_t094CCD63C952DCD4E1ED794434160679C28A8E99 * value)
	{
		___PropertyChanged_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PropertyChanged_19), (void*)value);
	}

	inline static int32_t get_offset_of_PropertyChanging_20() { return static_cast<int32_t>(offsetof(JObject_t3ABEFC12B3B74EC00B7032CD365434C91B076FDE, ___PropertyChanging_20)); }
	inline PropertyChangingEventHandler_t5EA6F6EAA933D35C0AAD9D347A3BD53D343E4C22 * get_PropertyChanging_20() const { return ___PropertyChanging_20; }
	inline PropertyChangingEventHandler_t5EA6F6EAA933D35C0AAD9D347A3BD53D343E4C22 ** get_address_of_PropertyChanging_20() { return &___PropertyChanging_20; }
	inline void set_PropertyChanging_20(PropertyChangingEventHandler_t5EA6F6EAA933D35C0AAD9D347A3BD53D343E4C22 * value)
	{
		___PropertyChanging_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PropertyChanging_20), (void*)value);
	}
};


// Newtonsoft.Json.Linq.JProperty
struct JProperty_tF9DA59F1EB857859581CDEE663A2A0040D5A9A53  : public JContainer_t38DD4DF522660749764609AA408DFD0575BABE3F
{
public:
	// Newtonsoft.Json.Linq.JProperty/JPropertyList Newtonsoft.Json.Linq.JProperty::_content
	JPropertyList_tE978701AA0E5EA3DE317E8ABF5EC0C7CE5E713DB * ____content_18;
	// System.String Newtonsoft.Json.Linq.JProperty::_name
	String_t* ____name_19;

public:
	inline static int32_t get_offset_of__content_18() { return static_cast<int32_t>(offsetof(JProperty_tF9DA59F1EB857859581CDEE663A2A0040D5A9A53, ____content_18)); }
	inline JPropertyList_tE978701AA0E5EA3DE317E8ABF5EC0C7CE5E713DB * get__content_18() const { return ____content_18; }
	inline JPropertyList_tE978701AA0E5EA3DE317E8ABF5EC0C7CE5E713DB ** get_address_of__content_18() { return &____content_18; }
	inline void set__content_18(JPropertyList_tE978701AA0E5EA3DE317E8ABF5EC0C7CE5E713DB * value)
	{
		____content_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____content_18), (void*)value);
	}

	inline static int32_t get_offset_of__name_19() { return static_cast<int32_t>(offsetof(JProperty_tF9DA59F1EB857859581CDEE663A2A0040D5A9A53, ____name_19)); }
	inline String_t* get__name_19() const { return ____name_19; }
	inline String_t** get_address_of__name_19() { return &____name_19; }
	inline void set__name_19(String_t* value)
	{
		____name_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____name_19), (void*)value);
	}
};


// System.Reflection.MethodInfo
struct MethodInfo_t  : public MethodBase_t
{
public:

public:
};


// Newtonsoft.Json.NullValueHandling
struct NullValueHandling_tC337A7AC78A65336FE3006CC1B1F9AD0C57E7184 
{
public:
	// System.Int32 Newtonsoft.Json.NullValueHandling::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NullValueHandling_tC337A7AC78A65336FE3006CC1B1F9AD0C57E7184, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Newtonsoft.Json.ObjectCreationHandling
struct ObjectCreationHandling_tE17D706CF6AD27C1FF698B00F0406F0BDDF8315F 
{
public:
	// System.Int32 Newtonsoft.Json.ObjectCreationHandling::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ObjectCreationHandling_tE17D706CF6AD27C1FF698B00F0406F0BDDF8315F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Reflection.ParameterAttributes
struct ParameterAttributes_t79BD378DEC3F187D9773B9A4EDE573866E930218 
{
public:
	// System.Int32 System.Reflection.ParameterAttributes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ParameterAttributes_t79BD378DEC3F187D9773B9A4EDE573866E930218, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Newtonsoft.Json.Linq.JsonPath.QueryOperator
struct QueryOperator_t21116EAC42DCC6D4F53EB7833C9D5B482FE8FD18 
{
public:
	// System.Int32 Newtonsoft.Json.Linq.JsonPath.QueryOperator::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(QueryOperator_t21116EAC42DCC6D4F53EB7833C9D5B482FE8FD18, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Newtonsoft.Json.ReferenceLoopHandling
struct ReferenceLoopHandling_tB0B08C8A115CDD8D710801895C495E3FA4D7CE00 
{
public:
	// System.Int32 Newtonsoft.Json.ReferenceLoopHandling::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ReferenceLoopHandling_tB0B08C8A115CDD8D710801895C495E3FA4D7CE00, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Newtonsoft.Json.Required
struct Required_t57BF5D61EFB264215CEF5F62454E396F2690B194 
{
public:
	// System.Int32 Newtonsoft.Json.Required::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Required_t57BF5D61EFB264215CEF5F62454E396F2690B194, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.RuntimeTypeHandle
struct RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// System.Runtime.Serialization.StreamingContextStates
struct StreamingContextStates_tF4C7FE6D6121BD4C67699869C8269A60B36B42C3 
{
public:
	// System.Int32 System.Runtime.Serialization.StreamingContextStates::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StreamingContextStates_tF4C7FE6D6121BD4C67699869C8269A60B36B42C3, ___value___2)); }
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


// Newtonsoft.Json.TypeNameHandling
struct TypeNameHandling_t954ABAEB6D5861AC52D40D7F046BEAB96305E958 
{
public:
	// System.Int32 Newtonsoft.Json.TypeNameHandling::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TypeNameHandling_t954ABAEB6D5861AC52D40D7F046BEAB96305E958, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Newtonsoft.Json.Linq.JObject/<GetEnumerator>d__63
struct U3CGetEnumeratorU3Ed__63_tE454846B9514A03E19A8106BCD94046B4D4A832D  : public RuntimeObject
{
public:
	// System.Int32 Newtonsoft.Json.Linq.JObject/<GetEnumerator>d__63::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Collections.Generic.KeyValuePair`2<System.String,Newtonsoft.Json.Linq.JToken> Newtonsoft.Json.Linq.JObject/<GetEnumerator>d__63::<>2__current
	KeyValuePair_2_t9967CE3AA01B66D662E4BE42AC4A1AC4FA262636  ___U3CU3E2__current_1;
	// Newtonsoft.Json.Linq.JObject Newtonsoft.Json.Linq.JObject/<GetEnumerator>d__63::<>4__this
	JObject_t3ABEFC12B3B74EC00B7032CD365434C91B076FDE * ___U3CU3E4__this_2;
	// System.Collections.Generic.IEnumerator`1<Newtonsoft.Json.Linq.JToken> Newtonsoft.Json.Linq.JObject/<GetEnumerator>d__63::<>7__wrap1
	RuntimeObject* ___U3CU3E7__wrap1_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__63_tE454846B9514A03E19A8106BCD94046B4D4A832D, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__63_tE454846B9514A03E19A8106BCD94046B4D4A832D, ___U3CU3E2__current_1)); }
	inline KeyValuePair_2_t9967CE3AA01B66D662E4BE42AC4A1AC4FA262636  get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline KeyValuePair_2_t9967CE3AA01B66D662E4BE42AC4A1AC4FA262636 * get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(KeyValuePair_2_t9967CE3AA01B66D662E4BE42AC4A1AC4FA262636  value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E2__current_1))->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E2__current_1))->___value_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__63_tE454846B9514A03E19A8106BCD94046B4D4A832D, ___U3CU3E4__this_2)); }
	inline JObject_t3ABEFC12B3B74EC00B7032CD365434C91B076FDE * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline JObject_t3ABEFC12B3B74EC00B7032CD365434C91B076FDE ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(JObject_t3ABEFC12B3B74EC00B7032CD365434C91B076FDE * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap1_3() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__63_tE454846B9514A03E19A8106BCD94046B4D4A832D, ___U3CU3E7__wrap1_3)); }
	inline RuntimeObject* get_U3CU3E7__wrap1_3() const { return ___U3CU3E7__wrap1_3; }
	inline RuntimeObject** get_address_of_U3CU3E7__wrap1_3() { return &___U3CU3E7__wrap1_3; }
	inline void set_U3CU3E7__wrap1_3(RuntimeObject* value)
	{
		___U3CU3E7__wrap1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E7__wrap1_3), (void*)value);
	}
};


// Newtonsoft.Json.JsonReader/State
struct State_t23187E9D7D78D574763CDD5905D7347EC343455C 
{
public:
	// System.Int32 Newtonsoft.Json.JsonReader/State::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(State_t23187E9D7D78D574763CDD5905D7347EC343455C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Newtonsoft.Json.Serialization.JsonSerializerInternalReader/PropertyPresence
struct PropertyPresence_tB2A5974B7CE78637568DF341F634D035A69FF7FC 
{
public:
	// System.Int32 Newtonsoft.Json.Serialization.JsonSerializerInternalReader/PropertyPresence::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PropertyPresence_tB2A5974B7CE78637568DF341F634D035A69FF7FC, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Newtonsoft.Json.JsonWriter/State
struct State_tF367B248A8360C478E31219BC66EE9C7CEF03CA0 
{
public:
	// System.Int32 Newtonsoft.Json.JsonWriter/State::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(State_tF367B248A8360C478E31219BC66EE9C7CEF03CA0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Newtonsoft.Json.Linq.JsonPath.ScanMultipleFilter/<ExecuteFilter>d__2
struct U3CExecuteFilterU3Ed__2_t67C36B546073E9FB034A92E9CDFC8558C33E597C  : public RuntimeObject
{
public:
	// System.Int32 Newtonsoft.Json.Linq.JsonPath.ScanMultipleFilter/<ExecuteFilter>d__2::<>1__state
	int32_t ___U3CU3E1__state_0;
	// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JsonPath.ScanMultipleFilter/<ExecuteFilter>d__2::<>2__current
	JToken_t29F54EE35244E7B362E5D54E9517FCD2B0DBE359 * ___U3CU3E2__current_1;
	// System.Int32 Newtonsoft.Json.Linq.JsonPath.ScanMultipleFilter/<ExecuteFilter>d__2::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// System.Collections.Generic.IEnumerable`1<Newtonsoft.Json.Linq.JToken> Newtonsoft.Json.Linq.JsonPath.ScanMultipleFilter/<ExecuteFilter>d__2::current
	RuntimeObject* ___current_3;
	// System.Collections.Generic.IEnumerable`1<Newtonsoft.Json.Linq.JToken> Newtonsoft.Json.Linq.JsonPath.ScanMultipleFilter/<ExecuteFilter>d__2::<>3__current
	RuntimeObject* ___U3CU3E3__current_4;
	// Newtonsoft.Json.Linq.JsonPath.ScanMultipleFilter Newtonsoft.Json.Linq.JsonPath.ScanMultipleFilter/<ExecuteFilter>d__2::<>4__this
	ScanMultipleFilter_tEEDD4258E063FF8636D579BAD3E8CA5AA084760A * ___U3CU3E4__this_5;
	// System.Collections.Generic.IEnumerator`1<Newtonsoft.Json.Linq.JToken> Newtonsoft.Json.Linq.JsonPath.ScanMultipleFilter/<ExecuteFilter>d__2::<>7__wrap1
	RuntimeObject* ___U3CU3E7__wrap1_6;
	// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JsonPath.ScanMultipleFilter/<ExecuteFilter>d__2::<c>5__3
	JToken_t29F54EE35244E7B362E5D54E9517FCD2B0DBE359 * ___U3CcU3E5__3_7;
	// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JsonPath.ScanMultipleFilter/<ExecuteFilter>d__2::<value>5__4
	JToken_t29F54EE35244E7B362E5D54E9517FCD2B0DBE359 * ___U3CvalueU3E5__4_8;
	// Newtonsoft.Json.Linq.JProperty Newtonsoft.Json.Linq.JsonPath.ScanMultipleFilter/<ExecuteFilter>d__2::<property>5__5
	JProperty_tF9DA59F1EB857859581CDEE663A2A0040D5A9A53 * ___U3CpropertyU3E5__5_9;
	// System.Collections.Generic.List`1/Enumerator<System.String> Newtonsoft.Json.Linq.JsonPath.ScanMultipleFilter/<ExecuteFilter>d__2::<>7__wrap5
	Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B  ___U3CU3E7__wrap5_10;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CExecuteFilterU3Ed__2_t67C36B546073E9FB034A92E9CDFC8558C33E597C, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CExecuteFilterU3Ed__2_t67C36B546073E9FB034A92E9CDFC8558C33E597C, ___U3CU3E2__current_1)); }
	inline JToken_t29F54EE35244E7B362E5D54E9517FCD2B0DBE359 * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline JToken_t29F54EE35244E7B362E5D54E9517FCD2B0DBE359 ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(JToken_t29F54EE35244E7B362E5D54E9517FCD2B0DBE359 * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3El__initialThreadId_2() { return static_cast<int32_t>(offsetof(U3CExecuteFilterU3Ed__2_t67C36B546073E9FB034A92E9CDFC8558C33E597C, ___U3CU3El__initialThreadId_2)); }
	inline int32_t get_U3CU3El__initialThreadId_2() const { return ___U3CU3El__initialThreadId_2; }
	inline int32_t* get_address_of_U3CU3El__initialThreadId_2() { return &___U3CU3El__initialThreadId_2; }
	inline void set_U3CU3El__initialThreadId_2(int32_t value)
	{
		___U3CU3El__initialThreadId_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(U3CExecuteFilterU3Ed__2_t67C36B546073E9FB034A92E9CDFC8558C33E597C, ___current_3)); }
	inline RuntimeObject* get_current_3() const { return ___current_3; }
	inline RuntimeObject** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject* value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E3__current_4() { return static_cast<int32_t>(offsetof(U3CExecuteFilterU3Ed__2_t67C36B546073E9FB034A92E9CDFC8558C33E597C, ___U3CU3E3__current_4)); }
	inline RuntimeObject* get_U3CU3E3__current_4() const { return ___U3CU3E3__current_4; }
	inline RuntimeObject** get_address_of_U3CU3E3__current_4() { return &___U3CU3E3__current_4; }
	inline void set_U3CU3E3__current_4(RuntimeObject* value)
	{
		___U3CU3E3__current_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E3__current_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_5() { return static_cast<int32_t>(offsetof(U3CExecuteFilterU3Ed__2_t67C36B546073E9FB034A92E9CDFC8558C33E597C, ___U3CU3E4__this_5)); }
	inline ScanMultipleFilter_tEEDD4258E063FF8636D579BAD3E8CA5AA084760A * get_U3CU3E4__this_5() const { return ___U3CU3E4__this_5; }
	inline ScanMultipleFilter_tEEDD4258E063FF8636D579BAD3E8CA5AA084760A ** get_address_of_U3CU3E4__this_5() { return &___U3CU3E4__this_5; }
	inline void set_U3CU3E4__this_5(ScanMultipleFilter_tEEDD4258E063FF8636D579BAD3E8CA5AA084760A * value)
	{
		___U3CU3E4__this_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap1_6() { return static_cast<int32_t>(offsetof(U3CExecuteFilterU3Ed__2_t67C36B546073E9FB034A92E9CDFC8558C33E597C, ___U3CU3E7__wrap1_6)); }
	inline RuntimeObject* get_U3CU3E7__wrap1_6() const { return ___U3CU3E7__wrap1_6; }
	inline RuntimeObject** get_address_of_U3CU3E7__wrap1_6() { return &___U3CU3E7__wrap1_6; }
	inline void set_U3CU3E7__wrap1_6(RuntimeObject* value)
	{
		___U3CU3E7__wrap1_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E7__wrap1_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CcU3E5__3_7() { return static_cast<int32_t>(offsetof(U3CExecuteFilterU3Ed__2_t67C36B546073E9FB034A92E9CDFC8558C33E597C, ___U3CcU3E5__3_7)); }
	inline JToken_t29F54EE35244E7B362E5D54E9517FCD2B0DBE359 * get_U3CcU3E5__3_7() const { return ___U3CcU3E5__3_7; }
	inline JToken_t29F54EE35244E7B362E5D54E9517FCD2B0DBE359 ** get_address_of_U3CcU3E5__3_7() { return &___U3CcU3E5__3_7; }
	inline void set_U3CcU3E5__3_7(JToken_t29F54EE35244E7B362E5D54E9517FCD2B0DBE359 * value)
	{
		___U3CcU3E5__3_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CcU3E5__3_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CvalueU3E5__4_8() { return static_cast<int32_t>(offsetof(U3CExecuteFilterU3Ed__2_t67C36B546073E9FB034A92E9CDFC8558C33E597C, ___U3CvalueU3E5__4_8)); }
	inline JToken_t29F54EE35244E7B362E5D54E9517FCD2B0DBE359 * get_U3CvalueU3E5__4_8() const { return ___U3CvalueU3E5__4_8; }
	inline JToken_t29F54EE35244E7B362E5D54E9517FCD2B0DBE359 ** get_address_of_U3CvalueU3E5__4_8() { return &___U3CvalueU3E5__4_8; }
	inline void set_U3CvalueU3E5__4_8(JToken_t29F54EE35244E7B362E5D54E9517FCD2B0DBE359 * value)
	{
		___U3CvalueU3E5__4_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CvalueU3E5__4_8), (void*)value);
	}

	inline static int32_t get_offset_of_U3CpropertyU3E5__5_9() { return static_cast<int32_t>(offsetof(U3CExecuteFilterU3Ed__2_t67C36B546073E9FB034A92E9CDFC8558C33E597C, ___U3CpropertyU3E5__5_9)); }
	inline JProperty_tF9DA59F1EB857859581CDEE663A2A0040D5A9A53 * get_U3CpropertyU3E5__5_9() const { return ___U3CpropertyU3E5__5_9; }
	inline JProperty_tF9DA59F1EB857859581CDEE663A2A0040D5A9A53 ** get_address_of_U3CpropertyU3E5__5_9() { return &___U3CpropertyU3E5__5_9; }
	inline void set_U3CpropertyU3E5__5_9(JProperty_tF9DA59F1EB857859581CDEE663A2A0040D5A9A53 * value)
	{
		___U3CpropertyU3E5__5_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CpropertyU3E5__5_9), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap5_10() { return static_cast<int32_t>(offsetof(U3CExecuteFilterU3Ed__2_t67C36B546073E9FB034A92E9CDFC8558C33E597C, ___U3CU3E7__wrap5_10)); }
	inline Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B  get_U3CU3E7__wrap5_10() const { return ___U3CU3E7__wrap5_10; }
	inline Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B * get_address_of_U3CU3E7__wrap5_10() { return &___U3CU3E7__wrap5_10; }
	inline void set_U3CU3E7__wrap5_10(Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B  value)
	{
		___U3CU3E7__wrap5_10 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E7__wrap5_10))->___list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E7__wrap5_10))->___current_3), (void*)NULL);
		#endif
	}
};


// System.Nullable`1<Newtonsoft.Json.DefaultValueHandling>
struct Nullable_1_tF28EA44E419006C6F966113CCC0D0D808BF05B88 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_tF28EA44E419006C6F966113CCC0D0D808BF05B88, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_tF28EA44E419006C6F966113CCC0D0D808BF05B88, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<Newtonsoft.Json.NullValueHandling>
struct Nullable_1_t8BDC96DE48D16174D163894D4BD81E90BF553B8A 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t8BDC96DE48D16174D163894D4BD81E90BF553B8A, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t8BDC96DE48D16174D163894D4BD81E90BF553B8A, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<Newtonsoft.Json.ObjectCreationHandling>
struct Nullable_1_t6F9818B0A1E9A545E0C732692FA46B1250FCC000 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t6F9818B0A1E9A545E0C732692FA46B1250FCC000, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t6F9818B0A1E9A545E0C732692FA46B1250FCC000, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<Newtonsoft.Json.ReferenceLoopHandling>
struct Nullable_1_t555376AAF3F02ABE7C370BE68B2758D9189AC7BA 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t555376AAF3F02ABE7C370BE68B2758D9189AC7BA, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t555376AAF3F02ABE7C370BE68B2758D9189AC7BA, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<Newtonsoft.Json.Required>
struct Nullable_1_tA7489ADCB7554FA1CF3591C24A1BB37116390DDF 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_tA7489ADCB7554FA1CF3591C24A1BB37116390DDF, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_tA7489ADCB7554FA1CF3591C24A1BB37116390DDF, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<System.TimeSpan>
struct Nullable_1_tCFBE5FE1DB8A702D620FFC81D556C8E8AD5B871F 
{
public:
	// T System.Nullable`1::value
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_tCFBE5FE1DB8A702D620FFC81D556C8E8AD5B871F, ___value_0)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_value_0() const { return ___value_0; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_tCFBE5FE1DB8A702D620FFC81D556C8E8AD5B871F, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<Newtonsoft.Json.TypeNameHandling>
struct Nullable_1_t1AC180DB7FD26E7C3BD95ED012B1C7B00BAA7D49 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t1AC180DB7FD26E7C3BD95ED012B1C7B00BAA7D49, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t1AC180DB7FD26E7C3BD95ED012B1C7B00BAA7D49, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<Newtonsoft.Json.Serialization.JsonSerializerInternalReader/PropertyPresence>
struct Nullable_1_t42A1F84DAE396A3100B725A3BEC70034CAB98F9B 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t42A1F84DAE396A3100B725A3BEC70034CAB98F9B, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t42A1F84DAE396A3100B725A3BEC70034CAB98F9B, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// Newtonsoft.Json.JsonException
struct JsonException_t97C31FBFB6F0EFC40669CFF7E1F9E1FE6C7A54AD  : public Exception_t
{
public:

public:
};


// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// System.Reflection.ParameterInfo
struct ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7  : public RuntimeObject
{
public:
	// System.Type System.Reflection.ParameterInfo::ClassImpl
	Type_t * ___ClassImpl_0;
	// System.Object System.Reflection.ParameterInfo::DefaultValueImpl
	RuntimeObject * ___DefaultValueImpl_1;
	// System.Reflection.MemberInfo System.Reflection.ParameterInfo::MemberImpl
	MemberInfo_t * ___MemberImpl_2;
	// System.String System.Reflection.ParameterInfo::NameImpl
	String_t* ___NameImpl_3;
	// System.Int32 System.Reflection.ParameterInfo::PositionImpl
	int32_t ___PositionImpl_4;
	// System.Reflection.ParameterAttributes System.Reflection.ParameterInfo::AttrsImpl
	int32_t ___AttrsImpl_5;
	// System.Runtime.InteropServices.MarshalAsAttribute System.Reflection.ParameterInfo::marshalAs
	MarshalAsAttribute_t1689F84A11C34D0F35491C8F0DA4421467B6EFE6 * ___marshalAs_6;

public:
	inline static int32_t get_offset_of_ClassImpl_0() { return static_cast<int32_t>(offsetof(ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7, ___ClassImpl_0)); }
	inline Type_t * get_ClassImpl_0() const { return ___ClassImpl_0; }
	inline Type_t ** get_address_of_ClassImpl_0() { return &___ClassImpl_0; }
	inline void set_ClassImpl_0(Type_t * value)
	{
		___ClassImpl_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ClassImpl_0), (void*)value);
	}

	inline static int32_t get_offset_of_DefaultValueImpl_1() { return static_cast<int32_t>(offsetof(ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7, ___DefaultValueImpl_1)); }
	inline RuntimeObject * get_DefaultValueImpl_1() const { return ___DefaultValueImpl_1; }
	inline RuntimeObject ** get_address_of_DefaultValueImpl_1() { return &___DefaultValueImpl_1; }
	inline void set_DefaultValueImpl_1(RuntimeObject * value)
	{
		___DefaultValueImpl_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DefaultValueImpl_1), (void*)value);
	}

	inline static int32_t get_offset_of_MemberImpl_2() { return static_cast<int32_t>(offsetof(ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7, ___MemberImpl_2)); }
	inline MemberInfo_t * get_MemberImpl_2() const { return ___MemberImpl_2; }
	inline MemberInfo_t ** get_address_of_MemberImpl_2() { return &___MemberImpl_2; }
	inline void set_MemberImpl_2(MemberInfo_t * value)
	{
		___MemberImpl_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MemberImpl_2), (void*)value);
	}

	inline static int32_t get_offset_of_NameImpl_3() { return static_cast<int32_t>(offsetof(ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7, ___NameImpl_3)); }
	inline String_t* get_NameImpl_3() const { return ___NameImpl_3; }
	inline String_t** get_address_of_NameImpl_3() { return &___NameImpl_3; }
	inline void set_NameImpl_3(String_t* value)
	{
		___NameImpl_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NameImpl_3), (void*)value);
	}

	inline static int32_t get_offset_of_PositionImpl_4() { return static_cast<int32_t>(offsetof(ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7, ___PositionImpl_4)); }
	inline int32_t get_PositionImpl_4() const { return ___PositionImpl_4; }
	inline int32_t* get_address_of_PositionImpl_4() { return &___PositionImpl_4; }
	inline void set_PositionImpl_4(int32_t value)
	{
		___PositionImpl_4 = value;
	}

	inline static int32_t get_offset_of_AttrsImpl_5() { return static_cast<int32_t>(offsetof(ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7, ___AttrsImpl_5)); }
	inline int32_t get_AttrsImpl_5() const { return ___AttrsImpl_5; }
	inline int32_t* get_address_of_AttrsImpl_5() { return &___AttrsImpl_5; }
	inline void set_AttrsImpl_5(int32_t value)
	{
		___AttrsImpl_5 = value;
	}

	inline static int32_t get_offset_of_marshalAs_6() { return static_cast<int32_t>(offsetof(ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7, ___marshalAs_6)); }
	inline MarshalAsAttribute_t1689F84A11C34D0F35491C8F0DA4421467B6EFE6 * get_marshalAs_6() const { return ___marshalAs_6; }
	inline MarshalAsAttribute_t1689F84A11C34D0F35491C8F0DA4421467B6EFE6 ** get_address_of_marshalAs_6() { return &___marshalAs_6; }
	inline void set_marshalAs_6(MarshalAsAttribute_t1689F84A11C34D0F35491C8F0DA4421467B6EFE6 * value)
	{
		___marshalAs_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___marshalAs_6), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Reflection.ParameterInfo
struct ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7_marshaled_pinvoke
{
	Type_t * ___ClassImpl_0;
	Il2CppIUnknown* ___DefaultValueImpl_1;
	MemberInfo_t * ___MemberImpl_2;
	char* ___NameImpl_3;
	int32_t ___PositionImpl_4;
	int32_t ___AttrsImpl_5;
	MarshalAsAttribute_t1689F84A11C34D0F35491C8F0DA4421467B6EFE6 * ___marshalAs_6;
};
// Native definition for COM marshalling of System.Reflection.ParameterInfo
struct ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7_marshaled_com
{
	Type_t * ___ClassImpl_0;
	Il2CppIUnknown* ___DefaultValueImpl_1;
	MemberInfo_t * ___MemberImpl_2;
	Il2CppChar* ___NameImpl_3;
	int32_t ___PositionImpl_4;
	int32_t ___AttrsImpl_5;
	MarshalAsAttribute_t1689F84A11C34D0F35491C8F0DA4421467B6EFE6 * ___marshalAs_6;
};

// Newtonsoft.Json.Linq.JsonPath.QueryExpression
struct QueryExpression_tAAC183FFC4E697E5ECD4CEE7D463FB07C8F54221  : public RuntimeObject
{
public:
	// Newtonsoft.Json.Linq.JsonPath.QueryOperator Newtonsoft.Json.Linq.JsonPath.QueryExpression::Operator
	int32_t ___Operator_0;

public:
	inline static int32_t get_offset_of_Operator_0() { return static_cast<int32_t>(offsetof(QueryExpression_tAAC183FFC4E697E5ECD4CEE7D463FB07C8F54221, ___Operator_0)); }
	inline int32_t get_Operator_0() const { return ___Operator_0; }
	inline int32_t* get_address_of_Operator_0() { return &___Operator_0; }
	inline void set_Operator_0(int32_t value)
	{
		___Operator_0 = value;
	}
};


// System.Runtime.Serialization.StreamingContext
struct StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505 
{
public:
	// System.Object System.Runtime.Serialization.StreamingContext::m_additionalContext
	RuntimeObject * ___m_additionalContext_0;
	// System.Runtime.Serialization.StreamingContextStates System.Runtime.Serialization.StreamingContext::m_state
	int32_t ___m_state_1;

public:
	inline static int32_t get_offset_of_m_additionalContext_0() { return static_cast<int32_t>(offsetof(StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505, ___m_additionalContext_0)); }
	inline RuntimeObject * get_m_additionalContext_0() const { return ___m_additionalContext_0; }
	inline RuntimeObject ** get_address_of_m_additionalContext_0() { return &___m_additionalContext_0; }
	inline void set_m_additionalContext_0(RuntimeObject * value)
	{
		___m_additionalContext_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_additionalContext_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_state_1() { return static_cast<int32_t>(offsetof(StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505, ___m_state_1)); }
	inline int32_t get_m_state_1() const { return ___m_state_1; }
	inline int32_t* get_address_of_m_state_1() { return &___m_state_1; }
	inline void set_m_state_1(int32_t value)
	{
		___m_state_1 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505_marshaled_pinvoke
{
	Il2CppIUnknown* ___m_additionalContext_0;
	int32_t ___m_state_1;
};
// Native definition for COM marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505_marshaled_com
{
	Il2CppIUnknown* ___m_additionalContext_0;
	int32_t ___m_state_1;
};

// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// System.Type
struct Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterNameIgnoreCase_2), (void*)value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Missing_3), (void*)value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};


// System.Func`1<System.Object>
struct Func_1_t807CEE610086E24A0167BAA97A64062016E09D49  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<Newtonsoft.Json.Linq.JProperty,System.String>
struct Func_2_tA651E2F99CED91C9590800FA47A2E0E3D0BFE402  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.Object,System.Type>
struct Func_2_t1BAD9F1A22B63A9F2F0380E7FB5D5BB7FED704BF  : public MulticastDelegate_t
{
public:

public:
};


// Newtonsoft.Json.Utilities.MethodCall`2<System.Object,System.Object>
struct MethodCall_2_t5E28B9DEE3B3A32CA955A9F5A149CC91CE1F9C6F  : public MulticastDelegate_t
{
public:

public:
};


// Newtonsoft.Json.Serialization.ObjectConstructor`1<System.Object>
struct ObjectConstructor_1_t3B1FEEAAE751376A314DA00A745060F2E5C298BA  : public MulticastDelegate_t
{
public:

public:
};


// System.IndexOutOfRangeException
struct IndexOutOfRangeException_tDC9EF7A0346CE39E54DA1083F07BE6DFC3CE2EDD  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// System.InvalidOperationException
struct InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// Newtonsoft.Json.Serialization.JsonProperty
struct JsonProperty_tEC316772CD2F8406C84CDA3EEAD7430ED09055DB  : public RuntimeObject
{
public:
	// System.Nullable`1<Newtonsoft.Json.Required> Newtonsoft.Json.Serialization.JsonProperty::_required
	Nullable_1_tA7489ADCB7554FA1CF3591C24A1BB37116390DDF  ____required_0;
	// System.Boolean Newtonsoft.Json.Serialization.JsonProperty::_hasExplicitDefaultValue
	bool ____hasExplicitDefaultValue_1;
	// System.Object Newtonsoft.Json.Serialization.JsonProperty::_defaultValue
	RuntimeObject * ____defaultValue_2;
	// System.Boolean Newtonsoft.Json.Serialization.JsonProperty::_hasGeneratedDefaultValue
	bool ____hasGeneratedDefaultValue_3;
	// System.String Newtonsoft.Json.Serialization.JsonProperty::_propertyName
	String_t* ____propertyName_4;
	// System.Boolean Newtonsoft.Json.Serialization.JsonProperty::_skipPropertyNameEscape
	bool ____skipPropertyNameEscape_5;
	// System.Type Newtonsoft.Json.Serialization.JsonProperty::_propertyType
	Type_t * ____propertyType_6;
	// Newtonsoft.Json.Serialization.JsonContract Newtonsoft.Json.Serialization.JsonProperty::<PropertyContract>k__BackingField
	JsonContract_t5B4355E6C6A7B78C25BC60D66117133E4CE83954 * ___U3CPropertyContractU3Ek__BackingField_7;
	// System.Type Newtonsoft.Json.Serialization.JsonProperty::<DeclaringType>k__BackingField
	Type_t * ___U3CDeclaringTypeU3Ek__BackingField_8;
	// System.Nullable`1<System.Int32> Newtonsoft.Json.Serialization.JsonProperty::<Order>k__BackingField
	Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  ___U3COrderU3Ek__BackingField_9;
	// System.String Newtonsoft.Json.Serialization.JsonProperty::<UnderlyingName>k__BackingField
	String_t* ___U3CUnderlyingNameU3Ek__BackingField_10;
	// Newtonsoft.Json.Serialization.IValueProvider Newtonsoft.Json.Serialization.JsonProperty::<ValueProvider>k__BackingField
	RuntimeObject* ___U3CValueProviderU3Ek__BackingField_11;
	// Newtonsoft.Json.Serialization.IAttributeProvider Newtonsoft.Json.Serialization.JsonProperty::<AttributeProvider>k__BackingField
	RuntimeObject* ___U3CAttributeProviderU3Ek__BackingField_12;
	// Newtonsoft.Json.JsonConverter Newtonsoft.Json.Serialization.JsonProperty::<Converter>k__BackingField
	JsonConverter_t36490169A72CC2FE84A3114C40D7103DD83826D0 * ___U3CConverterU3Ek__BackingField_13;
	// System.Boolean Newtonsoft.Json.Serialization.JsonProperty::<Ignored>k__BackingField
	bool ___U3CIgnoredU3Ek__BackingField_14;
	// System.Boolean Newtonsoft.Json.Serialization.JsonProperty::<Readable>k__BackingField
	bool ___U3CReadableU3Ek__BackingField_15;
	// System.Boolean Newtonsoft.Json.Serialization.JsonProperty::<Writable>k__BackingField
	bool ___U3CWritableU3Ek__BackingField_16;
	// System.Boolean Newtonsoft.Json.Serialization.JsonProperty::<HasMemberAttribute>k__BackingField
	bool ___U3CHasMemberAttributeU3Ek__BackingField_17;
	// System.Nullable`1<System.Boolean> Newtonsoft.Json.Serialization.JsonProperty::<IsReference>k__BackingField
	Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  ___U3CIsReferenceU3Ek__BackingField_18;
	// System.Nullable`1<Newtonsoft.Json.NullValueHandling> Newtonsoft.Json.Serialization.JsonProperty::<NullValueHandling>k__BackingField
	Nullable_1_t8BDC96DE48D16174D163894D4BD81E90BF553B8A  ___U3CNullValueHandlingU3Ek__BackingField_19;
	// System.Nullable`1<Newtonsoft.Json.DefaultValueHandling> Newtonsoft.Json.Serialization.JsonProperty::<DefaultValueHandling>k__BackingField
	Nullable_1_tF28EA44E419006C6F966113CCC0D0D808BF05B88  ___U3CDefaultValueHandlingU3Ek__BackingField_20;
	// System.Nullable`1<Newtonsoft.Json.ReferenceLoopHandling> Newtonsoft.Json.Serialization.JsonProperty::<ReferenceLoopHandling>k__BackingField
	Nullable_1_t555376AAF3F02ABE7C370BE68B2758D9189AC7BA  ___U3CReferenceLoopHandlingU3Ek__BackingField_21;
	// System.Nullable`1<Newtonsoft.Json.ObjectCreationHandling> Newtonsoft.Json.Serialization.JsonProperty::<ObjectCreationHandling>k__BackingField
	Nullable_1_t6F9818B0A1E9A545E0C732692FA46B1250FCC000  ___U3CObjectCreationHandlingU3Ek__BackingField_22;
	// System.Nullable`1<Newtonsoft.Json.TypeNameHandling> Newtonsoft.Json.Serialization.JsonProperty::<TypeNameHandling>k__BackingField
	Nullable_1_t1AC180DB7FD26E7C3BD95ED012B1C7B00BAA7D49  ___U3CTypeNameHandlingU3Ek__BackingField_23;
	// System.Predicate`1<System.Object> Newtonsoft.Json.Serialization.JsonProperty::<ShouldSerialize>k__BackingField
	Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * ___U3CShouldSerializeU3Ek__BackingField_24;
	// System.Predicate`1<System.Object> Newtonsoft.Json.Serialization.JsonProperty::<ShouldDeserialize>k__BackingField
	Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * ___U3CShouldDeserializeU3Ek__BackingField_25;
	// System.Predicate`1<System.Object> Newtonsoft.Json.Serialization.JsonProperty::<GetIsSpecified>k__BackingField
	Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * ___U3CGetIsSpecifiedU3Ek__BackingField_26;
	// System.Action`2<System.Object,System.Object> Newtonsoft.Json.Serialization.JsonProperty::<SetIsSpecified>k__BackingField
	Action_2_t4FB8E5660AE634E13BF340904C61FEA9DCE9D52D * ___U3CSetIsSpecifiedU3Ek__BackingField_27;
	// Newtonsoft.Json.JsonConverter Newtonsoft.Json.Serialization.JsonProperty::<ItemConverter>k__BackingField
	JsonConverter_t36490169A72CC2FE84A3114C40D7103DD83826D0 * ___U3CItemConverterU3Ek__BackingField_28;
	// System.Nullable`1<System.Boolean> Newtonsoft.Json.Serialization.JsonProperty::<ItemIsReference>k__BackingField
	Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  ___U3CItemIsReferenceU3Ek__BackingField_29;
	// System.Nullable`1<Newtonsoft.Json.TypeNameHandling> Newtonsoft.Json.Serialization.JsonProperty::<ItemTypeNameHandling>k__BackingField
	Nullable_1_t1AC180DB7FD26E7C3BD95ED012B1C7B00BAA7D49  ___U3CItemTypeNameHandlingU3Ek__BackingField_30;
	// System.Nullable`1<Newtonsoft.Json.ReferenceLoopHandling> Newtonsoft.Json.Serialization.JsonProperty::<ItemReferenceLoopHandling>k__BackingField
	Nullable_1_t555376AAF3F02ABE7C370BE68B2758D9189AC7BA  ___U3CItemReferenceLoopHandlingU3Ek__BackingField_31;

public:
	inline static int32_t get_offset_of__required_0() { return static_cast<int32_t>(offsetof(JsonProperty_tEC316772CD2F8406C84CDA3EEAD7430ED09055DB, ____required_0)); }
	inline Nullable_1_tA7489ADCB7554FA1CF3591C24A1BB37116390DDF  get__required_0() const { return ____required_0; }
	inline Nullable_1_tA7489ADCB7554FA1CF3591C24A1BB37116390DDF * get_address_of__required_0() { return &____required_0; }
	inline void set__required_0(Nullable_1_tA7489ADCB7554FA1CF3591C24A1BB37116390DDF  value)
	{
		____required_0 = value;
	}

	inline static int32_t get_offset_of__hasExplicitDefaultValue_1() { return static_cast<int32_t>(offsetof(JsonProperty_tEC316772CD2F8406C84CDA3EEAD7430ED09055DB, ____hasExplicitDefaultValue_1)); }
	inline bool get__hasExplicitDefaultValue_1() const { return ____hasExplicitDefaultValue_1; }
	inline bool* get_address_of__hasExplicitDefaultValue_1() { return &____hasExplicitDefaultValue_1; }
	inline void set__hasExplicitDefaultValue_1(bool value)
	{
		____hasExplicitDefaultValue_1 = value;
	}

	inline static int32_t get_offset_of__defaultValue_2() { return static_cast<int32_t>(offsetof(JsonProperty_tEC316772CD2F8406C84CDA3EEAD7430ED09055DB, ____defaultValue_2)); }
	inline RuntimeObject * get__defaultValue_2() const { return ____defaultValue_2; }
	inline RuntimeObject ** get_address_of__defaultValue_2() { return &____defaultValue_2; }
	inline void set__defaultValue_2(RuntimeObject * value)
	{
		____defaultValue_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____defaultValue_2), (void*)value);
	}

	inline static int32_t get_offset_of__hasGeneratedDefaultValue_3() { return static_cast<int32_t>(offsetof(JsonProperty_tEC316772CD2F8406C84CDA3EEAD7430ED09055DB, ____hasGeneratedDefaultValue_3)); }
	inline bool get__hasGeneratedDefaultValue_3() const { return ____hasGeneratedDefaultValue_3; }
	inline bool* get_address_of__hasGeneratedDefaultValue_3() { return &____hasGeneratedDefaultValue_3; }
	inline void set__hasGeneratedDefaultValue_3(bool value)
	{
		____hasGeneratedDefaultValue_3 = value;
	}

	inline static int32_t get_offset_of__propertyName_4() { return static_cast<int32_t>(offsetof(JsonProperty_tEC316772CD2F8406C84CDA3EEAD7430ED09055DB, ____propertyName_4)); }
	inline String_t* get__propertyName_4() const { return ____propertyName_4; }
	inline String_t** get_address_of__propertyName_4() { return &____propertyName_4; }
	inline void set__propertyName_4(String_t* value)
	{
		____propertyName_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____propertyName_4), (void*)value);
	}

	inline static int32_t get_offset_of__skipPropertyNameEscape_5() { return static_cast<int32_t>(offsetof(JsonProperty_tEC316772CD2F8406C84CDA3EEAD7430ED09055DB, ____skipPropertyNameEscape_5)); }
	inline bool get__skipPropertyNameEscape_5() const { return ____skipPropertyNameEscape_5; }
	inline bool* get_address_of__skipPropertyNameEscape_5() { return &____skipPropertyNameEscape_5; }
	inline void set__skipPropertyNameEscape_5(bool value)
	{
		____skipPropertyNameEscape_5 = value;
	}

	inline static int32_t get_offset_of__propertyType_6() { return static_cast<int32_t>(offsetof(JsonProperty_tEC316772CD2F8406C84CDA3EEAD7430ED09055DB, ____propertyType_6)); }
	inline Type_t * get__propertyType_6() const { return ____propertyType_6; }
	inline Type_t ** get_address_of__propertyType_6() { return &____propertyType_6; }
	inline void set__propertyType_6(Type_t * value)
	{
		____propertyType_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____propertyType_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CPropertyContractU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(JsonProperty_tEC316772CD2F8406C84CDA3EEAD7430ED09055DB, ___U3CPropertyContractU3Ek__BackingField_7)); }
	inline JsonContract_t5B4355E6C6A7B78C25BC60D66117133E4CE83954 * get_U3CPropertyContractU3Ek__BackingField_7() const { return ___U3CPropertyContractU3Ek__BackingField_7; }
	inline JsonContract_t5B4355E6C6A7B78C25BC60D66117133E4CE83954 ** get_address_of_U3CPropertyContractU3Ek__BackingField_7() { return &___U3CPropertyContractU3Ek__BackingField_7; }
	inline void set_U3CPropertyContractU3Ek__BackingField_7(JsonContract_t5B4355E6C6A7B78C25BC60D66117133E4CE83954 * value)
	{
		___U3CPropertyContractU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CPropertyContractU3Ek__BackingField_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CDeclaringTypeU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(JsonProperty_tEC316772CD2F8406C84CDA3EEAD7430ED09055DB, ___U3CDeclaringTypeU3Ek__BackingField_8)); }
	inline Type_t * get_U3CDeclaringTypeU3Ek__BackingField_8() const { return ___U3CDeclaringTypeU3Ek__BackingField_8; }
	inline Type_t ** get_address_of_U3CDeclaringTypeU3Ek__BackingField_8() { return &___U3CDeclaringTypeU3Ek__BackingField_8; }
	inline void set_U3CDeclaringTypeU3Ek__BackingField_8(Type_t * value)
	{
		___U3CDeclaringTypeU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CDeclaringTypeU3Ek__BackingField_8), (void*)value);
	}

	inline static int32_t get_offset_of_U3COrderU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(JsonProperty_tEC316772CD2F8406C84CDA3EEAD7430ED09055DB, ___U3COrderU3Ek__BackingField_9)); }
	inline Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  get_U3COrderU3Ek__BackingField_9() const { return ___U3COrderU3Ek__BackingField_9; }
	inline Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * get_address_of_U3COrderU3Ek__BackingField_9() { return &___U3COrderU3Ek__BackingField_9; }
	inline void set_U3COrderU3Ek__BackingField_9(Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  value)
	{
		___U3COrderU3Ek__BackingField_9 = value;
	}

	inline static int32_t get_offset_of_U3CUnderlyingNameU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(JsonProperty_tEC316772CD2F8406C84CDA3EEAD7430ED09055DB, ___U3CUnderlyingNameU3Ek__BackingField_10)); }
	inline String_t* get_U3CUnderlyingNameU3Ek__BackingField_10() const { return ___U3CUnderlyingNameU3Ek__BackingField_10; }
	inline String_t** get_address_of_U3CUnderlyingNameU3Ek__BackingField_10() { return &___U3CUnderlyingNameU3Ek__BackingField_10; }
	inline void set_U3CUnderlyingNameU3Ek__BackingField_10(String_t* value)
	{
		___U3CUnderlyingNameU3Ek__BackingField_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CUnderlyingNameU3Ek__BackingField_10), (void*)value);
	}

	inline static int32_t get_offset_of_U3CValueProviderU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(JsonProperty_tEC316772CD2F8406C84CDA3EEAD7430ED09055DB, ___U3CValueProviderU3Ek__BackingField_11)); }
	inline RuntimeObject* get_U3CValueProviderU3Ek__BackingField_11() const { return ___U3CValueProviderU3Ek__BackingField_11; }
	inline RuntimeObject** get_address_of_U3CValueProviderU3Ek__BackingField_11() { return &___U3CValueProviderU3Ek__BackingField_11; }
	inline void set_U3CValueProviderU3Ek__BackingField_11(RuntimeObject* value)
	{
		___U3CValueProviderU3Ek__BackingField_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CValueProviderU3Ek__BackingField_11), (void*)value);
	}

	inline static int32_t get_offset_of_U3CAttributeProviderU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(JsonProperty_tEC316772CD2F8406C84CDA3EEAD7430ED09055DB, ___U3CAttributeProviderU3Ek__BackingField_12)); }
	inline RuntimeObject* get_U3CAttributeProviderU3Ek__BackingField_12() const { return ___U3CAttributeProviderU3Ek__BackingField_12; }
	inline RuntimeObject** get_address_of_U3CAttributeProviderU3Ek__BackingField_12() { return &___U3CAttributeProviderU3Ek__BackingField_12; }
	inline void set_U3CAttributeProviderU3Ek__BackingField_12(RuntimeObject* value)
	{
		___U3CAttributeProviderU3Ek__BackingField_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CAttributeProviderU3Ek__BackingField_12), (void*)value);
	}

	inline static int32_t get_offset_of_U3CConverterU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(JsonProperty_tEC316772CD2F8406C84CDA3EEAD7430ED09055DB, ___U3CConverterU3Ek__BackingField_13)); }
	inline JsonConverter_t36490169A72CC2FE84A3114C40D7103DD83826D0 * get_U3CConverterU3Ek__BackingField_13() const { return ___U3CConverterU3Ek__BackingField_13; }
	inline JsonConverter_t36490169A72CC2FE84A3114C40D7103DD83826D0 ** get_address_of_U3CConverterU3Ek__BackingField_13() { return &___U3CConverterU3Ek__BackingField_13; }
	inline void set_U3CConverterU3Ek__BackingField_13(JsonConverter_t36490169A72CC2FE84A3114C40D7103DD83826D0 * value)
	{
		___U3CConverterU3Ek__BackingField_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CConverterU3Ek__BackingField_13), (void*)value);
	}

	inline static int32_t get_offset_of_U3CIgnoredU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(JsonProperty_tEC316772CD2F8406C84CDA3EEAD7430ED09055DB, ___U3CIgnoredU3Ek__BackingField_14)); }
	inline bool get_U3CIgnoredU3Ek__BackingField_14() const { return ___U3CIgnoredU3Ek__BackingField_14; }
	inline bool* get_address_of_U3CIgnoredU3Ek__BackingField_14() { return &___U3CIgnoredU3Ek__BackingField_14; }
	inline void set_U3CIgnoredU3Ek__BackingField_14(bool value)
	{
		___U3CIgnoredU3Ek__BackingField_14 = value;
	}

	inline static int32_t get_offset_of_U3CReadableU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(JsonProperty_tEC316772CD2F8406C84CDA3EEAD7430ED09055DB, ___U3CReadableU3Ek__BackingField_15)); }
	inline bool get_U3CReadableU3Ek__BackingField_15() const { return ___U3CReadableU3Ek__BackingField_15; }
	inline bool* get_address_of_U3CReadableU3Ek__BackingField_15() { return &___U3CReadableU3Ek__BackingField_15; }
	inline void set_U3CReadableU3Ek__BackingField_15(bool value)
	{
		___U3CReadableU3Ek__BackingField_15 = value;
	}

	inline static int32_t get_offset_of_U3CWritableU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(JsonProperty_tEC316772CD2F8406C84CDA3EEAD7430ED09055DB, ___U3CWritableU3Ek__BackingField_16)); }
	inline bool get_U3CWritableU3Ek__BackingField_16() const { return ___U3CWritableU3Ek__BackingField_16; }
	inline bool* get_address_of_U3CWritableU3Ek__BackingField_16() { return &___U3CWritableU3Ek__BackingField_16; }
	inline void set_U3CWritableU3Ek__BackingField_16(bool value)
	{
		___U3CWritableU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CHasMemberAttributeU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(JsonProperty_tEC316772CD2F8406C84CDA3EEAD7430ED09055DB, ___U3CHasMemberAttributeU3Ek__BackingField_17)); }
	inline bool get_U3CHasMemberAttributeU3Ek__BackingField_17() const { return ___U3CHasMemberAttributeU3Ek__BackingField_17; }
	inline bool* get_address_of_U3CHasMemberAttributeU3Ek__BackingField_17() { return &___U3CHasMemberAttributeU3Ek__BackingField_17; }
	inline void set_U3CHasMemberAttributeU3Ek__BackingField_17(bool value)
	{
		___U3CHasMemberAttributeU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3CIsReferenceU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(JsonProperty_tEC316772CD2F8406C84CDA3EEAD7430ED09055DB, ___U3CIsReferenceU3Ek__BackingField_18)); }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  get_U3CIsReferenceU3Ek__BackingField_18() const { return ___U3CIsReferenceU3Ek__BackingField_18; }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 * get_address_of_U3CIsReferenceU3Ek__BackingField_18() { return &___U3CIsReferenceU3Ek__BackingField_18; }
	inline void set_U3CIsReferenceU3Ek__BackingField_18(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  value)
	{
		___U3CIsReferenceU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_U3CNullValueHandlingU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(JsonProperty_tEC316772CD2F8406C84CDA3EEAD7430ED09055DB, ___U3CNullValueHandlingU3Ek__BackingField_19)); }
	inline Nullable_1_t8BDC96DE48D16174D163894D4BD81E90BF553B8A  get_U3CNullValueHandlingU3Ek__BackingField_19() const { return ___U3CNullValueHandlingU3Ek__BackingField_19; }
	inline Nullable_1_t8BDC96DE48D16174D163894D4BD81E90BF553B8A * get_address_of_U3CNullValueHandlingU3Ek__BackingField_19() { return &___U3CNullValueHandlingU3Ek__BackingField_19; }
	inline void set_U3CNullValueHandlingU3Ek__BackingField_19(Nullable_1_t8BDC96DE48D16174D163894D4BD81E90BF553B8A  value)
	{
		___U3CNullValueHandlingU3Ek__BackingField_19 = value;
	}

	inline static int32_t get_offset_of_U3CDefaultValueHandlingU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(JsonProperty_tEC316772CD2F8406C84CDA3EEAD7430ED09055DB, ___U3CDefaultValueHandlingU3Ek__BackingField_20)); }
	inline Nullable_1_tF28EA44E419006C6F966113CCC0D0D808BF05B88  get_U3CDefaultValueHandlingU3Ek__BackingField_20() const { return ___U3CDefaultValueHandlingU3Ek__BackingField_20; }
	inline Nullable_1_tF28EA44E419006C6F966113CCC0D0D808BF05B88 * get_address_of_U3CDefaultValueHandlingU3Ek__BackingField_20() { return &___U3CDefaultValueHandlingU3Ek__BackingField_20; }
	inline void set_U3CDefaultValueHandlingU3Ek__BackingField_20(Nullable_1_tF28EA44E419006C6F966113CCC0D0D808BF05B88  value)
	{
		___U3CDefaultValueHandlingU3Ek__BackingField_20 = value;
	}

	inline static int32_t get_offset_of_U3CReferenceLoopHandlingU3Ek__BackingField_21() { return static_cast<int32_t>(offsetof(JsonProperty_tEC316772CD2F8406C84CDA3EEAD7430ED09055DB, ___U3CReferenceLoopHandlingU3Ek__BackingField_21)); }
	inline Nullable_1_t555376AAF3F02ABE7C370BE68B2758D9189AC7BA  get_U3CReferenceLoopHandlingU3Ek__BackingField_21() const { return ___U3CReferenceLoopHandlingU3Ek__BackingField_21; }
	inline Nullable_1_t555376AAF3F02ABE7C370BE68B2758D9189AC7BA * get_address_of_U3CReferenceLoopHandlingU3Ek__BackingField_21() { return &___U3CReferenceLoopHandlingU3Ek__BackingField_21; }
	inline void set_U3CReferenceLoopHandlingU3Ek__BackingField_21(Nullable_1_t555376AAF3F02ABE7C370BE68B2758D9189AC7BA  value)
	{
		___U3CReferenceLoopHandlingU3Ek__BackingField_21 = value;
	}

	inline static int32_t get_offset_of_U3CObjectCreationHandlingU3Ek__BackingField_22() { return static_cast<int32_t>(offsetof(JsonProperty_tEC316772CD2F8406C84CDA3EEAD7430ED09055DB, ___U3CObjectCreationHandlingU3Ek__BackingField_22)); }
	inline Nullable_1_t6F9818B0A1E9A545E0C732692FA46B1250FCC000  get_U3CObjectCreationHandlingU3Ek__BackingField_22() const { return ___U3CObjectCreationHandlingU3Ek__BackingField_22; }
	inline Nullable_1_t6F9818B0A1E9A545E0C732692FA46B1250FCC000 * get_address_of_U3CObjectCreationHandlingU3Ek__BackingField_22() { return &___U3CObjectCreationHandlingU3Ek__BackingField_22; }
	inline void set_U3CObjectCreationHandlingU3Ek__BackingField_22(Nullable_1_t6F9818B0A1E9A545E0C732692FA46B1250FCC000  value)
	{
		___U3CObjectCreationHandlingU3Ek__BackingField_22 = value;
	}

	inline static int32_t get_offset_of_U3CTypeNameHandlingU3Ek__BackingField_23() { return static_cast<int32_t>(offsetof(JsonProperty_tEC316772CD2F8406C84CDA3EEAD7430ED09055DB, ___U3CTypeNameHandlingU3Ek__BackingField_23)); }
	inline Nullable_1_t1AC180DB7FD26E7C3BD95ED012B1C7B00BAA7D49  get_U3CTypeNameHandlingU3Ek__BackingField_23() const { return ___U3CTypeNameHandlingU3Ek__BackingField_23; }
	inline Nullable_1_t1AC180DB7FD26E7C3BD95ED012B1C7B00BAA7D49 * get_address_of_U3CTypeNameHandlingU3Ek__BackingField_23() { return &___U3CTypeNameHandlingU3Ek__BackingField_23; }
	inline void set_U3CTypeNameHandlingU3Ek__BackingField_23(Nullable_1_t1AC180DB7FD26E7C3BD95ED012B1C7B00BAA7D49  value)
	{
		___U3CTypeNameHandlingU3Ek__BackingField_23 = value;
	}

	inline static int32_t get_offset_of_U3CShouldSerializeU3Ek__BackingField_24() { return static_cast<int32_t>(offsetof(JsonProperty_tEC316772CD2F8406C84CDA3EEAD7430ED09055DB, ___U3CShouldSerializeU3Ek__BackingField_24)); }
	inline Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * get_U3CShouldSerializeU3Ek__BackingField_24() const { return ___U3CShouldSerializeU3Ek__BackingField_24; }
	inline Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB ** get_address_of_U3CShouldSerializeU3Ek__BackingField_24() { return &___U3CShouldSerializeU3Ek__BackingField_24; }
	inline void set_U3CShouldSerializeU3Ek__BackingField_24(Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * value)
	{
		___U3CShouldSerializeU3Ek__BackingField_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CShouldSerializeU3Ek__BackingField_24), (void*)value);
	}

	inline static int32_t get_offset_of_U3CShouldDeserializeU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(JsonProperty_tEC316772CD2F8406C84CDA3EEAD7430ED09055DB, ___U3CShouldDeserializeU3Ek__BackingField_25)); }
	inline Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * get_U3CShouldDeserializeU3Ek__BackingField_25() const { return ___U3CShouldDeserializeU3Ek__BackingField_25; }
	inline Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB ** get_address_of_U3CShouldDeserializeU3Ek__BackingField_25() { return &___U3CShouldDeserializeU3Ek__BackingField_25; }
	inline void set_U3CShouldDeserializeU3Ek__BackingField_25(Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * value)
	{
		___U3CShouldDeserializeU3Ek__BackingField_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CShouldDeserializeU3Ek__BackingField_25), (void*)value);
	}

	inline static int32_t get_offset_of_U3CGetIsSpecifiedU3Ek__BackingField_26() { return static_cast<int32_t>(offsetof(JsonProperty_tEC316772CD2F8406C84CDA3EEAD7430ED09055DB, ___U3CGetIsSpecifiedU3Ek__BackingField_26)); }
	inline Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * get_U3CGetIsSpecifiedU3Ek__BackingField_26() const { return ___U3CGetIsSpecifiedU3Ek__BackingField_26; }
	inline Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB ** get_address_of_U3CGetIsSpecifiedU3Ek__BackingField_26() { return &___U3CGetIsSpecifiedU3Ek__BackingField_26; }
	inline void set_U3CGetIsSpecifiedU3Ek__BackingField_26(Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * value)
	{
		___U3CGetIsSpecifiedU3Ek__BackingField_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CGetIsSpecifiedU3Ek__BackingField_26), (void*)value);
	}

	inline static int32_t get_offset_of_U3CSetIsSpecifiedU3Ek__BackingField_27() { return static_cast<int32_t>(offsetof(JsonProperty_tEC316772CD2F8406C84CDA3EEAD7430ED09055DB, ___U3CSetIsSpecifiedU3Ek__BackingField_27)); }
	inline Action_2_t4FB8E5660AE634E13BF340904C61FEA9DCE9D52D * get_U3CSetIsSpecifiedU3Ek__BackingField_27() const { return ___U3CSetIsSpecifiedU3Ek__BackingField_27; }
	inline Action_2_t4FB8E5660AE634E13BF340904C61FEA9DCE9D52D ** get_address_of_U3CSetIsSpecifiedU3Ek__BackingField_27() { return &___U3CSetIsSpecifiedU3Ek__BackingField_27; }
	inline void set_U3CSetIsSpecifiedU3Ek__BackingField_27(Action_2_t4FB8E5660AE634E13BF340904C61FEA9DCE9D52D * value)
	{
		___U3CSetIsSpecifiedU3Ek__BackingField_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CSetIsSpecifiedU3Ek__BackingField_27), (void*)value);
	}

	inline static int32_t get_offset_of_U3CItemConverterU3Ek__BackingField_28() { return static_cast<int32_t>(offsetof(JsonProperty_tEC316772CD2F8406C84CDA3EEAD7430ED09055DB, ___U3CItemConverterU3Ek__BackingField_28)); }
	inline JsonConverter_t36490169A72CC2FE84A3114C40D7103DD83826D0 * get_U3CItemConverterU3Ek__BackingField_28() const { return ___U3CItemConverterU3Ek__BackingField_28; }
	inline JsonConverter_t36490169A72CC2FE84A3114C40D7103DD83826D0 ** get_address_of_U3CItemConverterU3Ek__BackingField_28() { return &___U3CItemConverterU3Ek__BackingField_28; }
	inline void set_U3CItemConverterU3Ek__BackingField_28(JsonConverter_t36490169A72CC2FE84A3114C40D7103DD83826D0 * value)
	{
		___U3CItemConverterU3Ek__BackingField_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CItemConverterU3Ek__BackingField_28), (void*)value);
	}

	inline static int32_t get_offset_of_U3CItemIsReferenceU3Ek__BackingField_29() { return static_cast<int32_t>(offsetof(JsonProperty_tEC316772CD2F8406C84CDA3EEAD7430ED09055DB, ___U3CItemIsReferenceU3Ek__BackingField_29)); }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  get_U3CItemIsReferenceU3Ek__BackingField_29() const { return ___U3CItemIsReferenceU3Ek__BackingField_29; }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 * get_address_of_U3CItemIsReferenceU3Ek__BackingField_29() { return &___U3CItemIsReferenceU3Ek__BackingField_29; }
	inline void set_U3CItemIsReferenceU3Ek__BackingField_29(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  value)
	{
		___U3CItemIsReferenceU3Ek__BackingField_29 = value;
	}

	inline static int32_t get_offset_of_U3CItemTypeNameHandlingU3Ek__BackingField_30() { return static_cast<int32_t>(offsetof(JsonProperty_tEC316772CD2F8406C84CDA3EEAD7430ED09055DB, ___U3CItemTypeNameHandlingU3Ek__BackingField_30)); }
	inline Nullable_1_t1AC180DB7FD26E7C3BD95ED012B1C7B00BAA7D49  get_U3CItemTypeNameHandlingU3Ek__BackingField_30() const { return ___U3CItemTypeNameHandlingU3Ek__BackingField_30; }
	inline Nullable_1_t1AC180DB7FD26E7C3BD95ED012B1C7B00BAA7D49 * get_address_of_U3CItemTypeNameHandlingU3Ek__BackingField_30() { return &___U3CItemTypeNameHandlingU3Ek__BackingField_30; }
	inline void set_U3CItemTypeNameHandlingU3Ek__BackingField_30(Nullable_1_t1AC180DB7FD26E7C3BD95ED012B1C7B00BAA7D49  value)
	{
		___U3CItemTypeNameHandlingU3Ek__BackingField_30 = value;
	}

	inline static int32_t get_offset_of_U3CItemReferenceLoopHandlingU3Ek__BackingField_31() { return static_cast<int32_t>(offsetof(JsonProperty_tEC316772CD2F8406C84CDA3EEAD7430ED09055DB, ___U3CItemReferenceLoopHandlingU3Ek__BackingField_31)); }
	inline Nullable_1_t555376AAF3F02ABE7C370BE68B2758D9189AC7BA  get_U3CItemReferenceLoopHandlingU3Ek__BackingField_31() const { return ___U3CItemReferenceLoopHandlingU3Ek__BackingField_31; }
	inline Nullable_1_t555376AAF3F02ABE7C370BE68B2758D9189AC7BA * get_address_of_U3CItemReferenceLoopHandlingU3Ek__BackingField_31() { return &___U3CItemReferenceLoopHandlingU3Ek__BackingField_31; }
	inline void set_U3CItemReferenceLoopHandlingU3Ek__BackingField_31(Nullable_1_t555376AAF3F02ABE7C370BE68B2758D9189AC7BA  value)
	{
		___U3CItemReferenceLoopHandlingU3Ek__BackingField_31 = value;
	}
};


// Newtonsoft.Json.Linq.JsonSelectSettings
struct JsonSelectSettings_t473B56CACFC6E1C255C7191CE7FAD72AB78BFCEF  : public RuntimeObject
{
public:
	// System.Nullable`1<System.TimeSpan> Newtonsoft.Json.Linq.JsonSelectSettings::<RegexMatchTimeout>k__BackingField
	Nullable_1_tCFBE5FE1DB8A702D620FFC81D556C8E8AD5B871F  ___U3CRegexMatchTimeoutU3Ek__BackingField_0;
	// System.Boolean Newtonsoft.Json.Linq.JsonSelectSettings::<ErrorWhenNoMatch>k__BackingField
	bool ___U3CErrorWhenNoMatchU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CRegexMatchTimeoutU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(JsonSelectSettings_t473B56CACFC6E1C255C7191CE7FAD72AB78BFCEF, ___U3CRegexMatchTimeoutU3Ek__BackingField_0)); }
	inline Nullable_1_tCFBE5FE1DB8A702D620FFC81D556C8E8AD5B871F  get_U3CRegexMatchTimeoutU3Ek__BackingField_0() const { return ___U3CRegexMatchTimeoutU3Ek__BackingField_0; }
	inline Nullable_1_tCFBE5FE1DB8A702D620FFC81D556C8E8AD5B871F * get_address_of_U3CRegexMatchTimeoutU3Ek__BackingField_0() { return &___U3CRegexMatchTimeoutU3Ek__BackingField_0; }
	inline void set_U3CRegexMatchTimeoutU3Ek__BackingField_0(Nullable_1_tCFBE5FE1DB8A702D620FFC81D556C8E8AD5B871F  value)
	{
		___U3CRegexMatchTimeoutU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CErrorWhenNoMatchU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(JsonSelectSettings_t473B56CACFC6E1C255C7191CE7FAD72AB78BFCEF, ___U3CErrorWhenNoMatchU3Ek__BackingField_1)); }
	inline bool get_U3CErrorWhenNoMatchU3Ek__BackingField_1() const { return ___U3CErrorWhenNoMatchU3Ek__BackingField_1; }
	inline bool* get_address_of_U3CErrorWhenNoMatchU3Ek__BackingField_1() { return &___U3CErrorWhenNoMatchU3Ek__BackingField_1; }
	inline void set_U3CErrorWhenNoMatchU3Ek__BackingField_1(bool value)
	{
		___U3CErrorWhenNoMatchU3Ek__BackingField_1 = value;
	}
};


// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// Newtonsoft.Json.Serialization.JsonSerializerInternalReader/CreatorPropertyContext
struct CreatorPropertyContext_t6B0EB52BFB828942F28C8153669D89C8A75CED5F  : public RuntimeObject
{
public:
	// System.String Newtonsoft.Json.Serialization.JsonSerializerInternalReader/CreatorPropertyContext::Name
	String_t* ___Name_0;
	// Newtonsoft.Json.Serialization.JsonProperty Newtonsoft.Json.Serialization.JsonSerializerInternalReader/CreatorPropertyContext::Property
	JsonProperty_tEC316772CD2F8406C84CDA3EEAD7430ED09055DB * ___Property_1;
	// Newtonsoft.Json.Serialization.JsonProperty Newtonsoft.Json.Serialization.JsonSerializerInternalReader/CreatorPropertyContext::ConstructorProperty
	JsonProperty_tEC316772CD2F8406C84CDA3EEAD7430ED09055DB * ___ConstructorProperty_2;
	// System.Nullable`1<Newtonsoft.Json.Serialization.JsonSerializerInternalReader/PropertyPresence> Newtonsoft.Json.Serialization.JsonSerializerInternalReader/CreatorPropertyContext::Presence
	Nullable_1_t42A1F84DAE396A3100B725A3BEC70034CAB98F9B  ___Presence_3;
	// System.Object Newtonsoft.Json.Serialization.JsonSerializerInternalReader/CreatorPropertyContext::Value
	RuntimeObject * ___Value_4;
	// System.Boolean Newtonsoft.Json.Serialization.JsonSerializerInternalReader/CreatorPropertyContext::Used
	bool ___Used_5;

public:
	inline static int32_t get_offset_of_Name_0() { return static_cast<int32_t>(offsetof(CreatorPropertyContext_t6B0EB52BFB828942F28C8153669D89C8A75CED5F, ___Name_0)); }
	inline String_t* get_Name_0() const { return ___Name_0; }
	inline String_t** get_address_of_Name_0() { return &___Name_0; }
	inline void set_Name_0(String_t* value)
	{
		___Name_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Name_0), (void*)value);
	}

	inline static int32_t get_offset_of_Property_1() { return static_cast<int32_t>(offsetof(CreatorPropertyContext_t6B0EB52BFB828942F28C8153669D89C8A75CED5F, ___Property_1)); }
	inline JsonProperty_tEC316772CD2F8406C84CDA3EEAD7430ED09055DB * get_Property_1() const { return ___Property_1; }
	inline JsonProperty_tEC316772CD2F8406C84CDA3EEAD7430ED09055DB ** get_address_of_Property_1() { return &___Property_1; }
	inline void set_Property_1(JsonProperty_tEC316772CD2F8406C84CDA3EEAD7430ED09055DB * value)
	{
		___Property_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Property_1), (void*)value);
	}

	inline static int32_t get_offset_of_ConstructorProperty_2() { return static_cast<int32_t>(offsetof(CreatorPropertyContext_t6B0EB52BFB828942F28C8153669D89C8A75CED5F, ___ConstructorProperty_2)); }
	inline JsonProperty_tEC316772CD2F8406C84CDA3EEAD7430ED09055DB * get_ConstructorProperty_2() const { return ___ConstructorProperty_2; }
	inline JsonProperty_tEC316772CD2F8406C84CDA3EEAD7430ED09055DB ** get_address_of_ConstructorProperty_2() { return &___ConstructorProperty_2; }
	inline void set_ConstructorProperty_2(JsonProperty_tEC316772CD2F8406C84CDA3EEAD7430ED09055DB * value)
	{
		___ConstructorProperty_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ConstructorProperty_2), (void*)value);
	}

	inline static int32_t get_offset_of_Presence_3() { return static_cast<int32_t>(offsetof(CreatorPropertyContext_t6B0EB52BFB828942F28C8153669D89C8A75CED5F, ___Presence_3)); }
	inline Nullable_1_t42A1F84DAE396A3100B725A3BEC70034CAB98F9B  get_Presence_3() const { return ___Presence_3; }
	inline Nullable_1_t42A1F84DAE396A3100B725A3BEC70034CAB98F9B * get_address_of_Presence_3() { return &___Presence_3; }
	inline void set_Presence_3(Nullable_1_t42A1F84DAE396A3100B725A3BEC70034CAB98F9B  value)
	{
		___Presence_3 = value;
	}

	inline static int32_t get_offset_of_Value_4() { return static_cast<int32_t>(offsetof(CreatorPropertyContext_t6B0EB52BFB828942F28C8153669D89C8A75CED5F, ___Value_4)); }
	inline RuntimeObject * get_Value_4() const { return ___Value_4; }
	inline RuntimeObject ** get_address_of_Value_4() { return &___Value_4; }
	inline void set_Value_4(RuntimeObject * value)
	{
		___Value_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Value_4), (void*)value);
	}

	inline static int32_t get_offset_of_Used_5() { return static_cast<int32_t>(offsetof(CreatorPropertyContext_t6B0EB52BFB828942F28C8153669D89C8A75CED5F, ___Used_5)); }
	inline bool get_Used_5() const { return ___Used_5; }
	inline bool* get_address_of_Used_5() { return &___Used_5; }
	inline void set_Used_5(bool value)
	{
		___Used_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Reflection.ParameterInfo[]
struct ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 * m_Items[1];

public:
	inline ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Newtonsoft.Json.Linq.JToken[]
struct JTokenU5BU5D_tD269AF136EE7F4BFB20B35F3E6E8E7935793CC90  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) JToken_t29F54EE35244E7B362E5D54E9517FCD2B0DBE359 * m_Items[1];

public:
	inline JToken_t29F54EE35244E7B362E5D54E9517FCD2B0DBE359 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline JToken_t29F54EE35244E7B362E5D54E9517FCD2B0DBE359 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, JToken_t29F54EE35244E7B362E5D54E9517FCD2B0DBE359 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline JToken_t29F54EE35244E7B362E5D54E9517FCD2B0DBE359 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline JToken_t29F54EE35244E7B362E5D54E9517FCD2B0DBE359 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, JToken_t29F54EE35244E7B362E5D54E9517FCD2B0DBE359 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Type_t * m_Items[1];

public:
	inline Type_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Type_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Type_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Type_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Type_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Type_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Collections.Generic.IEnumerator`1<!0> System.Collections.ObjectModel.Collection`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Collection_1_GetEnumerator_mBA3E12623E936348728135E0108ED24DE0E53FAB_gshared (Collection_1_tC70665E043EEEEE0CE76CFA285D8ACDB39D36EB0 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::.ctor(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_m74B9EB9E16A0CC0F80B0AB74B8E1E91C16E6998E_gshared (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Void System.Func`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_mA7F3C5A0612B84E910DE92E77BA95101FD68EEDB_gshared (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<!!1> System.Linq.Enumerable::Select<System.Object,System.Object>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Select_TisRuntimeObject_TisRuntimeObject_mC0F1DA980E0433D70A6CF9DD7CD1942BB7FE87C0_gshared (RuntimeObject* ___source0, Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * ___selector1, const RuntimeMethod* method);
// System.Void Newtonsoft.Json.Utilities.DynamicProxy`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicProxy_1__ctor_m601C0B172AACAD2F107BCC993D406852B4BE667A_gshared (DynamicProxy_1_t47FA933680D3A6A70869818FB5D58242943F5169 * __this, const RuntimeMethod* method);
// !!0[] System.Linq.Enumerable::ToArray<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Enumerable_ToArray_TisRuntimeObject_m21E15191FE8BDBAE753CC592A1DB55EA3BCE7B5B_gshared (RuntimeObject* ___source0, const RuntimeMethod* method);
// System.Object Newtonsoft.Json.Serialization.ObjectConstructor`1<System.Object>::Invoke(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ObjectConstructor_1_Invoke_mD53EE7B7ADD5CD96FB1B370859ED28272081B953_gshared (ObjectConstructor_1_t3B1FEEAAE751376A314DA00A745060F2E5C298BA * __this, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args0, const RuntimeMethod* method);
// !0 System.Func`1<System.Object>::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Func_1_Invoke_m4DB932CB3E45300394D6087DBF4C3D620606F726_gshared (Func_1_t807CEE610086E24A0167BAA97A64062016E09D49 * __this, const RuntimeMethod* method);
// !!0[] System.Array::Empty<System.Object>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_gshared_inline (const RuntimeMethod* method);
// TResult Newtonsoft.Json.Utilities.MethodCall`2<System.Object,System.Object>::Invoke(T,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * MethodCall_2_Invoke_m7CD4C7C78993C179E715B01E8A76BDFC3301C8F1_gshared (MethodCall_2_t5E28B9DEE3B3A32CA955A9F5A149CC91CE1F9C6F * __this, RuntimeObject * ___target0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// System.Boolean System.Linq.Enumerable::Any<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerable_Any_TisRuntimeObject_m4EC05D3E15710E112A6399BED7BC82A128B5DED4_gshared (RuntimeObject* ___source0, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);

// System.Void Newtonsoft.Json.Utilities.ImmutableCollectionsUtils/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mBE1CA068B0B39D7A472D43A208777E9A4AFF7D29 (U3CU3Ec_tC7BF6D75D37E7B375E3ABA82A78DE1344084B231 * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Boolean Newtonsoft.Json.Utilities.TypeExtensions::IsGenericType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeExtensions_IsGenericType_m1711832916F64D6F871FB0EEC916552C0B66DF32 (Type_t * ___type0, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E (RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ___handle0, const RuntimeMethod* method);
// System.Boolean System.Type::op_Equality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046 (Type_t * ___left0, Type_t * ___right1, const RuntimeMethod* method);
// System.String Newtonsoft.Json.Utilities.ImmutableCollectionsUtils/ImmutableCollectionTypeInfo::get_ContractTypeName()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ImmutableCollectionTypeInfo_get_ContractTypeName_m31846FE220CAFF2E4EEC92D64EAD17FCE7C48FFA_inline (ImmutableCollectionTypeInfo_t89E5B5C21753029E7770B0AB5EE30D754F18F2B4 * __this, const RuntimeMethod* method);
// System.Void Newtonsoft.Json.Utilities.ImmutableCollectionsUtils/ImmutableCollectionTypeInfo::set_ContractTypeName(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ImmutableCollectionTypeInfo_set_ContractTypeName_m557C2C9886F1B2696D71516EE4FCAF1F6AC3C3CB_inline (ImmutableCollectionTypeInfo_t89E5B5C21753029E7770B0AB5EE30D754F18F2B4 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void Newtonsoft.Json.Utilities.ImmutableCollectionsUtils/ImmutableCollectionTypeInfo::set_CreatedTypeName(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ImmutableCollectionTypeInfo_set_CreatedTypeName_mAD2BB9DFA67CEF4D93A2B9A33EB6AF5C87F79481_inline (ImmutableCollectionTypeInfo_t89E5B5C21753029E7770B0AB5EE30D754F18F2B4 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void Newtonsoft.Json.Utilities.ImmutableCollectionsUtils/ImmutableCollectionTypeInfo::set_BuilderTypeName(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ImmutableCollectionTypeInfo_set_BuilderTypeName_m60DAEBA3741BEA2E92F652384B248D1DA78B59AF_inline (ImmutableCollectionTypeInfo_t89E5B5C21753029E7770B0AB5EE30D754F18F2B4 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Int32 System.Environment::get_CurrentManagedThreadId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Environment_get_CurrentManagedThreadId_m09DBD4166BFD399056B2F81C77A3A182339BF92D (const RuntimeMethod* method);
// System.Void Newtonsoft.Json.Linq.JContainer/<GetDescendants>d__36::<>m__Finally2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetDescendantsU3Ed__36_U3CU3Em__Finally2_mD5950FB502AD324ADF0134EAFB885D3E90160E82 (U3CGetDescendantsU3Ed__36_t2DF4F7529B67D1F4152A061154DFC629029DB527 * __this, const RuntimeMethod* method);
// System.Void Newtonsoft.Json.Linq.JContainer/<GetDescendants>d__36::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetDescendantsU3Ed__36_U3CU3Em__Finally1_m9EF703A6509626FCFAD152B5E0496FE107DEDA82 (U3CGetDescendantsU3Ed__36_t2DF4F7529B67D1F4152A061154DFC629029DB527 * __this, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<Newtonsoft.Json.Linq.JToken> Newtonsoft.Json.Linq.JContainer::Descendants()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JContainer_Descendants_m6D5C4087D3114D13A9466F8306F4DE8E5E7A694D (JContainer_t38DD4DF522660749764609AA408DFD0575BABE3F * __this, const RuntimeMethod* method);
// System.Void Newtonsoft.Json.Linq.JContainer/<GetDescendants>d__36::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetDescendantsU3Ed__36_System_IDisposable_Dispose_m2494DE5F2CCD689F6C01327173F9484AE9A5302F (U3CGetDescendantsU3Ed__36_t2DF4F7529B67D1F4152A061154DFC629029DB527 * __this, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// System.Void Newtonsoft.Json.Linq.JContainer/<GetDescendants>d__36::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetDescendantsU3Ed__36__ctor_m1AF7670765F8430016859B12A24B5EA91EC42AB0 (U3CGetDescendantsU3Ed__36_t2DF4F7529B67D1F4152A061154DFC629029DB527 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<Newtonsoft.Json.Linq.JToken> Newtonsoft.Json.Linq.JContainer/<GetDescendants>d__36::System.Collections.Generic.IEnumerable<Newtonsoft.Json.Linq.JToken>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetDescendantsU3Ed__36_System_Collections_Generic_IEnumerableU3CNewtonsoft_Json_Linq_JTokenU3E_GetEnumerator_mF77579E32B9A25FB07F4354F9FF12F15F84E1831 (U3CGetDescendantsU3Ed__36_t2DF4F7529B67D1F4152A061154DFC629029DB527 * __this, const RuntimeMethod* method);
// System.Void Newtonsoft.Json.Linq.JObject/<GetEnumerator>d__63::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__63_U3CU3Em__Finally1_m83ED9BF831F33C6EF68C6A60B3517F5DDA511543 (U3CGetEnumeratorU3Ed__63_tE454846B9514A03E19A8106BCD94046B4D4A832D * __this, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<!0> System.Collections.ObjectModel.Collection`1<Newtonsoft.Json.Linq.JToken>::GetEnumerator()
inline RuntimeObject* Collection_1_GetEnumerator_m9A9AF809D0758FE594BBBC3CD836A13AC0D4E9B8 (Collection_1_t4C6E257DCF9453754AD27FD3CEE7E20426D8D4DB * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Collection_1_t4C6E257DCF9453754AD27FD3CEE7E20426D8D4DB *, const RuntimeMethod*))Collection_1_GetEnumerator_mBA3E12623E936348728135E0108ED24DE0E53FAB_gshared)(__this, method);
}
// System.String Newtonsoft.Json.Linq.JProperty::get_Name()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* JProperty_get_Name_mF3BBAB949CDF1B517CAF1BE2B2014771B43E3A1D_inline (JProperty_tF9DA59F1EB857859581CDEE663A2A0040D5A9A53 * __this, const RuntimeMethod* method);
// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JProperty::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JToken_t29F54EE35244E7B362E5D54E9517FCD2B0DBE359 * JProperty_get_Value_m6CBB4C6E86803F3150F1454AD6C78B883C45946C (JProperty_tF9DA59F1EB857859581CDEE663A2A0040D5A9A53 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.String,Newtonsoft.Json.Linq.JToken>::.ctor(!0,!1)
inline void KeyValuePair_2__ctor_m4CD42BCF51048E24BA23842C9A59B9819BD9A94D (KeyValuePair_2_t9967CE3AA01B66D662E4BE42AC4A1AC4FA262636 * __this, String_t* ___key0, JToken_t29F54EE35244E7B362E5D54E9517FCD2B0DBE359 * ___value1, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_t9967CE3AA01B66D662E4BE42AC4A1AC4FA262636 *, String_t*, JToken_t29F54EE35244E7B362E5D54E9517FCD2B0DBE359 *, const RuntimeMethod*))KeyValuePair_2__ctor_m74B9EB9E16A0CC0F80B0AB74B8E1E91C16E6998E_gshared)(__this, ___key0, ___value1, method);
}
// System.Void Newtonsoft.Json.Linq.JObject/<GetEnumerator>d__63::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__63_System_IDisposable_Dispose_m04226382F2354112526A2698882B33C12F424CF8 (U3CGetEnumeratorU3Ed__63_tE454846B9514A03E19A8106BCD94046B4D4A832D * __this, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<Newtonsoft.Json.Linq.JProperty> Newtonsoft.Json.Linq.JObject::Properties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JObject_Properties_mECDEC581AD78F6E3C16D155B6FE04EA3AC6E6B7F (JObject_t3ABEFC12B3B74EC00B7032CD365434C91B076FDE * __this, const RuntimeMethod* method);
// System.Void System.Func`2<Newtonsoft.Json.Linq.JProperty,System.String>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mA2CDA945851C668EA7FAE2F3F4AF9D4939B93E4B (Func_2_tA651E2F99CED91C9590800FA47A2E0E3D0BFE402 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tA651E2F99CED91C9590800FA47A2E0E3D0BFE402 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_mA7F3C5A0612B84E910DE92E77BA95101FD68EEDB_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<!!1> System.Linq.Enumerable::Select<Newtonsoft.Json.Linq.JProperty,System.String>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>)
inline RuntimeObject* Enumerable_Select_TisJProperty_tF9DA59F1EB857859581CDEE663A2A0040D5A9A53_TisString_t_mEF0A3E7178D1CF8B087B34729FA56017EBCBA29B (RuntimeObject* ___source0, Func_2_tA651E2F99CED91C9590800FA47A2E0E3D0BFE402 * ___selector1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_tA651E2F99CED91C9590800FA47A2E0E3D0BFE402 *, const RuntimeMethod*))Enumerable_Select_TisRuntimeObject_TisRuntimeObject_mC0F1DA980E0433D70A6CF9DD7CD1942BB7FE87C0_gshared)(___source0, ___selector1, method);
}
// System.Void Newtonsoft.Json.Utilities.DynamicProxy`1<Newtonsoft.Json.Linq.JObject>::.ctor()
inline void DynamicProxy_1__ctor_m25113953CD27E3BF12CC252D83165388DFA9BCA0 (DynamicProxy_1_tB32CF5596CE0637E7BE5E5379204E849C6E6691C * __this, const RuntimeMethod* method)
{
	((  void (*) (DynamicProxy_1_tB32CF5596CE0637E7BE5E5379204E849C6E6691C *, const RuntimeMethod*))DynamicProxy_1__ctor_m601C0B172AACAD2F107BCC993D406852B4BE667A_gshared)(__this, method);
}
// System.Void Newtonsoft.Json.Linq.JProperty/JPropertyList/<GetEnumerator>d__1::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__1__ctor_mBA56603E0B3D1EBF90505D4F028189623C6BED95 (U3CGetEnumeratorU3Ed__1_t7C50A3D32B6527C6EEA9E4D7FABB016161DB0A9D * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<Newtonsoft.Json.Linq.JToken> Newtonsoft.Json.Linq.JProperty/JPropertyList::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JPropertyList_GetEnumerator_m9E9B389A1A2493BC9D059A6CF90386FCDABCF380 (JPropertyList_tE978701AA0E5EA3DE317E8ABF5EC0C7CE5E713DB * __this, const RuntimeMethod* method);
// System.Void System.IndexOutOfRangeException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndexOutOfRangeException__ctor_m84F1D8D46E48427F4DFAC350A5F1E0D345C68523 (IndexOutOfRangeException_tDC9EF7A0346CE39E54DA1083F07BE6DFC3CE2EDD * __this, const RuntimeMethod* method);
// System.Void Newtonsoft.Json.Utilities.DynamicProxy`1<Newtonsoft.Json.Linq.JValue>::.ctor()
inline void DynamicProxy_1__ctor_m8A9C57DF8542DEF86098C4EA3326446D6972F813 (DynamicProxy_1_t586F0C5EE6DD22DC480272A4B3ACDFF9215CB1A0 * __this, const RuntimeMethod* method)
{
	((  void (*) (DynamicProxy_1_t586F0C5EE6DD22DC480272A4B3ACDFF9215CB1A0 *, const RuntimeMethod*))DynamicProxy_1__ctor_m601C0B172AACAD2F107BCC993D406852B4BE667A_gshared)(__this, method);
}
// System.Object System.Reflection.MethodBase::Invoke(System.Object,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * MethodBase_Invoke_m5DA5E74F34F8FFA8133445BAE0266FD54F7D4EB3 (MethodBase_t * __this, RuntimeObject * ___obj0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___parameters1, const RuntimeMethod* method);
// System.Int32 System.Runtime.CompilerServices.RuntimeHelpers::GetHashCode(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RuntimeHelpers_GetHashCode_mDA6691034E245B5F619B108F3597725FF7862DA1 (RuntimeObject * ___o0, const RuntimeMethod* method);
// System.Void Newtonsoft.Json.Serialization.JsonSerializerInternalReader/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m99EEF02C5DE6E0AB04CEA171C1317217245CF4AF (U3CU3Ec_t914CA97977CFC2D085D6D2EFD193E4C593C02E29 * __this, const RuntimeMethod* method);
// System.String Newtonsoft.Json.Serialization.JsonProperty::get_PropertyName()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* JsonProperty_get_PropertyName_mFA543F7272E86C75C96CC3CBCE670904C70408F7_inline (JsonProperty_tEC316772CD2F8406C84CDA3EEAD7430ED09055DB * __this, const RuntimeMethod* method);
// System.Void Newtonsoft.Json.Serialization.JsonTypeReflector/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mB3592FD39CFF0AE8899673C8BB6C80D8E44762C8 (U3CU3Ec_tE90ECA1894178BF3B7F18DCB97DBEC083303FAB6 * __this, const RuntimeMethod* method);
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.Func`2<System.Object,System.Type>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m84B84849EC5A4CBDFA2EAC12D68E99B17D87EAFD (Func_2_t1BAD9F1A22B63A9F2F0380E7FB5D5BB7FED704BF * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t1BAD9F1A22B63A9F2F0380E7FB5D5BB7FED704BF *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_mA7F3C5A0612B84E910DE92E77BA95101FD68EEDB_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<!!1> System.Linq.Enumerable::Select<System.Object,System.Type>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>)
inline RuntimeObject* Enumerable_Select_TisRuntimeObject_TisType_t_m9172D480F276E4D46B7848B73E3042F3A9771258 (RuntimeObject* ___source0, Func_2_t1BAD9F1A22B63A9F2F0380E7FB5D5BB7FED704BF * ___selector1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_t1BAD9F1A22B63A9F2F0380E7FB5D5BB7FED704BF *, const RuntimeMethod*))Enumerable_Select_TisRuntimeObject_TisRuntimeObject_mC0F1DA980E0433D70A6CF9DD7CD1942BB7FE87C0_gshared)(___source0, ___selector1, method);
}
// !!0[] System.Linq.Enumerable::ToArray<System.Type>(System.Collections.Generic.IEnumerable`1<!!0>)
inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* Enumerable_ToArray_TisType_t_mDB744C25D97BD49BD70979DC17395D271EA84945 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToArray_TisRuntimeObject_m21E15191FE8BDBAE753CC592A1DB55EA3BCE7B5B_gshared)(___source0, method);
}
// System.Reflection.ConstructorInfo System.Type::GetConstructor(System.Type[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B * Type_GetConstructor_m98D609FCFA8EB6E54A9FF705D77EEE16603B278C (Type_t * __this, TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___types0, const RuntimeMethod* method);
// System.Boolean System.Reflection.ConstructorInfo::op_Inequality(System.Reflection.ConstructorInfo,System.Reflection.ConstructorInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConstructorInfo_op_Inequality_m14EF5800ABCDCE484FEC9C73ED6D84E8343442CC (ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B * ___left0, ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B * ___right1, const RuntimeMethod* method);
// Newtonsoft.Json.Utilities.ReflectionDelegateFactory Newtonsoft.Json.Serialization.JsonTypeReflector::get_ReflectionDelegateFactory()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReflectionDelegateFactory_t7567424477B11CC830C07A6F07A352C2F2028E68 * JsonTypeReflector_get_ReflectionDelegateFactory_mB532156E7305506F1BE68E39F815573EBB3D59CE (const RuntimeMethod* method);
// System.Object Newtonsoft.Json.Serialization.ObjectConstructor`1<System.Object>::Invoke(System.Object[])
inline RuntimeObject * ObjectConstructor_1_Invoke_mD53EE7B7ADD5CD96FB1B370859ED28272081B953 (ObjectConstructor_1_t3B1FEEAAE751376A314DA00A745060F2E5C298BA * __this, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args0, const RuntimeMethod* method)
{
	return ((  RuntimeObject * (*) (ObjectConstructor_1_t3B1FEEAAE751376A314DA00A745060F2E5C298BA *, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, const RuntimeMethod*))ObjectConstructor_1_Invoke_mD53EE7B7ADD5CD96FB1B370859ED28272081B953_gshared)(__this, ___args0, method);
}
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_InvariantCulture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * CultureInfo_get_InvariantCulture_m9FAAFAF8A00091EE1FCB7098AD3F163ECDF02164 (const RuntimeMethod* method);
// System.String Newtonsoft.Json.Utilities.StringUtils::FormatWith(System.String,System.IFormatProvider,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StringUtils_FormatWith_mCB9EFBD291CBE28AE59E3331C9CF116BFD776989 (String_t* ___format0, RuntimeObject* ___provider1, RuntimeObject * ___arg02, const RuntimeMethod* method);
// System.Void Newtonsoft.Json.JsonException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonException__ctor_m5F241E860A0B277146E0680EBADB206CB18EEA41 (JsonException_t97C31FBFB6F0EFC40669CFF7E1F9E1FE6C7A54AD * __this, String_t* ___message0, const RuntimeMethod* method);
// !0 System.Func`1<System.Object>::Invoke()
inline RuntimeObject * Func_1_Invoke_m4DB932CB3E45300394D6087DBF4C3D620606F726 (Func_1_t807CEE610086E24A0167BAA97A64062016E09D49 * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject * (*) (Func_1_t807CEE610086E24A0167BAA97A64062016E09D49 *, const RuntimeMethod*))Func_1_Invoke_m4DB932CB3E45300394D6087DBF4C3D620606F726_gshared)(__this, method);
}
// System.Void Newtonsoft.Json.JsonException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonException__ctor_m2AF2664E2540D45D34947252388119C501D10F25 (JsonException_t97C31FBFB6F0EFC40669CFF7E1F9E1FE6C7A54AD * __this, String_t* ___message0, Exception_t * ___innerException1, const RuntimeMethod* method);
// System.Object System.Reflection.ConstructorInfo::Invoke(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ConstructorInfo_Invoke_m8DF5D6F53038C7B6443EEA82D922724F39CD2906 (ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B * __this, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___parameters0, const RuntimeMethod* method);
// System.Void Newtonsoft.Json.Linq.JsonPath.QueryFilter/<ExecuteFilter>d__2::<>m__Finally2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CExecuteFilterU3Ed__2_U3CU3Em__Finally2_m3AB2352ADCD30FB69D96373FEB4392B1D5400299 (U3CExecuteFilterU3Ed__2_t66B87E7CFF03DC68D0E6A97FFEB4183AD5E7A1B4 * __this, const RuntimeMethod* method);
// System.Void Newtonsoft.Json.Linq.JsonPath.QueryFilter/<ExecuteFilter>d__2::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CExecuteFilterU3Ed__2_U3CU3Em__Finally1_mD6D2A95883F296075E540A11AC65185449A49DCB (U3CExecuteFilterU3Ed__2_t66B87E7CFF03DC68D0E6A97FFEB4183AD5E7A1B4 * __this, const RuntimeMethod* method);
// System.Void Newtonsoft.Json.Linq.JsonPath.QueryFilter/<ExecuteFilter>d__2::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CExecuteFilterU3Ed__2_System_IDisposable_Dispose_m836BD54BC33E4285D21491EC4A533F1636EEC4C6 (U3CExecuteFilterU3Ed__2_t66B87E7CFF03DC68D0E6A97FFEB4183AD5E7A1B4 * __this, const RuntimeMethod* method);
// System.Void Newtonsoft.Json.Linq.JsonPath.QueryFilter/<ExecuteFilter>d__2::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CExecuteFilterU3Ed__2__ctor_m5D96E97E4A14F2298A0F1F78B80DE1217CA529DD (U3CExecuteFilterU3Ed__2_t66B87E7CFF03DC68D0E6A97FFEB4183AD5E7A1B4 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<Newtonsoft.Json.Linq.JToken> Newtonsoft.Json.Linq.JsonPath.QueryFilter/<ExecuteFilter>d__2::System.Collections.Generic.IEnumerable<Newtonsoft.Json.Linq.JToken>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CExecuteFilterU3Ed__2_System_Collections_Generic_IEnumerableU3CNewtonsoft_Json_Linq_JTokenU3E_GetEnumerator_mC1201028FC2548F3407C6908D561F1CC54789218 (U3CExecuteFilterU3Ed__2_t66B87E7CFF03DC68D0E6A97FFEB4183AD5E7A1B4 * __this, const RuntimeMethod* method);
// System.Void Newtonsoft.Json.Linq.JsonPath.QueryScanFilter/<ExecuteFilter>d__2::<>m__Finally2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CExecuteFilterU3Ed__2_U3CU3Em__Finally2_m9B036D173B0F54CFED221C904C9780678332A132 (U3CExecuteFilterU3Ed__2_t21E3C4FBFF60C5E17F946D9E0505FA0F13585478 * __this, const RuntimeMethod* method);
// System.Void Newtonsoft.Json.Linq.JsonPath.QueryScanFilter/<ExecuteFilter>d__2::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CExecuteFilterU3Ed__2_U3CU3Em__Finally1_mA4BDD65B46C46463465846700AEB07649CB832D5 (U3CExecuteFilterU3Ed__2_t21E3C4FBFF60C5E17F946D9E0505FA0F13585478 * __this, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<Newtonsoft.Json.Linq.JToken> Newtonsoft.Json.Linq.JContainer::DescendantsAndSelf()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JContainer_DescendantsAndSelf_m28AC3590BC819984AD1018FAD955A47F4120E4E4 (JContainer_t38DD4DF522660749764609AA408DFD0575BABE3F * __this, const RuntimeMethod* method);
// System.Void Newtonsoft.Json.Linq.JsonPath.QueryScanFilter/<ExecuteFilter>d__2::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CExecuteFilterU3Ed__2_System_IDisposable_Dispose_m6212F35F15EDFC182BA78408EE081ED41A24E684 (U3CExecuteFilterU3Ed__2_t21E3C4FBFF60C5E17F946D9E0505FA0F13585478 * __this, const RuntimeMethod* method);
// System.Void Newtonsoft.Json.Linq.JsonPath.QueryScanFilter/<ExecuteFilter>d__2::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CExecuteFilterU3Ed__2__ctor_mF7ED0237D1931D80FFCF1278FDDF3A2ED6805384 (U3CExecuteFilterU3Ed__2_t21E3C4FBFF60C5E17F946D9E0505FA0F13585478 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<Newtonsoft.Json.Linq.JToken> Newtonsoft.Json.Linq.JsonPath.QueryScanFilter/<ExecuteFilter>d__2::System.Collections.Generic.IEnumerable<Newtonsoft.Json.Linq.JToken>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CExecuteFilterU3Ed__2_System_Collections_Generic_IEnumerableU3CNewtonsoft_Json_Linq_JTokenU3E_GetEnumerator_m10784184A6FB6319531BD27A4F553DBFB0077A9E (U3CExecuteFilterU3Ed__2_t21E3C4FBFF60C5E17F946D9E0505FA0F13585478 * __this, const RuntimeMethod* method);
// !!0[] System.Array::Empty<System.Object>()
inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_inline (const RuntimeMethod* method)
{
	return ((  ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_gshared_inline)(method);
}
// TResult Newtonsoft.Json.Utilities.MethodCall`2<System.Object,System.Object>::Invoke(T,System.Object[])
inline RuntimeObject * MethodCall_2_Invoke_m7CD4C7C78993C179E715B01E8A76BDFC3301C8F1 (MethodCall_2_t5E28B9DEE3B3A32CA955A9F5A149CC91CE1F9C6F * __this, RuntimeObject * ___target0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method)
{
	return ((  RuntimeObject * (*) (MethodCall_2_t5E28B9DEE3B3A32CA955A9F5A149CC91CE1F9C6F *, RuntimeObject *, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, const RuntimeMethod*))MethodCall_2_Invoke_m7CD4C7C78993C179E715B01E8A76BDFC3301C8F1_gshared)(__this, ___target0, ___args1, method);
}
// System.Void Newtonsoft.Json.Utilities.ReflectionUtils/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mCA8B39F934BC3244E8CF2D98058ECF2691E6ED96 (U3CU3Ec_t8CE040292E2A95685256FEE59EF2868355725303 * __this, const RuntimeMethod* method);
// System.Boolean System.Linq.Enumerable::Any<System.Reflection.ParameterInfo>(System.Collections.Generic.IEnumerable`1<!!0>)
inline bool Enumerable_Any_TisParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7_mC34A3CF45962BF5A4FDF04D029B51F4B0CFD938F (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_Any_TisRuntimeObject_m4EC05D3E15710E112A6399BED7BC82A128B5DED4_gshared)(___source0, method);
}
// System.Boolean System.Reflection.FieldInfo::get_IsPrivate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FieldInfo_get_IsPrivate_m33AC8E111CE7497070E6F65F11E68CD536D42072 (FieldInfo_t * __this, const RuntimeMethod* method);
// System.Boolean Newtonsoft.Json.Utilities.ReflectionUtils::IsVirtual(System.Reflection.PropertyInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReflectionUtils_IsVirtual_mA10502AC28F01E162AD4AF7CFB8431535F8A9002 (PropertyInfo_t * ___propertyInfo0, const RuntimeMethod* method);
// System.Reflection.MethodInfo Newtonsoft.Json.Utilities.ReflectionUtils::GetBaseDefinition(System.Reflection.PropertyInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t * ReflectionUtils_GetBaseDefinition_m9C94CC2D98A5D44A6DE0834E8CEB442447B2EF65 (PropertyInfo_t * ___propertyInfo0, const RuntimeMethod* method);
// System.Boolean System.Type::op_Inequality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Inequality_m6DDC5E923203A79BF505F9275B694AD3FAA36DB0 (Type_t * ___left0, Type_t * ___right1, const RuntimeMethod* method);
// System.Void Newtonsoft.Json.Linq.JsonPath.ScanFilter/<ExecuteFilter>d__2::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CExecuteFilterU3Ed__2_U3CU3Em__Finally1_m699DB7F8C7CBBD6FE33C1E4FFF8F56CAC226B004 (U3CExecuteFilterU3Ed__2_t6A9514CF3CFAEC5C49745D57B133C029C022CA5E * __this, const RuntimeMethod* method);
// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JsonPath.PathFilter::GetNextScanValue(Newtonsoft.Json.Linq.JToken,Newtonsoft.Json.Linq.JToken,Newtonsoft.Json.Linq.JToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JToken_t29F54EE35244E7B362E5D54E9517FCD2B0DBE359 * PathFilter_GetNextScanValue_m8A62F6AB8EAA1FE956DBCF92E2D61389F557432A (JToken_t29F54EE35244E7B362E5D54E9517FCD2B0DBE359 * ___originalParent0, JToken_t29F54EE35244E7B362E5D54E9517FCD2B0DBE359 * ___container1, JToken_t29F54EE35244E7B362E5D54E9517FCD2B0DBE359 * ___value2, const RuntimeMethod* method);
// System.Void Newtonsoft.Json.Linq.JsonPath.ScanFilter/<ExecuteFilter>d__2::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CExecuteFilterU3Ed__2_System_IDisposable_Dispose_m8C877F4330CC8B869DCBB90A215C147E551A6A7F (U3CExecuteFilterU3Ed__2_t6A9514CF3CFAEC5C49745D57B133C029C022CA5E * __this, const RuntimeMethod* method);
// System.Void Newtonsoft.Json.Linq.JsonPath.ScanFilter/<ExecuteFilter>d__2::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CExecuteFilterU3Ed__2__ctor_mBA26A80AE67D14C6CAC70EC368DD624969B7A826 (U3CExecuteFilterU3Ed__2_t6A9514CF3CFAEC5C49745D57B133C029C022CA5E * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<Newtonsoft.Json.Linq.JToken> Newtonsoft.Json.Linq.JsonPath.ScanFilter/<ExecuteFilter>d__2::System.Collections.Generic.IEnumerable<Newtonsoft.Json.Linq.JToken>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CExecuteFilterU3Ed__2_System_Collections_Generic_IEnumerableU3CNewtonsoft_Json_Linq_JTokenU3E_GetEnumerator_m424CBF469541C8AD81EC2D110099090CBA7240D6 (U3CExecuteFilterU3Ed__2_t6A9514CF3CFAEC5C49745D57B133C029C022CA5E * __this, const RuntimeMethod* method);
// System.Void Newtonsoft.Json.Linq.JsonPath.ScanMultipleFilter/<ExecuteFilter>d__2::<>m__Finally2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CExecuteFilterU3Ed__2_U3CU3Em__Finally2_m03F8BA06240E8DF3EBFD76A62F052B9C2DD41DE2 (U3CExecuteFilterU3Ed__2_t67C36B546073E9FB034A92E9CDFC8558C33E597C * __this, const RuntimeMethod* method);
// System.Void Newtonsoft.Json.Linq.JsonPath.ScanMultipleFilter/<ExecuteFilter>d__2::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CExecuteFilterU3Ed__2_U3CU3Em__Finally1_mD8FED2F562634D80E3A1E0790EE6E1E12FD6BADF (U3CExecuteFilterU3Ed__2_t67C36B546073E9FB034A92E9CDFC8558C33E597C * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.String>::GetEnumerator()
inline Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B  List_1_GetEnumerator_m35388695226DE2F7B0B5D0A07016716D6AD9CAEF (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B  (*) (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, const RuntimeMethod*))List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<System.String>::get_Current()
inline String_t* Enumerator_get_Current_m9B0E356FA9FCFB9B1BECC6D7C5DF5C03309251AA_inline (Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B *, const RuntimeMethod*))Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.String>::MoveNext()
inline bool Enumerator_MoveNext_mCE70417061695048D84E473D50556E46B8630F54 (Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// System.Void Newtonsoft.Json.Linq.JsonPath.ScanMultipleFilter/<ExecuteFilter>d__2::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CExecuteFilterU3Ed__2_System_IDisposable_Dispose_m6E041BA51CC6F1AB69D3D42F1E97CCD68CEBB261 (U3CExecuteFilterU3Ed__2_t67C36B546073E9FB034A92E9CDFC8558C33E597C * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.String>::Dispose()
inline void Enumerator_Dispose_m65A91D17CADA79F187F4D68980A9C8640B6C9FC7 (Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B *, const RuntimeMethod*))Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared)(__this, method);
}
// System.Void Newtonsoft.Json.Linq.JsonPath.ScanMultipleFilter/<ExecuteFilter>d__2::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CExecuteFilterU3Ed__2__ctor_mA3553D7C2A871950718B306A0F703B43F99DA97C (U3CExecuteFilterU3Ed__2_t67C36B546073E9FB034A92E9CDFC8558C33E597C * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<Newtonsoft.Json.Linq.JToken> Newtonsoft.Json.Linq.JsonPath.ScanMultipleFilter/<ExecuteFilter>d__2::System.Collections.Generic.IEnumerable<Newtonsoft.Json.Linq.JToken>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CExecuteFilterU3Ed__2_System_Collections_Generic_IEnumerableU3CNewtonsoft_Json_Linq_JTokenU3E_GetEnumerator_m2447B7A34602891783509DFCE83C23562F2E6CC9 (U3CExecuteFilterU3Ed__2_t67C36B546073E9FB034A92E9CDFC8558C33E597C * __this, const RuntimeMethod* method);
// System.Void Newtonsoft.Json.Linq.JObject/JObjectDynamicProxy/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m46139533E4DDF6094CBED2C52C9F9C656C08176E (U3CU3Ec_t69B92625E75B6733719EC0111D83CBBA38E18FB2 * __this, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Newtonsoft.Json.Utilities.ImmutableCollectionsUtils/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m6318D4B4A7FBA73589C5D051947ACF3A4FEB00B4 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tC7BF6D75D37E7B375E3ABA82A78DE1344084B231_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tC7BF6D75D37E7B375E3ABA82A78DE1344084B231 * L_0 = (U3CU3Ec_tC7BF6D75D37E7B375E3ABA82A78DE1344084B231 *)il2cpp_codegen_object_new(U3CU3Ec_tC7BF6D75D37E7B375E3ABA82A78DE1344084B231_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mBE1CA068B0B39D7A472D43A208777E9A4AFF7D29(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tC7BF6D75D37E7B375E3ABA82A78DE1344084B231_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tC7BF6D75D37E7B375E3ABA82A78DE1344084B231_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Newtonsoft.Json.Utilities.ImmutableCollectionsUtils/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mBE1CA068B0B39D7A472D43A208777E9A4AFF7D29 (U3CU3Ec_tC7BF6D75D37E7B375E3ABA82A78DE1344084B231 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Newtonsoft.Json.Utilities.ImmutableCollectionsUtils/<>c::<TryBuildImmutableForArrayContract>b__24_1(System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CTryBuildImmutableForArrayContractU3Eb__24_1_m9FCA39DC9784C5485180092BECC3D5E04683A5B8 (U3CU3Ec_tC7BF6D75D37E7B375E3ABA82A78DE1344084B231 * __this, MethodInfo_t * ___m0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1071603CBA2BD3C11874C92C7C0DB97BF5899046);
		s_Il2CppMethodInitialized = true;
	}
	{
		MethodInfo_t * L_0 = ___m0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_0);
		bool L_2;
		L_2 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_1, _stringLiteral1071603CBA2BD3C11874C92C7C0DB97BF5899046, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		MethodInfo_t * L_3 = ___m0;
		NullCheck(L_3);
		ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B* L_4;
		L_4 = VirtFuncInvoker0< ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B* >::Invoke(18 /* System.Reflection.ParameterInfo[] System.Reflection.MethodBase::GetParameters() */, L_3);
		NullCheck(L_4);
		return (bool)((((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length)))) == ((int32_t)1))? 1 : 0);
	}

IL_001e:
	{
		return (bool)0;
	}
}
// System.Boolean Newtonsoft.Json.Utilities.ImmutableCollectionsUtils/<>c::<TryBuildImmutableForDictionaryContract>b__25_1(System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CTryBuildImmutableForDictionaryContractU3Eb__25_1_mD520AB391A680F6C787D5FFD693BE36D5910024C (U3CU3Ec_tC7BF6D75D37E7B375E3ABA82A78DE1344084B231 * __this, MethodInfo_t * ___m0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t2DA210D3B033E1BEBFC81C153FA1C67749C6D264_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1071603CBA2BD3C11874C92C7C0DB97BF5899046);
		s_Il2CppMethodInitialized = true;
	}
	ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B* V_0 = NULL;
	{
		MethodInfo_t * L_0 = ___m0;
		NullCheck(L_0);
		ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B* L_1;
		L_1 = VirtFuncInvoker0< ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B* >::Invoke(18 /* System.Reflection.ParameterInfo[] System.Reflection.MethodBase::GetParameters() */, L_0);
		V_0 = L_1;
		MethodInfo_t * L_2 = ___m0;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_2);
		bool L_4;
		L_4 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_3, _stringLiteral1071603CBA2BD3C11874C92C7C0DB97BF5899046, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_004b;
		}
	}
	{
		ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B* L_5 = V_0;
		NullCheck(L_5);
		if ((!(((uint32_t)((int32_t)((int32_t)(((RuntimeArray*)L_5)->max_length)))) == ((uint32_t)1))))
		{
			goto IL_004b;
		}
	}
	{
		ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B* L_6 = V_0;
		NullCheck(L_6);
		int32_t L_7 = 0;
		ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 * L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		NullCheck(L_8);
		Type_t * L_9;
		L_9 = VirtFuncInvoker0< Type_t * >::Invoke(8 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, L_8);
		bool L_10;
		L_10 = TypeExtensions_IsGenericType_m1711832916F64D6F871FB0EEC916552C0B66DF32(L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_004b;
		}
	}
	{
		ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B* L_11 = V_0;
		NullCheck(L_11);
		int32_t L_12 = 0;
		ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 * L_13 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		NullCheck(L_13);
		Type_t * L_14;
		L_14 = VirtFuncInvoker0< Type_t * >::Invoke(8 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, L_13);
		NullCheck(L_14);
		Type_t * L_15;
		L_15 = VirtFuncInvoker0< Type_t * >::Invoke(107 /* System.Type System.Type::GetGenericTypeDefinition() */, L_14);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_16 = { reinterpret_cast<intptr_t> (IEnumerable_1_t2DA210D3B033E1BEBFC81C153FA1C67749C6D264_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_17;
		L_17 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_16, /*hidden argument*/NULL);
		bool L_18;
		L_18 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046(L_15, L_17, /*hidden argument*/NULL);
		return L_18;
	}

IL_004b:
	{
		return (bool)0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Newtonsoft.Json.Utilities.ImmutableCollectionsUtils/<>c__DisplayClass24_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass24_0__ctor_m88CE8BC78C1DCE49C34D6B4787FDB6EE5FB3F8EB (U3CU3Ec__DisplayClass24_0_tC2CEDA75B8FFC26A954AFE3DDEC606C92CCB9AC1 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Newtonsoft.Json.Utilities.ImmutableCollectionsUtils/<>c__DisplayClass24_0::<TryBuildImmutableForArrayContract>b__0(Newtonsoft.Json.Utilities.ImmutableCollectionsUtils/ImmutableCollectionTypeInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass24_0_U3CTryBuildImmutableForArrayContractU3Eb__0_mF5A5930311D5191336254A8F8BC13EAACA5DA38E (U3CU3Ec__DisplayClass24_0_tC2CEDA75B8FFC26A954AFE3DDEC606C92CCB9AC1 * __this, ImmutableCollectionTypeInfo_t89E5B5C21753029E7770B0AB5EE30D754F18F2B4 * ___d0, const RuntimeMethod* method)
{
	{
		ImmutableCollectionTypeInfo_t89E5B5C21753029E7770B0AB5EE30D754F18F2B4 * L_0 = ___d0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = ImmutableCollectionTypeInfo_get_ContractTypeName_m31846FE220CAFF2E4EEC92D64EAD17FCE7C48FFA_inline(L_0, /*hidden argument*/NULL);
		String_t* L_2 = __this->get_name_0();
		bool L_3;
		L_3 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Newtonsoft.Json.Utilities.ImmutableCollectionsUtils/<>c__DisplayClass25_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass25_0__ctor_m4CC9152EC2E0D00084179484701C4D41D5B1B512 (U3CU3Ec__DisplayClass25_0_t06458F72EF35C25F3450D4C9073A0AECEF03E502 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Newtonsoft.Json.Utilities.ImmutableCollectionsUtils/<>c__DisplayClass25_0::<TryBuildImmutableForDictionaryContract>b__0(Newtonsoft.Json.Utilities.ImmutableCollectionsUtils/ImmutableCollectionTypeInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass25_0_U3CTryBuildImmutableForDictionaryContractU3Eb__0_m5875E80EE9008FABCBC0727F8F33B4C5078B28BB (U3CU3Ec__DisplayClass25_0_t06458F72EF35C25F3450D4C9073A0AECEF03E502 * __this, ImmutableCollectionTypeInfo_t89E5B5C21753029E7770B0AB5EE30D754F18F2B4 * ___d0, const RuntimeMethod* method)
{
	{
		ImmutableCollectionTypeInfo_t89E5B5C21753029E7770B0AB5EE30D754F18F2B4 * L_0 = ___d0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = ImmutableCollectionTypeInfo_get_ContractTypeName_m31846FE220CAFF2E4EEC92D64EAD17FCE7C48FFA_inline(L_0, /*hidden argument*/NULL);
		String_t* L_2 = __this->get_name_0();
		bool L_3;
		L_3 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Newtonsoft.Json.Utilities.ImmutableCollectionsUtils/ImmutableCollectionTypeInfo::.ctor(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImmutableCollectionTypeInfo__ctor_mB3367B7E8EAB9F862F6563AFFDFC20D175888AD8 (ImmutableCollectionTypeInfo_t89E5B5C21753029E7770B0AB5EE30D754F18F2B4 * __this, String_t* ___contractTypeName0, String_t* ___createdTypeName1, String_t* ___builderTypeName2, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___contractTypeName0;
		ImmutableCollectionTypeInfo_set_ContractTypeName_m557C2C9886F1B2696D71516EE4FCAF1F6AC3C3CB_inline(__this, L_0, /*hidden argument*/NULL);
		String_t* L_1 = ___createdTypeName1;
		ImmutableCollectionTypeInfo_set_CreatedTypeName_mAD2BB9DFA67CEF4D93A2B9A33EB6AF5C87F79481_inline(__this, L_1, /*hidden argument*/NULL);
		String_t* L_2 = ___builderTypeName2;
		ImmutableCollectionTypeInfo_set_BuilderTypeName_m60DAEBA3741BEA2E92F652384B248D1DA78B59AF_inline(__this, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.String Newtonsoft.Json.Utilities.ImmutableCollectionsUtils/ImmutableCollectionTypeInfo::get_ContractTypeName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ImmutableCollectionTypeInfo_get_ContractTypeName_m31846FE220CAFF2E4EEC92D64EAD17FCE7C48FFA (ImmutableCollectionTypeInfo_t89E5B5C21753029E7770B0AB5EE30D754F18F2B4 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CContractTypeNameU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void Newtonsoft.Json.Utilities.ImmutableCollectionsUtils/ImmutableCollectionTypeInfo::set_ContractTypeName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImmutableCollectionTypeInfo_set_ContractTypeName_m557C2C9886F1B2696D71516EE4FCAF1F6AC3C3CB (ImmutableCollectionTypeInfo_t89E5B5C21753029E7770B0AB5EE30D754F18F2B4 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CContractTypeNameU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.String Newtonsoft.Json.Utilities.ImmutableCollectionsUtils/ImmutableCollectionTypeInfo::get_CreatedTypeName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ImmutableCollectionTypeInfo_get_CreatedTypeName_mD0A01411103C34212AD42F75D5E8DFAED550075A (ImmutableCollectionTypeInfo_t89E5B5C21753029E7770B0AB5EE30D754F18F2B4 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CCreatedTypeNameU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void Newtonsoft.Json.Utilities.ImmutableCollectionsUtils/ImmutableCollectionTypeInfo::set_CreatedTypeName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImmutableCollectionTypeInfo_set_CreatedTypeName_mAD2BB9DFA67CEF4D93A2B9A33EB6AF5C87F79481 (ImmutableCollectionTypeInfo_t89E5B5C21753029E7770B0AB5EE30D754F18F2B4 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CCreatedTypeNameU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.String Newtonsoft.Json.Utilities.ImmutableCollectionsUtils/ImmutableCollectionTypeInfo::get_BuilderTypeName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ImmutableCollectionTypeInfo_get_BuilderTypeName_m5753FBA04011DABFF8826C0A337256F713E9E90F (ImmutableCollectionTypeInfo_t89E5B5C21753029E7770B0AB5EE30D754F18F2B4 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CBuilderTypeNameU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void Newtonsoft.Json.Utilities.ImmutableCollectionsUtils/ImmutableCollectionTypeInfo::set_BuilderTypeName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImmutableCollectionTypeInfo_set_BuilderTypeName_m60DAEBA3741BEA2E92F652384B248D1DA78B59AF (ImmutableCollectionTypeInfo_t89E5B5C21753029E7770B0AB5EE30D754F18F2B4 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CBuilderTypeNameU3Ek__BackingField_2(L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Newtonsoft.Json.Linq.JContainer/<GetDescendants>d__36::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetDescendantsU3Ed__36__ctor_m1AF7670765F8430016859B12A24B5EA91EC42AB0 (U3CGetDescendantsU3Ed__36_t2DF4F7529B67D1F4152A061154DFC629029DB527 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		int32_t L_1;
		L_1 = Environment_get_CurrentManagedThreadId_m09DBD4166BFD399056B2F81C77A3A182339BF92D(/*hidden argument*/NULL);
		__this->set_U3CU3El__initialThreadId_2(L_1);
		return;
	}
}
// System.Void Newtonsoft.Json.Linq.JContainer/<GetDescendants>d__36::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetDescendantsU3Ed__36_System_IDisposable_Dispose_m2494DE5F2CCD689F6C01327173F9484AE9A5302F (U3CGetDescendantsU3Ed__36_t2DF4F7529B67D1F4152A061154DFC629029DB527 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)((int32_t)-4)))) > ((uint32_t)1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)2))) <= ((uint32_t)1))))
		{
			goto IL_0031;
		}
	}

IL_0014:
	{
	}

IL_0015:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_3 = V_0;
			if ((((int32_t)L_3) == ((int32_t)((int32_t)-4))))
			{
				goto IL_0020;
			}
		}

IL_001a:
		{
			int32_t L_4 = V_0;
			if ((((int32_t)L_4) == ((int32_t)3)))
			{
				goto IL_0020;
			}
		}

IL_001e:
		{
			IL2CPP_LEAVE(0x31, FINALLY_002a);
		}

IL_0020:
		{
		}

IL_0021:
		try
		{ // begin try (depth: 2)
			IL2CPP_LEAVE(0x31, FINALLY_0023);
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_0023;
		}

FINALLY_0023:
		{ // begin finally (depth: 2)
			U3CGetDescendantsU3Ed__36_U3CU3Em__Finally2_mD5950FB502AD324ADF0134EAFB885D3E90160E82(__this, /*hidden argument*/NULL);
			IL2CPP_END_FINALLY(35)
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(35)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_END_CLEANUP(0x31, FINALLY_002a);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_002a;
	}

FINALLY_002a:
	{ // begin finally (depth: 1)
		U3CGetDescendantsU3Ed__36_U3CU3Em__Finally1_m9EF703A6509626FCFAD152B5E0496FE107DEDA82(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(42)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(42)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x31, IL_0031)
	}

IL_0031:
	{
		return;
	}
}
// System.Boolean Newtonsoft.Json.Linq.JContainer/<GetDescendants>d__36::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CGetDescendantsU3Ed__36_MoveNext_m3E6A05598C472BA4E9FEABB8B2E70C8BF42C2493 (U3CGetDescendantsU3Ed__36_t2DF4F7529B67D1F4152A061154DFC629029DB527 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tA97507BE4EA999D3A37CBC336924BFEA67C9FE9E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t6D746D34D007AC6D34C5279EA90DA276DDF70281_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JContainer_t38DD4DF522660749764609AA408DFD0575BABE3F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	JContainer_t38DD4DF522660749764609AA408DFD0575BABE3F * V_2 = NULL;
	JContainer_t38DD4DF522660749764609AA408DFD0575BABE3F * V_3 = NULL;
	JToken_t29F54EE35244E7B362E5D54E9517FCD2B0DBE359 * V_4 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 5> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_0 = __this->get_U3CU3E1__state_0();
			V_1 = L_0;
			JContainer_t38DD4DF522660749764609AA408DFD0575BABE3F * L_1 = __this->get_U3CU3E4__this_5();
			V_2 = L_1;
			int32_t L_2 = V_1;
			switch (L_2)
			{
				case 0:
				{
					goto IL_002b;
				}
				case 1:
				{
					goto IL_004f;
				}
				case 2:
				{
					goto IL_009f;
				}
				case 3:
				{
					goto IL_00f1;
				}
			}
		}

IL_0024:
		{
			V_0 = (bool)0;
			goto IL_0142;
		}

IL_002b:
		{
			__this->set_U3CU3E1__state_0((-1));
			bool L_3 = __this->get_self_3();
			if (!L_3)
			{
				goto IL_0056;
			}
		}

IL_003a:
		{
			JContainer_t38DD4DF522660749764609AA408DFD0575BABE3F * L_4 = V_2;
			__this->set_U3CU3E2__current_1(L_4);
			__this->set_U3CU3E1__state_0(1);
			V_0 = (bool)1;
			goto IL_0142;
		}

IL_004f:
		{
			__this->set_U3CU3E1__state_0((-1));
		}

IL_0056:
		{
			JContainer_t38DD4DF522660749764609AA408DFD0575BABE3F * L_5 = V_2;
			NullCheck(L_5);
			RuntimeObject* L_6;
			L_6 = VirtFuncInvoker0< RuntimeObject* >::Invoke(49 /* System.Collections.Generic.IList`1<Newtonsoft.Json.Linq.JToken> Newtonsoft.Json.Linq.JContainer::get_ChildrenTokens() */, L_5);
			NullCheck(L_6);
			RuntimeObject* L_7;
			L_7 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<Newtonsoft.Json.Linq.JToken>::GetEnumerator() */, IEnumerable_1_tA97507BE4EA999D3A37CBC336924BFEA67C9FE9E_il2cpp_TypeInfo_var, L_6);
			__this->set_U3CU3E7__wrap1_6(L_7);
			__this->set_U3CU3E1__state_0(((int32_t)-3));
			goto IL_011a;
		}

IL_0074:
		{
			RuntimeObject* L_8 = __this->get_U3CU3E7__wrap1_6();
			NullCheck(L_8);
			JToken_t29F54EE35244E7B362E5D54E9517FCD2B0DBE359 * L_9;
			L_9 = InterfaceFuncInvoker0< JToken_t29F54EE35244E7B362E5D54E9517FCD2B0DBE359 * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<Newtonsoft.Json.Linq.JToken>::get_Current() */, IEnumerator_1_t6D746D34D007AC6D34C5279EA90DA276DDF70281_il2cpp_TypeInfo_var, L_8);
			__this->set_U3CoU3E5__3_7(L_9);
			JToken_t29F54EE35244E7B362E5D54E9517FCD2B0DBE359 * L_10 = __this->get_U3CoU3E5__3_7();
			__this->set_U3CU3E2__current_1(L_10);
			__this->set_U3CU3E1__state_0(2);
			V_0 = (bool)1;
			goto IL_0142;
		}

IL_009f:
		{
			__this->set_U3CU3E1__state_0(((int32_t)-3));
			JToken_t29F54EE35244E7B362E5D54E9517FCD2B0DBE359 * L_11 = __this->get_U3CoU3E5__3_7();
			V_3 = ((JContainer_t38DD4DF522660749764609AA408DFD0575BABE3F *)IsInstClass((RuntimeObject*)L_11, JContainer_t38DD4DF522660749764609AA408DFD0575BABE3F_il2cpp_TypeInfo_var));
			JContainer_t38DD4DF522660749764609AA408DFD0575BABE3F * L_12 = V_3;
			if (!L_12)
			{
				goto IL_0113;
			}
		}

IL_00b6:
		{
			JContainer_t38DD4DF522660749764609AA408DFD0575BABE3F * L_13 = V_3;
			NullCheck(L_13);
			RuntimeObject* L_14;
			L_14 = JContainer_Descendants_m6D5C4087D3114D13A9466F8306F4DE8E5E7A694D(L_13, /*hidden argument*/NULL);
			NullCheck(L_14);
			RuntimeObject* L_15;
			L_15 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<Newtonsoft.Json.Linq.JToken>::GetEnumerator() */, IEnumerable_1_tA97507BE4EA999D3A37CBC336924BFEA67C9FE9E_il2cpp_TypeInfo_var, L_14);
			__this->set_U3CU3E7__wrap3_8(L_15);
			__this->set_U3CU3E1__state_0(((int32_t)-4));
			goto IL_00f9;
		}

IL_00d1:
		{
			RuntimeObject* L_16 = __this->get_U3CU3E7__wrap3_8();
			NullCheck(L_16);
			JToken_t29F54EE35244E7B362E5D54E9517FCD2B0DBE359 * L_17;
			L_17 = InterfaceFuncInvoker0< JToken_t29F54EE35244E7B362E5D54E9517FCD2B0DBE359 * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<Newtonsoft.Json.Linq.JToken>::get_Current() */, IEnumerator_1_t6D746D34D007AC6D34C5279EA90DA276DDF70281_il2cpp_TypeInfo_var, L_16);
			V_4 = L_17;
			JToken_t29F54EE35244E7B362E5D54E9517FCD2B0DBE359 * L_18 = V_4;
			__this->set_U3CU3E2__current_1(L_18);
			__this->set_U3CU3E1__state_0(3);
			V_0 = (bool)1;
			goto IL_0142;
		}

IL_00f1:
		{
			__this->set_U3CU3E1__state_0(((int32_t)-4));
		}

IL_00f9:
		{
			RuntimeObject* L_19 = __this->get_U3CU3E7__wrap3_8();
			NullCheck(L_19);
			bool L_20;
			L_20 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_19);
			if (L_20)
			{
				goto IL_00d1;
			}
		}

IL_0106:
		{
			U3CGetDescendantsU3Ed__36_U3CU3Em__Finally2_mD5950FB502AD324ADF0134EAFB885D3E90160E82(__this, /*hidden argument*/NULL);
			__this->set_U3CU3E7__wrap3_8((RuntimeObject*)NULL);
		}

IL_0113:
		{
			__this->set_U3CoU3E5__3_7((JToken_t29F54EE35244E7B362E5D54E9517FCD2B0DBE359 *)NULL);
		}

IL_011a:
		{
			RuntimeObject* L_21 = __this->get_U3CU3E7__wrap1_6();
			NullCheck(L_21);
			bool L_22;
			L_22 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_21);
			if (L_22)
			{
				goto IL_0074;
			}
		}

IL_012a:
		{
			U3CGetDescendantsU3Ed__36_U3CU3Em__Finally1_m9EF703A6509626FCFAD152B5E0496FE107DEDA82(__this, /*hidden argument*/NULL);
			__this->set_U3CU3E7__wrap1_6((RuntimeObject*)NULL);
			V_0 = (bool)0;
			goto IL_0142;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FAULT_013b;
	}

FAULT_013b:
	{ // begin fault (depth: 1)
		U3CGetDescendantsU3Ed__36_System_IDisposable_Dispose_m2494DE5F2CCD689F6C01327173F9484AE9A5302F(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(315)
	} // end fault
	IL2CPP_CLEANUP(315)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0142:
	{
		bool L_23 = V_0;
		return L_23;
	}
}
// System.Void Newtonsoft.Json.Linq.JContainer/<GetDescendants>d__36::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetDescendantsU3Ed__36_U3CU3Em__Finally1_m9EF703A6509626FCFAD152B5E0496FE107DEDA82 (U3CGetDescendantsU3Ed__36_t2DF4F7529B67D1F4152A061154DFC629029DB527 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_U3CU3E1__state_0((-1));
		RuntimeObject* L_0 = __this->get_U3CU3E7__wrap1_6();
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject* L_1 = __this->get_U3CU3E7__wrap1_6();
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_1);
	}

IL_001a:
	{
		return;
	}
}
// System.Void Newtonsoft.Json.Linq.JContainer/<GetDescendants>d__36::<>m__Finally2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetDescendantsU3Ed__36_U3CU3Em__Finally2_mD5950FB502AD324ADF0134EAFB885D3E90160E82 (U3CGetDescendantsU3Ed__36_t2DF4F7529B67D1F4152A061154DFC629029DB527 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_U3CU3E1__state_0(((int32_t)-3));
		RuntimeObject* L_0 = __this->get_U3CU3E7__wrap3_8();
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		RuntimeObject* L_1 = __this->get_U3CU3E7__wrap3_8();
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_1);
	}

IL_001b:
	{
		return;
	}
}
// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JContainer/<GetDescendants>d__36::System.Collections.Generic.IEnumerator<Newtonsoft.Json.Linq.JToken>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JToken_t29F54EE35244E7B362E5D54E9517FCD2B0DBE359 * U3CGetDescendantsU3Ed__36_System_Collections_Generic_IEnumeratorU3CNewtonsoft_Json_Linq_JTokenU3E_get_Current_m27B756CB7AEAD052268781B9107D17923EBA4433 (U3CGetDescendantsU3Ed__36_t2DF4F7529B67D1F4152A061154DFC629029DB527 * __this, const RuntimeMethod* method)
{
	{
		JToken_t29F54EE35244E7B362E5D54E9517FCD2B0DBE359 * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Newtonsoft.Json.Linq.JContainer/<GetDescendants>d__36::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetDescendantsU3Ed__36_System_Collections_IEnumerator_Reset_mFC4CC760F6B6332B82A1C790258B0E6C2B50E80F (U3CGetDescendantsU3Ed__36_t2DF4F7529B67D1F4152A061154DFC629029DB527 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CGetDescendantsU3Ed__36_System_Collections_IEnumerator_Reset_mFC4CC760F6B6332B82A1C790258B0E6C2B50E80F_RuntimeMethod_var)));
	}
}
// System.Object Newtonsoft.Json.Linq.JContainer/<GetDescendants>d__36::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CGetDescendantsU3Ed__36_System_Collections_IEnumerator_get_Current_mABE5029FFCD37BFCA3BD4B1D43C034FDC99AD74F (U3CGetDescendantsU3Ed__36_t2DF4F7529B67D1F4152A061154DFC629029DB527 * __this, const RuntimeMethod* method)
{
	{
		JToken_t29F54EE35244E7B362E5D54E9517FCD2B0DBE359 * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<Newtonsoft.Json.Linq.JToken> Newtonsoft.Json.Linq.JContainer/<GetDescendants>d__36::System.Collections.Generic.IEnumerable<Newtonsoft.Json.Linq.JToken>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetDescendantsU3Ed__36_System_Collections_Generic_IEnumerableU3CNewtonsoft_Json_Linq_JTokenU3E_GetEnumerator_mF77579E32B9A25FB07F4354F9FF12F15F84E1831 (U3CGetDescendantsU3Ed__36_t2DF4F7529B67D1F4152A061154DFC629029DB527 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CGetDescendantsU3Ed__36_t2DF4F7529B67D1F4152A061154DFC629029DB527_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CGetDescendantsU3Ed__36_t2DF4F7529B67D1F4152A061154DFC629029DB527 * V_0 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_1 = __this->get_U3CU3El__initialThreadId_2();
		int32_t L_2;
		L_2 = Environment_get_CurrentManagedThreadId_m09DBD4166BFD399056B2F81C77A3A182339BF92D(/*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_0022;
		}
	}
	{
		__this->set_U3CU3E1__state_0(0);
		V_0 = __this;
		goto IL_0035;
	}

IL_0022:
	{
		U3CGetDescendantsU3Ed__36_t2DF4F7529B67D1F4152A061154DFC629029DB527 * L_3 = (U3CGetDescendantsU3Ed__36_t2DF4F7529B67D1F4152A061154DFC629029DB527 *)il2cpp_codegen_object_new(U3CGetDescendantsU3Ed__36_t2DF4F7529B67D1F4152A061154DFC629029DB527_il2cpp_TypeInfo_var);
		U3CGetDescendantsU3Ed__36__ctor_m1AF7670765F8430016859B12A24B5EA91EC42AB0(L_3, 0, /*hidden argument*/NULL);
		V_0 = L_3;
		U3CGetDescendantsU3Ed__36_t2DF4F7529B67D1F4152A061154DFC629029DB527 * L_4 = V_0;
		JContainer_t38DD4DF522660749764609AA408DFD0575BABE3F * L_5 = __this->get_U3CU3E4__this_5();
		NullCheck(L_4);
		L_4->set_U3CU3E4__this_5(L_5);
	}

IL_0035:
	{
		U3CGetDescendantsU3Ed__36_t2DF4F7529B67D1F4152A061154DFC629029DB527 * L_6 = V_0;
		bool L_7 = __this->get_U3CU3E3__self_4();
		NullCheck(L_6);
		L_6->set_self_3(L_7);
		U3CGetDescendantsU3Ed__36_t2DF4F7529B67D1F4152A061154DFC629029DB527 * L_8 = V_0;
		return L_8;
	}
}
// System.Collections.IEnumerator Newtonsoft.Json.Linq.JContainer/<GetDescendants>d__36::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetDescendantsU3Ed__36_System_Collections_IEnumerable_GetEnumerator_m2B46C4565A79EB05B6020FFED79FDDCCA32BA638 (U3CGetDescendantsU3Ed__36_t2DF4F7529B67D1F4152A061154DFC629029DB527 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0;
		L_0 = U3CGetDescendantsU3Ed__36_System_Collections_Generic_IEnumerableU3CNewtonsoft_Json_Linq_JTokenU3E_GetEnumerator_mF77579E32B9A25FB07F4354F9FF12F15F84E1831(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Newtonsoft.Json.Linq.JObject/<GetEnumerator>d__63::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__63__ctor_m2C4D8B78ECEEB401C397A39C8B16AB22BA20D8E8 (U3CGetEnumeratorU3Ed__63_tE454846B9514A03E19A8106BCD94046B4D4A832D * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Newtonsoft.Json.Linq.JObject/<GetEnumerator>d__63::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__63_System_IDisposable_Dispose_m04226382F2354112526A2698882B33C12F424CF8 (U3CGetEnumeratorU3Ed__63_tE454846B9514A03E19A8106BCD94046B4D4A832D * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_001a;
		}
	}

IL_0010:
	{
	}

IL_0011:
	try
	{ // begin try (depth: 1)
		IL2CPP_LEAVE(0x1A, FINALLY_0013);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0013;
	}

FINALLY_0013:
	{ // begin finally (depth: 1)
		U3CGetEnumeratorU3Ed__63_U3CU3Em__Finally1_m83ED9BF831F33C6EF68C6A60B3517F5DDA511543(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(19)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(19)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x1A, IL_001a)
	}

IL_001a:
	{
		return;
	}
}
// System.Boolean Newtonsoft.Json.Linq.JObject/<GetEnumerator>d__63::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CGetEnumeratorU3Ed__63_MoveNext_mEE7D107A44846BE118ABF529E6115D1A46C77AC6 (U3CGetEnumeratorU3Ed__63_tE454846B9514A03E19A8106BCD94046B4D4A832D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Collection_1_GetEnumerator_m9A9AF809D0758FE594BBBC3CD836A13AC0D4E9B8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t6D746D34D007AC6D34C5279EA90DA276DDF70281_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JProperty_tF9DA59F1EB857859581CDEE663A2A0040D5A9A53_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2__ctor_m4CD42BCF51048E24BA23842C9A59B9819BD9A94D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	JObject_t3ABEFC12B3B74EC00B7032CD365434C91B076FDE * V_2 = NULL;
	JProperty_tF9DA59F1EB857859581CDEE663A2A0040D5A9A53 * V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_0 = __this->get_U3CU3E1__state_0();
			V_1 = L_0;
			JObject_t3ABEFC12B3B74EC00B7032CD365434C91B076FDE * L_1 = __this->get_U3CU3E4__this_2();
			V_2 = L_1;
			int32_t L_2 = V_1;
			if (!L_2)
			{
				goto IL_001c;
			}
		}

IL_0011:
		{
			int32_t L_3 = V_1;
			if ((((int32_t)L_3) == ((int32_t)1)))
			{
				goto IL_0071;
			}
		}

IL_0015:
		{
			V_0 = (bool)0;
			goto IL_009e;
		}

IL_001c:
		{
			__this->set_U3CU3E1__state_0((-1));
			JObject_t3ABEFC12B3B74EC00B7032CD365434C91B076FDE * L_4 = V_2;
			NullCheck(L_4);
			JPropertyKeyedCollection_t53866F50942B265AFC54305B4437D5B9173FDF48 * L_5 = L_4->get__properties_18();
			NullCheck(L_5);
			RuntimeObject* L_6;
			L_6 = Collection_1_GetEnumerator_m9A9AF809D0758FE594BBBC3CD836A13AC0D4E9B8(L_5, /*hidden argument*/Collection_1_GetEnumerator_m9A9AF809D0758FE594BBBC3CD836A13AC0D4E9B8_RuntimeMethod_var);
			__this->set_U3CU3E7__wrap1_3(L_6);
			__this->set_U3CU3E1__state_0(((int32_t)-3));
			goto IL_0079;
		}

IL_003e:
		{
			RuntimeObject* L_7 = __this->get_U3CU3E7__wrap1_3();
			NullCheck(L_7);
			JToken_t29F54EE35244E7B362E5D54E9517FCD2B0DBE359 * L_8;
			L_8 = InterfaceFuncInvoker0< JToken_t29F54EE35244E7B362E5D54E9517FCD2B0DBE359 * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<Newtonsoft.Json.Linq.JToken>::get_Current() */, IEnumerator_1_t6D746D34D007AC6D34C5279EA90DA276DDF70281_il2cpp_TypeInfo_var, L_7);
			V_3 = ((JProperty_tF9DA59F1EB857859581CDEE663A2A0040D5A9A53 *)CastclassClass((RuntimeObject*)L_8, JProperty_tF9DA59F1EB857859581CDEE663A2A0040D5A9A53_il2cpp_TypeInfo_var));
			JProperty_tF9DA59F1EB857859581CDEE663A2A0040D5A9A53 * L_9 = V_3;
			NullCheck(L_9);
			String_t* L_10;
			L_10 = JProperty_get_Name_mF3BBAB949CDF1B517CAF1BE2B2014771B43E3A1D_inline(L_9, /*hidden argument*/NULL);
			JProperty_tF9DA59F1EB857859581CDEE663A2A0040D5A9A53 * L_11 = V_3;
			NullCheck(L_11);
			JToken_t29F54EE35244E7B362E5D54E9517FCD2B0DBE359 * L_12;
			L_12 = JProperty_get_Value_m6CBB4C6E86803F3150F1454AD6C78B883C45946C(L_11, /*hidden argument*/NULL);
			KeyValuePair_2_t9967CE3AA01B66D662E4BE42AC4A1AC4FA262636  L_13;
			memset((&L_13), 0, sizeof(L_13));
			KeyValuePair_2__ctor_m4CD42BCF51048E24BA23842C9A59B9819BD9A94D((&L_13), L_10, L_12, /*hidden argument*/KeyValuePair_2__ctor_m4CD42BCF51048E24BA23842C9A59B9819BD9A94D_RuntimeMethod_var);
			__this->set_U3CU3E2__current_1(L_13);
			__this->set_U3CU3E1__state_0(1);
			V_0 = (bool)1;
			goto IL_009e;
		}

IL_0071:
		{
			__this->set_U3CU3E1__state_0(((int32_t)-3));
		}

IL_0079:
		{
			RuntimeObject* L_14 = __this->get_U3CU3E7__wrap1_3();
			NullCheck(L_14);
			bool L_15;
			L_15 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_14);
			if (L_15)
			{
				goto IL_003e;
			}
		}

IL_0086:
		{
			U3CGetEnumeratorU3Ed__63_U3CU3Em__Finally1_m83ED9BF831F33C6EF68C6A60B3517F5DDA511543(__this, /*hidden argument*/NULL);
			__this->set_U3CU3E7__wrap1_3((RuntimeObject*)NULL);
			V_0 = (bool)0;
			goto IL_009e;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FAULT_0097;
	}

FAULT_0097:
	{ // begin fault (depth: 1)
		U3CGetEnumeratorU3Ed__63_System_IDisposable_Dispose_m04226382F2354112526A2698882B33C12F424CF8(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(151)
	} // end fault
	IL2CPP_CLEANUP(151)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_009e:
	{
		bool L_16 = V_0;
		return L_16;
	}
}
// System.Void Newtonsoft.Json.Linq.JObject/<GetEnumerator>d__63::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__63_U3CU3Em__Finally1_m83ED9BF831F33C6EF68C6A60B3517F5DDA511543 (U3CGetEnumeratorU3Ed__63_tE454846B9514A03E19A8106BCD94046B4D4A832D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_U3CU3E1__state_0((-1));
		RuntimeObject* L_0 = __this->get_U3CU3E7__wrap1_3();
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject* L_1 = __this->get_U3CU3E7__wrap1_3();
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_1);
	}

IL_001a:
	{
		return;
	}
}
// System.Collections.Generic.KeyValuePair`2<System.String,Newtonsoft.Json.Linq.JToken> Newtonsoft.Json.Linq.JObject/<GetEnumerator>d__63::System.Collections.Generic.IEnumerator<System.Collections.Generic.KeyValuePair<System.String,Newtonsoft.Json.Linq.JToken>>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValuePair_2_t9967CE3AA01B66D662E4BE42AC4A1AC4FA262636  U3CGetEnumeratorU3Ed__63_System_Collections_Generic_IEnumeratorU3CSystem_Collections_Generic_KeyValuePairU3CSystem_StringU2CNewtonsoft_Json_Linq_JTokenU3EU3E_get_Current_m0F103E35E126AD24D015750457D7D367583AF047 (U3CGetEnumeratorU3Ed__63_tE454846B9514A03E19A8106BCD94046B4D4A832D * __this, const RuntimeMethod* method)
{
	{
		KeyValuePair_2_t9967CE3AA01B66D662E4BE42AC4A1AC4FA262636  L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Newtonsoft.Json.Linq.JObject/<GetEnumerator>d__63::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__63_System_Collections_IEnumerator_Reset_m22A141669BCF4A5CE19D1A27F96C5166880BABAE (U3CGetEnumeratorU3Ed__63_tE454846B9514A03E19A8106BCD94046B4D4A832D * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CGetEnumeratorU3Ed__63_System_Collections_IEnumerator_Reset_m22A141669BCF4A5CE19D1A27F96C5166880BABAE_RuntimeMethod_var)));
	}
}
// System.Object Newtonsoft.Json.Linq.JObject/<GetEnumerator>d__63::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CGetEnumeratorU3Ed__63_System_Collections_IEnumerator_get_Current_m604007E00C7FEB554807CCF3740C877D7169C7B9 (U3CGetEnumeratorU3Ed__63_tE454846B9514A03E19A8106BCD94046B4D4A832D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_t9967CE3AA01B66D662E4BE42AC4A1AC4FA262636_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		KeyValuePair_2_t9967CE3AA01B66D662E4BE42AC4A1AC4FA262636  L_0 = __this->get_U3CU3E2__current_1();
		KeyValuePair_2_t9967CE3AA01B66D662E4BE42AC4A1AC4FA262636  L_1 = L_0;
		RuntimeObject * L_2 = Box(KeyValuePair_2_t9967CE3AA01B66D662E4BE42AC4A1AC4FA262636_il2cpp_TypeInfo_var, &L_1);
		return L_2;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Collections.Generic.IEnumerable`1<System.String> Newtonsoft.Json.Linq.JObject/JObjectDynamicProxy::GetDynamicMemberNames(Newtonsoft.Json.Linq.JObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JObjectDynamicProxy_GetDynamicMemberNames_m0654D722ECAAA0D0B504EDD47A205EF6381A28D3 (JObjectDynamicProxy_t188CA0FDD34F134B1C56CFD119F8E4A5FC5E1B97 * __this, JObject_t3ABEFC12B3B74EC00B7032CD365434C91B076FDE * ___instance0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Select_TisJProperty_tF9DA59F1EB857859581CDEE663A2A0040D5A9A53_TisString_t_mEF0A3E7178D1CF8B087B34729FA56017EBCBA29B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2__ctor_mA2CDA945851C668EA7FAE2F3F4AF9D4939B93E4B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tA651E2F99CED91C9590800FA47A2E0E3D0BFE402_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CGetDynamicMemberNamesU3Eb__2_0_mDB798406DCFA8C7F2DA660555006342828E1B907_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t69B92625E75B6733719EC0111D83CBBA38E18FB2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Func_2_tA651E2F99CED91C9590800FA47A2E0E3D0BFE402 * G_B2_0 = NULL;
	RuntimeObject* G_B2_1 = NULL;
	Func_2_tA651E2F99CED91C9590800FA47A2E0E3D0BFE402 * G_B1_0 = NULL;
	RuntimeObject* G_B1_1 = NULL;
	{
		JObject_t3ABEFC12B3B74EC00B7032CD365434C91B076FDE * L_0 = ___instance0;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = JObject_Properties_mECDEC581AD78F6E3C16D155B6FE04EA3AC6E6B7F(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t69B92625E75B6733719EC0111D83CBBA38E18FB2_il2cpp_TypeInfo_var);
		Func_2_tA651E2F99CED91C9590800FA47A2E0E3D0BFE402 * L_2 = ((U3CU3Ec_t69B92625E75B6733719EC0111D83CBBA38E18FB2_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t69B92625E75B6733719EC0111D83CBBA38E18FB2_il2cpp_TypeInfo_var))->get_U3CU3E9__2_0_1();
		Func_2_tA651E2F99CED91C9590800FA47A2E0E3D0BFE402 * L_3 = L_2;
		G_B1_0 = L_3;
		G_B1_1 = L_1;
		if (L_3)
		{
			G_B2_0 = L_3;
			G_B2_1 = L_1;
			goto IL_0025;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t69B92625E75B6733719EC0111D83CBBA38E18FB2_il2cpp_TypeInfo_var);
		U3CU3Ec_t69B92625E75B6733719EC0111D83CBBA38E18FB2 * L_4 = ((U3CU3Ec_t69B92625E75B6733719EC0111D83CBBA38E18FB2_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t69B92625E75B6733719EC0111D83CBBA38E18FB2_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Func_2_tA651E2F99CED91C9590800FA47A2E0E3D0BFE402 * L_5 = (Func_2_tA651E2F99CED91C9590800FA47A2E0E3D0BFE402 *)il2cpp_codegen_object_new(Func_2_tA651E2F99CED91C9590800FA47A2E0E3D0BFE402_il2cpp_TypeInfo_var);
		Func_2__ctor_mA2CDA945851C668EA7FAE2F3F4AF9D4939B93E4B(L_5, L_4, (intptr_t)((intptr_t)U3CU3Ec_U3CGetDynamicMemberNamesU3Eb__2_0_mDB798406DCFA8C7F2DA660555006342828E1B907_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_mA2CDA945851C668EA7FAE2F3F4AF9D4939B93E4B_RuntimeMethod_var);
		Func_2_tA651E2F99CED91C9590800FA47A2E0E3D0BFE402 * L_6 = L_5;
		((U3CU3Ec_t69B92625E75B6733719EC0111D83CBBA38E18FB2_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t69B92625E75B6733719EC0111D83CBBA38E18FB2_il2cpp_TypeInfo_var))->set_U3CU3E9__2_0_1(L_6);
		G_B2_0 = L_6;
		G_B2_1 = G_B1_1;
	}

IL_0025:
	{
		RuntimeObject* L_7;
		L_7 = Enumerable_Select_TisJProperty_tF9DA59F1EB857859581CDEE663A2A0040D5A9A53_TisString_t_mEF0A3E7178D1CF8B087B34729FA56017EBCBA29B(G_B2_1, G_B2_0, /*hidden argument*/Enumerable_Select_TisJProperty_tF9DA59F1EB857859581CDEE663A2A0040D5A9A53_TisString_t_mEF0A3E7178D1CF8B087B34729FA56017EBCBA29B_RuntimeMethod_var);
		return L_7;
	}
}
// System.Void Newtonsoft.Json.Linq.JObject/JObjectDynamicProxy::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JObjectDynamicProxy__ctor_mD054575C4C30783A75B9E570CF323D9B0313B4A4 (JObjectDynamicProxy_t188CA0FDD34F134B1C56CFD119F8E4A5FC5E1B97 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DynamicProxy_1__ctor_m25113953CD27E3BF12CC252D83165388DFA9BCA0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		DynamicProxy_1__ctor_m25113953CD27E3BF12CC252D83165388DFA9BCA0(__this, /*hidden argument*/DynamicProxy_1__ctor_m25113953CD27E3BF12CC252D83165388DFA9BCA0_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Collections.Generic.IEnumerator`1<Newtonsoft.Json.Linq.JToken> Newtonsoft.Json.Linq.JProperty/JPropertyList::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JPropertyList_GetEnumerator_m9E9B389A1A2493BC9D059A6CF90386FCDABCF380 (JPropertyList_tE978701AA0E5EA3DE317E8ABF5EC0C7CE5E713DB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CGetEnumeratorU3Ed__1_t7C50A3D32B6527C6EEA9E4D7FABB016161DB0A9D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CGetEnumeratorU3Ed__1_t7C50A3D32B6527C6EEA9E4D7FABB016161DB0A9D * L_0 = (U3CGetEnumeratorU3Ed__1_t7C50A3D32B6527C6EEA9E4D7FABB016161DB0A9D *)il2cpp_codegen_object_new(U3CGetEnumeratorU3Ed__1_t7C50A3D32B6527C6EEA9E4D7FABB016161DB0A9D_il2cpp_TypeInfo_var);
		U3CGetEnumeratorU3Ed__1__ctor_mBA56603E0B3D1EBF90505D4F028189623C6BED95(L_0, 0, /*hidden argument*/NULL);
		U3CGetEnumeratorU3Ed__1_t7C50A3D32B6527C6EEA9E4D7FABB016161DB0A9D * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Collections.IEnumerator Newtonsoft.Json.Linq.JProperty/JPropertyList::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JPropertyList_System_Collections_IEnumerable_GetEnumerator_mA6ADC4C245DD7BB17FC4FC6E8B4D98CDE27E3ED4 (JPropertyList_tE978701AA0E5EA3DE317E8ABF5EC0C7CE5E713DB * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0;
		L_0 = JPropertyList_GetEnumerator_m9E9B389A1A2493BC9D059A6CF90386FCDABCF380(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void Newtonsoft.Json.Linq.JProperty/JPropertyList::Add(Newtonsoft.Json.Linq.JToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JPropertyList_Add_m3B1FA44A388FF46B6E19F85B6074D383C9E613A2 (JPropertyList_tE978701AA0E5EA3DE317E8ABF5EC0C7CE5E713DB * __this, JToken_t29F54EE35244E7B362E5D54E9517FCD2B0DBE359 * ___item0, const RuntimeMethod* method)
{
	{
		JToken_t29F54EE35244E7B362E5D54E9517FCD2B0DBE359 * L_0 = ___item0;
		__this->set__token_0(L_0);
		return;
	}
}
// System.Void Newtonsoft.Json.Linq.JProperty/JPropertyList::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JPropertyList_Clear_m2EFD117D43124B5C67070731EE09E15333BD0773 (JPropertyList_tE978701AA0E5EA3DE317E8ABF5EC0C7CE5E713DB * __this, const RuntimeMethod* method)
{
	{
		__this->set__token_0((JToken_t29F54EE35244E7B362E5D54E9517FCD2B0DBE359 *)NULL);
		return;
	}
}
// System.Boolean Newtonsoft.Json.Linq.JProperty/JPropertyList::Contains(Newtonsoft.Json.Linq.JToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JPropertyList_Contains_m069E8DA3F4676AFA34E87BB03B815D7D7EBD2155 (JPropertyList_tE978701AA0E5EA3DE317E8ABF5EC0C7CE5E713DB * __this, JToken_t29F54EE35244E7B362E5D54E9517FCD2B0DBE359 * ___item0, const RuntimeMethod* method)
{
	{
		JToken_t29F54EE35244E7B362E5D54E9517FCD2B0DBE359 * L_0 = __this->get__token_0();
		JToken_t29F54EE35244E7B362E5D54E9517FCD2B0DBE359 * L_1 = ___item0;
		return (bool)((((RuntimeObject*)(JToken_t29F54EE35244E7B362E5D54E9517FCD2B0DBE359 *)L_0) == ((RuntimeObject*)(JToken_t29F54EE35244E7B362E5D54E9517FCD2B0DBE359 *)L_1))? 1 : 0);
	}
}
// System.Void Newtonsoft.Json.Linq.JProperty/JPropertyList::CopyTo(Newtonsoft.Json.Linq.JToken[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JPropertyList_CopyTo_m6F46EFBEAB91A50C6ED5CBD0BFF2514E5D7EEB7A (JPropertyList_tE978701AA0E5EA3DE317E8ABF5EC0C7CE5E713DB * __this, JTokenU5BU5D_tD269AF136EE7F4BFB20B35F3E6E8E7935793CC90* ___array0, int32_t ___arrayIndex1, const RuntimeMethod* method)
{
	{
		JToken_t29F54EE35244E7B362E5D54E9517FCD2B0DBE359 * L_0 = __this->get__token_0();
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		JTokenU5BU5D_tD269AF136EE7F4BFB20B35F3E6E8E7935793CC90* L_1 = ___array0;
		int32_t L_2 = ___arrayIndex1;
		JToken_t29F54EE35244E7B362E5D54E9517FCD2B0DBE359 * L_3 = __this->get__token_0();
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_3);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(L_2), (JToken_t29F54EE35244E7B362E5D54E9517FCD2B0DBE359 *)L_3);
	}

IL_0011:
	{
		return;
	}
}
// System.Boolean Newtonsoft.Json.Linq.JProperty/JPropertyList::Remove(Newtonsoft.Json.Linq.JToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JPropertyList_Remove_mE5647392D30E809CC8566410DBB30AEB4CD0D64E (JPropertyList_tE978701AA0E5EA3DE317E8ABF5EC0C7CE5E713DB * __this, JToken_t29F54EE35244E7B362E5D54E9517FCD2B0DBE359 * ___item0, const RuntimeMethod* method)
{
	{
		JToken_t29F54EE35244E7B362E5D54E9517FCD2B0DBE359 * L_0 = __this->get__token_0();
		JToken_t29F54EE35244E7B362E5D54E9517FCD2B0DBE359 * L_1 = ___item0;
		if ((!(((RuntimeObject*)(JToken_t29F54EE35244E7B362E5D54E9517FCD2B0DBE359 *)L_0) == ((RuntimeObject*)(JToken_t29F54EE35244E7B362E5D54E9517FCD2B0DBE359 *)L_1))))
		{
			goto IL_0012;
		}
	}
	{
		__this->set__token_0((JToken_t29F54EE35244E7B362E5D54E9517FCD2B0DBE359 *)NULL);
		return (bool)1;
	}

IL_0012:
	{
		return (bool)0;
	}
}
// System.Int32 Newtonsoft.Json.Linq.JProperty/JPropertyList::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JPropertyList_get_Count_m5732946ACE282793BDCA4B90E82F3527FAB10A85 (JPropertyList_tE978701AA0E5EA3DE317E8ABF5EC0C7CE5E713DB * __this, const RuntimeMethod* method)
{
	{
		JToken_t29F54EE35244E7B362E5D54E9517FCD2B0DBE359 * L_0 = __this->get__token_0();
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		return 1;
	}
}
// System.Boolean Newtonsoft.Json.Linq.JProperty/JPropertyList::get_IsReadOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JPropertyList_get_IsReadOnly_m94A336E43C04A61838FEEA81E106BE311561F5F0 (JPropertyList_tE978701AA0E5EA3DE317E8ABF5EC0C7CE5E713DB * __this, const RuntimeMethod* method)
{
	{
		return (bool)0;
	}
}
// System.Int32 Newtonsoft.Json.Linq.JProperty/JPropertyList::IndexOf(Newtonsoft.Json.Linq.JToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JPropertyList_IndexOf_mC5D9525E579E10626054C330C138FED90932B361 (JPropertyList_tE978701AA0E5EA3DE317E8ABF5EC0C7CE5E713DB * __this, JToken_t29F54EE35244E7B362E5D54E9517FCD2B0DBE359 * ___item0, const RuntimeMethod* method)
{
	{
		JToken_t29F54EE35244E7B362E5D54E9517FCD2B0DBE359 * L_0 = __this->get__token_0();
		JToken_t29F54EE35244E7B362E5D54E9517FCD2B0DBE359 * L_1 = ___item0;
		if ((((RuntimeObject*)(JToken_t29F54EE35244E7B362E5D54E9517FCD2B0DBE359 *)L_0) == ((RuntimeObject*)(JToken_t29F54EE35244E7B362E5D54E9517FCD2B0DBE359 *)L_1)))
		{
			goto IL_000b;
		}
	}
	{
		return (-1);
	}

IL_000b:
	{
		return 0;
	}
}
// System.Void Newtonsoft.Json.Linq.JProperty/JPropertyList::Insert(System.Int32,Newtonsoft.Json.Linq.JToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JPropertyList_Insert_m0FF645BF6FD165F0FC7BDC3658B1A4DD29E88D56 (JPropertyList_tE978701AA0E5EA3DE317E8ABF5EC0C7CE5E713DB * __this, int32_t ___index0, JToken_t29F54EE35244E7B362E5D54E9517FCD2B0DBE359 * ___item1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		JToken_t29F54EE35244E7B362E5D54E9517FCD2B0DBE359 * L_1 = ___item1;
		__this->set__token_0(L_1);
	}

IL_000a:
	{
		return;
	}
}
// System.Void Newtonsoft.Json.Linq.JProperty/JPropertyList::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JPropertyList_RemoveAt_m6E3015C93119F245E063A8AD31B0AEA68C3180FA (JPropertyList_tE978701AA0E5EA3DE317E8ABF5EC0C7CE5E713DB * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		__this->set__token_0((JToken_t29F54EE35244E7B362E5D54E9517FCD2B0DBE359 *)NULL);
	}

IL_000a:
	{
		return;
	}
}
// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JProperty/JPropertyList::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JToken_t29F54EE35244E7B362E5D54E9517FCD2B0DBE359 * JPropertyList_get_Item_m617DE50138375FFFE029DC85E6597C9A7781B150 (JPropertyList_tE978701AA0E5EA3DE317E8ABF5EC0C7CE5E713DB * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		IndexOutOfRangeException_tDC9EF7A0346CE39E54DA1083F07BE6DFC3CE2EDD * L_1 = (IndexOutOfRangeException_tDC9EF7A0346CE39E54DA1083F07BE6DFC3CE2EDD *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IndexOutOfRangeException_tDC9EF7A0346CE39E54DA1083F07BE6DFC3CE2EDD_il2cpp_TypeInfo_var)));
		IndexOutOfRangeException__ctor_m84F1D8D46E48427F4DFAC350A5F1E0D345C68523(L_1, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JPropertyList_get_Item_m617DE50138375FFFE029DC85E6597C9A7781B150_RuntimeMethod_var)));
	}

IL_0009:
	{
		JToken_t29F54EE35244E7B362E5D54E9517FCD2B0DBE359 * L_2 = __this->get__token_0();
		return L_2;
	}
}
// System.Void Newtonsoft.Json.Linq.JProperty/JPropertyList::set_Item(System.Int32,Newtonsoft.Json.Linq.JToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JPropertyList_set_Item_m57F2A4BEFB8B0C728CF6054EB4B6EE4125000E93 (JPropertyList_tE978701AA0E5EA3DE317E8ABF5EC0C7CE5E713DB * __this, int32_t ___index0, JToken_t29F54EE35244E7B362E5D54E9517FCD2B0DBE359 * ___value1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		IndexOutOfRangeException_tDC9EF7A0346CE39E54DA1083F07BE6DFC3CE2EDD * L_1 = (IndexOutOfRangeException_tDC9EF7A0346CE39E54DA1083F07BE6DFC3CE2EDD *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IndexOutOfRangeException_tDC9EF7A0346CE39E54DA1083F07BE6DFC3CE2EDD_il2cpp_TypeInfo_var)));
		IndexOutOfRangeException__ctor_m84F1D8D46E48427F4DFAC350A5F1E0D345C68523(L_1, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JPropertyList_set_Item_m57F2A4BEFB8B0C728CF6054EB4B6EE4125000E93_RuntimeMethod_var)));
	}

IL_0009:
	{
		JToken_t29F54EE35244E7B362E5D54E9517FCD2B0DBE359 * L_2 = ___value1;
		__this->set__token_0(L_2);
		return;
	}
}
// System.Void Newtonsoft.Json.Linq.JProperty/JPropertyList::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JPropertyList__ctor_m7E70AC0AC0D6C6F8AF374EC86D5F04B5253AB89F (JPropertyList_tE978701AA0E5EA3DE317E8ABF5EC0C7CE5E713DB * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Newtonsoft.Json.Linq.JToken/LineInfoAnnotation::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LineInfoAnnotation__ctor_mF411AAFBA99705427ABFA3F3EDC959A1A5119FC2 (LineInfoAnnotation_t87A131EB9B5EAEF1ACFE0A886EF4061C285B7E29 * __this, int32_t ___lineNumber0, int32_t ___linePosition1, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___lineNumber0;
		__this->set_LineNumber_0(L_0);
		int32_t L_1 = ___linePosition1;
		__this->set_LinePosition_1(L_1);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Newtonsoft.Json.Linq.JValue/JValueDynamicProxy::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JValueDynamicProxy__ctor_mBFA6AC7199DA95511303C8905845BE594AB18691 (JValueDynamicProxy_t7E019E739D6C033ACFD9DB0B20CCDA560A9EDA6F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DynamicProxy_1__ctor_m8A9C57DF8542DEF86098C4EA3326446D6972F813_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		DynamicProxy_1__ctor_m8A9C57DF8542DEF86098C4EA3326446D6972F813(__this, /*hidden argument*/DynamicProxy_1__ctor_m8A9C57DF8542DEF86098C4EA3326446D6972F813_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Newtonsoft.Json.Serialization.JsonContract/<>c__DisplayClass57_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass57_0__ctor_mF139894439C395BC760F742B9AFBBE737C21091E (U3CU3Ec__DisplayClass57_0_t64942CC2AF348FF5EE4757CBE42C3E00369C0FD3 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Newtonsoft.Json.Serialization.JsonContract/<>c__DisplayClass57_0::<CreateSerializationCallback>b__0(System.Object,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass57_0_U3CCreateSerializationCallbackU3Eb__0_m8E4A35BC273130534A807C40B6FA1B10E872D217 (U3CU3Ec__DisplayClass57_0_t64942CC2AF348FF5EE4757CBE42C3E00369C0FD3 * __this, RuntimeObject * ___o0, StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505  ___context1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		MethodInfo_t * L_0 = __this->get_callbackMethodInfo_0();
		RuntimeObject * L_1 = ___o0;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3 = L_2;
		StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505  L_4 = ___context1;
		StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505  L_5 = L_4;
		RuntimeObject * L_6 = Box(StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505_il2cpp_TypeInfo_var, &L_5);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_6);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_6);
		NullCheck(L_0);
		RuntimeObject * L_7;
		L_7 = MethodBase_Invoke_m5DA5E74F34F8FFA8133445BAE0266FD54F7D4EB3(L_0, L_1, L_3, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Newtonsoft.Json.Serialization.JsonContract/<>c__DisplayClass58_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass58_0__ctor_mC83FD0B39E14027F7D5BC619951871EB2E3DCCDA (U3CU3Ec__DisplayClass58_0_t4BECBCC567D9F07194FFFD54D7E4BCFA61B56490 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Newtonsoft.Json.Serialization.JsonContract/<>c__DisplayClass58_0::<CreateSerializationErrorCallback>b__0(System.Object,System.Runtime.Serialization.StreamingContext,Newtonsoft.Json.Serialization.ErrorContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass58_0_U3CCreateSerializationErrorCallbackU3Eb__0_mF796AAAA5D0B8B3F29B61571711ABEFE48BDAFA8 (U3CU3Ec__DisplayClass58_0_t4BECBCC567D9F07194FFFD54D7E4BCFA61B56490 * __this, RuntimeObject * ___o0, StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505  ___context1, ErrorContext_tEC7DD84C80D960CB3C16A138F5DE35DC9A131910 * ___econtext2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		MethodInfo_t * L_0 = __this->get_callbackMethodInfo_0();
		RuntimeObject * L_1 = ___o0;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3 = L_2;
		StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505  L_4 = ___context1;
		StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505  L_5 = L_4;
		RuntimeObject * L_6 = Box(StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505_il2cpp_TypeInfo_var, &L_5);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_6);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_6);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_7 = L_3;
		ErrorContext_tEC7DD84C80D960CB3C16A138F5DE35DC9A131910 * L_8 = ___econtext2;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_8);
		NullCheck(L_0);
		RuntimeObject * L_9;
		L_9 = MethodBase_Invoke_m5DA5E74F34F8FFA8133445BAE0266FD54F7D4EB3(L_0, L_1, L_7, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean Newtonsoft.Json.Serialization.JsonSerializerInternalBase/ReferenceEqualsEqualityComparer::System.Collections.Generic.IEqualityComparer<System.Object>.Equals(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReferenceEqualsEqualityComparer_System_Collections_Generic_IEqualityComparerU3CSystem_ObjectU3E_Equals_mFCEBD9A0873830A60F0862583CA993CD13F8939C (ReferenceEqualsEqualityComparer_t9A09775A8F850D58037215D62244D38CA209D014 * __this, RuntimeObject * ___x0, RuntimeObject * ___y1, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___x0;
		RuntimeObject * L_1 = ___y1;
		return (bool)((((RuntimeObject*)(RuntimeObject *)L_0) == ((RuntimeObject*)(RuntimeObject *)L_1))? 1 : 0);
	}
}
// System.Int32 Newtonsoft.Json.Serialization.JsonSerializerInternalBase/ReferenceEqualsEqualityComparer::System.Collections.Generic.IEqualityComparer<System.Object>.GetHashCode(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReferenceEqualsEqualityComparer_System_Collections_Generic_IEqualityComparerU3CSystem_ObjectU3E_GetHashCode_mB950A4459880FB5103204F013A630D709B9842F7 (ReferenceEqualsEqualityComparer_t9A09775A8F850D58037215D62244D38CA209D014 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___obj0;
		int32_t L_1;
		L_1 = RuntimeHelpers_GetHashCode_mDA6691034E245B5F619B108F3597725FF7862DA1(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void Newtonsoft.Json.Serialization.JsonSerializerInternalBase/ReferenceEqualsEqualityComparer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReferenceEqualsEqualityComparer__ctor_m0918DBF54D7F2FF062D2BCE789A5C9D1BD3198CD (ReferenceEqualsEqualityComparer_t9A09775A8F850D58037215D62244D38CA209D014 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Newtonsoft.Json.Serialization.JsonSerializerInternalReader/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m71FBD855F8B9F83457C431080C2275C06B1C52B9 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t914CA97977CFC2D085D6D2EFD193E4C593C02E29_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t914CA97977CFC2D085D6D2EFD193E4C593C02E29 * L_0 = (U3CU3Ec_t914CA97977CFC2D085D6D2EFD193E4C593C02E29 *)il2cpp_codegen_object_new(U3CU3Ec_t914CA97977CFC2D085D6D2EFD193E4C593C02E29_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m99EEF02C5DE6E0AB04CEA171C1317217245CF4AF(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t914CA97977CFC2D085D6D2EFD193E4C593C02E29_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t914CA97977CFC2D085D6D2EFD193E4C593C02E29_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Newtonsoft.Json.Serialization.JsonSerializerInternalReader/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m99EEF02C5DE6E0AB04CEA171C1317217245CF4AF (U3CU3Ec_t914CA97977CFC2D085D6D2EFD193E4C593C02E29 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.String Newtonsoft.Json.Serialization.JsonSerializerInternalReader/<>c::<CreateObjectUsingCreatorWithParameters>b__38_0(Newtonsoft.Json.Serialization.JsonProperty)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3CCreateObjectUsingCreatorWithParametersU3Eb__38_0_m9CCD8C598A24A1FEF6777057EBECB355E8DD0F03 (U3CU3Ec_t914CA97977CFC2D085D6D2EFD193E4C593C02E29 * __this, JsonProperty_tEC316772CD2F8406C84CDA3EEAD7430ED09055DB * ___p0, const RuntimeMethod* method)
{
	{
		JsonProperty_tEC316772CD2F8406C84CDA3EEAD7430ED09055DB * L_0 = ___p0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = JsonProperty_get_PropertyName_mFA543F7272E86C75C96CC3CBCE670904C70408F7_inline(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.String Newtonsoft.Json.Serialization.JsonSerializerInternalReader/<>c::<CreateObjectUsingCreatorWithParameters>b__38_2(Newtonsoft.Json.Serialization.JsonProperty)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3CCreateObjectUsingCreatorWithParametersU3Eb__38_2_mAC25EBC5E5C6E5ED1D8337E043240AD204C7E71F (U3CU3Ec_t914CA97977CFC2D085D6D2EFD193E4C593C02E29 * __this, JsonProperty_tEC316772CD2F8406C84CDA3EEAD7430ED09055DB * ___p0, const RuntimeMethod* method)
{
	{
		JsonProperty_tEC316772CD2F8406C84CDA3EEAD7430ED09055DB * L_0 = ___p0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = JsonProperty_get_PropertyName_mFA543F7272E86C75C96CC3CBCE670904C70408F7_inline(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// Newtonsoft.Json.Serialization.JsonProperty Newtonsoft.Json.Serialization.JsonSerializerInternalReader/<>c::<PopulateObject>b__42_0(Newtonsoft.Json.Serialization.JsonProperty)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JsonProperty_tEC316772CD2F8406C84CDA3EEAD7430ED09055DB * U3CU3Ec_U3CPopulateObjectU3Eb__42_0_mB6B0E7E51570B8FD7CAB2D970EC7E152583C0C30 (U3CU3Ec_t914CA97977CFC2D085D6D2EFD193E4C593C02E29 * __this, JsonProperty_tEC316772CD2F8406C84CDA3EEAD7430ED09055DB * ___m0, const RuntimeMethod* method)
{
	{
		JsonProperty_tEC316772CD2F8406C84CDA3EEAD7430ED09055DB * L_0 = ___m0;
		return L_0;
	}
}
// Newtonsoft.Json.Serialization.JsonSerializerInternalReader/PropertyPresence Newtonsoft.Json.Serialization.JsonSerializerInternalReader/<>c::<PopulateObject>b__42_1(Newtonsoft.Json.Serialization.JsonProperty)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec_U3CPopulateObjectU3Eb__42_1_mF2711E17659F7F1B6F3DC0FE86B8F10974D04EE8 (U3CU3Ec_t914CA97977CFC2D085D6D2EFD193E4C593C02E29 * __this, JsonProperty_tEC316772CD2F8406C84CDA3EEAD7430ED09055DB * ___m0, const RuntimeMethod* method)
{
	{
		return (int32_t)(0);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Newtonsoft.Json.Serialization.JsonSerializerInternalReader/<>c__DisplayClass38_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass38_0__ctor_mD253249F19DA70987CBF025D385A59A98C37319D (U3CU3Ec__DisplayClass38_0_tC13F3834EB887BC11F6C1694C391869A1E436A85 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Newtonsoft.Json.Serialization.JsonSerializerInternalReader/<>c__DisplayClass38_0::<CreateObjectUsingCreatorWithParameters>b__1(Newtonsoft.Json.Serialization.JsonSerializerInternalReader/CreatorPropertyContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass38_0_U3CCreateObjectUsingCreatorWithParametersU3Eb__1_m045A6532E51CB5BEA13C0D9EE6E52A83EDA80B03 (U3CU3Ec__DisplayClass38_0_tC13F3834EB887BC11F6C1694C391869A1E436A85 * __this, CreatorPropertyContext_t6B0EB52BFB828942F28C8153669D89C8A75CED5F * ___p0, const RuntimeMethod* method)
{
	{
		CreatorPropertyContext_t6B0EB52BFB828942F28C8153669D89C8A75CED5F * L_0 = ___p0;
		NullCheck(L_0);
		JsonProperty_tEC316772CD2F8406C84CDA3EEAD7430ED09055DB * L_1 = L_0->get_Property_1();
		JsonProperty_tEC316772CD2F8406C84CDA3EEAD7430ED09055DB * L_2 = __this->get_property_0();
		return (bool)((((int32_t)((((RuntimeObject*)(JsonProperty_tEC316772CD2F8406C84CDA3EEAD7430ED09055DB *)L_1) == ((RuntimeObject*)(JsonProperty_tEC316772CD2F8406C84CDA3EEAD7430ED09055DB *)L_2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Newtonsoft.Json.Serialization.JsonSerializerInternalReader/CreatorPropertyContext::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CreatorPropertyContext__ctor_m8F723F03B7D4D72B655CF48309E25C27DC93D03C (CreatorPropertyContext_t6B0EB52BFB828942F28C8153669D89C8A75CED5F * __this, String_t* ___name0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___name0;
		__this->set_Name_0(L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Newtonsoft.Json.Serialization.JsonTypeReflector/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m54070A796AF8F6E2A2FDF0D18D01493B4815D4F7 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tE90ECA1894178BF3B7F18DCB97DBEC083303FAB6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tE90ECA1894178BF3B7F18DCB97DBEC083303FAB6 * L_0 = (U3CU3Ec_tE90ECA1894178BF3B7F18DCB97DBEC083303FAB6 *)il2cpp_codegen_object_new(U3CU3Ec_tE90ECA1894178BF3B7F18DCB97DBEC083303FAB6_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mB3592FD39CFF0AE8899673C8BB6C80D8E44762C8(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tE90ECA1894178BF3B7F18DCB97DBEC083303FAB6_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tE90ECA1894178BF3B7F18DCB97DBEC083303FAB6_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Newtonsoft.Json.Serialization.JsonTypeReflector/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mB3592FD39CFF0AE8899673C8BB6C80D8E44762C8 (U3CU3Ec_tE90ECA1894178BF3B7F18DCB97DBEC083303FAB6 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Type Newtonsoft.Json.Serialization.JsonTypeReflector/<>c::<GetCreator>b__22_1(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * U3CU3Ec_U3CGetCreatorU3Eb__22_1_m7B9FBD5F9F0115AD28AC079C923833FBBF9418F0 (U3CU3Ec_tE90ECA1894178BF3B7F18DCB97DBEC083303FAB6 * __this, RuntimeObject * ___param0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___param0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_1 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD7438454F3EF140B6B22CB3ED354178FA3A495D5)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CU3Ec_U3CGetCreatorU3Eb__22_1_m7B9FBD5F9F0115AD28AC079C923833FBBF9418F0_RuntimeMethod_var)));
	}

IL_000e:
	{
		RuntimeObject * L_2 = ___param0;
		NullCheck(L_2);
		Type_t * L_3;
		L_3 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B(L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Newtonsoft.Json.Serialization.JsonTypeReflector/<>c__DisplayClass22_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass22_0__ctor_m1EFDDC312E5A4F6F44851169316493D38739A7EB (U3CU3Ec__DisplayClass22_0_t79599FC1F9E8D5CF2D8CD48EB9B2685D46203DFE * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object Newtonsoft.Json.Serialization.JsonTypeReflector/<>c__DisplayClass22_0::<GetCreator>b__0(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CU3Ec__DisplayClass22_0_U3CGetCreatorU3Eb__0_m3BFCC5379241404DF4CF7489B5B232C02960D0B9 (U3CU3Ec__DisplayClass22_0_t79599FC1F9E8D5CF2D8CD48EB9B2685D46203DFE * __this, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___parameters0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Select_TisRuntimeObject_TisType_t_m9172D480F276E4D46B7848B73E3042F3A9771258_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToArray_TisType_t_mDB744C25D97BD49BD70979DC17395D271EA84945_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_Invoke_m4DB932CB3E45300394D6087DBF4C3D620606F726_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2__ctor_m84B84849EC5A4CBDFA2EAC12D68E99B17D87EAFD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t1BAD9F1A22B63A9F2F0380E7FB5D5BB7FED704BF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonTypeReflector_t00010D63925C4A3D7651B5AF846432BC522BB521_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectConstructor_1_Invoke_mD53EE7B7ADD5CD96FB1B370859ED28272081B953_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CGetCreatorU3Eb__22_1_m7B9FBD5F9F0115AD28AC079C923833FBBF9418F0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tE90ECA1894178BF3B7F18DCB97DBEC083303FAB6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* V_0 = NULL;
	ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B * V_1 = NULL;
	RuntimeObject * V_2 = NULL;
	Exception_t * V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	Func_2_t1BAD9F1A22B63A9F2F0380E7FB5D5BB7FED704BF * G_B3_0 = NULL;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B3_1 = NULL;
	Func_2_t1BAD9F1A22B63A9F2F0380E7FB5D5BB7FED704BF * G_B2_0 = NULL;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B2_1 = NULL;

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = ___parameters0;
			if (!L_0)
			{
				goto IL_0073;
			}
		}

IL_0003:
		{
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = ___parameters0;
			IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tE90ECA1894178BF3B7F18DCB97DBEC083303FAB6_il2cpp_TypeInfo_var);
			Func_2_t1BAD9F1A22B63A9F2F0380E7FB5D5BB7FED704BF * L_2 = ((U3CU3Ec_tE90ECA1894178BF3B7F18DCB97DBEC083303FAB6_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tE90ECA1894178BF3B7F18DCB97DBEC083303FAB6_il2cpp_TypeInfo_var))->get_U3CU3E9__22_1_1();
			Func_2_t1BAD9F1A22B63A9F2F0380E7FB5D5BB7FED704BF * L_3 = L_2;
			G_B2_0 = L_3;
			G_B2_1 = L_1;
			if (L_3)
			{
				G_B3_0 = L_3;
				G_B3_1 = L_1;
				goto IL_0023;
			}
		}

IL_000c:
		{
			IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tE90ECA1894178BF3B7F18DCB97DBEC083303FAB6_il2cpp_TypeInfo_var);
			U3CU3Ec_tE90ECA1894178BF3B7F18DCB97DBEC083303FAB6 * L_4 = ((U3CU3Ec_tE90ECA1894178BF3B7F18DCB97DBEC083303FAB6_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tE90ECA1894178BF3B7F18DCB97DBEC083303FAB6_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
			Func_2_t1BAD9F1A22B63A9F2F0380E7FB5D5BB7FED704BF * L_5 = (Func_2_t1BAD9F1A22B63A9F2F0380E7FB5D5BB7FED704BF *)il2cpp_codegen_object_new(Func_2_t1BAD9F1A22B63A9F2F0380E7FB5D5BB7FED704BF_il2cpp_TypeInfo_var);
			Func_2__ctor_m84B84849EC5A4CBDFA2EAC12D68E99B17D87EAFD(L_5, L_4, (intptr_t)((intptr_t)U3CU3Ec_U3CGetCreatorU3Eb__22_1_m7B9FBD5F9F0115AD28AC079C923833FBBF9418F0_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_m84B84849EC5A4CBDFA2EAC12D68E99B17D87EAFD_RuntimeMethod_var);
			Func_2_t1BAD9F1A22B63A9F2F0380E7FB5D5BB7FED704BF * L_6 = L_5;
			((U3CU3Ec_tE90ECA1894178BF3B7F18DCB97DBEC083303FAB6_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tE90ECA1894178BF3B7F18DCB97DBEC083303FAB6_il2cpp_TypeInfo_var))->set_U3CU3E9__22_1_1(L_6);
			G_B3_0 = L_6;
			G_B3_1 = G_B2_1;
		}

IL_0023:
		{
			RuntimeObject* L_7;
			L_7 = Enumerable_Select_TisRuntimeObject_TisType_t_m9172D480F276E4D46B7848B73E3042F3A9771258((RuntimeObject*)(RuntimeObject*)G_B3_1, G_B3_0, /*hidden argument*/Enumerable_Select_TisRuntimeObject_TisType_t_m9172D480F276E4D46B7848B73E3042F3A9771258_RuntimeMethod_var);
			TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_8;
			L_8 = Enumerable_ToArray_TisType_t_mDB744C25D97BD49BD70979DC17395D271EA84945(L_7, /*hidden argument*/Enumerable_ToArray_TisType_t_mDB744C25D97BD49BD70979DC17395D271EA84945_RuntimeMethod_var);
			V_0 = L_8;
			Type_t * L_9 = __this->get_type_0();
			TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_10 = V_0;
			NullCheck(L_9);
			ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B * L_11;
			L_11 = Type_GetConstructor_m98D609FCFA8EB6E54A9FF705D77EEE16603B278C(L_9, L_10, /*hidden argument*/NULL);
			V_1 = L_11;
			ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B * L_12 = V_1;
			IL2CPP_RUNTIME_CLASS_INIT(ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B_il2cpp_TypeInfo_var);
			bool L_13;
			L_13 = ConstructorInfo_op_Inequality_m14EF5800ABCDCE484FEC9C73ED6D84E8343442CC(L_12, (ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B *)NULL, /*hidden argument*/NULL);
			if (!L_13)
			{
				goto IL_0058;
			}
		}

IL_0044:
		{
			IL2CPP_RUNTIME_CLASS_INIT(JsonTypeReflector_t00010D63925C4A3D7651B5AF846432BC522BB521_il2cpp_TypeInfo_var);
			ReflectionDelegateFactory_t7567424477B11CC830C07A6F07A352C2F2028E68 * L_14;
			L_14 = JsonTypeReflector_get_ReflectionDelegateFactory_mB532156E7305506F1BE68E39F815573EBB3D59CE(/*hidden argument*/NULL);
			ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B * L_15 = V_1;
			NullCheck(L_14);
			ObjectConstructor_1_t3B1FEEAAE751376A314DA00A745060F2E5C298BA * L_16;
			L_16 = VirtFuncInvoker1< ObjectConstructor_1_t3B1FEEAAE751376A314DA00A745060F2E5C298BA *, MethodBase_t * >::Invoke(5 /* Newtonsoft.Json.Serialization.ObjectConstructor`1<System.Object> Newtonsoft.Json.Utilities.ReflectionDelegateFactory::CreateParameterizedConstructor(System.Reflection.MethodBase) */, L_14, L_15);
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_17 = ___parameters0;
			NullCheck(L_16);
			RuntimeObject * L_18;
			L_18 = ObjectConstructor_1_Invoke_mD53EE7B7ADD5CD96FB1B370859ED28272081B953(L_16, L_17, /*hidden argument*/ObjectConstructor_1_Invoke_mD53EE7B7ADD5CD96FB1B370859ED28272081B953_RuntimeMethod_var);
			V_2 = L_18;
			goto IL_00c1;
		}

IL_0058:
		{
			IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var)));
			CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_19;
			L_19 = CultureInfo_get_InvariantCulture_m9FAAFAF8A00091EE1FCB7098AD3F163ECDF02164(/*hidden argument*/NULL);
			Type_t * L_20 = __this->get_type_0();
			String_t* L_21;
			L_21 = StringUtils_FormatWith_mCB9EFBD291CBE28AE59E3331C9CF116BFD776989(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral23B435163284C2F25AE5E84212B0650024F0760B)), L_19, L_20, /*hidden argument*/NULL);
			JsonException_t97C31FBFB6F0EFC40669CFF7E1F9E1FE6C7A54AD * L_22 = (JsonException_t97C31FBFB6F0EFC40669CFF7E1F9E1FE6C7A54AD *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonException_t97C31FBFB6F0EFC40669CFF7E1F9E1FE6C7A54AD_il2cpp_TypeInfo_var)));
			JsonException__ctor_m5F241E860A0B277146E0680EBADB206CB18EEA41(L_22, L_21, /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_22, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CU3Ec__DisplayClass22_0_U3CGetCreatorU3Eb__0_m3BFCC5379241404DF4CF7489B5B232C02960D0B9_RuntimeMethod_var)));
		}

IL_0073:
		{
			Func_1_t807CEE610086E24A0167BAA97A64062016E09D49 * L_23 = __this->get_defaultConstructor_1();
			if (L_23)
			{
				goto IL_0096;
			}
		}

IL_007b:
		{
			IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var)));
			CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_24;
			L_24 = CultureInfo_get_InvariantCulture_m9FAAFAF8A00091EE1FCB7098AD3F163ECDF02164(/*hidden argument*/NULL);
			Type_t * L_25 = __this->get_type_0();
			String_t* L_26;
			L_26 = StringUtils_FormatWith_mCB9EFBD291CBE28AE59E3331C9CF116BFD776989(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral92A38C953A6126D97ED1B04B582F3B4519E7D184)), L_24, L_25, /*hidden argument*/NULL);
			JsonException_t97C31FBFB6F0EFC40669CFF7E1F9E1FE6C7A54AD * L_27 = (JsonException_t97C31FBFB6F0EFC40669CFF7E1F9E1FE6C7A54AD *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonException_t97C31FBFB6F0EFC40669CFF7E1F9E1FE6C7A54AD_il2cpp_TypeInfo_var)));
			JsonException__ctor_m5F241E860A0B277146E0680EBADB206CB18EEA41(L_27, L_26, /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_27, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CU3Ec__DisplayClass22_0_U3CGetCreatorU3Eb__0_m3BFCC5379241404DF4CF7489B5B232C02960D0B9_RuntimeMethod_var)));
		}

IL_0096:
		{
			Func_1_t807CEE610086E24A0167BAA97A64062016E09D49 * L_28 = __this->get_defaultConstructor_1();
			NullCheck(L_28);
			RuntimeObject * L_29;
			L_29 = Func_1_Invoke_m4DB932CB3E45300394D6087DBF4C3D620606F726(L_28, /*hidden argument*/Func_1_Invoke_m4DB932CB3E45300394D6087DBF4C3D620606F726_RuntimeMethod_var);
			V_2 = L_29;
			goto IL_00c1;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00a4;
		}
		throw e;
	}

CATCH_00a4:
	{ // begin catch(System.Exception)
		V_3 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var)));
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_30;
		L_30 = CultureInfo_get_InvariantCulture_m9FAAFAF8A00091EE1FCB7098AD3F163ECDF02164(/*hidden argument*/NULL);
		Type_t * L_31 = __this->get_type_0();
		String_t* L_32;
		L_32 = StringUtils_FormatWith_mCB9EFBD291CBE28AE59E3331C9CF116BFD776989(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6699410DAF356A90DFDDE06D8F3571412FFE4442)), L_30, L_31, /*hidden argument*/NULL);
		Exception_t * L_33 = V_3;
		JsonException_t97C31FBFB6F0EFC40669CFF7E1F9E1FE6C7A54AD * L_34 = (JsonException_t97C31FBFB6F0EFC40669CFF7E1F9E1FE6C7A54AD *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonException_t97C31FBFB6F0EFC40669CFF7E1F9E1FE6C7A54AD_il2cpp_TypeInfo_var)));
		JsonException__ctor_m2AF2664E2540D45D34947252388119C501D10F25(L_34, L_32, L_33, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_34, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CU3Ec__DisplayClass22_0_U3CGetCreatorU3Eb__0_m3BFCC5379241404DF4CF7489B5B232C02960D0B9_RuntimeMethod_var)));
	} // end catch (depth: 1)

IL_00c1:
	{
		RuntimeObject * L_35 = V_2;
		return L_35;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Newtonsoft.Json.Utilities.LateBoundReflectionDelegateFactory/<>c__DisplayClass3_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_0__ctor_mACCC1A4D874068C1931947A92ECF1CC4F0E680AE (U3CU3Ec__DisplayClass3_0_t0E3160D956905841ACACA876BD7CCF771F4116AC * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object Newtonsoft.Json.Utilities.LateBoundReflectionDelegateFactory/<>c__DisplayClass3_0::<CreateParameterizedConstructor>b__0(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CU3Ec__DisplayClass3_0_U3CCreateParameterizedConstructorU3Eb__0_m2B54E0E2F131D5AC0DEFAD9C9D5CA1F70F075DD7 (U3CU3Ec__DisplayClass3_0_t0E3160D956905841ACACA876BD7CCF771F4116AC * __this, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___a0, const RuntimeMethod* method)
{
	{
		ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B * L_0 = __this->get_c_0();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = ___a0;
		NullCheck(L_0);
		RuntimeObject * L_2;
		L_2 = ConstructorInfo_Invoke_m8DF5D6F53038C7B6443EEA82D922724F39CD2906(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Object Newtonsoft.Json.Utilities.LateBoundReflectionDelegateFactory/<>c__DisplayClass3_0::<CreateParameterizedConstructor>b__1(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CU3Ec__DisplayClass3_0_U3CCreateParameterizedConstructorU3Eb__1_mB2B37105F3AC43732DCC01C14E4504B8E7C5528F (U3CU3Ec__DisplayClass3_0_t0E3160D956905841ACACA876BD7CCF771F4116AC * __this, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___a0, const RuntimeMethod* method)
{
	{
		MethodBase_t * L_0 = __this->get_method_1();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = ___a0;
		NullCheck(L_0);
		RuntimeObject * L_2;
		L_2 = MethodBase_Invoke_m5DA5E74F34F8FFA8133445BAE0266FD54F7D4EB3(L_0, NULL, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Newtonsoft.Json.Linq.JsonPath.QueryFilter/<ExecuteFilter>d__2::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CExecuteFilterU3Ed__2__ctor_m5D96E97E4A14F2298A0F1F78B80DE1217CA529DD (U3CExecuteFilterU3Ed__2_t66B87E7CFF03DC68D0E6A97FFEB4183AD5E7A1B4 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		int32_t L_1;
		L_1 = Environment_get_CurrentManagedThreadId_m09DBD4166BFD399056B2F81C77A3A182339BF92D(/*hidden argument*/NULL);
		__this->set_U3CU3El__initialThreadId_2(L_1);
		return;
	}
}
// System.Void Newtonsoft.Json.Linq.JsonPath.QueryFilter/<ExecuteFilter>d__2::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CExecuteFilterU3Ed__2_System_IDisposable_Dispose_m836BD54BC33E4285D21491EC4A533F1636EEC4C6 (U3CExecuteFilterU3Ed__2_t66B87E7CFF03DC68D0E6A97FFEB4183AD5E7A1B4 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)((int32_t)-4)))) > ((uint32_t)1))))
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_002f;
		}
	}

IL_0012:
	{
	}

IL_0013:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_3 = V_0;
			if ((((int32_t)L_3) == ((int32_t)((int32_t)-4))))
			{
				goto IL_001e;
			}
		}

IL_0018:
		{
			int32_t L_4 = V_0;
			if ((((int32_t)L_4) == ((int32_t)1)))
			{
				goto IL_001e;
			}
		}

IL_001c:
		{
			IL2CPP_LEAVE(0x2F, FINALLY_0028);
		}

IL_001e:
		{
		}

IL_001f:
		try
		{ // begin try (depth: 2)
			IL2CPP_LEAVE(0x2F, FINALLY_0021);
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_0021;
		}

FINALLY_0021:
		{ // begin finally (depth: 2)
			U3CExecuteFilterU3Ed__2_U3CU3Em__Finally2_m3AB2352ADCD30FB69D96373FEB4392B1D5400299(__this, /*hidden argument*/NULL);
			IL2CPP_END_FINALLY(33)
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(33)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_END_CLEANUP(0x2F, FINALLY_0028);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0028;
	}

FINALLY_0028:
	{ // begin finally (depth: 1)
		U3CExecuteFilterU3Ed__2_U3CU3Em__Finally1_mD6D2A95883F296075E540A11AC65185449A49DCB(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(40)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(40)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x2F, IL_002f)
	}

IL_002f:
	{
		return;
	}
}
// System.Boolean Newtonsoft.Json.Linq.JsonPath.QueryFilter/<ExecuteFilter>d__2::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CExecuteFilterU3Ed__2_MoveNext_m57A8875DD9400E507E867B014FA7A0068ADB2BCC (U3CExecuteFilterU3Ed__2_t66B87E7CFF03DC68D0E6A97FFEB4183AD5E7A1B4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tA97507BE4EA999D3A37CBC336924BFEA67C9FE9E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t6D746D34D007AC6D34C5279EA90DA276DDF70281_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	QueryFilter_t953A25C7D920832364FB38BFFB972F6811BA4F28 * V_2 = NULL;
	JToken_t29F54EE35244E7B362E5D54E9517FCD2B0DBE359 * V_3 = NULL;
	JToken_t29F54EE35244E7B362E5D54E9517FCD2B0DBE359 * V_4 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_0 = __this->get_U3CU3E1__state_0();
			V_1 = L_0;
			QueryFilter_t953A25C7D920832364FB38BFFB972F6811BA4F28 * L_1 = __this->get_U3CU3E4__this_5();
			V_2 = L_1;
			int32_t L_2 = V_1;
			if (!L_2)
			{
				goto IL_001f;
			}
		}

IL_0011:
		{
			int32_t L_3 = V_1;
			if ((((int32_t)L_3) == ((int32_t)1)))
			{
				goto IL_009e;
			}
		}

IL_0018:
		{
			V_0 = (bool)0;
			goto IL_00e8;
		}

IL_001f:
		{
			__this->set_U3CU3E1__state_0((-1));
			RuntimeObject* L_4 = __this->get_current_3();
			NullCheck(L_4);
			RuntimeObject* L_5;
			L_5 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<Newtonsoft.Json.Linq.JToken>::GetEnumerator() */, IEnumerable_1_tA97507BE4EA999D3A37CBC336924BFEA67C9FE9E_il2cpp_TypeInfo_var, L_4);
			__this->set_U3CU3E7__wrap1_10(L_5);
			__this->set_U3CU3E1__state_0(((int32_t)-3));
			goto IL_00c0;
		}

IL_0041:
		{
			RuntimeObject* L_6 = __this->get_U3CU3E7__wrap1_10();
			NullCheck(L_6);
			JToken_t29F54EE35244E7B362E5D54E9517FCD2B0DBE359 * L_7;
			L_7 = InterfaceFuncInvoker0< JToken_t29F54EE35244E7B362E5D54E9517FCD2B0DBE359 * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<Newtonsoft.Json.Linq.JToken>::get_Current() */, IEnumerator_1_t6D746D34D007AC6D34C5279EA90DA276DDF70281_il2cpp_TypeInfo_var, L_6);
			V_3 = L_7;
			JToken_t29F54EE35244E7B362E5D54E9517FCD2B0DBE359 * L_8 = V_3;
			NullCheck(L_8);
			RuntimeObject* L_9;
			L_9 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<Newtonsoft.Json.Linq.JToken>::GetEnumerator() */, IEnumerable_1_tA97507BE4EA999D3A37CBC336924BFEA67C9FE9E_il2cpp_TypeInfo_var, L_8);
			__this->set_U3CU3E7__wrap2_11(L_9);
			__this->set_U3CU3E1__state_0(((int32_t)-4));
			goto IL_00a6;
		}

IL_0063:
		{
			RuntimeObject* L_10 = __this->get_U3CU3E7__wrap2_11();
			NullCheck(L_10);
			JToken_t29F54EE35244E7B362E5D54E9517FCD2B0DBE359 * L_11;
			L_11 = InterfaceFuncInvoker0< JToken_t29F54EE35244E7B362E5D54E9517FCD2B0DBE359 * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<Newtonsoft.Json.Linq.JToken>::get_Current() */, IEnumerator_1_t6D746D34D007AC6D34C5279EA90DA276DDF70281_il2cpp_TypeInfo_var, L_10);
			V_4 = L_11;
			QueryFilter_t953A25C7D920832364FB38BFFB972F6811BA4F28 * L_12 = V_2;
			NullCheck(L_12);
			QueryExpression_tAAC183FFC4E697E5ECD4CEE7D463FB07C8F54221 * L_13 = L_12->get_Expression_0();
			JToken_t29F54EE35244E7B362E5D54E9517FCD2B0DBE359 * L_14 = __this->get_root_6();
			JToken_t29F54EE35244E7B362E5D54E9517FCD2B0DBE359 * L_15 = V_4;
			JsonSelectSettings_t473B56CACFC6E1C255C7191CE7FAD72AB78BFCEF * L_16 = __this->get_settings_8();
			NullCheck(L_13);
			bool L_17;
			L_17 = VirtFuncInvoker3< bool, JToken_t29F54EE35244E7B362E5D54E9517FCD2B0DBE359 *, JToken_t29F54EE35244E7B362E5D54E9517FCD2B0DBE359 *, JsonSelectSettings_t473B56CACFC6E1C255C7191CE7FAD72AB78BFCEF * >::Invoke(4 /* System.Boolean Newtonsoft.Json.Linq.JsonPath.QueryExpression::IsMatch(Newtonsoft.Json.Linq.JToken,Newtonsoft.Json.Linq.JToken,Newtonsoft.Json.Linq.JsonSelectSettings) */, L_13, L_14, L_15, L_16);
			if (!L_17)
			{
				goto IL_00a6;
			}
		}

IL_008b:
		{
			JToken_t29F54EE35244E7B362E5D54E9517FCD2B0DBE359 * L_18 = V_4;
			__this->set_U3CU3E2__current_1(L_18);
			__this->set_U3CU3E1__state_0(1);
			V_0 = (bool)1;
			goto IL_00e8;
		}

IL_009e:
		{
			__this->set_U3CU3E1__state_0(((int32_t)-4));
		}

IL_00a6:
		{
			RuntimeObject* L_19 = __this->get_U3CU3E7__wrap2_11();
			NullCheck(L_19);
			bool L_20;
			L_20 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_19);
			if (L_20)
			{
				goto IL_0063;
			}
		}

IL_00b3:
		{
			U3CExecuteFilterU3Ed__2_U3CU3Em__Finally2_m3AB2352ADCD30FB69D96373FEB4392B1D5400299(__this, /*hidden argument*/NULL);
			__this->set_U3CU3E7__wrap2_11((RuntimeObject*)NULL);
		}

IL_00c0:
		{
			RuntimeObject* L_21 = __this->get_U3CU3E7__wrap1_10();
			NullCheck(L_21);
			bool L_22;
			L_22 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_21);
			if (L_22)
			{
				goto IL_0041;
			}
		}

IL_00d0:
		{
			U3CExecuteFilterU3Ed__2_U3CU3Em__Finally1_mD6D2A95883F296075E540A11AC65185449A49DCB(__this, /*hidden argument*/NULL);
			__this->set_U3CU3E7__wrap1_10((RuntimeObject*)NULL);
			V_0 = (bool)0;
			goto IL_00e8;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FAULT_00e1;
	}

FAULT_00e1:
	{ // begin fault (depth: 1)
		U3CExecuteFilterU3Ed__2_System_IDisposable_Dispose_m836BD54BC33E4285D21491EC4A533F1636EEC4C6(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(225)
	} // end fault
	IL2CPP_CLEANUP(225)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00e8:
	{
		bool L_23 = V_0;
		return L_23;
	}
}
// System.Void Newtonsoft.Json.Linq.JsonPath.QueryFilter/<ExecuteFilter>d__2::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CExecuteFilterU3Ed__2_U3CU3Em__Finally1_mD6D2A95883F296075E540A11AC65185449A49DCB (U3CExecuteFilterU3Ed__2_t66B87E7CFF03DC68D0E6A97FFEB4183AD5E7A1B4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_U3CU3E1__state_0((-1));
		RuntimeObject* L_0 = __this->get_U3CU3E7__wrap1_10();
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject* L_1 = __this->get_U3CU3E7__wrap1_10();
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_1);
	}

IL_001a:
	{
		return;
	}
}
// System.Void Newtonsoft.Json.Linq.JsonPath.QueryFilter/<ExecuteFilter>d__2::<>m__Finally2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CExecuteFilterU3Ed__2_U3CU3Em__Finally2_m3AB2352ADCD30FB69D96373FEB4392B1D5400299 (U3CExecuteFilterU3Ed__2_t66B87E7CFF03DC68D0E6A97FFEB4183AD5E7A1B4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_U3CU3E1__state_0(((int32_t)-3));
		RuntimeObject* L_0 = __this->get_U3CU3E7__wrap2_11();
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		RuntimeObject* L_1 = __this->get_U3CU3E7__wrap2_11();
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_1);
	}

IL_001b:
	{
		return;
	}
}
// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JsonPath.QueryFilter/<ExecuteFilter>d__2::System.Collections.Generic.IEnumerator<Newtonsoft.Json.Linq.JToken>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JToken_t29F54EE35244E7B362E5D54E9517FCD2B0DBE359 * U3CExecuteFilterU3Ed__2_System_Collections_Generic_IEnumeratorU3CNewtonsoft_Json_Linq_JTokenU3E_get_Current_m30513505F5DA61A19405253C6C9D60DCCB4DA201 (U3CExecuteFilterU3Ed__2_t66B87E7CFF03DC68D0E6A97FFEB4183AD5E7A1B4 * __this, const RuntimeMethod* method)
{
	{
		JToken_t29F54EE35244E7B362E5D54E9517FCD2B0DBE359 * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Newtonsoft.Json.Linq.JsonPath.QueryFilter/<ExecuteFilter>d__2::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CExecuteFilterU3Ed__2_System_Collections_IEnumerator_Reset_m14BAF6EBE704F4BBB519927469B1A8A48D47E1F9 (U3CExecuteFilterU3Ed__2_t66B87E7CFF03DC68D0E6A97FFEB4183AD5E7A1B4 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CExecuteFilterU3Ed__2_System_Collections_IEnumerator_Reset_m14BAF6EBE704F4BBB519927469B1A8A48D47E1F9_RuntimeMethod_var)));
	}
}
// System.Object Newtonsoft.Json.Linq.JsonPath.QueryFilter/<ExecuteFilter>d__2::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CExecuteFilterU3Ed__2_System_Collections_IEnumerator_get_Current_m70E035D07B67D100B211F0229A888F6FBB2D87BD (U3CExecuteFilterU3Ed__2_t66B87E7CFF03DC68D0E6A97FFEB4183AD5E7A1B4 * __this, const RuntimeMethod* method)
{
	{
		JToken_t29F54EE35244E7B362E5D54E9517FCD2B0DBE359 * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<Newtonsoft.Json.Linq.JToken> Newtonsoft.Json.Linq.JsonPath.QueryFilter/<ExecuteFilter>d__2::System.Collections.Generic.IEnumerable<Newtonsoft.Json.Linq.JToken>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CExecuteFilterU3Ed__2_System_Collections_Generic_IEnumerableU3CNewtonsoft_Json_Linq_JTokenU3E_GetEnumerator_mC1201028FC2548F3407C6908D561F1CC54789218 (U3CExecuteFilterU3Ed__2_t66B87E7CFF03DC68D0E6A97FFEB4183AD5E7A1B4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CExecuteFilterU3Ed__2_t66B87E7CFF03DC68D0E6A97FFEB4183AD5E7A1B4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CExecuteFilterU3Ed__2_t66B87E7CFF03DC68D0E6A97FFEB4183AD5E7A1B4 * V_0 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_1 = __this->get_U3CU3El__initialThreadId_2();
		int32_t L_2;
		L_2 = Environment_get_CurrentManagedThreadId_m09DBD4166BFD399056B2F81C77A3A182339BF92D(/*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_0022;
		}
	}
	{
		__this->set_U3CU3E1__state_0(0);
		V_0 = __this;
		goto IL_0035;
	}

IL_0022:
	{
		U3CExecuteFilterU3Ed__2_t66B87E7CFF03DC68D0E6A97FFEB4183AD5E7A1B4 * L_3 = (U3CExecuteFilterU3Ed__2_t66B87E7CFF03DC68D0E6A97FFEB4183AD5E7A1B4 *)il2cpp_codegen_object_new(U3CExecuteFilterU3Ed__2_t66B87E7CFF03DC68D0E6A97FFEB4183AD5E7A1B4_il2cpp_TypeInfo_var);
		U3CExecuteFilterU3Ed__2__ctor_m5D96E97E4A14F2298A0F1F78B80DE1217CA529DD(L_3, 0, /*hidden argument*/NULL);
		V_0 = L_3;
		U3CExecuteFilterU3Ed__2_t66B87E7CFF03DC68D0E6A97FFEB4183AD5E7A1B4 * L_4 = V_0;
		QueryFilter_t953A25C7D920832364FB38BFFB972F6811BA4F28 * L_5 = __this->get_U3CU3E4__this_5();
		NullCheck(L_4);
		L_4->set_U3CU3E4__this_5(L_5);
	}

IL_0035:
	{
		U3CExecuteFilterU3Ed__2_t66B87E7CFF03DC68D0E6A97FFEB4183AD5E7A1B4 * L_6 = V_0;
		JToken_t29F54EE35244E7B362E5D54E9517FCD2B0DBE359 * L_7 = __this->get_U3CU3E3__root_7();
		NullCheck(L_6);
		L_6->set_root_6(L_7);
		U3CExecuteFilterU3Ed__2_t66B87E7CFF03DC68D0E6A97FFEB4183AD5E7A1B4 * L_8 = V_0;
		RuntimeObject* L_9 = __this->get_U3CU3E3__current_4();
		NullCheck(L_8);
		L_8->set_current_3(L_9);
		U3CExecuteFilterU3Ed__2_t66B87E7CFF03DC68D0E6A97FFEB4183AD5E7A1B4 * L_10 = V_0;
		JsonSelectSettings_t473B56CACFC6E1C255C7191CE7FAD72AB78BFCEF * L_11 = __this->get_U3CU3E3__settings_9();
		NullCheck(L_10);
		L_10->set_settings_8(L_11);
		U3CExecuteFilterU3Ed__2_t66B87E7CFF03DC68D0E6A97FFEB4183AD5E7A1B4 * L_12 = V_0;
		return L_12;
	}
}
// System.Collections.IEnumerator Newtonsoft.Json.Linq.JsonPath.QueryFilter/<ExecuteFilter>d__2::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CExecuteFilterU3Ed__2_System_Collections_IEnumerable_GetEnumerator_m6AE93EFF51F6107695BB7324B01326CA63A3123A (U3CExecuteFilterU3Ed__2_t66B87E7CFF03DC68D0E6A97FFEB4183AD5E7A1B4 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0;
		L_0 = U3CExecuteFilterU3Ed__2_System_Collections_Generic_IEnumerableU3CNewtonsoft_Json_Linq_JTokenU3E_GetEnumerator_mC1201028FC2548F3407C6908D561F1CC54789218(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Newtonsoft.Json.Linq.JsonPath.QueryScanFilter/<ExecuteFilter>d__2::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CExecuteFilterU3Ed__2__ctor_mF7ED0237D1931D80FFCF1278FDDF3A2ED6805384 (U3CExecuteFilterU3Ed__2_t21E3C4FBFF60C5E17F946D9E0505FA0F13585478 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		int32_t L_1;
		L_1 = Environment_get_CurrentManagedThreadId_m09DBD4166BFD399056B2F81C77A3A182339BF92D(/*hidden argument*/NULL);
		__this->set_U3CU3El__initialThreadId_2(L_1);
		return;
	}
}
// System.Void Newtonsoft.Json.Linq.JsonPath.QueryScanFilter/<ExecuteFilter>d__2::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CExecuteFilterU3Ed__2_System_IDisposable_Dispose_m6212F35F15EDFC182BA78408EE081ED41A24E684 (U3CExecuteFilterU3Ed__2_t21E3C4FBFF60C5E17F946D9E0505FA0F13585478 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)((int32_t)-4)))) > ((uint32_t)1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)1))) <= ((uint32_t)1))))
		{
			goto IL_0031;
		}
	}

IL_0014:
	{
	}

IL_0015:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_3 = V_0;
			if ((((int32_t)L_3) == ((int32_t)((int32_t)-4))))
			{
				goto IL_0020;
			}
		}

IL_001a:
		{
			int32_t L_4 = V_0;
			if ((((int32_t)L_4) == ((int32_t)1)))
			{
				goto IL_0020;
			}
		}

IL_001e:
		{
			IL2CPP_LEAVE(0x31, FINALLY_002a);
		}

IL_0020:
		{
		}

IL_0021:
		try
		{ // begin try (depth: 2)
			IL2CPP_LEAVE(0x31, FINALLY_0023);
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_0023;
		}

FINALLY_0023:
		{ // begin finally (depth: 2)
			U3CExecuteFilterU3Ed__2_U3CU3Em__Finally2_m9B036D173B0F54CFED221C904C9780678332A132(__this, /*hidden argument*/NULL);
			IL2CPP_END_FINALLY(35)
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(35)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_END_CLEANUP(0x31, FINALLY_002a);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_002a;
	}

FINALLY_002a:
	{ // begin finally (depth: 1)
		U3CExecuteFilterU3Ed__2_U3CU3Em__Finally1_mA4BDD65B46C46463465846700AEB07649CB832D5(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(42)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(42)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x31, IL_0031)
	}

IL_0031:
	{
		return;
	}
}
// System.Boolean Newtonsoft.Json.Linq.JsonPath.QueryScanFilter/<ExecuteFilter>d__2::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CExecuteFilterU3Ed__2_MoveNext_m23828C7F5D890BBACA93654C6AA3720C8ABA03E7 (U3CExecuteFilterU3Ed__2_t21E3C4FBFF60C5E17F946D9E0505FA0F13585478 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tA97507BE4EA999D3A37CBC336924BFEA67C9FE9E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t6D746D34D007AC6D34C5279EA90DA276DDF70281_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JContainer_t38DD4DF522660749764609AA408DFD0575BABE3F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	QueryScanFilter_tA0457204F988F3944CED5D7DE2620ABC6CEA1FA6 * V_2 = NULL;
	JToken_t29F54EE35244E7B362E5D54E9517FCD2B0DBE359 * V_3 = NULL;
	JContainer_t38DD4DF522660749764609AA408DFD0575BABE3F * V_4 = NULL;
	JToken_t29F54EE35244E7B362E5D54E9517FCD2B0DBE359 * V_5 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 4> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_0 = __this->get_U3CU3E1__state_0();
			V_1 = L_0;
			QueryScanFilter_tA0457204F988F3944CED5D7DE2620ABC6CEA1FA6 * L_1 = __this->get_U3CU3E4__this_5();
			V_2 = L_1;
			int32_t L_2 = V_1;
			switch (L_2)
			{
				case 0:
				{
					goto IL_0027;
				}
				case 1:
				{
					goto IL_00be;
				}
				case 2:
				{
					goto IL_010e;
				}
			}
		}

IL_0020:
		{
			V_0 = (bool)0;
			goto IL_013e;
		}

IL_0027:
		{
			__this->set_U3CU3E1__state_0((-1));
			RuntimeObject* L_3 = __this->get_current_3();
			NullCheck(L_3);
			RuntimeObject* L_4;
			L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<Newtonsoft.Json.Linq.JToken>::GetEnumerator() */, IEnumerable_1_tA97507BE4EA999D3A37CBC336924BFEA67C9FE9E_il2cpp_TypeInfo_var, L_3);
			__this->set_U3CU3E7__wrap1_10(L_4);
			__this->set_U3CU3E1__state_0(((int32_t)-3));
			goto IL_0116;
		}

IL_004c:
		{
			RuntimeObject* L_5 = __this->get_U3CU3E7__wrap1_10();
			NullCheck(L_5);
			JToken_t29F54EE35244E7B362E5D54E9517FCD2B0DBE359 * L_6;
			L_6 = InterfaceFuncInvoker0< JToken_t29F54EE35244E7B362E5D54E9517FCD2B0DBE359 * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<Newtonsoft.Json.Linq.JToken>::get_Current() */, IEnumerator_1_t6D746D34D007AC6D34C5279EA90DA276DDF70281_il2cpp_TypeInfo_var, L_5);
			V_3 = L_6;
			JToken_t29F54EE35244E7B362E5D54E9517FCD2B0DBE359 * L_7 = V_3;
			V_4 = ((JContainer_t38DD4DF522660749764609AA408DFD0575BABE3F *)IsInstClass((RuntimeObject*)L_7, JContainer_t38DD4DF522660749764609AA408DFD0575BABE3F_il2cpp_TypeInfo_var));
			JContainer_t38DD4DF522660749764609AA408DFD0575BABE3F * L_8 = V_4;
			if (!L_8)
			{
				goto IL_00e2;
			}
		}

IL_0064:
		{
			JContainer_t38DD4DF522660749764609AA408DFD0575BABE3F * L_9 = V_4;
			NullCheck(L_9);
			RuntimeObject* L_10;
			L_10 = JContainer_DescendantsAndSelf_m28AC3590BC819984AD1018FAD955A47F4120E4E4(L_9, /*hidden argument*/NULL);
			NullCheck(L_10);
			RuntimeObject* L_11;
			L_11 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<Newtonsoft.Json.Linq.JToken>::GetEnumerator() */, IEnumerable_1_tA97507BE4EA999D3A37CBC336924BFEA67C9FE9E_il2cpp_TypeInfo_var, L_10);
			__this->set_U3CU3E7__wrap2_11(L_11);
			__this->set_U3CU3E1__state_0(((int32_t)-4));
			goto IL_00c6;
		}

IL_0080:
		{
			RuntimeObject* L_12 = __this->get_U3CU3E7__wrap2_11();
			NullCheck(L_12);
			JToken_t29F54EE35244E7B362E5D54E9517FCD2B0DBE359 * L_13;
			L_13 = InterfaceFuncInvoker0< JToken_t29F54EE35244E7B362E5D54E9517FCD2B0DBE359 * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<Newtonsoft.Json.Linq.JToken>::get_Current() */, IEnumerator_1_t6D746D34D007AC6D34C5279EA90DA276DDF70281_il2cpp_TypeInfo_var, L_12);
			V_5 = L_13;
			QueryScanFilter_tA0457204F988F3944CED5D7DE2620ABC6CEA1FA6 * L_14 = V_2;
			NullCheck(L_14);
			QueryExpression_tAAC183FFC4E697E5ECD4CEE7D463FB07C8F54221 * L_15 = L_14->get_Expression_0();
			JToken_t29F54EE35244E7B362E5D54E9517FCD2B0DBE359 * L_16 = __this->get_root_6();
			JToken_t29F54EE35244E7B362E5D54E9517FCD2B0DBE359 * L_17 = V_5;
			JsonSelectSettings_t473B56CACFC6E1C255C7191CE7FAD72AB78BFCEF * L_18 = __this->get_settings_8();
			NullCheck(L_15);
			bool L_19;
			L_19 = VirtFuncInvoker3< bool, JToken_t29F54EE35244E7B362E5D54E9517FCD2B0DBE359 *, JToken_t29F54EE35244E7B362E5D54E9517FCD2B0DBE359 *, JsonSelectSettings_t473B56CACFC6E1C255C7191CE7FAD72AB78BFCEF * >::Invoke(4 /* System.Boolean Newtonsoft.Json.Linq.JsonPath.QueryExpression::IsMatch(Newtonsoft.Json.Linq.JToken,Newtonsoft.Json.Linq.JToken,Newtonsoft.Json.Linq.JsonSelectSettings) */, L_15, L_16, L_17, L_18);
			if (!L_19)
			{
				goto IL_00c6;
			}
		}

IL_00a8:
		{
			JToken_t29F54EE35244E7B362E5D54E9517FCD2B0DBE359 * L_20 = V_5;
			__this->set_U3CU3E2__current_1(L_20);
			__this->set_U3CU3E1__state_0(1);
			V_0 = (bool)1;
			goto IL_013e;
		}

IL_00be:
		{
			__this->set_U3CU3E1__state_0(((int32_t)-4));
		}

IL_00c6:
		{
			RuntimeObject* L_21 = __this->get_U3CU3E7__wrap2_11();
			NullCheck(L_21);
			bool L_22;
			L_22 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_21);
			if (L_22)
			{
				goto IL_0080;
			}
		}

IL_00d3:
		{
			U3CExecuteFilterU3Ed__2_U3CU3Em__Finally2_m9B036D173B0F54CFED221C904C9780678332A132(__this, /*hidden argument*/NULL);
			__this->set_U3CU3E7__wrap2_11((RuntimeObject*)NULL);
			goto IL_0116;
		}

IL_00e2:
		{
			QueryScanFilter_tA0457204F988F3944CED5D7DE2620ABC6CEA1FA6 * L_23 = V_2;
			NullCheck(L_23);
			QueryExpression_tAAC183FFC4E697E5ECD4CEE7D463FB07C8F54221 * L_24 = L_23->get_Expression_0();
			JToken_t29F54EE35244E7B362E5D54E9517FCD2B0DBE359 * L_25 = __this->get_root_6();
			JToken_t29F54EE35244E7B362E5D54E9517FCD2B0DBE359 * L_26 = V_3;
			JsonSelectSettings_t473B56CACFC6E1C255C7191CE7FAD72AB78BFCEF * L_27 = __this->get_settings_8();
			NullCheck(L_24);
			bool L_28;
			L_28 = VirtFuncInvoker3< bool, JToken_t29F54EE35244E7B362E5D54E9517FCD2B0DBE359 *, JToken_t29F54EE35244E7B362E5D54E9517FCD2B0DBE359 *, JsonSelectSettings_t473B56CACFC6E1C255C7191CE7FAD72AB78BFCEF * >::Invoke(4 /* System.Boolean Newtonsoft.Json.Linq.JsonPath.QueryExpression::IsMatch(Newtonsoft.Json.Linq.JToken,Newtonsoft.Json.Linq.JToken,Newtonsoft.Json.Linq.JsonSelectSettings) */, L_24, L_25, L_26, L_27);
			if (!L_28)
			{
				goto IL_0116;
			}
		}

IL_00fc:
		{
			JToken_t29F54EE35244E7B362E5D54E9517FCD2B0DBE359 * L_29 = V_3;
			__this->set_U3CU3E2__current_1(L_29);
			__this->set_U3CU3E1__state_0(2);
			V_0 = (bool)1;
			goto IL_013e;
		}

IL_010e:
		{
			__this->set_U3CU3E1__state_0(((int32_t)-3));
		}

IL_0116:
		{
			RuntimeObject* L_30 = __this->get_U3CU3E7__wrap1_10();
			NullCheck(L_30);
			bool L_31;
			L_31 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_30);
			if (L_31)
			{
				goto IL_004c;
			}
		}

IL_0126:
		{
			U3CExecuteFilterU3Ed__2_U3CU3Em__Finally1_mA4BDD65B46C46463465846700AEB07649CB832D5(__this, /*hidden argument*/NULL);
			__this->set_U3CU3E7__wrap1_10((RuntimeObject*)NULL);
			V_0 = (bool)0;
			goto IL_013e;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FAULT_0137;
	}

FAULT_0137:
	{ // begin fault (depth: 1)
		U3CExecuteFilterU3Ed__2_System_IDisposable_Dispose_m6212F35F15EDFC182BA78408EE081ED41A24E684(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(311)
	} // end fault
	IL2CPP_CLEANUP(311)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_013e:
	{
		bool L_32 = V_0;
		return L_32;
	}
}
// System.Void Newtonsoft.Json.Linq.JsonPath.QueryScanFilter/<ExecuteFilter>d__2::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CExecuteFilterU3Ed__2_U3CU3Em__Finally1_mA4BDD65B46C46463465846700AEB07649CB832D5 (U3CExecuteFilterU3Ed__2_t21E3C4FBFF60C5E17F946D9E0505FA0F13585478 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_U3CU3E1__state_0((-1));
		RuntimeObject* L_0 = __this->get_U3CU3E7__wrap1_10();
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject* L_1 = __this->get_U3CU3E7__wrap1_10();
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_1);
	}

IL_001a:
	{
		return;
	}
}
// System.Void Newtonsoft.Json.Linq.JsonPath.QueryScanFilter/<ExecuteFilter>d__2::<>m__Finally2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CExecuteFilterU3Ed__2_U3CU3Em__Finally2_m9B036D173B0F54CFED221C904C9780678332A132 (U3CExecuteFilterU3Ed__2_t21E3C4FBFF60C5E17F946D9E0505FA0F13585478 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_U3CU3E1__state_0(((int32_t)-3));
		RuntimeObject* L_0 = __this->get_U3CU3E7__wrap2_11();
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		RuntimeObject* L_1 = __this->get_U3CU3E7__wrap2_11();
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_1);
	}

IL_001b:
	{
		return;
	}
}
// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JsonPath.QueryScanFilter/<ExecuteFilter>d__2::System.Collections.Generic.IEnumerator<Newtonsoft.Json.Linq.JToken>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JToken_t29F54EE35244E7B362E5D54E9517FCD2B0DBE359 * U3CExecuteFilterU3Ed__2_System_Collections_Generic_IEnumeratorU3CNewtonsoft_Json_Linq_JTokenU3E_get_Current_mCBAB76E76B74050A97135E185FF105F6BD21C2D4 (U3CExecuteFilterU3Ed__2_t21E3C4FBFF60C5E17F946D9E0505FA0F13585478 * __this, const RuntimeMethod* method)
{
	{
		JToken_t29F54EE35244E7B362E5D54E9517FCD2B0DBE359 * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Newtonsoft.Json.Linq.JsonPath.QueryScanFilter/<ExecuteFilter>d__2::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CExecuteFilterU3Ed__2_System_Collections_IEnumerator_Reset_m36CFE38C6CBEB524C55A737C0612D4C91FB2E480 (U3CExecuteFilterU3Ed__2_t21E3C4FBFF60C5E17F946D9E0505FA0F13585478 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CExecuteFilterU3Ed__2_System_Collections_IEnumerator_Reset_m36CFE38C6CBEB524C55A737C0612D4C91FB2E480_RuntimeMethod_var)));
	}
}
// System.Object Newtonsoft.Json.Linq.JsonPath.QueryScanFilter/<ExecuteFilter>d__2::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CExecuteFilterU3Ed__2_System_Collections_IEnumerator_get_Current_m51C00E4E4EC6FE181715B5B942E6254DE2D00995 (U3CExecuteFilterU3Ed__2_t21E3C4FBFF60C5E17F946D9E0505FA0F13585478 * __this, const RuntimeMethod* method)
{
	{
		JToken_t29F54EE35244E7B362E5D54E9517FCD2B0DBE359 * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<Newtonsoft.Json.Linq.JToken> Newtonsoft.Json.Linq.JsonPath.QueryScanFilter/<ExecuteFilter>d__2::System.Collections.Generic.IEnumerable<Newtonsoft.Json.Linq.JToken>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CExecuteFilterU3Ed__2_System_Collections_Generic_IEnumerableU3CNewtonsoft_Json_Linq_JTokenU3E_GetEnumerator_m10784184A6FB6319531BD27A4F553DBFB0077A9E (U3CExecuteFilterU3Ed__2_t21E3C4FBFF60C5E17F946D9E0505FA0F13585478 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CExecuteFilterU3Ed__2_t21E3C4FBFF60C5E17F946D9E0505FA0F13585478_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CExecuteFilterU3Ed__2_t21E3C4FBFF60C5E17F946D9E0505FA0F13585478 * V_0 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_1 = __this->get_U3CU3El__initialThreadId_2();
		int32_t L_2;
		L_2 = Environment_get_CurrentManagedThreadId_m09DBD4166BFD399056B2F81C77A3A182339BF92D(/*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_0022;
		}
	}
	{
		__this->set_U3CU3E1__state_0(0);
		V_0 = __this;
		goto IL_0035;
	}

IL_0022:
	{
		U3CExecuteFilterU3Ed__2_t21E3C4FBFF60C5E17F946D9E0505FA0F13585478 * L_3 = (U3CExecuteFilterU3Ed__2_t21E3C4FBFF60C5E17F946D9E0505FA0F13585478 *)il2cpp_codegen_object_new(U3CExecuteFilterU3Ed__2_t21E3C4FBFF60C5E17F946D9E0505FA0F13585478_il2cpp_TypeInfo_var);
		U3CExecuteFilterU3Ed__2__ctor_mF7ED0237D1931D80FFCF1278FDDF3A2ED6805384(L_3, 0, /*hidden argument*/NULL);
		V_0 = L_3;
		U3CExecuteFilterU3Ed__2_t21E3C4FBFF60C5E17F946D9E0505FA0F13585478 * L_4 = V_0;
		QueryScanFilter_tA0457204F988F3944CED5D7DE2620ABC6CEA1FA6 * L_5 = __this->get_U3CU3E4__this_5();
		NullCheck(L_4);
		L_4->set_U3CU3E4__this_5(L_5);
	}

IL_0035:
	{
		U3CExecuteFilterU3Ed__2_t21E3C4FBFF60C5E17F946D9E0505FA0F13585478 * L_6 = V_0;
		JToken_t29F54EE35244E7B362E5D54E9517FCD2B0DBE359 * L_7 = __this->get_U3CU3E3__root_7();
		NullCheck(L_6);
		L_6->set_root_6(L_7);
		U3CExecuteFilterU3Ed__2_t21E3C4FBFF60C5E17F946D9E0505FA0F13585478 * L_8 = V_0;
		RuntimeObject* L_9 = __this->get_U3CU3E3__current_4();
		NullCheck(L_8);
		L_8->set_current_3(L_9);
		U3CExecuteFilterU3Ed__2_t21E3C4FBFF60C5E17F946D9E0505FA0F13585478 * L_10 = V_0;
		JsonSelectSettings_t473B56CACFC6E1C255C7191CE7FAD72AB78BFCEF * L_11 = __this->get_U3CU3E3__settings_9();
		NullCheck(L_10);
		L_10->set_settings_8(L_11);
		U3CExecuteFilterU3Ed__2_t21E3C4FBFF60C5E17F946D9E0505FA0F13585478 * L_12 = V_0;
		return L_12;
	}
}
// System.Collections.IEnumerator Newtonsoft.Json.Linq.JsonPath.QueryScanFilter/<ExecuteFilter>d__2::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CExecuteFilterU3Ed__2_System_Collections_IEnumerable_GetEnumerator_m77576079CB373E2B68E189ED8910F2EA12648B38 (U3CExecuteFilterU3Ed__2_t21E3C4FBFF60C5E17F946D9E0505FA0F13585478 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0;
		L_0 = U3CExecuteFilterU3Ed__2_System_Collections_Generic_IEnumerableU3CNewtonsoft_Json_Linq_JTokenU3E_GetEnumerator_m10784184A6FB6319531BD27A4F553DBFB0077A9E(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Newtonsoft.Json.Utilities.ReflectionObject/<>c__DisplayClass11_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass11_0__ctor_mB703EF8DE65ABCB82670433B7505133BDF4538C7 (U3CU3Ec__DisplayClass11_0_tF928E96E14BC8ECEB70C485002D09193B22513F2 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object Newtonsoft.Json.Utilities.ReflectionObject/<>c__DisplayClass11_0::<Create>b__0(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CU3Ec__DisplayClass11_0_U3CCreateU3Eb__0_mAB9B000852CBD214AC488D4B575A6E6E780E5804 (U3CU3Ec__DisplayClass11_0_tF928E96E14BC8ECEB70C485002D09193B22513F2 * __this, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_Invoke_m4DB932CB3E45300394D6087DBF4C3D620606F726_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Func_1_t807CEE610086E24A0167BAA97A64062016E09D49 * L_0 = __this->get_ctor_0();
		NullCheck(L_0);
		RuntimeObject * L_1;
		L_1 = Func_1_Invoke_m4DB932CB3E45300394D6087DBF4C3D620606F726(L_0, /*hidden argument*/Func_1_Invoke_m4DB932CB3E45300394D6087DBF4C3D620606F726_RuntimeMethod_var);
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Newtonsoft.Json.Utilities.ReflectionObject/<>c__DisplayClass11_1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass11_1__ctor_m13527454B03E551199FA5C082325EF5669CBDF79 (U3CU3Ec__DisplayClass11_1_t78E2B27646A3CDFEBAB7C881F9DA8405FE8779CC * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object Newtonsoft.Json.Utilities.ReflectionObject/<>c__DisplayClass11_1::<Create>b__1(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CU3Ec__DisplayClass11_1_U3CCreateU3Eb__1_m27B2094E63095E957916CCB596F05579A207325A (U3CU3Ec__DisplayClass11_1_t78E2B27646A3CDFEBAB7C881F9DA8405FE8779CC * __this, RuntimeObject * ___target0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MethodCall_2_Invoke_m7CD4C7C78993C179E715B01E8A76BDFC3301C8F1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		MethodCall_2_t5E28B9DEE3B3A32CA955A9F5A149CC91CE1F9C6F * L_0 = __this->get_call_0();
		RuntimeObject * L_1 = ___target0;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2;
		L_2 = Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		NullCheck(L_0);
		RuntimeObject * L_3;
		L_3 = MethodCall_2_Invoke_m7CD4C7C78993C179E715B01E8A76BDFC3301C8F1(L_0, L_1, L_2, /*hidden argument*/MethodCall_2_Invoke_m7CD4C7C78993C179E715B01E8A76BDFC3301C8F1_RuntimeMethod_var);
		return L_3;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Newtonsoft.Json.Utilities.ReflectionObject/<>c__DisplayClass11_2::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass11_2__ctor_mB5D0FE87BDABD9B696015CECA40F9F94A6D8D5EE (U3CU3Ec__DisplayClass11_2_t92F76CE0A268F4D1987C038EF709A6228BD72259 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Newtonsoft.Json.Utilities.ReflectionObject/<>c__DisplayClass11_2::<Create>b__2(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass11_2_U3CCreateU3Eb__2_m91DDEC226553339C7D907A929D22403DC2B7AAAF (U3CU3Ec__DisplayClass11_2_t92F76CE0A268F4D1987C038EF709A6228BD72259 * __this, RuntimeObject * ___target0, RuntimeObject * ___arg1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MethodCall_2_Invoke_m7CD4C7C78993C179E715B01E8A76BDFC3301C8F1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		MethodCall_2_t5E28B9DEE3B3A32CA955A9F5A149CC91CE1F9C6F * L_0 = __this->get_call_0();
		RuntimeObject * L_1 = ___target0;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3 = L_2;
		RuntimeObject * L_4 = ___arg1;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_4);
		NullCheck(L_0);
		RuntimeObject * L_5;
		L_5 = MethodCall_2_Invoke_m7CD4C7C78993C179E715B01E8A76BDFC3301C8F1(L_0, L_1, L_3, /*hidden argument*/MethodCall_2_Invoke_m7CD4C7C78993C179E715B01E8A76BDFC3301C8F1_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Newtonsoft.Json.Utilities.ReflectionUtils/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m6229B980904F2B27674860D822FC9D585D13B040 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t8CE040292E2A95685256FEE59EF2868355725303_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t8CE040292E2A95685256FEE59EF2868355725303 * L_0 = (U3CU3Ec_t8CE040292E2A95685256FEE59EF2868355725303 *)il2cpp_codegen_object_new(U3CU3Ec_t8CE040292E2A95685256FEE59EF2868355725303_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mCA8B39F934BC3244E8CF2D98058ECF2691E6ED96(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t8CE040292E2A95685256FEE59EF2868355725303_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t8CE040292E2A95685256FEE59EF2868355725303_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Newtonsoft.Json.Utilities.ReflectionUtils/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mCA8B39F934BC3244E8CF2D98058ECF2691E6ED96 (U3CU3Ec_t8CE040292E2A95685256FEE59EF2868355725303 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Newtonsoft.Json.Utilities.ReflectionUtils/<>c::<GetDefaultConstructor>b__11_0(System.Reflection.ConstructorInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CGetDefaultConstructorU3Eb__11_0_m8994D6575285F16D10EFBF617FA396E7624DADD1 (U3CU3Ec_t8CE040292E2A95685256FEE59EF2868355725303 * __this, ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B * ___c0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Any_TisParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7_mC34A3CF45962BF5A4FDF04D029B51F4B0CFD938F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B * L_0 = ___c0;
		NullCheck(L_0);
		ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B* L_1;
		L_1 = VirtFuncInvoker0< ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B* >::Invoke(18 /* System.Reflection.ParameterInfo[] System.Reflection.MethodBase::GetParameters() */, L_0);
		bool L_2;
		L_2 = Enumerable_Any_TisParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7_mC34A3CF45962BF5A4FDF04D029B51F4B0CFD938F((RuntimeObject*)(RuntimeObject*)L_1, /*hidden argument*/Enumerable_Any_TisParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7_mC34A3CF45962BF5A4FDF04D029B51F4B0CFD938F_RuntimeMethod_var);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
// System.String Newtonsoft.Json.Utilities.ReflectionUtils/<>c::<GetFieldsAndProperties>b__31_0(System.Reflection.MemberInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3CGetFieldsAndPropertiesU3Eb__31_0_m604780F5F437BA273AA8E7A044E6E1C4ACEB4442 (U3CU3Ec_t8CE040292E2A95685256FEE59EF2868355725303 * __this, MemberInfo_t * ___m0, const RuntimeMethod* method)
{
	{
		MemberInfo_t * L_0 = ___m0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_0);
		return L_1;
	}
}
// System.Type Newtonsoft.Json.Utilities.ReflectionUtils/<>c::<GetMemberInfoFromType>b__39_0(System.Reflection.ParameterInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * U3CU3Ec_U3CGetMemberInfoFromTypeU3Eb__39_0_mAE2BC7372C42DBF8889BF9E05D5646BCDE1BC7A7 (U3CU3Ec_t8CE040292E2A95685256FEE59EF2868355725303 * __this, ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 * ___p0, const RuntimeMethod* method)
{
	{
		ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 * L_0 = ___p0;
		NullCheck(L_0);
		Type_t * L_1;
		L_1 = VirtFuncInvoker0< Type_t * >::Invoke(8 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, L_0);
		return L_1;
	}
}
// System.Boolean Newtonsoft.Json.Utilities.ReflectionUtils/<>c::<GetChildPrivateFields>b__41_0(System.Reflection.FieldInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CGetChildPrivateFieldsU3Eb__41_0_mFAE5E45473C1D7151DB2D07AF966DF100EC1A834 (U3CU3Ec_t8CE040292E2A95685256FEE59EF2868355725303 * __this, FieldInfo_t * ___f0, const RuntimeMethod* method)
{
	{
		FieldInfo_t * L_0 = ___f0;
		NullCheck(L_0);
		bool L_1;
		L_1 = FieldInfo_get_IsPrivate_m33AC8E111CE7497070E6F65F11E68CD536D42072(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Newtonsoft.Json.Utilities.ReflectionUtils/<>c__DisplayClass31_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass31_0__ctor_m86893DDB744C330EDA2AF367734FAA9EF356A7C1 (U3CU3Ec__DisplayClass31_0_tCEC3365D1BD57BC604DAA5A57CC4C55E93F0B9F8 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Newtonsoft.Json.Utilities.ReflectionUtils/<>c__DisplayClass31_0::<GetFieldsAndProperties>b__1(System.Reflection.MemberInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass31_0_U3CGetFieldsAndPropertiesU3Eb__1_m0C99E37034F03527CD9A03751FFC44730DF407C9 (U3CU3Ec__DisplayClass31_0_tCEC3365D1BD57BC604DAA5A57CC4C55E93F0B9F8 * __this, MemberInfo_t * ___m0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		MemberInfo_t * L_0 = ___m0;
		NullCheck(L_0);
		Type_t * L_1;
		L_1 = VirtFuncInvoker0< Type_t * >::Invoke(9 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_0);
		MemberInfo_t * L_2 = __this->get_memberInfo_0();
		NullCheck(L_2);
		Type_t * L_3;
		L_3 = VirtFuncInvoker0< Type_t * >::Invoke(9 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_2);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046(L_1, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Newtonsoft.Json.Utilities.ReflectionUtils/<>c__DisplayClass44_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass44_0__ctor_m065E038FFA90F829F3217583A29719544C78B523 (U3CU3Ec__DisplayClass44_0_t5869AF36E0D5F069396C0CD6EAC9CFEDED43C29B * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Newtonsoft.Json.Utilities.ReflectionUtils/<>c__DisplayClass44_0::<GetChildPrivateProperties>b__0(System.Reflection.PropertyInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass44_0_U3CGetChildPrivatePropertiesU3Eb__0_m4487323DCA53212357A0C70961DA6327AC8AD7AE (U3CU3Ec__DisplayClass44_0_t5869AF36E0D5F069396C0CD6EAC9CFEDED43C29B * __this, PropertyInfo_t * ___p0, const RuntimeMethod* method)
{
	{
		PropertyInfo_t * L_0 = ___p0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_0);
		PropertyInfo_t * L_2 = __this->get_subTypeProperty_0();
		NullCheck(L_2);
		String_t* L_3;
		L_3 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_2);
		bool L_4;
		L_4 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_1, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Boolean Newtonsoft.Json.Utilities.ReflectionUtils/<>c__DisplayClass44_0::<GetChildPrivateProperties>b__1(System.Reflection.PropertyInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass44_0_U3CGetChildPrivatePropertiesU3Eb__1_m06FAEC64BEE55260C2D1A40F75739B8398137CE4 (U3CU3Ec__DisplayClass44_0_t5869AF36E0D5F069396C0CD6EAC9CFEDED43C29B * __this, PropertyInfo_t * ___p0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		PropertyInfo_t * L_0 = ___p0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_0);
		PropertyInfo_t * L_2 = __this->get_subTypeProperty_0();
		NullCheck(L_2);
		String_t* L_3;
		L_3 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_2);
		bool L_4;
		L_4 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_1, L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_002f;
		}
	}
	{
		PropertyInfo_t * L_5 = ___p0;
		NullCheck(L_5);
		Type_t * L_6;
		L_6 = VirtFuncInvoker0< Type_t * >::Invoke(9 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_5);
		PropertyInfo_t * L_7 = __this->get_subTypeProperty_0();
		NullCheck(L_7);
		Type_t * L_8;
		L_8 = VirtFuncInvoker0< Type_t * >::Invoke(9 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_7);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046(L_6, L_8, /*hidden argument*/NULL);
		return L_9;
	}

IL_002f:
	{
		return (bool)0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Newtonsoft.Json.Utilities.ReflectionUtils/<>c__DisplayClass44_1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass44_1__ctor_m21BAF63BE4A8D64D35EA622E0B4E54A4CD7477A0 (U3CU3Ec__DisplayClass44_1_t0F0B1C1F120D3597373438C49039C3858E5E9BAC * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Newtonsoft.Json.Utilities.ReflectionUtils/<>c__DisplayClass44_1::<GetChildPrivateProperties>b__2(System.Reflection.PropertyInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass44_1_U3CGetChildPrivatePropertiesU3Eb__2_mB86F7ED1047F1347193EE7C9E25B3DD2F593BA06 (U3CU3Ec__DisplayClass44_1_t0F0B1C1F120D3597373438C49039C3858E5E9BAC * __this, PropertyInfo_t * ___p0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectionUtils_t7644190A8F73F83DCD6612F14B3BBA31F1C00EE2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MethodInfo_t * G_B4_0 = NULL;
	MethodInfo_t * G_B3_0 = NULL;
	Type_t * G_B5_0 = NULL;
	Type_t * G_B7_0 = NULL;
	Type_t * G_B6_0 = NULL;
	{
		PropertyInfo_t * L_0 = ___p0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_0);
		U3CU3Ec__DisplayClass44_0_t5869AF36E0D5F069396C0CD6EAC9CFEDED43C29B * L_2 = __this->get_CSU24U3CU3E8__locals1_1();
		NullCheck(L_2);
		PropertyInfo_t * L_3 = L_2->get_subTypeProperty_0();
		NullCheck(L_3);
		String_t* L_4;
		L_4 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_3);
		bool L_5;
		L_5 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_1, L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_004d;
		}
	}
	{
		PropertyInfo_t * L_6 = ___p0;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t7644190A8F73F83DCD6612F14B3BBA31F1C00EE2_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = ReflectionUtils_IsVirtual_mA10502AC28F01E162AD4AF7CFB8431535F8A9002(L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		PropertyInfo_t * L_8 = ___p0;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t7644190A8F73F83DCD6612F14B3BBA31F1C00EE2_il2cpp_TypeInfo_var);
		MethodInfo_t * L_9;
		L_9 = ReflectionUtils_GetBaseDefinition_m9C94CC2D98A5D44A6DE0834E8CEB442447B2EF65(L_8, /*hidden argument*/NULL);
		MethodInfo_t * L_10 = L_9;
		G_B3_0 = L_10;
		if (L_10)
		{
			G_B4_0 = L_10;
			goto IL_0032;
		}
	}
	{
		G_B5_0 = ((Type_t *)(NULL));
		goto IL_0037;
	}

IL_0032:
	{
		NullCheck(G_B4_0);
		Type_t * L_11;
		L_11 = VirtFuncInvoker0< Type_t * >::Invoke(9 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, G_B4_0);
		G_B5_0 = L_11;
	}

IL_0037:
	{
		Type_t * L_12 = G_B5_0;
		G_B6_0 = L_12;
		if (L_12)
		{
			G_B7_0 = L_12;
			goto IL_0041;
		}
	}
	{
		PropertyInfo_t * L_13 = ___p0;
		NullCheck(L_13);
		Type_t * L_14;
		L_14 = VirtFuncInvoker0< Type_t * >::Invoke(9 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_13);
		G_B7_0 = L_14;
	}

IL_0041:
	{
		Type_t * L_15 = __this->get_subTypePropertyDeclaringType_0();
		NullCheck(G_B7_0);
		bool L_16;
		L_16 = VirtFuncInvoker1< bool, Type_t * >::Invoke(117 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, G_B7_0, L_15);
		return L_16;
	}

IL_004d:
	{
		return (bool)0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Newtonsoft.Json.Utilities.ReflectionUtils/<>c__DisplayClass45_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass45_0__ctor_m66ABCCEBC092E6CE4AD21432F3C41A4F3D2447BF (U3CU3Ec__DisplayClass45_0_t3F7A7DD4346628E64B108B2D3BF7E943577E2047 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Newtonsoft.Json.Utilities.ReflectionUtils/<>c__DisplayClass45_0::<IsMethodOverridden>b__0(System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass45_0_U3CIsMethodOverriddenU3Eb__0_mF3F9BC9B57B7520322D2620757417603B1DC82AB (U3CU3Ec__DisplayClass45_0_t3F7A7DD4346628E64B108B2D3BF7E943577E2047 * __this, MethodInfo_t * ___info0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		MethodInfo_t * L_0 = ___info0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_0);
		String_t* L_2 = __this->get_method_0();
		bool L_3;
		L_3 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_1, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_003d;
		}
	}
	{
		MethodInfo_t * L_4 = ___info0;
		NullCheck(L_4);
		Type_t * L_5;
		L_5 = VirtFuncInvoker0< Type_t * >::Invoke(9 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_4);
		Type_t * L_6 = __this->get_methodDeclaringType_1();
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Type_op_Inequality_m6DDC5E923203A79BF505F9275B694AD3FAA36DB0(L_5, L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_003d;
		}
	}
	{
		MethodInfo_t * L_8 = ___info0;
		NullCheck(L_8);
		MethodInfo_t * L_9;
		L_9 = VirtFuncInvoker0< MethodInfo_t * >::Invoke(42 /* System.Reflection.MethodInfo System.Reflection.MethodInfo::GetBaseDefinition() */, L_8);
		NullCheck(L_9);
		Type_t * L_10;
		L_10 = VirtFuncInvoker0< Type_t * >::Invoke(9 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_9);
		Type_t * L_11 = __this->get_methodDeclaringType_1();
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_12;
		L_12 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046(L_10, L_11, /*hidden argument*/NULL);
		return L_12;
	}

IL_003d:
	{
		return (bool)0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Newtonsoft.Json.Linq.JsonPath.ScanFilter/<ExecuteFilter>d__2::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CExecuteFilterU3Ed__2__ctor_mBA26A80AE67D14C6CAC70EC368DD624969B7A826 (U3CExecuteFilterU3Ed__2_t6A9514CF3CFAEC5C49745D57B133C029C022CA5E * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		int32_t L_1;
		L_1 = Environment_get_CurrentManagedThreadId_m09DBD4166BFD399056B2F81C77A3A182339BF92D(/*hidden argument*/NULL);
		__this->set_U3CU3El__initialThreadId_2(L_1);
		return;
	}
}
// System.Void Newtonsoft.Json.Linq.JsonPath.ScanFilter/<ExecuteFilter>d__2::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CExecuteFilterU3Ed__2_System_IDisposable_Dispose_m8C877F4330CC8B869DCBB90A215C147E551A6A7F (U3CExecuteFilterU3Ed__2_t6A9514CF3CFAEC5C49745D57B133C029C022CA5E * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)1))) <= ((uint32_t)2))))
		{
			goto IL_001c;
		}
	}

IL_0012:
	{
	}

IL_0013:
	try
	{ // begin try (depth: 1)
		IL2CPP_LEAVE(0x1C, FINALLY_0015);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0015;
	}

FINALLY_0015:
	{ // begin finally (depth: 1)
		U3CExecuteFilterU3Ed__2_U3CU3Em__Finally1_m699DB7F8C7CBBD6FE33C1E4FFF8F56CAC226B004(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(21)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(21)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x1C, IL_001c)
	}

IL_001c:
	{
		return;
	}
}
// System.Boolean Newtonsoft.Json.Linq.JsonPath.ScanFilter/<ExecuteFilter>d__2::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CExecuteFilterU3Ed__2_MoveNext_m90BE01E2E231A1EE40051129D2D6D8E6F8F0BD32 (U3CExecuteFilterU3Ed__2_t6A9514CF3CFAEC5C49745D57B133C029C022CA5E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tA97507BE4EA999D3A37CBC336924BFEA67C9FE9E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t6D746D34D007AC6D34C5279EA90DA276DDF70281_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JContainer_t38DD4DF522660749764609AA408DFD0575BABE3F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JProperty_tF9DA59F1EB857859581CDEE663A2A0040D5A9A53_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	ScanFilter_tEAA0D66F60DC218A0AAE2CBEEFCEE961767F79D1 * V_2 = NULL;
	JContainer_t38DD4DF522660749764609AA408DFD0575BABE3F * V_3 = NULL;
	JProperty_tF9DA59F1EB857859581CDEE663A2A0040D5A9A53 * V_4 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 5> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_0 = __this->get_U3CU3E1__state_0();
			V_1 = L_0;
			ScanFilter_tEAA0D66F60DC218A0AAE2CBEEFCEE961767F79D1 * L_1 = __this->get_U3CU3E4__this_5();
			V_2 = L_1;
			int32_t L_2 = V_1;
			switch (L_2)
			{
				case 0:
				{
					goto IL_002b;
				}
				case 1:
				{
					goto IL_0083;
				}
				case 2:
				{
					goto IL_0100;
				}
				case 3:
				{
					goto IL_0129;
				}
			}
		}

IL_0024:
		{
			V_0 = (bool)0;
			goto IL_016c;
		}

IL_002b:
		{
			__this->set_U3CU3E1__state_0((-1));
			RuntimeObject* L_3 = __this->get_current_3();
			NullCheck(L_3);
			RuntimeObject* L_4;
			L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<Newtonsoft.Json.Linq.JToken>::GetEnumerator() */, IEnumerable_1_tA97507BE4EA999D3A37CBC336924BFEA67C9FE9E_il2cpp_TypeInfo_var, L_3);
			__this->set_U3CU3E7__wrap1_6(L_4);
			__this->set_U3CU3E1__state_0(((int32_t)-3));
			goto IL_0144;
		}

IL_0050:
		{
			RuntimeObject* L_5 = __this->get_U3CU3E7__wrap1_6();
			NullCheck(L_5);
			JToken_t29F54EE35244E7B362E5D54E9517FCD2B0DBE359 * L_6;
			L_6 = InterfaceFuncInvoker0< JToken_t29F54EE35244E7B362E5D54E9517FCD2B0DBE359 * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<Newtonsoft.Json.Linq.JToken>::get_Current() */, IEnumerator_1_t6D746D34D007AC6D34C5279EA90DA276DDF70281_il2cpp_TypeInfo_var, L_5);
			__this->set_U3CcU3E5__3_7(L_6);
			ScanFilter_tEAA0D66F60DC218A0AAE2CBEEFCEE961767F79D1 * L_7 = V_2;
			NullCheck(L_7);
			String_t* L_8 = L_7->get_Name_0();
			if (L_8)
			{
				goto IL_008b;
			}
		}

IL_0069:
		{
			JToken_t29F54EE35244E7B362E5D54E9517FCD2B0DBE359 * L_9 = __this->get_U3CcU3E5__3_7();
			__this->set_U3CU3E2__current_1(L_9);
			__this->set_U3CU3E1__state_0(1);
			V_0 = (bool)1;
			goto IL_016c;
		}

IL_0083:
		{
			__this->set_U3CU3E1__state_0(((int32_t)-3));
		}

IL_008b:
		{
			JToken_t29F54EE35244E7B362E5D54E9517FCD2B0DBE359 * L_10 = __this->get_U3CcU3E5__3_7();
			__this->set_U3CvalueU3E5__4_8(L_10);
		}

IL_0097:
		{
			JToken_t29F54EE35244E7B362E5D54E9517FCD2B0DBE359 * L_11 = __this->get_U3CvalueU3E5__4_8();
			V_3 = ((JContainer_t38DD4DF522660749764609AA408DFD0575BABE3F *)IsInstClass((RuntimeObject*)L_11, JContainer_t38DD4DF522660749764609AA408DFD0575BABE3F_il2cpp_TypeInfo_var));
			JToken_t29F54EE35244E7B362E5D54E9517FCD2B0DBE359 * L_12 = __this->get_U3CcU3E5__3_7();
			JContainer_t38DD4DF522660749764609AA408DFD0575BABE3F * L_13 = V_3;
			JToken_t29F54EE35244E7B362E5D54E9517FCD2B0DBE359 * L_14 = __this->get_U3CvalueU3E5__4_8();
			JToken_t29F54EE35244E7B362E5D54E9517FCD2B0DBE359 * L_15;
			L_15 = PathFilter_GetNextScanValue_m8A62F6AB8EAA1FE956DBCF92E2D61389F557432A(L_12, L_13, L_14, /*hidden argument*/NULL);
			__this->set_U3CvalueU3E5__4_8(L_15);
			JToken_t29F54EE35244E7B362E5D54E9517FCD2B0DBE359 * L_16 = __this->get_U3CvalueU3E5__4_8();
			if (!L_16)
			{
				goto IL_0136;
			}
		}

IL_00c3:
		{
			JToken_t29F54EE35244E7B362E5D54E9517FCD2B0DBE359 * L_17 = __this->get_U3CvalueU3E5__4_8();
			V_4 = ((JProperty_tF9DA59F1EB857859581CDEE663A2A0040D5A9A53 *)IsInstClass((RuntimeObject*)L_17, JProperty_tF9DA59F1EB857859581CDEE663A2A0040D5A9A53_il2cpp_TypeInfo_var));
			JProperty_tF9DA59F1EB857859581CDEE663A2A0040D5A9A53 * L_18 = V_4;
			if (!L_18)
			{
				goto IL_010a;
			}
		}

IL_00d4:
		{
			JProperty_tF9DA59F1EB857859581CDEE663A2A0040D5A9A53 * L_19 = V_4;
			NullCheck(L_19);
			String_t* L_20;
			L_20 = JProperty_get_Name_mF3BBAB949CDF1B517CAF1BE2B2014771B43E3A1D_inline(L_19, /*hidden argument*/NULL);
			ScanFilter_tEAA0D66F60DC218A0AAE2CBEEFCEE961767F79D1 * L_21 = V_2;
			NullCheck(L_21);
			String_t* L_22 = L_21->get_Name_0();
			bool L_23;
			L_23 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_20, L_22, /*hidden argument*/NULL);
			if (!L_23)
			{
				goto IL_0097;
			}
		}

IL_00e8:
		{
			JProperty_tF9DA59F1EB857859581CDEE663A2A0040D5A9A53 * L_24 = V_4;
			NullCheck(L_24);
			JToken_t29F54EE35244E7B362E5D54E9517FCD2B0DBE359 * L_25;
			L_25 = JProperty_get_Value_m6CBB4C6E86803F3150F1454AD6C78B883C45946C(L_24, /*hidden argument*/NULL);
			__this->set_U3CU3E2__current_1(L_25);
			__this->set_U3CU3E1__state_0(2);
			V_0 = (bool)1;
			goto IL_016c;
		}

IL_0100:
		{
			__this->set_U3CU3E1__state_0(((int32_t)-3));
			goto IL_0097;
		}

IL_010a:
		{
			ScanFilter_tEAA0D66F60DC218A0AAE2CBEEFCEE961767F79D1 * L_26 = V_2;
			NullCheck(L_26);
			String_t* L_27 = L_26->get_Name_0();
			if (L_27)
			{
				goto IL_0097;
			}
		}

IL_0112:
		{
			JToken_t29F54EE35244E7B362E5D54E9517FCD2B0DBE359 * L_28 = __this->get_U3CvalueU3E5__4_8();
			__this->set_U3CU3E2__current_1(L_28);
			__this->set_U3CU3E1__state_0(3);
			V_0 = (bool)1;
			goto IL_016c;
		}

IL_0129:
		{
			__this->set_U3CU3E1__state_0(((int32_t)-3));
			goto IL_0097;
		}

IL_0136:
		{
			__this->set_U3CvalueU3E5__4_8((JToken_t29F54EE35244E7B362E5D54E9517FCD2B0DBE359 *)NULL);
			__this->set_U3CcU3E5__3_7((JToken_t29F54EE35244E7B362E5D54E9517FCD2B0DBE359 *)NULL);
		}

IL_0144:
		{
			RuntimeObject* L_29 = __this->get_U3CU3E7__wrap1_6();
			NullCheck(L_29);
			bool L_30;
			L_30 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_29);
			if (L_30)
			{
				goto IL_0050;
			}
		}

IL_0154:
		{
			U3CExecuteFilterU3Ed__2_U3CU3Em__Finally1_m699DB7F8C7CBBD6FE33C1E4FFF8F56CAC226B004(__this, /*hidden argument*/NULL);
			__this->set_U3CU3E7__wrap1_6((RuntimeObject*)NULL);
			V_0 = (bool)0;
			goto IL_016c;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FAULT_0165;
	}

FAULT_0165:
	{ // begin fault (depth: 1)
		U3CExecuteFilterU3Ed__2_System_IDisposable_Dispose_m8C877F4330CC8B869DCBB90A215C147E551A6A7F(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(357)
	} // end fault
	IL2CPP_CLEANUP(357)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_016c:
	{
		bool L_31 = V_0;
		return L_31;
	}
}
// System.Void Newtonsoft.Json.Linq.JsonPath.ScanFilter/<ExecuteFilter>d__2::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CExecuteFilterU3Ed__2_U3CU3Em__Finally1_m699DB7F8C7CBBD6FE33C1E4FFF8F56CAC226B004 (U3CExecuteFilterU3Ed__2_t6A9514CF3CFAEC5C49745D57B133C029C022CA5E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_U3CU3E1__state_0((-1));
		RuntimeObject* L_0 = __this->get_U3CU3E7__wrap1_6();
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject* L_1 = __this->get_U3CU3E7__wrap1_6();
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_1);
	}

IL_001a:
	{
		return;
	}
}
// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JsonPath.ScanFilter/<ExecuteFilter>d__2::System.Collections.Generic.IEnumerator<Newtonsoft.Json.Linq.JToken>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JToken_t29F54EE35244E7B362E5D54E9517FCD2B0DBE359 * U3CExecuteFilterU3Ed__2_System_Collections_Generic_IEnumeratorU3CNewtonsoft_Json_Linq_JTokenU3E_get_Current_m24ECDFE9FA033EA7013DE941C7916DC70BCBB65A (U3CExecuteFilterU3Ed__2_t6A9514CF3CFAEC5C49745D57B133C029C022CA5E * __this, const RuntimeMethod* method)
{
	{
		JToken_t29F54EE35244E7B362E5D54E9517FCD2B0DBE359 * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Newtonsoft.Json.Linq.JsonPath.ScanFilter/<ExecuteFilter>d__2::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CExecuteFilterU3Ed__2_System_Collections_IEnumerator_Reset_mEDE87C046D2A9B73DBA1C21B533E4D309945EFD3 (U3CExecuteFilterU3Ed__2_t6A9514CF3CFAEC5C49745D57B133C029C022CA5E * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CExecuteFilterU3Ed__2_System_Collections_IEnumerator_Reset_mEDE87C046D2A9B73DBA1C21B533E4D309945EFD3_RuntimeMethod_var)));
	}
}
// System.Object Newtonsoft.Json.Linq.JsonPath.ScanFilter/<ExecuteFilter>d__2::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CExecuteFilterU3Ed__2_System_Collections_IEnumerator_get_Current_m7DD0E4B693D99967C8ECA11AF7DCC4A1D39F6D96 (U3CExecuteFilterU3Ed__2_t6A9514CF3CFAEC5C49745D57B133C029C022CA5E * __this, const RuntimeMethod* method)
{
	{
		JToken_t29F54EE35244E7B362E5D54E9517FCD2B0DBE359 * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<Newtonsoft.Json.Linq.JToken> Newtonsoft.Json.Linq.JsonPath.ScanFilter/<ExecuteFilter>d__2::System.Collections.Generic.IEnumerable<Newtonsoft.Json.Linq.JToken>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CExecuteFilterU3Ed__2_System_Collections_Generic_IEnumerableU3CNewtonsoft_Json_Linq_JTokenU3E_GetEnumerator_m424CBF469541C8AD81EC2D110099090CBA7240D6 (U3CExecuteFilterU3Ed__2_t6A9514CF3CFAEC5C49745D57B133C029C022CA5E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CExecuteFilterU3Ed__2_t6A9514CF3CFAEC5C49745D57B133C029C022CA5E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CExecuteFilterU3Ed__2_t6A9514CF3CFAEC5C49745D57B133C029C022CA5E * V_0 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_1 = __this->get_U3CU3El__initialThreadId_2();
		int32_t L_2;
		L_2 = Environment_get_CurrentManagedThreadId_m09DBD4166BFD399056B2F81C77A3A182339BF92D(/*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_0022;
		}
	}
	{
		__this->set_U3CU3E1__state_0(0);
		V_0 = __this;
		goto IL_0035;
	}

IL_0022:
	{
		U3CExecuteFilterU3Ed__2_t6A9514CF3CFAEC5C49745D57B133C029C022CA5E * L_3 = (U3CExecuteFilterU3Ed__2_t6A9514CF3CFAEC5C49745D57B133C029C022CA5E *)il2cpp_codegen_object_new(U3CExecuteFilterU3Ed__2_t6A9514CF3CFAEC5C49745D57B133C029C022CA5E_il2cpp_TypeInfo_var);
		U3CExecuteFilterU3Ed__2__ctor_mBA26A80AE67D14C6CAC70EC368DD624969B7A826(L_3, 0, /*hidden argument*/NULL);
		V_0 = L_3;
		U3CExecuteFilterU3Ed__2_t6A9514CF3CFAEC5C49745D57B133C029C022CA5E * L_4 = V_0;
		ScanFilter_tEAA0D66F60DC218A0AAE2CBEEFCEE961767F79D1 * L_5 = __this->get_U3CU3E4__this_5();
		NullCheck(L_4);
		L_4->set_U3CU3E4__this_5(L_5);
	}

IL_0035:
	{
		U3CExecuteFilterU3Ed__2_t6A9514CF3CFAEC5C49745D57B133C029C022CA5E * L_6 = V_0;
		RuntimeObject* L_7 = __this->get_U3CU3E3__current_4();
		NullCheck(L_6);
		L_6->set_current_3(L_7);
		U3CExecuteFilterU3Ed__2_t6A9514CF3CFAEC5C49745D57B133C029C022CA5E * L_8 = V_0;
		return L_8;
	}
}
// System.Collections.IEnumerator Newtonsoft.Json.Linq.JsonPath.ScanFilter/<ExecuteFilter>d__2::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CExecuteFilterU3Ed__2_System_Collections_IEnumerable_GetEnumerator_mD4BB778E87DE0B3EA9B0A566AF3D9E8C7631E086 (U3CExecuteFilterU3Ed__2_t6A9514CF3CFAEC5C49745D57B133C029C022CA5E * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0;
		L_0 = U3CExecuteFilterU3Ed__2_System_Collections_Generic_IEnumerableU3CNewtonsoft_Json_Linq_JTokenU3E_GetEnumerator_m424CBF469541C8AD81EC2D110099090CBA7240D6(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Newtonsoft.Json.Linq.JsonPath.ScanMultipleFilter/<ExecuteFilter>d__2::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CExecuteFilterU3Ed__2__ctor_mA3553D7C2A871950718B306A0F703B43F99DA97C (U3CExecuteFilterU3Ed__2_t67C36B546073E9FB034A92E9CDFC8558C33E597C * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		int32_t L_1;
		L_1 = Environment_get_CurrentManagedThreadId_m09DBD4166BFD399056B2F81C77A3A182339BF92D(/*hidden argument*/NULL);
		__this->set_U3CU3El__initialThreadId_2(L_1);
		return;
	}
}
// System.Void Newtonsoft.Json.Linq.JsonPath.ScanMultipleFilter/<ExecuteFilter>d__2::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CExecuteFilterU3Ed__2_System_IDisposable_Dispose_m6E041BA51CC6F1AB69D3D42F1E97CCD68CEBB261 (U3CExecuteFilterU3Ed__2_t67C36B546073E9FB034A92E9CDFC8558C33E597C * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)((int32_t)-4)))) > ((uint32_t)1))))
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_002f;
		}
	}

IL_0012:
	{
	}

IL_0013:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_3 = V_0;
			if ((((int32_t)L_3) == ((int32_t)((int32_t)-4))))
			{
				goto IL_001e;
			}
		}

IL_0018:
		{
			int32_t L_4 = V_0;
			if ((((int32_t)L_4) == ((int32_t)1)))
			{
				goto IL_001e;
			}
		}

IL_001c:
		{
			IL2CPP_LEAVE(0x2F, FINALLY_0028);
		}

IL_001e:
		{
		}

IL_001f:
		try
		{ // begin try (depth: 2)
			IL2CPP_LEAVE(0x2F, FINALLY_0021);
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_0021;
		}

FINALLY_0021:
		{ // begin finally (depth: 2)
			U3CExecuteFilterU3Ed__2_U3CU3Em__Finally2_m03F8BA06240E8DF3EBFD76A62F052B9C2DD41DE2(__this, /*hidden argument*/NULL);
			IL2CPP_END_FINALLY(33)
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(33)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_END_CLEANUP(0x2F, FINALLY_0028);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0028;
	}

FINALLY_0028:
	{ // begin finally (depth: 1)
		U3CExecuteFilterU3Ed__2_U3CU3Em__Finally1_mD8FED2F562634D80E3A1E0790EE6E1E12FD6BADF(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(40)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(40)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x2F, IL_002f)
	}

IL_002f:
	{
		return;
	}
}
// System.Boolean Newtonsoft.Json.Linq.JsonPath.ScanMultipleFilter/<ExecuteFilter>d__2::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CExecuteFilterU3Ed__2_MoveNext_m7E0F0E1AB6323DE51C69D7FE4E4B9E48D2B01039 (U3CExecuteFilterU3Ed__2_t67C36B546073E9FB034A92E9CDFC8558C33E597C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mCE70417061695048D84E473D50556E46B8630F54_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m9B0E356FA9FCFB9B1BECC6D7C5DF5C03309251AA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tA97507BE4EA999D3A37CBC336924BFEA67C9FE9E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t6D746D34D007AC6D34C5279EA90DA276DDF70281_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JContainer_t38DD4DF522660749764609AA408DFD0575BABE3F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JProperty_tF9DA59F1EB857859581CDEE663A2A0040D5A9A53_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m35388695226DE2F7B0B5D0A07016716D6AD9CAEF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	ScanMultipleFilter_tEEDD4258E063FF8636D579BAD3E8CA5AA084760A * V_2 = NULL;
	JContainer_t38DD4DF522660749764609AA408DFD0575BABE3F * V_3 = NULL;
	String_t* V_4 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_0 = __this->get_U3CU3E1__state_0();
			V_1 = L_0;
			ScanMultipleFilter_tEEDD4258E063FF8636D579BAD3E8CA5AA084760A * L_1 = __this->get_U3CU3E4__this_5();
			V_2 = L_1;
			int32_t L_2 = V_1;
			if (!L_2)
			{
				goto IL_001f;
			}
		}

IL_0011:
		{
			int32_t L_3 = V_1;
			if ((((int32_t)L_3) == ((int32_t)1)))
			{
				goto IL_0101;
			}
		}

IL_0018:
		{
			V_0 = (bool)0;
			goto IL_016a;
		}

IL_001f:
		{
			__this->set_U3CU3E1__state_0((-1));
			RuntimeObject* L_4 = __this->get_current_3();
			NullCheck(L_4);
			RuntimeObject* L_5;
			L_5 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<Newtonsoft.Json.Linq.JToken>::GetEnumerator() */, IEnumerable_1_tA97507BE4EA999D3A37CBC336924BFEA67C9FE9E_il2cpp_TypeInfo_var, L_4);
			__this->set_U3CU3E7__wrap1_6(L_5);
			__this->set_U3CU3E1__state_0(((int32_t)-3));
			goto IL_0142;
		}

IL_0044:
		{
			RuntimeObject* L_6 = __this->get_U3CU3E7__wrap1_6();
			NullCheck(L_6);
			JToken_t29F54EE35244E7B362E5D54E9517FCD2B0DBE359 * L_7;
			L_7 = InterfaceFuncInvoker0< JToken_t29F54EE35244E7B362E5D54E9517FCD2B0DBE359 * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<Newtonsoft.Json.Linq.JToken>::get_Current() */, IEnumerator_1_t6D746D34D007AC6D34C5279EA90DA276DDF70281_il2cpp_TypeInfo_var, L_6);
			__this->set_U3CcU3E5__3_7(L_7);
			JToken_t29F54EE35244E7B362E5D54E9517FCD2B0DBE359 * L_8 = __this->get_U3CcU3E5__3_7();
			__this->set_U3CvalueU3E5__4_8(L_8);
		}

IL_0061:
		{
			JToken_t29F54EE35244E7B362E5D54E9517FCD2B0DBE359 * L_9 = __this->get_U3CvalueU3E5__4_8();
			V_3 = ((JContainer_t38DD4DF522660749764609AA408DFD0575BABE3F *)IsInstClass((RuntimeObject*)L_9, JContainer_t38DD4DF522660749764609AA408DFD0575BABE3F_il2cpp_TypeInfo_var));
			JToken_t29F54EE35244E7B362E5D54E9517FCD2B0DBE359 * L_10 = __this->get_U3CcU3E5__3_7();
			JContainer_t38DD4DF522660749764609AA408DFD0575BABE3F * L_11 = V_3;
			JToken_t29F54EE35244E7B362E5D54E9517FCD2B0DBE359 * L_12 = __this->get_U3CvalueU3E5__4_8();
			JToken_t29F54EE35244E7B362E5D54E9517FCD2B0DBE359 * L_13;
			L_13 = PathFilter_GetNextScanValue_m8A62F6AB8EAA1FE956DBCF92E2D61389F557432A(L_10, L_11, L_12, /*hidden argument*/NULL);
			__this->set_U3CvalueU3E5__4_8(L_13);
			JToken_t29F54EE35244E7B362E5D54E9517FCD2B0DBE359 * L_14 = __this->get_U3CvalueU3E5__4_8();
			if (!L_14)
			{
				goto IL_0134;
			}
		}

IL_0090:
		{
			JToken_t29F54EE35244E7B362E5D54E9517FCD2B0DBE359 * L_15 = __this->get_U3CvalueU3E5__4_8();
			__this->set_U3CpropertyU3E5__5_9(((JProperty_tF9DA59F1EB857859581CDEE663A2A0040D5A9A53 *)IsInstClass((RuntimeObject*)L_15, JProperty_tF9DA59F1EB857859581CDEE663A2A0040D5A9A53_il2cpp_TypeInfo_var)));
			JProperty_tF9DA59F1EB857859581CDEE663A2A0040D5A9A53 * L_16 = __this->get_U3CpropertyU3E5__5_9();
			if (!L_16)
			{
				goto IL_0128;
			}
		}

IL_00a9:
		{
			ScanMultipleFilter_tEEDD4258E063FF8636D579BAD3E8CA5AA084760A * L_17 = V_2;
			NullCheck(L_17);
			List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_18 = L_17->get__names_0();
			NullCheck(L_18);
			Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B  L_19;
			L_19 = List_1_GetEnumerator_m35388695226DE2F7B0B5D0A07016716D6AD9CAEF(L_18, /*hidden argument*/List_1_GetEnumerator_m35388695226DE2F7B0B5D0A07016716D6AD9CAEF_RuntimeMethod_var);
			__this->set_U3CU3E7__wrap5_10(L_19);
			__this->set_U3CU3E1__state_0(((int32_t)-4));
			goto IL_0109;
		}

IL_00c4:
		{
			Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B * L_20 = __this->get_address_of_U3CU3E7__wrap5_10();
			String_t* L_21;
			L_21 = Enumerator_get_Current_m9B0E356FA9FCFB9B1BECC6D7C5DF5C03309251AA_inline((Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B *)L_20, /*hidden argument*/Enumerator_get_Current_m9B0E356FA9FCFB9B1BECC6D7C5DF5C03309251AA_RuntimeMethod_var);
			V_4 = L_21;
			JProperty_tF9DA59F1EB857859581CDEE663A2A0040D5A9A53 * L_22 = __this->get_U3CpropertyU3E5__5_9();
			NullCheck(L_22);
			String_t* L_23;
			L_23 = JProperty_get_Name_mF3BBAB949CDF1B517CAF1BE2B2014771B43E3A1D_inline(L_22, /*hidden argument*/NULL);
			String_t* L_24 = V_4;
			bool L_25;
			L_25 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_23, L_24, /*hidden argument*/NULL);
			if (!L_25)
			{
				goto IL_0109;
			}
		}

IL_00e5:
		{
			JProperty_tF9DA59F1EB857859581CDEE663A2A0040D5A9A53 * L_26 = __this->get_U3CpropertyU3E5__5_9();
			NullCheck(L_26);
			JToken_t29F54EE35244E7B362E5D54E9517FCD2B0DBE359 * L_27;
			L_27 = JProperty_get_Value_m6CBB4C6E86803F3150F1454AD6C78B883C45946C(L_26, /*hidden argument*/NULL);
			__this->set_U3CU3E2__current_1(L_27);
			__this->set_U3CU3E1__state_0(1);
			V_0 = (bool)1;
			goto IL_016a;
		}

IL_0101:
		{
			__this->set_U3CU3E1__state_0(((int32_t)-4));
		}

IL_0109:
		{
			Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B * L_28 = __this->get_address_of_U3CU3E7__wrap5_10();
			bool L_29;
			L_29 = Enumerator_MoveNext_mCE70417061695048D84E473D50556E46B8630F54((Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B *)L_28, /*hidden argument*/Enumerator_MoveNext_mCE70417061695048D84E473D50556E46B8630F54_RuntimeMethod_var);
			if (L_29)
			{
				goto IL_00c4;
			}
		}

IL_0116:
		{
			U3CExecuteFilterU3Ed__2_U3CU3Em__Finally2_m03F8BA06240E8DF3EBFD76A62F052B9C2DD41DE2(__this, /*hidden argument*/NULL);
			Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B * L_30 = __this->get_address_of_U3CU3E7__wrap5_10();
			il2cpp_codegen_initobj(L_30, sizeof(Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B ));
		}

IL_0128:
		{
			__this->set_U3CpropertyU3E5__5_9((JProperty_tF9DA59F1EB857859581CDEE663A2A0040D5A9A53 *)NULL);
			goto IL_0061;
		}

IL_0134:
		{
			__this->set_U3CvalueU3E5__4_8((JToken_t29F54EE35244E7B362E5D54E9517FCD2B0DBE359 *)NULL);
			__this->set_U3CcU3E5__3_7((JToken_t29F54EE35244E7B362E5D54E9517FCD2B0DBE359 *)NULL);
		}

IL_0142:
		{
			RuntimeObject* L_31 = __this->get_U3CU3E7__wrap1_6();
			NullCheck(L_31);
			bool L_32;
			L_32 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_31);
			if (L_32)
			{
				goto IL_0044;
			}
		}

IL_0152:
		{
			U3CExecuteFilterU3Ed__2_U3CU3Em__Finally1_mD8FED2F562634D80E3A1E0790EE6E1E12FD6BADF(__this, /*hidden argument*/NULL);
			__this->set_U3CU3E7__wrap1_6((RuntimeObject*)NULL);
			V_0 = (bool)0;
			goto IL_016a;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FAULT_0163;
	}

FAULT_0163:
	{ // begin fault (depth: 1)
		U3CExecuteFilterU3Ed__2_System_IDisposable_Dispose_m6E041BA51CC6F1AB69D3D42F1E97CCD68CEBB261(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(355)
	} // end fault
	IL2CPP_CLEANUP(355)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_016a:
	{
		bool L_33 = V_0;
		return L_33;
	}
}
// System.Void Newtonsoft.Json.Linq.JsonPath.ScanMultipleFilter/<ExecuteFilter>d__2::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CExecuteFilterU3Ed__2_U3CU3Em__Finally1_mD8FED2F562634D80E3A1E0790EE6E1E12FD6BADF (U3CExecuteFilterU3Ed__2_t67C36B546073E9FB034A92E9CDFC8558C33E597C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_U3CU3E1__state_0((-1));
		RuntimeObject* L_0 = __this->get_U3CU3E7__wrap1_6();
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject* L_1 = __this->get_U3CU3E7__wrap1_6();
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_1);
	}

IL_001a:
	{
		return;
	}
}
// System.Void Newtonsoft.Json.Linq.JsonPath.ScanMultipleFilter/<ExecuteFilter>d__2::<>m__Finally2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CExecuteFilterU3Ed__2_U3CU3Em__Finally2_m03F8BA06240E8DF3EBFD76A62F052B9C2DD41DE2 (U3CExecuteFilterU3Ed__2_t67C36B546073E9FB034A92E9CDFC8558C33E597C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m65A91D17CADA79F187F4D68980A9C8640B6C9FC7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_U3CU3E1__state_0(((int32_t)-3));
		Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B * L_0 = __this->get_address_of_U3CU3E7__wrap5_10();
		Enumerator_Dispose_m65A91D17CADA79F187F4D68980A9C8640B6C9FC7((Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B *)L_0, /*hidden argument*/Enumerator_Dispose_m65A91D17CADA79F187F4D68980A9C8640B6C9FC7_RuntimeMethod_var);
		return;
	}
}
// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JsonPath.ScanMultipleFilter/<ExecuteFilter>d__2::System.Collections.Generic.IEnumerator<Newtonsoft.Json.Linq.JToken>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JToken_t29F54EE35244E7B362E5D54E9517FCD2B0DBE359 * U3CExecuteFilterU3Ed__2_System_Collections_Generic_IEnumeratorU3CNewtonsoft_Json_Linq_JTokenU3E_get_Current_m307D6E9CB41700964D3AAC57D0A78C452311208A (U3CExecuteFilterU3Ed__2_t67C36B546073E9FB034A92E9CDFC8558C33E597C * __this, const RuntimeMethod* method)
{
	{
		JToken_t29F54EE35244E7B362E5D54E9517FCD2B0DBE359 * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Newtonsoft.Json.Linq.JsonPath.ScanMultipleFilter/<ExecuteFilter>d__2::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CExecuteFilterU3Ed__2_System_Collections_IEnumerator_Reset_m4C7350A9AAC246B77D1CF00659BCDA35549DAC78 (U3CExecuteFilterU3Ed__2_t67C36B546073E9FB034A92E9CDFC8558C33E597C * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CExecuteFilterU3Ed__2_System_Collections_IEnumerator_Reset_m4C7350A9AAC246B77D1CF00659BCDA35549DAC78_RuntimeMethod_var)));
	}
}
// System.Object Newtonsoft.Json.Linq.JsonPath.ScanMultipleFilter/<ExecuteFilter>d__2::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CExecuteFilterU3Ed__2_System_Collections_IEnumerator_get_Current_mCAA9269410B218955F587C72D02D3A288C25177C (U3CExecuteFilterU3Ed__2_t67C36B546073E9FB034A92E9CDFC8558C33E597C * __this, const RuntimeMethod* method)
{
	{
		JToken_t29F54EE35244E7B362E5D54E9517FCD2B0DBE359 * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<Newtonsoft.Json.Linq.JToken> Newtonsoft.Json.Linq.JsonPath.ScanMultipleFilter/<ExecuteFilter>d__2::System.Collections.Generic.IEnumerable<Newtonsoft.Json.Linq.JToken>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CExecuteFilterU3Ed__2_System_Collections_Generic_IEnumerableU3CNewtonsoft_Json_Linq_JTokenU3E_GetEnumerator_m2447B7A34602891783509DFCE83C23562F2E6CC9 (U3CExecuteFilterU3Ed__2_t67C36B546073E9FB034A92E9CDFC8558C33E597C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CExecuteFilterU3Ed__2_t67C36B546073E9FB034A92E9CDFC8558C33E597C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CExecuteFilterU3Ed__2_t67C36B546073E9FB034A92E9CDFC8558C33E597C * V_0 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_1 = __this->get_U3CU3El__initialThreadId_2();
		int32_t L_2;
		L_2 = Environment_get_CurrentManagedThreadId_m09DBD4166BFD399056B2F81C77A3A182339BF92D(/*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_0022;
		}
	}
	{
		__this->set_U3CU3E1__state_0(0);
		V_0 = __this;
		goto IL_0035;
	}

IL_0022:
	{
		U3CExecuteFilterU3Ed__2_t67C36B546073E9FB034A92E9CDFC8558C33E597C * L_3 = (U3CExecuteFilterU3Ed__2_t67C36B546073E9FB034A92E9CDFC8558C33E597C *)il2cpp_codegen_object_new(U3CExecuteFilterU3Ed__2_t67C36B546073E9FB034A92E9CDFC8558C33E597C_il2cpp_TypeInfo_var);
		U3CExecuteFilterU3Ed__2__ctor_mA3553D7C2A871950718B306A0F703B43F99DA97C(L_3, 0, /*hidden argument*/NULL);
		V_0 = L_3;
		U3CExecuteFilterU3Ed__2_t67C36B546073E9FB034A92E9CDFC8558C33E597C * L_4 = V_0;
		ScanMultipleFilter_tEEDD4258E063FF8636D579BAD3E8CA5AA084760A * L_5 = __this->get_U3CU3E4__this_5();
		NullCheck(L_4);
		L_4->set_U3CU3E4__this_5(L_5);
	}

IL_0035:
	{
		U3CExecuteFilterU3Ed__2_t67C36B546073E9FB034A92E9CDFC8558C33E597C * L_6 = V_0;
		RuntimeObject* L_7 = __this->get_U3CU3E3__current_4();
		NullCheck(L_6);
		L_6->set_current_3(L_7);
		U3CExecuteFilterU3Ed__2_t67C36B546073E9FB034A92E9CDFC8558C33E597C * L_8 = V_0;
		return L_8;
	}
}
// System.Collections.IEnumerator Newtonsoft.Json.Linq.JsonPath.ScanMultipleFilter/<ExecuteFilter>d__2::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CExecuteFilterU3Ed__2_System_Collections_IEnumerable_GetEnumerator_mD13EAA9CE7B25B0D8A5231CF67FDC55711D92DF5 (U3CExecuteFilterU3Ed__2_t67C36B546073E9FB034A92E9CDFC8558C33E597C * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0;
		L_0 = U3CExecuteFilterU3Ed__2_System_Collections_Generic_IEnumerableU3CNewtonsoft_Json_Linq_JTokenU3E_GetEnumerator_m2447B7A34602891783509DFCE83C23562F2E6CC9(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Newtonsoft.Json.Linq.JObject/JObjectDynamicProxy/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mA96FDFC7CB833AA2959F8BDA52C025DC8A9B327C (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t69B92625E75B6733719EC0111D83CBBA38E18FB2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t69B92625E75B6733719EC0111D83CBBA38E18FB2 * L_0 = (U3CU3Ec_t69B92625E75B6733719EC0111D83CBBA38E18FB2 *)il2cpp_codegen_object_new(U3CU3Ec_t69B92625E75B6733719EC0111D83CBBA38E18FB2_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m46139533E4DDF6094CBED2C52C9F9C656C08176E(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t69B92625E75B6733719EC0111D83CBBA38E18FB2_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t69B92625E75B6733719EC0111D83CBBA38E18FB2_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Newtonsoft.Json.Linq.JObject/JObjectDynamicProxy/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m46139533E4DDF6094CBED2C52C9F9C656C08176E (U3CU3Ec_t69B92625E75B6733719EC0111D83CBBA38E18FB2 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.String Newtonsoft.Json.Linq.JObject/JObjectDynamicProxy/<>c::<GetDynamicMemberNames>b__2_0(Newtonsoft.Json.Linq.JProperty)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3CGetDynamicMemberNamesU3Eb__2_0_mDB798406DCFA8C7F2DA660555006342828E1B907 (U3CU3Ec_t69B92625E75B6733719EC0111D83CBBA38E18FB2 * __this, JProperty_tF9DA59F1EB857859581CDEE663A2A0040D5A9A53 * ___p0, const RuntimeMethod* method)
{
	{
		JProperty_tF9DA59F1EB857859581CDEE663A2A0040D5A9A53 * L_0 = ___p0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = JProperty_get_Name_mF3BBAB949CDF1B517CAF1BE2B2014771B43E3A1D_inline(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Newtonsoft.Json.Linq.JProperty/JPropertyList/<GetEnumerator>d__1::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__1__ctor_mBA56603E0B3D1EBF90505D4F028189623C6BED95 (U3CGetEnumeratorU3Ed__1_t7C50A3D32B6527C6EEA9E4D7FABB016161DB0A9D * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Newtonsoft.Json.Linq.JProperty/JPropertyList/<GetEnumerator>d__1::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__1_System_IDisposable_Dispose_m1EC7B3CD870B715B7D4C84F7E661F250C35842B7 (U3CGetEnumeratorU3Ed__1_t7C50A3D32B6527C6EEA9E4D7FABB016161DB0A9D * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Newtonsoft.Json.Linq.JProperty/JPropertyList/<GetEnumerator>d__1::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CGetEnumeratorU3Ed__1_MoveNext_m2C3CA5C22907008D818D409AAA9B749E6F9252AB (U3CGetEnumeratorU3Ed__1_t7C50A3D32B6527C6EEA9E4D7FABB016161DB0A9D * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	JPropertyList_tE978701AA0E5EA3DE317E8ABF5EC0C7CE5E713DB * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		JPropertyList_tE978701AA0E5EA3DE317E8ABF5EC0C7CE5E713DB * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_003b;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		JPropertyList_tE978701AA0E5EA3DE317E8ABF5EC0C7CE5E713DB * L_4 = V_1;
		NullCheck(L_4);
		JToken_t29F54EE35244E7B362E5D54E9517FCD2B0DBE359 * L_5 = L_4->get__token_0();
		if (!L_5)
		{
			goto IL_0042;
		}
	}
	{
		JPropertyList_tE978701AA0E5EA3DE317E8ABF5EC0C7CE5E713DB * L_6 = V_1;
		NullCheck(L_6);
		JToken_t29F54EE35244E7B362E5D54E9517FCD2B0DBE359 * L_7 = L_6->get__token_0();
		__this->set_U3CU3E2__current_1(L_7);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_003b:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_0042:
	{
		return (bool)0;
	}
}
// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JProperty/JPropertyList/<GetEnumerator>d__1::System.Collections.Generic.IEnumerator<Newtonsoft.Json.Linq.JToken>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JToken_t29F54EE35244E7B362E5D54E9517FCD2B0DBE359 * U3CGetEnumeratorU3Ed__1_System_Collections_Generic_IEnumeratorU3CNewtonsoft_Json_Linq_JTokenU3E_get_Current_m544089A92512E49D3AC91BF0C05520262E3B891C (U3CGetEnumeratorU3Ed__1_t7C50A3D32B6527C6EEA9E4D7FABB016161DB0A9D * __this, const RuntimeMethod* method)
{
	{
		JToken_t29F54EE35244E7B362E5D54E9517FCD2B0DBE359 * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Newtonsoft.Json.Linq.JProperty/JPropertyList/<GetEnumerator>d__1::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__1_System_Collections_IEnumerator_Reset_mE76377CF2E706BB0ED1D02AD90A5203BCD8A2549 (U3CGetEnumeratorU3Ed__1_t7C50A3D32B6527C6EEA9E4D7FABB016161DB0A9D * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CGetEnumeratorU3Ed__1_System_Collections_IEnumerator_Reset_mE76377CF2E706BB0ED1D02AD90A5203BCD8A2549_RuntimeMethod_var)));
	}
}
// System.Object Newtonsoft.Json.Linq.JProperty/JPropertyList/<GetEnumerator>d__1::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CGetEnumeratorU3Ed__1_System_Collections_IEnumerator_get_Current_mE58A8597C885C981A8E76CFE5376CAF741B4D349 (U3CGetEnumeratorU3Ed__1_t7C50A3D32B6527C6EEA9E4D7FABB016161DB0A9D * __this, const RuntimeMethod* method)
{
	{
		JToken_t29F54EE35244E7B362E5D54E9517FCD2B0DBE359 * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ImmutableCollectionTypeInfo_get_ContractTypeName_m31846FE220CAFF2E4EEC92D64EAD17FCE7C48FFA_inline (ImmutableCollectionTypeInfo_t89E5B5C21753029E7770B0AB5EE30D754F18F2B4 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CContractTypeNameU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ImmutableCollectionTypeInfo_set_ContractTypeName_m557C2C9886F1B2696D71516EE4FCAF1F6AC3C3CB_inline (ImmutableCollectionTypeInfo_t89E5B5C21753029E7770B0AB5EE30D754F18F2B4 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CContractTypeNameU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ImmutableCollectionTypeInfo_set_CreatedTypeName_mAD2BB9DFA67CEF4D93A2B9A33EB6AF5C87F79481_inline (ImmutableCollectionTypeInfo_t89E5B5C21753029E7770B0AB5EE30D754F18F2B4 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CCreatedTypeNameU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ImmutableCollectionTypeInfo_set_BuilderTypeName_m60DAEBA3741BEA2E92F652384B248D1DA78B59AF_inline (ImmutableCollectionTypeInfo_t89E5B5C21753029E7770B0AB5EE30D754F18F2B4 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CBuilderTypeNameU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* JProperty_get_Name_mF3BBAB949CDF1B517CAF1BE2B2014771B43E3A1D_inline (JProperty_tF9DA59F1EB857859581CDEE663A2A0040D5A9A53 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get__name_19();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* JsonProperty_get_PropertyName_mFA543F7272E86C75C96CC3CBCE670904C70408F7_inline (JsonProperty_tEC316772CD2F8406C84CDA3EEAD7430ED09055DB * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get__propertyName_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_gshared_inline (const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = ((EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Value_0();
		return (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_current_3();
		return (RuntimeObject *)L_0;
	}
}
