#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


template <typename T1>
struct VirtualActionInvoker1Invoker;
template <typename T1>
struct VirtualActionInvoker1Invoker<T1*>
{
	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1* p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		void* params[1] = { p1 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[0]);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
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
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
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
struct GenericInterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InvokerActionInvoker1;
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, params[0]);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, params[1]);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3;
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2*, T3*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3)
	{
		void* params[3] = { p1, p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, params[2]);
	}
};

struct IEnumerable_1_tF5487DDC9BFE72D77C0A279762BD5851F02B4F03;
struct IEnumerator_1_tE3FBD2D20AA88C9A0F855ADC37B0F385A3ADC2C1;
struct IEnumerator_1_t43D2E4BA9246755F293DFA74F001FB1A70A648FD;
struct IEnumerator_1_t75CB2681E18F7F2791528FA2CA60361FDB5DA08D;
struct IEnumerator_1_tB9C3929E93FDD987A623AE6EA71479718DEDDE7C;
struct IEnumerator_1_t2AE506746DD40D1B5F17C877E00D1A2DC8E3EC13;
struct IEnumerator_1_t23F3BCE459C80B3A2FE5529E937068FC097A4B5D;
struct IEnumerator_1_t0DEEA13A3B961D979FF0FE8B524A8AD5DAFE7486;
struct IEnumerator_1_t6A283D1227A207D6A69794EBCE076E4623A88A0F;
struct IEnumerator_1_tF12C84A88A586CC57052D1D4E7A2D121D275EE57;
struct IEnumerator_1_t958DB5E0C987BE30DA3189CC153C3D3B2501CB35;
struct IEnumerator_1_tD37D9D0E9991891BA45A5CC4E0F951E29FFCBEEF;
struct IEnumerator_1_t87E68DEF76CDD476B524D1706E589B499F53DB13;
struct IEnumerator_1_t3112FA4EF278069907190139EF2126C0BC8B3804;
struct IEnumerator_1_tAEC393601994352949243C746B03E619DE11226C;
struct IEnumerator_1_tFE967306A56DDD79C9B3995FEAC4BBA3F9EE25FA;
struct IEnumerator_1_tFA5A34978106CC9D2FE67B8AC4AAB90A301BBEEC;
struct IEnumerator_1_tFF72DC851BEBD20B537316531A651EA6D9113F07;
struct IEnumerator_1_tC3DA6B4DE5C905620A6561C1B4B4ABAE3567CFDF;
struct IEnumerator_1_t5DAD8BCEA32C5A575380EC8FE46A7E33C284AB9B;
struct IEnumerator_1_tB6FE08547500D274CF67F20EE02F82580D4BC22C;
struct IEnumerator_1_tC468DB891870F3A93D33674D3D64678048EAD8B9;
struct IEnumerator_1_t23FAA0070CF44C0B169AD8559E586AB92C63FD52;
struct IPropertyBag_1_t87438811C2F2F5EDBD73279779C029EED554B3CB;
struct IPropertyBag_1_tBBDD5A5B3F8E9F119138331A16572F6626C67749;
struct List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715;
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
struct PropertyBag_1_tDA117C10FEABA385803A90E976050FB2D270FAD2;
struct PropertyBag_1_tD11940BE9DAD74F61B141A397F3D5722E7FF2601;
struct PropertyBag_1_t74F4963AD6B656900B7CACFC37AC3CDDDF818409;
struct PropertyGetter_2_tD8230F45A3604AE20647869510A7F5AB8FD35963;
struct PropertySetter_2_t797AB5E970C439127F7C26A99ECABAEB82F8DDDA;
struct Property_2_tC4748332B44E20FE7C498E90E74A718F89F44471;
struct Property_2_tAB010676E84B6005B47BB524D152BA4859373D2D;
struct Property_2_tBEC632CE0FBA6F323B365C780F1F4C4C62A850ED;
struct Property_2_t4214D5666464CEE51F044573A59C738C2D562085;
struct Property_2_t4395571972396AEE0D2671461D1603BB8D296451;
struct Property_2_tE0D61821CEE6E9C49C6C1BCAD5F62D78A24F7A56;
struct Property_2_t4CA8B837C8B5E5C163CFFA715548D9980679EC46;
struct Property_2_tC1A1D28677DB791F77E60F16E0A734BE3616141F;
struct Property_2_tDFB93AAC56F8B372E59EEACF0AD971295487CCEA;
struct Property_2_t69BB6E67D83C59343BA1D7DCC6BDE82B297986D1;
struct Property_2_tD234CECBCBBAF0E5115582B104A904CB400D927F;
struct Property_2_tE9B27417C17E0D8EA0D6A88F71B3C9347F2332A3;
struct Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5;
struct Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41;
struct Queue_1_t66D4A65BAEEC35917BB5E09E63B6FDB1F110200A;
struct Queue_1_t488F4FFC87B785BACAAF18A6B2E9307E5451DF68;
struct Queue_1_t5A4C4B12CBF6AE19441E8689D9CD0CB72497458F;
struct Queue_1_tF4E2FE02CE3AE00F88E131F0BA8C98CE987815F9;
struct Queue_1_tBB2A0C4F251B256F7DE42D6E2BA4238B4DF91F30;
struct Queue_1_t22121E4AEC415CDAE61E996C9A25D8A0321D85FF;
struct Queue_1_tF483B3CFE7EF31C119FC391C89669D14457B4BC6;
struct Queue_1_t6F177B1F38A281F7BC9922E112B5B006C3333CE9;
struct Queue_1_t6513574E5F9571603E493A60C6E5B4A0D74A8F46;
struct Queue_1_t4AA446582A62FB2A18563671B4E47108952DD4FB;
struct Queue_1_tB7344F263E081890307F699D5579171FD2254E3C;
struct Queue_1_t9FD90F7D0CA85A6D0A14742DF2E9ED3816057293;
struct Queue_1_tE50D0AAB2E9579CB69DE8C77FE39236C3E025C1E;
struct Queue_1_t9FA265C8E0E8BDEBE8DBED5C7F4E420B7C3ED03D;
struct Queue_1_tBF1D02B07565C1EAA28556CFDAA2E3555501F50D;
struct Queue_1_tB5C7771CD791E4C5A79218CD2C607517B63C00F6;
struct Queue_1_tABEA5C7CAAB3B865D2F50F23AFA9C9D95DC83722;
struct Queue_1_t9F5EC60BA20905CF85F0EC6D5CF8CDBA2DDEBF03;
struct Queue_1_t729B9C657F6A9ECE0085BB5615128913418843BC;
struct AttributeU5BU5D_t0F73488E6F1249C889608E8DCC0BCC28A874E8F1;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
struct fsVersionedTypeU5BU5D_tF4A5B18C49769943892747B1A1040CAE86746E1F;
struct EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8;
struct CollisionModuleU5BU5D_t9520E15E871E6E2B11790028A8CE1A6E1C0F2EC2;
struct ColorBySpeedModuleU5BU5D_t0E5EE314CD20E42735C32A7A06AFC14BF9F17BD1;
struct ColorOverLifetimeModuleU5BU5D_t56D392498D03FF1B36CADEB8B1C61DF772B575CA;
struct EmissionModuleU5BU5D_t110238586598A352710078862A6C32192CAFC5DE;
struct ExternalForcesModuleU5BU5D_t11431781ADD799A06D76C11D763A481B2423CD16;
struct ForceOverLifetimeModuleU5BU5D_t8B8EC5C9653BD37EA210B29740ACE97F39B6E1EC;
struct InheritVelocityModuleU5BU5D_tBBEA24AC089387EB19C315018C873CD94D15F41A;
struct LightsModuleU5BU5D_t1B43D0E6425D6ECE42FB5D4E9A0E7522279ACA56;
struct LimitVelocityOverLifetimeModuleU5BU5D_tAF13DD144C6E43CE6DE2FE7A275FB904DD9068F1;
struct MainModuleU5BU5D_tEEFB5F0E13630CB75255D344E67FEEDD38C47F0F;
struct NoiseModuleU5BU5D_t7C4F86128102E5F9E007D757ED34CFE5D887C565;
struct RotationBySpeedModuleU5BU5D_tFC82BD47383BAC5155E20F4CACA0B1D3377CA989;
struct RotationOverLifetimeModuleU5BU5D_t50CBEBBC6B542E064BD30EB9EB49BCD9B5F419C8;
struct ShapeModuleU5BU5D_t8997568E698C9B1509FCDFE401084FF80AB60243;
struct SizeBySpeedModuleU5BU5D_tEF4645160713AF1309F815C4B95C79975BA2D221;
struct SizeOverLifetimeModuleU5BU5D_t31052F8FFC4F64017ABA0B123070F572D37A29A3;
struct SubEmittersModuleU5BU5D_t0F0D2688875FC82644111B1ECCC27FA6B775A483;
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F;
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA;
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
struct Delegate_t;
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
struct EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
struct IPanel_tAD0F3807B6DE2ECA557380E7DB5F3A179BE5A7A5;
struct ITypeVisitor_tCB238D641EEE5D928DA9FEF70EDB7C2C13ED1599;
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
struct MethodInfo_t;
struct ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct String_t;
struct Type_t;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_tF5487DDC9BFE72D77C0A279762BD5851F02B4F03_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_tE3FBD2D20AA88C9A0F855ADC37B0F385A3ADC2C1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral1102619AA6FB2A4AADBDAA47DDC096AE04C772C0;
IL2CPP_EXTERN_C String_t* _stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1;
IL2CPP_EXTERN_C String_t* _stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE;
IL2CPP_EXTERN_C String_t* _stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4;
IL2CPP_EXTERN_C String_t* _stringLiteral6195D7DA68D16D4985AD1A1B4FD2841A43CDDE70;
IL2CPP_EXTERN_C String_t* _stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8;
IL2CPP_EXTERN_C String_t* _stringLiteral967D403A541A1026A83D548E5AD5CA800AD4EFB5;
IL2CPP_EXTERN_C String_t* _stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED;
IL2CPP_EXTERN_C String_t* _stringLiteralBD0381A992FDF4F7DA60E5D83689FE7FF6309CB8;
IL2CPP_EXTERN_C String_t* _stringLiteralBFD0F59F9F38A92660652CA5BE172EFCA8501E47;
IL2CPP_EXTERN_C String_t* _stringLiteralC23725EE1ACD9996F8909AD0C76D39D2B4CB3ACA;
IL2CPP_EXTERN_C String_t* _stringLiteralC37D78082ACFC8DEE7B32D9351C6E433A074FEC7;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mB0CF48862666913FBBF40D44568593A6D82F7EA2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m8735FFC7B95F1AA11A04DC5F5E6AA77BAAD94D66_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* CreatePropertyAttribute_t481619BD84F5E29767718DE127DD1E781A3B6F92_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8_marshaled_com;
struct fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8_marshaled_pinvoke;

struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
struct fsVersionedTypeU5BU5D_tF4A5B18C49769943892747B1A1040CAE86746E1F;
struct EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8;
struct CollisionModuleU5BU5D_t9520E15E871E6E2B11790028A8CE1A6E1C0F2EC2;
struct ColorBySpeedModuleU5BU5D_t0E5EE314CD20E42735C32A7A06AFC14BF9F17BD1;
struct ColorOverLifetimeModuleU5BU5D_t56D392498D03FF1B36CADEB8B1C61DF772B575CA;
struct EmissionModuleU5BU5D_t110238586598A352710078862A6C32192CAFC5DE;
struct ExternalForcesModuleU5BU5D_t11431781ADD799A06D76C11D763A481B2423CD16;
struct ForceOverLifetimeModuleU5BU5D_t8B8EC5C9653BD37EA210B29740ACE97F39B6E1EC;
struct InheritVelocityModuleU5BU5D_tBBEA24AC089387EB19C315018C873CD94D15F41A;
struct LightsModuleU5BU5D_t1B43D0E6425D6ECE42FB5D4E9A0E7522279ACA56;
struct LimitVelocityOverLifetimeModuleU5BU5D_tAF13DD144C6E43CE6DE2FE7A275FB904DD9068F1;
struct MainModuleU5BU5D_tEEFB5F0E13630CB75255D344E67FEEDD38C47F0F;
struct NoiseModuleU5BU5D_t7C4F86128102E5F9E007D757ED34CFE5D887C565;
struct RotationBySpeedModuleU5BU5D_tFC82BD47383BAC5155E20F4CACA0B1D3377CA989;
struct RotationOverLifetimeModuleU5BU5D_t50CBEBBC6B542E064BD30EB9EB49BCD9B5F419C8;
struct ShapeModuleU5BU5D_t8997568E698C9B1509FCDFE401084FF80AB60243;
struct SizeBySpeedModuleU5BU5D_tEF4645160713AF1309F815C4B95C79975BA2D221;
struct SizeOverLifetimeModuleU5BU5D_t31052F8FFC4F64017ABA0B123070F572D37A29A3;
struct SubEmittersModuleU5BU5D_t0F0D2688875FC82644111B1ECCC27FA6B775A483;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE  : public RuntimeObject
{
};
struct EmptyArray_1_tD26FE3075DC228BE87FC137E462D9B9D87345E09  : public RuntimeObject
{
};
struct EmptyArray_1_t77401F488985814E4B89684C1CCE07D59127CD6C  : public RuntimeObject
{
};
struct EmptyArray_1_t148D3B7315D7A6007D765544A0374ECF18C49A4F  : public RuntimeObject
{
};
struct EmptyArray_1_tA2A0A5BC0848542E85C3C7090B698C7582EC293E  : public RuntimeObject
{
};
struct EmptyArray_1_t5DE9A902E68EAF6C3BEA0449EBDE9796931D38CA  : public RuntimeObject
{
};
struct EmptyArray_1_tAF4D7BF84EDEBCC665A1A7DDA7D9525F0A338241  : public RuntimeObject
{
};
struct EmptyArray_1_t335FEC980C152B1BB5C2B29BEBE9BB902BD96851  : public RuntimeObject
{
};
struct EmptyArray_1_t0301B61215E2E46DFEA03D75A6060D8CAC3D479A  : public RuntimeObject
{
};
struct EmptyArray_1_tE05CFBC9C768DA6FECF8F30EAB67C277CCB8EC55  : public RuntimeObject
{
};
struct EmptyArray_1_tEED641E019AD7833746EE21F5D5EF0BE46953FDF  : public RuntimeObject
{
};
struct EmptyArray_1_tFF691A731ABD156600069C6A1AB13897214410E0  : public RuntimeObject
{
};
struct EmptyArray_1_tCD3D2FDC32FABF46F37D9F0D5EE8033B21EE016C  : public RuntimeObject
{
};
struct EmptyArray_1_tD0E25BCF4832958D9C1F596570EF2919414A7103  : public RuntimeObject
{
};
struct EmptyArray_1_tDA1E10579FDDCE25837B4F203EABDCA5251082FB  : public RuntimeObject
{
};
struct EmptyArray_1_tFF1C726B7AD2D4CB615066440DB2BD360077F74E  : public RuntimeObject
{
};
struct EmptyArray_1_t151CEED89EBC00271F4BF4ACC9D4E781D780866E  : public RuntimeObject
{
};
struct EmptyArray_1_tBA9A911B01CFC769E520FBF101B83CC77C18ECCF  : public RuntimeObject
{
};
struct EmptyArray_1_tDEA777902FAFA73B2D66B35576B82407F616798F  : public RuntimeObject
{
};
struct EmptyArray_1_t45ACA127E94E3425602D4677D3A2A8DF9A62AC4C  : public RuntimeObject
{
};
struct List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715  : public RuntimeObject
{
	AttributeU5BU5D_t0F73488E6F1249C889608E8DCC0BCC28A874E8F1* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct Property_2_tC4748332B44E20FE7C498E90E74A718F89F44471  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_tAB010676E84B6005B47BB524D152BA4859373D2D  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_tBEC632CE0FBA6F323B365C780F1F4C4C62A850ED  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_t4214D5666464CEE51F044573A59C738C2D562085  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_t4395571972396AEE0D2671461D1603BB8D296451  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_tE0D61821CEE6E9C49C6C1BCAD5F62D78A24F7A56  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_t4CA8B837C8B5E5C163CFFA715548D9980679EC46  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_tC1A1D28677DB791F77E60F16E0A734BE3616141F  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_tDFB93AAC56F8B372E59EEACF0AD971295487CCEA  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_t69BB6E67D83C59343BA1D7DCC6BDE82B297986D1  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_tD234CECBCBBAF0E5115582B104A904CB400D927F  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_tE9B27417C17E0D8EA0D6A88F71B3C9347F2332A3  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct QueueDebugView_1_t8BB38E64819624DE272D7E28A299B19F779A6D9E  : public RuntimeObject
{
};
struct Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5  : public RuntimeObject
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____array;
	int32_t ____head;
	int32_t ____tail;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41  : public RuntimeObject
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ____array;
	int32_t ____head;
	int32_t ____tail;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct Queue_1_t66D4A65BAEEC35917BB5E09E63B6FDB1F110200A  : public RuntimeObject
{
	fsVersionedTypeU5BU5D_tF4A5B18C49769943892747B1A1040CAE86746E1F* ____array;
	int32_t ____head;
	int32_t ____tail;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct Queue_1_t488F4FFC87B785BACAAF18A6B2E9307E5451DF68  : public RuntimeObject
{
	EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* ____array;
	int32_t ____head;
	int32_t ____tail;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct Queue_1_t5A4C4B12CBF6AE19441E8689D9CD0CB72497458F  : public RuntimeObject
{
	CollisionModuleU5BU5D_t9520E15E871E6E2B11790028A8CE1A6E1C0F2EC2* ____array;
	int32_t ____head;
	int32_t ____tail;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct Queue_1_tF4E2FE02CE3AE00F88E131F0BA8C98CE987815F9  : public RuntimeObject
{
	ColorBySpeedModuleU5BU5D_t0E5EE314CD20E42735C32A7A06AFC14BF9F17BD1* ____array;
	int32_t ____head;
	int32_t ____tail;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct Queue_1_tBB2A0C4F251B256F7DE42D6E2BA4238B4DF91F30  : public RuntimeObject
{
	ColorOverLifetimeModuleU5BU5D_t56D392498D03FF1B36CADEB8B1C61DF772B575CA* ____array;
	int32_t ____head;
	int32_t ____tail;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct Queue_1_t22121E4AEC415CDAE61E996C9A25D8A0321D85FF  : public RuntimeObject
{
	EmissionModuleU5BU5D_t110238586598A352710078862A6C32192CAFC5DE* ____array;
	int32_t ____head;
	int32_t ____tail;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct Queue_1_tF483B3CFE7EF31C119FC391C89669D14457B4BC6  : public RuntimeObject
{
	ExternalForcesModuleU5BU5D_t11431781ADD799A06D76C11D763A481B2423CD16* ____array;
	int32_t ____head;
	int32_t ____tail;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct Queue_1_t6F177B1F38A281F7BC9922E112B5B006C3333CE9  : public RuntimeObject
{
	ForceOverLifetimeModuleU5BU5D_t8B8EC5C9653BD37EA210B29740ACE97F39B6E1EC* ____array;
	int32_t ____head;
	int32_t ____tail;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct Queue_1_t6513574E5F9571603E493A60C6E5B4A0D74A8F46  : public RuntimeObject
{
	InheritVelocityModuleU5BU5D_tBBEA24AC089387EB19C315018C873CD94D15F41A* ____array;
	int32_t ____head;
	int32_t ____tail;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct Queue_1_t4AA446582A62FB2A18563671B4E47108952DD4FB  : public RuntimeObject
{
	LightsModuleU5BU5D_t1B43D0E6425D6ECE42FB5D4E9A0E7522279ACA56* ____array;
	int32_t ____head;
	int32_t ____tail;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct Queue_1_tB7344F263E081890307F699D5579171FD2254E3C  : public RuntimeObject
{
	LimitVelocityOverLifetimeModuleU5BU5D_tAF13DD144C6E43CE6DE2FE7A275FB904DD9068F1* ____array;
	int32_t ____head;
	int32_t ____tail;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct Queue_1_t9FD90F7D0CA85A6D0A14742DF2E9ED3816057293  : public RuntimeObject
{
	MainModuleU5BU5D_tEEFB5F0E13630CB75255D344E67FEEDD38C47F0F* ____array;
	int32_t ____head;
	int32_t ____tail;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct Queue_1_tE50D0AAB2E9579CB69DE8C77FE39236C3E025C1E  : public RuntimeObject
{
	NoiseModuleU5BU5D_t7C4F86128102E5F9E007D757ED34CFE5D887C565* ____array;
	int32_t ____head;
	int32_t ____tail;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct Queue_1_t9FA265C8E0E8BDEBE8DBED5C7F4E420B7C3ED03D  : public RuntimeObject
{
	RotationBySpeedModuleU5BU5D_tFC82BD47383BAC5155E20F4CACA0B1D3377CA989* ____array;
	int32_t ____head;
	int32_t ____tail;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct Queue_1_tBF1D02B07565C1EAA28556CFDAA2E3555501F50D  : public RuntimeObject
{
	RotationOverLifetimeModuleU5BU5D_t50CBEBBC6B542E064BD30EB9EB49BCD9B5F419C8* ____array;
	int32_t ____head;
	int32_t ____tail;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct Queue_1_tB5C7771CD791E4C5A79218CD2C607517B63C00F6  : public RuntimeObject
{
	ShapeModuleU5BU5D_t8997568E698C9B1509FCDFE401084FF80AB60243* ____array;
	int32_t ____head;
	int32_t ____tail;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct Queue_1_tABEA5C7CAAB3B865D2F50F23AFA9C9D95DC83722  : public RuntimeObject
{
	SizeBySpeedModuleU5BU5D_tEF4645160713AF1309F815C4B95C79975BA2D221* ____array;
	int32_t ____head;
	int32_t ____tail;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct Queue_1_t9F5EC60BA20905CF85F0EC6D5CF8CDBA2DDEBF03  : public RuntimeObject
{
	SizeOverLifetimeModuleU5BU5D_t31052F8FFC4F64017ABA0B123070F572D37A29A3* ____array;
	int32_t ____head;
	int32_t ____tail;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct Queue_1_t729B9C657F6A9ECE0085BB5615128913418843BC  : public RuntimeObject
{
	SubEmittersModuleU5BU5D_t0F0D2688875FC82644111B1ECCC27FA6B775A483* ____array;
	int32_t ____head;
	int32_t ____tail;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA  : public RuntimeObject
{
};
struct MemberInfo_t  : public RuntimeObject
{
};
struct String_t  : public RuntimeObject
{
	int32_t ____stringLength;
	Il2CppChar ____firstChar;
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};
struct Enumerator_t30E3290EE12437374037B3CF0EE4D614F96D030A 
{
	Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* ____q;
	int32_t ____version;
	int32_t ____index;
	RuntimeObject* ____currentElement;
};
typedef Il2CppFullySharedGenericStruct Enumerator_tFA6E7D5BA5EFB0C82F2AA1342FFD5C2B753D673C;
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 
{
	int32_t ___m_X;
	int32_t ___m_Y;
	int32_t ___m_Z;
};
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	float ___x;
	float ___y;
	float ___z;
	float ___w;
};
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};
struct fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 
{
	fsVersionedTypeU5BU5D_tF4A5B18C49769943892747B1A1040CAE86746E1F* ___Ancestors;
	String_t* ___VersionString;
	Type_t* ___ModelType;
};
struct fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8_marshaled_pinvoke
{
	fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8_marshaled_pinvoke* ___Ancestors;
	char* ___VersionString;
	Type_t* ___ModelType;
};
struct fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8_marshaled_com
{
	fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8_marshaled_com* ___Ancestors;
	Il2CppChar* ___VersionString;
	Type_t* ___ModelType;
};
struct EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2 
{
	EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* ___m_Event;
	RuntimeObject* ___m_Panel;
};
struct EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2_marshaled_pinvoke
{
	EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* ___m_Event;
	RuntimeObject* ___m_Panel;
};
struct EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2_marshaled_com
{
	EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* ___m_Event;
	RuntimeObject* ___m_Panel;
};
struct CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083 
{
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem;
};
struct CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083_marshaled_pinvoke
{
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem;
};
struct CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083_marshaled_com
{
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem;
};
struct ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B 
{
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem;
};
struct ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_marshaled_pinvoke
{
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem;
};
struct ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_marshaled_com
{
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem;
};
struct ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9 
{
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem;
};
struct ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9_marshaled_pinvoke
{
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem;
};
struct ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9_marshaled_com
{
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem;
};
struct EmissionModule_t0F469FA4A08003F6D9C610D2F716A9DFDB9A3678 
{
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem;
};
struct EmissionModule_t0F469FA4A08003F6D9C610D2F716A9DFDB9A3678_marshaled_pinvoke
{
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem;
};
struct EmissionModule_t0F469FA4A08003F6D9C610D2F716A9DFDB9A3678_marshaled_com
{
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem;
};
struct ExternalForcesModule_t4494E21ECF96F072432EF4DDC5F84BAF84912FC7 
{
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem;
};
struct ExternalForcesModule_t4494E21ECF96F072432EF4DDC5F84BAF84912FC7_marshaled_pinvoke
{
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem;
};
struct ExternalForcesModule_t4494E21ECF96F072432EF4DDC5F84BAF84912FC7_marshaled_com
{
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem;
};
struct ForceOverLifetimeModule_t4859776EAF945AEA86044CAB63CA7A8AC8C14976 
{
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem;
};
struct ForceOverLifetimeModule_t4859776EAF945AEA86044CAB63CA7A8AC8C14976_marshaled_pinvoke
{
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem;
};
struct ForceOverLifetimeModule_t4859776EAF945AEA86044CAB63CA7A8AC8C14976_marshaled_com
{
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem;
};
struct InheritVelocityModule_tB71B2EDCAF328647DDB6BC79541D7C5E76C19562 
{
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem;
};
struct InheritVelocityModule_tB71B2EDCAF328647DDB6BC79541D7C5E76C19562_marshaled_pinvoke
{
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem;
};
struct InheritVelocityModule_tB71B2EDCAF328647DDB6BC79541D7C5E76C19562_marshaled_com
{
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem;
};
struct LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E 
{
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem;
};
struct LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_marshaled_pinvoke
{
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem;
};
struct LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_marshaled_com
{
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem;
};
struct LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 
{
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem;
};
struct LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_marshaled_pinvoke
{
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem;
};
struct LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_marshaled_com
{
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem;
};
struct MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9 
{
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem;
};
struct MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9_marshaled_pinvoke
{
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem;
};
struct MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9_marshaled_com
{
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem;
};
struct NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0 
{
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem;
};
struct NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0_marshaled_pinvoke
{
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem;
};
struct NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0_marshaled_com
{
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem;
};
struct RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 
{
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem;
};
struct RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_marshaled_pinvoke
{
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem;
};
struct RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_marshaled_com
{
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem;
};
struct RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 
{
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem;
};
struct RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_marshaled_pinvoke
{
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem;
};
struct RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_marshaled_com
{
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem;
};
struct ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2 
{
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem;
};
struct ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2_marshaled_pinvoke
{
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem;
};
struct ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2_marshaled_com
{
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem;
};
struct SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4 
{
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem;
};
struct SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4_marshaled_pinvoke
{
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem;
};
struct SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4_marshaled_com
{
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem;
};
struct SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C 
{
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem;
};
struct SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C_marshaled_pinvoke
{
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem;
};
struct SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C_marshaled_com
{
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem;
};
struct SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B 
{
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem;
};
struct SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B_marshaled_pinvoke
{
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem;
};
struct SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B_marshaled_com
{
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem;
};
struct Enumerator_t46A96D1902EB6E630D5DAADD490183C6117140EB 
{
	Queue_1_t66D4A65BAEEC35917BB5E09E63B6FDB1F110200A* ____q;
	int32_t ____version;
	int32_t ____index;
	fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 ____currentElement;
};
struct Enumerator_t3B7550C1130BBD2F1A4BAE88FB62305FC7A95602 
{
	Queue_1_t488F4FFC87B785BACAAF18A6B2E9307E5451DF68* ____q;
	int32_t ____version;
	int32_t ____index;
	EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2 ____currentElement;
};
struct Enumerator_t55121C7B4E26C3F446A3233DF51C8C4550A8DC63 
{
	Queue_1_t5A4C4B12CBF6AE19441E8689D9CD0CB72497458F* ____q;
	int32_t ____version;
	int32_t ____index;
	CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083 ____currentElement;
};
struct Enumerator_t9228D1C112BAACD489B647500756A260AF7812BF 
{
	Queue_1_tF4E2FE02CE3AE00F88E131F0BA8C98CE987815F9* ____q;
	int32_t ____version;
	int32_t ____index;
	ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B ____currentElement;
};
struct Enumerator_t3F1C356002E2962DAFAA51F162DB9A5926148EE7 
{
	Queue_1_tBB2A0C4F251B256F7DE42D6E2BA4238B4DF91F30* ____q;
	int32_t ____version;
	int32_t ____index;
	ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9 ____currentElement;
};
struct Enumerator_t55765909EAC7B86052C39583F1709C769BB52A72 
{
	Queue_1_t22121E4AEC415CDAE61E996C9A25D8A0321D85FF* ____q;
	int32_t ____version;
	int32_t ____index;
	EmissionModule_t0F469FA4A08003F6D9C610D2F716A9DFDB9A3678 ____currentElement;
};
struct Enumerator_t3A30FF055AE1E057728E18A493D72AD503BC565F 
{
	Queue_1_tF483B3CFE7EF31C119FC391C89669D14457B4BC6* ____q;
	int32_t ____version;
	int32_t ____index;
	ExternalForcesModule_t4494E21ECF96F072432EF4DDC5F84BAF84912FC7 ____currentElement;
};
struct Enumerator_t6012AEE5962CB84F408A8DA5DF440A5104C9BBA0 
{
	Queue_1_t6F177B1F38A281F7BC9922E112B5B006C3333CE9* ____q;
	int32_t ____version;
	int32_t ____index;
	ForceOverLifetimeModule_t4859776EAF945AEA86044CAB63CA7A8AC8C14976 ____currentElement;
};
struct Enumerator_tDD8F18C63CBC3504D6CD806798A047A910BFF393 
{
	Queue_1_t6513574E5F9571603E493A60C6E5B4A0D74A8F46* ____q;
	int32_t ____version;
	int32_t ____index;
	InheritVelocityModule_tB71B2EDCAF328647DDB6BC79541D7C5E76C19562 ____currentElement;
};
struct Enumerator_tA89F09BA1DAB7E615FEE410A1D4A5C27AC44E560 
{
	Queue_1_t4AA446582A62FB2A18563671B4E47108952DD4FB* ____q;
	int32_t ____version;
	int32_t ____index;
	LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E ____currentElement;
};
struct Enumerator_tBA1BBC08497A0A44E5697AB9B462427C96D8E161 
{
	Queue_1_tB7344F263E081890307F699D5579171FD2254E3C* ____q;
	int32_t ____version;
	int32_t ____index;
	LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 ____currentElement;
};
struct Enumerator_t25DEAF258A8E28CE33A32030114FBDCD8F6B1953 
{
	Queue_1_t9FD90F7D0CA85A6D0A14742DF2E9ED3816057293* ____q;
	int32_t ____version;
	int32_t ____index;
	MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9 ____currentElement;
};
struct Enumerator_t7BB8049BB5F5F3EFF0638EC4F4A3E082C4591BAE 
{
	Queue_1_tE50D0AAB2E9579CB69DE8C77FE39236C3E025C1E* ____q;
	int32_t ____version;
	int32_t ____index;
	NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0 ____currentElement;
};
struct Enumerator_t3BC8EAF606B91138C671F4AEB3B2CAAF456197A7 
{
	Queue_1_t9FA265C8E0E8BDEBE8DBED5C7F4E420B7C3ED03D* ____q;
	int32_t ____version;
	int32_t ____index;
	RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 ____currentElement;
};
struct Enumerator_tE86A0C1F3FA0726AEC68EDEA1B95782056A41922 
{
	Queue_1_tBF1D02B07565C1EAA28556CFDAA2E3555501F50D* ____q;
	int32_t ____version;
	int32_t ____index;
	RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 ____currentElement;
};
struct Enumerator_t28136747FD61ACF924C71B74CE5CB33F5FDE221C 
{
	Queue_1_tB5C7771CD791E4C5A79218CD2C607517B63C00F6* ____q;
	int32_t ____version;
	int32_t ____index;
	ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2 ____currentElement;
};
struct Enumerator_tBC8B7CC2DAC33A9808E0B9D802C51843715F8B57 
{
	Queue_1_tABEA5C7CAAB3B865D2F50F23AFA9C9D95DC83722* ____q;
	int32_t ____version;
	int32_t ____index;
	SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4 ____currentElement;
};
struct Enumerator_tBDEE937DC978007344F2C66A05E9710AB09A2920 
{
	Queue_1_t9F5EC60BA20905CF85F0EC6D5CF8CDBA2DDEBF03* ____q;
	int32_t ____version;
	int32_t ____index;
	SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C ____currentElement;
};
struct Enumerator_tC101FE0399B2E5BB3E7512B286064A26F42F6696 
{
	Queue_1_t729B9C657F6A9ECE0085BB5615128913418843BC* ____q;
	int32_t ____version;
	int32_t ____index;
	SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B ____currentElement;
};
struct Delegate_t  : public RuntimeObject
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	RuntimeObject* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	bool ___method_is_virtual;
};
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	Il2CppIUnknown* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	int32_t ___method_is_virtual;
};
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	Il2CppIUnknown* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	int32_t ___method_is_virtual;
};
struct Exception_t  : public RuntimeObject
{
	String_t* ____className;
	String_t* ____message;
	RuntimeObject* ____data;
	Exception_t* ____innerException;
	String_t* ____helpURL;
	RuntimeObject* ____stackTrace;
	String_t* ____stackTraceString;
	String_t* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	RuntimeObject* ____dynamicMethods;
	int32_t ____HResult;
	String_t* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_pinvoke
{
	char* ____className;
	char* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_pinvoke* ____innerException;
	char* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	char* ____stackTraceString;
	char* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	char* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className;
	Il2CppChar* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_com* ____innerException;
	Il2CppChar* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	Il2CppChar* ____stackTraceString;
	Il2CppChar* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	Il2CppChar* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct InstantiationKind_t9B77929786BCA193B4A916F2F25793598CF0DF7D 
{
	int32_t ___value__;
};
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	intptr_t ___value;
};
struct PropertyBag_1_tDA117C10FEABA385803A90E976050FB2D270FAD2  : public RuntimeObject
{
	int32_t ___U3CInstantiationKindU3Ek__BackingField;
};
struct PropertyBag_1_tD11940BE9DAD74F61B141A397F3D5722E7FF2601  : public RuntimeObject
{
	int32_t ___U3CInstantiationKindU3Ek__BackingField;
};
struct PropertyBag_1_t74F4963AD6B656900B7CACFC37AC3CDDDF818409  : public RuntimeObject
{
	int32_t ___U3CInstantiationKindU3Ek__BackingField;
};
struct MulticastDelegate_t  : public Delegate_t
{
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates;
};
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates;
};
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates;
};
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};
struct Type_t  : public MemberInfo_t
{
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl;
};
struct PropertyGetter_2_tD8230F45A3604AE20647869510A7F5AB8FD35963  : public MulticastDelegate_t
{
};
struct PropertySetter_2_t797AB5E970C439127F7C26A99ECABAEB82F8DDDA  : public MulticastDelegate_t
{
};
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	String_t* ____paramName;
};
struct ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
	RuntimeObject* ____actualValue;
};
struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___Value;
};
struct EmptyArray_1_tD26FE3075DC228BE87FC137E462D9B9D87345E09_StaticFields
{
	fsVersionedTypeU5BU5D_tF4A5B18C49769943892747B1A1040CAE86746E1F* ___Value;
};
struct EmptyArray_1_t77401F488985814E4B89684C1CCE07D59127CD6C_StaticFields
{
	EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* ___Value;
};
struct EmptyArray_1_t148D3B7315D7A6007D765544A0374ECF18C49A4F_StaticFields
{
	CollisionModuleU5BU5D_t9520E15E871E6E2B11790028A8CE1A6E1C0F2EC2* ___Value;
};
struct EmptyArray_1_tA2A0A5BC0848542E85C3C7090B698C7582EC293E_StaticFields
{
	ColorBySpeedModuleU5BU5D_t0E5EE314CD20E42735C32A7A06AFC14BF9F17BD1* ___Value;
};
struct EmptyArray_1_t5DE9A902E68EAF6C3BEA0449EBDE9796931D38CA_StaticFields
{
	ColorOverLifetimeModuleU5BU5D_t56D392498D03FF1B36CADEB8B1C61DF772B575CA* ___Value;
};
struct EmptyArray_1_tAF4D7BF84EDEBCC665A1A7DDA7D9525F0A338241_StaticFields
{
	EmissionModuleU5BU5D_t110238586598A352710078862A6C32192CAFC5DE* ___Value;
};
struct EmptyArray_1_t335FEC980C152B1BB5C2B29BEBE9BB902BD96851_StaticFields
{
	ExternalForcesModuleU5BU5D_t11431781ADD799A06D76C11D763A481B2423CD16* ___Value;
};
struct EmptyArray_1_t0301B61215E2E46DFEA03D75A6060D8CAC3D479A_StaticFields
{
	ForceOverLifetimeModuleU5BU5D_t8B8EC5C9653BD37EA210B29740ACE97F39B6E1EC* ___Value;
};
struct EmptyArray_1_tE05CFBC9C768DA6FECF8F30EAB67C277CCB8EC55_StaticFields
{
	InheritVelocityModuleU5BU5D_tBBEA24AC089387EB19C315018C873CD94D15F41A* ___Value;
};
struct EmptyArray_1_tEED641E019AD7833746EE21F5D5EF0BE46953FDF_StaticFields
{
	LightsModuleU5BU5D_t1B43D0E6425D6ECE42FB5D4E9A0E7522279ACA56* ___Value;
};
struct EmptyArray_1_tFF691A731ABD156600069C6A1AB13897214410E0_StaticFields
{
	LimitVelocityOverLifetimeModuleU5BU5D_tAF13DD144C6E43CE6DE2FE7A275FB904DD9068F1* ___Value;
};
struct EmptyArray_1_tCD3D2FDC32FABF46F37D9F0D5EE8033B21EE016C_StaticFields
{
	MainModuleU5BU5D_tEEFB5F0E13630CB75255D344E67FEEDD38C47F0F* ___Value;
};
struct EmptyArray_1_tD0E25BCF4832958D9C1F596570EF2919414A7103_StaticFields
{
	NoiseModuleU5BU5D_t7C4F86128102E5F9E007D757ED34CFE5D887C565* ___Value;
};
struct EmptyArray_1_tDA1E10579FDDCE25837B4F203EABDCA5251082FB_StaticFields
{
	RotationBySpeedModuleU5BU5D_tFC82BD47383BAC5155E20F4CACA0B1D3377CA989* ___Value;
};
struct EmptyArray_1_tFF1C726B7AD2D4CB615066440DB2BD360077F74E_StaticFields
{
	RotationOverLifetimeModuleU5BU5D_t50CBEBBC6B542E064BD30EB9EB49BCD9B5F419C8* ___Value;
};
struct EmptyArray_1_t151CEED89EBC00271F4BF4ACC9D4E781D780866E_StaticFields
{
	ShapeModuleU5BU5D_t8997568E698C9B1509FCDFE401084FF80AB60243* ___Value;
};
struct EmptyArray_1_tBA9A911B01CFC769E520FBF101B83CC77C18ECCF_StaticFields
{
	SizeBySpeedModuleU5BU5D_tEF4645160713AF1309F815C4B95C79975BA2D221* ___Value;
};
struct EmptyArray_1_tDEA777902FAFA73B2D66B35576B82407F616798F_StaticFields
{
	SizeOverLifetimeModuleU5BU5D_t31052F8FFC4F64017ABA0B123070F572D37A29A3* ___Value;
};
struct EmptyArray_1_t45ACA127E94E3425602D4677D3A2A8DF9A62AC4C_StaticFields
{
	SubEmittersModuleU5BU5D_t0F0D2688875FC82644111B1ECCC27FA6B775A483* ___Value;
};
struct List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715_StaticFields
{
	AttributeU5BU5D_t0F73488E6F1249C889608E8DCC0BCC28A874E8F1* ___s_emptyArray;
};
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray;
};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
struct IntPtr_t_StaticFields
{
	intptr_t ___Zero;
};
struct Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_StaticFields
{
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Zero;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_One;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Up;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Down;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Left;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Right;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Forward;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Back;
};
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector;
};
struct Type_t_StaticFields
{
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder;
	Il2CppChar ___Delimiter;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes;
	RuntimeObject* ___Missing;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
};
struct fsVersionedTypeU5BU5D_tF4A5B18C49769943892747B1A1040CAE86746E1F  : public RuntimeArray
{
	ALIGN_FIELD (8) fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 m_Items[1];

	inline fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Ancestors), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___VersionString), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___ModelType), (void*)NULL);
		#endif
	}
	inline fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Ancestors), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___VersionString), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___ModelType), (void*)NULL);
		#endif
	}
};
struct EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8  : public RuntimeArray
{
	ALIGN_FIELD (8) EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2 m_Items[1];

	inline EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_Event), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_Panel), (void*)NULL);
		#endif
	}
	inline EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_Event), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_Panel), (void*)NULL);
		#endif
	}
};
struct CollisionModuleU5BU5D_t9520E15E871E6E2B11790028A8CE1A6E1C0F2EC2  : public RuntimeArray
{
	ALIGN_FIELD (8) CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083 m_Items[1];

	inline CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_ParticleSystem), (void*)NULL);
	}
	inline CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_ParticleSystem), (void*)NULL);
	}
};
struct ColorBySpeedModuleU5BU5D_t0E5EE314CD20E42735C32A7A06AFC14BF9F17BD1  : public RuntimeArray
{
	ALIGN_FIELD (8) ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B m_Items[1];

	inline ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_ParticleSystem), (void*)NULL);
	}
	inline ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_ParticleSystem), (void*)NULL);
	}
};
struct ColorOverLifetimeModuleU5BU5D_t56D392498D03FF1B36CADEB8B1C61DF772B575CA  : public RuntimeArray
{
	ALIGN_FIELD (8) ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9 m_Items[1];

	inline ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_ParticleSystem), (void*)NULL);
	}
	inline ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_ParticleSystem), (void*)NULL);
	}
};
struct EmissionModuleU5BU5D_t110238586598A352710078862A6C32192CAFC5DE  : public RuntimeArray
{
	ALIGN_FIELD (8) EmissionModule_t0F469FA4A08003F6D9C610D2F716A9DFDB9A3678 m_Items[1];

	inline EmissionModule_t0F469FA4A08003F6D9C610D2F716A9DFDB9A3678 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline EmissionModule_t0F469FA4A08003F6D9C610D2F716A9DFDB9A3678* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, EmissionModule_t0F469FA4A08003F6D9C610D2F716A9DFDB9A3678 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_ParticleSystem), (void*)NULL);
	}
	inline EmissionModule_t0F469FA4A08003F6D9C610D2F716A9DFDB9A3678 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline EmissionModule_t0F469FA4A08003F6D9C610D2F716A9DFDB9A3678* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, EmissionModule_t0F469FA4A08003F6D9C610D2F716A9DFDB9A3678 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_ParticleSystem), (void*)NULL);
	}
};
struct ExternalForcesModuleU5BU5D_t11431781ADD799A06D76C11D763A481B2423CD16  : public RuntimeArray
{
	ALIGN_FIELD (8) ExternalForcesModule_t4494E21ECF96F072432EF4DDC5F84BAF84912FC7 m_Items[1];

	inline ExternalForcesModule_t4494E21ECF96F072432EF4DDC5F84BAF84912FC7 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ExternalForcesModule_t4494E21ECF96F072432EF4DDC5F84BAF84912FC7* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ExternalForcesModule_t4494E21ECF96F072432EF4DDC5F84BAF84912FC7 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_ParticleSystem), (void*)NULL);
	}
	inline ExternalForcesModule_t4494E21ECF96F072432EF4DDC5F84BAF84912FC7 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ExternalForcesModule_t4494E21ECF96F072432EF4DDC5F84BAF84912FC7* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ExternalForcesModule_t4494E21ECF96F072432EF4DDC5F84BAF84912FC7 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_ParticleSystem), (void*)NULL);
	}
};
struct ForceOverLifetimeModuleU5BU5D_t8B8EC5C9653BD37EA210B29740ACE97F39B6E1EC  : public RuntimeArray
{
	ALIGN_FIELD (8) ForceOverLifetimeModule_t4859776EAF945AEA86044CAB63CA7A8AC8C14976 m_Items[1];

	inline ForceOverLifetimeModule_t4859776EAF945AEA86044CAB63CA7A8AC8C14976 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ForceOverLifetimeModule_t4859776EAF945AEA86044CAB63CA7A8AC8C14976* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ForceOverLifetimeModule_t4859776EAF945AEA86044CAB63CA7A8AC8C14976 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_ParticleSystem), (void*)NULL);
	}
	inline ForceOverLifetimeModule_t4859776EAF945AEA86044CAB63CA7A8AC8C14976 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ForceOverLifetimeModule_t4859776EAF945AEA86044CAB63CA7A8AC8C14976* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ForceOverLifetimeModule_t4859776EAF945AEA86044CAB63CA7A8AC8C14976 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_ParticleSystem), (void*)NULL);
	}
};
struct InheritVelocityModuleU5BU5D_tBBEA24AC089387EB19C315018C873CD94D15F41A  : public RuntimeArray
{
	ALIGN_FIELD (8) InheritVelocityModule_tB71B2EDCAF328647DDB6BC79541D7C5E76C19562 m_Items[1];

	inline InheritVelocityModule_tB71B2EDCAF328647DDB6BC79541D7C5E76C19562 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline InheritVelocityModule_tB71B2EDCAF328647DDB6BC79541D7C5E76C19562* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, InheritVelocityModule_tB71B2EDCAF328647DDB6BC79541D7C5E76C19562 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_ParticleSystem), (void*)NULL);
	}
	inline InheritVelocityModule_tB71B2EDCAF328647DDB6BC79541D7C5E76C19562 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline InheritVelocityModule_tB71B2EDCAF328647DDB6BC79541D7C5E76C19562* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, InheritVelocityModule_tB71B2EDCAF328647DDB6BC79541D7C5E76C19562 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_ParticleSystem), (void*)NULL);
	}
};
struct LightsModuleU5BU5D_t1B43D0E6425D6ECE42FB5D4E9A0E7522279ACA56  : public RuntimeArray
{
	ALIGN_FIELD (8) LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E m_Items[1];

	inline LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_ParticleSystem), (void*)NULL);
	}
	inline LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_ParticleSystem), (void*)NULL);
	}
};
struct LimitVelocityOverLifetimeModuleU5BU5D_tAF13DD144C6E43CE6DE2FE7A275FB904DD9068F1  : public RuntimeArray
{
	ALIGN_FIELD (8) LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 m_Items[1];

	inline LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_ParticleSystem), (void*)NULL);
	}
	inline LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_ParticleSystem), (void*)NULL);
	}
};
struct MainModuleU5BU5D_tEEFB5F0E13630CB75255D344E67FEEDD38C47F0F  : public RuntimeArray
{
	ALIGN_FIELD (8) MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9 m_Items[1];

	inline MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_ParticleSystem), (void*)NULL);
	}
	inline MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_ParticleSystem), (void*)NULL);
	}
};
struct NoiseModuleU5BU5D_t7C4F86128102E5F9E007D757ED34CFE5D887C565  : public RuntimeArray
{
	ALIGN_FIELD (8) NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0 m_Items[1];

	inline NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_ParticleSystem), (void*)NULL);
	}
	inline NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_ParticleSystem), (void*)NULL);
	}
};
struct RotationBySpeedModuleU5BU5D_tFC82BD47383BAC5155E20F4CACA0B1D3377CA989  : public RuntimeArray
{
	ALIGN_FIELD (8) RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 m_Items[1];

	inline RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_ParticleSystem), (void*)NULL);
	}
	inline RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_ParticleSystem), (void*)NULL);
	}
};
struct RotationOverLifetimeModuleU5BU5D_t50CBEBBC6B542E064BD30EB9EB49BCD9B5F419C8  : public RuntimeArray
{
	ALIGN_FIELD (8) RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 m_Items[1];

	inline RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_ParticleSystem), (void*)NULL);
	}
	inline RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_ParticleSystem), (void*)NULL);
	}
};
struct ShapeModuleU5BU5D_t8997568E698C9B1509FCDFE401084FF80AB60243  : public RuntimeArray
{
	ALIGN_FIELD (8) ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2 m_Items[1];

	inline ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_ParticleSystem), (void*)NULL);
	}
	inline ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_ParticleSystem), (void*)NULL);
	}
};
struct SizeBySpeedModuleU5BU5D_tEF4645160713AF1309F815C4B95C79975BA2D221  : public RuntimeArray
{
	ALIGN_FIELD (8) SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4 m_Items[1];

	inline SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_ParticleSystem), (void*)NULL);
	}
	inline SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_ParticleSystem), (void*)NULL);
	}
};
struct SizeOverLifetimeModuleU5BU5D_t31052F8FFC4F64017ABA0B123070F572D37A29A3  : public RuntimeArray
{
	ALIGN_FIELD (8) SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C m_Items[1];

	inline SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_ParticleSystem), (void*)NULL);
	}
	inline SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_ParticleSystem), (void*)NULL);
	}
};
struct SubEmittersModuleU5BU5D_t0F0D2688875FC82644111B1ECCC27FA6B775A483  : public RuntimeArray
{
	ALIGN_FIELD (8) SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B m_Items[1];

	inline SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_ParticleSystem), (void*)NULL);
	}
	inline SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_ParticleSystem), (void*)NULL);
	}
};


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyBagStore_AddPropertyBag_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_m088CAA80782DB09175102114FED732B85F56DC08_gshared (RuntimeObject* ___0_propertyBag, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyBagStore_AddPropertyBag_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m6EDE42258DCE4DF0A4C10E8D44D305FA6C59AEB4_gshared (RuntimeObject* ___0_propertyBag, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_SetCapacity_mD8086A1BE69A9D667942BEE1B7C493ED46D076B2_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_MoveNext_mBE64AC05D205514CF53E249788563FB5000FDB82_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, int32_t* ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m07A08E9A1E2AB072CB1654A5009DA79A460E081B_gshared (Enumerator_t30E3290EE12437374037B3CF0EE4D614F96D030A* __this, Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* ___0_q, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_ThrowForEmptyQueue_m79CDC02B168158EA24B805B9CB987F18C37638EA_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m8DA499B2030A9C843BE8FCAEFDFD4CD4EB5BA0BB_gshared (Enumerator_tFA6E7D5BA5EFB0C82F2AA1342FFD5C2B753D673C* __this, Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* ___0_q, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR fsVersionedTypeU5BU5D_tF4A5B18C49769943892747B1A1040CAE86746E1F* Array_Empty_TisfsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8_mE2BC05CF2CE0B2267A4A0BF14227F75DE3AE1B0C_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_SetCapacity_m14974813FC1A5CF64863A43F459B1EA54951EF4B_gshared (Queue_1_t66D4A65BAEEC35917BB5E09E63B6FDB1F110200A* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_MoveNext_m9576D15FA3B418D2B0635A1AEC929FC1FBF8B7DC_gshared (Queue_1_t66D4A65BAEEC35917BB5E09E63B6FDB1F110200A* __this, int32_t* ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m8835940C7ADB7336B372B7491513F6EFA5FD4799_gshared (Enumerator_t46A96D1902EB6E630D5DAADD490183C6117140EB* __this, Queue_1_t66D4A65BAEEC35917BB5E09E63B6FDB1F110200A* ___0_q, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_ThrowForEmptyQueue_mF881C86AA32F6E038826FACA66B04D1017730272_gshared (Queue_1_t66D4A65BAEEC35917BB5E09E63B6FDB1F110200A* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* Array_Empty_TisEventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2_mAEF379183FDCBD07C651D56777D4AA5A5C969A47_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_SetCapacity_m5115601B916B93D40CF5F1D0E701A44CE4AC00BD_gshared (Queue_1_t488F4FFC87B785BACAAF18A6B2E9307E5451DF68* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_MoveNext_mF35B8278118E61AA6201303604959C981D6274D8_gshared (Queue_1_t488F4FFC87B785BACAAF18A6B2E9307E5451DF68* __this, int32_t* ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_mEDD7119A358C62419FF8F06020B05C38E755671E_gshared (Enumerator_t3B7550C1130BBD2F1A4BAE88FB62305FC7A95602* __this, Queue_1_t488F4FFC87B785BACAAF18A6B2E9307E5451DF68* ___0_q, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_ThrowForEmptyQueue_m10EBE3090FFF2A9725A7DB3135D2C29BEE30F2C0_gshared (Queue_1_t488F4FFC87B785BACAAF18A6B2E9307E5451DF68* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CollisionModuleU5BU5D_t9520E15E871E6E2B11790028A8CE1A6E1C0F2EC2* Array_Empty_TisCollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083_mFF74E742D160D48C5C4C03E9219544E7D5E133D5_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_SetCapacity_m0655099AAFB44A7F3820A1C842B007B3AECE518F_gshared (Queue_1_t5A4C4B12CBF6AE19441E8689D9CD0CB72497458F* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_MoveNext_mD0617C3FB9194932497300D41B5B74524AD3E2A0_gshared (Queue_1_t5A4C4B12CBF6AE19441E8689D9CD0CB72497458F* __this, int32_t* ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_mE1F1F004BEE05F1BDD320827FF60851805E818F9_gshared (Enumerator_t55121C7B4E26C3F446A3233DF51C8C4550A8DC63* __this, Queue_1_t5A4C4B12CBF6AE19441E8689D9CD0CB72497458F* ___0_q, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_ThrowForEmptyQueue_m2378CE00B367BA09FD7BD47FB1B0A77329998F39_gshared (Queue_1_t5A4C4B12CBF6AE19441E8689D9CD0CB72497458F* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ColorBySpeedModuleU5BU5D_t0E5EE314CD20E42735C32A7A06AFC14BF9F17BD1* Array_Empty_TisColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_m12B6F1ECF375A80FB7C42121CBBD37A51893C2A5_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_SetCapacity_m10AE89138B16771B4136F70E59C0AB461D9BE087_gshared (Queue_1_tF4E2FE02CE3AE00F88E131F0BA8C98CE987815F9* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_MoveNext_m0D133B79D8B56B5FAD65816C1F203B7381C99973_gshared (Queue_1_tF4E2FE02CE3AE00F88E131F0BA8C98CE987815F9* __this, int32_t* ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m931911556E664FC64DB82994DEC247AA0881E324_gshared (Enumerator_t9228D1C112BAACD489B647500756A260AF7812BF* __this, Queue_1_tF4E2FE02CE3AE00F88E131F0BA8C98CE987815F9* ___0_q, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_ThrowForEmptyQueue_mD0F520927AF5234B328FEC1AA686A8510D588EE1_gshared (Queue_1_tF4E2FE02CE3AE00F88E131F0BA8C98CE987815F9* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ColorOverLifetimeModuleU5BU5D_t56D392498D03FF1B36CADEB8B1C61DF772B575CA* Array_Empty_TisColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9_mC1FDC75D8356A5C9870BF88F40972AFC7E8EF569_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_SetCapacity_mAD5B0D4E134D6BD98C1FFA078761503D0A61FE40_gshared (Queue_1_tBB2A0C4F251B256F7DE42D6E2BA4238B4DF91F30* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_MoveNext_mEE24FDDDD40CD5A8E2AE0DB4CCB54E30E131C408_gshared (Queue_1_tBB2A0C4F251B256F7DE42D6E2BA4238B4DF91F30* __this, int32_t* ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_mE2D9709A16F2D947F86D16CF0AC955E483430589_gshared (Enumerator_t3F1C356002E2962DAFAA51F162DB9A5926148EE7* __this, Queue_1_tBB2A0C4F251B256F7DE42D6E2BA4238B4DF91F30* ___0_q, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_ThrowForEmptyQueue_m0C95F8D0002EC1614480D1D88435F36BAFAEB55C_gshared (Queue_1_tBB2A0C4F251B256F7DE42D6E2BA4238B4DF91F30* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EmissionModuleU5BU5D_t110238586598A352710078862A6C32192CAFC5DE* Array_Empty_TisEmissionModule_t0F469FA4A08003F6D9C610D2F716A9DFDB9A3678_m0AF1109AB17569AAB476D0C066C70C18B4B5D746_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_SetCapacity_m5A267D2360AB7E0CB3960E5C255EEC3E2A824D69_gshared (Queue_1_t22121E4AEC415CDAE61E996C9A25D8A0321D85FF* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_MoveNext_m0A64DC76FE998F816931C5C463937E4A43C6BDDE_gshared (Queue_1_t22121E4AEC415CDAE61E996C9A25D8A0321D85FF* __this, int32_t* ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m75FF48FE0A168A147798331EF6583C70AEA4B51F_gshared (Enumerator_t55765909EAC7B86052C39583F1709C769BB52A72* __this, Queue_1_t22121E4AEC415CDAE61E996C9A25D8A0321D85FF* ___0_q, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_ThrowForEmptyQueue_m814859C2391E3841FA1B6EE491CF78491A957A61_gshared (Queue_1_t22121E4AEC415CDAE61E996C9A25D8A0321D85FF* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ExternalForcesModuleU5BU5D_t11431781ADD799A06D76C11D763A481B2423CD16* Array_Empty_TisExternalForcesModule_t4494E21ECF96F072432EF4DDC5F84BAF84912FC7_m2F3EA4E00B708F7E2F683839F2933A2077F67B9B_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_SetCapacity_m3034DBECDE6BC7AB2A0705F5F5FFD9B4E7168C0C_gshared (Queue_1_tF483B3CFE7EF31C119FC391C89669D14457B4BC6* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_MoveNext_mF1E16D642E7D8BBDE1251EE36DE0C7B927CF6C9F_gshared (Queue_1_tF483B3CFE7EF31C119FC391C89669D14457B4BC6* __this, int32_t* ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m6DBC1B22B772EFB1124504BF221F695FA7848996_gshared (Enumerator_t3A30FF055AE1E057728E18A493D72AD503BC565F* __this, Queue_1_tF483B3CFE7EF31C119FC391C89669D14457B4BC6* ___0_q, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_ThrowForEmptyQueue_m0279EAF5F3F131C15B02928DAB3A7384FE54764D_gshared (Queue_1_tF483B3CFE7EF31C119FC391C89669D14457B4BC6* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ForceOverLifetimeModuleU5BU5D_t8B8EC5C9653BD37EA210B29740ACE97F39B6E1EC* Array_Empty_TisForceOverLifetimeModule_t4859776EAF945AEA86044CAB63CA7A8AC8C14976_mD3B31996CF3BEC24489EA770CDA781CA057E095D_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_SetCapacity_m21A2088DAC48A36D6109B82B06BC99534B354DA9_gshared (Queue_1_t6F177B1F38A281F7BC9922E112B5B006C3333CE9* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_MoveNext_mB5E49BD0C8D90F9B4FF0904ECE36E525545087D8_gshared (Queue_1_t6F177B1F38A281F7BC9922E112B5B006C3333CE9* __this, int32_t* ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_mFB8C7AF7A2E94FF320EA310E73F71C9CDCAC08C3_gshared (Enumerator_t6012AEE5962CB84F408A8DA5DF440A5104C9BBA0* __this, Queue_1_t6F177B1F38A281F7BC9922E112B5B006C3333CE9* ___0_q, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_ThrowForEmptyQueue_m982B3AA5CA095F01B8F6BBF3691C4DF492436AC9_gshared (Queue_1_t6F177B1F38A281F7BC9922E112B5B006C3333CE9* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InheritVelocityModuleU5BU5D_tBBEA24AC089387EB19C315018C873CD94D15F41A* Array_Empty_TisInheritVelocityModule_tB71B2EDCAF328647DDB6BC79541D7C5E76C19562_mC34E022E193FCEBCBCFABE3D326AFD7A3BC72D81_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_SetCapacity_mF8D17BFAC35B95AF1B36A1272C18DA8DDF4DB049_gshared (Queue_1_t6513574E5F9571603E493A60C6E5B4A0D74A8F46* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_MoveNext_m291D9FA11608ECCE8AB8D824A29559A5F8ABC35C_gshared (Queue_1_t6513574E5F9571603E493A60C6E5B4A0D74A8F46* __this, int32_t* ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m4F048D40D8F35D38BE7F1897B2835807409480B5_gshared (Enumerator_tDD8F18C63CBC3504D6CD806798A047A910BFF393* __this, Queue_1_t6513574E5F9571603E493A60C6E5B4A0D74A8F46* ___0_q, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_ThrowForEmptyQueue_m7509637FF9F9413609F3D806DD57A704ECA21687_gshared (Queue_1_t6513574E5F9571603E493A60C6E5B4A0D74A8F46* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR LightsModuleU5BU5D_t1B43D0E6425D6ECE42FB5D4E9A0E7522279ACA56* Array_Empty_TisLightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_mC84EDDF86908CEB62AAFDFDCD8E2E3210403A401_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_SetCapacity_m36119DA0B708006BB72193C19385189BA0DBD9F0_gshared (Queue_1_t4AA446582A62FB2A18563671B4E47108952DD4FB* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_MoveNext_mDC3D893F47661BA5C82C49C991C09CB2F7E55CE6_gshared (Queue_1_t4AA446582A62FB2A18563671B4E47108952DD4FB* __this, int32_t* ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_mC9F5D354A52F9A1EE01DDC21B0489BE6929838B8_gshared (Enumerator_tA89F09BA1DAB7E615FEE410A1D4A5C27AC44E560* __this, Queue_1_t4AA446582A62FB2A18563671B4E47108952DD4FB* ___0_q, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_ThrowForEmptyQueue_m1A6FFBB1A9A0B73ACC736801F631354458BB1329_gshared (Queue_1_t4AA446582A62FB2A18563671B4E47108952DD4FB* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR LimitVelocityOverLifetimeModuleU5BU5D_tAF13DD144C6E43CE6DE2FE7A275FB904DD9068F1* Array_Empty_TisLimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_m21FA0F5AE4672F90426A30B4FDE61DCE8DD75461_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_SetCapacity_mD4177C05AB09D5CFC4B7B3A1A499991CC6FB5A97_gshared (Queue_1_tB7344F263E081890307F699D5579171FD2254E3C* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_MoveNext_m91E2C414A3DBFB048C222977D05C65B61A91E5A0_gshared (Queue_1_tB7344F263E081890307F699D5579171FD2254E3C* __this, int32_t* ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m055E106B6432C11C73BB557AE6283775691ECA04_gshared (Enumerator_tBA1BBC08497A0A44E5697AB9B462427C96D8E161* __this, Queue_1_tB7344F263E081890307F699D5579171FD2254E3C* ___0_q, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_ThrowForEmptyQueue_mC17BD2FE62E80298313851E5418D86CD1B61E785_gshared (Queue_1_tB7344F263E081890307F699D5579171FD2254E3C* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MainModuleU5BU5D_tEEFB5F0E13630CB75255D344E67FEEDD38C47F0F* Array_Empty_TisMainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9_m33C193685A1A3B0DD811A9F060572040030884B7_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_SetCapacity_m2660F55989535ADE9CB18BF095B836927FE6EE38_gshared (Queue_1_t9FD90F7D0CA85A6D0A14742DF2E9ED3816057293* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_MoveNext_m4AED005CE52AE4BE8D612B0E5C9ED0A1B15B0457_gshared (Queue_1_t9FD90F7D0CA85A6D0A14742DF2E9ED3816057293* __this, int32_t* ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m5F7697BE18C0658908B84798AF319CA133B38A6D_gshared (Enumerator_t25DEAF258A8E28CE33A32030114FBDCD8F6B1953* __this, Queue_1_t9FD90F7D0CA85A6D0A14742DF2E9ED3816057293* ___0_q, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_ThrowForEmptyQueue_mBCC3E1CCB9996C874E1E05CA5F6E52C8D461964C_gshared (Queue_1_t9FD90F7D0CA85A6D0A14742DF2E9ED3816057293* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NoiseModuleU5BU5D_t7C4F86128102E5F9E007D757ED34CFE5D887C565* Array_Empty_TisNoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0_m1AD2426C747ABC797C05E61B05D61450076A8903_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_SetCapacity_mB8E3DFCD07610A1612A7CE73AE8465447452CF2E_gshared (Queue_1_tE50D0AAB2E9579CB69DE8C77FE39236C3E025C1E* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_MoveNext_m746098FB2E11F67364098F217D25B6816CC71789_gshared (Queue_1_tE50D0AAB2E9579CB69DE8C77FE39236C3E025C1E* __this, int32_t* ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m30A6766AAF8AF84D174C90D21D803EE4F75C80B4_gshared (Enumerator_t7BB8049BB5F5F3EFF0638EC4F4A3E082C4591BAE* __this, Queue_1_tE50D0AAB2E9579CB69DE8C77FE39236C3E025C1E* ___0_q, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_ThrowForEmptyQueue_mAD0CD3033C992D3ECE9C29911C8C80149F696886_gshared (Queue_1_tE50D0AAB2E9579CB69DE8C77FE39236C3E025C1E* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RotationBySpeedModuleU5BU5D_tFC82BD47383BAC5155E20F4CACA0B1D3377CA989* Array_Empty_TisRotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_mA0D9CFABD04BEF3BFE482AE641DCD6F0C1597FA9_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_SetCapacity_m3EE7DDC17C8BF4A848530E14BE83AB2FF51EAD72_gshared (Queue_1_t9FA265C8E0E8BDEBE8DBED5C7F4E420B7C3ED03D* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_MoveNext_m52BF4F216585A90D38D3C6B9FA208D7962CDE4B4_gshared (Queue_1_t9FA265C8E0E8BDEBE8DBED5C7F4E420B7C3ED03D* __this, int32_t* ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m7B6EDAC6E45ED0FF0A0ED83628E74E50D2DF9132_gshared (Enumerator_t3BC8EAF606B91138C671F4AEB3B2CAAF456197A7* __this, Queue_1_t9FA265C8E0E8BDEBE8DBED5C7F4E420B7C3ED03D* ___0_q, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_ThrowForEmptyQueue_m0EBE213721CBC0DB5DDC03F4E5F8E6465BB4193F_gshared (Queue_1_t9FA265C8E0E8BDEBE8DBED5C7F4E420B7C3ED03D* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RotationOverLifetimeModuleU5BU5D_t50CBEBBC6B542E064BD30EB9EB49BCD9B5F419C8* Array_Empty_TisRotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_m3E7ABA71381D6C3DA7508146A094FE8C9C5C7436_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_SetCapacity_m06D7B5BE55FEF9235CFA3C383C4CD74A3DEC4792_gshared (Queue_1_tBF1D02B07565C1EAA28556CFDAA2E3555501F50D* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_MoveNext_m9AB4859605F51D7FFC3E732BD78F12ED623A6F17_gshared (Queue_1_tBF1D02B07565C1EAA28556CFDAA2E3555501F50D* __this, int32_t* ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_mF692387BB4116F7998F307A7FFAD03C96E5F47D8_gshared (Enumerator_tE86A0C1F3FA0726AEC68EDEA1B95782056A41922* __this, Queue_1_tBF1D02B07565C1EAA28556CFDAA2E3555501F50D* ___0_q, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_ThrowForEmptyQueue_mD77DAE9F8E6C99BD4E01B159FA8D36D8B9AAF125_gshared (Queue_1_tBF1D02B07565C1EAA28556CFDAA2E3555501F50D* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ShapeModuleU5BU5D_t8997568E698C9B1509FCDFE401084FF80AB60243* Array_Empty_TisShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2_m23574AE640623A2874871290CD7F26FE026C60FE_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_SetCapacity_m7B994227375B3265506AD6D468B9FFBC4C1FC3BA_gshared (Queue_1_tB5C7771CD791E4C5A79218CD2C607517B63C00F6* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_MoveNext_mAD088977D1BFE3B3B419965739E95586C2CBF1D4_gshared (Queue_1_tB5C7771CD791E4C5A79218CD2C607517B63C00F6* __this, int32_t* ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_mF75902196303BAF176D98D9E2CC8C790066AA36D_gshared (Enumerator_t28136747FD61ACF924C71B74CE5CB33F5FDE221C* __this, Queue_1_tB5C7771CD791E4C5A79218CD2C607517B63C00F6* ___0_q, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_ThrowForEmptyQueue_mAEBA69695B2B981467316821D5F68FC9793F22E3_gshared (Queue_1_tB5C7771CD791E4C5A79218CD2C607517B63C00F6* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SizeBySpeedModuleU5BU5D_tEF4645160713AF1309F815C4B95C79975BA2D221* Array_Empty_TisSizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4_m9AA9EFC539DB7558A084DA01995E1416885100E0_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_SetCapacity_mF2AC2CA3FB3A64549B30ABD823DAA8FF2D5FEC42_gshared (Queue_1_tABEA5C7CAAB3B865D2F50F23AFA9C9D95DC83722* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_MoveNext_m2B2042DA5BCAADE90BD07D423F1EFDBB886709BC_gshared (Queue_1_tABEA5C7CAAB3B865D2F50F23AFA9C9D95DC83722* __this, int32_t* ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m47741F5A74E3B398EF05B1851CB6FAA53A54EBB8_gshared (Enumerator_tBC8B7CC2DAC33A9808E0B9D802C51843715F8B57* __this, Queue_1_tABEA5C7CAAB3B865D2F50F23AFA9C9D95DC83722* ___0_q, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_ThrowForEmptyQueue_m39E173CC1E5FD7AF2C7907CD7CF099DB4CCCB577_gshared (Queue_1_tABEA5C7CAAB3B865D2F50F23AFA9C9D95DC83722* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SizeOverLifetimeModuleU5BU5D_t31052F8FFC4F64017ABA0B123070F572D37A29A3* Array_Empty_TisSizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C_m3A84DF47DB367D4CDF792D5F7DF11100A974F13D_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_SetCapacity_m9165403F0F0F7767662F23A1A6235E06D807D5CF_gshared (Queue_1_t9F5EC60BA20905CF85F0EC6D5CF8CDBA2DDEBF03* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_MoveNext_mE0C43CFEDDCD3B1D18F295FCE3F00C8C3595A990_gshared (Queue_1_t9F5EC60BA20905CF85F0EC6D5CF8CDBA2DDEBF03* __this, int32_t* ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_mE8EEF8C22FFFEF87157D2F38BC4B159A53642253_gshared (Enumerator_tBDEE937DC978007344F2C66A05E9710AB09A2920* __this, Queue_1_t9F5EC60BA20905CF85F0EC6D5CF8CDBA2DDEBF03* ___0_q, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_ThrowForEmptyQueue_m16D5601251C9383B03A20BE5B267E9AC2CC6A304_gshared (Queue_1_t9F5EC60BA20905CF85F0EC6D5CF8CDBA2DDEBF03* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SubEmittersModuleU5BU5D_t0F0D2688875FC82644111B1ECCC27FA6B775A483* Array_Empty_TisSubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B_m68BA68C658B6882B6E960B75E942EA462D773B90_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_SetCapacity_m6B2C5C5826028020475F98EF83010A8CC0EF0594_gshared (Queue_1_t729B9C657F6A9ECE0085BB5615128913418843BC* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_MoveNext_mA7612B3642C784E094FEA6B2020E32C4953D8BEF_gshared (Queue_1_t729B9C657F6A9ECE0085BB5615128913418843BC* __this, int32_t* ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_mDB06CA75CE220B7F13D93F64A0AC031FE16E1376_gshared (Enumerator_tC101FE0399B2E5BB3E7512B286064A26F42F6696* __this, Queue_1_t729B9C657F6A9ECE0085BB5615128913418843BC* ___0_q, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_ThrowForEmptyQueue_m762921511DDCF44E074EB355C146B5ACEE6E9192_gshared (Queue_1_t729B9C657F6A9ECE0085BB5615128913418843BC* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_m79A9BF770BEF9C06BE40D5401E55E375F2726CC4_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;

IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeTraits_IsContainer_m46D04F3E3219371CC5F133E2CC54BCA46FD72505 (Type_t* ___0_type, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8 (String_t* ___0_format, RuntimeObject* ___1_arg0, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___0_message, const RuntimeMethod* method) ;
inline void PropertyBagStore_AddPropertyBag_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_m088CAA80782DB09175102114FED732B85F56DC08 (RuntimeObject* ___0_propertyBag, const RuntimeMethod* method)
{
	((  void (*) (RuntimeObject*, const RuntimeMethod*))PropertyBagStore_AddPropertyBag_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_m088CAA80782DB09175102114FED732B85F56DC08_gshared)(___0_propertyBag, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___0_paramName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
inline void PropertyBagStore_AddPropertyBag_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m6EDE42258DCE4DF0A4C10E8D44D305FA6C59AEB4 (RuntimeObject* ___0_propertyBag, const RuntimeMethod* method)
{
	((  void (*) (RuntimeObject*, const RuntimeMethod*))PropertyBagStore_AddPropertyBag_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m6EDE42258DCE4DF0A4C10E8D44D305FA6C59AEB4_gshared)(___0_propertyBag, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC (Type_t* ___0_left, Type_t* ___1_right, const RuntimeMethod* method) ;
inline void List_1__ctor_m8735FFC7B95F1AA11A04DC5F5E6AA77BAAD94D66 (List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
inline void List_1_Add_mB0CF48862666913FBBF40D44568593A6D82F7EA2_inline (List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* __this, Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715*, Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
inline ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline (const RuntimeMethod* method)
{
	return ((  ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline)(method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85 (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, String_t* ___0_paramName, RuntimeObject* ___1_actualValue, String_t* ___2_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB (RuntimeArray* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F (RuntimeArray* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, String_t* ___1_paramName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC (RuntimeArray* __this, int32_t ___0_dimension, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57 (RuntimeArray* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41 (RuntimeArray* ___0_sourceArray, int32_t ___1_sourceIndex, RuntimeArray* ___2_destinationArray, int32_t ___3_destinationIndex, int32_t ___4_length, const RuntimeMethod* method) ;
inline void Queue_1_SetCapacity_mD8086A1BE69A9D667942BEE1B7C493ED46D076B2 (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, int32_t, const RuntimeMethod*))Queue_1_SetCapacity_mD8086A1BE69A9D667942BEE1B7C493ED46D076B2_gshared)(__this, ___0_capacity, method);
}
inline void Queue_1_MoveNext_mBE64AC05D205514CF53E249788563FB5000FDB82 (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, int32_t* ___0_index, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, int32_t*, const RuntimeMethod*))Queue_1_MoveNext_mBE64AC05D205514CF53E249788563FB5000FDB82_gshared)(__this, ___0_index, method);
}
inline void Enumerator__ctor_m07A08E9A1E2AB072CB1654A5009DA79A460E081B (Enumerator_t30E3290EE12437374037B3CF0EE4D614F96D030A* __this, Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* ___0_q, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t30E3290EE12437374037B3CF0EE4D614F96D030A*, Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))Enumerator__ctor_m07A08E9A1E2AB072CB1654A5009DA79A460E081B_gshared)(__this, ___0_q, method);
}
inline void Queue_1_ThrowForEmptyQueue_m79CDC02B168158EA24B805B9CB987F18C37638EA (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))Queue_1_ThrowForEmptyQueue_m79CDC02B168158EA24B805B9CB987F18C37638EA_gshared)(__this, method);
}
inline void Enumerator__ctor_m8DA499B2030A9C843BE8FCAEFDFD4CD4EB5BA0BB (Enumerator_tFA6E7D5BA5EFB0C82F2AA1342FFD5C2B753D673C* __this, Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* ___0_q, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tFA6E7D5BA5EFB0C82F2AA1342FFD5C2B753D673C*, Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*, const RuntimeMethod*))Enumerator__ctor_m8DA499B2030A9C843BE8FCAEFDFD4CD4EB5BA0BB_gshared)(__this, ___0_q, method);
}
inline fsVersionedTypeU5BU5D_tF4A5B18C49769943892747B1A1040CAE86746E1F* Array_Empty_TisfsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8_mE2BC05CF2CE0B2267A4A0BF14227F75DE3AE1B0C_inline (const RuntimeMethod* method)
{
	return ((  fsVersionedTypeU5BU5D_tF4A5B18C49769943892747B1A1040CAE86746E1F* (*) (const RuntimeMethod*))Array_Empty_TisfsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8_mE2BC05CF2CE0B2267A4A0BF14227F75DE3AE1B0C_gshared_inline)(method);
}
inline void Queue_1_SetCapacity_m14974813FC1A5CF64863A43F459B1EA54951EF4B (Queue_1_t66D4A65BAEEC35917BB5E09E63B6FDB1F110200A* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t66D4A65BAEEC35917BB5E09E63B6FDB1F110200A*, int32_t, const RuntimeMethod*))Queue_1_SetCapacity_m14974813FC1A5CF64863A43F459B1EA54951EF4B_gshared)(__this, ___0_capacity, method);
}
inline void Queue_1_MoveNext_m9576D15FA3B418D2B0635A1AEC929FC1FBF8B7DC (Queue_1_t66D4A65BAEEC35917BB5E09E63B6FDB1F110200A* __this, int32_t* ___0_index, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t66D4A65BAEEC35917BB5E09E63B6FDB1F110200A*, int32_t*, const RuntimeMethod*))Queue_1_MoveNext_m9576D15FA3B418D2B0635A1AEC929FC1FBF8B7DC_gshared)(__this, ___0_index, method);
}
inline void Enumerator__ctor_m8835940C7ADB7336B372B7491513F6EFA5FD4799 (Enumerator_t46A96D1902EB6E630D5DAADD490183C6117140EB* __this, Queue_1_t66D4A65BAEEC35917BB5E09E63B6FDB1F110200A* ___0_q, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t46A96D1902EB6E630D5DAADD490183C6117140EB*, Queue_1_t66D4A65BAEEC35917BB5E09E63B6FDB1F110200A*, const RuntimeMethod*))Enumerator__ctor_m8835940C7ADB7336B372B7491513F6EFA5FD4799_gshared)(__this, ___0_q, method);
}
inline void Queue_1_ThrowForEmptyQueue_mF881C86AA32F6E038826FACA66B04D1017730272 (Queue_1_t66D4A65BAEEC35917BB5E09E63B6FDB1F110200A* __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t66D4A65BAEEC35917BB5E09E63B6FDB1F110200A*, const RuntimeMethod*))Queue_1_ThrowForEmptyQueue_mF881C86AA32F6E038826FACA66B04D1017730272_gshared)(__this, method);
}
inline EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* Array_Empty_TisEventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2_mAEF379183FDCBD07C651D56777D4AA5A5C969A47_inline (const RuntimeMethod* method)
{
	return ((  EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* (*) (const RuntimeMethod*))Array_Empty_TisEventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2_mAEF379183FDCBD07C651D56777D4AA5A5C969A47_gshared_inline)(method);
}
inline void Queue_1_SetCapacity_m5115601B916B93D40CF5F1D0E701A44CE4AC00BD (Queue_1_t488F4FFC87B785BACAAF18A6B2E9307E5451DF68* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t488F4FFC87B785BACAAF18A6B2E9307E5451DF68*, int32_t, const RuntimeMethod*))Queue_1_SetCapacity_m5115601B916B93D40CF5F1D0E701A44CE4AC00BD_gshared)(__this, ___0_capacity, method);
}
inline void Queue_1_MoveNext_mF35B8278118E61AA6201303604959C981D6274D8 (Queue_1_t488F4FFC87B785BACAAF18A6B2E9307E5451DF68* __this, int32_t* ___0_index, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t488F4FFC87B785BACAAF18A6B2E9307E5451DF68*, int32_t*, const RuntimeMethod*))Queue_1_MoveNext_mF35B8278118E61AA6201303604959C981D6274D8_gshared)(__this, ___0_index, method);
}
inline void Enumerator__ctor_mEDD7119A358C62419FF8F06020B05C38E755671E (Enumerator_t3B7550C1130BBD2F1A4BAE88FB62305FC7A95602* __this, Queue_1_t488F4FFC87B785BACAAF18A6B2E9307E5451DF68* ___0_q, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t3B7550C1130BBD2F1A4BAE88FB62305FC7A95602*, Queue_1_t488F4FFC87B785BACAAF18A6B2E9307E5451DF68*, const RuntimeMethod*))Enumerator__ctor_mEDD7119A358C62419FF8F06020B05C38E755671E_gshared)(__this, ___0_q, method);
}
inline void Queue_1_ThrowForEmptyQueue_m10EBE3090FFF2A9725A7DB3135D2C29BEE30F2C0 (Queue_1_t488F4FFC87B785BACAAF18A6B2E9307E5451DF68* __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t488F4FFC87B785BACAAF18A6B2E9307E5451DF68*, const RuntimeMethod*))Queue_1_ThrowForEmptyQueue_m10EBE3090FFF2A9725A7DB3135D2C29BEE30F2C0_gshared)(__this, method);
}
inline CollisionModuleU5BU5D_t9520E15E871E6E2B11790028A8CE1A6E1C0F2EC2* Array_Empty_TisCollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083_mFF74E742D160D48C5C4C03E9219544E7D5E133D5_inline (const RuntimeMethod* method)
{
	return ((  CollisionModuleU5BU5D_t9520E15E871E6E2B11790028A8CE1A6E1C0F2EC2* (*) (const RuntimeMethod*))Array_Empty_TisCollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083_mFF74E742D160D48C5C4C03E9219544E7D5E133D5_gshared_inline)(method);
}
inline void Queue_1_SetCapacity_m0655099AAFB44A7F3820A1C842B007B3AECE518F (Queue_1_t5A4C4B12CBF6AE19441E8689D9CD0CB72497458F* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t5A4C4B12CBF6AE19441E8689D9CD0CB72497458F*, int32_t, const RuntimeMethod*))Queue_1_SetCapacity_m0655099AAFB44A7F3820A1C842B007B3AECE518F_gshared)(__this, ___0_capacity, method);
}
inline void Queue_1_MoveNext_mD0617C3FB9194932497300D41B5B74524AD3E2A0 (Queue_1_t5A4C4B12CBF6AE19441E8689D9CD0CB72497458F* __this, int32_t* ___0_index, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t5A4C4B12CBF6AE19441E8689D9CD0CB72497458F*, int32_t*, const RuntimeMethod*))Queue_1_MoveNext_mD0617C3FB9194932497300D41B5B74524AD3E2A0_gshared)(__this, ___0_index, method);
}
inline void Enumerator__ctor_mE1F1F004BEE05F1BDD320827FF60851805E818F9 (Enumerator_t55121C7B4E26C3F446A3233DF51C8C4550A8DC63* __this, Queue_1_t5A4C4B12CBF6AE19441E8689D9CD0CB72497458F* ___0_q, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t55121C7B4E26C3F446A3233DF51C8C4550A8DC63*, Queue_1_t5A4C4B12CBF6AE19441E8689D9CD0CB72497458F*, const RuntimeMethod*))Enumerator__ctor_mE1F1F004BEE05F1BDD320827FF60851805E818F9_gshared)(__this, ___0_q, method);
}
inline void Queue_1_ThrowForEmptyQueue_m2378CE00B367BA09FD7BD47FB1B0A77329998F39 (Queue_1_t5A4C4B12CBF6AE19441E8689D9CD0CB72497458F* __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t5A4C4B12CBF6AE19441E8689D9CD0CB72497458F*, const RuntimeMethod*))Queue_1_ThrowForEmptyQueue_m2378CE00B367BA09FD7BD47FB1B0A77329998F39_gshared)(__this, method);
}
inline ColorBySpeedModuleU5BU5D_t0E5EE314CD20E42735C32A7A06AFC14BF9F17BD1* Array_Empty_TisColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_m12B6F1ECF375A80FB7C42121CBBD37A51893C2A5_inline (const RuntimeMethod* method)
{
	return ((  ColorBySpeedModuleU5BU5D_t0E5EE314CD20E42735C32A7A06AFC14BF9F17BD1* (*) (const RuntimeMethod*))Array_Empty_TisColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_m12B6F1ECF375A80FB7C42121CBBD37A51893C2A5_gshared_inline)(method);
}
inline void Queue_1_SetCapacity_m10AE89138B16771B4136F70E59C0AB461D9BE087 (Queue_1_tF4E2FE02CE3AE00F88E131F0BA8C98CE987815F9* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tF4E2FE02CE3AE00F88E131F0BA8C98CE987815F9*, int32_t, const RuntimeMethod*))Queue_1_SetCapacity_m10AE89138B16771B4136F70E59C0AB461D9BE087_gshared)(__this, ___0_capacity, method);
}
inline void Queue_1_MoveNext_m0D133B79D8B56B5FAD65816C1F203B7381C99973 (Queue_1_tF4E2FE02CE3AE00F88E131F0BA8C98CE987815F9* __this, int32_t* ___0_index, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tF4E2FE02CE3AE00F88E131F0BA8C98CE987815F9*, int32_t*, const RuntimeMethod*))Queue_1_MoveNext_m0D133B79D8B56B5FAD65816C1F203B7381C99973_gshared)(__this, ___0_index, method);
}
inline void Enumerator__ctor_m931911556E664FC64DB82994DEC247AA0881E324 (Enumerator_t9228D1C112BAACD489B647500756A260AF7812BF* __this, Queue_1_tF4E2FE02CE3AE00F88E131F0BA8C98CE987815F9* ___0_q, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t9228D1C112BAACD489B647500756A260AF7812BF*, Queue_1_tF4E2FE02CE3AE00F88E131F0BA8C98CE987815F9*, const RuntimeMethod*))Enumerator__ctor_m931911556E664FC64DB82994DEC247AA0881E324_gshared)(__this, ___0_q, method);
}
inline void Queue_1_ThrowForEmptyQueue_mD0F520927AF5234B328FEC1AA686A8510D588EE1 (Queue_1_tF4E2FE02CE3AE00F88E131F0BA8C98CE987815F9* __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tF4E2FE02CE3AE00F88E131F0BA8C98CE987815F9*, const RuntimeMethod*))Queue_1_ThrowForEmptyQueue_mD0F520927AF5234B328FEC1AA686A8510D588EE1_gshared)(__this, method);
}
inline ColorOverLifetimeModuleU5BU5D_t56D392498D03FF1B36CADEB8B1C61DF772B575CA* Array_Empty_TisColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9_mC1FDC75D8356A5C9870BF88F40972AFC7E8EF569_inline (const RuntimeMethod* method)
{
	return ((  ColorOverLifetimeModuleU5BU5D_t56D392498D03FF1B36CADEB8B1C61DF772B575CA* (*) (const RuntimeMethod*))Array_Empty_TisColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9_mC1FDC75D8356A5C9870BF88F40972AFC7E8EF569_gshared_inline)(method);
}
inline void Queue_1_SetCapacity_mAD5B0D4E134D6BD98C1FFA078761503D0A61FE40 (Queue_1_tBB2A0C4F251B256F7DE42D6E2BA4238B4DF91F30* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tBB2A0C4F251B256F7DE42D6E2BA4238B4DF91F30*, int32_t, const RuntimeMethod*))Queue_1_SetCapacity_mAD5B0D4E134D6BD98C1FFA078761503D0A61FE40_gshared)(__this, ___0_capacity, method);
}
inline void Queue_1_MoveNext_mEE24FDDDD40CD5A8E2AE0DB4CCB54E30E131C408 (Queue_1_tBB2A0C4F251B256F7DE42D6E2BA4238B4DF91F30* __this, int32_t* ___0_index, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tBB2A0C4F251B256F7DE42D6E2BA4238B4DF91F30*, int32_t*, const RuntimeMethod*))Queue_1_MoveNext_mEE24FDDDD40CD5A8E2AE0DB4CCB54E30E131C408_gshared)(__this, ___0_index, method);
}
inline void Enumerator__ctor_mE2D9709A16F2D947F86D16CF0AC955E483430589 (Enumerator_t3F1C356002E2962DAFAA51F162DB9A5926148EE7* __this, Queue_1_tBB2A0C4F251B256F7DE42D6E2BA4238B4DF91F30* ___0_q, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t3F1C356002E2962DAFAA51F162DB9A5926148EE7*, Queue_1_tBB2A0C4F251B256F7DE42D6E2BA4238B4DF91F30*, const RuntimeMethod*))Enumerator__ctor_mE2D9709A16F2D947F86D16CF0AC955E483430589_gshared)(__this, ___0_q, method);
}
inline void Queue_1_ThrowForEmptyQueue_m0C95F8D0002EC1614480D1D88435F36BAFAEB55C (Queue_1_tBB2A0C4F251B256F7DE42D6E2BA4238B4DF91F30* __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tBB2A0C4F251B256F7DE42D6E2BA4238B4DF91F30*, const RuntimeMethod*))Queue_1_ThrowForEmptyQueue_m0C95F8D0002EC1614480D1D88435F36BAFAEB55C_gshared)(__this, method);
}
inline EmissionModuleU5BU5D_t110238586598A352710078862A6C32192CAFC5DE* Array_Empty_TisEmissionModule_t0F469FA4A08003F6D9C610D2F716A9DFDB9A3678_m0AF1109AB17569AAB476D0C066C70C18B4B5D746_inline (const RuntimeMethod* method)
{
	return ((  EmissionModuleU5BU5D_t110238586598A352710078862A6C32192CAFC5DE* (*) (const RuntimeMethod*))Array_Empty_TisEmissionModule_t0F469FA4A08003F6D9C610D2F716A9DFDB9A3678_m0AF1109AB17569AAB476D0C066C70C18B4B5D746_gshared_inline)(method);
}
inline void Queue_1_SetCapacity_m5A267D2360AB7E0CB3960E5C255EEC3E2A824D69 (Queue_1_t22121E4AEC415CDAE61E996C9A25D8A0321D85FF* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t22121E4AEC415CDAE61E996C9A25D8A0321D85FF*, int32_t, const RuntimeMethod*))Queue_1_SetCapacity_m5A267D2360AB7E0CB3960E5C255EEC3E2A824D69_gshared)(__this, ___0_capacity, method);
}
inline void Queue_1_MoveNext_m0A64DC76FE998F816931C5C463937E4A43C6BDDE (Queue_1_t22121E4AEC415CDAE61E996C9A25D8A0321D85FF* __this, int32_t* ___0_index, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t22121E4AEC415CDAE61E996C9A25D8A0321D85FF*, int32_t*, const RuntimeMethod*))Queue_1_MoveNext_m0A64DC76FE998F816931C5C463937E4A43C6BDDE_gshared)(__this, ___0_index, method);
}
inline void Enumerator__ctor_m75FF48FE0A168A147798331EF6583C70AEA4B51F (Enumerator_t55765909EAC7B86052C39583F1709C769BB52A72* __this, Queue_1_t22121E4AEC415CDAE61E996C9A25D8A0321D85FF* ___0_q, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t55765909EAC7B86052C39583F1709C769BB52A72*, Queue_1_t22121E4AEC415CDAE61E996C9A25D8A0321D85FF*, const RuntimeMethod*))Enumerator__ctor_m75FF48FE0A168A147798331EF6583C70AEA4B51F_gshared)(__this, ___0_q, method);
}
inline void Queue_1_ThrowForEmptyQueue_m814859C2391E3841FA1B6EE491CF78491A957A61 (Queue_1_t22121E4AEC415CDAE61E996C9A25D8A0321D85FF* __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t22121E4AEC415CDAE61E996C9A25D8A0321D85FF*, const RuntimeMethod*))Queue_1_ThrowForEmptyQueue_m814859C2391E3841FA1B6EE491CF78491A957A61_gshared)(__this, method);
}
inline ExternalForcesModuleU5BU5D_t11431781ADD799A06D76C11D763A481B2423CD16* Array_Empty_TisExternalForcesModule_t4494E21ECF96F072432EF4DDC5F84BAF84912FC7_m2F3EA4E00B708F7E2F683839F2933A2077F67B9B_inline (const RuntimeMethod* method)
{
	return ((  ExternalForcesModuleU5BU5D_t11431781ADD799A06D76C11D763A481B2423CD16* (*) (const RuntimeMethod*))Array_Empty_TisExternalForcesModule_t4494E21ECF96F072432EF4DDC5F84BAF84912FC7_m2F3EA4E00B708F7E2F683839F2933A2077F67B9B_gshared_inline)(method);
}
inline void Queue_1_SetCapacity_m3034DBECDE6BC7AB2A0705F5F5FFD9B4E7168C0C (Queue_1_tF483B3CFE7EF31C119FC391C89669D14457B4BC6* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tF483B3CFE7EF31C119FC391C89669D14457B4BC6*, int32_t, const RuntimeMethod*))Queue_1_SetCapacity_m3034DBECDE6BC7AB2A0705F5F5FFD9B4E7168C0C_gshared)(__this, ___0_capacity, method);
}
inline void Queue_1_MoveNext_mF1E16D642E7D8BBDE1251EE36DE0C7B927CF6C9F (Queue_1_tF483B3CFE7EF31C119FC391C89669D14457B4BC6* __this, int32_t* ___0_index, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tF483B3CFE7EF31C119FC391C89669D14457B4BC6*, int32_t*, const RuntimeMethod*))Queue_1_MoveNext_mF1E16D642E7D8BBDE1251EE36DE0C7B927CF6C9F_gshared)(__this, ___0_index, method);
}
inline void Enumerator__ctor_m6DBC1B22B772EFB1124504BF221F695FA7848996 (Enumerator_t3A30FF055AE1E057728E18A493D72AD503BC565F* __this, Queue_1_tF483B3CFE7EF31C119FC391C89669D14457B4BC6* ___0_q, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t3A30FF055AE1E057728E18A493D72AD503BC565F*, Queue_1_tF483B3CFE7EF31C119FC391C89669D14457B4BC6*, const RuntimeMethod*))Enumerator__ctor_m6DBC1B22B772EFB1124504BF221F695FA7848996_gshared)(__this, ___0_q, method);
}
inline void Queue_1_ThrowForEmptyQueue_m0279EAF5F3F131C15B02928DAB3A7384FE54764D (Queue_1_tF483B3CFE7EF31C119FC391C89669D14457B4BC6* __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tF483B3CFE7EF31C119FC391C89669D14457B4BC6*, const RuntimeMethod*))Queue_1_ThrowForEmptyQueue_m0279EAF5F3F131C15B02928DAB3A7384FE54764D_gshared)(__this, method);
}
inline ForceOverLifetimeModuleU5BU5D_t8B8EC5C9653BD37EA210B29740ACE97F39B6E1EC* Array_Empty_TisForceOverLifetimeModule_t4859776EAF945AEA86044CAB63CA7A8AC8C14976_mD3B31996CF3BEC24489EA770CDA781CA057E095D_inline (const RuntimeMethod* method)
{
	return ((  ForceOverLifetimeModuleU5BU5D_t8B8EC5C9653BD37EA210B29740ACE97F39B6E1EC* (*) (const RuntimeMethod*))Array_Empty_TisForceOverLifetimeModule_t4859776EAF945AEA86044CAB63CA7A8AC8C14976_mD3B31996CF3BEC24489EA770CDA781CA057E095D_gshared_inline)(method);
}
inline void Queue_1_SetCapacity_m21A2088DAC48A36D6109B82B06BC99534B354DA9 (Queue_1_t6F177B1F38A281F7BC9922E112B5B006C3333CE9* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t6F177B1F38A281F7BC9922E112B5B006C3333CE9*, int32_t, const RuntimeMethod*))Queue_1_SetCapacity_m21A2088DAC48A36D6109B82B06BC99534B354DA9_gshared)(__this, ___0_capacity, method);
}
inline void Queue_1_MoveNext_mB5E49BD0C8D90F9B4FF0904ECE36E525545087D8 (Queue_1_t6F177B1F38A281F7BC9922E112B5B006C3333CE9* __this, int32_t* ___0_index, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t6F177B1F38A281F7BC9922E112B5B006C3333CE9*, int32_t*, const RuntimeMethod*))Queue_1_MoveNext_mB5E49BD0C8D90F9B4FF0904ECE36E525545087D8_gshared)(__this, ___0_index, method);
}
inline void Enumerator__ctor_mFB8C7AF7A2E94FF320EA310E73F71C9CDCAC08C3 (Enumerator_t6012AEE5962CB84F408A8DA5DF440A5104C9BBA0* __this, Queue_1_t6F177B1F38A281F7BC9922E112B5B006C3333CE9* ___0_q, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t6012AEE5962CB84F408A8DA5DF440A5104C9BBA0*, Queue_1_t6F177B1F38A281F7BC9922E112B5B006C3333CE9*, const RuntimeMethod*))Enumerator__ctor_mFB8C7AF7A2E94FF320EA310E73F71C9CDCAC08C3_gshared)(__this, ___0_q, method);
}
inline void Queue_1_ThrowForEmptyQueue_m982B3AA5CA095F01B8F6BBF3691C4DF492436AC9 (Queue_1_t6F177B1F38A281F7BC9922E112B5B006C3333CE9* __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t6F177B1F38A281F7BC9922E112B5B006C3333CE9*, const RuntimeMethod*))Queue_1_ThrowForEmptyQueue_m982B3AA5CA095F01B8F6BBF3691C4DF492436AC9_gshared)(__this, method);
}
inline InheritVelocityModuleU5BU5D_tBBEA24AC089387EB19C315018C873CD94D15F41A* Array_Empty_TisInheritVelocityModule_tB71B2EDCAF328647DDB6BC79541D7C5E76C19562_mC34E022E193FCEBCBCFABE3D326AFD7A3BC72D81_inline (const RuntimeMethod* method)
{
	return ((  InheritVelocityModuleU5BU5D_tBBEA24AC089387EB19C315018C873CD94D15F41A* (*) (const RuntimeMethod*))Array_Empty_TisInheritVelocityModule_tB71B2EDCAF328647DDB6BC79541D7C5E76C19562_mC34E022E193FCEBCBCFABE3D326AFD7A3BC72D81_gshared_inline)(method);
}
inline void Queue_1_SetCapacity_mF8D17BFAC35B95AF1B36A1272C18DA8DDF4DB049 (Queue_1_t6513574E5F9571603E493A60C6E5B4A0D74A8F46* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t6513574E5F9571603E493A60C6E5B4A0D74A8F46*, int32_t, const RuntimeMethod*))Queue_1_SetCapacity_mF8D17BFAC35B95AF1B36A1272C18DA8DDF4DB049_gshared)(__this, ___0_capacity, method);
}
inline void Queue_1_MoveNext_m291D9FA11608ECCE8AB8D824A29559A5F8ABC35C (Queue_1_t6513574E5F9571603E493A60C6E5B4A0D74A8F46* __this, int32_t* ___0_index, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t6513574E5F9571603E493A60C6E5B4A0D74A8F46*, int32_t*, const RuntimeMethod*))Queue_1_MoveNext_m291D9FA11608ECCE8AB8D824A29559A5F8ABC35C_gshared)(__this, ___0_index, method);
}
inline void Enumerator__ctor_m4F048D40D8F35D38BE7F1897B2835807409480B5 (Enumerator_tDD8F18C63CBC3504D6CD806798A047A910BFF393* __this, Queue_1_t6513574E5F9571603E493A60C6E5B4A0D74A8F46* ___0_q, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tDD8F18C63CBC3504D6CD806798A047A910BFF393*, Queue_1_t6513574E5F9571603E493A60C6E5B4A0D74A8F46*, const RuntimeMethod*))Enumerator__ctor_m4F048D40D8F35D38BE7F1897B2835807409480B5_gshared)(__this, ___0_q, method);
}
inline void Queue_1_ThrowForEmptyQueue_m7509637FF9F9413609F3D806DD57A704ECA21687 (Queue_1_t6513574E5F9571603E493A60C6E5B4A0D74A8F46* __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t6513574E5F9571603E493A60C6E5B4A0D74A8F46*, const RuntimeMethod*))Queue_1_ThrowForEmptyQueue_m7509637FF9F9413609F3D806DD57A704ECA21687_gshared)(__this, method);
}
inline LightsModuleU5BU5D_t1B43D0E6425D6ECE42FB5D4E9A0E7522279ACA56* Array_Empty_TisLightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_mC84EDDF86908CEB62AAFDFDCD8E2E3210403A401_inline (const RuntimeMethod* method)
{
	return ((  LightsModuleU5BU5D_t1B43D0E6425D6ECE42FB5D4E9A0E7522279ACA56* (*) (const RuntimeMethod*))Array_Empty_TisLightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_mC84EDDF86908CEB62AAFDFDCD8E2E3210403A401_gshared_inline)(method);
}
inline void Queue_1_SetCapacity_m36119DA0B708006BB72193C19385189BA0DBD9F0 (Queue_1_t4AA446582A62FB2A18563671B4E47108952DD4FB* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t4AA446582A62FB2A18563671B4E47108952DD4FB*, int32_t, const RuntimeMethod*))Queue_1_SetCapacity_m36119DA0B708006BB72193C19385189BA0DBD9F0_gshared)(__this, ___0_capacity, method);
}
inline void Queue_1_MoveNext_mDC3D893F47661BA5C82C49C991C09CB2F7E55CE6 (Queue_1_t4AA446582A62FB2A18563671B4E47108952DD4FB* __this, int32_t* ___0_index, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t4AA446582A62FB2A18563671B4E47108952DD4FB*, int32_t*, const RuntimeMethod*))Queue_1_MoveNext_mDC3D893F47661BA5C82C49C991C09CB2F7E55CE6_gshared)(__this, ___0_index, method);
}
inline void Enumerator__ctor_mC9F5D354A52F9A1EE01DDC21B0489BE6929838B8 (Enumerator_tA89F09BA1DAB7E615FEE410A1D4A5C27AC44E560* __this, Queue_1_t4AA446582A62FB2A18563671B4E47108952DD4FB* ___0_q, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tA89F09BA1DAB7E615FEE410A1D4A5C27AC44E560*, Queue_1_t4AA446582A62FB2A18563671B4E47108952DD4FB*, const RuntimeMethod*))Enumerator__ctor_mC9F5D354A52F9A1EE01DDC21B0489BE6929838B8_gshared)(__this, ___0_q, method);
}
inline void Queue_1_ThrowForEmptyQueue_m1A6FFBB1A9A0B73ACC736801F631354458BB1329 (Queue_1_t4AA446582A62FB2A18563671B4E47108952DD4FB* __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t4AA446582A62FB2A18563671B4E47108952DD4FB*, const RuntimeMethod*))Queue_1_ThrowForEmptyQueue_m1A6FFBB1A9A0B73ACC736801F631354458BB1329_gshared)(__this, method);
}
inline LimitVelocityOverLifetimeModuleU5BU5D_tAF13DD144C6E43CE6DE2FE7A275FB904DD9068F1* Array_Empty_TisLimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_m21FA0F5AE4672F90426A30B4FDE61DCE8DD75461_inline (const RuntimeMethod* method)
{
	return ((  LimitVelocityOverLifetimeModuleU5BU5D_tAF13DD144C6E43CE6DE2FE7A275FB904DD9068F1* (*) (const RuntimeMethod*))Array_Empty_TisLimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_m21FA0F5AE4672F90426A30B4FDE61DCE8DD75461_gshared_inline)(method);
}
inline void Queue_1_SetCapacity_mD4177C05AB09D5CFC4B7B3A1A499991CC6FB5A97 (Queue_1_tB7344F263E081890307F699D5579171FD2254E3C* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tB7344F263E081890307F699D5579171FD2254E3C*, int32_t, const RuntimeMethod*))Queue_1_SetCapacity_mD4177C05AB09D5CFC4B7B3A1A499991CC6FB5A97_gshared)(__this, ___0_capacity, method);
}
inline void Queue_1_MoveNext_m91E2C414A3DBFB048C222977D05C65B61A91E5A0 (Queue_1_tB7344F263E081890307F699D5579171FD2254E3C* __this, int32_t* ___0_index, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tB7344F263E081890307F699D5579171FD2254E3C*, int32_t*, const RuntimeMethod*))Queue_1_MoveNext_m91E2C414A3DBFB048C222977D05C65B61A91E5A0_gshared)(__this, ___0_index, method);
}
inline void Enumerator__ctor_m055E106B6432C11C73BB557AE6283775691ECA04 (Enumerator_tBA1BBC08497A0A44E5697AB9B462427C96D8E161* __this, Queue_1_tB7344F263E081890307F699D5579171FD2254E3C* ___0_q, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tBA1BBC08497A0A44E5697AB9B462427C96D8E161*, Queue_1_tB7344F263E081890307F699D5579171FD2254E3C*, const RuntimeMethod*))Enumerator__ctor_m055E106B6432C11C73BB557AE6283775691ECA04_gshared)(__this, ___0_q, method);
}
inline void Queue_1_ThrowForEmptyQueue_mC17BD2FE62E80298313851E5418D86CD1B61E785 (Queue_1_tB7344F263E081890307F699D5579171FD2254E3C* __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tB7344F263E081890307F699D5579171FD2254E3C*, const RuntimeMethod*))Queue_1_ThrowForEmptyQueue_mC17BD2FE62E80298313851E5418D86CD1B61E785_gshared)(__this, method);
}
inline MainModuleU5BU5D_tEEFB5F0E13630CB75255D344E67FEEDD38C47F0F* Array_Empty_TisMainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9_m33C193685A1A3B0DD811A9F060572040030884B7_inline (const RuntimeMethod* method)
{
	return ((  MainModuleU5BU5D_tEEFB5F0E13630CB75255D344E67FEEDD38C47F0F* (*) (const RuntimeMethod*))Array_Empty_TisMainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9_m33C193685A1A3B0DD811A9F060572040030884B7_gshared_inline)(method);
}
inline void Queue_1_SetCapacity_m2660F55989535ADE9CB18BF095B836927FE6EE38 (Queue_1_t9FD90F7D0CA85A6D0A14742DF2E9ED3816057293* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t9FD90F7D0CA85A6D0A14742DF2E9ED3816057293*, int32_t, const RuntimeMethod*))Queue_1_SetCapacity_m2660F55989535ADE9CB18BF095B836927FE6EE38_gshared)(__this, ___0_capacity, method);
}
inline void Queue_1_MoveNext_m4AED005CE52AE4BE8D612B0E5C9ED0A1B15B0457 (Queue_1_t9FD90F7D0CA85A6D0A14742DF2E9ED3816057293* __this, int32_t* ___0_index, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t9FD90F7D0CA85A6D0A14742DF2E9ED3816057293*, int32_t*, const RuntimeMethod*))Queue_1_MoveNext_m4AED005CE52AE4BE8D612B0E5C9ED0A1B15B0457_gshared)(__this, ___0_index, method);
}
inline void Enumerator__ctor_m5F7697BE18C0658908B84798AF319CA133B38A6D (Enumerator_t25DEAF258A8E28CE33A32030114FBDCD8F6B1953* __this, Queue_1_t9FD90F7D0CA85A6D0A14742DF2E9ED3816057293* ___0_q, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t25DEAF258A8E28CE33A32030114FBDCD8F6B1953*, Queue_1_t9FD90F7D0CA85A6D0A14742DF2E9ED3816057293*, const RuntimeMethod*))Enumerator__ctor_m5F7697BE18C0658908B84798AF319CA133B38A6D_gshared)(__this, ___0_q, method);
}
inline void Queue_1_ThrowForEmptyQueue_mBCC3E1CCB9996C874E1E05CA5F6E52C8D461964C (Queue_1_t9FD90F7D0CA85A6D0A14742DF2E9ED3816057293* __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t9FD90F7D0CA85A6D0A14742DF2E9ED3816057293*, const RuntimeMethod*))Queue_1_ThrowForEmptyQueue_mBCC3E1CCB9996C874E1E05CA5F6E52C8D461964C_gshared)(__this, method);
}
inline NoiseModuleU5BU5D_t7C4F86128102E5F9E007D757ED34CFE5D887C565* Array_Empty_TisNoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0_m1AD2426C747ABC797C05E61B05D61450076A8903_inline (const RuntimeMethod* method)
{
	return ((  NoiseModuleU5BU5D_t7C4F86128102E5F9E007D757ED34CFE5D887C565* (*) (const RuntimeMethod*))Array_Empty_TisNoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0_m1AD2426C747ABC797C05E61B05D61450076A8903_gshared_inline)(method);
}
inline void Queue_1_SetCapacity_mB8E3DFCD07610A1612A7CE73AE8465447452CF2E (Queue_1_tE50D0AAB2E9579CB69DE8C77FE39236C3E025C1E* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tE50D0AAB2E9579CB69DE8C77FE39236C3E025C1E*, int32_t, const RuntimeMethod*))Queue_1_SetCapacity_mB8E3DFCD07610A1612A7CE73AE8465447452CF2E_gshared)(__this, ___0_capacity, method);
}
inline void Queue_1_MoveNext_m746098FB2E11F67364098F217D25B6816CC71789 (Queue_1_tE50D0AAB2E9579CB69DE8C77FE39236C3E025C1E* __this, int32_t* ___0_index, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tE50D0AAB2E9579CB69DE8C77FE39236C3E025C1E*, int32_t*, const RuntimeMethod*))Queue_1_MoveNext_m746098FB2E11F67364098F217D25B6816CC71789_gshared)(__this, ___0_index, method);
}
inline void Enumerator__ctor_m30A6766AAF8AF84D174C90D21D803EE4F75C80B4 (Enumerator_t7BB8049BB5F5F3EFF0638EC4F4A3E082C4591BAE* __this, Queue_1_tE50D0AAB2E9579CB69DE8C77FE39236C3E025C1E* ___0_q, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t7BB8049BB5F5F3EFF0638EC4F4A3E082C4591BAE*, Queue_1_tE50D0AAB2E9579CB69DE8C77FE39236C3E025C1E*, const RuntimeMethod*))Enumerator__ctor_m30A6766AAF8AF84D174C90D21D803EE4F75C80B4_gshared)(__this, ___0_q, method);
}
inline void Queue_1_ThrowForEmptyQueue_mAD0CD3033C992D3ECE9C29911C8C80149F696886 (Queue_1_tE50D0AAB2E9579CB69DE8C77FE39236C3E025C1E* __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tE50D0AAB2E9579CB69DE8C77FE39236C3E025C1E*, const RuntimeMethod*))Queue_1_ThrowForEmptyQueue_mAD0CD3033C992D3ECE9C29911C8C80149F696886_gshared)(__this, method);
}
inline RotationBySpeedModuleU5BU5D_tFC82BD47383BAC5155E20F4CACA0B1D3377CA989* Array_Empty_TisRotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_mA0D9CFABD04BEF3BFE482AE641DCD6F0C1597FA9_inline (const RuntimeMethod* method)
{
	return ((  RotationBySpeedModuleU5BU5D_tFC82BD47383BAC5155E20F4CACA0B1D3377CA989* (*) (const RuntimeMethod*))Array_Empty_TisRotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_mA0D9CFABD04BEF3BFE482AE641DCD6F0C1597FA9_gshared_inline)(method);
}
inline void Queue_1_SetCapacity_m3EE7DDC17C8BF4A848530E14BE83AB2FF51EAD72 (Queue_1_t9FA265C8E0E8BDEBE8DBED5C7F4E420B7C3ED03D* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t9FA265C8E0E8BDEBE8DBED5C7F4E420B7C3ED03D*, int32_t, const RuntimeMethod*))Queue_1_SetCapacity_m3EE7DDC17C8BF4A848530E14BE83AB2FF51EAD72_gshared)(__this, ___0_capacity, method);
}
inline void Queue_1_MoveNext_m52BF4F216585A90D38D3C6B9FA208D7962CDE4B4 (Queue_1_t9FA265C8E0E8BDEBE8DBED5C7F4E420B7C3ED03D* __this, int32_t* ___0_index, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t9FA265C8E0E8BDEBE8DBED5C7F4E420B7C3ED03D*, int32_t*, const RuntimeMethod*))Queue_1_MoveNext_m52BF4F216585A90D38D3C6B9FA208D7962CDE4B4_gshared)(__this, ___0_index, method);
}
inline void Enumerator__ctor_m7B6EDAC6E45ED0FF0A0ED83628E74E50D2DF9132 (Enumerator_t3BC8EAF606B91138C671F4AEB3B2CAAF456197A7* __this, Queue_1_t9FA265C8E0E8BDEBE8DBED5C7F4E420B7C3ED03D* ___0_q, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t3BC8EAF606B91138C671F4AEB3B2CAAF456197A7*, Queue_1_t9FA265C8E0E8BDEBE8DBED5C7F4E420B7C3ED03D*, const RuntimeMethod*))Enumerator__ctor_m7B6EDAC6E45ED0FF0A0ED83628E74E50D2DF9132_gshared)(__this, ___0_q, method);
}
inline void Queue_1_ThrowForEmptyQueue_m0EBE213721CBC0DB5DDC03F4E5F8E6465BB4193F (Queue_1_t9FA265C8E0E8BDEBE8DBED5C7F4E420B7C3ED03D* __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t9FA265C8E0E8BDEBE8DBED5C7F4E420B7C3ED03D*, const RuntimeMethod*))Queue_1_ThrowForEmptyQueue_m0EBE213721CBC0DB5DDC03F4E5F8E6465BB4193F_gshared)(__this, method);
}
inline RotationOverLifetimeModuleU5BU5D_t50CBEBBC6B542E064BD30EB9EB49BCD9B5F419C8* Array_Empty_TisRotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_m3E7ABA71381D6C3DA7508146A094FE8C9C5C7436_inline (const RuntimeMethod* method)
{
	return ((  RotationOverLifetimeModuleU5BU5D_t50CBEBBC6B542E064BD30EB9EB49BCD9B5F419C8* (*) (const RuntimeMethod*))Array_Empty_TisRotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_m3E7ABA71381D6C3DA7508146A094FE8C9C5C7436_gshared_inline)(method);
}
inline void Queue_1_SetCapacity_m06D7B5BE55FEF9235CFA3C383C4CD74A3DEC4792 (Queue_1_tBF1D02B07565C1EAA28556CFDAA2E3555501F50D* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tBF1D02B07565C1EAA28556CFDAA2E3555501F50D*, int32_t, const RuntimeMethod*))Queue_1_SetCapacity_m06D7B5BE55FEF9235CFA3C383C4CD74A3DEC4792_gshared)(__this, ___0_capacity, method);
}
inline void Queue_1_MoveNext_m9AB4859605F51D7FFC3E732BD78F12ED623A6F17 (Queue_1_tBF1D02B07565C1EAA28556CFDAA2E3555501F50D* __this, int32_t* ___0_index, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tBF1D02B07565C1EAA28556CFDAA2E3555501F50D*, int32_t*, const RuntimeMethod*))Queue_1_MoveNext_m9AB4859605F51D7FFC3E732BD78F12ED623A6F17_gshared)(__this, ___0_index, method);
}
inline void Enumerator__ctor_mF692387BB4116F7998F307A7FFAD03C96E5F47D8 (Enumerator_tE86A0C1F3FA0726AEC68EDEA1B95782056A41922* __this, Queue_1_tBF1D02B07565C1EAA28556CFDAA2E3555501F50D* ___0_q, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tE86A0C1F3FA0726AEC68EDEA1B95782056A41922*, Queue_1_tBF1D02B07565C1EAA28556CFDAA2E3555501F50D*, const RuntimeMethod*))Enumerator__ctor_mF692387BB4116F7998F307A7FFAD03C96E5F47D8_gshared)(__this, ___0_q, method);
}
inline void Queue_1_ThrowForEmptyQueue_mD77DAE9F8E6C99BD4E01B159FA8D36D8B9AAF125 (Queue_1_tBF1D02B07565C1EAA28556CFDAA2E3555501F50D* __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tBF1D02B07565C1EAA28556CFDAA2E3555501F50D*, const RuntimeMethod*))Queue_1_ThrowForEmptyQueue_mD77DAE9F8E6C99BD4E01B159FA8D36D8B9AAF125_gshared)(__this, method);
}
inline ShapeModuleU5BU5D_t8997568E698C9B1509FCDFE401084FF80AB60243* Array_Empty_TisShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2_m23574AE640623A2874871290CD7F26FE026C60FE_inline (const RuntimeMethod* method)
{
	return ((  ShapeModuleU5BU5D_t8997568E698C9B1509FCDFE401084FF80AB60243* (*) (const RuntimeMethod*))Array_Empty_TisShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2_m23574AE640623A2874871290CD7F26FE026C60FE_gshared_inline)(method);
}
inline void Queue_1_SetCapacity_m7B994227375B3265506AD6D468B9FFBC4C1FC3BA (Queue_1_tB5C7771CD791E4C5A79218CD2C607517B63C00F6* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tB5C7771CD791E4C5A79218CD2C607517B63C00F6*, int32_t, const RuntimeMethod*))Queue_1_SetCapacity_m7B994227375B3265506AD6D468B9FFBC4C1FC3BA_gshared)(__this, ___0_capacity, method);
}
inline void Queue_1_MoveNext_mAD088977D1BFE3B3B419965739E95586C2CBF1D4 (Queue_1_tB5C7771CD791E4C5A79218CD2C607517B63C00F6* __this, int32_t* ___0_index, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tB5C7771CD791E4C5A79218CD2C607517B63C00F6*, int32_t*, const RuntimeMethod*))Queue_1_MoveNext_mAD088977D1BFE3B3B419965739E95586C2CBF1D4_gshared)(__this, ___0_index, method);
}
inline void Enumerator__ctor_mF75902196303BAF176D98D9E2CC8C790066AA36D (Enumerator_t28136747FD61ACF924C71B74CE5CB33F5FDE221C* __this, Queue_1_tB5C7771CD791E4C5A79218CD2C607517B63C00F6* ___0_q, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t28136747FD61ACF924C71B74CE5CB33F5FDE221C*, Queue_1_tB5C7771CD791E4C5A79218CD2C607517B63C00F6*, const RuntimeMethod*))Enumerator__ctor_mF75902196303BAF176D98D9E2CC8C790066AA36D_gshared)(__this, ___0_q, method);
}
inline void Queue_1_ThrowForEmptyQueue_mAEBA69695B2B981467316821D5F68FC9793F22E3 (Queue_1_tB5C7771CD791E4C5A79218CD2C607517B63C00F6* __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tB5C7771CD791E4C5A79218CD2C607517B63C00F6*, const RuntimeMethod*))Queue_1_ThrowForEmptyQueue_mAEBA69695B2B981467316821D5F68FC9793F22E3_gshared)(__this, method);
}
inline SizeBySpeedModuleU5BU5D_tEF4645160713AF1309F815C4B95C79975BA2D221* Array_Empty_TisSizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4_m9AA9EFC539DB7558A084DA01995E1416885100E0_inline (const RuntimeMethod* method)
{
	return ((  SizeBySpeedModuleU5BU5D_tEF4645160713AF1309F815C4B95C79975BA2D221* (*) (const RuntimeMethod*))Array_Empty_TisSizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4_m9AA9EFC539DB7558A084DA01995E1416885100E0_gshared_inline)(method);
}
inline void Queue_1_SetCapacity_mF2AC2CA3FB3A64549B30ABD823DAA8FF2D5FEC42 (Queue_1_tABEA5C7CAAB3B865D2F50F23AFA9C9D95DC83722* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tABEA5C7CAAB3B865D2F50F23AFA9C9D95DC83722*, int32_t, const RuntimeMethod*))Queue_1_SetCapacity_mF2AC2CA3FB3A64549B30ABD823DAA8FF2D5FEC42_gshared)(__this, ___0_capacity, method);
}
inline void Queue_1_MoveNext_m2B2042DA5BCAADE90BD07D423F1EFDBB886709BC (Queue_1_tABEA5C7CAAB3B865D2F50F23AFA9C9D95DC83722* __this, int32_t* ___0_index, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tABEA5C7CAAB3B865D2F50F23AFA9C9D95DC83722*, int32_t*, const RuntimeMethod*))Queue_1_MoveNext_m2B2042DA5BCAADE90BD07D423F1EFDBB886709BC_gshared)(__this, ___0_index, method);
}
inline void Enumerator__ctor_m47741F5A74E3B398EF05B1851CB6FAA53A54EBB8 (Enumerator_tBC8B7CC2DAC33A9808E0B9D802C51843715F8B57* __this, Queue_1_tABEA5C7CAAB3B865D2F50F23AFA9C9D95DC83722* ___0_q, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tBC8B7CC2DAC33A9808E0B9D802C51843715F8B57*, Queue_1_tABEA5C7CAAB3B865D2F50F23AFA9C9D95DC83722*, const RuntimeMethod*))Enumerator__ctor_m47741F5A74E3B398EF05B1851CB6FAA53A54EBB8_gshared)(__this, ___0_q, method);
}
inline void Queue_1_ThrowForEmptyQueue_m39E173CC1E5FD7AF2C7907CD7CF099DB4CCCB577 (Queue_1_tABEA5C7CAAB3B865D2F50F23AFA9C9D95DC83722* __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tABEA5C7CAAB3B865D2F50F23AFA9C9D95DC83722*, const RuntimeMethod*))Queue_1_ThrowForEmptyQueue_m39E173CC1E5FD7AF2C7907CD7CF099DB4CCCB577_gshared)(__this, method);
}
inline SizeOverLifetimeModuleU5BU5D_t31052F8FFC4F64017ABA0B123070F572D37A29A3* Array_Empty_TisSizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C_m3A84DF47DB367D4CDF792D5F7DF11100A974F13D_inline (const RuntimeMethod* method)
{
	return ((  SizeOverLifetimeModuleU5BU5D_t31052F8FFC4F64017ABA0B123070F572D37A29A3* (*) (const RuntimeMethod*))Array_Empty_TisSizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C_m3A84DF47DB367D4CDF792D5F7DF11100A974F13D_gshared_inline)(method);
}
inline void Queue_1_SetCapacity_m9165403F0F0F7767662F23A1A6235E06D807D5CF (Queue_1_t9F5EC60BA20905CF85F0EC6D5CF8CDBA2DDEBF03* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t9F5EC60BA20905CF85F0EC6D5CF8CDBA2DDEBF03*, int32_t, const RuntimeMethod*))Queue_1_SetCapacity_m9165403F0F0F7767662F23A1A6235E06D807D5CF_gshared)(__this, ___0_capacity, method);
}
inline void Queue_1_MoveNext_mE0C43CFEDDCD3B1D18F295FCE3F00C8C3595A990 (Queue_1_t9F5EC60BA20905CF85F0EC6D5CF8CDBA2DDEBF03* __this, int32_t* ___0_index, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t9F5EC60BA20905CF85F0EC6D5CF8CDBA2DDEBF03*, int32_t*, const RuntimeMethod*))Queue_1_MoveNext_mE0C43CFEDDCD3B1D18F295FCE3F00C8C3595A990_gshared)(__this, ___0_index, method);
}
inline void Enumerator__ctor_mE8EEF8C22FFFEF87157D2F38BC4B159A53642253 (Enumerator_tBDEE937DC978007344F2C66A05E9710AB09A2920* __this, Queue_1_t9F5EC60BA20905CF85F0EC6D5CF8CDBA2DDEBF03* ___0_q, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tBDEE937DC978007344F2C66A05E9710AB09A2920*, Queue_1_t9F5EC60BA20905CF85F0EC6D5CF8CDBA2DDEBF03*, const RuntimeMethod*))Enumerator__ctor_mE8EEF8C22FFFEF87157D2F38BC4B159A53642253_gshared)(__this, ___0_q, method);
}
inline void Queue_1_ThrowForEmptyQueue_m16D5601251C9383B03A20BE5B267E9AC2CC6A304 (Queue_1_t9F5EC60BA20905CF85F0EC6D5CF8CDBA2DDEBF03* __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t9F5EC60BA20905CF85F0EC6D5CF8CDBA2DDEBF03*, const RuntimeMethod*))Queue_1_ThrowForEmptyQueue_m16D5601251C9383B03A20BE5B267E9AC2CC6A304_gshared)(__this, method);
}
inline SubEmittersModuleU5BU5D_t0F0D2688875FC82644111B1ECCC27FA6B775A483* Array_Empty_TisSubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B_m68BA68C658B6882B6E960B75E942EA462D773B90_inline (const RuntimeMethod* method)
{
	return ((  SubEmittersModuleU5BU5D_t0F0D2688875FC82644111B1ECCC27FA6B775A483* (*) (const RuntimeMethod*))Array_Empty_TisSubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B_m68BA68C658B6882B6E960B75E942EA462D773B90_gshared_inline)(method);
}
inline void Queue_1_SetCapacity_m6B2C5C5826028020475F98EF83010A8CC0EF0594 (Queue_1_t729B9C657F6A9ECE0085BB5615128913418843BC* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t729B9C657F6A9ECE0085BB5615128913418843BC*, int32_t, const RuntimeMethod*))Queue_1_SetCapacity_m6B2C5C5826028020475F98EF83010A8CC0EF0594_gshared)(__this, ___0_capacity, method);
}
inline void Queue_1_MoveNext_mA7612B3642C784E094FEA6B2020E32C4953D8BEF (Queue_1_t729B9C657F6A9ECE0085BB5615128913418843BC* __this, int32_t* ___0_index, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t729B9C657F6A9ECE0085BB5615128913418843BC*, int32_t*, const RuntimeMethod*))Queue_1_MoveNext_mA7612B3642C784E094FEA6B2020E32C4953D8BEF_gshared)(__this, ___0_index, method);
}
inline void Enumerator__ctor_mDB06CA75CE220B7F13D93F64A0AC031FE16E1376 (Enumerator_tC101FE0399B2E5BB3E7512B286064A26F42F6696* __this, Queue_1_t729B9C657F6A9ECE0085BB5615128913418843BC* ___0_q, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tC101FE0399B2E5BB3E7512B286064A26F42F6696*, Queue_1_t729B9C657F6A9ECE0085BB5615128913418843BC*, const RuntimeMethod*))Enumerator__ctor_mDB06CA75CE220B7F13D93F64A0AC031FE16E1376_gshared)(__this, ___0_q, method);
}
inline void Queue_1_ThrowForEmptyQueue_m762921511DDCF44E074EB355C146B5ACEE6E9192 (Queue_1_t729B9C657F6A9ECE0085BB5615128913418843BC* __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t729B9C657F6A9ECE0085BB5615128913418843BC*, const RuntimeMethod*))Queue_1_ThrowForEmptyQueue_m762921511DDCF44E074EB355C146B5ACEE6E9192_gshared)(__this, method);
}
inline void List_1_AddWithResize_m79A9BF770BEF9C06BE40D5401E55E375F2726CC4 (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))List_1_AddWithResize_m79A9BF770BEF9C06BE40D5401E55E375F2726CC4_gshared)(__this, ___0_item, method);
}
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyBag_1__cctor_m2958ED82CEF56432EC7BAF0F4A587DE1797112B5_gshared (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		bool L_2;
		L_2 = TypeTraits_IsContainer_m46D04F3E3219371CC5F133E2CC54BCA46FD72505(L_1, NULL);
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0032;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_4, NULL);
		String_t* L_6;
		L_6 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBFD0F59F9F38A92660652CA5BE172EFCA8501E47)), (RuntimeObject*)L_5, NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_7 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_7, L_6, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, method);
	}

IL_0032:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyBag_1_Unity_Properties_Internal_IPropertyBagRegister_Register_mF593692302390A953382E45778CD235A6FC1920F_gshared (PropertyBag_1_tDA117C10FEABA385803A90E976050FB2D270FAD2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_il2cpp_TypeInfo_var);
		PropertyBagStore_AddPropertyBag_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_m088CAA80782DB09175102114FED732B85F56DC08((RuntimeObject*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyBag_1_Accept_mA628F9A279F3A24B9A812D09E092987972FF3923_gshared (PropertyBag_1_tDA117C10FEABA385803A90E976050FB2D270FAD2* __this, RuntimeObject* ___0_visitor, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		RuntimeObject* L_0 = ___0_visitor;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC23725EE1ACD9996F8909AD0C76D39D2B4CB3ACA)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0015:
	{
		RuntimeObject* L_3 = ___0_visitor;
		NullCheck(L_3);
		GenericInterfaceActionInvoker0::Invoke(il2cpp_rgctx_method(method->klass->rgctx_data, 3), L_3);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PropertyBag_1_Unity_Properties_IConstructor_get_InstantiationKind_mEEEC3DE040379D6D9823A2A625785113D203E4E1_gshared (PropertyBag_1_tDA117C10FEABA385803A90E976050FB2D270FAD2* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = VirtualFuncInvoker0< int32_t >::Invoke(8, __this);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 PropertyBag_1_Unity_Properties_IConstructorU3CTContainerU3E_Instantiate_m9B35EAAF17096B8F01DF18990590252DC81D2F70_gshared (PropertyBag_1_tDA117C10FEABA385803A90E976050FB2D270FAD2* __this, const RuntimeMethod* method) 
{
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_0;
		L_0 = VirtualFuncInvoker0< Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 >::Invoke(9, __this);
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PropertyBag_1_get_InstantiationKind_m7402A24E2472C5124BFDE138D0EDF5FC3B20D8B5_gshared (PropertyBag_1_tDA117C10FEABA385803A90E976050FB2D270FAD2* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CInstantiationKindU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 PropertyBag_1_Instantiate_m3C7BC7872E94EB0B081F947A87DA48616CB0D583_gshared (PropertyBag_1_tDA117C10FEABA385803A90E976050FB2D270FAD2* __this, const RuntimeMethod* method) 
{
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376));
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_0 = V_0;
		V_1 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_1 = V_1;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyBag_1__ctor_mD0545EB6A8F30FF94E8C8CE7AD6A4F0DF32CBE7C_gshared (PropertyBag_1_tDA117C10FEABA385803A90E976050FB2D270FAD2* __this, const RuntimeMethod* method) 
{
	{
		__this->___U3CInstantiationKindU3Ek__BackingField = (int32_t)0;
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyBag_1__cctor_m95401D85FD87F50D9ACC186628CD00BC5FBEFA2C_gshared (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		bool L_2;
		L_2 = TypeTraits_IsContainer_m46D04F3E3219371CC5F133E2CC54BCA46FD72505(L_1, NULL);
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0032;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_4, NULL);
		String_t* L_6;
		L_6 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBFD0F59F9F38A92660652CA5BE172EFCA8501E47)), (RuntimeObject*)L_5, NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_7 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_7, L_6, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, method);
	}

IL_0032:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyBag_1_Unity_Properties_Internal_IPropertyBagRegister_Register_m4CF374C66D129D382D608700B9E0193E8C0A8BE8_gshared (PropertyBag_1_tD11940BE9DAD74F61B141A397F3D5722E7FF2601* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_il2cpp_TypeInfo_var);
		PropertyBagStore_AddPropertyBag_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m6EDE42258DCE4DF0A4C10E8D44D305FA6C59AEB4((RuntimeObject*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyBag_1_Accept_mD9D7F588A62865ADE0AA83C22B1683BB6C7DDC5A_gshared (PropertyBag_1_tD11940BE9DAD74F61B141A397F3D5722E7FF2601* __this, RuntimeObject* ___0_visitor, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		RuntimeObject* L_0 = ___0_visitor;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC23725EE1ACD9996F8909AD0C76D39D2B4CB3ACA)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0015:
	{
		RuntimeObject* L_3 = ___0_visitor;
		NullCheck(L_3);
		GenericInterfaceActionInvoker0::Invoke(il2cpp_rgctx_method(method->klass->rgctx_data, 3), L_3);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PropertyBag_1_Unity_Properties_IConstructor_get_InstantiationKind_m92A84318FA2F65E1CF4FA7C7766DD63231BC602E_gshared (PropertyBag_1_tD11940BE9DAD74F61B141A397F3D5722E7FF2601* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = VirtualFuncInvoker0< int32_t >::Invoke(8, __this);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 PropertyBag_1_Unity_Properties_IConstructorU3CTContainerU3E_Instantiate_m01ABC746751E70540A71993D9965CC3B451A38C5_gshared (PropertyBag_1_tD11940BE9DAD74F61B141A397F3D5722E7FF2601* __this, const RuntimeMethod* method) 
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_0;
		L_0 = VirtualFuncInvoker0< Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 >::Invoke(9, __this);
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PropertyBag_1_get_InstantiationKind_m2D65A5B8843379129FB04EEF94AFB8A4FCA8E846_gshared (PropertyBag_1_tD11940BE9DAD74F61B141A397F3D5722E7FF2601* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CInstantiationKindU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 PropertyBag_1_Instantiate_mFA7DB211D8B2000F91C0C88D745E98841087BE6F_gshared (PropertyBag_1_tD11940BE9DAD74F61B141A397F3D5722E7FF2601* __this, const RuntimeMethod* method) 
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3));
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_0 = V_0;
		V_1 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_1 = V_1;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyBag_1__ctor_mB6FF3A98CDA8C851BC0FC108F95BF41644471439_gshared (PropertyBag_1_tD11940BE9DAD74F61B141A397F3D5722E7FF2601* __this, const RuntimeMethod* method) 
{
	{
		__this->___U3CInstantiationKindU3Ek__BackingField = (int32_t)0;
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyBag_1__cctor_m7132EB86C61D9CFCD8D60094ABF4791FCB0CD0B5_gshared (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		bool L_2;
		L_2 = TypeTraits_IsContainer_m46D04F3E3219371CC5F133E2CC54BCA46FD72505(L_1, NULL);
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0032;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_4, NULL);
		String_t* L_6;
		L_6 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBFD0F59F9F38A92660652CA5BE172EFCA8501E47)), (RuntimeObject*)L_5, NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_7 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_7, L_6, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, method);
	}

IL_0032:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyBag_1_Unity_Properties_Internal_IPropertyBagRegister_Register_m54B6F69083B35A3F7C301A639D48050B235A6D7F_gshared (PropertyBag_1_t74F4963AD6B656900B7CACFC37AC3CDDDF818409* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_il2cpp_TypeInfo_var);
		((  void (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))((RuntimeObject*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyBag_1_Accept_mB0872E61EC1AD02FC6F72F936F04557118FF271A_gshared (PropertyBag_1_t74F4963AD6B656900B7CACFC37AC3CDDDF818409* __this, RuntimeObject* ___0_visitor, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		RuntimeObject* L_0 = ___0_visitor;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC23725EE1ACD9996F8909AD0C76D39D2B4CB3ACA)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0015:
	{
		RuntimeObject* L_3 = ___0_visitor;
		NullCheck(L_3);
		GenericInterfaceActionInvoker0::Invoke(il2cpp_rgctx_method(method->klass->rgctx_data, 3), L_3);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PropertyBag_1_Unity_Properties_IConstructor_get_InstantiationKind_m2C299F894780F5CCB18B26BEF99C95EAC40D2C95_gshared (PropertyBag_1_t74F4963AD6B656900B7CACFC37AC3CDDDF818409* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = VirtualFuncInvoker0< int32_t >::Invoke(8, __this);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyBag_1_Unity_Properties_IConstructorU3CTContainerU3E_Instantiate_m8AB68F3EC8FB382C1A64FD54DF8E23CC2543E5EA_gshared (PropertyBag_1_t74F4963AD6B656900B7CACFC37AC3CDDDF818409* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TContainer_tDD41E5BDFD434E31190676C56EDFF26DCF9FB837 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TContainer_tDD41E5BDFD434E31190676C56EDFF26DCF9FB837);
	const Il2CppFullySharedGenericAny L_1 = L_0;
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_TContainer_tDD41E5BDFD434E31190676C56EDFF26DCF9FB837);
	memset(V_0, 0, SizeOf_TContainer_tDD41E5BDFD434E31190676C56EDFF26DCF9FB837);
	{
		VirtualActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(9, __this, (Il2CppFullySharedGenericAny*)L_0);
		il2cpp_codegen_memcpy(V_0, L_0, SizeOf_TContainer_tDD41E5BDFD434E31190676C56EDFF26DCF9FB837);
		goto IL_000a;
	}

IL_000a:
	{
		il2cpp_codegen_memcpy(L_1, V_0, SizeOf_TContainer_tDD41E5BDFD434E31190676C56EDFF26DCF9FB837);
		il2cpp_codegen_memcpy(il2cppRetVal, L_1, SizeOf_TContainer_tDD41E5BDFD434E31190676C56EDFF26DCF9FB837);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PropertyBag_1_get_InstantiationKind_m12E943B094001EC2736190825F084562FBE84235_gshared (PropertyBag_1_t74F4963AD6B656900B7CACFC37AC3CDDDF818409* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CInstantiationKindU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyBag_1_Instantiate_mD74F4CF48BC2E122C974C038AB838190C3988783_gshared (PropertyBag_1_t74F4963AD6B656900B7CACFC37AC3CDDDF818409* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TContainer_tDD41E5BDFD434E31190676C56EDFF26DCF9FB837 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TContainer_tDD41E5BDFD434E31190676C56EDFF26DCF9FB837);
	const Il2CppFullySharedGenericAny L_1 = L_0;
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_TContainer_tDD41E5BDFD434E31190676C56EDFF26DCF9FB837);
	memset(V_0, 0, SizeOf_TContainer_tDD41E5BDFD434E31190676C56EDFF26DCF9FB837);
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_TContainer_tDD41E5BDFD434E31190676C56EDFF26DCF9FB837);
	memset(V_1, 0, SizeOf_TContainer_tDD41E5BDFD434E31190676C56EDFF26DCF9FB837);
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_0, SizeOf_TContainer_tDD41E5BDFD434E31190676C56EDFF26DCF9FB837);
		il2cpp_codegen_memcpy(L_0, V_0, SizeOf_TContainer_tDD41E5BDFD434E31190676C56EDFF26DCF9FB837);
		il2cpp_codegen_memcpy(V_1, L_0, SizeOf_TContainer_tDD41E5BDFD434E31190676C56EDFF26DCF9FB837);
		goto IL_000d;
	}

IL_000d:
	{
		il2cpp_codegen_memcpy(L_1, V_1, SizeOf_TContainer_tDD41E5BDFD434E31190676C56EDFF26DCF9FB837);
		il2cpp_codegen_memcpy(il2cppRetVal, L_1, SizeOf_TContainer_tDD41E5BDFD434E31190676C56EDFF26DCF9FB837);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyBag_1__ctor_mF9D3CBA5488FDEB46B255A12E5CF4DDF4BD76175_gshared (PropertyBag_1_t74F4963AD6B656900B7CACFC37AC3CDDDF818409* __this, const RuntimeMethod* method) 
{
	{
		__this->___U3CInstantiationKindU3Ek__BackingField = (int32_t)0;
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
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
void PropertyGetter_2_Invoke_mA2DF6F1F8E7DF2AC8C5BFD7384AD0F1548DDA94C_Multicast(PropertyGetter_2_tD8230F45A3604AE20647869510A7F5AB8FD35963* __this, Il2CppFullySharedGenericAny* ___0_container, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		PropertyGetter_2_tD8230F45A3604AE20647869510A7F5AB8FD35963* currentDelegate = reinterpret_cast<PropertyGetter_2_tD8230F45A3604AE20647869510A7F5AB8FD35963*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_container, il2cppRetVal, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void PropertyGetter_2_Invoke_mA2DF6F1F8E7DF2AC8C5BFD7384AD0F1548DDA94C_OpenStaticInvoker(PropertyGetter_2_tD8230F45A3604AE20647869510A7F5AB8FD35963* __this, Il2CppFullySharedGenericAny* ___0_container, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	InvokerActionInvoker2< Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny* >::Invoke((Il2CppMethodPointer)__this->___method_ptr, method, NULL, ___0_container, il2cppRetVal);
}
void PropertyGetter_2_Invoke_mA2DF6F1F8E7DF2AC8C5BFD7384AD0F1548DDA94C_ClosedStaticInvoker(PropertyGetter_2_tD8230F45A3604AE20647869510A7F5AB8FD35963* __this, Il2CppFullySharedGenericAny* ___0_container, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny* >::Invoke((Il2CppMethodPointer)__this->___method_ptr, method, NULL, __this->___m_target, ___0_container, il2cppRetVal);
}
void PropertyGetter_2_Invoke_mA2DF6F1F8E7DF2AC8C5BFD7384AD0F1548DDA94C_ClosedInstInvoker(PropertyGetter_2_tD8230F45A3604AE20647869510A7F5AB8FD35963* __this, Il2CppFullySharedGenericAny* ___0_container, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	InvokerActionInvoker2< Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny* >::Invoke((Il2CppMethodPointer)__this->___method_ptr, method, __this->___m_target, ___0_container, il2cppRetVal);
}
void PropertyGetter_2_Invoke_mA2DF6F1F8E7DF2AC8C5BFD7384AD0F1548DDA94C_OpenInstInvoker(PropertyGetter_2_tD8230F45A3604AE20647869510A7F5AB8FD35963* __this, Il2CppFullySharedGenericAny* ___0_container, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	NullCheck(___0_container);
	InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke((Il2CppMethodPointer)__this->___method_ptr, method, ___0_container, il2cppRetVal);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyGetter_2__ctor_m3AA8F13AEB7368CF6AF57CA2D8F429F95D2DB765_gshared (PropertyGetter_2_tD8230F45A3604AE20647869510A7F5AB8FD35963* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&PropertyGetter_2_Invoke_mA2DF6F1F8E7DF2AC8C5BFD7384AD0F1548DDA94C_OpenStaticInvoker;
		else
			__this->___invoke_impl = (intptr_t)&PropertyGetter_2_Invoke_mA2DF6F1F8E7DF2AC8C5BFD7384AD0F1548DDA94C_ClosedStaticInvoker;
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			__this->___invoke_impl = (intptr_t)&PropertyGetter_2_Invoke_mA2DF6F1F8E7DF2AC8C5BFD7384AD0F1548DDA94C_OpenInstInvoker;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl = (intptr_t)&PropertyGetter_2_Invoke_mA2DF6F1F8E7DF2AC8C5BFD7384AD0F1548DDA94C_ClosedInstInvoker;
		}
	}
	__this->___extra_arg = (intptr_t)&PropertyGetter_2_Invoke_mA2DF6F1F8E7DF2AC8C5BFD7384AD0F1548DDA94C_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyGetter_2_Invoke_mA2DF6F1F8E7DF2AC8C5BFD7384AD0F1548DDA94C_gshared (PropertyGetter_2_tD8230F45A3604AE20647869510A7F5AB8FD35963* __this, Il2CppFullySharedGenericAny* ___0_container, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_container, il2cppRetVal, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void PropertySetter_2_Invoke_m4C2974B5500110AB1BE6A4E2F9448507587CE314_Multicast(PropertySetter_2_t797AB5E970C439127F7C26A99ECABAEB82F8DDDA* __this, Il2CppFullySharedGenericAny* ___0_container, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		PropertySetter_2_t797AB5E970C439127F7C26A99ECABAEB82F8DDDA* currentDelegate = reinterpret_cast<PropertySetter_2_t797AB5E970C439127F7C26A99ECABAEB82F8DDDA*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_container, ___1_value, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void PropertySetter_2_Invoke_m4C2974B5500110AB1BE6A4E2F9448507587CE314_OpenStaticInvoker(PropertySetter_2_t797AB5E970C439127F7C26A99ECABAEB82F8DDDA* __this, Il2CppFullySharedGenericAny* ___0_container, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method)
{
	InvokerActionInvoker2< Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny >::Invoke((Il2CppMethodPointer)__this->___method_ptr, method, NULL, ___0_container, ___1_value);
}
void PropertySetter_2_Invoke_m4C2974B5500110AB1BE6A4E2F9448507587CE314_ClosedStaticInvoker(PropertySetter_2_t797AB5E970C439127F7C26A99ECABAEB82F8DDDA* __this, Il2CppFullySharedGenericAny* ___0_container, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny >::Invoke((Il2CppMethodPointer)__this->___method_ptr, method, NULL, __this->___m_target, ___0_container, ___1_value);
}
void PropertySetter_2_Invoke_m4C2974B5500110AB1BE6A4E2F9448507587CE314_ClosedInstInvoker(PropertySetter_2_t797AB5E970C439127F7C26A99ECABAEB82F8DDDA* __this, Il2CppFullySharedGenericAny* ___0_container, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method)
{
	InvokerActionInvoker2< Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny >::Invoke((Il2CppMethodPointer)__this->___method_ptr, method, __this->___m_target, ___0_container, ___1_value);
}
void PropertySetter_2_Invoke_m4C2974B5500110AB1BE6A4E2F9448507587CE314_OpenInstInvoker(PropertySetter_2_t797AB5E970C439127F7C26A99ECABAEB82F8DDDA* __this, Il2CppFullySharedGenericAny* ___0_container, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method)
{
	NullCheck(___0_container);
	InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke((Il2CppMethodPointer)__this->___method_ptr, method, ___0_container, ___1_value);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertySetter_2__ctor_m869A0AE0095C563945302012D5189CD7C774B6BC_gshared (PropertySetter_2_t797AB5E970C439127F7C26A99ECABAEB82F8DDDA* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&PropertySetter_2_Invoke_m4C2974B5500110AB1BE6A4E2F9448507587CE314_OpenStaticInvoker;
		else
			__this->___invoke_impl = (intptr_t)&PropertySetter_2_Invoke_m4C2974B5500110AB1BE6A4E2F9448507587CE314_ClosedStaticInvoker;
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			__this->___invoke_impl = (intptr_t)&PropertySetter_2_Invoke_m4C2974B5500110AB1BE6A4E2F9448507587CE314_OpenInstInvoker;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl = (intptr_t)&PropertySetter_2_Invoke_m4C2974B5500110AB1BE6A4E2F9448507587CE314_ClosedInstInvoker;
		}
	}
	__this->___extra_arg = (intptr_t)&PropertySetter_2_Invoke_m4C2974B5500110AB1BE6A4E2F9448507587CE314_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertySetter_2_Invoke_m4C2974B5500110AB1BE6A4E2F9448507587CE314_gshared (PropertySetter_2_t797AB5E970C439127F7C26A99ECABAEB82F8DDDA* __this, Il2CppFullySharedGenericAny* ___0_container, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_container, ___1_value, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Property_2_DeclaredValueType_m0E06B95AFD3BFB6407F535ADA0C5A0B76748CBE4_gshared (Property_2_tC4748332B44E20FE7C498E90E74A718F89F44471* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Property_2_AddAttribute_m011369AEEC9CA572386584337F188363DCA56E7A_gshared (Property_2_tC4748332B44E20FE7C498E90E74A718F89F44471* __this, Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* ___0_attribute, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_0 = ___0_attribute;
		NullCheck((RuntimeObject*)__this);
		InterfaceActionInvoker1< Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* >::Invoke(0, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, (RuntimeObject*)__this, L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Property_2_AddAttributes_m3836B58FE89ECA189011D47FD206A8B791A7789E_gshared (Property_2_tC4748332B44E20FE7C498E90E74A718F89F44471* __this, RuntimeObject* ___0_attributes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_attributes;
		NullCheck((RuntimeObject*)__this);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, (RuntimeObject*)__this, L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Property_2_Unity_Properties_Internal_IAttributes_AddAttribute_m269A7A54BAE146A1DE03EB54B68201AA66FFA4EC_gshared (Property_2_tC4748332B44E20FE7C498E90E74A718F89F44471* __this, Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* ___0_attribute, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CreatePropertyAttribute_t481619BD84F5E29767718DE127DD1E781A3B6F92_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mB0CF48862666913FBBF40D44568593A6D82F7EA2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m8735FFC7B95F1AA11A04DC5F5E6AA77BAAD94D66_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	{
		Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_0 = ___0_attribute;
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_1 = ___0_attribute;
		NullCheck((RuntimeObject*)L_1);
		Type_t* L_2;
		L_2 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_1, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (CreatePropertyAttribute_t481619BD84F5E29767718DE127DD1E781A3B6F92_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_2, L_4, NULL);
		G_B3_0 = ((int32_t)(L_5));
		goto IL_001c;
	}

IL_001b:
	{
		G_B3_0 = 1;
	}

IL_001c:
	{
		V_0 = (bool)G_B3_0;
		bool L_6 = V_0;
		if (!L_6)
		{
			goto IL_0022;
		}
	}
	{
		goto IL_0047;
	}

IL_0022:
	{
		List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* L_7 = __this->___m_Attributes;
		V_1 = (bool)((((RuntimeObject*)(List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715*)L_7) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_8 = V_1;
		if (!L_8)
		{
			goto IL_003a;
		}
	}
	{
		List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* L_9 = (List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715*)il2cpp_codegen_object_new(List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715_il2cpp_TypeInfo_var);
		List_1__ctor_m8735FFC7B95F1AA11A04DC5F5E6AA77BAAD94D66(L_9, List_1__ctor_m8735FFC7B95F1AA11A04DC5F5E6AA77BAAD94D66_RuntimeMethod_var);
		__this->___m_Attributes = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Attributes), (void*)L_9);
	}

IL_003a:
	{
		List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* L_10 = __this->___m_Attributes;
		Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_11 = ___0_attribute;
		NullCheck(L_10);
		List_1_Add_mB0CF48862666913FBBF40D44568593A6D82F7EA2_inline(L_10, L_11, List_1_Add_mB0CF48862666913FBBF40D44568593A6D82F7EA2_RuntimeMethod_var);
	}

IL_0047:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Property_2_Unity_Properties_Internal_IAttributes_AddAttributes_m674D80F86F95E8F4BE851109285AAC13B4DDEB0F_gshared (Property_2_tC4748332B44E20FE7C498E90E74A718F89F44471* __this, RuntimeObject* ___0_attributes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CreatePropertyAttribute_t481619BD84F5E29767718DE127DD1E781A3B6F92_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tF5487DDC9BFE72D77C0A279762BD5851F02B4F03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tE3FBD2D20AA88C9A0F855ADC37B0F385A3ADC2C1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mB0CF48862666913FBBF40D44568593A6D82F7EA2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m8735FFC7B95F1AA11A04DC5F5E6AA77BAAD94D66_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RuntimeObject* V_1 = NULL;
	Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* V_2 = NULL;
	bool V_3 = false;
	int32_t G_B7_0 = 0;
	{
		List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* L_0 = __this->___m_Attributes;
		V_0 = (bool)((((RuntimeObject*)(List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* L_2 = (List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715*)il2cpp_codegen_object_new(List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715_il2cpp_TypeInfo_var);
		List_1__ctor_m8735FFC7B95F1AA11A04DC5F5E6AA77BAAD94D66(L_2, List_1__ctor_m8735FFC7B95F1AA11A04DC5F5E6AA77BAAD94D66_RuntimeMethod_var);
		__this->___m_Attributes = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Attributes), (void*)L_2);
	}

IL_0019:
	{
		RuntimeObject* L_3 = ___0_attributes;
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IEnumerable_1_tF5487DDC9BFE72D77C0A279762BD5851F02B4F03_il2cpp_TypeInfo_var, L_3);
		V_1 = L_4;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0064:
			{
				{
					RuntimeObject* L_5 = V_1;
					if (!L_5)
					{
						goto IL_006e;
					}
				}
				{
					RuntimeObject* L_6 = V_1;
					NullCheck((RuntimeObject*)L_6);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_6);
				}

IL_006e:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_005a_1;
			}

IL_0023_1:
			{
				RuntimeObject* L_7 = V_1;
				NullCheck(L_7);
				Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_8;
				L_8 = InterfaceFuncInvoker0< Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* >::Invoke(0, IEnumerator_1_tE3FBD2D20AA88C9A0F855ADC37B0F385A3ADC2C1_il2cpp_TypeInfo_var, L_7);
				V_2 = L_8;
				Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_9 = V_2;
				if (!L_9)
				{
					goto IL_0045_1;
				}
			}
			{
				Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_10 = V_2;
				NullCheck((RuntimeObject*)L_10);
				Type_t* L_11;
				L_11 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_10, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_12 = { reinterpret_cast<intptr_t> (CreatePropertyAttribute_t481619BD84F5E29767718DE127DD1E781A3B6F92_0_0_0_var) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_13;
				L_13 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_12, NULL);
				bool L_14;
				L_14 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_13, NULL);
				G_B7_0 = ((int32_t)(L_14));
				goto IL_0046_1;
			}

IL_0045_1:
			{
				G_B7_0 = 1;
			}

IL_0046_1:
			{
				V_3 = (bool)G_B7_0;
				bool L_15 = V_3;
				if (!L_15)
				{
					goto IL_004c_1;
				}
			}
			{
				goto IL_005a_1;
			}

IL_004c_1:
			{
				List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* L_16 = __this->___m_Attributes;
				Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_17 = V_2;
				NullCheck(L_16);
				List_1_Add_mB0CF48862666913FBBF40D44568593A6D82F7EA2_inline(L_16, L_17, List_1_Add_mB0CF48862666913FBBF40D44568593A6D82F7EA2_RuntimeMethod_var);
			}

IL_005a_1:
			{
				RuntimeObject* L_18 = V_1;
				NullCheck((RuntimeObject*)L_18);
				bool L_19;
				L_19 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_18);
				if (L_19)
				{
					goto IL_0023_1;
				}
			}
			{
				goto IL_006f;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_006f:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Property_2__ctor_m6D93F660253A4C7EC344945B11B74A1EC5E2052B_gshared (Property_2_tC4748332B44E20FE7C498E90E74A718F89F44471* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Property_2_DeclaredValueType_m952FA1152B004F3B2BE8C76BE3716E5514090240_gshared (Property_2_tAB010676E84B6005B47BB524D152BA4859373D2D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Property_2_AddAttribute_m999BF052A1A6E31093707D665302D69489EE22AD_gshared (Property_2_tAB010676E84B6005B47BB524D152BA4859373D2D* __this, Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* ___0_attribute, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_0 = ___0_attribute;
		NullCheck((RuntimeObject*)__this);
		InterfaceActionInvoker1< Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* >::Invoke(0, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, (RuntimeObject*)__this, L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Property_2_AddAttributes_mE71253D52DB9483B2AACB0F68D9570BEE3E964A6_gshared (Property_2_tAB010676E84B6005B47BB524D152BA4859373D2D* __this, RuntimeObject* ___0_attributes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_attributes;
		NullCheck((RuntimeObject*)__this);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, (RuntimeObject*)__this, L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Property_2_Unity_Properties_Internal_IAttributes_AddAttribute_m252115A8DB29A80FE01E2F40F6478D522B0F72E1_gshared (Property_2_tAB010676E84B6005B47BB524D152BA4859373D2D* __this, Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* ___0_attribute, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CreatePropertyAttribute_t481619BD84F5E29767718DE127DD1E781A3B6F92_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mB0CF48862666913FBBF40D44568593A6D82F7EA2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m8735FFC7B95F1AA11A04DC5F5E6AA77BAAD94D66_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	{
		Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_0 = ___0_attribute;
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_1 = ___0_attribute;
		NullCheck((RuntimeObject*)L_1);
		Type_t* L_2;
		L_2 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_1, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (CreatePropertyAttribute_t481619BD84F5E29767718DE127DD1E781A3B6F92_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_2, L_4, NULL);
		G_B3_0 = ((int32_t)(L_5));
		goto IL_001c;
	}

IL_001b:
	{
		G_B3_0 = 1;
	}

IL_001c:
	{
		V_0 = (bool)G_B3_0;
		bool L_6 = V_0;
		if (!L_6)
		{
			goto IL_0022;
		}
	}
	{
		goto IL_0047;
	}

IL_0022:
	{
		List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* L_7 = __this->___m_Attributes;
		V_1 = (bool)((((RuntimeObject*)(List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715*)L_7) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_8 = V_1;
		if (!L_8)
		{
			goto IL_003a;
		}
	}
	{
		List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* L_9 = (List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715*)il2cpp_codegen_object_new(List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715_il2cpp_TypeInfo_var);
		List_1__ctor_m8735FFC7B95F1AA11A04DC5F5E6AA77BAAD94D66(L_9, List_1__ctor_m8735FFC7B95F1AA11A04DC5F5E6AA77BAAD94D66_RuntimeMethod_var);
		__this->___m_Attributes = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Attributes), (void*)L_9);
	}

IL_003a:
	{
		List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* L_10 = __this->___m_Attributes;
		Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_11 = ___0_attribute;
		NullCheck(L_10);
		List_1_Add_mB0CF48862666913FBBF40D44568593A6D82F7EA2_inline(L_10, L_11, List_1_Add_mB0CF48862666913FBBF40D44568593A6D82F7EA2_RuntimeMethod_var);
	}

IL_0047:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Property_2_Unity_Properties_Internal_IAttributes_AddAttributes_m5269B25965C17B7537C2F8C272504A58872B737E_gshared (Property_2_tAB010676E84B6005B47BB524D152BA4859373D2D* __this, RuntimeObject* ___0_attributes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CreatePropertyAttribute_t481619BD84F5E29767718DE127DD1E781A3B6F92_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tF5487DDC9BFE72D77C0A279762BD5851F02B4F03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tE3FBD2D20AA88C9A0F855ADC37B0F385A3ADC2C1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mB0CF48862666913FBBF40D44568593A6D82F7EA2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m8735FFC7B95F1AA11A04DC5F5E6AA77BAAD94D66_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RuntimeObject* V_1 = NULL;
	Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* V_2 = NULL;
	bool V_3 = false;
	int32_t G_B7_0 = 0;
	{
		List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* L_0 = __this->___m_Attributes;
		V_0 = (bool)((((RuntimeObject*)(List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* L_2 = (List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715*)il2cpp_codegen_object_new(List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715_il2cpp_TypeInfo_var);
		List_1__ctor_m8735FFC7B95F1AA11A04DC5F5E6AA77BAAD94D66(L_2, List_1__ctor_m8735FFC7B95F1AA11A04DC5F5E6AA77BAAD94D66_RuntimeMethod_var);
		__this->___m_Attributes = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Attributes), (void*)L_2);
	}

IL_0019:
	{
		RuntimeObject* L_3 = ___0_attributes;
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IEnumerable_1_tF5487DDC9BFE72D77C0A279762BD5851F02B4F03_il2cpp_TypeInfo_var, L_3);
		V_1 = L_4;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0064:
			{
				{
					RuntimeObject* L_5 = V_1;
					if (!L_5)
					{
						goto IL_006e;
					}
				}
				{
					RuntimeObject* L_6 = V_1;
					NullCheck((RuntimeObject*)L_6);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_6);
				}

IL_006e:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_005a_1;
			}

IL_0023_1:
			{
				RuntimeObject* L_7 = V_1;
				NullCheck(L_7);
				Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_8;
				L_8 = InterfaceFuncInvoker0< Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* >::Invoke(0, IEnumerator_1_tE3FBD2D20AA88C9A0F855ADC37B0F385A3ADC2C1_il2cpp_TypeInfo_var, L_7);
				V_2 = L_8;
				Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_9 = V_2;
				if (!L_9)
				{
					goto IL_0045_1;
				}
			}
			{
				Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_10 = V_2;
				NullCheck((RuntimeObject*)L_10);
				Type_t* L_11;
				L_11 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_10, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_12 = { reinterpret_cast<intptr_t> (CreatePropertyAttribute_t481619BD84F5E29767718DE127DD1E781A3B6F92_0_0_0_var) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_13;
				L_13 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_12, NULL);
				bool L_14;
				L_14 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_13, NULL);
				G_B7_0 = ((int32_t)(L_14));
				goto IL_0046_1;
			}

IL_0045_1:
			{
				G_B7_0 = 1;
			}

IL_0046_1:
			{
				V_3 = (bool)G_B7_0;
				bool L_15 = V_3;
				if (!L_15)
				{
					goto IL_004c_1;
				}
			}
			{
				goto IL_005a_1;
			}

IL_004c_1:
			{
				List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* L_16 = __this->___m_Attributes;
				Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_17 = V_2;
				NullCheck(L_16);
				List_1_Add_mB0CF48862666913FBBF40D44568593A6D82F7EA2_inline(L_16, L_17, List_1_Add_mB0CF48862666913FBBF40D44568593A6D82F7EA2_RuntimeMethod_var);
			}

IL_005a_1:
			{
				RuntimeObject* L_18 = V_1;
				NullCheck((RuntimeObject*)L_18);
				bool L_19;
				L_19 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_18);
				if (L_19)
				{
					goto IL_0023_1;
				}
			}
			{
				goto IL_006f;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_006f:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Property_2__ctor_m6CCA84842C767E1068B2F635177225E05FFE539B_gshared (Property_2_tAB010676E84B6005B47BB524D152BA4859373D2D* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Property_2_DeclaredValueType_mD93FC21A0D7134E235380B4B10EF986E636E930B_gshared (Property_2_tBEC632CE0FBA6F323B365C780F1F4C4C62A850ED* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Property_2_AddAttribute_m2C016149BFFF085B859EF01E53CB23D09A61966D_gshared (Property_2_tBEC632CE0FBA6F323B365C780F1F4C4C62A850ED* __this, Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* ___0_attribute, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_0 = ___0_attribute;
		NullCheck((RuntimeObject*)__this);
		InterfaceActionInvoker1< Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* >::Invoke(0, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, (RuntimeObject*)__this, L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Property_2_AddAttributes_m9C9FFA86F4E0054E6833148483FF697C9C8E949B_gshared (Property_2_tBEC632CE0FBA6F323B365C780F1F4C4C62A850ED* __this, RuntimeObject* ___0_attributes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_attributes;
		NullCheck((RuntimeObject*)__this);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, (RuntimeObject*)__this, L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Property_2_Unity_Properties_Internal_IAttributes_AddAttribute_m71997087D28ECDDACD6019ED56CE72BA0CA9F1D6_gshared (Property_2_tBEC632CE0FBA6F323B365C780F1F4C4C62A850ED* __this, Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* ___0_attribute, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CreatePropertyAttribute_t481619BD84F5E29767718DE127DD1E781A3B6F92_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mB0CF48862666913FBBF40D44568593A6D82F7EA2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m8735FFC7B95F1AA11A04DC5F5E6AA77BAAD94D66_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	{
		Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_0 = ___0_attribute;
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_1 = ___0_attribute;
		NullCheck((RuntimeObject*)L_1);
		Type_t* L_2;
		L_2 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_1, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (CreatePropertyAttribute_t481619BD84F5E29767718DE127DD1E781A3B6F92_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_2, L_4, NULL);
		G_B3_0 = ((int32_t)(L_5));
		goto IL_001c;
	}

IL_001b:
	{
		G_B3_0 = 1;
	}

IL_001c:
	{
		V_0 = (bool)G_B3_0;
		bool L_6 = V_0;
		if (!L_6)
		{
			goto IL_0022;
		}
	}
	{
		goto IL_0047;
	}

IL_0022:
	{
		List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* L_7 = __this->___m_Attributes;
		V_1 = (bool)((((RuntimeObject*)(List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715*)L_7) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_8 = V_1;
		if (!L_8)
		{
			goto IL_003a;
		}
	}
	{
		List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* L_9 = (List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715*)il2cpp_codegen_object_new(List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715_il2cpp_TypeInfo_var);
		List_1__ctor_m8735FFC7B95F1AA11A04DC5F5E6AA77BAAD94D66(L_9, List_1__ctor_m8735FFC7B95F1AA11A04DC5F5E6AA77BAAD94D66_RuntimeMethod_var);
		__this->___m_Attributes = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Attributes), (void*)L_9);
	}

IL_003a:
	{
		List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* L_10 = __this->___m_Attributes;
		Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_11 = ___0_attribute;
		NullCheck(L_10);
		List_1_Add_mB0CF48862666913FBBF40D44568593A6D82F7EA2_inline(L_10, L_11, List_1_Add_mB0CF48862666913FBBF40D44568593A6D82F7EA2_RuntimeMethod_var);
	}

IL_0047:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Property_2_Unity_Properties_Internal_IAttributes_AddAttributes_m1FCAF0DBF98FB2028C4F0B96936E64D51EA7B798_gshared (Property_2_tBEC632CE0FBA6F323B365C780F1F4C4C62A850ED* __this, RuntimeObject* ___0_attributes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CreatePropertyAttribute_t481619BD84F5E29767718DE127DD1E781A3B6F92_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tF5487DDC9BFE72D77C0A279762BD5851F02B4F03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tE3FBD2D20AA88C9A0F855ADC37B0F385A3ADC2C1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mB0CF48862666913FBBF40D44568593A6D82F7EA2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m8735FFC7B95F1AA11A04DC5F5E6AA77BAAD94D66_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RuntimeObject* V_1 = NULL;
	Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* V_2 = NULL;
	bool V_3 = false;
	int32_t G_B7_0 = 0;
	{
		List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* L_0 = __this->___m_Attributes;
		V_0 = (bool)((((RuntimeObject*)(List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* L_2 = (List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715*)il2cpp_codegen_object_new(List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715_il2cpp_TypeInfo_var);
		List_1__ctor_m8735FFC7B95F1AA11A04DC5F5E6AA77BAAD94D66(L_2, List_1__ctor_m8735FFC7B95F1AA11A04DC5F5E6AA77BAAD94D66_RuntimeMethod_var);
		__this->___m_Attributes = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Attributes), (void*)L_2);
	}

IL_0019:
	{
		RuntimeObject* L_3 = ___0_attributes;
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IEnumerable_1_tF5487DDC9BFE72D77C0A279762BD5851F02B4F03_il2cpp_TypeInfo_var, L_3);
		V_1 = L_4;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0064:
			{
				{
					RuntimeObject* L_5 = V_1;
					if (!L_5)
					{
						goto IL_006e;
					}
				}
				{
					RuntimeObject* L_6 = V_1;
					NullCheck((RuntimeObject*)L_6);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_6);
				}

IL_006e:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_005a_1;
			}

IL_0023_1:
			{
				RuntimeObject* L_7 = V_1;
				NullCheck(L_7);
				Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_8;
				L_8 = InterfaceFuncInvoker0< Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* >::Invoke(0, IEnumerator_1_tE3FBD2D20AA88C9A0F855ADC37B0F385A3ADC2C1_il2cpp_TypeInfo_var, L_7);
				V_2 = L_8;
				Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_9 = V_2;
				if (!L_9)
				{
					goto IL_0045_1;
				}
			}
			{
				Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_10 = V_2;
				NullCheck((RuntimeObject*)L_10);
				Type_t* L_11;
				L_11 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_10, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_12 = { reinterpret_cast<intptr_t> (CreatePropertyAttribute_t481619BD84F5E29767718DE127DD1E781A3B6F92_0_0_0_var) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_13;
				L_13 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_12, NULL);
				bool L_14;
				L_14 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_13, NULL);
				G_B7_0 = ((int32_t)(L_14));
				goto IL_0046_1;
			}

IL_0045_1:
			{
				G_B7_0 = 1;
			}

IL_0046_1:
			{
				V_3 = (bool)G_B7_0;
				bool L_15 = V_3;
				if (!L_15)
				{
					goto IL_004c_1;
				}
			}
			{
				goto IL_005a_1;
			}

IL_004c_1:
			{
				List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* L_16 = __this->___m_Attributes;
				Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_17 = V_2;
				NullCheck(L_16);
				List_1_Add_mB0CF48862666913FBBF40D44568593A6D82F7EA2_inline(L_16, L_17, List_1_Add_mB0CF48862666913FBBF40D44568593A6D82F7EA2_RuntimeMethod_var);
			}

IL_005a_1:
			{
				RuntimeObject* L_18 = V_1;
				NullCheck((RuntimeObject*)L_18);
				bool L_19;
				L_19 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_18);
				if (L_19)
				{
					goto IL_0023_1;
				}
			}
			{
				goto IL_006f;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_006f:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Property_2__ctor_m9DFCB7BFC31E1148DCB249D7707DF37707F6268F_gshared (Property_2_tBEC632CE0FBA6F323B365C780F1F4C4C62A850ED* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Property_2_DeclaredValueType_m64BAB5094CE737076AEEAE6A2881DF20B8BA4DA0_gshared (Property_2_t4214D5666464CEE51F044573A59C738C2D562085* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Property_2_AddAttribute_m7BE72727942237415CA702C9A13E7BB9CB108E58_gshared (Property_2_t4214D5666464CEE51F044573A59C738C2D562085* __this, Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* ___0_attribute, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_0 = ___0_attribute;
		NullCheck((RuntimeObject*)__this);
		InterfaceActionInvoker1< Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* >::Invoke(0, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, (RuntimeObject*)__this, L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Property_2_AddAttributes_m333EA61400D181A83535545399D085C68413EFBB_gshared (Property_2_t4214D5666464CEE51F044573A59C738C2D562085* __this, RuntimeObject* ___0_attributes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_attributes;
		NullCheck((RuntimeObject*)__this);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, (RuntimeObject*)__this, L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Property_2_Unity_Properties_Internal_IAttributes_AddAttribute_m345D4F0D3ED55A1D83A17B712F821CDF258BC9AA_gshared (Property_2_t4214D5666464CEE51F044573A59C738C2D562085* __this, Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* ___0_attribute, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CreatePropertyAttribute_t481619BD84F5E29767718DE127DD1E781A3B6F92_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mB0CF48862666913FBBF40D44568593A6D82F7EA2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m8735FFC7B95F1AA11A04DC5F5E6AA77BAAD94D66_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	{
		Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_0 = ___0_attribute;
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_1 = ___0_attribute;
		NullCheck((RuntimeObject*)L_1);
		Type_t* L_2;
		L_2 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_1, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (CreatePropertyAttribute_t481619BD84F5E29767718DE127DD1E781A3B6F92_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_2, L_4, NULL);
		G_B3_0 = ((int32_t)(L_5));
		goto IL_001c;
	}

IL_001b:
	{
		G_B3_0 = 1;
	}

IL_001c:
	{
		V_0 = (bool)G_B3_0;
		bool L_6 = V_0;
		if (!L_6)
		{
			goto IL_0022;
		}
	}
	{
		goto IL_0047;
	}

IL_0022:
	{
		List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* L_7 = __this->___m_Attributes;
		V_1 = (bool)((((RuntimeObject*)(List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715*)L_7) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_8 = V_1;
		if (!L_8)
		{
			goto IL_003a;
		}
	}
	{
		List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* L_9 = (List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715*)il2cpp_codegen_object_new(List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715_il2cpp_TypeInfo_var);
		List_1__ctor_m8735FFC7B95F1AA11A04DC5F5E6AA77BAAD94D66(L_9, List_1__ctor_m8735FFC7B95F1AA11A04DC5F5E6AA77BAAD94D66_RuntimeMethod_var);
		__this->___m_Attributes = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Attributes), (void*)L_9);
	}

IL_003a:
	{
		List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* L_10 = __this->___m_Attributes;
		Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_11 = ___0_attribute;
		NullCheck(L_10);
		List_1_Add_mB0CF48862666913FBBF40D44568593A6D82F7EA2_inline(L_10, L_11, List_1_Add_mB0CF48862666913FBBF40D44568593A6D82F7EA2_RuntimeMethod_var);
	}

IL_0047:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Property_2_Unity_Properties_Internal_IAttributes_AddAttributes_m454C34A3F222DC0B4F5C9DD9D80153752ADD2BEF_gshared (Property_2_t4214D5666464CEE51F044573A59C738C2D562085* __this, RuntimeObject* ___0_attributes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CreatePropertyAttribute_t481619BD84F5E29767718DE127DD1E781A3B6F92_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tF5487DDC9BFE72D77C0A279762BD5851F02B4F03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tE3FBD2D20AA88C9A0F855ADC37B0F385A3ADC2C1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mB0CF48862666913FBBF40D44568593A6D82F7EA2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m8735FFC7B95F1AA11A04DC5F5E6AA77BAAD94D66_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RuntimeObject* V_1 = NULL;
	Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* V_2 = NULL;
	bool V_3 = false;
	int32_t G_B7_0 = 0;
	{
		List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* L_0 = __this->___m_Attributes;
		V_0 = (bool)((((RuntimeObject*)(List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* L_2 = (List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715*)il2cpp_codegen_object_new(List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715_il2cpp_TypeInfo_var);
		List_1__ctor_m8735FFC7B95F1AA11A04DC5F5E6AA77BAAD94D66(L_2, List_1__ctor_m8735FFC7B95F1AA11A04DC5F5E6AA77BAAD94D66_RuntimeMethod_var);
		__this->___m_Attributes = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Attributes), (void*)L_2);
	}

IL_0019:
	{
		RuntimeObject* L_3 = ___0_attributes;
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IEnumerable_1_tF5487DDC9BFE72D77C0A279762BD5851F02B4F03_il2cpp_TypeInfo_var, L_3);
		V_1 = L_4;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0064:
			{
				{
					RuntimeObject* L_5 = V_1;
					if (!L_5)
					{
						goto IL_006e;
					}
				}
				{
					RuntimeObject* L_6 = V_1;
					NullCheck((RuntimeObject*)L_6);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_6);
				}

IL_006e:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_005a_1;
			}

IL_0023_1:
			{
				RuntimeObject* L_7 = V_1;
				NullCheck(L_7);
				Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_8;
				L_8 = InterfaceFuncInvoker0< Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* >::Invoke(0, IEnumerator_1_tE3FBD2D20AA88C9A0F855ADC37B0F385A3ADC2C1_il2cpp_TypeInfo_var, L_7);
				V_2 = L_8;
				Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_9 = V_2;
				if (!L_9)
				{
					goto IL_0045_1;
				}
			}
			{
				Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_10 = V_2;
				NullCheck((RuntimeObject*)L_10);
				Type_t* L_11;
				L_11 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_10, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_12 = { reinterpret_cast<intptr_t> (CreatePropertyAttribute_t481619BD84F5E29767718DE127DD1E781A3B6F92_0_0_0_var) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_13;
				L_13 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_12, NULL);
				bool L_14;
				L_14 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_13, NULL);
				G_B7_0 = ((int32_t)(L_14));
				goto IL_0046_1;
			}

IL_0045_1:
			{
				G_B7_0 = 1;
			}

IL_0046_1:
			{
				V_3 = (bool)G_B7_0;
				bool L_15 = V_3;
				if (!L_15)
				{
					goto IL_004c_1;
				}
			}
			{
				goto IL_005a_1;
			}

IL_004c_1:
			{
				List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* L_16 = __this->___m_Attributes;
				Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_17 = V_2;
				NullCheck(L_16);
				List_1_Add_mB0CF48862666913FBBF40D44568593A6D82F7EA2_inline(L_16, L_17, List_1_Add_mB0CF48862666913FBBF40D44568593A6D82F7EA2_RuntimeMethod_var);
			}

IL_005a_1:
			{
				RuntimeObject* L_18 = V_1;
				NullCheck((RuntimeObject*)L_18);
				bool L_19;
				L_19 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_18);
				if (L_19)
				{
					goto IL_0023_1;
				}
			}
			{
				goto IL_006f;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_006f:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Property_2__ctor_m8513F2C4ED671798A7491909C328236F38A1AEB3_gshared (Property_2_t4214D5666464CEE51F044573A59C738C2D562085* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Property_2_DeclaredValueType_m9837C29A8649CFB5A5CBD7592F84F61C215D7657_gshared (Property_2_t4395571972396AEE0D2671461D1603BB8D296451* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Property_2_AddAttribute_m3808B038B63C06DC35A66E3C3E2BB18386239895_gshared (Property_2_t4395571972396AEE0D2671461D1603BB8D296451* __this, Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* ___0_attribute, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_0 = ___0_attribute;
		NullCheck((RuntimeObject*)__this);
		InterfaceActionInvoker1< Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* >::Invoke(0, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, (RuntimeObject*)__this, L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Property_2_AddAttributes_m5FD19C7D09DA98F7AA368E44B649D628D7A73F4C_gshared (Property_2_t4395571972396AEE0D2671461D1603BB8D296451* __this, RuntimeObject* ___0_attributes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_attributes;
		NullCheck((RuntimeObject*)__this);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, (RuntimeObject*)__this, L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Property_2_Unity_Properties_Internal_IAttributes_AddAttribute_mF1228649AC75A47102FCF1982FEC2EC8E94A25C0_gshared (Property_2_t4395571972396AEE0D2671461D1603BB8D296451* __this, Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* ___0_attribute, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CreatePropertyAttribute_t481619BD84F5E29767718DE127DD1E781A3B6F92_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mB0CF48862666913FBBF40D44568593A6D82F7EA2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m8735FFC7B95F1AA11A04DC5F5E6AA77BAAD94D66_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	{
		Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_0 = ___0_attribute;
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_1 = ___0_attribute;
		NullCheck((RuntimeObject*)L_1);
		Type_t* L_2;
		L_2 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_1, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (CreatePropertyAttribute_t481619BD84F5E29767718DE127DD1E781A3B6F92_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_2, L_4, NULL);
		G_B3_0 = ((int32_t)(L_5));
		goto IL_001c;
	}

IL_001b:
	{
		G_B3_0 = 1;
	}

IL_001c:
	{
		V_0 = (bool)G_B3_0;
		bool L_6 = V_0;
		if (!L_6)
		{
			goto IL_0022;
		}
	}
	{
		goto IL_0047;
	}

IL_0022:
	{
		List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* L_7 = __this->___m_Attributes;
		V_1 = (bool)((((RuntimeObject*)(List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715*)L_7) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_8 = V_1;
		if (!L_8)
		{
			goto IL_003a;
		}
	}
	{
		List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* L_9 = (List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715*)il2cpp_codegen_object_new(List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715_il2cpp_TypeInfo_var);
		List_1__ctor_m8735FFC7B95F1AA11A04DC5F5E6AA77BAAD94D66(L_9, List_1__ctor_m8735FFC7B95F1AA11A04DC5F5E6AA77BAAD94D66_RuntimeMethod_var);
		__this->___m_Attributes = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Attributes), (void*)L_9);
	}

IL_003a:
	{
		List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* L_10 = __this->___m_Attributes;
		Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_11 = ___0_attribute;
		NullCheck(L_10);
		List_1_Add_mB0CF48862666913FBBF40D44568593A6D82F7EA2_inline(L_10, L_11, List_1_Add_mB0CF48862666913FBBF40D44568593A6D82F7EA2_RuntimeMethod_var);
	}

IL_0047:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Property_2_Unity_Properties_Internal_IAttributes_AddAttributes_m629086C478AEDD6249C9FFED051EA5243F5D13A7_gshared (Property_2_t4395571972396AEE0D2671461D1603BB8D296451* __this, RuntimeObject* ___0_attributes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CreatePropertyAttribute_t481619BD84F5E29767718DE127DD1E781A3B6F92_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tF5487DDC9BFE72D77C0A279762BD5851F02B4F03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tE3FBD2D20AA88C9A0F855ADC37B0F385A3ADC2C1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mB0CF48862666913FBBF40D44568593A6D82F7EA2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m8735FFC7B95F1AA11A04DC5F5E6AA77BAAD94D66_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RuntimeObject* V_1 = NULL;
	Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* V_2 = NULL;
	bool V_3 = false;
	int32_t G_B7_0 = 0;
	{
		List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* L_0 = __this->___m_Attributes;
		V_0 = (bool)((((RuntimeObject*)(List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* L_2 = (List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715*)il2cpp_codegen_object_new(List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715_il2cpp_TypeInfo_var);
		List_1__ctor_m8735FFC7B95F1AA11A04DC5F5E6AA77BAAD94D66(L_2, List_1__ctor_m8735FFC7B95F1AA11A04DC5F5E6AA77BAAD94D66_RuntimeMethod_var);
		__this->___m_Attributes = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Attributes), (void*)L_2);
	}

IL_0019:
	{
		RuntimeObject* L_3 = ___0_attributes;
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IEnumerable_1_tF5487DDC9BFE72D77C0A279762BD5851F02B4F03_il2cpp_TypeInfo_var, L_3);
		V_1 = L_4;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0064:
			{
				{
					RuntimeObject* L_5 = V_1;
					if (!L_5)
					{
						goto IL_006e;
					}
				}
				{
					RuntimeObject* L_6 = V_1;
					NullCheck((RuntimeObject*)L_6);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_6);
				}

IL_006e:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_005a_1;
			}

IL_0023_1:
			{
				RuntimeObject* L_7 = V_1;
				NullCheck(L_7);
				Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_8;
				L_8 = InterfaceFuncInvoker0< Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* >::Invoke(0, IEnumerator_1_tE3FBD2D20AA88C9A0F855ADC37B0F385A3ADC2C1_il2cpp_TypeInfo_var, L_7);
				V_2 = L_8;
				Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_9 = V_2;
				if (!L_9)
				{
					goto IL_0045_1;
				}
			}
			{
				Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_10 = V_2;
				NullCheck((RuntimeObject*)L_10);
				Type_t* L_11;
				L_11 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_10, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_12 = { reinterpret_cast<intptr_t> (CreatePropertyAttribute_t481619BD84F5E29767718DE127DD1E781A3B6F92_0_0_0_var) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_13;
				L_13 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_12, NULL);
				bool L_14;
				L_14 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_13, NULL);
				G_B7_0 = ((int32_t)(L_14));
				goto IL_0046_1;
			}

IL_0045_1:
			{
				G_B7_0 = 1;
			}

IL_0046_1:
			{
				V_3 = (bool)G_B7_0;
				bool L_15 = V_3;
				if (!L_15)
				{
					goto IL_004c_1;
				}
			}
			{
				goto IL_005a_1;
			}

IL_004c_1:
			{
				List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* L_16 = __this->___m_Attributes;
				Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_17 = V_2;
				NullCheck(L_16);
				List_1_Add_mB0CF48862666913FBBF40D44568593A6D82F7EA2_inline(L_16, L_17, List_1_Add_mB0CF48862666913FBBF40D44568593A6D82F7EA2_RuntimeMethod_var);
			}

IL_005a_1:
			{
				RuntimeObject* L_18 = V_1;
				NullCheck((RuntimeObject*)L_18);
				bool L_19;
				L_19 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_18);
				if (L_19)
				{
					goto IL_0023_1;
				}
			}
			{
				goto IL_006f;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_006f:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Property_2__ctor_m5FD6858E5CA7D5DCC0B4B383932EA1FA640FD0C0_gshared (Property_2_t4395571972396AEE0D2671461D1603BB8D296451* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Property_2_DeclaredValueType_mC26036EF975DB6194706EB4411FC0716BEF15214_gshared (Property_2_tE0D61821CEE6E9C49C6C1BCAD5F62D78A24F7A56* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Property_2_AddAttribute_m66C5635D4F91525B79203E7D07D3C217E851A494_gshared (Property_2_tE0D61821CEE6E9C49C6C1BCAD5F62D78A24F7A56* __this, Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* ___0_attribute, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_0 = ___0_attribute;
		NullCheck((RuntimeObject*)__this);
		InterfaceActionInvoker1< Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* >::Invoke(0, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, (RuntimeObject*)__this, L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Property_2_AddAttributes_mBB05DEFF1CD139A50252C2081C49019A8B8ADF04_gshared (Property_2_tE0D61821CEE6E9C49C6C1BCAD5F62D78A24F7A56* __this, RuntimeObject* ___0_attributes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_attributes;
		NullCheck((RuntimeObject*)__this);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, (RuntimeObject*)__this, L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Property_2_Unity_Properties_Internal_IAttributes_AddAttribute_m670C119823F5BB0686D7CC65FF23C33D358A576E_gshared (Property_2_tE0D61821CEE6E9C49C6C1BCAD5F62D78A24F7A56* __this, Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* ___0_attribute, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CreatePropertyAttribute_t481619BD84F5E29767718DE127DD1E781A3B6F92_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mB0CF48862666913FBBF40D44568593A6D82F7EA2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m8735FFC7B95F1AA11A04DC5F5E6AA77BAAD94D66_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	{
		Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_0 = ___0_attribute;
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_1 = ___0_attribute;
		NullCheck((RuntimeObject*)L_1);
		Type_t* L_2;
		L_2 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_1, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (CreatePropertyAttribute_t481619BD84F5E29767718DE127DD1E781A3B6F92_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_2, L_4, NULL);
		G_B3_0 = ((int32_t)(L_5));
		goto IL_001c;
	}

IL_001b:
	{
		G_B3_0 = 1;
	}

IL_001c:
	{
		V_0 = (bool)G_B3_0;
		bool L_6 = V_0;
		if (!L_6)
		{
			goto IL_0022;
		}
	}
	{
		goto IL_0047;
	}

IL_0022:
	{
		List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* L_7 = __this->___m_Attributes;
		V_1 = (bool)((((RuntimeObject*)(List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715*)L_7) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_8 = V_1;
		if (!L_8)
		{
			goto IL_003a;
		}
	}
	{
		List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* L_9 = (List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715*)il2cpp_codegen_object_new(List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715_il2cpp_TypeInfo_var);
		List_1__ctor_m8735FFC7B95F1AA11A04DC5F5E6AA77BAAD94D66(L_9, List_1__ctor_m8735FFC7B95F1AA11A04DC5F5E6AA77BAAD94D66_RuntimeMethod_var);
		__this->___m_Attributes = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Attributes), (void*)L_9);
	}

IL_003a:
	{
		List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* L_10 = __this->___m_Attributes;
		Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_11 = ___0_attribute;
		NullCheck(L_10);
		List_1_Add_mB0CF48862666913FBBF40D44568593A6D82F7EA2_inline(L_10, L_11, List_1_Add_mB0CF48862666913FBBF40D44568593A6D82F7EA2_RuntimeMethod_var);
	}

IL_0047:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Property_2_Unity_Properties_Internal_IAttributes_AddAttributes_mE0EC056FE9207666C6751BA2ED86E0B66154117C_gshared (Property_2_tE0D61821CEE6E9C49C6C1BCAD5F62D78A24F7A56* __this, RuntimeObject* ___0_attributes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CreatePropertyAttribute_t481619BD84F5E29767718DE127DD1E781A3B6F92_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tF5487DDC9BFE72D77C0A279762BD5851F02B4F03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tE3FBD2D20AA88C9A0F855ADC37B0F385A3ADC2C1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mB0CF48862666913FBBF40D44568593A6D82F7EA2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m8735FFC7B95F1AA11A04DC5F5E6AA77BAAD94D66_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RuntimeObject* V_1 = NULL;
	Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* V_2 = NULL;
	bool V_3 = false;
	int32_t G_B7_0 = 0;
	{
		List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* L_0 = __this->___m_Attributes;
		V_0 = (bool)((((RuntimeObject*)(List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* L_2 = (List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715*)il2cpp_codegen_object_new(List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715_il2cpp_TypeInfo_var);
		List_1__ctor_m8735FFC7B95F1AA11A04DC5F5E6AA77BAAD94D66(L_2, List_1__ctor_m8735FFC7B95F1AA11A04DC5F5E6AA77BAAD94D66_RuntimeMethod_var);
		__this->___m_Attributes = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Attributes), (void*)L_2);
	}

IL_0019:
	{
		RuntimeObject* L_3 = ___0_attributes;
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IEnumerable_1_tF5487DDC9BFE72D77C0A279762BD5851F02B4F03_il2cpp_TypeInfo_var, L_3);
		V_1 = L_4;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0064:
			{
				{
					RuntimeObject* L_5 = V_1;
					if (!L_5)
					{
						goto IL_006e;
					}
				}
				{
					RuntimeObject* L_6 = V_1;
					NullCheck((RuntimeObject*)L_6);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_6);
				}

IL_006e:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_005a_1;
			}

IL_0023_1:
			{
				RuntimeObject* L_7 = V_1;
				NullCheck(L_7);
				Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_8;
				L_8 = InterfaceFuncInvoker0< Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* >::Invoke(0, IEnumerator_1_tE3FBD2D20AA88C9A0F855ADC37B0F385A3ADC2C1_il2cpp_TypeInfo_var, L_7);
				V_2 = L_8;
				Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_9 = V_2;
				if (!L_9)
				{
					goto IL_0045_1;
				}
			}
			{
				Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_10 = V_2;
				NullCheck((RuntimeObject*)L_10);
				Type_t* L_11;
				L_11 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_10, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_12 = { reinterpret_cast<intptr_t> (CreatePropertyAttribute_t481619BD84F5E29767718DE127DD1E781A3B6F92_0_0_0_var) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_13;
				L_13 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_12, NULL);
				bool L_14;
				L_14 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_13, NULL);
				G_B7_0 = ((int32_t)(L_14));
				goto IL_0046_1;
			}

IL_0045_1:
			{
				G_B7_0 = 1;
			}

IL_0046_1:
			{
				V_3 = (bool)G_B7_0;
				bool L_15 = V_3;
				if (!L_15)
				{
					goto IL_004c_1;
				}
			}
			{
				goto IL_005a_1;
			}

IL_004c_1:
			{
				List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* L_16 = __this->___m_Attributes;
				Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_17 = V_2;
				NullCheck(L_16);
				List_1_Add_mB0CF48862666913FBBF40D44568593A6D82F7EA2_inline(L_16, L_17, List_1_Add_mB0CF48862666913FBBF40D44568593A6D82F7EA2_RuntimeMethod_var);
			}

IL_005a_1:
			{
				RuntimeObject* L_18 = V_1;
				NullCheck((RuntimeObject*)L_18);
				bool L_19;
				L_19 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_18);
				if (L_19)
				{
					goto IL_0023_1;
				}
			}
			{
				goto IL_006f;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_006f:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Property_2__ctor_m9FB84C0814943DA6AF990699BADA5411E3D18230_gshared (Property_2_tE0D61821CEE6E9C49C6C1BCAD5F62D78A24F7A56* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Property_2_DeclaredValueType_mF21F8284BDB1E79EA44744245D8E8D336D1D4052_gshared (Property_2_t4CA8B837C8B5E5C163CFFA715548D9980679EC46* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Property_2_AddAttribute_m6A4E40DA5C1A5058C132C0264020730F2C11286A_gshared (Property_2_t4CA8B837C8B5E5C163CFFA715548D9980679EC46* __this, Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* ___0_attribute, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_0 = ___0_attribute;
		NullCheck((RuntimeObject*)__this);
		InterfaceActionInvoker1< Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* >::Invoke(0, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, (RuntimeObject*)__this, L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Property_2_AddAttributes_mBC4A4358132996CDD6D8B2D5142D5BB99249C6B5_gshared (Property_2_t4CA8B837C8B5E5C163CFFA715548D9980679EC46* __this, RuntimeObject* ___0_attributes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_attributes;
		NullCheck((RuntimeObject*)__this);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, (RuntimeObject*)__this, L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Property_2_Unity_Properties_Internal_IAttributes_AddAttribute_m5514D57B752F4F1903E78467DC8AE5F66ADF14A4_gshared (Property_2_t4CA8B837C8B5E5C163CFFA715548D9980679EC46* __this, Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* ___0_attribute, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CreatePropertyAttribute_t481619BD84F5E29767718DE127DD1E781A3B6F92_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mB0CF48862666913FBBF40D44568593A6D82F7EA2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m8735FFC7B95F1AA11A04DC5F5E6AA77BAAD94D66_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	{
		Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_0 = ___0_attribute;
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_1 = ___0_attribute;
		NullCheck((RuntimeObject*)L_1);
		Type_t* L_2;
		L_2 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_1, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (CreatePropertyAttribute_t481619BD84F5E29767718DE127DD1E781A3B6F92_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_2, L_4, NULL);
		G_B3_0 = ((int32_t)(L_5));
		goto IL_001c;
	}

IL_001b:
	{
		G_B3_0 = 1;
	}

IL_001c:
	{
		V_0 = (bool)G_B3_0;
		bool L_6 = V_0;
		if (!L_6)
		{
			goto IL_0022;
		}
	}
	{
		goto IL_0047;
	}

IL_0022:
	{
		List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* L_7 = __this->___m_Attributes;
		V_1 = (bool)((((RuntimeObject*)(List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715*)L_7) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_8 = V_1;
		if (!L_8)
		{
			goto IL_003a;
		}
	}
	{
		List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* L_9 = (List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715*)il2cpp_codegen_object_new(List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715_il2cpp_TypeInfo_var);
		List_1__ctor_m8735FFC7B95F1AA11A04DC5F5E6AA77BAAD94D66(L_9, List_1__ctor_m8735FFC7B95F1AA11A04DC5F5E6AA77BAAD94D66_RuntimeMethod_var);
		__this->___m_Attributes = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Attributes), (void*)L_9);
	}

IL_003a:
	{
		List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* L_10 = __this->___m_Attributes;
		Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_11 = ___0_attribute;
		NullCheck(L_10);
		List_1_Add_mB0CF48862666913FBBF40D44568593A6D82F7EA2_inline(L_10, L_11, List_1_Add_mB0CF48862666913FBBF40D44568593A6D82F7EA2_RuntimeMethod_var);
	}

IL_0047:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Property_2_Unity_Properties_Internal_IAttributes_AddAttributes_mDE7B7780A40869E6CC54EF9237D37A466BEB3687_gshared (Property_2_t4CA8B837C8B5E5C163CFFA715548D9980679EC46* __this, RuntimeObject* ___0_attributes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CreatePropertyAttribute_t481619BD84F5E29767718DE127DD1E781A3B6F92_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tF5487DDC9BFE72D77C0A279762BD5851F02B4F03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tE3FBD2D20AA88C9A0F855ADC37B0F385A3ADC2C1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mB0CF48862666913FBBF40D44568593A6D82F7EA2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m8735FFC7B95F1AA11A04DC5F5E6AA77BAAD94D66_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RuntimeObject* V_1 = NULL;
	Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* V_2 = NULL;
	bool V_3 = false;
	int32_t G_B7_0 = 0;
	{
		List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* L_0 = __this->___m_Attributes;
		V_0 = (bool)((((RuntimeObject*)(List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* L_2 = (List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715*)il2cpp_codegen_object_new(List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715_il2cpp_TypeInfo_var);
		List_1__ctor_m8735FFC7B95F1AA11A04DC5F5E6AA77BAAD94D66(L_2, List_1__ctor_m8735FFC7B95F1AA11A04DC5F5E6AA77BAAD94D66_RuntimeMethod_var);
		__this->___m_Attributes = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Attributes), (void*)L_2);
	}

IL_0019:
	{
		RuntimeObject* L_3 = ___0_attributes;
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IEnumerable_1_tF5487DDC9BFE72D77C0A279762BD5851F02B4F03_il2cpp_TypeInfo_var, L_3);
		V_1 = L_4;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0064:
			{
				{
					RuntimeObject* L_5 = V_1;
					if (!L_5)
					{
						goto IL_006e;
					}
				}
				{
					RuntimeObject* L_6 = V_1;
					NullCheck((RuntimeObject*)L_6);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_6);
				}

IL_006e:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_005a_1;
			}

IL_0023_1:
			{
				RuntimeObject* L_7 = V_1;
				NullCheck(L_7);
				Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_8;
				L_8 = InterfaceFuncInvoker0< Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* >::Invoke(0, IEnumerator_1_tE3FBD2D20AA88C9A0F855ADC37B0F385A3ADC2C1_il2cpp_TypeInfo_var, L_7);
				V_2 = L_8;
				Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_9 = V_2;
				if (!L_9)
				{
					goto IL_0045_1;
				}
			}
			{
				Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_10 = V_2;
				NullCheck((RuntimeObject*)L_10);
				Type_t* L_11;
				L_11 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_10, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_12 = { reinterpret_cast<intptr_t> (CreatePropertyAttribute_t481619BD84F5E29767718DE127DD1E781A3B6F92_0_0_0_var) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_13;
				L_13 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_12, NULL);
				bool L_14;
				L_14 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_13, NULL);
				G_B7_0 = ((int32_t)(L_14));
				goto IL_0046_1;
			}

IL_0045_1:
			{
				G_B7_0 = 1;
			}

IL_0046_1:
			{
				V_3 = (bool)G_B7_0;
				bool L_15 = V_3;
				if (!L_15)
				{
					goto IL_004c_1;
				}
			}
			{
				goto IL_005a_1;
			}

IL_004c_1:
			{
				List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* L_16 = __this->___m_Attributes;
				Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_17 = V_2;
				NullCheck(L_16);
				List_1_Add_mB0CF48862666913FBBF40D44568593A6D82F7EA2_inline(L_16, L_17, List_1_Add_mB0CF48862666913FBBF40D44568593A6D82F7EA2_RuntimeMethod_var);
			}

IL_005a_1:
			{
				RuntimeObject* L_18 = V_1;
				NullCheck((RuntimeObject*)L_18);
				bool L_19;
				L_19 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_18);
				if (L_19)
				{
					goto IL_0023_1;
				}
			}
			{
				goto IL_006f;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_006f:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Property_2__ctor_mE2253FF920B6B8BA104EB3F4C6E8A871A34892E7_gshared (Property_2_t4CA8B837C8B5E5C163CFFA715548D9980679EC46* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Property_2_DeclaredValueType_m46F2F242BBEA29441FDEF387FCCB0BF10EBC33D0_gshared (Property_2_tC1A1D28677DB791F77E60F16E0A734BE3616141F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Property_2_AddAttribute_mFDF973FEBA5997D0BF372E207E91B40309CE71FE_gshared (Property_2_tC1A1D28677DB791F77E60F16E0A734BE3616141F* __this, Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* ___0_attribute, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_0 = ___0_attribute;
		NullCheck((RuntimeObject*)__this);
		InterfaceActionInvoker1< Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* >::Invoke(0, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, (RuntimeObject*)__this, L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Property_2_AddAttributes_m4E31070937A76E016C2FB59C32C841F51E4CB6A6_gshared (Property_2_tC1A1D28677DB791F77E60F16E0A734BE3616141F* __this, RuntimeObject* ___0_attributes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_attributes;
		NullCheck((RuntimeObject*)__this);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, (RuntimeObject*)__this, L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Property_2_Unity_Properties_Internal_IAttributes_AddAttribute_mDEC30180332501C4D9B62ED9628E21924A7BB03B_gshared (Property_2_tC1A1D28677DB791F77E60F16E0A734BE3616141F* __this, Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* ___0_attribute, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CreatePropertyAttribute_t481619BD84F5E29767718DE127DD1E781A3B6F92_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mB0CF48862666913FBBF40D44568593A6D82F7EA2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m8735FFC7B95F1AA11A04DC5F5E6AA77BAAD94D66_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	{
		Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_0 = ___0_attribute;
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_1 = ___0_attribute;
		NullCheck((RuntimeObject*)L_1);
		Type_t* L_2;
		L_2 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_1, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (CreatePropertyAttribute_t481619BD84F5E29767718DE127DD1E781A3B6F92_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_2, L_4, NULL);
		G_B3_0 = ((int32_t)(L_5));
		goto IL_001c;
	}

IL_001b:
	{
		G_B3_0 = 1;
	}

IL_001c:
	{
		V_0 = (bool)G_B3_0;
		bool L_6 = V_0;
		if (!L_6)
		{
			goto IL_0022;
		}
	}
	{
		goto IL_0047;
	}

IL_0022:
	{
		List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* L_7 = __this->___m_Attributes;
		V_1 = (bool)((((RuntimeObject*)(List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715*)L_7) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_8 = V_1;
		if (!L_8)
		{
			goto IL_003a;
		}
	}
	{
		List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* L_9 = (List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715*)il2cpp_codegen_object_new(List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715_il2cpp_TypeInfo_var);
		List_1__ctor_m8735FFC7B95F1AA11A04DC5F5E6AA77BAAD94D66(L_9, List_1__ctor_m8735FFC7B95F1AA11A04DC5F5E6AA77BAAD94D66_RuntimeMethod_var);
		__this->___m_Attributes = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Attributes), (void*)L_9);
	}

IL_003a:
	{
		List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* L_10 = __this->___m_Attributes;
		Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_11 = ___0_attribute;
		NullCheck(L_10);
		List_1_Add_mB0CF48862666913FBBF40D44568593A6D82F7EA2_inline(L_10, L_11, List_1_Add_mB0CF48862666913FBBF40D44568593A6D82F7EA2_RuntimeMethod_var);
	}

IL_0047:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Property_2_Unity_Properties_Internal_IAttributes_AddAttributes_m857969E020EE8BD0EB990E73A3028486DF5DE4FA_gshared (Property_2_tC1A1D28677DB791F77E60F16E0A734BE3616141F* __this, RuntimeObject* ___0_attributes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CreatePropertyAttribute_t481619BD84F5E29767718DE127DD1E781A3B6F92_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tF5487DDC9BFE72D77C0A279762BD5851F02B4F03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tE3FBD2D20AA88C9A0F855ADC37B0F385A3ADC2C1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mB0CF48862666913FBBF40D44568593A6D82F7EA2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m8735FFC7B95F1AA11A04DC5F5E6AA77BAAD94D66_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RuntimeObject* V_1 = NULL;
	Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* V_2 = NULL;
	bool V_3 = false;
	int32_t G_B7_0 = 0;
	{
		List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* L_0 = __this->___m_Attributes;
		V_0 = (bool)((((RuntimeObject*)(List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* L_2 = (List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715*)il2cpp_codegen_object_new(List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715_il2cpp_TypeInfo_var);
		List_1__ctor_m8735FFC7B95F1AA11A04DC5F5E6AA77BAAD94D66(L_2, List_1__ctor_m8735FFC7B95F1AA11A04DC5F5E6AA77BAAD94D66_RuntimeMethod_var);
		__this->___m_Attributes = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Attributes), (void*)L_2);
	}

IL_0019:
	{
		RuntimeObject* L_3 = ___0_attributes;
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IEnumerable_1_tF5487DDC9BFE72D77C0A279762BD5851F02B4F03_il2cpp_TypeInfo_var, L_3);
		V_1 = L_4;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0064:
			{
				{
					RuntimeObject* L_5 = V_1;
					if (!L_5)
					{
						goto IL_006e;
					}
				}
				{
					RuntimeObject* L_6 = V_1;
					NullCheck((RuntimeObject*)L_6);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_6);
				}

IL_006e:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_005a_1;
			}

IL_0023_1:
			{
				RuntimeObject* L_7 = V_1;
				NullCheck(L_7);
				Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_8;
				L_8 = InterfaceFuncInvoker0< Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* >::Invoke(0, IEnumerator_1_tE3FBD2D20AA88C9A0F855ADC37B0F385A3ADC2C1_il2cpp_TypeInfo_var, L_7);
				V_2 = L_8;
				Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_9 = V_2;
				if (!L_9)
				{
					goto IL_0045_1;
				}
			}
			{
				Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_10 = V_2;
				NullCheck((RuntimeObject*)L_10);
				Type_t* L_11;
				L_11 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_10, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_12 = { reinterpret_cast<intptr_t> (CreatePropertyAttribute_t481619BD84F5E29767718DE127DD1E781A3B6F92_0_0_0_var) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_13;
				L_13 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_12, NULL);
				bool L_14;
				L_14 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_13, NULL);
				G_B7_0 = ((int32_t)(L_14));
				goto IL_0046_1;
			}

IL_0045_1:
			{
				G_B7_0 = 1;
			}

IL_0046_1:
			{
				V_3 = (bool)G_B7_0;
				bool L_15 = V_3;
				if (!L_15)
				{
					goto IL_004c_1;
				}
			}
			{
				goto IL_005a_1;
			}

IL_004c_1:
			{
				List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* L_16 = __this->___m_Attributes;
				Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_17 = V_2;
				NullCheck(L_16);
				List_1_Add_mB0CF48862666913FBBF40D44568593A6D82F7EA2_inline(L_16, L_17, List_1_Add_mB0CF48862666913FBBF40D44568593A6D82F7EA2_RuntimeMethod_var);
			}

IL_005a_1:
			{
				RuntimeObject* L_18 = V_1;
				NullCheck((RuntimeObject*)L_18);
				bool L_19;
				L_19 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_18);
				if (L_19)
				{
					goto IL_0023_1;
				}
			}
			{
				goto IL_006f;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_006f:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Property_2__ctor_m0053E84A8D6B34BFDAB7795833421AF8A4F0BAEE_gshared (Property_2_tC1A1D28677DB791F77E60F16E0A734BE3616141F* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Property_2_DeclaredValueType_m09BF4AD760E2B656D5E47875008A72E2DE3E9288_gshared (Property_2_tDFB93AAC56F8B372E59EEACF0AD971295487CCEA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Property_2_AddAttribute_m3890685C371BB749CAC70097ED86C21D465EBAB7_gshared (Property_2_tDFB93AAC56F8B372E59EEACF0AD971295487CCEA* __this, Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* ___0_attribute, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_0 = ___0_attribute;
		NullCheck((RuntimeObject*)__this);
		InterfaceActionInvoker1< Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* >::Invoke(0, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, (RuntimeObject*)__this, L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Property_2_AddAttributes_mA1D41E751B76604F9C28B265B4C61B5A9FBA9227_gshared (Property_2_tDFB93AAC56F8B372E59EEACF0AD971295487CCEA* __this, RuntimeObject* ___0_attributes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_attributes;
		NullCheck((RuntimeObject*)__this);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, (RuntimeObject*)__this, L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Property_2_Unity_Properties_Internal_IAttributes_AddAttribute_m8A9B28E0C604C908B6B82B14BCA8FEF04864A87E_gshared (Property_2_tDFB93AAC56F8B372E59EEACF0AD971295487CCEA* __this, Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* ___0_attribute, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CreatePropertyAttribute_t481619BD84F5E29767718DE127DD1E781A3B6F92_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mB0CF48862666913FBBF40D44568593A6D82F7EA2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m8735FFC7B95F1AA11A04DC5F5E6AA77BAAD94D66_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	{
		Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_0 = ___0_attribute;
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_1 = ___0_attribute;
		NullCheck((RuntimeObject*)L_1);
		Type_t* L_2;
		L_2 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_1, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (CreatePropertyAttribute_t481619BD84F5E29767718DE127DD1E781A3B6F92_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_2, L_4, NULL);
		G_B3_0 = ((int32_t)(L_5));
		goto IL_001c;
	}

IL_001b:
	{
		G_B3_0 = 1;
	}

IL_001c:
	{
		V_0 = (bool)G_B3_0;
		bool L_6 = V_0;
		if (!L_6)
		{
			goto IL_0022;
		}
	}
	{
		goto IL_0047;
	}

IL_0022:
	{
		List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* L_7 = __this->___m_Attributes;
		V_1 = (bool)((((RuntimeObject*)(List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715*)L_7) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_8 = V_1;
		if (!L_8)
		{
			goto IL_003a;
		}
	}
	{
		List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* L_9 = (List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715*)il2cpp_codegen_object_new(List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715_il2cpp_TypeInfo_var);
		List_1__ctor_m8735FFC7B95F1AA11A04DC5F5E6AA77BAAD94D66(L_9, List_1__ctor_m8735FFC7B95F1AA11A04DC5F5E6AA77BAAD94D66_RuntimeMethod_var);
		__this->___m_Attributes = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Attributes), (void*)L_9);
	}

IL_003a:
	{
		List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* L_10 = __this->___m_Attributes;
		Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_11 = ___0_attribute;
		NullCheck(L_10);
		List_1_Add_mB0CF48862666913FBBF40D44568593A6D82F7EA2_inline(L_10, L_11, List_1_Add_mB0CF48862666913FBBF40D44568593A6D82F7EA2_RuntimeMethod_var);
	}

IL_0047:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Property_2_Unity_Properties_Internal_IAttributes_AddAttributes_mA0C2C6D7CBE60CC4AA3395C2E07F240DD4328F18_gshared (Property_2_tDFB93AAC56F8B372E59EEACF0AD971295487CCEA* __this, RuntimeObject* ___0_attributes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CreatePropertyAttribute_t481619BD84F5E29767718DE127DD1E781A3B6F92_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tF5487DDC9BFE72D77C0A279762BD5851F02B4F03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tE3FBD2D20AA88C9A0F855ADC37B0F385A3ADC2C1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mB0CF48862666913FBBF40D44568593A6D82F7EA2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m8735FFC7B95F1AA11A04DC5F5E6AA77BAAD94D66_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RuntimeObject* V_1 = NULL;
	Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* V_2 = NULL;
	bool V_3 = false;
	int32_t G_B7_0 = 0;
	{
		List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* L_0 = __this->___m_Attributes;
		V_0 = (bool)((((RuntimeObject*)(List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* L_2 = (List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715*)il2cpp_codegen_object_new(List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715_il2cpp_TypeInfo_var);
		List_1__ctor_m8735FFC7B95F1AA11A04DC5F5E6AA77BAAD94D66(L_2, List_1__ctor_m8735FFC7B95F1AA11A04DC5F5E6AA77BAAD94D66_RuntimeMethod_var);
		__this->___m_Attributes = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Attributes), (void*)L_2);
	}

IL_0019:
	{
		RuntimeObject* L_3 = ___0_attributes;
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IEnumerable_1_tF5487DDC9BFE72D77C0A279762BD5851F02B4F03_il2cpp_TypeInfo_var, L_3);
		V_1 = L_4;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0064:
			{
				{
					RuntimeObject* L_5 = V_1;
					if (!L_5)
					{
						goto IL_006e;
					}
				}
				{
					RuntimeObject* L_6 = V_1;
					NullCheck((RuntimeObject*)L_6);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_6);
				}

IL_006e:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_005a_1;
			}

IL_0023_1:
			{
				RuntimeObject* L_7 = V_1;
				NullCheck(L_7);
				Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_8;
				L_8 = InterfaceFuncInvoker0< Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* >::Invoke(0, IEnumerator_1_tE3FBD2D20AA88C9A0F855ADC37B0F385A3ADC2C1_il2cpp_TypeInfo_var, L_7);
				V_2 = L_8;
				Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_9 = V_2;
				if (!L_9)
				{
					goto IL_0045_1;
				}
			}
			{
				Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_10 = V_2;
				NullCheck((RuntimeObject*)L_10);
				Type_t* L_11;
				L_11 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_10, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_12 = { reinterpret_cast<intptr_t> (CreatePropertyAttribute_t481619BD84F5E29767718DE127DD1E781A3B6F92_0_0_0_var) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_13;
				L_13 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_12, NULL);
				bool L_14;
				L_14 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_13, NULL);
				G_B7_0 = ((int32_t)(L_14));
				goto IL_0046_1;
			}

IL_0045_1:
			{
				G_B7_0 = 1;
			}

IL_0046_1:
			{
				V_3 = (bool)G_B7_0;
				bool L_15 = V_3;
				if (!L_15)
				{
					goto IL_004c_1;
				}
			}
			{
				goto IL_005a_1;
			}

IL_004c_1:
			{
				List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* L_16 = __this->___m_Attributes;
				Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_17 = V_2;
				NullCheck(L_16);
				List_1_Add_mB0CF48862666913FBBF40D44568593A6D82F7EA2_inline(L_16, L_17, List_1_Add_mB0CF48862666913FBBF40D44568593A6D82F7EA2_RuntimeMethod_var);
			}

IL_005a_1:
			{
				RuntimeObject* L_18 = V_1;
				NullCheck((RuntimeObject*)L_18);
				bool L_19;
				L_19 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_18);
				if (L_19)
				{
					goto IL_0023_1;
				}
			}
			{
				goto IL_006f;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_006f:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Property_2__ctor_m00887E3260117C76E2592EEB152472A442E5ECFF_gshared (Property_2_tDFB93AAC56F8B372E59EEACF0AD971295487CCEA* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Property_2_DeclaredValueType_mD8F107C8F0A6717C0EC3626A712FCF81500B3DC5_gshared (Property_2_t69BB6E67D83C59343BA1D7DCC6BDE82B297986D1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Property_2_AddAttribute_mC32A7C2E4B84CBF2D68D081A4CFC8BC6B47067FC_gshared (Property_2_t69BB6E67D83C59343BA1D7DCC6BDE82B297986D1* __this, Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* ___0_attribute, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_0 = ___0_attribute;
		NullCheck((RuntimeObject*)__this);
		InterfaceActionInvoker1< Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* >::Invoke(0, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, (RuntimeObject*)__this, L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Property_2_AddAttributes_m00858C4ADF153B82B94BB64B8DE1639655A9A901_gshared (Property_2_t69BB6E67D83C59343BA1D7DCC6BDE82B297986D1* __this, RuntimeObject* ___0_attributes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_attributes;
		NullCheck((RuntimeObject*)__this);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, (RuntimeObject*)__this, L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Property_2_Unity_Properties_Internal_IAttributes_AddAttribute_m777B7E27071EFD266198FB94EDD873DABAC6E633_gshared (Property_2_t69BB6E67D83C59343BA1D7DCC6BDE82B297986D1* __this, Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* ___0_attribute, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CreatePropertyAttribute_t481619BD84F5E29767718DE127DD1E781A3B6F92_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mB0CF48862666913FBBF40D44568593A6D82F7EA2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m8735FFC7B95F1AA11A04DC5F5E6AA77BAAD94D66_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	{
		Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_0 = ___0_attribute;
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_1 = ___0_attribute;
		NullCheck((RuntimeObject*)L_1);
		Type_t* L_2;
		L_2 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_1, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (CreatePropertyAttribute_t481619BD84F5E29767718DE127DD1E781A3B6F92_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_2, L_4, NULL);
		G_B3_0 = ((int32_t)(L_5));
		goto IL_001c;
	}

IL_001b:
	{
		G_B3_0 = 1;
	}

IL_001c:
	{
		V_0 = (bool)G_B3_0;
		bool L_6 = V_0;
		if (!L_6)
		{
			goto IL_0022;
		}
	}
	{
		goto IL_0047;
	}

IL_0022:
	{
		List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* L_7 = __this->___m_Attributes;
		V_1 = (bool)((((RuntimeObject*)(List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715*)L_7) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_8 = V_1;
		if (!L_8)
		{
			goto IL_003a;
		}
	}
	{
		List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* L_9 = (List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715*)il2cpp_codegen_object_new(List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715_il2cpp_TypeInfo_var);
		List_1__ctor_m8735FFC7B95F1AA11A04DC5F5E6AA77BAAD94D66(L_9, List_1__ctor_m8735FFC7B95F1AA11A04DC5F5E6AA77BAAD94D66_RuntimeMethod_var);
		__this->___m_Attributes = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Attributes), (void*)L_9);
	}

IL_003a:
	{
		List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* L_10 = __this->___m_Attributes;
		Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_11 = ___0_attribute;
		NullCheck(L_10);
		List_1_Add_mB0CF48862666913FBBF40D44568593A6D82F7EA2_inline(L_10, L_11, List_1_Add_mB0CF48862666913FBBF40D44568593A6D82F7EA2_RuntimeMethod_var);
	}

IL_0047:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Property_2_Unity_Properties_Internal_IAttributes_AddAttributes_mB7BD4C5BD69A4B294423591F3FB25A0E09B32A7E_gshared (Property_2_t69BB6E67D83C59343BA1D7DCC6BDE82B297986D1* __this, RuntimeObject* ___0_attributes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CreatePropertyAttribute_t481619BD84F5E29767718DE127DD1E781A3B6F92_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tF5487DDC9BFE72D77C0A279762BD5851F02B4F03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tE3FBD2D20AA88C9A0F855ADC37B0F385A3ADC2C1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mB0CF48862666913FBBF40D44568593A6D82F7EA2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m8735FFC7B95F1AA11A04DC5F5E6AA77BAAD94D66_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RuntimeObject* V_1 = NULL;
	Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* V_2 = NULL;
	bool V_3 = false;
	int32_t G_B7_0 = 0;
	{
		List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* L_0 = __this->___m_Attributes;
		V_0 = (bool)((((RuntimeObject*)(List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* L_2 = (List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715*)il2cpp_codegen_object_new(List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715_il2cpp_TypeInfo_var);
		List_1__ctor_m8735FFC7B95F1AA11A04DC5F5E6AA77BAAD94D66(L_2, List_1__ctor_m8735FFC7B95F1AA11A04DC5F5E6AA77BAAD94D66_RuntimeMethod_var);
		__this->___m_Attributes = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Attributes), (void*)L_2);
	}

IL_0019:
	{
		RuntimeObject* L_3 = ___0_attributes;
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IEnumerable_1_tF5487DDC9BFE72D77C0A279762BD5851F02B4F03_il2cpp_TypeInfo_var, L_3);
		V_1 = L_4;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0064:
			{
				{
					RuntimeObject* L_5 = V_1;
					if (!L_5)
					{
						goto IL_006e;
					}
				}
				{
					RuntimeObject* L_6 = V_1;
					NullCheck((RuntimeObject*)L_6);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_6);
				}

IL_006e:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_005a_1;
			}

IL_0023_1:
			{
				RuntimeObject* L_7 = V_1;
				NullCheck(L_7);
				Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_8;
				L_8 = InterfaceFuncInvoker0< Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* >::Invoke(0, IEnumerator_1_tE3FBD2D20AA88C9A0F855ADC37B0F385A3ADC2C1_il2cpp_TypeInfo_var, L_7);
				V_2 = L_8;
				Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_9 = V_2;
				if (!L_9)
				{
					goto IL_0045_1;
				}
			}
			{
				Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_10 = V_2;
				NullCheck((RuntimeObject*)L_10);
				Type_t* L_11;
				L_11 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_10, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_12 = { reinterpret_cast<intptr_t> (CreatePropertyAttribute_t481619BD84F5E29767718DE127DD1E781A3B6F92_0_0_0_var) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_13;
				L_13 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_12, NULL);
				bool L_14;
				L_14 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_13, NULL);
				G_B7_0 = ((int32_t)(L_14));
				goto IL_0046_1;
			}

IL_0045_1:
			{
				G_B7_0 = 1;
			}

IL_0046_1:
			{
				V_3 = (bool)G_B7_0;
				bool L_15 = V_3;
				if (!L_15)
				{
					goto IL_004c_1;
				}
			}
			{
				goto IL_005a_1;
			}

IL_004c_1:
			{
				List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* L_16 = __this->___m_Attributes;
				Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_17 = V_2;
				NullCheck(L_16);
				List_1_Add_mB0CF48862666913FBBF40D44568593A6D82F7EA2_inline(L_16, L_17, List_1_Add_mB0CF48862666913FBBF40D44568593A6D82F7EA2_RuntimeMethod_var);
			}

IL_005a_1:
			{
				RuntimeObject* L_18 = V_1;
				NullCheck((RuntimeObject*)L_18);
				bool L_19;
				L_19 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_18);
				if (L_19)
				{
					goto IL_0023_1;
				}
			}
			{
				goto IL_006f;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_006f:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Property_2__ctor_m3D03E5489D8244E706F51006F1B0D0C5250A7A86_gshared (Property_2_t69BB6E67D83C59343BA1D7DCC6BDE82B297986D1* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Property_2_DeclaredValueType_mC8A124D0B663BBBDAA581419478046BDCC556924_gshared (Property_2_tD234CECBCBBAF0E5115582B104A904CB400D927F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Property_2_AddAttribute_mB6205269D9F09BBDD2C7D73EDF7AFE257C063332_gshared (Property_2_tD234CECBCBBAF0E5115582B104A904CB400D927F* __this, Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* ___0_attribute, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_0 = ___0_attribute;
		NullCheck((RuntimeObject*)__this);
		InterfaceActionInvoker1< Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* >::Invoke(0, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, (RuntimeObject*)__this, L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Property_2_AddAttributes_m913F23BA7DC31CD1F1A6CF9B604D0EDBE75A8CCD_gshared (Property_2_tD234CECBCBBAF0E5115582B104A904CB400D927F* __this, RuntimeObject* ___0_attributes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_attributes;
		NullCheck((RuntimeObject*)__this);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, (RuntimeObject*)__this, L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Property_2_Unity_Properties_Internal_IAttributes_AddAttribute_m4ECD796AB78621A969CE7424FE8234E5C2D6A36F_gshared (Property_2_tD234CECBCBBAF0E5115582B104A904CB400D927F* __this, Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* ___0_attribute, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CreatePropertyAttribute_t481619BD84F5E29767718DE127DD1E781A3B6F92_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mB0CF48862666913FBBF40D44568593A6D82F7EA2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m8735FFC7B95F1AA11A04DC5F5E6AA77BAAD94D66_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	{
		Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_0 = ___0_attribute;
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_1 = ___0_attribute;
		NullCheck((RuntimeObject*)L_1);
		Type_t* L_2;
		L_2 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_1, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (CreatePropertyAttribute_t481619BD84F5E29767718DE127DD1E781A3B6F92_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_2, L_4, NULL);
		G_B3_0 = ((int32_t)(L_5));
		goto IL_001c;
	}

IL_001b:
	{
		G_B3_0 = 1;
	}

IL_001c:
	{
		V_0 = (bool)G_B3_0;
		bool L_6 = V_0;
		if (!L_6)
		{
			goto IL_0022;
		}
	}
	{
		goto IL_0047;
	}

IL_0022:
	{
		List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* L_7 = __this->___m_Attributes;
		V_1 = (bool)((((RuntimeObject*)(List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715*)L_7) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_8 = V_1;
		if (!L_8)
		{
			goto IL_003a;
		}
	}
	{
		List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* L_9 = (List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715*)il2cpp_codegen_object_new(List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715_il2cpp_TypeInfo_var);
		List_1__ctor_m8735FFC7B95F1AA11A04DC5F5E6AA77BAAD94D66(L_9, List_1__ctor_m8735FFC7B95F1AA11A04DC5F5E6AA77BAAD94D66_RuntimeMethod_var);
		__this->___m_Attributes = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Attributes), (void*)L_9);
	}

IL_003a:
	{
		List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* L_10 = __this->___m_Attributes;
		Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_11 = ___0_attribute;
		NullCheck(L_10);
		List_1_Add_mB0CF48862666913FBBF40D44568593A6D82F7EA2_inline(L_10, L_11, List_1_Add_mB0CF48862666913FBBF40D44568593A6D82F7EA2_RuntimeMethod_var);
	}

IL_0047:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Property_2_Unity_Properties_Internal_IAttributes_AddAttributes_m6C04AB2D5CD2E6A35A2270F4EE83A99713CC87CB_gshared (Property_2_tD234CECBCBBAF0E5115582B104A904CB400D927F* __this, RuntimeObject* ___0_attributes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CreatePropertyAttribute_t481619BD84F5E29767718DE127DD1E781A3B6F92_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tF5487DDC9BFE72D77C0A279762BD5851F02B4F03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tE3FBD2D20AA88C9A0F855ADC37B0F385A3ADC2C1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mB0CF48862666913FBBF40D44568593A6D82F7EA2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m8735FFC7B95F1AA11A04DC5F5E6AA77BAAD94D66_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RuntimeObject* V_1 = NULL;
	Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* V_2 = NULL;
	bool V_3 = false;
	int32_t G_B7_0 = 0;
	{
		List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* L_0 = __this->___m_Attributes;
		V_0 = (bool)((((RuntimeObject*)(List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* L_2 = (List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715*)il2cpp_codegen_object_new(List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715_il2cpp_TypeInfo_var);
		List_1__ctor_m8735FFC7B95F1AA11A04DC5F5E6AA77BAAD94D66(L_2, List_1__ctor_m8735FFC7B95F1AA11A04DC5F5E6AA77BAAD94D66_RuntimeMethod_var);
		__this->___m_Attributes = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Attributes), (void*)L_2);
	}

IL_0019:
	{
		RuntimeObject* L_3 = ___0_attributes;
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IEnumerable_1_tF5487DDC9BFE72D77C0A279762BD5851F02B4F03_il2cpp_TypeInfo_var, L_3);
		V_1 = L_4;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0064:
			{
				{
					RuntimeObject* L_5 = V_1;
					if (!L_5)
					{
						goto IL_006e;
					}
				}
				{
					RuntimeObject* L_6 = V_1;
					NullCheck((RuntimeObject*)L_6);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_6);
				}

IL_006e:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_005a_1;
			}

IL_0023_1:
			{
				RuntimeObject* L_7 = V_1;
				NullCheck(L_7);
				Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_8;
				L_8 = InterfaceFuncInvoker0< Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* >::Invoke(0, IEnumerator_1_tE3FBD2D20AA88C9A0F855ADC37B0F385A3ADC2C1_il2cpp_TypeInfo_var, L_7);
				V_2 = L_8;
				Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_9 = V_2;
				if (!L_9)
				{
					goto IL_0045_1;
				}
			}
			{
				Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_10 = V_2;
				NullCheck((RuntimeObject*)L_10);
				Type_t* L_11;
				L_11 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_10, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_12 = { reinterpret_cast<intptr_t> (CreatePropertyAttribute_t481619BD84F5E29767718DE127DD1E781A3B6F92_0_0_0_var) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_13;
				L_13 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_12, NULL);
				bool L_14;
				L_14 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_13, NULL);
				G_B7_0 = ((int32_t)(L_14));
				goto IL_0046_1;
			}

IL_0045_1:
			{
				G_B7_0 = 1;
			}

IL_0046_1:
			{
				V_3 = (bool)G_B7_0;
				bool L_15 = V_3;
				if (!L_15)
				{
					goto IL_004c_1;
				}
			}
			{
				goto IL_005a_1;
			}

IL_004c_1:
			{
				List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* L_16 = __this->___m_Attributes;
				Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_17 = V_2;
				NullCheck(L_16);
				List_1_Add_mB0CF48862666913FBBF40D44568593A6D82F7EA2_inline(L_16, L_17, List_1_Add_mB0CF48862666913FBBF40D44568593A6D82F7EA2_RuntimeMethod_var);
			}

IL_005a_1:
			{
				RuntimeObject* L_18 = V_1;
				NullCheck((RuntimeObject*)L_18);
				bool L_19;
				L_19 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_18);
				if (L_19)
				{
					goto IL_0023_1;
				}
			}
			{
				goto IL_006f;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_006f:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Property_2__ctor_mB4377AC3DECCB9DF801451D8D3D612717EFA30BA_gshared (Property_2_tD234CECBCBBAF0E5115582B104A904CB400D927F* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Property_2_DeclaredValueType_m717E818AD74F7A7F438B2FAD3245F1EA356FF56F_gshared (Property_2_tE9B27417C17E0D8EA0D6A88F71B3C9347F2332A3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Property_2_AddAttribute_m75165CE23F4A7B2FD33F74E1A314A52E08EB1F86_gshared (Property_2_tE9B27417C17E0D8EA0D6A88F71B3C9347F2332A3* __this, Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* ___0_attribute, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_0 = ___0_attribute;
		NullCheck((RuntimeObject*)__this);
		InterfaceActionInvoker1< Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* >::Invoke(0, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, (RuntimeObject*)__this, L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Property_2_AddAttributes_m254A38D0DF492D61248F7D514EDB66AD2D326B88_gshared (Property_2_tE9B27417C17E0D8EA0D6A88F71B3C9347F2332A3* __this, RuntimeObject* ___0_attributes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_attributes;
		NullCheck((RuntimeObject*)__this);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, (RuntimeObject*)__this, L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Property_2_Unity_Properties_Internal_IAttributes_AddAttribute_m9E71F32C6B3BEF8989578C42B418007964A3DB3C_gshared (Property_2_tE9B27417C17E0D8EA0D6A88F71B3C9347F2332A3* __this, Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* ___0_attribute, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CreatePropertyAttribute_t481619BD84F5E29767718DE127DD1E781A3B6F92_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mB0CF48862666913FBBF40D44568593A6D82F7EA2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m8735FFC7B95F1AA11A04DC5F5E6AA77BAAD94D66_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	{
		Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_0 = ___0_attribute;
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_1 = ___0_attribute;
		NullCheck((RuntimeObject*)L_1);
		Type_t* L_2;
		L_2 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_1, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (CreatePropertyAttribute_t481619BD84F5E29767718DE127DD1E781A3B6F92_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_2, L_4, NULL);
		G_B3_0 = ((int32_t)(L_5));
		goto IL_001c;
	}

IL_001b:
	{
		G_B3_0 = 1;
	}

IL_001c:
	{
		V_0 = (bool)G_B3_0;
		bool L_6 = V_0;
		if (!L_6)
		{
			goto IL_0022;
		}
	}
	{
		goto IL_0047;
	}

IL_0022:
	{
		List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* L_7 = __this->___m_Attributes;
		V_1 = (bool)((((RuntimeObject*)(List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715*)L_7) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_8 = V_1;
		if (!L_8)
		{
			goto IL_003a;
		}
	}
	{
		List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* L_9 = (List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715*)il2cpp_codegen_object_new(List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715_il2cpp_TypeInfo_var);
		List_1__ctor_m8735FFC7B95F1AA11A04DC5F5E6AA77BAAD94D66(L_9, List_1__ctor_m8735FFC7B95F1AA11A04DC5F5E6AA77BAAD94D66_RuntimeMethod_var);
		__this->___m_Attributes = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Attributes), (void*)L_9);
	}

IL_003a:
	{
		List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* L_10 = __this->___m_Attributes;
		Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_11 = ___0_attribute;
		NullCheck(L_10);
		List_1_Add_mB0CF48862666913FBBF40D44568593A6D82F7EA2_inline(L_10, L_11, List_1_Add_mB0CF48862666913FBBF40D44568593A6D82F7EA2_RuntimeMethod_var);
	}

IL_0047:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Property_2_Unity_Properties_Internal_IAttributes_AddAttributes_m90125868491C6BC90AE0CF95472AAC2567340CD5_gshared (Property_2_tE9B27417C17E0D8EA0D6A88F71B3C9347F2332A3* __this, RuntimeObject* ___0_attributes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CreatePropertyAttribute_t481619BD84F5E29767718DE127DD1E781A3B6F92_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tF5487DDC9BFE72D77C0A279762BD5851F02B4F03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tE3FBD2D20AA88C9A0F855ADC37B0F385A3ADC2C1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mB0CF48862666913FBBF40D44568593A6D82F7EA2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m8735FFC7B95F1AA11A04DC5F5E6AA77BAAD94D66_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RuntimeObject* V_1 = NULL;
	Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* V_2 = NULL;
	bool V_3 = false;
	int32_t G_B7_0 = 0;
	{
		List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* L_0 = __this->___m_Attributes;
		V_0 = (bool)((((RuntimeObject*)(List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* L_2 = (List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715*)il2cpp_codegen_object_new(List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715_il2cpp_TypeInfo_var);
		List_1__ctor_m8735FFC7B95F1AA11A04DC5F5E6AA77BAAD94D66(L_2, List_1__ctor_m8735FFC7B95F1AA11A04DC5F5E6AA77BAAD94D66_RuntimeMethod_var);
		__this->___m_Attributes = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Attributes), (void*)L_2);
	}

IL_0019:
	{
		RuntimeObject* L_3 = ___0_attributes;
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IEnumerable_1_tF5487DDC9BFE72D77C0A279762BD5851F02B4F03_il2cpp_TypeInfo_var, L_3);
		V_1 = L_4;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0064:
			{
				{
					RuntimeObject* L_5 = V_1;
					if (!L_5)
					{
						goto IL_006e;
					}
				}
				{
					RuntimeObject* L_6 = V_1;
					NullCheck((RuntimeObject*)L_6);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_6);
				}

IL_006e:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_005a_1;
			}

IL_0023_1:
			{
				RuntimeObject* L_7 = V_1;
				NullCheck(L_7);
				Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_8;
				L_8 = InterfaceFuncInvoker0< Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* >::Invoke(0, IEnumerator_1_tE3FBD2D20AA88C9A0F855ADC37B0F385A3ADC2C1_il2cpp_TypeInfo_var, L_7);
				V_2 = L_8;
				Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_9 = V_2;
				if (!L_9)
				{
					goto IL_0045_1;
				}
			}
			{
				Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_10 = V_2;
				NullCheck((RuntimeObject*)L_10);
				Type_t* L_11;
				L_11 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_10, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_12 = { reinterpret_cast<intptr_t> (CreatePropertyAttribute_t481619BD84F5E29767718DE127DD1E781A3B6F92_0_0_0_var) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_13;
				L_13 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_12, NULL);
				bool L_14;
				L_14 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_13, NULL);
				G_B7_0 = ((int32_t)(L_14));
				goto IL_0046_1;
			}

IL_0045_1:
			{
				G_B7_0 = 1;
			}

IL_0046_1:
			{
				V_3 = (bool)G_B7_0;
				bool L_15 = V_3;
				if (!L_15)
				{
					goto IL_004c_1;
				}
			}
			{
				goto IL_005a_1;
			}

IL_004c_1:
			{
				List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* L_16 = __this->___m_Attributes;
				Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_17 = V_2;
				NullCheck(L_16);
				List_1_Add_mB0CF48862666913FBBF40D44568593A6D82F7EA2_inline(L_16, L_17, List_1_Add_mB0CF48862666913FBBF40D44568593A6D82F7EA2_RuntimeMethod_var);
			}

IL_005a_1:
			{
				RuntimeObject* L_18 = V_1;
				NullCheck((RuntimeObject*)L_18);
				bool L_19;
				L_19 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_18);
				if (L_19)
				{
					goto IL_0023_1;
				}
			}
			{
				goto IL_006f;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_006f:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Property_2__ctor_m1B14349D578BF83C39983D2898529964F8906986_gshared (Property_2_tE9B27417C17E0D8EA0D6A88F71B3C9347F2332A3* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m6E2A5A8173E0CC524496D5155C737DF8FD10D0EB_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0;
		L_0 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		__this->____array = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m487BCAF8F7A2FB003B54B1E744B80FB6651B4963_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_1 = ___0_capacity;
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_2);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_4 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC37D78082ACFC8DEE7B32D9351C6E433A074FEC7)), L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0020:
	{
		int32_t L_5 = ___0_capacity;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_5);
		__this->____array = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_6);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_m1768ADA9855B7CDA14C9C42E098A287F1A39C3A2_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_System_Collections_ICollection_get_IsSynchronized_m053714A9E6478AFE7CD493D962FCBB5E58A24A86_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_ICollection_get_SyncRoot_m10E1293E4A4BE4403DA68CFCAB5494FED197110C_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____syncRoot;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Clear_m70861E24CF43ECFF3BC5C2AD4EE55963D54D8711_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (!L_0)
		{
			goto IL_006f;
		}
	}
	{
	}
	{
		int32_t L_1 = __this->____head;
		int32_t L_2 = __this->____tail;
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_0036;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = __this->____array;
		int32_t L_4 = __this->____head;
		int32_t L_5 = __this->____size;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, L_4, L_5, NULL);
		goto IL_0068;
	}

IL_0036:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = __this->____array;
		int32_t L_7 = __this->____head;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = __this->____array;
		NullCheck(L_8);
		int32_t L_9 = __this->____head;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_6, L_7, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_8)->max_length)), L_9)), NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = __this->____array;
		int32_t L_11 = __this->____tail;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_10, 0, L_11, NULL);
	}

IL_0068:
	{
		__this->____size = 0;
	}

IL_006f:
	{
		__this->____head = 0;
		__this->____tail = 0;
		int32_t L_12 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_12, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_System_Collections_ICollection_CopyTo_m7EC23B77294ABA74E78B728FBA0C420C959CE4A0_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	int32_t G_B17_0 = 0;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeArray* L_2 = ___0_array;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_2, NULL);
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral967D403A541A1026A83D548E5AD5CA800AD4EFB5)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0027:
	{
		RuntimeArray* L_5 = ___0_array;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_5, 0, NULL);
		if (!L_6)
		{
			goto IL_0040;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6195D7DA68D16D4985AD1A1B4FD2841A43CDDE70)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, method);
	}

IL_0040:
	{
		RuntimeArray* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_8, NULL);
		V_0 = L_9;
		int32_t L_10 = ___1_index;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_11 = ___1_index;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) <= ((int32_t)L_12)))
		{
			goto IL_0065;
		}
	}

IL_004f:
	{
		int32_t L_13 = ___1_index;
		int32_t L_14 = L_13;
		RuntimeObject* L_15 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_14);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_16 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_16, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), L_15, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, method);
	}

IL_0065:
	{
		int32_t L_17 = V_0;
		int32_t L_18 = ___1_index;
		int32_t L_19 = __this->____size;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_17, L_18))) >= ((int32_t)L_19)))
		{
			goto IL_007b;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_20 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_20, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, method);
	}

IL_007b:
	{
		int32_t L_21 = __this->____size;
		V_1 = L_21;
		int32_t L_22 = V_1;
		if (L_22)
		{
			goto IL_0086;
		}
	}
	{
		return;
	}

IL_0086:
	{
	}
	try
	{
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_23 = __this->____array;
			NullCheck(L_23);
			int32_t L_24 = __this->____head;
			int32_t L_25 = V_1;
			if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_23)->max_length)), L_24))) < ((int32_t)L_25)))
			{
				goto IL_009c_1;
			}
		}
		{
			int32_t L_26 = V_1;
			G_B17_0 = L_26;
			goto IL_00ab_1;
		}

IL_009c_1:
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = __this->____array;
			NullCheck(L_27);
			int32_t L_28 = __this->____head;
			G_B17_0 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_27)->max_length)), L_28));
		}

IL_00ab_1:
		{
			V_2 = G_B17_0;
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_29 = __this->____array;
			int32_t L_30 = __this->____head;
			RuntimeArray* L_31 = ___0_array;
			int32_t L_32 = ___1_index;
			int32_t L_33 = V_2;
			Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_29, L_30, L_31, L_32, L_33, NULL);
			int32_t L_34 = V_1;
			int32_t L_35 = V_2;
			V_1 = ((int32_t)il2cpp_codegen_subtract(L_34, L_35));
			int32_t L_36 = V_1;
			if ((((int32_t)L_36) <= ((int32_t)0)))
			{
				goto IL_00e7_1;
			}
		}
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_37 = __this->____array;
			RuntimeArray* L_38 = ___0_array;
			int32_t L_39 = ___1_index;
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_40 = __this->____array;
			NullCheck(L_40);
			int32_t L_41 = __this->____head;
			int32_t L_42 = V_1;
			Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_37, 0, L_38, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_39, ((int32_t)(((RuntimeArray*)L_40)->max_length)))), L_41)), L_42, NULL);
		}

IL_00e7_1:
		{
			goto IL_00fa;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00e9;
		}
		throw e;
	}

CATCH_00e9:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_43 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_44 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_44, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBD0381A992FDF4F7DA60E5D83689FE7FF6309CB8)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_44, method);
	}

IL_00fa:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_m5CB8CF3906F1289F92036F0973EC5BE3450402EF_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____size;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = __this->____array;
		NullCheck(L_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))))))
		{
			goto IL_0045;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = __this->____array;
		NullCheck(L_2);
		V_0 = ((int32_t)((int64_t)(((int64_t)il2cpp_codegen_multiply(((int64_t)((int32_t)(((RuntimeArray*)L_2)->max_length))), ((int64_t)((int32_t)200))))/((int64_t)((int32_t)100)))));
		int32_t L_3 = V_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = __this->____array;
		NullCheck(L_4);
		if ((((int32_t)L_3) >= ((int32_t)((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_4)->max_length)), 4)))))
		{
			goto IL_003e;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = __this->____array;
		NullCheck(L_5);
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_5)->max_length)), 4));
	}

IL_003e:
	{
		int32_t L_6 = V_0;
		Queue_1_SetCapacity_mD8086A1BE69A9D667942BEE1B7C493ED46D076B2(__this, L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
	}

IL_0045:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = __this->____array;
		int32_t L_8 = __this->____tail;
		RuntimeObject* L_9 = ___0_item;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (RuntimeObject*)L_9);
		int32_t* L_10 = (int32_t*)(&__this->____tail);
		Queue_1_MoveNext_mBE64AC05D205514CF53E249788563FB5000FDB82(__this, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		int32_t L_11 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_11, 1));
		int32_t L_12 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_12, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t30E3290EE12437374037B3CF0EE4D614F96D030A Queue_1_GetEnumerator_mBF0033C4BCEA408644D24F0B28A81F9145FB97C9_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t30E3290EE12437374037B3CF0EE4D614F96D030A L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m07A08E9A1E2AB072CB1654A5009DA79A460E081B((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m4DF91611354D7FE1796A09DCB101AF5E70805793_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t30E3290EE12437374037B3CF0EE4D614F96D030A L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m07A08E9A1E2AB072CB1654A5009DA79A460E081B((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		Enumerator_t30E3290EE12437374037B3CF0EE4D614F96D030A L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_IEnumerable_GetEnumerator_m36EBE55DAAC29B841CC02D968AC0E41A5D64DADB_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t30E3290EE12437374037B3CF0EE4D614F96D030A L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m07A08E9A1E2AB072CB1654A5009DA79A460E081B((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		Enumerator_t30E3290EE12437374037B3CF0EE4D614F96D030A L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_Dequeue_m86B243DF9EC238316EC3D27DF3E0AB8DB0987E84_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	{
		int32_t L_0 = __this->____head;
		V_0 = L_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = __this->____array;
		V_1 = L_1;
		int32_t L_2 = __this->____size;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		Queue_1_ThrowForEmptyQueue_m79CDC02B168158EA24B805B9CB987F18C37638EA(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}

IL_001c:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = V_1;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		RuntimeObject* L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		G_B3_0 = L_6;
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = V_1;
		int32_t L_8 = V_0;
		il2cpp_codegen_initobj((&V_2), sizeof(RuntimeObject*));
		RuntimeObject* L_9 = V_2;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (RuntimeObject*)L_9);
		G_B4_0 = G_B3_0;
	}

IL_003a:
	{
		int32_t* L_10 = (int32_t*)(&__this->____head);
		Queue_1_MoveNext_mBE64AC05D205514CF53E249788563FB5000FDB82(__this, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		int32_t L_11 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
		int32_t L_12 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_12, 1));
		return G_B4_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_Peek_mBCFFD1AF751385D78C4EA93D62857F936CD03866_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		Queue_1_ThrowForEmptyQueue_m79CDC02B168158EA24B805B9CB987F18C37638EA(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}

IL_000e:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = __this->____array;
		int32_t L_2 = __this->____head;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		RuntimeObject* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Queue_1_ToArray_m4EE007D1D45FDFE14373A58B80B6D9EB2A03A9D8_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1;
		L_1 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____size;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_2);
		V_0 = L_3;
		int32_t L_4 = __this->____head;
		int32_t L_5 = __this->____tail;
		if ((((int32_t)L_4) >= ((int32_t)L_5)))
		{
			goto IL_0043;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = __this->____array;
		int32_t L_7 = __this->____head;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = V_0;
		int32_t L_9 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_6, L_7, (RuntimeArray*)L_8, 0, L_9, NULL);
		goto IL_0087;
	}

IL_0043:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = __this->____array;
		int32_t L_11 = __this->____head;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_12 = V_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = __this->____array;
		NullCheck(L_13);
		int32_t L_14 = __this->____head;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_10, L_11, (RuntimeArray*)L_12, 0, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_13)->max_length)), L_14)), NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_15 = __this->____array;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_16 = V_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_17 = __this->____array;
		NullCheck(L_17);
		int32_t L_18 = __this->____head;
		int32_t L_19 = __this->____tail;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_15, 0, (RuntimeArray*)L_16, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_17)->max_length)), L_18)), L_19, NULL);
	}

IL_0087:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_20 = V_0;
		return L_20;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_SetCapacity_mD8086A1BE69A9D667942BEE1B7C493ED46D076B2_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* G_B6_0 = NULL;
	Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* G_B5_0 = NULL;
	int32_t G_B7_0 = 0;
	Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* G_B7_1 = NULL;
	{
		int32_t L_0 = ___0_capacity;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_007d;
		}
	}
	{
		int32_t L_3 = __this->____head;
		int32_t L_4 = __this->____tail;
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0039;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = __this->____array;
		int32_t L_6 = __this->____head;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = V_0;
		int32_t L_8 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, L_6, (RuntimeArray*)L_7, 0, L_8, NULL);
		goto IL_007d;
	}

IL_0039:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = __this->____array;
		int32_t L_10 = __this->____head;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = V_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_12 = __this->____array;
		NullCheck(L_12);
		int32_t L_13 = __this->____head;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_9, L_10, (RuntimeArray*)L_11, 0, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_12)->max_length)), L_13)), NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = __this->____array;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_15 = V_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_16 = __this->____array;
		NullCheck(L_16);
		int32_t L_17 = __this->____head;
		int32_t L_18 = __this->____tail;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_14, 0, (RuntimeArray*)L_15, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_16)->max_length)), L_17)), L_18, NULL);
	}

IL_007d:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_19 = V_0;
		__this->____array = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_19);
		__this->____head = 0;
		int32_t L_20 = __this->____size;
		int32_t L_21 = ___0_capacity;
		if ((((int32_t)L_20) == ((int32_t)L_21)))
		{
			G_B6_0 = __this;
			goto IL_009d;
		}
		G_B5_0 = __this;
	}
	{
		int32_t L_22 = __this->____size;
		G_B7_0 = L_22;
		G_B7_1 = G_B5_0;
		goto IL_009e;
	}

IL_009d:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
	}

IL_009e:
	{
		NullCheck(G_B7_1);
		G_B7_1->____tail = G_B7_0;
		int32_t L_23 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_23, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_MoveNext_mBE64AC05D205514CF53E249788563FB5000FDB82_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, int32_t* ___0_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t* L_0 = ___0_index;
		int32_t L_1 = *((int32_t*)L_0);
		V_0 = ((int32_t)il2cpp_codegen_add(L_1, 1));
		int32_t L_2 = V_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = __this->____array;
		NullCheck(L_3);
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))))
		{
			goto IL_0012;
		}
	}
	{
		V_0 = 0;
	}

IL_0012:
	{
		int32_t* L_4 = ___0_index;
		int32_t L_5 = V_0;
		*((int32_t*)L_4) = (int32_t)L_5;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_ThrowForEmptyQueue_m79CDC02B168158EA24B805B9CB987F18C37638EA_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) 
{
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1102619AA6FB2A4AADBDAA47DDC096AE04C772C0)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m657BFA58DFD6AB5B1B4B69AA6E963CD569637EAD_gshared (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0;
		L_0 = ((  __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		__this->____array = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m2A01859D57AB64CDCAECDF68089FD2236759976C_gshared (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_1 = ___0_capacity;
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_2);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_4 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC37D78082ACFC8DEE7B32D9351C6E433A074FEC7)), L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0020:
	{
		int32_t L_5 = ___0_capacity;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_6 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_5);
		__this->____array = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_6);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_mE6103188ACDEC07F90F2D2986554730D18029750_gshared (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_System_Collections_ICollection_get_IsSynchronized_m1E7DDED94ADEB25172891CED1F68DFC880B66415_gshared (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_ICollection_get_SyncRoot_m8E5ACA13B4BA41CC3230927ACEB3CF68820A8A05_gshared (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____syncRoot;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Clear_mF3F6BB3C909C58BB9407AA3FFA131CC73E1287AA_gshared (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (!L_0)
		{
			goto IL_006f;
		}
	}
	{
		bool L_1;
		L_1 = il2cpp_codegen_is_reference_or_contains_references(il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		if (!L_1)
		{
			goto IL_0068;
		}
	}
	{
		int32_t L_2 = __this->____head;
		int32_t L_3 = __this->____tail;
		if ((((int32_t)L_2) >= ((int32_t)L_3)))
		{
			goto IL_0036;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4 = __this->____array;
		int32_t L_5 = __this->____head;
		int32_t L_6 = __this->____size;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_4, L_5, L_6, NULL);
		goto IL_0068;
	}

IL_0036:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_7 = __this->____array;
		int32_t L_8 = __this->____head;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_9 = __this->____array;
		NullCheck(L_9);
		int32_t L_10 = __this->____head;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_7, L_8, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_9)->max_length)), L_10)), NULL);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_11 = __this->____array;
		int32_t L_12 = __this->____tail;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_11, 0, L_12, NULL);
	}

IL_0068:
	{
		__this->____size = 0;
	}

IL_006f:
	{
		__this->____head = 0;
		__this->____tail = 0;
		int32_t L_13 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_13, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_System_Collections_ICollection_CopyTo_m8ACB04592D3C4936139A90C1CE9B708BA3F7D47F_gshared (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	int32_t G_B17_0 = 0;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeArray* L_2 = ___0_array;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_2, NULL);
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral967D403A541A1026A83D548E5AD5CA800AD4EFB5)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0027:
	{
		RuntimeArray* L_5 = ___0_array;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_5, 0, NULL);
		if (!L_6)
		{
			goto IL_0040;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6195D7DA68D16D4985AD1A1B4FD2841A43CDDE70)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, method);
	}

IL_0040:
	{
		RuntimeArray* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_8, NULL);
		V_0 = L_9;
		int32_t L_10 = ___1_index;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_11 = ___1_index;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) <= ((int32_t)L_12)))
		{
			goto IL_0065;
		}
	}

IL_004f:
	{
		int32_t L_13 = ___1_index;
		int32_t L_14 = L_13;
		RuntimeObject* L_15 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_14);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_16 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_16, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), L_15, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, method);
	}

IL_0065:
	{
		int32_t L_17 = V_0;
		int32_t L_18 = ___1_index;
		int32_t L_19 = __this->____size;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_17, L_18))) >= ((int32_t)L_19)))
		{
			goto IL_007b;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_20 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_20, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, method);
	}

IL_007b:
	{
		int32_t L_21 = __this->____size;
		V_1 = L_21;
		int32_t L_22 = V_1;
		if (L_22)
		{
			goto IL_0086;
		}
	}
	{
		return;
	}

IL_0086:
	{
	}
	try
	{
		{
			__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_23 = __this->____array;
			NullCheck(L_23);
			int32_t L_24 = __this->____head;
			int32_t L_25 = V_1;
			if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_23)->max_length)), L_24))) < ((int32_t)L_25)))
			{
				goto IL_009c_1;
			}
		}
		{
			int32_t L_26 = V_1;
			G_B17_0 = L_26;
			goto IL_00ab_1;
		}

IL_009c_1:
		{
			__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_27 = __this->____array;
			NullCheck(L_27);
			int32_t L_28 = __this->____head;
			G_B17_0 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_27)->max_length)), L_28));
		}

IL_00ab_1:
		{
			V_2 = G_B17_0;
			__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_29 = __this->____array;
			int32_t L_30 = __this->____head;
			RuntimeArray* L_31 = ___0_array;
			int32_t L_32 = ___1_index;
			int32_t L_33 = V_2;
			Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_29, L_30, L_31, L_32, L_33, NULL);
			int32_t L_34 = V_1;
			int32_t L_35 = V_2;
			V_1 = ((int32_t)il2cpp_codegen_subtract(L_34, L_35));
			int32_t L_36 = V_1;
			if ((((int32_t)L_36) <= ((int32_t)0)))
			{
				goto IL_00e7_1;
			}
		}
		{
			__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_37 = __this->____array;
			RuntimeArray* L_38 = ___0_array;
			int32_t L_39 = ___1_index;
			__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_40 = __this->____array;
			NullCheck(L_40);
			int32_t L_41 = __this->____head;
			int32_t L_42 = V_1;
			Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_37, 0, L_38, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_39, ((int32_t)(((RuntimeArray*)L_40)->max_length)))), L_41)), L_42, NULL);
		}

IL_00e7_1:
		{
			goto IL_00fa;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00e9;
		}
		throw e;
	}

CATCH_00e9:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_43 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_44 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_44, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBD0381A992FDF4F7DA60E5D83689FE7FF6309CB8)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_44, method);
	}

IL_00fa:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_m9159DC6A9BC5528A3444329C408F4101004CF652_gshared (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_tD6AE21C41260DF14F855F85E236422077D7456A1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_T_tD6AE21C41260DF14F855F85E236422077D7456A1);
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____size;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = __this->____array;
		NullCheck(L_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))))))
		{
			goto IL_0045;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_2 = __this->____array;
		NullCheck(L_2);
		V_0 = ((int32_t)((int64_t)(((int64_t)il2cpp_codegen_multiply(((int64_t)((int32_t)(((RuntimeArray*)L_2)->max_length))), ((int64_t)((int32_t)200))))/((int64_t)((int32_t)100)))));
		int32_t L_3 = V_0;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4 = __this->____array;
		NullCheck(L_4);
		if ((((int32_t)L_3) >= ((int32_t)((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_4)->max_length)), 4)))))
		{
			goto IL_003e;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_5 = __this->____array;
		NullCheck(L_5);
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_5)->max_length)), 4));
	}

IL_003e:
	{
		int32_t L_6 = V_0;
		((  void (*) (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(__this, L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
	}

IL_0045:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_7 = __this->____array;
		int32_t L_8 = __this->____tail;
		il2cpp_codegen_memcpy(L_9, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? ___0_item : &___0_item), SizeOf_T_tD6AE21C41260DF14F855F85E236422077D7456A1);
		NullCheck(L_7);
		il2cpp_codegen_memcpy((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8)), L_9, SizeOf_T_tD6AE21C41260DF14F855F85E236422077D7456A1);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 6), (void**)(L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8)), (void*)L_9);
		int32_t* L_10 = (int32_t*)(&__this->____tail);
		((  void (*) (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*, int32_t*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)))(__this, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		int32_t L_11 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_11, 1));
		int32_t L_12 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_12, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_GetEnumerator_m6C532F76552CCD7154B74816F66DA3CE367BD90D_gshared (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* __this, Enumerator_tFA6E7D5BA5EFB0C82F2AA1342FFD5C2B753D673C* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_Enumerator_t6909F21E05B290BE40805B8A5845E4FD888195A1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8));
	const Enumerator_tFA6E7D5BA5EFB0C82F2AA1342FFD5C2B753D673C L_0 = alloca(SizeOf_Enumerator_t6909F21E05B290BE40805B8A5845E4FD888195A1);
	{
		memset(L_0, 0, SizeOf_Enumerator_t6909F21E05B290BE40805B8A5845E4FD888195A1);
		Enumerator__ctor_m8DA499B2030A9C843BE8FCAEFDFD4CD4EB5BA0BB((Enumerator_tFA6E7D5BA5EFB0C82F2AA1342FFD5C2B753D673C*)L_0, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_Enumerator_t6909F21E05B290BE40805B8A5845E4FD888195A1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m926D620709AEF33612E061F359920FA5A7F33D2F_gshared (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_Enumerator_t6909F21E05B290BE40805B8A5845E4FD888195A1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8));
	const Enumerator_tFA6E7D5BA5EFB0C82F2AA1342FFD5C2B753D673C L_0 = alloca(SizeOf_Enumerator_t6909F21E05B290BE40805B8A5845E4FD888195A1);
	{
		memset(L_0, 0, SizeOf_Enumerator_t6909F21E05B290BE40805B8A5845E4FD888195A1);
		Enumerator__ctor_m8DA499B2030A9C843BE8FCAEFDFD4CD4EB5BA0BB((Enumerator_tFA6E7D5BA5EFB0C82F2AA1342FFD5C2B753D673C*)L_0, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		RuntimeObject* L_1 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8), L_0);
		return (RuntimeObject*)L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_IEnumerable_GetEnumerator_mD615C747AA1C683E461CA820560E002427466EB8_gshared (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_Enumerator_t6909F21E05B290BE40805B8A5845E4FD888195A1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8));
	const Enumerator_tFA6E7D5BA5EFB0C82F2AA1342FFD5C2B753D673C L_0 = alloca(SizeOf_Enumerator_t6909F21E05B290BE40805B8A5845E4FD888195A1);
	{
		memset(L_0, 0, SizeOf_Enumerator_t6909F21E05B290BE40805B8A5845E4FD888195A1);
		Enumerator__ctor_m8DA499B2030A9C843BE8FCAEFDFD4CD4EB5BA0BB((Enumerator_tFA6E7D5BA5EFB0C82F2AA1342FFD5C2B753D673C*)L_0, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		RuntimeObject* L_1 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8), L_0);
		return (RuntimeObject*)L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Dequeue_m80C152387A53656EC4AEF450BCBA9087DC51EEE3_gshared (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_tD6AE21C41260DF14F855F85E236422077D7456A1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_T_tD6AE21C41260DF14F855F85E236422077D7456A1);
	const Il2CppFullySharedGenericAny L_10 = L_6;
	int32_t V_0 = 0;
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_1 = NULL;
	Il2CppFullySharedGenericAny V_2 = alloca(SizeOf_T_tD6AE21C41260DF14F855F85E236422077D7456A1);
	memset(V_2, 0, SizeOf_T_tD6AE21C41260DF14F855F85E236422077D7456A1);
	Il2CppFullySharedGenericAny G_B4_0 = alloca(SizeOf_T_tD6AE21C41260DF14F855F85E236422077D7456A1);
	memset(G_B4_0, 0, SizeOf_T_tD6AE21C41260DF14F855F85E236422077D7456A1);
	Il2CppFullySharedGenericAny G_B3_0 = alloca(SizeOf_T_tD6AE21C41260DF14F855F85E236422077D7456A1);
	memset(G_B3_0, 0, SizeOf_T_tD6AE21C41260DF14F855F85E236422077D7456A1);
	{
		int32_t L_0 = __this->____head;
		V_0 = L_0;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = __this->____array;
		V_1 = L_1;
		int32_t L_2 = __this->____size;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		((  void (*) (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}

IL_001c:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = V_1;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		il2cpp_codegen_memcpy(L_6, (L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)), SizeOf_T_tD6AE21C41260DF14F855F85E236422077D7456A1);
		bool L_7;
		L_7 = il2cpp_codegen_is_reference_or_contains_references(il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		if (!L_7)
		{
			il2cpp_codegen_memcpy(G_B4_0, L_6, SizeOf_T_tD6AE21C41260DF14F855F85E236422077D7456A1);
			goto IL_003a;
		}
		il2cpp_codegen_memcpy(G_B3_0, L_6, SizeOf_T_tD6AE21C41260DF14F855F85E236422077D7456A1);
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_8 = V_1;
		int32_t L_9 = V_0;
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_2, SizeOf_T_tD6AE21C41260DF14F855F85E236422077D7456A1);
		il2cpp_codegen_memcpy(L_10, V_2, SizeOf_T_tD6AE21C41260DF14F855F85E236422077D7456A1);
		NullCheck(L_8);
		il2cpp_codegen_memcpy((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)), L_10, SizeOf_T_tD6AE21C41260DF14F855F85E236422077D7456A1);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 6), (void**)(L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)), (void*)L_10);
		il2cpp_codegen_memcpy(G_B4_0, G_B3_0, SizeOf_T_tD6AE21C41260DF14F855F85E236422077D7456A1);
	}

IL_003a:
	{
		int32_t* L_11 = (int32_t*)(&__this->____head);
		((  void (*) (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*, int32_t*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)))(__this, L_11, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		int32_t L_12 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
		int32_t L_13 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_13, 1));
		il2cpp_codegen_memcpy(il2cppRetVal, G_B4_0, SizeOf_T_tD6AE21C41260DF14F855F85E236422077D7456A1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Peek_mC16DCF76985FF167BAB542F92D9AA03C1E210D8C_gshared (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_tD6AE21C41260DF14F855F85E236422077D7456A1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_T_tD6AE21C41260DF14F855F85E236422077D7456A1);
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		((  void (*) (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}

IL_000e:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = __this->____array;
		int32_t L_2 = __this->____head;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		il2cpp_codegen_memcpy(L_4, (L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)), SizeOf_T_tD6AE21C41260DF14F855F85E236422077D7456A1);
		il2cpp_codegen_memcpy(il2cppRetVal, L_4, SizeOf_T_tD6AE21C41260DF14F855F85E236422077D7456A1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* Queue_1_ToArray_m6E3371A83B60239A394CB7E49FFB3380C75C5E52_gshared (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* __this, const RuntimeMethod* method) 
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_0 = NULL;
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1;
		L_1 = ((  __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____size;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_2);
		V_0 = L_3;
		int32_t L_4 = __this->____head;
		int32_t L_5 = __this->____tail;
		if ((((int32_t)L_4) >= ((int32_t)L_5)))
		{
			goto IL_0043;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_6 = __this->____array;
		int32_t L_7 = __this->____head;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_8 = V_0;
		int32_t L_9 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_6, L_7, (RuntimeArray*)L_8, 0, L_9, NULL);
		goto IL_0087;
	}

IL_0043:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_10 = __this->____array;
		int32_t L_11 = __this->____head;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_12 = V_0;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_13 = __this->____array;
		NullCheck(L_13);
		int32_t L_14 = __this->____head;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_10, L_11, (RuntimeArray*)L_12, 0, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_13)->max_length)), L_14)), NULL);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_15 = __this->____array;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_16 = V_0;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_17 = __this->____array;
		NullCheck(L_17);
		int32_t L_18 = __this->____head;
		int32_t L_19 = __this->____tail;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_15, 0, (RuntimeArray*)L_16, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_17)->max_length)), L_18)), L_19, NULL);
	}

IL_0087:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_20 = V_0;
		return L_20;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_SetCapacity_m5368BB1720798CB76A62CDC47D91036C4B07BBEB_gshared (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_0 = NULL;
	Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* G_B6_0 = NULL;
	Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* G_B5_0 = NULL;
	int32_t G_B7_0 = 0;
	Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* G_B7_1 = NULL;
	{
		int32_t L_0 = ___0_capacity;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_007d;
		}
	}
	{
		int32_t L_3 = __this->____head;
		int32_t L_4 = __this->____tail;
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0039;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_5 = __this->____array;
		int32_t L_6 = __this->____head;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_7 = V_0;
		int32_t L_8 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, L_6, (RuntimeArray*)L_7, 0, L_8, NULL);
		goto IL_007d;
	}

IL_0039:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_9 = __this->____array;
		int32_t L_10 = __this->____head;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_11 = V_0;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_12 = __this->____array;
		NullCheck(L_12);
		int32_t L_13 = __this->____head;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_9, L_10, (RuntimeArray*)L_11, 0, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_12)->max_length)), L_13)), NULL);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_14 = __this->____array;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_15 = V_0;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_16 = __this->____array;
		NullCheck(L_16);
		int32_t L_17 = __this->____head;
		int32_t L_18 = __this->____tail;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_14, 0, (RuntimeArray*)L_15, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_16)->max_length)), L_17)), L_18, NULL);
	}

IL_007d:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_19 = V_0;
		__this->____array = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_19);
		__this->____head = 0;
		int32_t L_20 = __this->____size;
		int32_t L_21 = ___0_capacity;
		if ((((int32_t)L_20) == ((int32_t)L_21)))
		{
			G_B6_0 = __this;
			goto IL_009d;
		}
		G_B5_0 = __this;
	}
	{
		int32_t L_22 = __this->____size;
		G_B7_0 = L_22;
		G_B7_1 = G_B5_0;
		goto IL_009e;
	}

IL_009d:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
	}

IL_009e:
	{
		NullCheck(G_B7_1);
		G_B7_1->____tail = G_B7_0;
		int32_t L_23 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_23, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_MoveNext_m556B77D096A97022BDACBFD4C2C78ABD6309A48C_gshared (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* __this, int32_t* ___0_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t* L_0 = ___0_index;
		int32_t L_1 = *((int32_t*)L_0);
		V_0 = ((int32_t)il2cpp_codegen_add(L_1, 1));
		int32_t L_2 = V_0;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = __this->____array;
		NullCheck(L_3);
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))))
		{
			goto IL_0012;
		}
	}
	{
		V_0 = 0;
	}

IL_0012:
	{
		int32_t* L_4 = ___0_index;
		int32_t L_5 = V_0;
		*((int32_t*)L_4) = (int32_t)L_5;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_ThrowForEmptyQueue_m4A409F6A724BB2356563FCEA1FD83322718EE8C9_gshared (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* __this, const RuntimeMethod* method) 
{
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1102619AA6FB2A4AADBDAA47DDC096AE04C772C0)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_mF9F0CCD361DD36335F701637DB0A91CDFCD40E19_gshared (Queue_1_t66D4A65BAEEC35917BB5E09E63B6FDB1F110200A* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		fsVersionedTypeU5BU5D_tF4A5B18C49769943892747B1A1040CAE86746E1F* L_0;
		L_0 = Array_Empty_TisfsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8_mE2BC05CF2CE0B2267A4A0BF14227F75DE3AE1B0C_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		__this->____array = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m33C64AFBF189BD0AA25EBC4608E517BBD625089E_gshared (Queue_1_t66D4A65BAEEC35917BB5E09E63B6FDB1F110200A* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_1 = ___0_capacity;
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_2);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_4 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC37D78082ACFC8DEE7B32D9351C6E433A074FEC7)), L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0020:
	{
		int32_t L_5 = ___0_capacity;
		fsVersionedTypeU5BU5D_tF4A5B18C49769943892747B1A1040CAE86746E1F* L_6 = (fsVersionedTypeU5BU5D_tF4A5B18C49769943892747B1A1040CAE86746E1F*)(fsVersionedTypeU5BU5D_tF4A5B18C49769943892747B1A1040CAE86746E1F*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_5);
		__this->____array = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_6);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_m651F8A9D673A33075773C8090B4EA59E2C4916BB_gshared (Queue_1_t66D4A65BAEEC35917BB5E09E63B6FDB1F110200A* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_System_Collections_ICollection_get_IsSynchronized_mB0B18989FE14B56DFDC8AC1383E31F475C2A01BE_gshared (Queue_1_t66D4A65BAEEC35917BB5E09E63B6FDB1F110200A* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_ICollection_get_SyncRoot_m23080B78D734DBA312F467215436F584853E5298_gshared (Queue_1_t66D4A65BAEEC35917BB5E09E63B6FDB1F110200A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____syncRoot;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Clear_mBF6656865D56AE3A991C615258860EE6193BD7A5_gshared (Queue_1_t66D4A65BAEEC35917BB5E09E63B6FDB1F110200A* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (!L_0)
		{
			goto IL_006f;
		}
	}
	{
	}
	{
		int32_t L_1 = __this->____head;
		int32_t L_2 = __this->____tail;
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_0036;
		}
	}
	{
		fsVersionedTypeU5BU5D_tF4A5B18C49769943892747B1A1040CAE86746E1F* L_3 = __this->____array;
		int32_t L_4 = __this->____head;
		int32_t L_5 = __this->____size;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, L_4, L_5, NULL);
		goto IL_0068;
	}

IL_0036:
	{
		fsVersionedTypeU5BU5D_tF4A5B18C49769943892747B1A1040CAE86746E1F* L_6 = __this->____array;
		int32_t L_7 = __this->____head;
		fsVersionedTypeU5BU5D_tF4A5B18C49769943892747B1A1040CAE86746E1F* L_8 = __this->____array;
		NullCheck(L_8);
		int32_t L_9 = __this->____head;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_6, L_7, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_8)->max_length)), L_9)), NULL);
		fsVersionedTypeU5BU5D_tF4A5B18C49769943892747B1A1040CAE86746E1F* L_10 = __this->____array;
		int32_t L_11 = __this->____tail;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_10, 0, L_11, NULL);
	}

IL_0068:
	{
		__this->____size = 0;
	}

IL_006f:
	{
		__this->____head = 0;
		__this->____tail = 0;
		int32_t L_12 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_12, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_System_Collections_ICollection_CopyTo_m1083053FCFD0D7DDA7FAA5807BB10B5934D8CB11_gshared (Queue_1_t66D4A65BAEEC35917BB5E09E63B6FDB1F110200A* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	int32_t G_B17_0 = 0;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeArray* L_2 = ___0_array;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_2, NULL);
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral967D403A541A1026A83D548E5AD5CA800AD4EFB5)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0027:
	{
		RuntimeArray* L_5 = ___0_array;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_5, 0, NULL);
		if (!L_6)
		{
			goto IL_0040;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6195D7DA68D16D4985AD1A1B4FD2841A43CDDE70)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, method);
	}

IL_0040:
	{
		RuntimeArray* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_8, NULL);
		V_0 = L_9;
		int32_t L_10 = ___1_index;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_11 = ___1_index;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) <= ((int32_t)L_12)))
		{
			goto IL_0065;
		}
	}

IL_004f:
	{
		int32_t L_13 = ___1_index;
		int32_t L_14 = L_13;
		RuntimeObject* L_15 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_14);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_16 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_16, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), L_15, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, method);
	}

IL_0065:
	{
		int32_t L_17 = V_0;
		int32_t L_18 = ___1_index;
		int32_t L_19 = __this->____size;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_17, L_18))) >= ((int32_t)L_19)))
		{
			goto IL_007b;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_20 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_20, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, method);
	}

IL_007b:
	{
		int32_t L_21 = __this->____size;
		V_1 = L_21;
		int32_t L_22 = V_1;
		if (L_22)
		{
			goto IL_0086;
		}
	}
	{
		return;
	}

IL_0086:
	{
	}
	try
	{
		{
			fsVersionedTypeU5BU5D_tF4A5B18C49769943892747B1A1040CAE86746E1F* L_23 = __this->____array;
			NullCheck(L_23);
			int32_t L_24 = __this->____head;
			int32_t L_25 = V_1;
			if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_23)->max_length)), L_24))) < ((int32_t)L_25)))
			{
				goto IL_009c_1;
			}
		}
		{
			int32_t L_26 = V_1;
			G_B17_0 = L_26;
			goto IL_00ab_1;
		}

IL_009c_1:
		{
			fsVersionedTypeU5BU5D_tF4A5B18C49769943892747B1A1040CAE86746E1F* L_27 = __this->____array;
			NullCheck(L_27);
			int32_t L_28 = __this->____head;
			G_B17_0 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_27)->max_length)), L_28));
		}

IL_00ab_1:
		{
			V_2 = G_B17_0;
			fsVersionedTypeU5BU5D_tF4A5B18C49769943892747B1A1040CAE86746E1F* L_29 = __this->____array;
			int32_t L_30 = __this->____head;
			RuntimeArray* L_31 = ___0_array;
			int32_t L_32 = ___1_index;
			int32_t L_33 = V_2;
			Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_29, L_30, L_31, L_32, L_33, NULL);
			int32_t L_34 = V_1;
			int32_t L_35 = V_2;
			V_1 = ((int32_t)il2cpp_codegen_subtract(L_34, L_35));
			int32_t L_36 = V_1;
			if ((((int32_t)L_36) <= ((int32_t)0)))
			{
				goto IL_00e7_1;
			}
		}
		{
			fsVersionedTypeU5BU5D_tF4A5B18C49769943892747B1A1040CAE86746E1F* L_37 = __this->____array;
			RuntimeArray* L_38 = ___0_array;
			int32_t L_39 = ___1_index;
			fsVersionedTypeU5BU5D_tF4A5B18C49769943892747B1A1040CAE86746E1F* L_40 = __this->____array;
			NullCheck(L_40);
			int32_t L_41 = __this->____head;
			int32_t L_42 = V_1;
			Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_37, 0, L_38, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_39, ((int32_t)(((RuntimeArray*)L_40)->max_length)))), L_41)), L_42, NULL);
		}

IL_00e7_1:
		{
			goto IL_00fa;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00e9;
		}
		throw e;
	}

CATCH_00e9:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_43 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_44 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_44, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBD0381A992FDF4F7DA60E5D83689FE7FF6309CB8)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_44, method);
	}

IL_00fa:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_m18D26287FE9A32E930D02B66939DFB31D5FCF78F_gshared (Queue_1_t66D4A65BAEEC35917BB5E09E63B6FDB1F110200A* __this, fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____size;
		fsVersionedTypeU5BU5D_tF4A5B18C49769943892747B1A1040CAE86746E1F* L_1 = __this->____array;
		NullCheck(L_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))))))
		{
			goto IL_0045;
		}
	}
	{
		fsVersionedTypeU5BU5D_tF4A5B18C49769943892747B1A1040CAE86746E1F* L_2 = __this->____array;
		NullCheck(L_2);
		V_0 = ((int32_t)((int64_t)(((int64_t)il2cpp_codegen_multiply(((int64_t)((int32_t)(((RuntimeArray*)L_2)->max_length))), ((int64_t)((int32_t)200))))/((int64_t)((int32_t)100)))));
		int32_t L_3 = V_0;
		fsVersionedTypeU5BU5D_tF4A5B18C49769943892747B1A1040CAE86746E1F* L_4 = __this->____array;
		NullCheck(L_4);
		if ((((int32_t)L_3) >= ((int32_t)((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_4)->max_length)), 4)))))
		{
			goto IL_003e;
		}
	}
	{
		fsVersionedTypeU5BU5D_tF4A5B18C49769943892747B1A1040CAE86746E1F* L_5 = __this->____array;
		NullCheck(L_5);
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_5)->max_length)), 4));
	}

IL_003e:
	{
		int32_t L_6 = V_0;
		Queue_1_SetCapacity_m14974813FC1A5CF64863A43F459B1EA54951EF4B(__this, L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
	}

IL_0045:
	{
		fsVersionedTypeU5BU5D_tF4A5B18C49769943892747B1A1040CAE86746E1F* L_7 = __this->____array;
		int32_t L_8 = __this->____tail;
		fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 L_9 = ___0_item;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8)L_9);
		int32_t* L_10 = (int32_t*)(&__this->____tail);
		Queue_1_MoveNext_m9576D15FA3B418D2B0635A1AEC929FC1FBF8B7DC(__this, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		int32_t L_11 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_11, 1));
		int32_t L_12 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_12, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t46A96D1902EB6E630D5DAADD490183C6117140EB Queue_1_GetEnumerator_m5FE9BD6D1B207580A4F53E7257EEDF930A6030B4_gshared (Queue_1_t66D4A65BAEEC35917BB5E09E63B6FDB1F110200A* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t46A96D1902EB6E630D5DAADD490183C6117140EB L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m8835940C7ADB7336B372B7491513F6EFA5FD4799((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m52BB3C5EFF7D8C65593447C335CFF5B68FDAD1C0_gshared (Queue_1_t66D4A65BAEEC35917BB5E09E63B6FDB1F110200A* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t46A96D1902EB6E630D5DAADD490183C6117140EB L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m8835940C7ADB7336B372B7491513F6EFA5FD4799((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		Enumerator_t46A96D1902EB6E630D5DAADD490183C6117140EB L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_IEnumerable_GetEnumerator_mC257374375F09D87B96AAE010159BEE1CF73EB82_gshared (Queue_1_t66D4A65BAEEC35917BB5E09E63B6FDB1F110200A* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t46A96D1902EB6E630D5DAADD490183C6117140EB L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m8835940C7ADB7336B372B7491513F6EFA5FD4799((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		Enumerator_t46A96D1902EB6E630D5DAADD490183C6117140EB L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 Queue_1_Dequeue_m54E80CEB7DA8D9BE61571B0F602A47B14C0FC0C2_gshared (Queue_1_t66D4A65BAEEC35917BB5E09E63B6FDB1F110200A* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	fsVersionedTypeU5BU5D_tF4A5B18C49769943892747B1A1040CAE86746E1F* V_1 = NULL;
	fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 V_2;
	memset((&V_2), 0, sizeof(V_2));
	fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 G_B4_0;
	memset((&G_B4_0), 0, sizeof(G_B4_0));
	fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		int32_t L_0 = __this->____head;
		V_0 = L_0;
		fsVersionedTypeU5BU5D_tF4A5B18C49769943892747B1A1040CAE86746E1F* L_1 = __this->____array;
		V_1 = L_1;
		int32_t L_2 = __this->____size;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		Queue_1_ThrowForEmptyQueue_mF881C86AA32F6E038826FACA66B04D1017730272(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}

IL_001c:
	{
		fsVersionedTypeU5BU5D_tF4A5B18C49769943892747B1A1040CAE86746E1F* L_3 = V_1;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		G_B3_0 = L_6;
	}
	{
		fsVersionedTypeU5BU5D_tF4A5B18C49769943892747B1A1040CAE86746E1F* L_7 = V_1;
		int32_t L_8 = V_0;
		il2cpp_codegen_initobj((&V_2), sizeof(fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8));
		fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 L_9 = V_2;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8)L_9);
		G_B4_0 = G_B3_0;
	}

IL_003a:
	{
		int32_t* L_10 = (int32_t*)(&__this->____head);
		Queue_1_MoveNext_m9576D15FA3B418D2B0635A1AEC929FC1FBF8B7DC(__this, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		int32_t L_11 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
		int32_t L_12 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_12, 1));
		return G_B4_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 Queue_1_Peek_m7364EED09A3549FBED78B58780C6CBAFF38EE4B0_gshared (Queue_1_t66D4A65BAEEC35917BB5E09E63B6FDB1F110200A* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		Queue_1_ThrowForEmptyQueue_mF881C86AA32F6E038826FACA66B04D1017730272(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}

IL_000e:
	{
		fsVersionedTypeU5BU5D_tF4A5B18C49769943892747B1A1040CAE86746E1F* L_1 = __this->____array;
		int32_t L_2 = __this->____head;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsVersionedTypeU5BU5D_tF4A5B18C49769943892747B1A1040CAE86746E1F* Queue_1_ToArray_m40F3F43D416B6C2635C769417D5D08D74CF8876C_gshared (Queue_1_t66D4A65BAEEC35917BB5E09E63B6FDB1F110200A* __this, const RuntimeMethod* method) 
{
	fsVersionedTypeU5BU5D_tF4A5B18C49769943892747B1A1040CAE86746E1F* V_0 = NULL;
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		fsVersionedTypeU5BU5D_tF4A5B18C49769943892747B1A1040CAE86746E1F* L_1;
		L_1 = Array_Empty_TisfsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8_mE2BC05CF2CE0B2267A4A0BF14227F75DE3AE1B0C_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____size;
		fsVersionedTypeU5BU5D_tF4A5B18C49769943892747B1A1040CAE86746E1F* L_3 = (fsVersionedTypeU5BU5D_tF4A5B18C49769943892747B1A1040CAE86746E1F*)(fsVersionedTypeU5BU5D_tF4A5B18C49769943892747B1A1040CAE86746E1F*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_2);
		V_0 = L_3;
		int32_t L_4 = __this->____head;
		int32_t L_5 = __this->____tail;
		if ((((int32_t)L_4) >= ((int32_t)L_5)))
		{
			goto IL_0043;
		}
	}
	{
		fsVersionedTypeU5BU5D_tF4A5B18C49769943892747B1A1040CAE86746E1F* L_6 = __this->____array;
		int32_t L_7 = __this->____head;
		fsVersionedTypeU5BU5D_tF4A5B18C49769943892747B1A1040CAE86746E1F* L_8 = V_0;
		int32_t L_9 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_6, L_7, (RuntimeArray*)L_8, 0, L_9, NULL);
		goto IL_0087;
	}

IL_0043:
	{
		fsVersionedTypeU5BU5D_tF4A5B18C49769943892747B1A1040CAE86746E1F* L_10 = __this->____array;
		int32_t L_11 = __this->____head;
		fsVersionedTypeU5BU5D_tF4A5B18C49769943892747B1A1040CAE86746E1F* L_12 = V_0;
		fsVersionedTypeU5BU5D_tF4A5B18C49769943892747B1A1040CAE86746E1F* L_13 = __this->____array;
		NullCheck(L_13);
		int32_t L_14 = __this->____head;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_10, L_11, (RuntimeArray*)L_12, 0, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_13)->max_length)), L_14)), NULL);
		fsVersionedTypeU5BU5D_tF4A5B18C49769943892747B1A1040CAE86746E1F* L_15 = __this->____array;
		fsVersionedTypeU5BU5D_tF4A5B18C49769943892747B1A1040CAE86746E1F* L_16 = V_0;
		fsVersionedTypeU5BU5D_tF4A5B18C49769943892747B1A1040CAE86746E1F* L_17 = __this->____array;
		NullCheck(L_17);
		int32_t L_18 = __this->____head;
		int32_t L_19 = __this->____tail;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_15, 0, (RuntimeArray*)L_16, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_17)->max_length)), L_18)), L_19, NULL);
	}

IL_0087:
	{
		fsVersionedTypeU5BU5D_tF4A5B18C49769943892747B1A1040CAE86746E1F* L_20 = V_0;
		return L_20;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_SetCapacity_m14974813FC1A5CF64863A43F459B1EA54951EF4B_gshared (Queue_1_t66D4A65BAEEC35917BB5E09E63B6FDB1F110200A* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	fsVersionedTypeU5BU5D_tF4A5B18C49769943892747B1A1040CAE86746E1F* V_0 = NULL;
	Queue_1_t66D4A65BAEEC35917BB5E09E63B6FDB1F110200A* G_B6_0 = NULL;
	Queue_1_t66D4A65BAEEC35917BB5E09E63B6FDB1F110200A* G_B5_0 = NULL;
	int32_t G_B7_0 = 0;
	Queue_1_t66D4A65BAEEC35917BB5E09E63B6FDB1F110200A* G_B7_1 = NULL;
	{
		int32_t L_0 = ___0_capacity;
		fsVersionedTypeU5BU5D_tF4A5B18C49769943892747B1A1040CAE86746E1F* L_1 = (fsVersionedTypeU5BU5D_tF4A5B18C49769943892747B1A1040CAE86746E1F*)(fsVersionedTypeU5BU5D_tF4A5B18C49769943892747B1A1040CAE86746E1F*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_007d;
		}
	}
	{
		int32_t L_3 = __this->____head;
		int32_t L_4 = __this->____tail;
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0039;
		}
	}
	{
		fsVersionedTypeU5BU5D_tF4A5B18C49769943892747B1A1040CAE86746E1F* L_5 = __this->____array;
		int32_t L_6 = __this->____head;
		fsVersionedTypeU5BU5D_tF4A5B18C49769943892747B1A1040CAE86746E1F* L_7 = V_0;
		int32_t L_8 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, L_6, (RuntimeArray*)L_7, 0, L_8, NULL);
		goto IL_007d;
	}

IL_0039:
	{
		fsVersionedTypeU5BU5D_tF4A5B18C49769943892747B1A1040CAE86746E1F* L_9 = __this->____array;
		int32_t L_10 = __this->____head;
		fsVersionedTypeU5BU5D_tF4A5B18C49769943892747B1A1040CAE86746E1F* L_11 = V_0;
		fsVersionedTypeU5BU5D_tF4A5B18C49769943892747B1A1040CAE86746E1F* L_12 = __this->____array;
		NullCheck(L_12);
		int32_t L_13 = __this->____head;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_9, L_10, (RuntimeArray*)L_11, 0, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_12)->max_length)), L_13)), NULL);
		fsVersionedTypeU5BU5D_tF4A5B18C49769943892747B1A1040CAE86746E1F* L_14 = __this->____array;
		fsVersionedTypeU5BU5D_tF4A5B18C49769943892747B1A1040CAE86746E1F* L_15 = V_0;
		fsVersionedTypeU5BU5D_tF4A5B18C49769943892747B1A1040CAE86746E1F* L_16 = __this->____array;
		NullCheck(L_16);
		int32_t L_17 = __this->____head;
		int32_t L_18 = __this->____tail;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_14, 0, (RuntimeArray*)L_15, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_16)->max_length)), L_17)), L_18, NULL);
	}

IL_007d:
	{
		fsVersionedTypeU5BU5D_tF4A5B18C49769943892747B1A1040CAE86746E1F* L_19 = V_0;
		__this->____array = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_19);
		__this->____head = 0;
		int32_t L_20 = __this->____size;
		int32_t L_21 = ___0_capacity;
		if ((((int32_t)L_20) == ((int32_t)L_21)))
		{
			G_B6_0 = __this;
			goto IL_009d;
		}
		G_B5_0 = __this;
	}
	{
		int32_t L_22 = __this->____size;
		G_B7_0 = L_22;
		G_B7_1 = G_B5_0;
		goto IL_009e;
	}

IL_009d:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
	}

IL_009e:
	{
		NullCheck(G_B7_1);
		G_B7_1->____tail = G_B7_0;
		int32_t L_23 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_23, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_MoveNext_m9576D15FA3B418D2B0635A1AEC929FC1FBF8B7DC_gshared (Queue_1_t66D4A65BAEEC35917BB5E09E63B6FDB1F110200A* __this, int32_t* ___0_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t* L_0 = ___0_index;
		int32_t L_1 = *((int32_t*)L_0);
		V_0 = ((int32_t)il2cpp_codegen_add(L_1, 1));
		int32_t L_2 = V_0;
		fsVersionedTypeU5BU5D_tF4A5B18C49769943892747B1A1040CAE86746E1F* L_3 = __this->____array;
		NullCheck(L_3);
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))))
		{
			goto IL_0012;
		}
	}
	{
		V_0 = 0;
	}

IL_0012:
	{
		int32_t* L_4 = ___0_index;
		int32_t L_5 = V_0;
		*((int32_t*)L_4) = (int32_t)L_5;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_ThrowForEmptyQueue_mF881C86AA32F6E038826FACA66B04D1017730272_gshared (Queue_1_t66D4A65BAEEC35917BB5E09E63B6FDB1F110200A* __this, const RuntimeMethod* method) 
{
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1102619AA6FB2A4AADBDAA47DDC096AE04C772C0)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m5793B48CD425E5D7A93313DF986956BBAA8B65C7_gshared (Queue_1_t488F4FFC87B785BACAAF18A6B2E9307E5451DF68* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* L_0;
		L_0 = Array_Empty_TisEventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2_mAEF379183FDCBD07C651D56777D4AA5A5C969A47_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		__this->____array = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m98E586DB678570DC3A40CF92702290F1519727DC_gshared (Queue_1_t488F4FFC87B785BACAAF18A6B2E9307E5451DF68* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_1 = ___0_capacity;
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_2);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_4 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC37D78082ACFC8DEE7B32D9351C6E433A074FEC7)), L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0020:
	{
		int32_t L_5 = ___0_capacity;
		EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* L_6 = (EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8*)(EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_5);
		__this->____array = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_6);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_m08F50B5D83CD07085F9B86C829170F37FE7EF037_gshared (Queue_1_t488F4FFC87B785BACAAF18A6B2E9307E5451DF68* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_System_Collections_ICollection_get_IsSynchronized_mBA41708EE6C38EC390C71F2AC83CC2FFC3D5D1E2_gshared (Queue_1_t488F4FFC87B785BACAAF18A6B2E9307E5451DF68* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_ICollection_get_SyncRoot_mC4119DAB01098BD9FAC558B758E91E4FD2283F21_gshared (Queue_1_t488F4FFC87B785BACAAF18A6B2E9307E5451DF68* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____syncRoot;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Clear_mA1E2EE278988F339DC3EC2FA17F909904DE3C974_gshared (Queue_1_t488F4FFC87B785BACAAF18A6B2E9307E5451DF68* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (!L_0)
		{
			goto IL_006f;
		}
	}
	{
	}
	{
		int32_t L_1 = __this->____head;
		int32_t L_2 = __this->____tail;
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_0036;
		}
	}
	{
		EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* L_3 = __this->____array;
		int32_t L_4 = __this->____head;
		int32_t L_5 = __this->____size;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, L_4, L_5, NULL);
		goto IL_0068;
	}

IL_0036:
	{
		EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* L_6 = __this->____array;
		int32_t L_7 = __this->____head;
		EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* L_8 = __this->____array;
		NullCheck(L_8);
		int32_t L_9 = __this->____head;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_6, L_7, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_8)->max_length)), L_9)), NULL);
		EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* L_10 = __this->____array;
		int32_t L_11 = __this->____tail;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_10, 0, L_11, NULL);
	}

IL_0068:
	{
		__this->____size = 0;
	}

IL_006f:
	{
		__this->____head = 0;
		__this->____tail = 0;
		int32_t L_12 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_12, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_System_Collections_ICollection_CopyTo_mD31AA840A14A0863D14662B3432C6F244F3ED007_gshared (Queue_1_t488F4FFC87B785BACAAF18A6B2E9307E5451DF68* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	int32_t G_B17_0 = 0;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeArray* L_2 = ___0_array;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_2, NULL);
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral967D403A541A1026A83D548E5AD5CA800AD4EFB5)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0027:
	{
		RuntimeArray* L_5 = ___0_array;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_5, 0, NULL);
		if (!L_6)
		{
			goto IL_0040;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6195D7DA68D16D4985AD1A1B4FD2841A43CDDE70)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, method);
	}

IL_0040:
	{
		RuntimeArray* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_8, NULL);
		V_0 = L_9;
		int32_t L_10 = ___1_index;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_11 = ___1_index;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) <= ((int32_t)L_12)))
		{
			goto IL_0065;
		}
	}

IL_004f:
	{
		int32_t L_13 = ___1_index;
		int32_t L_14 = L_13;
		RuntimeObject* L_15 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_14);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_16 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_16, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), L_15, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, method);
	}

IL_0065:
	{
		int32_t L_17 = V_0;
		int32_t L_18 = ___1_index;
		int32_t L_19 = __this->____size;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_17, L_18))) >= ((int32_t)L_19)))
		{
			goto IL_007b;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_20 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_20, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, method);
	}

IL_007b:
	{
		int32_t L_21 = __this->____size;
		V_1 = L_21;
		int32_t L_22 = V_1;
		if (L_22)
		{
			goto IL_0086;
		}
	}
	{
		return;
	}

IL_0086:
	{
	}
	try
	{
		{
			EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* L_23 = __this->____array;
			NullCheck(L_23);
			int32_t L_24 = __this->____head;
			int32_t L_25 = V_1;
			if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_23)->max_length)), L_24))) < ((int32_t)L_25)))
			{
				goto IL_009c_1;
			}
		}
		{
			int32_t L_26 = V_1;
			G_B17_0 = L_26;
			goto IL_00ab_1;
		}

IL_009c_1:
		{
			EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* L_27 = __this->____array;
			NullCheck(L_27);
			int32_t L_28 = __this->____head;
			G_B17_0 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_27)->max_length)), L_28));
		}

IL_00ab_1:
		{
			V_2 = G_B17_0;
			EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* L_29 = __this->____array;
			int32_t L_30 = __this->____head;
			RuntimeArray* L_31 = ___0_array;
			int32_t L_32 = ___1_index;
			int32_t L_33 = V_2;
			Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_29, L_30, L_31, L_32, L_33, NULL);
			int32_t L_34 = V_1;
			int32_t L_35 = V_2;
			V_1 = ((int32_t)il2cpp_codegen_subtract(L_34, L_35));
			int32_t L_36 = V_1;
			if ((((int32_t)L_36) <= ((int32_t)0)))
			{
				goto IL_00e7_1;
			}
		}
		{
			EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* L_37 = __this->____array;
			RuntimeArray* L_38 = ___0_array;
			int32_t L_39 = ___1_index;
			EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* L_40 = __this->____array;
			NullCheck(L_40);
			int32_t L_41 = __this->____head;
			int32_t L_42 = V_1;
			Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_37, 0, L_38, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_39, ((int32_t)(((RuntimeArray*)L_40)->max_length)))), L_41)), L_42, NULL);
		}

IL_00e7_1:
		{
			goto IL_00fa;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00e9;
		}
		throw e;
	}

CATCH_00e9:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_43 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_44 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_44, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBD0381A992FDF4F7DA60E5D83689FE7FF6309CB8)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_44, method);
	}

IL_00fa:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_mBF44A4060F486104A2FC16D28D0BDBD08BC83491_gshared (Queue_1_t488F4FFC87B785BACAAF18A6B2E9307E5451DF68* __this, EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2 ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____size;
		EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* L_1 = __this->____array;
		NullCheck(L_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))))))
		{
			goto IL_0045;
		}
	}
	{
		EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* L_2 = __this->____array;
		NullCheck(L_2);
		V_0 = ((int32_t)((int64_t)(((int64_t)il2cpp_codegen_multiply(((int64_t)((int32_t)(((RuntimeArray*)L_2)->max_length))), ((int64_t)((int32_t)200))))/((int64_t)((int32_t)100)))));
		int32_t L_3 = V_0;
		EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* L_4 = __this->____array;
		NullCheck(L_4);
		if ((((int32_t)L_3) >= ((int32_t)((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_4)->max_length)), 4)))))
		{
			goto IL_003e;
		}
	}
	{
		EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* L_5 = __this->____array;
		NullCheck(L_5);
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_5)->max_length)), 4));
	}

IL_003e:
	{
		int32_t L_6 = V_0;
		Queue_1_SetCapacity_m5115601B916B93D40CF5F1D0E701A44CE4AC00BD(__this, L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
	}

IL_0045:
	{
		EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* L_7 = __this->____array;
		int32_t L_8 = __this->____tail;
		EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2 L_9 = ___0_item;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2)L_9);
		int32_t* L_10 = (int32_t*)(&__this->____tail);
		Queue_1_MoveNext_mF35B8278118E61AA6201303604959C981D6274D8(__this, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		int32_t L_11 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_11, 1));
		int32_t L_12 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_12, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t3B7550C1130BBD2F1A4BAE88FB62305FC7A95602 Queue_1_GetEnumerator_m6811DC2FBA9AB8EEA103F351BF62C1CC4510F9C2_gshared (Queue_1_t488F4FFC87B785BACAAF18A6B2E9307E5451DF68* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t3B7550C1130BBD2F1A4BAE88FB62305FC7A95602 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mEDD7119A358C62419FF8F06020B05C38E755671E((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m72D68C500677FCC7AD2E98F73EE2F4C101BFFBB3_gshared (Queue_1_t488F4FFC87B785BACAAF18A6B2E9307E5451DF68* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t3B7550C1130BBD2F1A4BAE88FB62305FC7A95602 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mEDD7119A358C62419FF8F06020B05C38E755671E((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		Enumerator_t3B7550C1130BBD2F1A4BAE88FB62305FC7A95602 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_IEnumerable_GetEnumerator_mF93C321C59477A3AD51B3070041130177696ED5F_gshared (Queue_1_t488F4FFC87B785BACAAF18A6B2E9307E5451DF68* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t3B7550C1130BBD2F1A4BAE88FB62305FC7A95602 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mEDD7119A358C62419FF8F06020B05C38E755671E((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		Enumerator_t3B7550C1130BBD2F1A4BAE88FB62305FC7A95602 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2 Queue_1_Dequeue_m90F123DA1976DFBC4D8B331B07B1EB833A2E4509_gshared (Queue_1_t488F4FFC87B785BACAAF18A6B2E9307E5451DF68* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* V_1 = NULL;
	EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2 G_B4_0;
	memset((&G_B4_0), 0, sizeof(G_B4_0));
	EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2 G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		int32_t L_0 = __this->____head;
		V_0 = L_0;
		EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* L_1 = __this->____array;
		V_1 = L_1;
		int32_t L_2 = __this->____size;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		Queue_1_ThrowForEmptyQueue_m10EBE3090FFF2A9725A7DB3135D2C29BEE30F2C0(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}

IL_001c:
	{
		EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* L_3 = V_1;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2 L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		G_B3_0 = L_6;
	}
	{
		EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* L_7 = V_1;
		int32_t L_8 = V_0;
		il2cpp_codegen_initobj((&V_2), sizeof(EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2));
		EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2 L_9 = V_2;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2)L_9);
		G_B4_0 = G_B3_0;
	}

IL_003a:
	{
		int32_t* L_10 = (int32_t*)(&__this->____head);
		Queue_1_MoveNext_mF35B8278118E61AA6201303604959C981D6274D8(__this, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		int32_t L_11 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
		int32_t L_12 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_12, 1));
		return G_B4_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2 Queue_1_Peek_m1C5E26653158385CA6B819CCC6C0B2E54FE805F5_gshared (Queue_1_t488F4FFC87B785BACAAF18A6B2E9307E5451DF68* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		Queue_1_ThrowForEmptyQueue_m10EBE3090FFF2A9725A7DB3135D2C29BEE30F2C0(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}

IL_000e:
	{
		EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* L_1 = __this->____array;
		int32_t L_2 = __this->____head;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2 L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* Queue_1_ToArray_m09076A35A3E2BDFFFB21BCF0AA9E6AAE78901DE9_gshared (Queue_1_t488F4FFC87B785BACAAF18A6B2E9307E5451DF68* __this, const RuntimeMethod* method) 
{
	EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* V_0 = NULL;
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* L_1;
		L_1 = Array_Empty_TisEventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2_mAEF379183FDCBD07C651D56777D4AA5A5C969A47_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____size;
		EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* L_3 = (EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8*)(EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_2);
		V_0 = L_3;
		int32_t L_4 = __this->____head;
		int32_t L_5 = __this->____tail;
		if ((((int32_t)L_4) >= ((int32_t)L_5)))
		{
			goto IL_0043;
		}
	}
	{
		EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* L_6 = __this->____array;
		int32_t L_7 = __this->____head;
		EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* L_8 = V_0;
		int32_t L_9 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_6, L_7, (RuntimeArray*)L_8, 0, L_9, NULL);
		goto IL_0087;
	}

IL_0043:
	{
		EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* L_10 = __this->____array;
		int32_t L_11 = __this->____head;
		EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* L_12 = V_0;
		EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* L_13 = __this->____array;
		NullCheck(L_13);
		int32_t L_14 = __this->____head;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_10, L_11, (RuntimeArray*)L_12, 0, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_13)->max_length)), L_14)), NULL);
		EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* L_15 = __this->____array;
		EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* L_16 = V_0;
		EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* L_17 = __this->____array;
		NullCheck(L_17);
		int32_t L_18 = __this->____head;
		int32_t L_19 = __this->____tail;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_15, 0, (RuntimeArray*)L_16, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_17)->max_length)), L_18)), L_19, NULL);
	}

IL_0087:
	{
		EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* L_20 = V_0;
		return L_20;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_SetCapacity_m5115601B916B93D40CF5F1D0E701A44CE4AC00BD_gshared (Queue_1_t488F4FFC87B785BACAAF18A6B2E9307E5451DF68* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* V_0 = NULL;
	Queue_1_t488F4FFC87B785BACAAF18A6B2E9307E5451DF68* G_B6_0 = NULL;
	Queue_1_t488F4FFC87B785BACAAF18A6B2E9307E5451DF68* G_B5_0 = NULL;
	int32_t G_B7_0 = 0;
	Queue_1_t488F4FFC87B785BACAAF18A6B2E9307E5451DF68* G_B7_1 = NULL;
	{
		int32_t L_0 = ___0_capacity;
		EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* L_1 = (EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8*)(EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_007d;
		}
	}
	{
		int32_t L_3 = __this->____head;
		int32_t L_4 = __this->____tail;
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0039;
		}
	}
	{
		EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* L_5 = __this->____array;
		int32_t L_6 = __this->____head;
		EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* L_7 = V_0;
		int32_t L_8 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, L_6, (RuntimeArray*)L_7, 0, L_8, NULL);
		goto IL_007d;
	}

IL_0039:
	{
		EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* L_9 = __this->____array;
		int32_t L_10 = __this->____head;
		EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* L_11 = V_0;
		EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* L_12 = __this->____array;
		NullCheck(L_12);
		int32_t L_13 = __this->____head;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_9, L_10, (RuntimeArray*)L_11, 0, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_12)->max_length)), L_13)), NULL);
		EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* L_14 = __this->____array;
		EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* L_15 = V_0;
		EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* L_16 = __this->____array;
		NullCheck(L_16);
		int32_t L_17 = __this->____head;
		int32_t L_18 = __this->____tail;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_14, 0, (RuntimeArray*)L_15, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_16)->max_length)), L_17)), L_18, NULL);
	}

IL_007d:
	{
		EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* L_19 = V_0;
		__this->____array = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_19);
		__this->____head = 0;
		int32_t L_20 = __this->____size;
		int32_t L_21 = ___0_capacity;
		if ((((int32_t)L_20) == ((int32_t)L_21)))
		{
			G_B6_0 = __this;
			goto IL_009d;
		}
		G_B5_0 = __this;
	}
	{
		int32_t L_22 = __this->____size;
		G_B7_0 = L_22;
		G_B7_1 = G_B5_0;
		goto IL_009e;
	}

IL_009d:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
	}

IL_009e:
	{
		NullCheck(G_B7_1);
		G_B7_1->____tail = G_B7_0;
		int32_t L_23 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_23, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_MoveNext_mF35B8278118E61AA6201303604959C981D6274D8_gshared (Queue_1_t488F4FFC87B785BACAAF18A6B2E9307E5451DF68* __this, int32_t* ___0_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t* L_0 = ___0_index;
		int32_t L_1 = *((int32_t*)L_0);
		V_0 = ((int32_t)il2cpp_codegen_add(L_1, 1));
		int32_t L_2 = V_0;
		EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* L_3 = __this->____array;
		NullCheck(L_3);
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))))
		{
			goto IL_0012;
		}
	}
	{
		V_0 = 0;
	}

IL_0012:
	{
		int32_t* L_4 = ___0_index;
		int32_t L_5 = V_0;
		*((int32_t*)L_4) = (int32_t)L_5;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_ThrowForEmptyQueue_m10EBE3090FFF2A9725A7DB3135D2C29BEE30F2C0_gshared (Queue_1_t488F4FFC87B785BACAAF18A6B2E9307E5451DF68* __this, const RuntimeMethod* method) 
{
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1102619AA6FB2A4AADBDAA47DDC096AE04C772C0)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_mF2FF56A00D20B444715F5BDC02C03B8C93B48E82_gshared (Queue_1_t5A4C4B12CBF6AE19441E8689D9CD0CB72497458F* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		CollisionModuleU5BU5D_t9520E15E871E6E2B11790028A8CE1A6E1C0F2EC2* L_0;
		L_0 = Array_Empty_TisCollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083_mFF74E742D160D48C5C4C03E9219544E7D5E133D5_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		__this->____array = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m49D10893ADC187135F853658FA7FBE5A69DC032A_gshared (Queue_1_t5A4C4B12CBF6AE19441E8689D9CD0CB72497458F* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_1 = ___0_capacity;
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_2);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_4 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC37D78082ACFC8DEE7B32D9351C6E433A074FEC7)), L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0020:
	{
		int32_t L_5 = ___0_capacity;
		CollisionModuleU5BU5D_t9520E15E871E6E2B11790028A8CE1A6E1C0F2EC2* L_6 = (CollisionModuleU5BU5D_t9520E15E871E6E2B11790028A8CE1A6E1C0F2EC2*)(CollisionModuleU5BU5D_t9520E15E871E6E2B11790028A8CE1A6E1C0F2EC2*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_5);
		__this->____array = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_6);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_m452771BBDAD43C622B487BF6767B8752CDA93D50_gshared (Queue_1_t5A4C4B12CBF6AE19441E8689D9CD0CB72497458F* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_System_Collections_ICollection_get_IsSynchronized_m7830690CA1FD40F01C41F8E9283D5C3BABC7816F_gshared (Queue_1_t5A4C4B12CBF6AE19441E8689D9CD0CB72497458F* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_ICollection_get_SyncRoot_m73EE6F6B571D15A135553DADECB5A3A922D1612C_gshared (Queue_1_t5A4C4B12CBF6AE19441E8689D9CD0CB72497458F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____syncRoot;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Clear_mA6B42B1C6E8B01B04D44FF43AA9B929278821FCF_gshared (Queue_1_t5A4C4B12CBF6AE19441E8689D9CD0CB72497458F* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (!L_0)
		{
			goto IL_006f;
		}
	}
	{
	}
	{
		int32_t L_1 = __this->____head;
		int32_t L_2 = __this->____tail;
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_0036;
		}
	}
	{
		CollisionModuleU5BU5D_t9520E15E871E6E2B11790028A8CE1A6E1C0F2EC2* L_3 = __this->____array;
		int32_t L_4 = __this->____head;
		int32_t L_5 = __this->____size;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, L_4, L_5, NULL);
		goto IL_0068;
	}

IL_0036:
	{
		CollisionModuleU5BU5D_t9520E15E871E6E2B11790028A8CE1A6E1C0F2EC2* L_6 = __this->____array;
		int32_t L_7 = __this->____head;
		CollisionModuleU5BU5D_t9520E15E871E6E2B11790028A8CE1A6E1C0F2EC2* L_8 = __this->____array;
		NullCheck(L_8);
		int32_t L_9 = __this->____head;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_6, L_7, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_8)->max_length)), L_9)), NULL);
		CollisionModuleU5BU5D_t9520E15E871E6E2B11790028A8CE1A6E1C0F2EC2* L_10 = __this->____array;
		int32_t L_11 = __this->____tail;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_10, 0, L_11, NULL);
	}

IL_0068:
	{
		__this->____size = 0;
	}

IL_006f:
	{
		__this->____head = 0;
		__this->____tail = 0;
		int32_t L_12 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_12, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_System_Collections_ICollection_CopyTo_m7E2E34A3DF1AFEABBBD5D632CB3C850236B3634E_gshared (Queue_1_t5A4C4B12CBF6AE19441E8689D9CD0CB72497458F* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	int32_t G_B17_0 = 0;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeArray* L_2 = ___0_array;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_2, NULL);
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral967D403A541A1026A83D548E5AD5CA800AD4EFB5)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0027:
	{
		RuntimeArray* L_5 = ___0_array;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_5, 0, NULL);
		if (!L_6)
		{
			goto IL_0040;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6195D7DA68D16D4985AD1A1B4FD2841A43CDDE70)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, method);
	}

IL_0040:
	{
		RuntimeArray* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_8, NULL);
		V_0 = L_9;
		int32_t L_10 = ___1_index;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_11 = ___1_index;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) <= ((int32_t)L_12)))
		{
			goto IL_0065;
		}
	}

IL_004f:
	{
		int32_t L_13 = ___1_index;
		int32_t L_14 = L_13;
		RuntimeObject* L_15 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_14);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_16 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_16, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), L_15, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, method);
	}

IL_0065:
	{
		int32_t L_17 = V_0;
		int32_t L_18 = ___1_index;
		int32_t L_19 = __this->____size;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_17, L_18))) >= ((int32_t)L_19)))
		{
			goto IL_007b;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_20 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_20, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, method);
	}

IL_007b:
	{
		int32_t L_21 = __this->____size;
		V_1 = L_21;
		int32_t L_22 = V_1;
		if (L_22)
		{
			goto IL_0086;
		}
	}
	{
		return;
	}

IL_0086:
	{
	}
	try
	{
		{
			CollisionModuleU5BU5D_t9520E15E871E6E2B11790028A8CE1A6E1C0F2EC2* L_23 = __this->____array;
			NullCheck(L_23);
			int32_t L_24 = __this->____head;
			int32_t L_25 = V_1;
			if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_23)->max_length)), L_24))) < ((int32_t)L_25)))
			{
				goto IL_009c_1;
			}
		}
		{
			int32_t L_26 = V_1;
			G_B17_0 = L_26;
			goto IL_00ab_1;
		}

IL_009c_1:
		{
			CollisionModuleU5BU5D_t9520E15E871E6E2B11790028A8CE1A6E1C0F2EC2* L_27 = __this->____array;
			NullCheck(L_27);
			int32_t L_28 = __this->____head;
			G_B17_0 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_27)->max_length)), L_28));
		}

IL_00ab_1:
		{
			V_2 = G_B17_0;
			CollisionModuleU5BU5D_t9520E15E871E6E2B11790028A8CE1A6E1C0F2EC2* L_29 = __this->____array;
			int32_t L_30 = __this->____head;
			RuntimeArray* L_31 = ___0_array;
			int32_t L_32 = ___1_index;
			int32_t L_33 = V_2;
			Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_29, L_30, L_31, L_32, L_33, NULL);
			int32_t L_34 = V_1;
			int32_t L_35 = V_2;
			V_1 = ((int32_t)il2cpp_codegen_subtract(L_34, L_35));
			int32_t L_36 = V_1;
			if ((((int32_t)L_36) <= ((int32_t)0)))
			{
				goto IL_00e7_1;
			}
		}
		{
			CollisionModuleU5BU5D_t9520E15E871E6E2B11790028A8CE1A6E1C0F2EC2* L_37 = __this->____array;
			RuntimeArray* L_38 = ___0_array;
			int32_t L_39 = ___1_index;
			CollisionModuleU5BU5D_t9520E15E871E6E2B11790028A8CE1A6E1C0F2EC2* L_40 = __this->____array;
			NullCheck(L_40);
			int32_t L_41 = __this->____head;
			int32_t L_42 = V_1;
			Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_37, 0, L_38, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_39, ((int32_t)(((RuntimeArray*)L_40)->max_length)))), L_41)), L_42, NULL);
		}

IL_00e7_1:
		{
			goto IL_00fa;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00e9;
		}
		throw e;
	}

CATCH_00e9:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_43 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_44 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_44, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBD0381A992FDF4F7DA60E5D83689FE7FF6309CB8)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_44, method);
	}

IL_00fa:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_mC446A14F8EE8FE3925E00DBC378EC0A25E28E99D_gshared (Queue_1_t5A4C4B12CBF6AE19441E8689D9CD0CB72497458F* __this, CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083 ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____size;
		CollisionModuleU5BU5D_t9520E15E871E6E2B11790028A8CE1A6E1C0F2EC2* L_1 = __this->____array;
		NullCheck(L_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))))))
		{
			goto IL_0045;
		}
	}
	{
		CollisionModuleU5BU5D_t9520E15E871E6E2B11790028A8CE1A6E1C0F2EC2* L_2 = __this->____array;
		NullCheck(L_2);
		V_0 = ((int32_t)((int64_t)(((int64_t)il2cpp_codegen_multiply(((int64_t)((int32_t)(((RuntimeArray*)L_2)->max_length))), ((int64_t)((int32_t)200))))/((int64_t)((int32_t)100)))));
		int32_t L_3 = V_0;
		CollisionModuleU5BU5D_t9520E15E871E6E2B11790028A8CE1A6E1C0F2EC2* L_4 = __this->____array;
		NullCheck(L_4);
		if ((((int32_t)L_3) >= ((int32_t)((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_4)->max_length)), 4)))))
		{
			goto IL_003e;
		}
	}
	{
		CollisionModuleU5BU5D_t9520E15E871E6E2B11790028A8CE1A6E1C0F2EC2* L_5 = __this->____array;
		NullCheck(L_5);
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_5)->max_length)), 4));
	}

IL_003e:
	{
		int32_t L_6 = V_0;
		Queue_1_SetCapacity_m0655099AAFB44A7F3820A1C842B007B3AECE518F(__this, L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
	}

IL_0045:
	{
		CollisionModuleU5BU5D_t9520E15E871E6E2B11790028A8CE1A6E1C0F2EC2* L_7 = __this->____array;
		int32_t L_8 = __this->____tail;
		CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083 L_9 = ___0_item;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083)L_9);
		int32_t* L_10 = (int32_t*)(&__this->____tail);
		Queue_1_MoveNext_mD0617C3FB9194932497300D41B5B74524AD3E2A0(__this, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		int32_t L_11 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_11, 1));
		int32_t L_12 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_12, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t55121C7B4E26C3F446A3233DF51C8C4550A8DC63 Queue_1_GetEnumerator_mB28F6E1BAD6A33D6C8C90F8163BC068B84E85849_gshared (Queue_1_t5A4C4B12CBF6AE19441E8689D9CD0CB72497458F* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t55121C7B4E26C3F446A3233DF51C8C4550A8DC63 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mE1F1F004BEE05F1BDD320827FF60851805E818F9((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m07DDC2E734176F5BF9418278A38F2FF02072C3D4_gshared (Queue_1_t5A4C4B12CBF6AE19441E8689D9CD0CB72497458F* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t55121C7B4E26C3F446A3233DF51C8C4550A8DC63 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mE1F1F004BEE05F1BDD320827FF60851805E818F9((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		Enumerator_t55121C7B4E26C3F446A3233DF51C8C4550A8DC63 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_IEnumerable_GetEnumerator_m51B219713D3E63063D48B17E9037F8E669481058_gshared (Queue_1_t5A4C4B12CBF6AE19441E8689D9CD0CB72497458F* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t55121C7B4E26C3F446A3233DF51C8C4550A8DC63 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mE1F1F004BEE05F1BDD320827FF60851805E818F9((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		Enumerator_t55121C7B4E26C3F446A3233DF51C8C4550A8DC63 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083 Queue_1_Dequeue_m455E8A29D12ECBC4F50D91C07588BC90B6FF88ED_gshared (Queue_1_t5A4C4B12CBF6AE19441E8689D9CD0CB72497458F* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	CollisionModuleU5BU5D_t9520E15E871E6E2B11790028A8CE1A6E1C0F2EC2* V_1 = NULL;
	CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083 V_2;
	memset((&V_2), 0, sizeof(V_2));
	CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083 G_B4_0;
	memset((&G_B4_0), 0, sizeof(G_B4_0));
	CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083 G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		int32_t L_0 = __this->____head;
		V_0 = L_0;
		CollisionModuleU5BU5D_t9520E15E871E6E2B11790028A8CE1A6E1C0F2EC2* L_1 = __this->____array;
		V_1 = L_1;
		int32_t L_2 = __this->____size;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		Queue_1_ThrowForEmptyQueue_m2378CE00B367BA09FD7BD47FB1B0A77329998F39(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}

IL_001c:
	{
		CollisionModuleU5BU5D_t9520E15E871E6E2B11790028A8CE1A6E1C0F2EC2* L_3 = V_1;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083 L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		G_B3_0 = L_6;
	}
	{
		CollisionModuleU5BU5D_t9520E15E871E6E2B11790028A8CE1A6E1C0F2EC2* L_7 = V_1;
		int32_t L_8 = V_0;
		il2cpp_codegen_initobj((&V_2), sizeof(CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083));
		CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083 L_9 = V_2;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083)L_9);
		G_B4_0 = G_B3_0;
	}

IL_003a:
	{
		int32_t* L_10 = (int32_t*)(&__this->____head);
		Queue_1_MoveNext_mD0617C3FB9194932497300D41B5B74524AD3E2A0(__this, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		int32_t L_11 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
		int32_t L_12 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_12, 1));
		return G_B4_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083 Queue_1_Peek_m739F26EC949E7E9F3BD92659E45B5B66D1BDB349_gshared (Queue_1_t5A4C4B12CBF6AE19441E8689D9CD0CB72497458F* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		Queue_1_ThrowForEmptyQueue_m2378CE00B367BA09FD7BD47FB1B0A77329998F39(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}

IL_000e:
	{
		CollisionModuleU5BU5D_t9520E15E871E6E2B11790028A8CE1A6E1C0F2EC2* L_1 = __this->____array;
		int32_t L_2 = __this->____head;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083 L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CollisionModuleU5BU5D_t9520E15E871E6E2B11790028A8CE1A6E1C0F2EC2* Queue_1_ToArray_m49172D83E86C57B21C55F63FA636690B6D2FDB3E_gshared (Queue_1_t5A4C4B12CBF6AE19441E8689D9CD0CB72497458F* __this, const RuntimeMethod* method) 
{
	CollisionModuleU5BU5D_t9520E15E871E6E2B11790028A8CE1A6E1C0F2EC2* V_0 = NULL;
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		CollisionModuleU5BU5D_t9520E15E871E6E2B11790028A8CE1A6E1C0F2EC2* L_1;
		L_1 = Array_Empty_TisCollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083_mFF74E742D160D48C5C4C03E9219544E7D5E133D5_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____size;
		CollisionModuleU5BU5D_t9520E15E871E6E2B11790028A8CE1A6E1C0F2EC2* L_3 = (CollisionModuleU5BU5D_t9520E15E871E6E2B11790028A8CE1A6E1C0F2EC2*)(CollisionModuleU5BU5D_t9520E15E871E6E2B11790028A8CE1A6E1C0F2EC2*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_2);
		V_0 = L_3;
		int32_t L_4 = __this->____head;
		int32_t L_5 = __this->____tail;
		if ((((int32_t)L_4) >= ((int32_t)L_5)))
		{
			goto IL_0043;
		}
	}
	{
		CollisionModuleU5BU5D_t9520E15E871E6E2B11790028A8CE1A6E1C0F2EC2* L_6 = __this->____array;
		int32_t L_7 = __this->____head;
		CollisionModuleU5BU5D_t9520E15E871E6E2B11790028A8CE1A6E1C0F2EC2* L_8 = V_0;
		int32_t L_9 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_6, L_7, (RuntimeArray*)L_8, 0, L_9, NULL);
		goto IL_0087;
	}

IL_0043:
	{
		CollisionModuleU5BU5D_t9520E15E871E6E2B11790028A8CE1A6E1C0F2EC2* L_10 = __this->____array;
		int32_t L_11 = __this->____head;
		CollisionModuleU5BU5D_t9520E15E871E6E2B11790028A8CE1A6E1C0F2EC2* L_12 = V_0;
		CollisionModuleU5BU5D_t9520E15E871E6E2B11790028A8CE1A6E1C0F2EC2* L_13 = __this->____array;
		NullCheck(L_13);
		int32_t L_14 = __this->____head;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_10, L_11, (RuntimeArray*)L_12, 0, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_13)->max_length)), L_14)), NULL);
		CollisionModuleU5BU5D_t9520E15E871E6E2B11790028A8CE1A6E1C0F2EC2* L_15 = __this->____array;
		CollisionModuleU5BU5D_t9520E15E871E6E2B11790028A8CE1A6E1C0F2EC2* L_16 = V_0;
		CollisionModuleU5BU5D_t9520E15E871E6E2B11790028A8CE1A6E1C0F2EC2* L_17 = __this->____array;
		NullCheck(L_17);
		int32_t L_18 = __this->____head;
		int32_t L_19 = __this->____tail;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_15, 0, (RuntimeArray*)L_16, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_17)->max_length)), L_18)), L_19, NULL);
	}

IL_0087:
	{
		CollisionModuleU5BU5D_t9520E15E871E6E2B11790028A8CE1A6E1C0F2EC2* L_20 = V_0;
		return L_20;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_SetCapacity_m0655099AAFB44A7F3820A1C842B007B3AECE518F_gshared (Queue_1_t5A4C4B12CBF6AE19441E8689D9CD0CB72497458F* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	CollisionModuleU5BU5D_t9520E15E871E6E2B11790028A8CE1A6E1C0F2EC2* V_0 = NULL;
	Queue_1_t5A4C4B12CBF6AE19441E8689D9CD0CB72497458F* G_B6_0 = NULL;
	Queue_1_t5A4C4B12CBF6AE19441E8689D9CD0CB72497458F* G_B5_0 = NULL;
	int32_t G_B7_0 = 0;
	Queue_1_t5A4C4B12CBF6AE19441E8689D9CD0CB72497458F* G_B7_1 = NULL;
	{
		int32_t L_0 = ___0_capacity;
		CollisionModuleU5BU5D_t9520E15E871E6E2B11790028A8CE1A6E1C0F2EC2* L_1 = (CollisionModuleU5BU5D_t9520E15E871E6E2B11790028A8CE1A6E1C0F2EC2*)(CollisionModuleU5BU5D_t9520E15E871E6E2B11790028A8CE1A6E1C0F2EC2*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_007d;
		}
	}
	{
		int32_t L_3 = __this->____head;
		int32_t L_4 = __this->____tail;
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0039;
		}
	}
	{
		CollisionModuleU5BU5D_t9520E15E871E6E2B11790028A8CE1A6E1C0F2EC2* L_5 = __this->____array;
		int32_t L_6 = __this->____head;
		CollisionModuleU5BU5D_t9520E15E871E6E2B11790028A8CE1A6E1C0F2EC2* L_7 = V_0;
		int32_t L_8 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, L_6, (RuntimeArray*)L_7, 0, L_8, NULL);
		goto IL_007d;
	}

IL_0039:
	{
		CollisionModuleU5BU5D_t9520E15E871E6E2B11790028A8CE1A6E1C0F2EC2* L_9 = __this->____array;
		int32_t L_10 = __this->____head;
		CollisionModuleU5BU5D_t9520E15E871E6E2B11790028A8CE1A6E1C0F2EC2* L_11 = V_0;
		CollisionModuleU5BU5D_t9520E15E871E6E2B11790028A8CE1A6E1C0F2EC2* L_12 = __this->____array;
		NullCheck(L_12);
		int32_t L_13 = __this->____head;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_9, L_10, (RuntimeArray*)L_11, 0, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_12)->max_length)), L_13)), NULL);
		CollisionModuleU5BU5D_t9520E15E871E6E2B11790028A8CE1A6E1C0F2EC2* L_14 = __this->____array;
		CollisionModuleU5BU5D_t9520E15E871E6E2B11790028A8CE1A6E1C0F2EC2* L_15 = V_0;
		CollisionModuleU5BU5D_t9520E15E871E6E2B11790028A8CE1A6E1C0F2EC2* L_16 = __this->____array;
		NullCheck(L_16);
		int32_t L_17 = __this->____head;
		int32_t L_18 = __this->____tail;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_14, 0, (RuntimeArray*)L_15, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_16)->max_length)), L_17)), L_18, NULL);
	}

IL_007d:
	{
		CollisionModuleU5BU5D_t9520E15E871E6E2B11790028A8CE1A6E1C0F2EC2* L_19 = V_0;
		__this->____array = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_19);
		__this->____head = 0;
		int32_t L_20 = __this->____size;
		int32_t L_21 = ___0_capacity;
		if ((((int32_t)L_20) == ((int32_t)L_21)))
		{
			G_B6_0 = __this;
			goto IL_009d;
		}
		G_B5_0 = __this;
	}
	{
		int32_t L_22 = __this->____size;
		G_B7_0 = L_22;
		G_B7_1 = G_B5_0;
		goto IL_009e;
	}

IL_009d:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
	}

IL_009e:
	{
		NullCheck(G_B7_1);
		G_B7_1->____tail = G_B7_0;
		int32_t L_23 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_23, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_MoveNext_mD0617C3FB9194932497300D41B5B74524AD3E2A0_gshared (Queue_1_t5A4C4B12CBF6AE19441E8689D9CD0CB72497458F* __this, int32_t* ___0_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t* L_0 = ___0_index;
		int32_t L_1 = *((int32_t*)L_0);
		V_0 = ((int32_t)il2cpp_codegen_add(L_1, 1));
		int32_t L_2 = V_0;
		CollisionModuleU5BU5D_t9520E15E871E6E2B11790028A8CE1A6E1C0F2EC2* L_3 = __this->____array;
		NullCheck(L_3);
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))))
		{
			goto IL_0012;
		}
	}
	{
		V_0 = 0;
	}

IL_0012:
	{
		int32_t* L_4 = ___0_index;
		int32_t L_5 = V_0;
		*((int32_t*)L_4) = (int32_t)L_5;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_ThrowForEmptyQueue_m2378CE00B367BA09FD7BD47FB1B0A77329998F39_gshared (Queue_1_t5A4C4B12CBF6AE19441E8689D9CD0CB72497458F* __this, const RuntimeMethod* method) 
{
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1102619AA6FB2A4AADBDAA47DDC096AE04C772C0)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_mC9CDBBAF6BAE3243BA4769FB6584BA4FAA37B5BA_gshared (Queue_1_tF4E2FE02CE3AE00F88E131F0BA8C98CE987815F9* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		ColorBySpeedModuleU5BU5D_t0E5EE314CD20E42735C32A7A06AFC14BF9F17BD1* L_0;
		L_0 = Array_Empty_TisColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_m12B6F1ECF375A80FB7C42121CBBD37A51893C2A5_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		__this->____array = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_mC9192845CA83A8DA78D42C74A7F598AA9CF166AE_gshared (Queue_1_tF4E2FE02CE3AE00F88E131F0BA8C98CE987815F9* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_1 = ___0_capacity;
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_2);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_4 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC37D78082ACFC8DEE7B32D9351C6E433A074FEC7)), L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0020:
	{
		int32_t L_5 = ___0_capacity;
		ColorBySpeedModuleU5BU5D_t0E5EE314CD20E42735C32A7A06AFC14BF9F17BD1* L_6 = (ColorBySpeedModuleU5BU5D_t0E5EE314CD20E42735C32A7A06AFC14BF9F17BD1*)(ColorBySpeedModuleU5BU5D_t0E5EE314CD20E42735C32A7A06AFC14BF9F17BD1*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_5);
		__this->____array = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_6);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_mC29E94FCC83236D1FC3417ED2CD4DBD605ED275B_gshared (Queue_1_tF4E2FE02CE3AE00F88E131F0BA8C98CE987815F9* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_System_Collections_ICollection_get_IsSynchronized_m926024117A88590F0069BF62974147017FD87C66_gshared (Queue_1_tF4E2FE02CE3AE00F88E131F0BA8C98CE987815F9* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_ICollection_get_SyncRoot_m0A5005B84AB133A9ECDF8BF9A872E479D89193F2_gshared (Queue_1_tF4E2FE02CE3AE00F88E131F0BA8C98CE987815F9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____syncRoot;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Clear_m2452F715E74C5CAA9AD174276A0A0D6CE799B2C2_gshared (Queue_1_tF4E2FE02CE3AE00F88E131F0BA8C98CE987815F9* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (!L_0)
		{
			goto IL_006f;
		}
	}
	{
	}
	{
		int32_t L_1 = __this->____head;
		int32_t L_2 = __this->____tail;
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_0036;
		}
	}
	{
		ColorBySpeedModuleU5BU5D_t0E5EE314CD20E42735C32A7A06AFC14BF9F17BD1* L_3 = __this->____array;
		int32_t L_4 = __this->____head;
		int32_t L_5 = __this->____size;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, L_4, L_5, NULL);
		goto IL_0068;
	}

IL_0036:
	{
		ColorBySpeedModuleU5BU5D_t0E5EE314CD20E42735C32A7A06AFC14BF9F17BD1* L_6 = __this->____array;
		int32_t L_7 = __this->____head;
		ColorBySpeedModuleU5BU5D_t0E5EE314CD20E42735C32A7A06AFC14BF9F17BD1* L_8 = __this->____array;
		NullCheck(L_8);
		int32_t L_9 = __this->____head;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_6, L_7, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_8)->max_length)), L_9)), NULL);
		ColorBySpeedModuleU5BU5D_t0E5EE314CD20E42735C32A7A06AFC14BF9F17BD1* L_10 = __this->____array;
		int32_t L_11 = __this->____tail;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_10, 0, L_11, NULL);
	}

IL_0068:
	{
		__this->____size = 0;
	}

IL_006f:
	{
		__this->____head = 0;
		__this->____tail = 0;
		int32_t L_12 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_12, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_System_Collections_ICollection_CopyTo_m0136647357C3B71859A7F97185CCBC259B4099ED_gshared (Queue_1_tF4E2FE02CE3AE00F88E131F0BA8C98CE987815F9* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	int32_t G_B17_0 = 0;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeArray* L_2 = ___0_array;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_2, NULL);
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral967D403A541A1026A83D548E5AD5CA800AD4EFB5)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0027:
	{
		RuntimeArray* L_5 = ___0_array;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_5, 0, NULL);
		if (!L_6)
		{
			goto IL_0040;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6195D7DA68D16D4985AD1A1B4FD2841A43CDDE70)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, method);
	}

IL_0040:
	{
		RuntimeArray* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_8, NULL);
		V_0 = L_9;
		int32_t L_10 = ___1_index;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_11 = ___1_index;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) <= ((int32_t)L_12)))
		{
			goto IL_0065;
		}
	}

IL_004f:
	{
		int32_t L_13 = ___1_index;
		int32_t L_14 = L_13;
		RuntimeObject* L_15 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_14);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_16 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_16, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), L_15, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, method);
	}

IL_0065:
	{
		int32_t L_17 = V_0;
		int32_t L_18 = ___1_index;
		int32_t L_19 = __this->____size;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_17, L_18))) >= ((int32_t)L_19)))
		{
			goto IL_007b;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_20 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_20, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, method);
	}

IL_007b:
	{
		int32_t L_21 = __this->____size;
		V_1 = L_21;
		int32_t L_22 = V_1;
		if (L_22)
		{
			goto IL_0086;
		}
	}
	{
		return;
	}

IL_0086:
	{
	}
	try
	{
		{
			ColorBySpeedModuleU5BU5D_t0E5EE314CD20E42735C32A7A06AFC14BF9F17BD1* L_23 = __this->____array;
			NullCheck(L_23);
			int32_t L_24 = __this->____head;
			int32_t L_25 = V_1;
			if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_23)->max_length)), L_24))) < ((int32_t)L_25)))
			{
				goto IL_009c_1;
			}
		}
		{
			int32_t L_26 = V_1;
			G_B17_0 = L_26;
			goto IL_00ab_1;
		}

IL_009c_1:
		{
			ColorBySpeedModuleU5BU5D_t0E5EE314CD20E42735C32A7A06AFC14BF9F17BD1* L_27 = __this->____array;
			NullCheck(L_27);
			int32_t L_28 = __this->____head;
			G_B17_0 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_27)->max_length)), L_28));
		}

IL_00ab_1:
		{
			V_2 = G_B17_0;
			ColorBySpeedModuleU5BU5D_t0E5EE314CD20E42735C32A7A06AFC14BF9F17BD1* L_29 = __this->____array;
			int32_t L_30 = __this->____head;
			RuntimeArray* L_31 = ___0_array;
			int32_t L_32 = ___1_index;
			int32_t L_33 = V_2;
			Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_29, L_30, L_31, L_32, L_33, NULL);
			int32_t L_34 = V_1;
			int32_t L_35 = V_2;
			V_1 = ((int32_t)il2cpp_codegen_subtract(L_34, L_35));
			int32_t L_36 = V_1;
			if ((((int32_t)L_36) <= ((int32_t)0)))
			{
				goto IL_00e7_1;
			}
		}
		{
			ColorBySpeedModuleU5BU5D_t0E5EE314CD20E42735C32A7A06AFC14BF9F17BD1* L_37 = __this->____array;
			RuntimeArray* L_38 = ___0_array;
			int32_t L_39 = ___1_index;
			ColorBySpeedModuleU5BU5D_t0E5EE314CD20E42735C32A7A06AFC14BF9F17BD1* L_40 = __this->____array;
			NullCheck(L_40);
			int32_t L_41 = __this->____head;
			int32_t L_42 = V_1;
			Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_37, 0, L_38, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_39, ((int32_t)(((RuntimeArray*)L_40)->max_length)))), L_41)), L_42, NULL);
		}

IL_00e7_1:
		{
			goto IL_00fa;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00e9;
		}
		throw e;
	}

CATCH_00e9:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_43 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_44 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_44, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBD0381A992FDF4F7DA60E5D83689FE7FF6309CB8)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_44, method);
	}

IL_00fa:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_m3CAEDB43524248D337A4727C0261BC63EDDE91F5_gshared (Queue_1_tF4E2FE02CE3AE00F88E131F0BA8C98CE987815F9* __this, ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____size;
		ColorBySpeedModuleU5BU5D_t0E5EE314CD20E42735C32A7A06AFC14BF9F17BD1* L_1 = __this->____array;
		NullCheck(L_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))))))
		{
			goto IL_0045;
		}
	}
	{
		ColorBySpeedModuleU5BU5D_t0E5EE314CD20E42735C32A7A06AFC14BF9F17BD1* L_2 = __this->____array;
		NullCheck(L_2);
		V_0 = ((int32_t)((int64_t)(((int64_t)il2cpp_codegen_multiply(((int64_t)((int32_t)(((RuntimeArray*)L_2)->max_length))), ((int64_t)((int32_t)200))))/((int64_t)((int32_t)100)))));
		int32_t L_3 = V_0;
		ColorBySpeedModuleU5BU5D_t0E5EE314CD20E42735C32A7A06AFC14BF9F17BD1* L_4 = __this->____array;
		NullCheck(L_4);
		if ((((int32_t)L_3) >= ((int32_t)((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_4)->max_length)), 4)))))
		{
			goto IL_003e;
		}
	}
	{
		ColorBySpeedModuleU5BU5D_t0E5EE314CD20E42735C32A7A06AFC14BF9F17BD1* L_5 = __this->____array;
		NullCheck(L_5);
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_5)->max_length)), 4));
	}

IL_003e:
	{
		int32_t L_6 = V_0;
		Queue_1_SetCapacity_m10AE89138B16771B4136F70E59C0AB461D9BE087(__this, L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
	}

IL_0045:
	{
		ColorBySpeedModuleU5BU5D_t0E5EE314CD20E42735C32A7A06AFC14BF9F17BD1* L_7 = __this->____array;
		int32_t L_8 = __this->____tail;
		ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B L_9 = ___0_item;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B)L_9);
		int32_t* L_10 = (int32_t*)(&__this->____tail);
		Queue_1_MoveNext_m0D133B79D8B56B5FAD65816C1F203B7381C99973(__this, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		int32_t L_11 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_11, 1));
		int32_t L_12 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_12, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9228D1C112BAACD489B647500756A260AF7812BF Queue_1_GetEnumerator_mE84DE2909EDC4EAA60BB895E76B4977D3CD517BC_gshared (Queue_1_tF4E2FE02CE3AE00F88E131F0BA8C98CE987815F9* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t9228D1C112BAACD489B647500756A260AF7812BF L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m931911556E664FC64DB82994DEC247AA0881E324((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m7BE67AEFCB232C79FBD008AD775E1A49466C1B8B_gshared (Queue_1_tF4E2FE02CE3AE00F88E131F0BA8C98CE987815F9* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t9228D1C112BAACD489B647500756A260AF7812BF L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m931911556E664FC64DB82994DEC247AA0881E324((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		Enumerator_t9228D1C112BAACD489B647500756A260AF7812BF L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_IEnumerable_GetEnumerator_mCFC3BF7F08853B5B52A08BAB75BE27C4A0388108_gshared (Queue_1_tF4E2FE02CE3AE00F88E131F0BA8C98CE987815F9* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t9228D1C112BAACD489B647500756A260AF7812BF L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m931911556E664FC64DB82994DEC247AA0881E324((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		Enumerator_t9228D1C112BAACD489B647500756A260AF7812BF L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B Queue_1_Dequeue_m5807C9E295238CC034B24B8754BFF35CAD199EAD_gshared (Queue_1_tF4E2FE02CE3AE00F88E131F0BA8C98CE987815F9* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	ColorBySpeedModuleU5BU5D_t0E5EE314CD20E42735C32A7A06AFC14BF9F17BD1* V_1 = NULL;
	ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B V_2;
	memset((&V_2), 0, sizeof(V_2));
	ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B G_B4_0;
	memset((&G_B4_0), 0, sizeof(G_B4_0));
	ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		int32_t L_0 = __this->____head;
		V_0 = L_0;
		ColorBySpeedModuleU5BU5D_t0E5EE314CD20E42735C32A7A06AFC14BF9F17BD1* L_1 = __this->____array;
		V_1 = L_1;
		int32_t L_2 = __this->____size;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		Queue_1_ThrowForEmptyQueue_mD0F520927AF5234B328FEC1AA686A8510D588EE1(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}

IL_001c:
	{
		ColorBySpeedModuleU5BU5D_t0E5EE314CD20E42735C32A7A06AFC14BF9F17BD1* L_3 = V_1;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		G_B3_0 = L_6;
	}
	{
		ColorBySpeedModuleU5BU5D_t0E5EE314CD20E42735C32A7A06AFC14BF9F17BD1* L_7 = V_1;
		int32_t L_8 = V_0;
		il2cpp_codegen_initobj((&V_2), sizeof(ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B));
		ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B L_9 = V_2;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B)L_9);
		G_B4_0 = G_B3_0;
	}

IL_003a:
	{
		int32_t* L_10 = (int32_t*)(&__this->____head);
		Queue_1_MoveNext_m0D133B79D8B56B5FAD65816C1F203B7381C99973(__this, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		int32_t L_11 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
		int32_t L_12 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_12, 1));
		return G_B4_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B Queue_1_Peek_m0092C81E277F3CBC028FF1CD94BEB37081B1254E_gshared (Queue_1_tF4E2FE02CE3AE00F88E131F0BA8C98CE987815F9* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		Queue_1_ThrowForEmptyQueue_mD0F520927AF5234B328FEC1AA686A8510D588EE1(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}

IL_000e:
	{
		ColorBySpeedModuleU5BU5D_t0E5EE314CD20E42735C32A7A06AFC14BF9F17BD1* L_1 = __this->____array;
		int32_t L_2 = __this->____head;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ColorBySpeedModuleU5BU5D_t0E5EE314CD20E42735C32A7A06AFC14BF9F17BD1* Queue_1_ToArray_mDD0B8F5C033ED70165375EC099D13EC75CC74ABB_gshared (Queue_1_tF4E2FE02CE3AE00F88E131F0BA8C98CE987815F9* __this, const RuntimeMethod* method) 
{
	ColorBySpeedModuleU5BU5D_t0E5EE314CD20E42735C32A7A06AFC14BF9F17BD1* V_0 = NULL;
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ColorBySpeedModuleU5BU5D_t0E5EE314CD20E42735C32A7A06AFC14BF9F17BD1* L_1;
		L_1 = Array_Empty_TisColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_m12B6F1ECF375A80FB7C42121CBBD37A51893C2A5_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____size;
		ColorBySpeedModuleU5BU5D_t0E5EE314CD20E42735C32A7A06AFC14BF9F17BD1* L_3 = (ColorBySpeedModuleU5BU5D_t0E5EE314CD20E42735C32A7A06AFC14BF9F17BD1*)(ColorBySpeedModuleU5BU5D_t0E5EE314CD20E42735C32A7A06AFC14BF9F17BD1*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_2);
		V_0 = L_3;
		int32_t L_4 = __this->____head;
		int32_t L_5 = __this->____tail;
		if ((((int32_t)L_4) >= ((int32_t)L_5)))
		{
			goto IL_0043;
		}
	}
	{
		ColorBySpeedModuleU5BU5D_t0E5EE314CD20E42735C32A7A06AFC14BF9F17BD1* L_6 = __this->____array;
		int32_t L_7 = __this->____head;
		ColorBySpeedModuleU5BU5D_t0E5EE314CD20E42735C32A7A06AFC14BF9F17BD1* L_8 = V_0;
		int32_t L_9 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_6, L_7, (RuntimeArray*)L_8, 0, L_9, NULL);
		goto IL_0087;
	}

IL_0043:
	{
		ColorBySpeedModuleU5BU5D_t0E5EE314CD20E42735C32A7A06AFC14BF9F17BD1* L_10 = __this->____array;
		int32_t L_11 = __this->____head;
		ColorBySpeedModuleU5BU5D_t0E5EE314CD20E42735C32A7A06AFC14BF9F17BD1* L_12 = V_0;
		ColorBySpeedModuleU5BU5D_t0E5EE314CD20E42735C32A7A06AFC14BF9F17BD1* L_13 = __this->____array;
		NullCheck(L_13);
		int32_t L_14 = __this->____head;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_10, L_11, (RuntimeArray*)L_12, 0, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_13)->max_length)), L_14)), NULL);
		ColorBySpeedModuleU5BU5D_t0E5EE314CD20E42735C32A7A06AFC14BF9F17BD1* L_15 = __this->____array;
		ColorBySpeedModuleU5BU5D_t0E5EE314CD20E42735C32A7A06AFC14BF9F17BD1* L_16 = V_0;
		ColorBySpeedModuleU5BU5D_t0E5EE314CD20E42735C32A7A06AFC14BF9F17BD1* L_17 = __this->____array;
		NullCheck(L_17);
		int32_t L_18 = __this->____head;
		int32_t L_19 = __this->____tail;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_15, 0, (RuntimeArray*)L_16, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_17)->max_length)), L_18)), L_19, NULL);
	}

IL_0087:
	{
		ColorBySpeedModuleU5BU5D_t0E5EE314CD20E42735C32A7A06AFC14BF9F17BD1* L_20 = V_0;
		return L_20;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_SetCapacity_m10AE89138B16771B4136F70E59C0AB461D9BE087_gshared (Queue_1_tF4E2FE02CE3AE00F88E131F0BA8C98CE987815F9* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	ColorBySpeedModuleU5BU5D_t0E5EE314CD20E42735C32A7A06AFC14BF9F17BD1* V_0 = NULL;
	Queue_1_tF4E2FE02CE3AE00F88E131F0BA8C98CE987815F9* G_B6_0 = NULL;
	Queue_1_tF4E2FE02CE3AE00F88E131F0BA8C98CE987815F9* G_B5_0 = NULL;
	int32_t G_B7_0 = 0;
	Queue_1_tF4E2FE02CE3AE00F88E131F0BA8C98CE987815F9* G_B7_1 = NULL;
	{
		int32_t L_0 = ___0_capacity;
		ColorBySpeedModuleU5BU5D_t0E5EE314CD20E42735C32A7A06AFC14BF9F17BD1* L_1 = (ColorBySpeedModuleU5BU5D_t0E5EE314CD20E42735C32A7A06AFC14BF9F17BD1*)(ColorBySpeedModuleU5BU5D_t0E5EE314CD20E42735C32A7A06AFC14BF9F17BD1*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_007d;
		}
	}
	{
		int32_t L_3 = __this->____head;
		int32_t L_4 = __this->____tail;
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0039;
		}
	}
	{
		ColorBySpeedModuleU5BU5D_t0E5EE314CD20E42735C32A7A06AFC14BF9F17BD1* L_5 = __this->____array;
		int32_t L_6 = __this->____head;
		ColorBySpeedModuleU5BU5D_t0E5EE314CD20E42735C32A7A06AFC14BF9F17BD1* L_7 = V_0;
		int32_t L_8 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, L_6, (RuntimeArray*)L_7, 0, L_8, NULL);
		goto IL_007d;
	}

IL_0039:
	{
		ColorBySpeedModuleU5BU5D_t0E5EE314CD20E42735C32A7A06AFC14BF9F17BD1* L_9 = __this->____array;
		int32_t L_10 = __this->____head;
		ColorBySpeedModuleU5BU5D_t0E5EE314CD20E42735C32A7A06AFC14BF9F17BD1* L_11 = V_0;
		ColorBySpeedModuleU5BU5D_t0E5EE314CD20E42735C32A7A06AFC14BF9F17BD1* L_12 = __this->____array;
		NullCheck(L_12);
		int32_t L_13 = __this->____head;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_9, L_10, (RuntimeArray*)L_11, 0, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_12)->max_length)), L_13)), NULL);
		ColorBySpeedModuleU5BU5D_t0E5EE314CD20E42735C32A7A06AFC14BF9F17BD1* L_14 = __this->____array;
		ColorBySpeedModuleU5BU5D_t0E5EE314CD20E42735C32A7A06AFC14BF9F17BD1* L_15 = V_0;
		ColorBySpeedModuleU5BU5D_t0E5EE314CD20E42735C32A7A06AFC14BF9F17BD1* L_16 = __this->____array;
		NullCheck(L_16);
		int32_t L_17 = __this->____head;
		int32_t L_18 = __this->____tail;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_14, 0, (RuntimeArray*)L_15, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_16)->max_length)), L_17)), L_18, NULL);
	}

IL_007d:
	{
		ColorBySpeedModuleU5BU5D_t0E5EE314CD20E42735C32A7A06AFC14BF9F17BD1* L_19 = V_0;
		__this->____array = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_19);
		__this->____head = 0;
		int32_t L_20 = __this->____size;
		int32_t L_21 = ___0_capacity;
		if ((((int32_t)L_20) == ((int32_t)L_21)))
		{
			G_B6_0 = __this;
			goto IL_009d;
		}
		G_B5_0 = __this;
	}
	{
		int32_t L_22 = __this->____size;
		G_B7_0 = L_22;
		G_B7_1 = G_B5_0;
		goto IL_009e;
	}

IL_009d:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
	}

IL_009e:
	{
		NullCheck(G_B7_1);
		G_B7_1->____tail = G_B7_0;
		int32_t L_23 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_23, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_MoveNext_m0D133B79D8B56B5FAD65816C1F203B7381C99973_gshared (Queue_1_tF4E2FE02CE3AE00F88E131F0BA8C98CE987815F9* __this, int32_t* ___0_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t* L_0 = ___0_index;
		int32_t L_1 = *((int32_t*)L_0);
		V_0 = ((int32_t)il2cpp_codegen_add(L_1, 1));
		int32_t L_2 = V_0;
		ColorBySpeedModuleU5BU5D_t0E5EE314CD20E42735C32A7A06AFC14BF9F17BD1* L_3 = __this->____array;
		NullCheck(L_3);
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))))
		{
			goto IL_0012;
		}
	}
	{
		V_0 = 0;
	}

IL_0012:
	{
		int32_t* L_4 = ___0_index;
		int32_t L_5 = V_0;
		*((int32_t*)L_4) = (int32_t)L_5;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_ThrowForEmptyQueue_mD0F520927AF5234B328FEC1AA686A8510D588EE1_gshared (Queue_1_tF4E2FE02CE3AE00F88E131F0BA8C98CE987815F9* __this, const RuntimeMethod* method) 
{
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1102619AA6FB2A4AADBDAA47DDC096AE04C772C0)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_mFE6BFB8D78F948CA92AA168A843FA331583C52B1_gshared (Queue_1_tBB2A0C4F251B256F7DE42D6E2BA4238B4DF91F30* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		ColorOverLifetimeModuleU5BU5D_t56D392498D03FF1B36CADEB8B1C61DF772B575CA* L_0;
		L_0 = Array_Empty_TisColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9_mC1FDC75D8356A5C9870BF88F40972AFC7E8EF569_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		__this->____array = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_mFB6C228D33B20738F9312AD5E0B1A554508EC979_gshared (Queue_1_tBB2A0C4F251B256F7DE42D6E2BA4238B4DF91F30* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_1 = ___0_capacity;
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_2);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_4 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC37D78082ACFC8DEE7B32D9351C6E433A074FEC7)), L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0020:
	{
		int32_t L_5 = ___0_capacity;
		ColorOverLifetimeModuleU5BU5D_t56D392498D03FF1B36CADEB8B1C61DF772B575CA* L_6 = (ColorOverLifetimeModuleU5BU5D_t56D392498D03FF1B36CADEB8B1C61DF772B575CA*)(ColorOverLifetimeModuleU5BU5D_t56D392498D03FF1B36CADEB8B1C61DF772B575CA*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_5);
		__this->____array = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_6);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_m9FEFE088443DD40F5383330E361F1492EDDEF4A6_gshared (Queue_1_tBB2A0C4F251B256F7DE42D6E2BA4238B4DF91F30* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_System_Collections_ICollection_get_IsSynchronized_m46DDAA6FC0D0732320E47EC2299FB866A85AA60A_gshared (Queue_1_tBB2A0C4F251B256F7DE42D6E2BA4238B4DF91F30* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_ICollection_get_SyncRoot_m8F684FED58957DADAB648E4D2E4777ECC2BF2867_gshared (Queue_1_tBB2A0C4F251B256F7DE42D6E2BA4238B4DF91F30* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____syncRoot;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Clear_m20AE4877BC1D6881AA42BD319A01FE4AC2DBB762_gshared (Queue_1_tBB2A0C4F251B256F7DE42D6E2BA4238B4DF91F30* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (!L_0)
		{
			goto IL_006f;
		}
	}
	{
	}
	{
		int32_t L_1 = __this->____head;
		int32_t L_2 = __this->____tail;
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_0036;
		}
	}
	{
		ColorOverLifetimeModuleU5BU5D_t56D392498D03FF1B36CADEB8B1C61DF772B575CA* L_3 = __this->____array;
		int32_t L_4 = __this->____head;
		int32_t L_5 = __this->____size;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, L_4, L_5, NULL);
		goto IL_0068;
	}

IL_0036:
	{
		ColorOverLifetimeModuleU5BU5D_t56D392498D03FF1B36CADEB8B1C61DF772B575CA* L_6 = __this->____array;
		int32_t L_7 = __this->____head;
		ColorOverLifetimeModuleU5BU5D_t56D392498D03FF1B36CADEB8B1C61DF772B575CA* L_8 = __this->____array;
		NullCheck(L_8);
		int32_t L_9 = __this->____head;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_6, L_7, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_8)->max_length)), L_9)), NULL);
		ColorOverLifetimeModuleU5BU5D_t56D392498D03FF1B36CADEB8B1C61DF772B575CA* L_10 = __this->____array;
		int32_t L_11 = __this->____tail;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_10, 0, L_11, NULL);
	}

IL_0068:
	{
		__this->____size = 0;
	}

IL_006f:
	{
		__this->____head = 0;
		__this->____tail = 0;
		int32_t L_12 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_12, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_System_Collections_ICollection_CopyTo_m56E01062B3B041053A7C39FF459FF684688E0169_gshared (Queue_1_tBB2A0C4F251B256F7DE42D6E2BA4238B4DF91F30* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	int32_t G_B17_0 = 0;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeArray* L_2 = ___0_array;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_2, NULL);
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral967D403A541A1026A83D548E5AD5CA800AD4EFB5)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0027:
	{
		RuntimeArray* L_5 = ___0_array;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_5, 0, NULL);
		if (!L_6)
		{
			goto IL_0040;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6195D7DA68D16D4985AD1A1B4FD2841A43CDDE70)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, method);
	}

IL_0040:
	{
		RuntimeArray* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_8, NULL);
		V_0 = L_9;
		int32_t L_10 = ___1_index;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_11 = ___1_index;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) <= ((int32_t)L_12)))
		{
			goto IL_0065;
		}
	}

IL_004f:
	{
		int32_t L_13 = ___1_index;
		int32_t L_14 = L_13;
		RuntimeObject* L_15 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_14);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_16 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_16, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), L_15, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, method);
	}

IL_0065:
	{
		int32_t L_17 = V_0;
		int32_t L_18 = ___1_index;
		int32_t L_19 = __this->____size;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_17, L_18))) >= ((int32_t)L_19)))
		{
			goto IL_007b;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_20 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_20, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, method);
	}

IL_007b:
	{
		int32_t L_21 = __this->____size;
		V_1 = L_21;
		int32_t L_22 = V_1;
		if (L_22)
		{
			goto IL_0086;
		}
	}
	{
		return;
	}

IL_0086:
	{
	}
	try
	{
		{
			ColorOverLifetimeModuleU5BU5D_t56D392498D03FF1B36CADEB8B1C61DF772B575CA* L_23 = __this->____array;
			NullCheck(L_23);
			int32_t L_24 = __this->____head;
			int32_t L_25 = V_1;
			if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_23)->max_length)), L_24))) < ((int32_t)L_25)))
			{
				goto IL_009c_1;
			}
		}
		{
			int32_t L_26 = V_1;
			G_B17_0 = L_26;
			goto IL_00ab_1;
		}

IL_009c_1:
		{
			ColorOverLifetimeModuleU5BU5D_t56D392498D03FF1B36CADEB8B1C61DF772B575CA* L_27 = __this->____array;
			NullCheck(L_27);
			int32_t L_28 = __this->____head;
			G_B17_0 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_27)->max_length)), L_28));
		}

IL_00ab_1:
		{
			V_2 = G_B17_0;
			ColorOverLifetimeModuleU5BU5D_t56D392498D03FF1B36CADEB8B1C61DF772B575CA* L_29 = __this->____array;
			int32_t L_30 = __this->____head;
			RuntimeArray* L_31 = ___0_array;
			int32_t L_32 = ___1_index;
			int32_t L_33 = V_2;
			Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_29, L_30, L_31, L_32, L_33, NULL);
			int32_t L_34 = V_1;
			int32_t L_35 = V_2;
			V_1 = ((int32_t)il2cpp_codegen_subtract(L_34, L_35));
			int32_t L_36 = V_1;
			if ((((int32_t)L_36) <= ((int32_t)0)))
			{
				goto IL_00e7_1;
			}
		}
		{
			ColorOverLifetimeModuleU5BU5D_t56D392498D03FF1B36CADEB8B1C61DF772B575CA* L_37 = __this->____array;
			RuntimeArray* L_38 = ___0_array;
			int32_t L_39 = ___1_index;
			ColorOverLifetimeModuleU5BU5D_t56D392498D03FF1B36CADEB8B1C61DF772B575CA* L_40 = __this->____array;
			NullCheck(L_40);
			int32_t L_41 = __this->____head;
			int32_t L_42 = V_1;
			Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_37, 0, L_38, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_39, ((int32_t)(((RuntimeArray*)L_40)->max_length)))), L_41)), L_42, NULL);
		}

IL_00e7_1:
		{
			goto IL_00fa;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00e9;
		}
		throw e;
	}

CATCH_00e9:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_43 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_44 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_44, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBD0381A992FDF4F7DA60E5D83689FE7FF6309CB8)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_44, method);
	}

IL_00fa:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_m5503CF1325A476DD40A7174DF237D94F2186C669_gshared (Queue_1_tBB2A0C4F251B256F7DE42D6E2BA4238B4DF91F30* __this, ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9 ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____size;
		ColorOverLifetimeModuleU5BU5D_t56D392498D03FF1B36CADEB8B1C61DF772B575CA* L_1 = __this->____array;
		NullCheck(L_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))))))
		{
			goto IL_0045;
		}
	}
	{
		ColorOverLifetimeModuleU5BU5D_t56D392498D03FF1B36CADEB8B1C61DF772B575CA* L_2 = __this->____array;
		NullCheck(L_2);
		V_0 = ((int32_t)((int64_t)(((int64_t)il2cpp_codegen_multiply(((int64_t)((int32_t)(((RuntimeArray*)L_2)->max_length))), ((int64_t)((int32_t)200))))/((int64_t)((int32_t)100)))));
		int32_t L_3 = V_0;
		ColorOverLifetimeModuleU5BU5D_t56D392498D03FF1B36CADEB8B1C61DF772B575CA* L_4 = __this->____array;
		NullCheck(L_4);
		if ((((int32_t)L_3) >= ((int32_t)((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_4)->max_length)), 4)))))
		{
			goto IL_003e;
		}
	}
	{
		ColorOverLifetimeModuleU5BU5D_t56D392498D03FF1B36CADEB8B1C61DF772B575CA* L_5 = __this->____array;
		NullCheck(L_5);
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_5)->max_length)), 4));
	}

IL_003e:
	{
		int32_t L_6 = V_0;
		Queue_1_SetCapacity_mAD5B0D4E134D6BD98C1FFA078761503D0A61FE40(__this, L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
	}

IL_0045:
	{
		ColorOverLifetimeModuleU5BU5D_t56D392498D03FF1B36CADEB8B1C61DF772B575CA* L_7 = __this->____array;
		int32_t L_8 = __this->____tail;
		ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9 L_9 = ___0_item;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9)L_9);
		int32_t* L_10 = (int32_t*)(&__this->____tail);
		Queue_1_MoveNext_mEE24FDDDD40CD5A8E2AE0DB4CCB54E30E131C408(__this, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		int32_t L_11 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_11, 1));
		int32_t L_12 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_12, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t3F1C356002E2962DAFAA51F162DB9A5926148EE7 Queue_1_GetEnumerator_m111CCEFF3AA1E26E182CEE9824E4D8260320DF7D_gshared (Queue_1_tBB2A0C4F251B256F7DE42D6E2BA4238B4DF91F30* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t3F1C356002E2962DAFAA51F162DB9A5926148EE7 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mE2D9709A16F2D947F86D16CF0AC955E483430589((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m1CF4D444BFB05373676DE73DC7E23F7BADBC9925_gshared (Queue_1_tBB2A0C4F251B256F7DE42D6E2BA4238B4DF91F30* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t3F1C356002E2962DAFAA51F162DB9A5926148EE7 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mE2D9709A16F2D947F86D16CF0AC955E483430589((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		Enumerator_t3F1C356002E2962DAFAA51F162DB9A5926148EE7 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_IEnumerable_GetEnumerator_m6E2968AB42282EA94E10182511ABA2F8649433E6_gshared (Queue_1_tBB2A0C4F251B256F7DE42D6E2BA4238B4DF91F30* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t3F1C356002E2962DAFAA51F162DB9A5926148EE7 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mE2D9709A16F2D947F86D16CF0AC955E483430589((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		Enumerator_t3F1C356002E2962DAFAA51F162DB9A5926148EE7 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9 Queue_1_Dequeue_m5DFA97164D93377FBF27BAB24EFA7960A8133F29_gshared (Queue_1_tBB2A0C4F251B256F7DE42D6E2BA4238B4DF91F30* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	ColorOverLifetimeModuleU5BU5D_t56D392498D03FF1B36CADEB8B1C61DF772B575CA* V_1 = NULL;
	ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9 V_2;
	memset((&V_2), 0, sizeof(V_2));
	ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9 G_B4_0;
	memset((&G_B4_0), 0, sizeof(G_B4_0));
	ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9 G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		int32_t L_0 = __this->____head;
		V_0 = L_0;
		ColorOverLifetimeModuleU5BU5D_t56D392498D03FF1B36CADEB8B1C61DF772B575CA* L_1 = __this->____array;
		V_1 = L_1;
		int32_t L_2 = __this->____size;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		Queue_1_ThrowForEmptyQueue_m0C95F8D0002EC1614480D1D88435F36BAFAEB55C(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}

IL_001c:
	{
		ColorOverLifetimeModuleU5BU5D_t56D392498D03FF1B36CADEB8B1C61DF772B575CA* L_3 = V_1;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9 L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		G_B3_0 = L_6;
	}
	{
		ColorOverLifetimeModuleU5BU5D_t56D392498D03FF1B36CADEB8B1C61DF772B575CA* L_7 = V_1;
		int32_t L_8 = V_0;
		il2cpp_codegen_initobj((&V_2), sizeof(ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9));
		ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9 L_9 = V_2;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9)L_9);
		G_B4_0 = G_B3_0;
	}

IL_003a:
	{
		int32_t* L_10 = (int32_t*)(&__this->____head);
		Queue_1_MoveNext_mEE24FDDDD40CD5A8E2AE0DB4CCB54E30E131C408(__this, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		int32_t L_11 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
		int32_t L_12 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_12, 1));
		return G_B4_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9 Queue_1_Peek_m4D8AD6EB5E4E23BAA3366E893582DA87AFF35EEF_gshared (Queue_1_tBB2A0C4F251B256F7DE42D6E2BA4238B4DF91F30* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		Queue_1_ThrowForEmptyQueue_m0C95F8D0002EC1614480D1D88435F36BAFAEB55C(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}

IL_000e:
	{
		ColorOverLifetimeModuleU5BU5D_t56D392498D03FF1B36CADEB8B1C61DF772B575CA* L_1 = __this->____array;
		int32_t L_2 = __this->____head;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9 L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ColorOverLifetimeModuleU5BU5D_t56D392498D03FF1B36CADEB8B1C61DF772B575CA* Queue_1_ToArray_m8D0A02769B2475BF5E4D37A94FC487AAC1C4A93A_gshared (Queue_1_tBB2A0C4F251B256F7DE42D6E2BA4238B4DF91F30* __this, const RuntimeMethod* method) 
{
	ColorOverLifetimeModuleU5BU5D_t56D392498D03FF1B36CADEB8B1C61DF772B575CA* V_0 = NULL;
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ColorOverLifetimeModuleU5BU5D_t56D392498D03FF1B36CADEB8B1C61DF772B575CA* L_1;
		L_1 = Array_Empty_TisColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9_mC1FDC75D8356A5C9870BF88F40972AFC7E8EF569_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____size;
		ColorOverLifetimeModuleU5BU5D_t56D392498D03FF1B36CADEB8B1C61DF772B575CA* L_3 = (ColorOverLifetimeModuleU5BU5D_t56D392498D03FF1B36CADEB8B1C61DF772B575CA*)(ColorOverLifetimeModuleU5BU5D_t56D392498D03FF1B36CADEB8B1C61DF772B575CA*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_2);
		V_0 = L_3;
		int32_t L_4 = __this->____head;
		int32_t L_5 = __this->____tail;
		if ((((int32_t)L_4) >= ((int32_t)L_5)))
		{
			goto IL_0043;
		}
	}
	{
		ColorOverLifetimeModuleU5BU5D_t56D392498D03FF1B36CADEB8B1C61DF772B575CA* L_6 = __this->____array;
		int32_t L_7 = __this->____head;
		ColorOverLifetimeModuleU5BU5D_t56D392498D03FF1B36CADEB8B1C61DF772B575CA* L_8 = V_0;
		int32_t L_9 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_6, L_7, (RuntimeArray*)L_8, 0, L_9, NULL);
		goto IL_0087;
	}

IL_0043:
	{
		ColorOverLifetimeModuleU5BU5D_t56D392498D03FF1B36CADEB8B1C61DF772B575CA* L_10 = __this->____array;
		int32_t L_11 = __this->____head;
		ColorOverLifetimeModuleU5BU5D_t56D392498D03FF1B36CADEB8B1C61DF772B575CA* L_12 = V_0;
		ColorOverLifetimeModuleU5BU5D_t56D392498D03FF1B36CADEB8B1C61DF772B575CA* L_13 = __this->____array;
		NullCheck(L_13);
		int32_t L_14 = __this->____head;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_10, L_11, (RuntimeArray*)L_12, 0, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_13)->max_length)), L_14)), NULL);
		ColorOverLifetimeModuleU5BU5D_t56D392498D03FF1B36CADEB8B1C61DF772B575CA* L_15 = __this->____array;
		ColorOverLifetimeModuleU5BU5D_t56D392498D03FF1B36CADEB8B1C61DF772B575CA* L_16 = V_0;
		ColorOverLifetimeModuleU5BU5D_t56D392498D03FF1B36CADEB8B1C61DF772B575CA* L_17 = __this->____array;
		NullCheck(L_17);
		int32_t L_18 = __this->____head;
		int32_t L_19 = __this->____tail;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_15, 0, (RuntimeArray*)L_16, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_17)->max_length)), L_18)), L_19, NULL);
	}

IL_0087:
	{
		ColorOverLifetimeModuleU5BU5D_t56D392498D03FF1B36CADEB8B1C61DF772B575CA* L_20 = V_0;
		return L_20;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_SetCapacity_mAD5B0D4E134D6BD98C1FFA078761503D0A61FE40_gshared (Queue_1_tBB2A0C4F251B256F7DE42D6E2BA4238B4DF91F30* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	ColorOverLifetimeModuleU5BU5D_t56D392498D03FF1B36CADEB8B1C61DF772B575CA* V_0 = NULL;
	Queue_1_tBB2A0C4F251B256F7DE42D6E2BA4238B4DF91F30* G_B6_0 = NULL;
	Queue_1_tBB2A0C4F251B256F7DE42D6E2BA4238B4DF91F30* G_B5_0 = NULL;
	int32_t G_B7_0 = 0;
	Queue_1_tBB2A0C4F251B256F7DE42D6E2BA4238B4DF91F30* G_B7_1 = NULL;
	{
		int32_t L_0 = ___0_capacity;
		ColorOverLifetimeModuleU5BU5D_t56D392498D03FF1B36CADEB8B1C61DF772B575CA* L_1 = (ColorOverLifetimeModuleU5BU5D_t56D392498D03FF1B36CADEB8B1C61DF772B575CA*)(ColorOverLifetimeModuleU5BU5D_t56D392498D03FF1B36CADEB8B1C61DF772B575CA*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_007d;
		}
	}
	{
		int32_t L_3 = __this->____head;
		int32_t L_4 = __this->____tail;
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0039;
		}
	}
	{
		ColorOverLifetimeModuleU5BU5D_t56D392498D03FF1B36CADEB8B1C61DF772B575CA* L_5 = __this->____array;
		int32_t L_6 = __this->____head;
		ColorOverLifetimeModuleU5BU5D_t56D392498D03FF1B36CADEB8B1C61DF772B575CA* L_7 = V_0;
		int32_t L_8 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, L_6, (RuntimeArray*)L_7, 0, L_8, NULL);
		goto IL_007d;
	}

IL_0039:
	{
		ColorOverLifetimeModuleU5BU5D_t56D392498D03FF1B36CADEB8B1C61DF772B575CA* L_9 = __this->____array;
		int32_t L_10 = __this->____head;
		ColorOverLifetimeModuleU5BU5D_t56D392498D03FF1B36CADEB8B1C61DF772B575CA* L_11 = V_0;
		ColorOverLifetimeModuleU5BU5D_t56D392498D03FF1B36CADEB8B1C61DF772B575CA* L_12 = __this->____array;
		NullCheck(L_12);
		int32_t L_13 = __this->____head;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_9, L_10, (RuntimeArray*)L_11, 0, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_12)->max_length)), L_13)), NULL);
		ColorOverLifetimeModuleU5BU5D_t56D392498D03FF1B36CADEB8B1C61DF772B575CA* L_14 = __this->____array;
		ColorOverLifetimeModuleU5BU5D_t56D392498D03FF1B36CADEB8B1C61DF772B575CA* L_15 = V_0;
		ColorOverLifetimeModuleU5BU5D_t56D392498D03FF1B36CADEB8B1C61DF772B575CA* L_16 = __this->____array;
		NullCheck(L_16);
		int32_t L_17 = __this->____head;
		int32_t L_18 = __this->____tail;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_14, 0, (RuntimeArray*)L_15, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_16)->max_length)), L_17)), L_18, NULL);
	}

IL_007d:
	{
		ColorOverLifetimeModuleU5BU5D_t56D392498D03FF1B36CADEB8B1C61DF772B575CA* L_19 = V_0;
		__this->____array = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_19);
		__this->____head = 0;
		int32_t L_20 = __this->____size;
		int32_t L_21 = ___0_capacity;
		if ((((int32_t)L_20) == ((int32_t)L_21)))
		{
			G_B6_0 = __this;
			goto IL_009d;
		}
		G_B5_0 = __this;
	}
	{
		int32_t L_22 = __this->____size;
		G_B7_0 = L_22;
		G_B7_1 = G_B5_0;
		goto IL_009e;
	}

IL_009d:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
	}

IL_009e:
	{
		NullCheck(G_B7_1);
		G_B7_1->____tail = G_B7_0;
		int32_t L_23 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_23, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_MoveNext_mEE24FDDDD40CD5A8E2AE0DB4CCB54E30E131C408_gshared (Queue_1_tBB2A0C4F251B256F7DE42D6E2BA4238B4DF91F30* __this, int32_t* ___0_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t* L_0 = ___0_index;
		int32_t L_1 = *((int32_t*)L_0);
		V_0 = ((int32_t)il2cpp_codegen_add(L_1, 1));
		int32_t L_2 = V_0;
		ColorOverLifetimeModuleU5BU5D_t56D392498D03FF1B36CADEB8B1C61DF772B575CA* L_3 = __this->____array;
		NullCheck(L_3);
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))))
		{
			goto IL_0012;
		}
	}
	{
		V_0 = 0;
	}

IL_0012:
	{
		int32_t* L_4 = ___0_index;
		int32_t L_5 = V_0;
		*((int32_t*)L_4) = (int32_t)L_5;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_ThrowForEmptyQueue_m0C95F8D0002EC1614480D1D88435F36BAFAEB55C_gshared (Queue_1_tBB2A0C4F251B256F7DE42D6E2BA4238B4DF91F30* __this, const RuntimeMethod* method) 
{
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1102619AA6FB2A4AADBDAA47DDC096AE04C772C0)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_mBD3DDDF8383A1D5AEC0EE4E32F16D4C6A2326795_gshared (Queue_1_t22121E4AEC415CDAE61E996C9A25D8A0321D85FF* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		EmissionModuleU5BU5D_t110238586598A352710078862A6C32192CAFC5DE* L_0;
		L_0 = Array_Empty_TisEmissionModule_t0F469FA4A08003F6D9C610D2F716A9DFDB9A3678_m0AF1109AB17569AAB476D0C066C70C18B4B5D746_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		__this->____array = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m11BD25962CF512B77563062CDD6C61EC1F652199_gshared (Queue_1_t22121E4AEC415CDAE61E996C9A25D8A0321D85FF* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_1 = ___0_capacity;
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_2);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_4 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC37D78082ACFC8DEE7B32D9351C6E433A074FEC7)), L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0020:
	{
		int32_t L_5 = ___0_capacity;
		EmissionModuleU5BU5D_t110238586598A352710078862A6C32192CAFC5DE* L_6 = (EmissionModuleU5BU5D_t110238586598A352710078862A6C32192CAFC5DE*)(EmissionModuleU5BU5D_t110238586598A352710078862A6C32192CAFC5DE*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_5);
		__this->____array = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_6);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_m4F023A3CF723AF5EA6B29D741B7C4D829035F854_gshared (Queue_1_t22121E4AEC415CDAE61E996C9A25D8A0321D85FF* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_System_Collections_ICollection_get_IsSynchronized_m3DA003BD6C0302CD33E542AD90E2CE42EB1133C8_gshared (Queue_1_t22121E4AEC415CDAE61E996C9A25D8A0321D85FF* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_ICollection_get_SyncRoot_mE52F9ACFF919E5997C6C22630FE9B61FD88A8180_gshared (Queue_1_t22121E4AEC415CDAE61E996C9A25D8A0321D85FF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____syncRoot;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Clear_mE77810168A45AE627A149A22DC9B419C90C16655_gshared (Queue_1_t22121E4AEC415CDAE61E996C9A25D8A0321D85FF* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (!L_0)
		{
			goto IL_006f;
		}
	}
	{
	}
	{
		int32_t L_1 = __this->____head;
		int32_t L_2 = __this->____tail;
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_0036;
		}
	}
	{
		EmissionModuleU5BU5D_t110238586598A352710078862A6C32192CAFC5DE* L_3 = __this->____array;
		int32_t L_4 = __this->____head;
		int32_t L_5 = __this->____size;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, L_4, L_5, NULL);
		goto IL_0068;
	}

IL_0036:
	{
		EmissionModuleU5BU5D_t110238586598A352710078862A6C32192CAFC5DE* L_6 = __this->____array;
		int32_t L_7 = __this->____head;
		EmissionModuleU5BU5D_t110238586598A352710078862A6C32192CAFC5DE* L_8 = __this->____array;
		NullCheck(L_8);
		int32_t L_9 = __this->____head;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_6, L_7, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_8)->max_length)), L_9)), NULL);
		EmissionModuleU5BU5D_t110238586598A352710078862A6C32192CAFC5DE* L_10 = __this->____array;
		int32_t L_11 = __this->____tail;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_10, 0, L_11, NULL);
	}

IL_0068:
	{
		__this->____size = 0;
	}

IL_006f:
	{
		__this->____head = 0;
		__this->____tail = 0;
		int32_t L_12 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_12, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_System_Collections_ICollection_CopyTo_m8B3B17A7D135B825DE54E44011CBDD73A8112494_gshared (Queue_1_t22121E4AEC415CDAE61E996C9A25D8A0321D85FF* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	int32_t G_B17_0 = 0;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeArray* L_2 = ___0_array;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_2, NULL);
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral967D403A541A1026A83D548E5AD5CA800AD4EFB5)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0027:
	{
		RuntimeArray* L_5 = ___0_array;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_5, 0, NULL);
		if (!L_6)
		{
			goto IL_0040;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6195D7DA68D16D4985AD1A1B4FD2841A43CDDE70)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, method);
	}

IL_0040:
	{
		RuntimeArray* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_8, NULL);
		V_0 = L_9;
		int32_t L_10 = ___1_index;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_11 = ___1_index;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) <= ((int32_t)L_12)))
		{
			goto IL_0065;
		}
	}

IL_004f:
	{
		int32_t L_13 = ___1_index;
		int32_t L_14 = L_13;
		RuntimeObject* L_15 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_14);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_16 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_16, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), L_15, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, method);
	}

IL_0065:
	{
		int32_t L_17 = V_0;
		int32_t L_18 = ___1_index;
		int32_t L_19 = __this->____size;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_17, L_18))) >= ((int32_t)L_19)))
		{
			goto IL_007b;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_20 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_20, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, method);
	}

IL_007b:
	{
		int32_t L_21 = __this->____size;
		V_1 = L_21;
		int32_t L_22 = V_1;
		if (L_22)
		{
			goto IL_0086;
		}
	}
	{
		return;
	}

IL_0086:
	{
	}
	try
	{
		{
			EmissionModuleU5BU5D_t110238586598A352710078862A6C32192CAFC5DE* L_23 = __this->____array;
			NullCheck(L_23);
			int32_t L_24 = __this->____head;
			int32_t L_25 = V_1;
			if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_23)->max_length)), L_24))) < ((int32_t)L_25)))
			{
				goto IL_009c_1;
			}
		}
		{
			int32_t L_26 = V_1;
			G_B17_0 = L_26;
			goto IL_00ab_1;
		}

IL_009c_1:
		{
			EmissionModuleU5BU5D_t110238586598A352710078862A6C32192CAFC5DE* L_27 = __this->____array;
			NullCheck(L_27);
			int32_t L_28 = __this->____head;
			G_B17_0 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_27)->max_length)), L_28));
		}

IL_00ab_1:
		{
			V_2 = G_B17_0;
			EmissionModuleU5BU5D_t110238586598A352710078862A6C32192CAFC5DE* L_29 = __this->____array;
			int32_t L_30 = __this->____head;
			RuntimeArray* L_31 = ___0_array;
			int32_t L_32 = ___1_index;
			int32_t L_33 = V_2;
			Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_29, L_30, L_31, L_32, L_33, NULL);
			int32_t L_34 = V_1;
			int32_t L_35 = V_2;
			V_1 = ((int32_t)il2cpp_codegen_subtract(L_34, L_35));
			int32_t L_36 = V_1;
			if ((((int32_t)L_36) <= ((int32_t)0)))
			{
				goto IL_00e7_1;
			}
		}
		{
			EmissionModuleU5BU5D_t110238586598A352710078862A6C32192CAFC5DE* L_37 = __this->____array;
			RuntimeArray* L_38 = ___0_array;
			int32_t L_39 = ___1_index;
			EmissionModuleU5BU5D_t110238586598A352710078862A6C32192CAFC5DE* L_40 = __this->____array;
			NullCheck(L_40);
			int32_t L_41 = __this->____head;
			int32_t L_42 = V_1;
			Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_37, 0, L_38, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_39, ((int32_t)(((RuntimeArray*)L_40)->max_length)))), L_41)), L_42, NULL);
		}

IL_00e7_1:
		{
			goto IL_00fa;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00e9;
		}
		throw e;
	}

CATCH_00e9:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_43 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_44 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_44, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBD0381A992FDF4F7DA60E5D83689FE7FF6309CB8)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_44, method);
	}

IL_00fa:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_m7769E8A8A227AD48DDE8F5933B8817D7BF60A1CF_gshared (Queue_1_t22121E4AEC415CDAE61E996C9A25D8A0321D85FF* __this, EmissionModule_t0F469FA4A08003F6D9C610D2F716A9DFDB9A3678 ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____size;
		EmissionModuleU5BU5D_t110238586598A352710078862A6C32192CAFC5DE* L_1 = __this->____array;
		NullCheck(L_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))))))
		{
			goto IL_0045;
		}
	}
	{
		EmissionModuleU5BU5D_t110238586598A352710078862A6C32192CAFC5DE* L_2 = __this->____array;
		NullCheck(L_2);
		V_0 = ((int32_t)((int64_t)(((int64_t)il2cpp_codegen_multiply(((int64_t)((int32_t)(((RuntimeArray*)L_2)->max_length))), ((int64_t)((int32_t)200))))/((int64_t)((int32_t)100)))));
		int32_t L_3 = V_0;
		EmissionModuleU5BU5D_t110238586598A352710078862A6C32192CAFC5DE* L_4 = __this->____array;
		NullCheck(L_4);
		if ((((int32_t)L_3) >= ((int32_t)((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_4)->max_length)), 4)))))
		{
			goto IL_003e;
		}
	}
	{
		EmissionModuleU5BU5D_t110238586598A352710078862A6C32192CAFC5DE* L_5 = __this->____array;
		NullCheck(L_5);
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_5)->max_length)), 4));
	}

IL_003e:
	{
		int32_t L_6 = V_0;
		Queue_1_SetCapacity_m5A267D2360AB7E0CB3960E5C255EEC3E2A824D69(__this, L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
	}

IL_0045:
	{
		EmissionModuleU5BU5D_t110238586598A352710078862A6C32192CAFC5DE* L_7 = __this->____array;
		int32_t L_8 = __this->____tail;
		EmissionModule_t0F469FA4A08003F6D9C610D2F716A9DFDB9A3678 L_9 = ___0_item;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (EmissionModule_t0F469FA4A08003F6D9C610D2F716A9DFDB9A3678)L_9);
		int32_t* L_10 = (int32_t*)(&__this->____tail);
		Queue_1_MoveNext_m0A64DC76FE998F816931C5C463937E4A43C6BDDE(__this, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		int32_t L_11 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_11, 1));
		int32_t L_12 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_12, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t55765909EAC7B86052C39583F1709C769BB52A72 Queue_1_GetEnumerator_m90EBF1863762D0F1586C5AB37D2B19BD32C350A2_gshared (Queue_1_t22121E4AEC415CDAE61E996C9A25D8A0321D85FF* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t55765909EAC7B86052C39583F1709C769BB52A72 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m75FF48FE0A168A147798331EF6583C70AEA4B51F((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m98E6735B219BD634114335D0E37ED02FECDE189F_gshared (Queue_1_t22121E4AEC415CDAE61E996C9A25D8A0321D85FF* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t55765909EAC7B86052C39583F1709C769BB52A72 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m75FF48FE0A168A147798331EF6583C70AEA4B51F((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		Enumerator_t55765909EAC7B86052C39583F1709C769BB52A72 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_IEnumerable_GetEnumerator_m8F43DCAA37ED05635CB6C1EB7114B1066D473792_gshared (Queue_1_t22121E4AEC415CDAE61E996C9A25D8A0321D85FF* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t55765909EAC7B86052C39583F1709C769BB52A72 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m75FF48FE0A168A147798331EF6583C70AEA4B51F((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		Enumerator_t55765909EAC7B86052C39583F1709C769BB52A72 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EmissionModule_t0F469FA4A08003F6D9C610D2F716A9DFDB9A3678 Queue_1_Dequeue_mBBC16CC4EB8440C3098C3D6AE8A2D4CB85F3031E_gshared (Queue_1_t22121E4AEC415CDAE61E996C9A25D8A0321D85FF* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	EmissionModuleU5BU5D_t110238586598A352710078862A6C32192CAFC5DE* V_1 = NULL;
	EmissionModule_t0F469FA4A08003F6D9C610D2F716A9DFDB9A3678 V_2;
	memset((&V_2), 0, sizeof(V_2));
	EmissionModule_t0F469FA4A08003F6D9C610D2F716A9DFDB9A3678 G_B4_0;
	memset((&G_B4_0), 0, sizeof(G_B4_0));
	EmissionModule_t0F469FA4A08003F6D9C610D2F716A9DFDB9A3678 G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		int32_t L_0 = __this->____head;
		V_0 = L_0;
		EmissionModuleU5BU5D_t110238586598A352710078862A6C32192CAFC5DE* L_1 = __this->____array;
		V_1 = L_1;
		int32_t L_2 = __this->____size;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		Queue_1_ThrowForEmptyQueue_m814859C2391E3841FA1B6EE491CF78491A957A61(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}

IL_001c:
	{
		EmissionModuleU5BU5D_t110238586598A352710078862A6C32192CAFC5DE* L_3 = V_1;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		EmissionModule_t0F469FA4A08003F6D9C610D2F716A9DFDB9A3678 L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		G_B3_0 = L_6;
	}
	{
		EmissionModuleU5BU5D_t110238586598A352710078862A6C32192CAFC5DE* L_7 = V_1;
		int32_t L_8 = V_0;
		il2cpp_codegen_initobj((&V_2), sizeof(EmissionModule_t0F469FA4A08003F6D9C610D2F716A9DFDB9A3678));
		EmissionModule_t0F469FA4A08003F6D9C610D2F716A9DFDB9A3678 L_9 = V_2;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (EmissionModule_t0F469FA4A08003F6D9C610D2F716A9DFDB9A3678)L_9);
		G_B4_0 = G_B3_0;
	}

IL_003a:
	{
		int32_t* L_10 = (int32_t*)(&__this->____head);
		Queue_1_MoveNext_m0A64DC76FE998F816931C5C463937E4A43C6BDDE(__this, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		int32_t L_11 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
		int32_t L_12 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_12, 1));
		return G_B4_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EmissionModule_t0F469FA4A08003F6D9C610D2F716A9DFDB9A3678 Queue_1_Peek_mFBC86CCCE2DCD67766B4BC7814B7EA60AF77DD73_gshared (Queue_1_t22121E4AEC415CDAE61E996C9A25D8A0321D85FF* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		Queue_1_ThrowForEmptyQueue_m814859C2391E3841FA1B6EE491CF78491A957A61(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}

IL_000e:
	{
		EmissionModuleU5BU5D_t110238586598A352710078862A6C32192CAFC5DE* L_1 = __this->____array;
		int32_t L_2 = __this->____head;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		EmissionModule_t0F469FA4A08003F6D9C610D2F716A9DFDB9A3678 L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EmissionModuleU5BU5D_t110238586598A352710078862A6C32192CAFC5DE* Queue_1_ToArray_m5D6CA4A6B9F2FE3C7BAB80E54A21426F87EEC0BD_gshared (Queue_1_t22121E4AEC415CDAE61E996C9A25D8A0321D85FF* __this, const RuntimeMethod* method) 
{
	EmissionModuleU5BU5D_t110238586598A352710078862A6C32192CAFC5DE* V_0 = NULL;
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		EmissionModuleU5BU5D_t110238586598A352710078862A6C32192CAFC5DE* L_1;
		L_1 = Array_Empty_TisEmissionModule_t0F469FA4A08003F6D9C610D2F716A9DFDB9A3678_m0AF1109AB17569AAB476D0C066C70C18B4B5D746_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____size;
		EmissionModuleU5BU5D_t110238586598A352710078862A6C32192CAFC5DE* L_3 = (EmissionModuleU5BU5D_t110238586598A352710078862A6C32192CAFC5DE*)(EmissionModuleU5BU5D_t110238586598A352710078862A6C32192CAFC5DE*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_2);
		V_0 = L_3;
		int32_t L_4 = __this->____head;
		int32_t L_5 = __this->____tail;
		if ((((int32_t)L_4) >= ((int32_t)L_5)))
		{
			goto IL_0043;
		}
	}
	{
		EmissionModuleU5BU5D_t110238586598A352710078862A6C32192CAFC5DE* L_6 = __this->____array;
		int32_t L_7 = __this->____head;
		EmissionModuleU5BU5D_t110238586598A352710078862A6C32192CAFC5DE* L_8 = V_0;
		int32_t L_9 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_6, L_7, (RuntimeArray*)L_8, 0, L_9, NULL);
		goto IL_0087;
	}

IL_0043:
	{
		EmissionModuleU5BU5D_t110238586598A352710078862A6C32192CAFC5DE* L_10 = __this->____array;
		int32_t L_11 = __this->____head;
		EmissionModuleU5BU5D_t110238586598A352710078862A6C32192CAFC5DE* L_12 = V_0;
		EmissionModuleU5BU5D_t110238586598A352710078862A6C32192CAFC5DE* L_13 = __this->____array;
		NullCheck(L_13);
		int32_t L_14 = __this->____head;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_10, L_11, (RuntimeArray*)L_12, 0, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_13)->max_length)), L_14)), NULL);
		EmissionModuleU5BU5D_t110238586598A352710078862A6C32192CAFC5DE* L_15 = __this->____array;
		EmissionModuleU5BU5D_t110238586598A352710078862A6C32192CAFC5DE* L_16 = V_0;
		EmissionModuleU5BU5D_t110238586598A352710078862A6C32192CAFC5DE* L_17 = __this->____array;
		NullCheck(L_17);
		int32_t L_18 = __this->____head;
		int32_t L_19 = __this->____tail;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_15, 0, (RuntimeArray*)L_16, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_17)->max_length)), L_18)), L_19, NULL);
	}

IL_0087:
	{
		EmissionModuleU5BU5D_t110238586598A352710078862A6C32192CAFC5DE* L_20 = V_0;
		return L_20;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_SetCapacity_m5A267D2360AB7E0CB3960E5C255EEC3E2A824D69_gshared (Queue_1_t22121E4AEC415CDAE61E996C9A25D8A0321D85FF* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	EmissionModuleU5BU5D_t110238586598A352710078862A6C32192CAFC5DE* V_0 = NULL;
	Queue_1_t22121E4AEC415CDAE61E996C9A25D8A0321D85FF* G_B6_0 = NULL;
	Queue_1_t22121E4AEC415CDAE61E996C9A25D8A0321D85FF* G_B5_0 = NULL;
	int32_t G_B7_0 = 0;
	Queue_1_t22121E4AEC415CDAE61E996C9A25D8A0321D85FF* G_B7_1 = NULL;
	{
		int32_t L_0 = ___0_capacity;
		EmissionModuleU5BU5D_t110238586598A352710078862A6C32192CAFC5DE* L_1 = (EmissionModuleU5BU5D_t110238586598A352710078862A6C32192CAFC5DE*)(EmissionModuleU5BU5D_t110238586598A352710078862A6C32192CAFC5DE*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_007d;
		}
	}
	{
		int32_t L_3 = __this->____head;
		int32_t L_4 = __this->____tail;
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0039;
		}
	}
	{
		EmissionModuleU5BU5D_t110238586598A352710078862A6C32192CAFC5DE* L_5 = __this->____array;
		int32_t L_6 = __this->____head;
		EmissionModuleU5BU5D_t110238586598A352710078862A6C32192CAFC5DE* L_7 = V_0;
		int32_t L_8 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, L_6, (RuntimeArray*)L_7, 0, L_8, NULL);
		goto IL_007d;
	}

IL_0039:
	{
		EmissionModuleU5BU5D_t110238586598A352710078862A6C32192CAFC5DE* L_9 = __this->____array;
		int32_t L_10 = __this->____head;
		EmissionModuleU5BU5D_t110238586598A352710078862A6C32192CAFC5DE* L_11 = V_0;
		EmissionModuleU5BU5D_t110238586598A352710078862A6C32192CAFC5DE* L_12 = __this->____array;
		NullCheck(L_12);
		int32_t L_13 = __this->____head;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_9, L_10, (RuntimeArray*)L_11, 0, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_12)->max_length)), L_13)), NULL);
		EmissionModuleU5BU5D_t110238586598A352710078862A6C32192CAFC5DE* L_14 = __this->____array;
		EmissionModuleU5BU5D_t110238586598A352710078862A6C32192CAFC5DE* L_15 = V_0;
		EmissionModuleU5BU5D_t110238586598A352710078862A6C32192CAFC5DE* L_16 = __this->____array;
		NullCheck(L_16);
		int32_t L_17 = __this->____head;
		int32_t L_18 = __this->____tail;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_14, 0, (RuntimeArray*)L_15, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_16)->max_length)), L_17)), L_18, NULL);
	}

IL_007d:
	{
		EmissionModuleU5BU5D_t110238586598A352710078862A6C32192CAFC5DE* L_19 = V_0;
		__this->____array = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_19);
		__this->____head = 0;
		int32_t L_20 = __this->____size;
		int32_t L_21 = ___0_capacity;
		if ((((int32_t)L_20) == ((int32_t)L_21)))
		{
			G_B6_0 = __this;
			goto IL_009d;
		}
		G_B5_0 = __this;
	}
	{
		int32_t L_22 = __this->____size;
		G_B7_0 = L_22;
		G_B7_1 = G_B5_0;
		goto IL_009e;
	}

IL_009d:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
	}

IL_009e:
	{
		NullCheck(G_B7_1);
		G_B7_1->____tail = G_B7_0;
		int32_t L_23 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_23, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_MoveNext_m0A64DC76FE998F816931C5C463937E4A43C6BDDE_gshared (Queue_1_t22121E4AEC415CDAE61E996C9A25D8A0321D85FF* __this, int32_t* ___0_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t* L_0 = ___0_index;
		int32_t L_1 = *((int32_t*)L_0);
		V_0 = ((int32_t)il2cpp_codegen_add(L_1, 1));
		int32_t L_2 = V_0;
		EmissionModuleU5BU5D_t110238586598A352710078862A6C32192CAFC5DE* L_3 = __this->____array;
		NullCheck(L_3);
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))))
		{
			goto IL_0012;
		}
	}
	{
		V_0 = 0;
	}

IL_0012:
	{
		int32_t* L_4 = ___0_index;
		int32_t L_5 = V_0;
		*((int32_t*)L_4) = (int32_t)L_5;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_ThrowForEmptyQueue_m814859C2391E3841FA1B6EE491CF78491A957A61_gshared (Queue_1_t22121E4AEC415CDAE61E996C9A25D8A0321D85FF* __this, const RuntimeMethod* method) 
{
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1102619AA6FB2A4AADBDAA47DDC096AE04C772C0)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m38D2C3E1FACB90AAC8FB3BFFA40A1DFD1C6E5E9A_gshared (Queue_1_tF483B3CFE7EF31C119FC391C89669D14457B4BC6* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		ExternalForcesModuleU5BU5D_t11431781ADD799A06D76C11D763A481B2423CD16* L_0;
		L_0 = Array_Empty_TisExternalForcesModule_t4494E21ECF96F072432EF4DDC5F84BAF84912FC7_m2F3EA4E00B708F7E2F683839F2933A2077F67B9B_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		__this->____array = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_mA2AB13D394A7F69D3F26B3F972D85DDE3E141A69_gshared (Queue_1_tF483B3CFE7EF31C119FC391C89669D14457B4BC6* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_1 = ___0_capacity;
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_2);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_4 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC37D78082ACFC8DEE7B32D9351C6E433A074FEC7)), L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0020:
	{
		int32_t L_5 = ___0_capacity;
		ExternalForcesModuleU5BU5D_t11431781ADD799A06D76C11D763A481B2423CD16* L_6 = (ExternalForcesModuleU5BU5D_t11431781ADD799A06D76C11D763A481B2423CD16*)(ExternalForcesModuleU5BU5D_t11431781ADD799A06D76C11D763A481B2423CD16*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_5);
		__this->____array = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_6);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_m413EEA267EC4DA97F346D97D70A4167FDDB5C7CF_gshared (Queue_1_tF483B3CFE7EF31C119FC391C89669D14457B4BC6* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_System_Collections_ICollection_get_IsSynchronized_mF9A21F4F8E1BAB84EBE4AD6BB5AAE1D5A43CA331_gshared (Queue_1_tF483B3CFE7EF31C119FC391C89669D14457B4BC6* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_ICollection_get_SyncRoot_m4236E7741D636B58119AED7D0BEF051858FB0D77_gshared (Queue_1_tF483B3CFE7EF31C119FC391C89669D14457B4BC6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____syncRoot;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Clear_m5A4DF1A4DEF0C546CD4825A2C694E517F4EB2EE3_gshared (Queue_1_tF483B3CFE7EF31C119FC391C89669D14457B4BC6* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (!L_0)
		{
			goto IL_006f;
		}
	}
	{
	}
	{
		int32_t L_1 = __this->____head;
		int32_t L_2 = __this->____tail;
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_0036;
		}
	}
	{
		ExternalForcesModuleU5BU5D_t11431781ADD799A06D76C11D763A481B2423CD16* L_3 = __this->____array;
		int32_t L_4 = __this->____head;
		int32_t L_5 = __this->____size;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, L_4, L_5, NULL);
		goto IL_0068;
	}

IL_0036:
	{
		ExternalForcesModuleU5BU5D_t11431781ADD799A06D76C11D763A481B2423CD16* L_6 = __this->____array;
		int32_t L_7 = __this->____head;
		ExternalForcesModuleU5BU5D_t11431781ADD799A06D76C11D763A481B2423CD16* L_8 = __this->____array;
		NullCheck(L_8);
		int32_t L_9 = __this->____head;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_6, L_7, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_8)->max_length)), L_9)), NULL);
		ExternalForcesModuleU5BU5D_t11431781ADD799A06D76C11D763A481B2423CD16* L_10 = __this->____array;
		int32_t L_11 = __this->____tail;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_10, 0, L_11, NULL);
	}

IL_0068:
	{
		__this->____size = 0;
	}

IL_006f:
	{
		__this->____head = 0;
		__this->____tail = 0;
		int32_t L_12 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_12, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_System_Collections_ICollection_CopyTo_mA9BF54934A942EB6AAB05E4A3E0772591CF52616_gshared (Queue_1_tF483B3CFE7EF31C119FC391C89669D14457B4BC6* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	int32_t G_B17_0 = 0;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeArray* L_2 = ___0_array;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_2, NULL);
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral967D403A541A1026A83D548E5AD5CA800AD4EFB5)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0027:
	{
		RuntimeArray* L_5 = ___0_array;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_5, 0, NULL);
		if (!L_6)
		{
			goto IL_0040;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6195D7DA68D16D4985AD1A1B4FD2841A43CDDE70)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, method);
	}

IL_0040:
	{
		RuntimeArray* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_8, NULL);
		V_0 = L_9;
		int32_t L_10 = ___1_index;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_11 = ___1_index;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) <= ((int32_t)L_12)))
		{
			goto IL_0065;
		}
	}

IL_004f:
	{
		int32_t L_13 = ___1_index;
		int32_t L_14 = L_13;
		RuntimeObject* L_15 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_14);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_16 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_16, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), L_15, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, method);
	}

IL_0065:
	{
		int32_t L_17 = V_0;
		int32_t L_18 = ___1_index;
		int32_t L_19 = __this->____size;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_17, L_18))) >= ((int32_t)L_19)))
		{
			goto IL_007b;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_20 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_20, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, method);
	}

IL_007b:
	{
		int32_t L_21 = __this->____size;
		V_1 = L_21;
		int32_t L_22 = V_1;
		if (L_22)
		{
			goto IL_0086;
		}
	}
	{
		return;
	}

IL_0086:
	{
	}
	try
	{
		{
			ExternalForcesModuleU5BU5D_t11431781ADD799A06D76C11D763A481B2423CD16* L_23 = __this->____array;
			NullCheck(L_23);
			int32_t L_24 = __this->____head;
			int32_t L_25 = V_1;
			if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_23)->max_length)), L_24))) < ((int32_t)L_25)))
			{
				goto IL_009c_1;
			}
		}
		{
			int32_t L_26 = V_1;
			G_B17_0 = L_26;
			goto IL_00ab_1;
		}

IL_009c_1:
		{
			ExternalForcesModuleU5BU5D_t11431781ADD799A06D76C11D763A481B2423CD16* L_27 = __this->____array;
			NullCheck(L_27);
			int32_t L_28 = __this->____head;
			G_B17_0 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_27)->max_length)), L_28));
		}

IL_00ab_1:
		{
			V_2 = G_B17_0;
			ExternalForcesModuleU5BU5D_t11431781ADD799A06D76C11D763A481B2423CD16* L_29 = __this->____array;
			int32_t L_30 = __this->____head;
			RuntimeArray* L_31 = ___0_array;
			int32_t L_32 = ___1_index;
			int32_t L_33 = V_2;
			Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_29, L_30, L_31, L_32, L_33, NULL);
			int32_t L_34 = V_1;
			int32_t L_35 = V_2;
			V_1 = ((int32_t)il2cpp_codegen_subtract(L_34, L_35));
			int32_t L_36 = V_1;
			if ((((int32_t)L_36) <= ((int32_t)0)))
			{
				goto IL_00e7_1;
			}
		}
		{
			ExternalForcesModuleU5BU5D_t11431781ADD799A06D76C11D763A481B2423CD16* L_37 = __this->____array;
			RuntimeArray* L_38 = ___0_array;
			int32_t L_39 = ___1_index;
			ExternalForcesModuleU5BU5D_t11431781ADD799A06D76C11D763A481B2423CD16* L_40 = __this->____array;
			NullCheck(L_40);
			int32_t L_41 = __this->____head;
			int32_t L_42 = V_1;
			Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_37, 0, L_38, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_39, ((int32_t)(((RuntimeArray*)L_40)->max_length)))), L_41)), L_42, NULL);
		}

IL_00e7_1:
		{
			goto IL_00fa;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00e9;
		}
		throw e;
	}

CATCH_00e9:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_43 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_44 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_44, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBD0381A992FDF4F7DA60E5D83689FE7FF6309CB8)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_44, method);
	}

IL_00fa:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_m99C154AA1A809539E0C391EF198111E795D924ED_gshared (Queue_1_tF483B3CFE7EF31C119FC391C89669D14457B4BC6* __this, ExternalForcesModule_t4494E21ECF96F072432EF4DDC5F84BAF84912FC7 ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____size;
		ExternalForcesModuleU5BU5D_t11431781ADD799A06D76C11D763A481B2423CD16* L_1 = __this->____array;
		NullCheck(L_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))))))
		{
			goto IL_0045;
		}
	}
	{
		ExternalForcesModuleU5BU5D_t11431781ADD799A06D76C11D763A481B2423CD16* L_2 = __this->____array;
		NullCheck(L_2);
		V_0 = ((int32_t)((int64_t)(((int64_t)il2cpp_codegen_multiply(((int64_t)((int32_t)(((RuntimeArray*)L_2)->max_length))), ((int64_t)((int32_t)200))))/((int64_t)((int32_t)100)))));
		int32_t L_3 = V_0;
		ExternalForcesModuleU5BU5D_t11431781ADD799A06D76C11D763A481B2423CD16* L_4 = __this->____array;
		NullCheck(L_4);
		if ((((int32_t)L_3) >= ((int32_t)((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_4)->max_length)), 4)))))
		{
			goto IL_003e;
		}
	}
	{
		ExternalForcesModuleU5BU5D_t11431781ADD799A06D76C11D763A481B2423CD16* L_5 = __this->____array;
		NullCheck(L_5);
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_5)->max_length)), 4));
	}

IL_003e:
	{
		int32_t L_6 = V_0;
		Queue_1_SetCapacity_m3034DBECDE6BC7AB2A0705F5F5FFD9B4E7168C0C(__this, L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
	}

IL_0045:
	{
		ExternalForcesModuleU5BU5D_t11431781ADD799A06D76C11D763A481B2423CD16* L_7 = __this->____array;
		int32_t L_8 = __this->____tail;
		ExternalForcesModule_t4494E21ECF96F072432EF4DDC5F84BAF84912FC7 L_9 = ___0_item;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (ExternalForcesModule_t4494E21ECF96F072432EF4DDC5F84BAF84912FC7)L_9);
		int32_t* L_10 = (int32_t*)(&__this->____tail);
		Queue_1_MoveNext_mF1E16D642E7D8BBDE1251EE36DE0C7B927CF6C9F(__this, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		int32_t L_11 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_11, 1));
		int32_t L_12 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_12, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t3A30FF055AE1E057728E18A493D72AD503BC565F Queue_1_GetEnumerator_m6A99A6330B874E8A70D4C5C5FD78036D7707B192_gshared (Queue_1_tF483B3CFE7EF31C119FC391C89669D14457B4BC6* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t3A30FF055AE1E057728E18A493D72AD503BC565F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m6DBC1B22B772EFB1124504BF221F695FA7848996((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_mC761FCEFCD9D3124A2B32F0E79506D9E6A3187A0_gshared (Queue_1_tF483B3CFE7EF31C119FC391C89669D14457B4BC6* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t3A30FF055AE1E057728E18A493D72AD503BC565F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m6DBC1B22B772EFB1124504BF221F695FA7848996((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		Enumerator_t3A30FF055AE1E057728E18A493D72AD503BC565F L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_IEnumerable_GetEnumerator_mFFB4C565AC795472593E88B55CAFB34AEF326DE1_gshared (Queue_1_tF483B3CFE7EF31C119FC391C89669D14457B4BC6* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t3A30FF055AE1E057728E18A493D72AD503BC565F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m6DBC1B22B772EFB1124504BF221F695FA7848996((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		Enumerator_t3A30FF055AE1E057728E18A493D72AD503BC565F L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ExternalForcesModule_t4494E21ECF96F072432EF4DDC5F84BAF84912FC7 Queue_1_Dequeue_mC799D9390545373D0D5A6D6E9B5B14449C396749_gshared (Queue_1_tF483B3CFE7EF31C119FC391C89669D14457B4BC6* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	ExternalForcesModuleU5BU5D_t11431781ADD799A06D76C11D763A481B2423CD16* V_1 = NULL;
	ExternalForcesModule_t4494E21ECF96F072432EF4DDC5F84BAF84912FC7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	ExternalForcesModule_t4494E21ECF96F072432EF4DDC5F84BAF84912FC7 G_B4_0;
	memset((&G_B4_0), 0, sizeof(G_B4_0));
	ExternalForcesModule_t4494E21ECF96F072432EF4DDC5F84BAF84912FC7 G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		int32_t L_0 = __this->____head;
		V_0 = L_0;
		ExternalForcesModuleU5BU5D_t11431781ADD799A06D76C11D763A481B2423CD16* L_1 = __this->____array;
		V_1 = L_1;
		int32_t L_2 = __this->____size;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		Queue_1_ThrowForEmptyQueue_m0279EAF5F3F131C15B02928DAB3A7384FE54764D(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}

IL_001c:
	{
		ExternalForcesModuleU5BU5D_t11431781ADD799A06D76C11D763A481B2423CD16* L_3 = V_1;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		ExternalForcesModule_t4494E21ECF96F072432EF4DDC5F84BAF84912FC7 L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		G_B3_0 = L_6;
	}
	{
		ExternalForcesModuleU5BU5D_t11431781ADD799A06D76C11D763A481B2423CD16* L_7 = V_1;
		int32_t L_8 = V_0;
		il2cpp_codegen_initobj((&V_2), sizeof(ExternalForcesModule_t4494E21ECF96F072432EF4DDC5F84BAF84912FC7));
		ExternalForcesModule_t4494E21ECF96F072432EF4DDC5F84BAF84912FC7 L_9 = V_2;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (ExternalForcesModule_t4494E21ECF96F072432EF4DDC5F84BAF84912FC7)L_9);
		G_B4_0 = G_B3_0;
	}

IL_003a:
	{
		int32_t* L_10 = (int32_t*)(&__this->____head);
		Queue_1_MoveNext_mF1E16D642E7D8BBDE1251EE36DE0C7B927CF6C9F(__this, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		int32_t L_11 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
		int32_t L_12 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_12, 1));
		return G_B4_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ExternalForcesModule_t4494E21ECF96F072432EF4DDC5F84BAF84912FC7 Queue_1_Peek_m1C05C41EED9A166767A54DB2EA37C86B9FCE395E_gshared (Queue_1_tF483B3CFE7EF31C119FC391C89669D14457B4BC6* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		Queue_1_ThrowForEmptyQueue_m0279EAF5F3F131C15B02928DAB3A7384FE54764D(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}

IL_000e:
	{
		ExternalForcesModuleU5BU5D_t11431781ADD799A06D76C11D763A481B2423CD16* L_1 = __this->____array;
		int32_t L_2 = __this->____head;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		ExternalForcesModule_t4494E21ECF96F072432EF4DDC5F84BAF84912FC7 L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ExternalForcesModuleU5BU5D_t11431781ADD799A06D76C11D763A481B2423CD16* Queue_1_ToArray_m691C00C8CDB23A7DD73132D0AEDCDED33A6C74EB_gshared (Queue_1_tF483B3CFE7EF31C119FC391C89669D14457B4BC6* __this, const RuntimeMethod* method) 
{
	ExternalForcesModuleU5BU5D_t11431781ADD799A06D76C11D763A481B2423CD16* V_0 = NULL;
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ExternalForcesModuleU5BU5D_t11431781ADD799A06D76C11D763A481B2423CD16* L_1;
		L_1 = Array_Empty_TisExternalForcesModule_t4494E21ECF96F072432EF4DDC5F84BAF84912FC7_m2F3EA4E00B708F7E2F683839F2933A2077F67B9B_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____size;
		ExternalForcesModuleU5BU5D_t11431781ADD799A06D76C11D763A481B2423CD16* L_3 = (ExternalForcesModuleU5BU5D_t11431781ADD799A06D76C11D763A481B2423CD16*)(ExternalForcesModuleU5BU5D_t11431781ADD799A06D76C11D763A481B2423CD16*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_2);
		V_0 = L_3;
		int32_t L_4 = __this->____head;
		int32_t L_5 = __this->____tail;
		if ((((int32_t)L_4) >= ((int32_t)L_5)))
		{
			goto IL_0043;
		}
	}
	{
		ExternalForcesModuleU5BU5D_t11431781ADD799A06D76C11D763A481B2423CD16* L_6 = __this->____array;
		int32_t L_7 = __this->____head;
		ExternalForcesModuleU5BU5D_t11431781ADD799A06D76C11D763A481B2423CD16* L_8 = V_0;
		int32_t L_9 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_6, L_7, (RuntimeArray*)L_8, 0, L_9, NULL);
		goto IL_0087;
	}

IL_0043:
	{
		ExternalForcesModuleU5BU5D_t11431781ADD799A06D76C11D763A481B2423CD16* L_10 = __this->____array;
		int32_t L_11 = __this->____head;
		ExternalForcesModuleU5BU5D_t11431781ADD799A06D76C11D763A481B2423CD16* L_12 = V_0;
		ExternalForcesModuleU5BU5D_t11431781ADD799A06D76C11D763A481B2423CD16* L_13 = __this->____array;
		NullCheck(L_13);
		int32_t L_14 = __this->____head;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_10, L_11, (RuntimeArray*)L_12, 0, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_13)->max_length)), L_14)), NULL);
		ExternalForcesModuleU5BU5D_t11431781ADD799A06D76C11D763A481B2423CD16* L_15 = __this->____array;
		ExternalForcesModuleU5BU5D_t11431781ADD799A06D76C11D763A481B2423CD16* L_16 = V_0;
		ExternalForcesModuleU5BU5D_t11431781ADD799A06D76C11D763A481B2423CD16* L_17 = __this->____array;
		NullCheck(L_17);
		int32_t L_18 = __this->____head;
		int32_t L_19 = __this->____tail;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_15, 0, (RuntimeArray*)L_16, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_17)->max_length)), L_18)), L_19, NULL);
	}

IL_0087:
	{
		ExternalForcesModuleU5BU5D_t11431781ADD799A06D76C11D763A481B2423CD16* L_20 = V_0;
		return L_20;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_SetCapacity_m3034DBECDE6BC7AB2A0705F5F5FFD9B4E7168C0C_gshared (Queue_1_tF483B3CFE7EF31C119FC391C89669D14457B4BC6* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	ExternalForcesModuleU5BU5D_t11431781ADD799A06D76C11D763A481B2423CD16* V_0 = NULL;
	Queue_1_tF483B3CFE7EF31C119FC391C89669D14457B4BC6* G_B6_0 = NULL;
	Queue_1_tF483B3CFE7EF31C119FC391C89669D14457B4BC6* G_B5_0 = NULL;
	int32_t G_B7_0 = 0;
	Queue_1_tF483B3CFE7EF31C119FC391C89669D14457B4BC6* G_B7_1 = NULL;
	{
		int32_t L_0 = ___0_capacity;
		ExternalForcesModuleU5BU5D_t11431781ADD799A06D76C11D763A481B2423CD16* L_1 = (ExternalForcesModuleU5BU5D_t11431781ADD799A06D76C11D763A481B2423CD16*)(ExternalForcesModuleU5BU5D_t11431781ADD799A06D76C11D763A481B2423CD16*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_007d;
		}
	}
	{
		int32_t L_3 = __this->____head;
		int32_t L_4 = __this->____tail;
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0039;
		}
	}
	{
		ExternalForcesModuleU5BU5D_t11431781ADD799A06D76C11D763A481B2423CD16* L_5 = __this->____array;
		int32_t L_6 = __this->____head;
		ExternalForcesModuleU5BU5D_t11431781ADD799A06D76C11D763A481B2423CD16* L_7 = V_0;
		int32_t L_8 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, L_6, (RuntimeArray*)L_7, 0, L_8, NULL);
		goto IL_007d;
	}

IL_0039:
	{
		ExternalForcesModuleU5BU5D_t11431781ADD799A06D76C11D763A481B2423CD16* L_9 = __this->____array;
		int32_t L_10 = __this->____head;
		ExternalForcesModuleU5BU5D_t11431781ADD799A06D76C11D763A481B2423CD16* L_11 = V_0;
		ExternalForcesModuleU5BU5D_t11431781ADD799A06D76C11D763A481B2423CD16* L_12 = __this->____array;
		NullCheck(L_12);
		int32_t L_13 = __this->____head;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_9, L_10, (RuntimeArray*)L_11, 0, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_12)->max_length)), L_13)), NULL);
		ExternalForcesModuleU5BU5D_t11431781ADD799A06D76C11D763A481B2423CD16* L_14 = __this->____array;
		ExternalForcesModuleU5BU5D_t11431781ADD799A06D76C11D763A481B2423CD16* L_15 = V_0;
		ExternalForcesModuleU5BU5D_t11431781ADD799A06D76C11D763A481B2423CD16* L_16 = __this->____array;
		NullCheck(L_16);
		int32_t L_17 = __this->____head;
		int32_t L_18 = __this->____tail;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_14, 0, (RuntimeArray*)L_15, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_16)->max_length)), L_17)), L_18, NULL);
	}

IL_007d:
	{
		ExternalForcesModuleU5BU5D_t11431781ADD799A06D76C11D763A481B2423CD16* L_19 = V_0;
		__this->____array = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_19);
		__this->____head = 0;
		int32_t L_20 = __this->____size;
		int32_t L_21 = ___0_capacity;
		if ((((int32_t)L_20) == ((int32_t)L_21)))
		{
			G_B6_0 = __this;
			goto IL_009d;
		}
		G_B5_0 = __this;
	}
	{
		int32_t L_22 = __this->____size;
		G_B7_0 = L_22;
		G_B7_1 = G_B5_0;
		goto IL_009e;
	}

IL_009d:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
	}

IL_009e:
	{
		NullCheck(G_B7_1);
		G_B7_1->____tail = G_B7_0;
		int32_t L_23 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_23, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_MoveNext_mF1E16D642E7D8BBDE1251EE36DE0C7B927CF6C9F_gshared (Queue_1_tF483B3CFE7EF31C119FC391C89669D14457B4BC6* __this, int32_t* ___0_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t* L_0 = ___0_index;
		int32_t L_1 = *((int32_t*)L_0);
		V_0 = ((int32_t)il2cpp_codegen_add(L_1, 1));
		int32_t L_2 = V_0;
		ExternalForcesModuleU5BU5D_t11431781ADD799A06D76C11D763A481B2423CD16* L_3 = __this->____array;
		NullCheck(L_3);
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))))
		{
			goto IL_0012;
		}
	}
	{
		V_0 = 0;
	}

IL_0012:
	{
		int32_t* L_4 = ___0_index;
		int32_t L_5 = V_0;
		*((int32_t*)L_4) = (int32_t)L_5;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_ThrowForEmptyQueue_m0279EAF5F3F131C15B02928DAB3A7384FE54764D_gshared (Queue_1_tF483B3CFE7EF31C119FC391C89669D14457B4BC6* __this, const RuntimeMethod* method) 
{
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1102619AA6FB2A4AADBDAA47DDC096AE04C772C0)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_mAF916F58A16A1F32EF247EABC228B1F0B217C3C6_gshared (Queue_1_t6F177B1F38A281F7BC9922E112B5B006C3333CE9* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		ForceOverLifetimeModuleU5BU5D_t8B8EC5C9653BD37EA210B29740ACE97F39B6E1EC* L_0;
		L_0 = Array_Empty_TisForceOverLifetimeModule_t4859776EAF945AEA86044CAB63CA7A8AC8C14976_mD3B31996CF3BEC24489EA770CDA781CA057E095D_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		__this->____array = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m1D9D761F595C3B227F1B186C286C8E4220161CC1_gshared (Queue_1_t6F177B1F38A281F7BC9922E112B5B006C3333CE9* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_1 = ___0_capacity;
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_2);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_4 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC37D78082ACFC8DEE7B32D9351C6E433A074FEC7)), L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0020:
	{
		int32_t L_5 = ___0_capacity;
		ForceOverLifetimeModuleU5BU5D_t8B8EC5C9653BD37EA210B29740ACE97F39B6E1EC* L_6 = (ForceOverLifetimeModuleU5BU5D_t8B8EC5C9653BD37EA210B29740ACE97F39B6E1EC*)(ForceOverLifetimeModuleU5BU5D_t8B8EC5C9653BD37EA210B29740ACE97F39B6E1EC*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_5);
		__this->____array = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_6);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_m3173C30C8860DE00C1EC4DA14F497058A8BA6B61_gshared (Queue_1_t6F177B1F38A281F7BC9922E112B5B006C3333CE9* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_System_Collections_ICollection_get_IsSynchronized_mB80EDA1610E0B64AE3B4155489578C509D47FEA8_gshared (Queue_1_t6F177B1F38A281F7BC9922E112B5B006C3333CE9* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_ICollection_get_SyncRoot_m5975CF6DAF7290CA370B28F45A3E4B36B3D68BB9_gshared (Queue_1_t6F177B1F38A281F7BC9922E112B5B006C3333CE9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____syncRoot;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Clear_mB7017FC6F1EABE1F7E75061B1608C37CA8A0F34D_gshared (Queue_1_t6F177B1F38A281F7BC9922E112B5B006C3333CE9* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (!L_0)
		{
			goto IL_006f;
		}
	}
	{
	}
	{
		int32_t L_1 = __this->____head;
		int32_t L_2 = __this->____tail;
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_0036;
		}
	}
	{
		ForceOverLifetimeModuleU5BU5D_t8B8EC5C9653BD37EA210B29740ACE97F39B6E1EC* L_3 = __this->____array;
		int32_t L_4 = __this->____head;
		int32_t L_5 = __this->____size;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, L_4, L_5, NULL);
		goto IL_0068;
	}

IL_0036:
	{
		ForceOverLifetimeModuleU5BU5D_t8B8EC5C9653BD37EA210B29740ACE97F39B6E1EC* L_6 = __this->____array;
		int32_t L_7 = __this->____head;
		ForceOverLifetimeModuleU5BU5D_t8B8EC5C9653BD37EA210B29740ACE97F39B6E1EC* L_8 = __this->____array;
		NullCheck(L_8);
		int32_t L_9 = __this->____head;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_6, L_7, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_8)->max_length)), L_9)), NULL);
		ForceOverLifetimeModuleU5BU5D_t8B8EC5C9653BD37EA210B29740ACE97F39B6E1EC* L_10 = __this->____array;
		int32_t L_11 = __this->____tail;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_10, 0, L_11, NULL);
	}

IL_0068:
	{
		__this->____size = 0;
	}

IL_006f:
	{
		__this->____head = 0;
		__this->____tail = 0;
		int32_t L_12 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_12, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_System_Collections_ICollection_CopyTo_m4059EAD3761C4920CEDAAB4F4A4F28ECC4B99BF9_gshared (Queue_1_t6F177B1F38A281F7BC9922E112B5B006C3333CE9* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	int32_t G_B17_0 = 0;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeArray* L_2 = ___0_array;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_2, NULL);
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral967D403A541A1026A83D548E5AD5CA800AD4EFB5)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0027:
	{
		RuntimeArray* L_5 = ___0_array;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_5, 0, NULL);
		if (!L_6)
		{
			goto IL_0040;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6195D7DA68D16D4985AD1A1B4FD2841A43CDDE70)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, method);
	}

IL_0040:
	{
		RuntimeArray* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_8, NULL);
		V_0 = L_9;
		int32_t L_10 = ___1_index;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_11 = ___1_index;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) <= ((int32_t)L_12)))
		{
			goto IL_0065;
		}
	}

IL_004f:
	{
		int32_t L_13 = ___1_index;
		int32_t L_14 = L_13;
		RuntimeObject* L_15 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_14);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_16 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_16, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), L_15, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, method);
	}

IL_0065:
	{
		int32_t L_17 = V_0;
		int32_t L_18 = ___1_index;
		int32_t L_19 = __this->____size;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_17, L_18))) >= ((int32_t)L_19)))
		{
			goto IL_007b;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_20 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_20, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, method);
	}

IL_007b:
	{
		int32_t L_21 = __this->____size;
		V_1 = L_21;
		int32_t L_22 = V_1;
		if (L_22)
		{
			goto IL_0086;
		}
	}
	{
		return;
	}

IL_0086:
	{
	}
	try
	{
		{
			ForceOverLifetimeModuleU5BU5D_t8B8EC5C9653BD37EA210B29740ACE97F39B6E1EC* L_23 = __this->____array;
			NullCheck(L_23);
			int32_t L_24 = __this->____head;
			int32_t L_25 = V_1;
			if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_23)->max_length)), L_24))) < ((int32_t)L_25)))
			{
				goto IL_009c_1;
			}
		}
		{
			int32_t L_26 = V_1;
			G_B17_0 = L_26;
			goto IL_00ab_1;
		}

IL_009c_1:
		{
			ForceOverLifetimeModuleU5BU5D_t8B8EC5C9653BD37EA210B29740ACE97F39B6E1EC* L_27 = __this->____array;
			NullCheck(L_27);
			int32_t L_28 = __this->____head;
			G_B17_0 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_27)->max_length)), L_28));
		}

IL_00ab_1:
		{
			V_2 = G_B17_0;
			ForceOverLifetimeModuleU5BU5D_t8B8EC5C9653BD37EA210B29740ACE97F39B6E1EC* L_29 = __this->____array;
			int32_t L_30 = __this->____head;
			RuntimeArray* L_31 = ___0_array;
			int32_t L_32 = ___1_index;
			int32_t L_33 = V_2;
			Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_29, L_30, L_31, L_32, L_33, NULL);
			int32_t L_34 = V_1;
			int32_t L_35 = V_2;
			V_1 = ((int32_t)il2cpp_codegen_subtract(L_34, L_35));
			int32_t L_36 = V_1;
			if ((((int32_t)L_36) <= ((int32_t)0)))
			{
				goto IL_00e7_1;
			}
		}
		{
			ForceOverLifetimeModuleU5BU5D_t8B8EC5C9653BD37EA210B29740ACE97F39B6E1EC* L_37 = __this->____array;
			RuntimeArray* L_38 = ___0_array;
			int32_t L_39 = ___1_index;
			ForceOverLifetimeModuleU5BU5D_t8B8EC5C9653BD37EA210B29740ACE97F39B6E1EC* L_40 = __this->____array;
			NullCheck(L_40);
			int32_t L_41 = __this->____head;
			int32_t L_42 = V_1;
			Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_37, 0, L_38, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_39, ((int32_t)(((RuntimeArray*)L_40)->max_length)))), L_41)), L_42, NULL);
		}

IL_00e7_1:
		{
			goto IL_00fa;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00e9;
		}
		throw e;
	}

CATCH_00e9:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_43 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_44 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_44, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBD0381A992FDF4F7DA60E5D83689FE7FF6309CB8)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_44, method);
	}

IL_00fa:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_m49C2CDAB5B4AF24079677F423C9AB9C8515BA357_gshared (Queue_1_t6F177B1F38A281F7BC9922E112B5B006C3333CE9* __this, ForceOverLifetimeModule_t4859776EAF945AEA86044CAB63CA7A8AC8C14976 ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____size;
		ForceOverLifetimeModuleU5BU5D_t8B8EC5C9653BD37EA210B29740ACE97F39B6E1EC* L_1 = __this->____array;
		NullCheck(L_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))))))
		{
			goto IL_0045;
		}
	}
	{
		ForceOverLifetimeModuleU5BU5D_t8B8EC5C9653BD37EA210B29740ACE97F39B6E1EC* L_2 = __this->____array;
		NullCheck(L_2);
		V_0 = ((int32_t)((int64_t)(((int64_t)il2cpp_codegen_multiply(((int64_t)((int32_t)(((RuntimeArray*)L_2)->max_length))), ((int64_t)((int32_t)200))))/((int64_t)((int32_t)100)))));
		int32_t L_3 = V_0;
		ForceOverLifetimeModuleU5BU5D_t8B8EC5C9653BD37EA210B29740ACE97F39B6E1EC* L_4 = __this->____array;
		NullCheck(L_4);
		if ((((int32_t)L_3) >= ((int32_t)((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_4)->max_length)), 4)))))
		{
			goto IL_003e;
		}
	}
	{
		ForceOverLifetimeModuleU5BU5D_t8B8EC5C9653BD37EA210B29740ACE97F39B6E1EC* L_5 = __this->____array;
		NullCheck(L_5);
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_5)->max_length)), 4));
	}

IL_003e:
	{
		int32_t L_6 = V_0;
		Queue_1_SetCapacity_m21A2088DAC48A36D6109B82B06BC99534B354DA9(__this, L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
	}

IL_0045:
	{
		ForceOverLifetimeModuleU5BU5D_t8B8EC5C9653BD37EA210B29740ACE97F39B6E1EC* L_7 = __this->____array;
		int32_t L_8 = __this->____tail;
		ForceOverLifetimeModule_t4859776EAF945AEA86044CAB63CA7A8AC8C14976 L_9 = ___0_item;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (ForceOverLifetimeModule_t4859776EAF945AEA86044CAB63CA7A8AC8C14976)L_9);
		int32_t* L_10 = (int32_t*)(&__this->____tail);
		Queue_1_MoveNext_mB5E49BD0C8D90F9B4FF0904ECE36E525545087D8(__this, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		int32_t L_11 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_11, 1));
		int32_t L_12 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_12, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t6012AEE5962CB84F408A8DA5DF440A5104C9BBA0 Queue_1_GetEnumerator_m5FA332F5915BF7C88D39A48BE5390064547F198C_gshared (Queue_1_t6F177B1F38A281F7BC9922E112B5B006C3333CE9* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t6012AEE5962CB84F408A8DA5DF440A5104C9BBA0 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mFB8C7AF7A2E94FF320EA310E73F71C9CDCAC08C3((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m7DDA8E36FB1E566F33F9A1C1453920541C7EABD0_gshared (Queue_1_t6F177B1F38A281F7BC9922E112B5B006C3333CE9* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t6012AEE5962CB84F408A8DA5DF440A5104C9BBA0 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mFB8C7AF7A2E94FF320EA310E73F71C9CDCAC08C3((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		Enumerator_t6012AEE5962CB84F408A8DA5DF440A5104C9BBA0 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_IEnumerable_GetEnumerator_mF1B52723ADFBAF0EBBF0296C0862BFAEDF1CA926_gshared (Queue_1_t6F177B1F38A281F7BC9922E112B5B006C3333CE9* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t6012AEE5962CB84F408A8DA5DF440A5104C9BBA0 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mFB8C7AF7A2E94FF320EA310E73F71C9CDCAC08C3((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		Enumerator_t6012AEE5962CB84F408A8DA5DF440A5104C9BBA0 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ForceOverLifetimeModule_t4859776EAF945AEA86044CAB63CA7A8AC8C14976 Queue_1_Dequeue_m9C700DF9EF5E231FD4C2EBC27A6FC3E70420E97E_gshared (Queue_1_t6F177B1F38A281F7BC9922E112B5B006C3333CE9* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	ForceOverLifetimeModuleU5BU5D_t8B8EC5C9653BD37EA210B29740ACE97F39B6E1EC* V_1 = NULL;
	ForceOverLifetimeModule_t4859776EAF945AEA86044CAB63CA7A8AC8C14976 V_2;
	memset((&V_2), 0, sizeof(V_2));
	ForceOverLifetimeModule_t4859776EAF945AEA86044CAB63CA7A8AC8C14976 G_B4_0;
	memset((&G_B4_0), 0, sizeof(G_B4_0));
	ForceOverLifetimeModule_t4859776EAF945AEA86044CAB63CA7A8AC8C14976 G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		int32_t L_0 = __this->____head;
		V_0 = L_0;
		ForceOverLifetimeModuleU5BU5D_t8B8EC5C9653BD37EA210B29740ACE97F39B6E1EC* L_1 = __this->____array;
		V_1 = L_1;
		int32_t L_2 = __this->____size;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		Queue_1_ThrowForEmptyQueue_m982B3AA5CA095F01B8F6BBF3691C4DF492436AC9(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}

IL_001c:
	{
		ForceOverLifetimeModuleU5BU5D_t8B8EC5C9653BD37EA210B29740ACE97F39B6E1EC* L_3 = V_1;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		ForceOverLifetimeModule_t4859776EAF945AEA86044CAB63CA7A8AC8C14976 L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		G_B3_0 = L_6;
	}
	{
		ForceOverLifetimeModuleU5BU5D_t8B8EC5C9653BD37EA210B29740ACE97F39B6E1EC* L_7 = V_1;
		int32_t L_8 = V_0;
		il2cpp_codegen_initobj((&V_2), sizeof(ForceOverLifetimeModule_t4859776EAF945AEA86044CAB63CA7A8AC8C14976));
		ForceOverLifetimeModule_t4859776EAF945AEA86044CAB63CA7A8AC8C14976 L_9 = V_2;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (ForceOverLifetimeModule_t4859776EAF945AEA86044CAB63CA7A8AC8C14976)L_9);
		G_B4_0 = G_B3_0;
	}

IL_003a:
	{
		int32_t* L_10 = (int32_t*)(&__this->____head);
		Queue_1_MoveNext_mB5E49BD0C8D90F9B4FF0904ECE36E525545087D8(__this, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		int32_t L_11 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
		int32_t L_12 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_12, 1));
		return G_B4_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ForceOverLifetimeModule_t4859776EAF945AEA86044CAB63CA7A8AC8C14976 Queue_1_Peek_mD26EA1683CAA6A08A200F6E607B95CE72C9F8298_gshared (Queue_1_t6F177B1F38A281F7BC9922E112B5B006C3333CE9* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		Queue_1_ThrowForEmptyQueue_m982B3AA5CA095F01B8F6BBF3691C4DF492436AC9(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}

IL_000e:
	{
		ForceOverLifetimeModuleU5BU5D_t8B8EC5C9653BD37EA210B29740ACE97F39B6E1EC* L_1 = __this->____array;
		int32_t L_2 = __this->____head;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		ForceOverLifetimeModule_t4859776EAF945AEA86044CAB63CA7A8AC8C14976 L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ForceOverLifetimeModuleU5BU5D_t8B8EC5C9653BD37EA210B29740ACE97F39B6E1EC* Queue_1_ToArray_mD4AA0E1CCC9C3388BFDF5BF5564D07105FD5EA61_gshared (Queue_1_t6F177B1F38A281F7BC9922E112B5B006C3333CE9* __this, const RuntimeMethod* method) 
{
	ForceOverLifetimeModuleU5BU5D_t8B8EC5C9653BD37EA210B29740ACE97F39B6E1EC* V_0 = NULL;
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ForceOverLifetimeModuleU5BU5D_t8B8EC5C9653BD37EA210B29740ACE97F39B6E1EC* L_1;
		L_1 = Array_Empty_TisForceOverLifetimeModule_t4859776EAF945AEA86044CAB63CA7A8AC8C14976_mD3B31996CF3BEC24489EA770CDA781CA057E095D_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____size;
		ForceOverLifetimeModuleU5BU5D_t8B8EC5C9653BD37EA210B29740ACE97F39B6E1EC* L_3 = (ForceOverLifetimeModuleU5BU5D_t8B8EC5C9653BD37EA210B29740ACE97F39B6E1EC*)(ForceOverLifetimeModuleU5BU5D_t8B8EC5C9653BD37EA210B29740ACE97F39B6E1EC*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_2);
		V_0 = L_3;
		int32_t L_4 = __this->____head;
		int32_t L_5 = __this->____tail;
		if ((((int32_t)L_4) >= ((int32_t)L_5)))
		{
			goto IL_0043;
		}
	}
	{
		ForceOverLifetimeModuleU5BU5D_t8B8EC5C9653BD37EA210B29740ACE97F39B6E1EC* L_6 = __this->____array;
		int32_t L_7 = __this->____head;
		ForceOverLifetimeModuleU5BU5D_t8B8EC5C9653BD37EA210B29740ACE97F39B6E1EC* L_8 = V_0;
		int32_t L_9 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_6, L_7, (RuntimeArray*)L_8, 0, L_9, NULL);
		goto IL_0087;
	}

IL_0043:
	{
		ForceOverLifetimeModuleU5BU5D_t8B8EC5C9653BD37EA210B29740ACE97F39B6E1EC* L_10 = __this->____array;
		int32_t L_11 = __this->____head;
		ForceOverLifetimeModuleU5BU5D_t8B8EC5C9653BD37EA210B29740ACE97F39B6E1EC* L_12 = V_0;
		ForceOverLifetimeModuleU5BU5D_t8B8EC5C9653BD37EA210B29740ACE97F39B6E1EC* L_13 = __this->____array;
		NullCheck(L_13);
		int32_t L_14 = __this->____head;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_10, L_11, (RuntimeArray*)L_12, 0, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_13)->max_length)), L_14)), NULL);
		ForceOverLifetimeModuleU5BU5D_t8B8EC5C9653BD37EA210B29740ACE97F39B6E1EC* L_15 = __this->____array;
		ForceOverLifetimeModuleU5BU5D_t8B8EC5C9653BD37EA210B29740ACE97F39B6E1EC* L_16 = V_0;
		ForceOverLifetimeModuleU5BU5D_t8B8EC5C9653BD37EA210B29740ACE97F39B6E1EC* L_17 = __this->____array;
		NullCheck(L_17);
		int32_t L_18 = __this->____head;
		int32_t L_19 = __this->____tail;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_15, 0, (RuntimeArray*)L_16, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_17)->max_length)), L_18)), L_19, NULL);
	}

IL_0087:
	{
		ForceOverLifetimeModuleU5BU5D_t8B8EC5C9653BD37EA210B29740ACE97F39B6E1EC* L_20 = V_0;
		return L_20;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_SetCapacity_m21A2088DAC48A36D6109B82B06BC99534B354DA9_gshared (Queue_1_t6F177B1F38A281F7BC9922E112B5B006C3333CE9* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	ForceOverLifetimeModuleU5BU5D_t8B8EC5C9653BD37EA210B29740ACE97F39B6E1EC* V_0 = NULL;
	Queue_1_t6F177B1F38A281F7BC9922E112B5B006C3333CE9* G_B6_0 = NULL;
	Queue_1_t6F177B1F38A281F7BC9922E112B5B006C3333CE9* G_B5_0 = NULL;
	int32_t G_B7_0 = 0;
	Queue_1_t6F177B1F38A281F7BC9922E112B5B006C3333CE9* G_B7_1 = NULL;
	{
		int32_t L_0 = ___0_capacity;
		ForceOverLifetimeModuleU5BU5D_t8B8EC5C9653BD37EA210B29740ACE97F39B6E1EC* L_1 = (ForceOverLifetimeModuleU5BU5D_t8B8EC5C9653BD37EA210B29740ACE97F39B6E1EC*)(ForceOverLifetimeModuleU5BU5D_t8B8EC5C9653BD37EA210B29740ACE97F39B6E1EC*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_007d;
		}
	}
	{
		int32_t L_3 = __this->____head;
		int32_t L_4 = __this->____tail;
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0039;
		}
	}
	{
		ForceOverLifetimeModuleU5BU5D_t8B8EC5C9653BD37EA210B29740ACE97F39B6E1EC* L_5 = __this->____array;
		int32_t L_6 = __this->____head;
		ForceOverLifetimeModuleU5BU5D_t8B8EC5C9653BD37EA210B29740ACE97F39B6E1EC* L_7 = V_0;
		int32_t L_8 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, L_6, (RuntimeArray*)L_7, 0, L_8, NULL);
		goto IL_007d;
	}

IL_0039:
	{
		ForceOverLifetimeModuleU5BU5D_t8B8EC5C9653BD37EA210B29740ACE97F39B6E1EC* L_9 = __this->____array;
		int32_t L_10 = __this->____head;
		ForceOverLifetimeModuleU5BU5D_t8B8EC5C9653BD37EA210B29740ACE97F39B6E1EC* L_11 = V_0;
		ForceOverLifetimeModuleU5BU5D_t8B8EC5C9653BD37EA210B29740ACE97F39B6E1EC* L_12 = __this->____array;
		NullCheck(L_12);
		int32_t L_13 = __this->____head;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_9, L_10, (RuntimeArray*)L_11, 0, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_12)->max_length)), L_13)), NULL);
		ForceOverLifetimeModuleU5BU5D_t8B8EC5C9653BD37EA210B29740ACE97F39B6E1EC* L_14 = __this->____array;
		ForceOverLifetimeModuleU5BU5D_t8B8EC5C9653BD37EA210B29740ACE97F39B6E1EC* L_15 = V_0;
		ForceOverLifetimeModuleU5BU5D_t8B8EC5C9653BD37EA210B29740ACE97F39B6E1EC* L_16 = __this->____array;
		NullCheck(L_16);
		int32_t L_17 = __this->____head;
		int32_t L_18 = __this->____tail;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_14, 0, (RuntimeArray*)L_15, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_16)->max_length)), L_17)), L_18, NULL);
	}

IL_007d:
	{
		ForceOverLifetimeModuleU5BU5D_t8B8EC5C9653BD37EA210B29740ACE97F39B6E1EC* L_19 = V_0;
		__this->____array = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_19);
		__this->____head = 0;
		int32_t L_20 = __this->____size;
		int32_t L_21 = ___0_capacity;
		if ((((int32_t)L_20) == ((int32_t)L_21)))
		{
			G_B6_0 = __this;
			goto IL_009d;
		}
		G_B5_0 = __this;
	}
	{
		int32_t L_22 = __this->____size;
		G_B7_0 = L_22;
		G_B7_1 = G_B5_0;
		goto IL_009e;
	}

IL_009d:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
	}

IL_009e:
	{
		NullCheck(G_B7_1);
		G_B7_1->____tail = G_B7_0;
		int32_t L_23 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_23, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_MoveNext_mB5E49BD0C8D90F9B4FF0904ECE36E525545087D8_gshared (Queue_1_t6F177B1F38A281F7BC9922E112B5B006C3333CE9* __this, int32_t* ___0_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t* L_0 = ___0_index;
		int32_t L_1 = *((int32_t*)L_0);
		V_0 = ((int32_t)il2cpp_codegen_add(L_1, 1));
		int32_t L_2 = V_0;
		ForceOverLifetimeModuleU5BU5D_t8B8EC5C9653BD37EA210B29740ACE97F39B6E1EC* L_3 = __this->____array;
		NullCheck(L_3);
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))))
		{
			goto IL_0012;
		}
	}
	{
		V_0 = 0;
	}

IL_0012:
	{
		int32_t* L_4 = ___0_index;
		int32_t L_5 = V_0;
		*((int32_t*)L_4) = (int32_t)L_5;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_ThrowForEmptyQueue_m982B3AA5CA095F01B8F6BBF3691C4DF492436AC9_gshared (Queue_1_t6F177B1F38A281F7BC9922E112B5B006C3333CE9* __this, const RuntimeMethod* method) 
{
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1102619AA6FB2A4AADBDAA47DDC096AE04C772C0)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m60C6A39BBB27C4B8E2083FAF9297EEEE192091D3_gshared (Queue_1_t6513574E5F9571603E493A60C6E5B4A0D74A8F46* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		InheritVelocityModuleU5BU5D_tBBEA24AC089387EB19C315018C873CD94D15F41A* L_0;
		L_0 = Array_Empty_TisInheritVelocityModule_tB71B2EDCAF328647DDB6BC79541D7C5E76C19562_mC34E022E193FCEBCBCFABE3D326AFD7A3BC72D81_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		__this->____array = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m194D6049D33FF99D264821C0193141AEAF818298_gshared (Queue_1_t6513574E5F9571603E493A60C6E5B4A0D74A8F46* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_1 = ___0_capacity;
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_2);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_4 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC37D78082ACFC8DEE7B32D9351C6E433A074FEC7)), L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0020:
	{
		int32_t L_5 = ___0_capacity;
		InheritVelocityModuleU5BU5D_tBBEA24AC089387EB19C315018C873CD94D15F41A* L_6 = (InheritVelocityModuleU5BU5D_tBBEA24AC089387EB19C315018C873CD94D15F41A*)(InheritVelocityModuleU5BU5D_tBBEA24AC089387EB19C315018C873CD94D15F41A*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_5);
		__this->____array = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_6);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_mAA6AD29BBAF44AC4B4A36420BDC6BC581CFAF75D_gshared (Queue_1_t6513574E5F9571603E493A60C6E5B4A0D74A8F46* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_System_Collections_ICollection_get_IsSynchronized_m51CE66B76502A4AA1948B7BCC11A1EF7B20586DE_gshared (Queue_1_t6513574E5F9571603E493A60C6E5B4A0D74A8F46* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_ICollection_get_SyncRoot_m961922B96B87E416FFC903DBA864B2CB813380FF_gshared (Queue_1_t6513574E5F9571603E493A60C6E5B4A0D74A8F46* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____syncRoot;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Clear_mFF9B84A19F73AFE48B914D0D45B7E24A508105B0_gshared (Queue_1_t6513574E5F9571603E493A60C6E5B4A0D74A8F46* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (!L_0)
		{
			goto IL_006f;
		}
	}
	{
	}
	{
		int32_t L_1 = __this->____head;
		int32_t L_2 = __this->____tail;
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_0036;
		}
	}
	{
		InheritVelocityModuleU5BU5D_tBBEA24AC089387EB19C315018C873CD94D15F41A* L_3 = __this->____array;
		int32_t L_4 = __this->____head;
		int32_t L_5 = __this->____size;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, L_4, L_5, NULL);
		goto IL_0068;
	}

IL_0036:
	{
		InheritVelocityModuleU5BU5D_tBBEA24AC089387EB19C315018C873CD94D15F41A* L_6 = __this->____array;
		int32_t L_7 = __this->____head;
		InheritVelocityModuleU5BU5D_tBBEA24AC089387EB19C315018C873CD94D15F41A* L_8 = __this->____array;
		NullCheck(L_8);
		int32_t L_9 = __this->____head;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_6, L_7, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_8)->max_length)), L_9)), NULL);
		InheritVelocityModuleU5BU5D_tBBEA24AC089387EB19C315018C873CD94D15F41A* L_10 = __this->____array;
		int32_t L_11 = __this->____tail;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_10, 0, L_11, NULL);
	}

IL_0068:
	{
		__this->____size = 0;
	}

IL_006f:
	{
		__this->____head = 0;
		__this->____tail = 0;
		int32_t L_12 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_12, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_System_Collections_ICollection_CopyTo_m0564E2B025D1F57A334C7DB9EA5BB75369BF9D20_gshared (Queue_1_t6513574E5F9571603E493A60C6E5B4A0D74A8F46* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	int32_t G_B17_0 = 0;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeArray* L_2 = ___0_array;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_2, NULL);
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral967D403A541A1026A83D548E5AD5CA800AD4EFB5)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0027:
	{
		RuntimeArray* L_5 = ___0_array;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_5, 0, NULL);
		if (!L_6)
		{
			goto IL_0040;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6195D7DA68D16D4985AD1A1B4FD2841A43CDDE70)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, method);
	}

IL_0040:
	{
		RuntimeArray* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_8, NULL);
		V_0 = L_9;
		int32_t L_10 = ___1_index;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_11 = ___1_index;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) <= ((int32_t)L_12)))
		{
			goto IL_0065;
		}
	}

IL_004f:
	{
		int32_t L_13 = ___1_index;
		int32_t L_14 = L_13;
		RuntimeObject* L_15 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_14);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_16 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_16, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), L_15, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, method);
	}

IL_0065:
	{
		int32_t L_17 = V_0;
		int32_t L_18 = ___1_index;
		int32_t L_19 = __this->____size;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_17, L_18))) >= ((int32_t)L_19)))
		{
			goto IL_007b;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_20 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_20, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, method);
	}

IL_007b:
	{
		int32_t L_21 = __this->____size;
		V_1 = L_21;
		int32_t L_22 = V_1;
		if (L_22)
		{
			goto IL_0086;
		}
	}
	{
		return;
	}

IL_0086:
	{
	}
	try
	{
		{
			InheritVelocityModuleU5BU5D_tBBEA24AC089387EB19C315018C873CD94D15F41A* L_23 = __this->____array;
			NullCheck(L_23);
			int32_t L_24 = __this->____head;
			int32_t L_25 = V_1;
			if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_23)->max_length)), L_24))) < ((int32_t)L_25)))
			{
				goto IL_009c_1;
			}
		}
		{
			int32_t L_26 = V_1;
			G_B17_0 = L_26;
			goto IL_00ab_1;
		}

IL_009c_1:
		{
			InheritVelocityModuleU5BU5D_tBBEA24AC089387EB19C315018C873CD94D15F41A* L_27 = __this->____array;
			NullCheck(L_27);
			int32_t L_28 = __this->____head;
			G_B17_0 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_27)->max_length)), L_28));
		}

IL_00ab_1:
		{
			V_2 = G_B17_0;
			InheritVelocityModuleU5BU5D_tBBEA24AC089387EB19C315018C873CD94D15F41A* L_29 = __this->____array;
			int32_t L_30 = __this->____head;
			RuntimeArray* L_31 = ___0_array;
			int32_t L_32 = ___1_index;
			int32_t L_33 = V_2;
			Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_29, L_30, L_31, L_32, L_33, NULL);
			int32_t L_34 = V_1;
			int32_t L_35 = V_2;
			V_1 = ((int32_t)il2cpp_codegen_subtract(L_34, L_35));
			int32_t L_36 = V_1;
			if ((((int32_t)L_36) <= ((int32_t)0)))
			{
				goto IL_00e7_1;
			}
		}
		{
			InheritVelocityModuleU5BU5D_tBBEA24AC089387EB19C315018C873CD94D15F41A* L_37 = __this->____array;
			RuntimeArray* L_38 = ___0_array;
			int32_t L_39 = ___1_index;
			InheritVelocityModuleU5BU5D_tBBEA24AC089387EB19C315018C873CD94D15F41A* L_40 = __this->____array;
			NullCheck(L_40);
			int32_t L_41 = __this->____head;
			int32_t L_42 = V_1;
			Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_37, 0, L_38, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_39, ((int32_t)(((RuntimeArray*)L_40)->max_length)))), L_41)), L_42, NULL);
		}

IL_00e7_1:
		{
			goto IL_00fa;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00e9;
		}
		throw e;
	}

CATCH_00e9:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_43 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_44 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_44, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBD0381A992FDF4F7DA60E5D83689FE7FF6309CB8)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_44, method);
	}

IL_00fa:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_m7FAA8DEAC1AE2DC4E3D6FFDBCFC7BAEA03228334_gshared (Queue_1_t6513574E5F9571603E493A60C6E5B4A0D74A8F46* __this, InheritVelocityModule_tB71B2EDCAF328647DDB6BC79541D7C5E76C19562 ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____size;
		InheritVelocityModuleU5BU5D_tBBEA24AC089387EB19C315018C873CD94D15F41A* L_1 = __this->____array;
		NullCheck(L_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))))))
		{
			goto IL_0045;
		}
	}
	{
		InheritVelocityModuleU5BU5D_tBBEA24AC089387EB19C315018C873CD94D15F41A* L_2 = __this->____array;
		NullCheck(L_2);
		V_0 = ((int32_t)((int64_t)(((int64_t)il2cpp_codegen_multiply(((int64_t)((int32_t)(((RuntimeArray*)L_2)->max_length))), ((int64_t)((int32_t)200))))/((int64_t)((int32_t)100)))));
		int32_t L_3 = V_0;
		InheritVelocityModuleU5BU5D_tBBEA24AC089387EB19C315018C873CD94D15F41A* L_4 = __this->____array;
		NullCheck(L_4);
		if ((((int32_t)L_3) >= ((int32_t)((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_4)->max_length)), 4)))))
		{
			goto IL_003e;
		}
	}
	{
		InheritVelocityModuleU5BU5D_tBBEA24AC089387EB19C315018C873CD94D15F41A* L_5 = __this->____array;
		NullCheck(L_5);
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_5)->max_length)), 4));
	}

IL_003e:
	{
		int32_t L_6 = V_0;
		Queue_1_SetCapacity_mF8D17BFAC35B95AF1B36A1272C18DA8DDF4DB049(__this, L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
	}

IL_0045:
	{
		InheritVelocityModuleU5BU5D_tBBEA24AC089387EB19C315018C873CD94D15F41A* L_7 = __this->____array;
		int32_t L_8 = __this->____tail;
		InheritVelocityModule_tB71B2EDCAF328647DDB6BC79541D7C5E76C19562 L_9 = ___0_item;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (InheritVelocityModule_tB71B2EDCAF328647DDB6BC79541D7C5E76C19562)L_9);
		int32_t* L_10 = (int32_t*)(&__this->____tail);
		Queue_1_MoveNext_m291D9FA11608ECCE8AB8D824A29559A5F8ABC35C(__this, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		int32_t L_11 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_11, 1));
		int32_t L_12 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_12, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tDD8F18C63CBC3504D6CD806798A047A910BFF393 Queue_1_GetEnumerator_m1C0779D48ABA251FBD880189789215D5B2F0CB83_gshared (Queue_1_t6513574E5F9571603E493A60C6E5B4A0D74A8F46* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tDD8F18C63CBC3504D6CD806798A047A910BFF393 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m4F048D40D8F35D38BE7F1897B2835807409480B5((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m95ECA75FCB6A4AC58995362AA6F5CF5B3AF66C81_gshared (Queue_1_t6513574E5F9571603E493A60C6E5B4A0D74A8F46* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tDD8F18C63CBC3504D6CD806798A047A910BFF393 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m4F048D40D8F35D38BE7F1897B2835807409480B5((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		Enumerator_tDD8F18C63CBC3504D6CD806798A047A910BFF393 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_IEnumerable_GetEnumerator_mE03E210CB247C9D51C82FE8BDE7D425D739E0620_gshared (Queue_1_t6513574E5F9571603E493A60C6E5B4A0D74A8F46* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tDD8F18C63CBC3504D6CD806798A047A910BFF393 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m4F048D40D8F35D38BE7F1897B2835807409480B5((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		Enumerator_tDD8F18C63CBC3504D6CD806798A047A910BFF393 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InheritVelocityModule_tB71B2EDCAF328647DDB6BC79541D7C5E76C19562 Queue_1_Dequeue_m73097B732541CD1C96E097A662D885943567F8D2_gshared (Queue_1_t6513574E5F9571603E493A60C6E5B4A0D74A8F46* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	InheritVelocityModuleU5BU5D_tBBEA24AC089387EB19C315018C873CD94D15F41A* V_1 = NULL;
	InheritVelocityModule_tB71B2EDCAF328647DDB6BC79541D7C5E76C19562 V_2;
	memset((&V_2), 0, sizeof(V_2));
	InheritVelocityModule_tB71B2EDCAF328647DDB6BC79541D7C5E76C19562 G_B4_0;
	memset((&G_B4_0), 0, sizeof(G_B4_0));
	InheritVelocityModule_tB71B2EDCAF328647DDB6BC79541D7C5E76C19562 G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		int32_t L_0 = __this->____head;
		V_0 = L_0;
		InheritVelocityModuleU5BU5D_tBBEA24AC089387EB19C315018C873CD94D15F41A* L_1 = __this->____array;
		V_1 = L_1;
		int32_t L_2 = __this->____size;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		Queue_1_ThrowForEmptyQueue_m7509637FF9F9413609F3D806DD57A704ECA21687(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}

IL_001c:
	{
		InheritVelocityModuleU5BU5D_tBBEA24AC089387EB19C315018C873CD94D15F41A* L_3 = V_1;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		InheritVelocityModule_tB71B2EDCAF328647DDB6BC79541D7C5E76C19562 L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		G_B3_0 = L_6;
	}
	{
		InheritVelocityModuleU5BU5D_tBBEA24AC089387EB19C315018C873CD94D15F41A* L_7 = V_1;
		int32_t L_8 = V_0;
		il2cpp_codegen_initobj((&V_2), sizeof(InheritVelocityModule_tB71B2EDCAF328647DDB6BC79541D7C5E76C19562));
		InheritVelocityModule_tB71B2EDCAF328647DDB6BC79541D7C5E76C19562 L_9 = V_2;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (InheritVelocityModule_tB71B2EDCAF328647DDB6BC79541D7C5E76C19562)L_9);
		G_B4_0 = G_B3_0;
	}

IL_003a:
	{
		int32_t* L_10 = (int32_t*)(&__this->____head);
		Queue_1_MoveNext_m291D9FA11608ECCE8AB8D824A29559A5F8ABC35C(__this, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		int32_t L_11 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
		int32_t L_12 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_12, 1));
		return G_B4_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InheritVelocityModule_tB71B2EDCAF328647DDB6BC79541D7C5E76C19562 Queue_1_Peek_m26D5DE9D4773A5DE67567AAF8D18392798B949D6_gshared (Queue_1_t6513574E5F9571603E493A60C6E5B4A0D74A8F46* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		Queue_1_ThrowForEmptyQueue_m7509637FF9F9413609F3D806DD57A704ECA21687(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}

IL_000e:
	{
		InheritVelocityModuleU5BU5D_tBBEA24AC089387EB19C315018C873CD94D15F41A* L_1 = __this->____array;
		int32_t L_2 = __this->____head;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		InheritVelocityModule_tB71B2EDCAF328647DDB6BC79541D7C5E76C19562 L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InheritVelocityModuleU5BU5D_tBBEA24AC089387EB19C315018C873CD94D15F41A* Queue_1_ToArray_mF34B00F5E0DE074E9F7C3F86758D192795C88572_gshared (Queue_1_t6513574E5F9571603E493A60C6E5B4A0D74A8F46* __this, const RuntimeMethod* method) 
{
	InheritVelocityModuleU5BU5D_tBBEA24AC089387EB19C315018C873CD94D15F41A* V_0 = NULL;
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		InheritVelocityModuleU5BU5D_tBBEA24AC089387EB19C315018C873CD94D15F41A* L_1;
		L_1 = Array_Empty_TisInheritVelocityModule_tB71B2EDCAF328647DDB6BC79541D7C5E76C19562_mC34E022E193FCEBCBCFABE3D326AFD7A3BC72D81_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____size;
		InheritVelocityModuleU5BU5D_tBBEA24AC089387EB19C315018C873CD94D15F41A* L_3 = (InheritVelocityModuleU5BU5D_tBBEA24AC089387EB19C315018C873CD94D15F41A*)(InheritVelocityModuleU5BU5D_tBBEA24AC089387EB19C315018C873CD94D15F41A*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_2);
		V_0 = L_3;
		int32_t L_4 = __this->____head;
		int32_t L_5 = __this->____tail;
		if ((((int32_t)L_4) >= ((int32_t)L_5)))
		{
			goto IL_0043;
		}
	}
	{
		InheritVelocityModuleU5BU5D_tBBEA24AC089387EB19C315018C873CD94D15F41A* L_6 = __this->____array;
		int32_t L_7 = __this->____head;
		InheritVelocityModuleU5BU5D_tBBEA24AC089387EB19C315018C873CD94D15F41A* L_8 = V_0;
		int32_t L_9 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_6, L_7, (RuntimeArray*)L_8, 0, L_9, NULL);
		goto IL_0087;
	}

IL_0043:
	{
		InheritVelocityModuleU5BU5D_tBBEA24AC089387EB19C315018C873CD94D15F41A* L_10 = __this->____array;
		int32_t L_11 = __this->____head;
		InheritVelocityModuleU5BU5D_tBBEA24AC089387EB19C315018C873CD94D15F41A* L_12 = V_0;
		InheritVelocityModuleU5BU5D_tBBEA24AC089387EB19C315018C873CD94D15F41A* L_13 = __this->____array;
		NullCheck(L_13);
		int32_t L_14 = __this->____head;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_10, L_11, (RuntimeArray*)L_12, 0, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_13)->max_length)), L_14)), NULL);
		InheritVelocityModuleU5BU5D_tBBEA24AC089387EB19C315018C873CD94D15F41A* L_15 = __this->____array;
		InheritVelocityModuleU5BU5D_tBBEA24AC089387EB19C315018C873CD94D15F41A* L_16 = V_0;
		InheritVelocityModuleU5BU5D_tBBEA24AC089387EB19C315018C873CD94D15F41A* L_17 = __this->____array;
		NullCheck(L_17);
		int32_t L_18 = __this->____head;
		int32_t L_19 = __this->____tail;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_15, 0, (RuntimeArray*)L_16, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_17)->max_length)), L_18)), L_19, NULL);
	}

IL_0087:
	{
		InheritVelocityModuleU5BU5D_tBBEA24AC089387EB19C315018C873CD94D15F41A* L_20 = V_0;
		return L_20;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_SetCapacity_mF8D17BFAC35B95AF1B36A1272C18DA8DDF4DB049_gshared (Queue_1_t6513574E5F9571603E493A60C6E5B4A0D74A8F46* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	InheritVelocityModuleU5BU5D_tBBEA24AC089387EB19C315018C873CD94D15F41A* V_0 = NULL;
	Queue_1_t6513574E5F9571603E493A60C6E5B4A0D74A8F46* G_B6_0 = NULL;
	Queue_1_t6513574E5F9571603E493A60C6E5B4A0D74A8F46* G_B5_0 = NULL;
	int32_t G_B7_0 = 0;
	Queue_1_t6513574E5F9571603E493A60C6E5B4A0D74A8F46* G_B7_1 = NULL;
	{
		int32_t L_0 = ___0_capacity;
		InheritVelocityModuleU5BU5D_tBBEA24AC089387EB19C315018C873CD94D15F41A* L_1 = (InheritVelocityModuleU5BU5D_tBBEA24AC089387EB19C315018C873CD94D15F41A*)(InheritVelocityModuleU5BU5D_tBBEA24AC089387EB19C315018C873CD94D15F41A*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_007d;
		}
	}
	{
		int32_t L_3 = __this->____head;
		int32_t L_4 = __this->____tail;
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0039;
		}
	}
	{
		InheritVelocityModuleU5BU5D_tBBEA24AC089387EB19C315018C873CD94D15F41A* L_5 = __this->____array;
		int32_t L_6 = __this->____head;
		InheritVelocityModuleU5BU5D_tBBEA24AC089387EB19C315018C873CD94D15F41A* L_7 = V_0;
		int32_t L_8 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, L_6, (RuntimeArray*)L_7, 0, L_8, NULL);
		goto IL_007d;
	}

IL_0039:
	{
		InheritVelocityModuleU5BU5D_tBBEA24AC089387EB19C315018C873CD94D15F41A* L_9 = __this->____array;
		int32_t L_10 = __this->____head;
		InheritVelocityModuleU5BU5D_tBBEA24AC089387EB19C315018C873CD94D15F41A* L_11 = V_0;
		InheritVelocityModuleU5BU5D_tBBEA24AC089387EB19C315018C873CD94D15F41A* L_12 = __this->____array;
		NullCheck(L_12);
		int32_t L_13 = __this->____head;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_9, L_10, (RuntimeArray*)L_11, 0, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_12)->max_length)), L_13)), NULL);
		InheritVelocityModuleU5BU5D_tBBEA24AC089387EB19C315018C873CD94D15F41A* L_14 = __this->____array;
		InheritVelocityModuleU5BU5D_tBBEA24AC089387EB19C315018C873CD94D15F41A* L_15 = V_0;
		InheritVelocityModuleU5BU5D_tBBEA24AC089387EB19C315018C873CD94D15F41A* L_16 = __this->____array;
		NullCheck(L_16);
		int32_t L_17 = __this->____head;
		int32_t L_18 = __this->____tail;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_14, 0, (RuntimeArray*)L_15, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_16)->max_length)), L_17)), L_18, NULL);
	}

IL_007d:
	{
		InheritVelocityModuleU5BU5D_tBBEA24AC089387EB19C315018C873CD94D15F41A* L_19 = V_0;
		__this->____array = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_19);
		__this->____head = 0;
		int32_t L_20 = __this->____size;
		int32_t L_21 = ___0_capacity;
		if ((((int32_t)L_20) == ((int32_t)L_21)))
		{
			G_B6_0 = __this;
			goto IL_009d;
		}
		G_B5_0 = __this;
	}
	{
		int32_t L_22 = __this->____size;
		G_B7_0 = L_22;
		G_B7_1 = G_B5_0;
		goto IL_009e;
	}

IL_009d:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
	}

IL_009e:
	{
		NullCheck(G_B7_1);
		G_B7_1->____tail = G_B7_0;
		int32_t L_23 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_23, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_MoveNext_m291D9FA11608ECCE8AB8D824A29559A5F8ABC35C_gshared (Queue_1_t6513574E5F9571603E493A60C6E5B4A0D74A8F46* __this, int32_t* ___0_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t* L_0 = ___0_index;
		int32_t L_1 = *((int32_t*)L_0);
		V_0 = ((int32_t)il2cpp_codegen_add(L_1, 1));
		int32_t L_2 = V_0;
		InheritVelocityModuleU5BU5D_tBBEA24AC089387EB19C315018C873CD94D15F41A* L_3 = __this->____array;
		NullCheck(L_3);
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))))
		{
			goto IL_0012;
		}
	}
	{
		V_0 = 0;
	}

IL_0012:
	{
		int32_t* L_4 = ___0_index;
		int32_t L_5 = V_0;
		*((int32_t*)L_4) = (int32_t)L_5;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_ThrowForEmptyQueue_m7509637FF9F9413609F3D806DD57A704ECA21687_gshared (Queue_1_t6513574E5F9571603E493A60C6E5B4A0D74A8F46* __this, const RuntimeMethod* method) 
{
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1102619AA6FB2A4AADBDAA47DDC096AE04C772C0)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m6AE388B3B0DB9B79173B372D07E1E333EB015968_gshared (Queue_1_t4AA446582A62FB2A18563671B4E47108952DD4FB* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		LightsModuleU5BU5D_t1B43D0E6425D6ECE42FB5D4E9A0E7522279ACA56* L_0;
		L_0 = Array_Empty_TisLightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_mC84EDDF86908CEB62AAFDFDCD8E2E3210403A401_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		__this->____array = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_mA8089FC62440AE63D3CAC8776014B7478CBF5FB8_gshared (Queue_1_t4AA446582A62FB2A18563671B4E47108952DD4FB* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_1 = ___0_capacity;
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_2);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_4 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC37D78082ACFC8DEE7B32D9351C6E433A074FEC7)), L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0020:
	{
		int32_t L_5 = ___0_capacity;
		LightsModuleU5BU5D_t1B43D0E6425D6ECE42FB5D4E9A0E7522279ACA56* L_6 = (LightsModuleU5BU5D_t1B43D0E6425D6ECE42FB5D4E9A0E7522279ACA56*)(LightsModuleU5BU5D_t1B43D0E6425D6ECE42FB5D4E9A0E7522279ACA56*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_5);
		__this->____array = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_6);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_mA3EEB768D202771DE75EA6DDA51510A0EE73A407_gshared (Queue_1_t4AA446582A62FB2A18563671B4E47108952DD4FB* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_System_Collections_ICollection_get_IsSynchronized_m5539F8F07D2A2E821C62ABC97D68682336B69FD1_gshared (Queue_1_t4AA446582A62FB2A18563671B4E47108952DD4FB* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_ICollection_get_SyncRoot_m19A8350ABDB788B86C444813CA42C2E816BCCF51_gshared (Queue_1_t4AA446582A62FB2A18563671B4E47108952DD4FB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____syncRoot;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Clear_m40733F6DC45319FA8BE5F244B7C5576518BDBE88_gshared (Queue_1_t4AA446582A62FB2A18563671B4E47108952DD4FB* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (!L_0)
		{
			goto IL_006f;
		}
	}
	{
	}
	{
		int32_t L_1 = __this->____head;
		int32_t L_2 = __this->____tail;
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_0036;
		}
	}
	{
		LightsModuleU5BU5D_t1B43D0E6425D6ECE42FB5D4E9A0E7522279ACA56* L_3 = __this->____array;
		int32_t L_4 = __this->____head;
		int32_t L_5 = __this->____size;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, L_4, L_5, NULL);
		goto IL_0068;
	}

IL_0036:
	{
		LightsModuleU5BU5D_t1B43D0E6425D6ECE42FB5D4E9A0E7522279ACA56* L_6 = __this->____array;
		int32_t L_7 = __this->____head;
		LightsModuleU5BU5D_t1B43D0E6425D6ECE42FB5D4E9A0E7522279ACA56* L_8 = __this->____array;
		NullCheck(L_8);
		int32_t L_9 = __this->____head;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_6, L_7, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_8)->max_length)), L_9)), NULL);
		LightsModuleU5BU5D_t1B43D0E6425D6ECE42FB5D4E9A0E7522279ACA56* L_10 = __this->____array;
		int32_t L_11 = __this->____tail;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_10, 0, L_11, NULL);
	}

IL_0068:
	{
		__this->____size = 0;
	}

IL_006f:
	{
		__this->____head = 0;
		__this->____tail = 0;
		int32_t L_12 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_12, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_System_Collections_ICollection_CopyTo_m787F6ADF491B194F44ACDE7288742172CD133FFD_gshared (Queue_1_t4AA446582A62FB2A18563671B4E47108952DD4FB* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	int32_t G_B17_0 = 0;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeArray* L_2 = ___0_array;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_2, NULL);
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral967D403A541A1026A83D548E5AD5CA800AD4EFB5)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0027:
	{
		RuntimeArray* L_5 = ___0_array;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_5, 0, NULL);
		if (!L_6)
		{
			goto IL_0040;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6195D7DA68D16D4985AD1A1B4FD2841A43CDDE70)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, method);
	}

IL_0040:
	{
		RuntimeArray* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_8, NULL);
		V_0 = L_9;
		int32_t L_10 = ___1_index;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_11 = ___1_index;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) <= ((int32_t)L_12)))
		{
			goto IL_0065;
		}
	}

IL_004f:
	{
		int32_t L_13 = ___1_index;
		int32_t L_14 = L_13;
		RuntimeObject* L_15 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_14);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_16 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_16, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), L_15, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, method);
	}

IL_0065:
	{
		int32_t L_17 = V_0;
		int32_t L_18 = ___1_index;
		int32_t L_19 = __this->____size;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_17, L_18))) >= ((int32_t)L_19)))
		{
			goto IL_007b;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_20 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_20, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, method);
	}

IL_007b:
	{
		int32_t L_21 = __this->____size;
		V_1 = L_21;
		int32_t L_22 = V_1;
		if (L_22)
		{
			goto IL_0086;
		}
	}
	{
		return;
	}

IL_0086:
	{
	}
	try
	{
		{
			LightsModuleU5BU5D_t1B43D0E6425D6ECE42FB5D4E9A0E7522279ACA56* L_23 = __this->____array;
			NullCheck(L_23);
			int32_t L_24 = __this->____head;
			int32_t L_25 = V_1;
			if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_23)->max_length)), L_24))) < ((int32_t)L_25)))
			{
				goto IL_009c_1;
			}
		}
		{
			int32_t L_26 = V_1;
			G_B17_0 = L_26;
			goto IL_00ab_1;
		}

IL_009c_1:
		{
			LightsModuleU5BU5D_t1B43D0E6425D6ECE42FB5D4E9A0E7522279ACA56* L_27 = __this->____array;
			NullCheck(L_27);
			int32_t L_28 = __this->____head;
			G_B17_0 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_27)->max_length)), L_28));
		}

IL_00ab_1:
		{
			V_2 = G_B17_0;
			LightsModuleU5BU5D_t1B43D0E6425D6ECE42FB5D4E9A0E7522279ACA56* L_29 = __this->____array;
			int32_t L_30 = __this->____head;
			RuntimeArray* L_31 = ___0_array;
			int32_t L_32 = ___1_index;
			int32_t L_33 = V_2;
			Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_29, L_30, L_31, L_32, L_33, NULL);
			int32_t L_34 = V_1;
			int32_t L_35 = V_2;
			V_1 = ((int32_t)il2cpp_codegen_subtract(L_34, L_35));
			int32_t L_36 = V_1;
			if ((((int32_t)L_36) <= ((int32_t)0)))
			{
				goto IL_00e7_1;
			}
		}
		{
			LightsModuleU5BU5D_t1B43D0E6425D6ECE42FB5D4E9A0E7522279ACA56* L_37 = __this->____array;
			RuntimeArray* L_38 = ___0_array;
			int32_t L_39 = ___1_index;
			LightsModuleU5BU5D_t1B43D0E6425D6ECE42FB5D4E9A0E7522279ACA56* L_40 = __this->____array;
			NullCheck(L_40);
			int32_t L_41 = __this->____head;
			int32_t L_42 = V_1;
			Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_37, 0, L_38, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_39, ((int32_t)(((RuntimeArray*)L_40)->max_length)))), L_41)), L_42, NULL);
		}

IL_00e7_1:
		{
			goto IL_00fa;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00e9;
		}
		throw e;
	}

CATCH_00e9:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_43 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_44 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_44, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBD0381A992FDF4F7DA60E5D83689FE7FF6309CB8)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_44, method);
	}

IL_00fa:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_m8BC0A0B845F96292274E96F89A9C50C77FAC237D_gshared (Queue_1_t4AA446582A62FB2A18563671B4E47108952DD4FB* __this, LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____size;
		LightsModuleU5BU5D_t1B43D0E6425D6ECE42FB5D4E9A0E7522279ACA56* L_1 = __this->____array;
		NullCheck(L_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))))))
		{
			goto IL_0045;
		}
	}
	{
		LightsModuleU5BU5D_t1B43D0E6425D6ECE42FB5D4E9A0E7522279ACA56* L_2 = __this->____array;
		NullCheck(L_2);
		V_0 = ((int32_t)((int64_t)(((int64_t)il2cpp_codegen_multiply(((int64_t)((int32_t)(((RuntimeArray*)L_2)->max_length))), ((int64_t)((int32_t)200))))/((int64_t)((int32_t)100)))));
		int32_t L_3 = V_0;
		LightsModuleU5BU5D_t1B43D0E6425D6ECE42FB5D4E9A0E7522279ACA56* L_4 = __this->____array;
		NullCheck(L_4);
		if ((((int32_t)L_3) >= ((int32_t)((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_4)->max_length)), 4)))))
		{
			goto IL_003e;
		}
	}
	{
		LightsModuleU5BU5D_t1B43D0E6425D6ECE42FB5D4E9A0E7522279ACA56* L_5 = __this->____array;
		NullCheck(L_5);
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_5)->max_length)), 4));
	}

IL_003e:
	{
		int32_t L_6 = V_0;
		Queue_1_SetCapacity_m36119DA0B708006BB72193C19385189BA0DBD9F0(__this, L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
	}

IL_0045:
	{
		LightsModuleU5BU5D_t1B43D0E6425D6ECE42FB5D4E9A0E7522279ACA56* L_7 = __this->____array;
		int32_t L_8 = __this->____tail;
		LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E L_9 = ___0_item;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E)L_9);
		int32_t* L_10 = (int32_t*)(&__this->____tail);
		Queue_1_MoveNext_mDC3D893F47661BA5C82C49C991C09CB2F7E55CE6(__this, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		int32_t L_11 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_11, 1));
		int32_t L_12 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_12, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tA89F09BA1DAB7E615FEE410A1D4A5C27AC44E560 Queue_1_GetEnumerator_m192EA6EEBA8F97AFF0A285494DDA20D12ED7D374_gshared (Queue_1_t4AA446582A62FB2A18563671B4E47108952DD4FB* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tA89F09BA1DAB7E615FEE410A1D4A5C27AC44E560 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mC9F5D354A52F9A1EE01DDC21B0489BE6929838B8((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_mDB3B2683C1E524D30F846C38EE5EBFDE5652B46F_gshared (Queue_1_t4AA446582A62FB2A18563671B4E47108952DD4FB* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tA89F09BA1DAB7E615FEE410A1D4A5C27AC44E560 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mC9F5D354A52F9A1EE01DDC21B0489BE6929838B8((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		Enumerator_tA89F09BA1DAB7E615FEE410A1D4A5C27AC44E560 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_IEnumerable_GetEnumerator_mE0F3D28781233189A7FA4AAE5C700258E8EF68A0_gshared (Queue_1_t4AA446582A62FB2A18563671B4E47108952DD4FB* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tA89F09BA1DAB7E615FEE410A1D4A5C27AC44E560 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mC9F5D354A52F9A1EE01DDC21B0489BE6929838B8((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		Enumerator_tA89F09BA1DAB7E615FEE410A1D4A5C27AC44E560 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E Queue_1_Dequeue_mFF8AE887326C63ABE1E9B0803C11265757405DB5_gshared (Queue_1_t4AA446582A62FB2A18563671B4E47108952DD4FB* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	LightsModuleU5BU5D_t1B43D0E6425D6ECE42FB5D4E9A0E7522279ACA56* V_1 = NULL;
	LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E V_2;
	memset((&V_2), 0, sizeof(V_2));
	LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E G_B4_0;
	memset((&G_B4_0), 0, sizeof(G_B4_0));
	LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		int32_t L_0 = __this->____head;
		V_0 = L_0;
		LightsModuleU5BU5D_t1B43D0E6425D6ECE42FB5D4E9A0E7522279ACA56* L_1 = __this->____array;
		V_1 = L_1;
		int32_t L_2 = __this->____size;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		Queue_1_ThrowForEmptyQueue_m1A6FFBB1A9A0B73ACC736801F631354458BB1329(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}

IL_001c:
	{
		LightsModuleU5BU5D_t1B43D0E6425D6ECE42FB5D4E9A0E7522279ACA56* L_3 = V_1;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		G_B3_0 = L_6;
	}
	{
		LightsModuleU5BU5D_t1B43D0E6425D6ECE42FB5D4E9A0E7522279ACA56* L_7 = V_1;
		int32_t L_8 = V_0;
		il2cpp_codegen_initobj((&V_2), sizeof(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E));
		LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E L_9 = V_2;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E)L_9);
		G_B4_0 = G_B3_0;
	}

IL_003a:
	{
		int32_t* L_10 = (int32_t*)(&__this->____head);
		Queue_1_MoveNext_mDC3D893F47661BA5C82C49C991C09CB2F7E55CE6(__this, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		int32_t L_11 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
		int32_t L_12 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_12, 1));
		return G_B4_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E Queue_1_Peek_mE9C129AB5A8B8D8767767F7D2DBEB53BA03F0026_gshared (Queue_1_t4AA446582A62FB2A18563671B4E47108952DD4FB* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		Queue_1_ThrowForEmptyQueue_m1A6FFBB1A9A0B73ACC736801F631354458BB1329(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}

IL_000e:
	{
		LightsModuleU5BU5D_t1B43D0E6425D6ECE42FB5D4E9A0E7522279ACA56* L_1 = __this->____array;
		int32_t L_2 = __this->____head;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LightsModuleU5BU5D_t1B43D0E6425D6ECE42FB5D4E9A0E7522279ACA56* Queue_1_ToArray_m8CF72A6A2E0690D3B9D0A93B7D3D6BC32DFA24C3_gshared (Queue_1_t4AA446582A62FB2A18563671B4E47108952DD4FB* __this, const RuntimeMethod* method) 
{
	LightsModuleU5BU5D_t1B43D0E6425D6ECE42FB5D4E9A0E7522279ACA56* V_0 = NULL;
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		LightsModuleU5BU5D_t1B43D0E6425D6ECE42FB5D4E9A0E7522279ACA56* L_1;
		L_1 = Array_Empty_TisLightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_mC84EDDF86908CEB62AAFDFDCD8E2E3210403A401_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____size;
		LightsModuleU5BU5D_t1B43D0E6425D6ECE42FB5D4E9A0E7522279ACA56* L_3 = (LightsModuleU5BU5D_t1B43D0E6425D6ECE42FB5D4E9A0E7522279ACA56*)(LightsModuleU5BU5D_t1B43D0E6425D6ECE42FB5D4E9A0E7522279ACA56*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_2);
		V_0 = L_3;
		int32_t L_4 = __this->____head;
		int32_t L_5 = __this->____tail;
		if ((((int32_t)L_4) >= ((int32_t)L_5)))
		{
			goto IL_0043;
		}
	}
	{
		LightsModuleU5BU5D_t1B43D0E6425D6ECE42FB5D4E9A0E7522279ACA56* L_6 = __this->____array;
		int32_t L_7 = __this->____head;
		LightsModuleU5BU5D_t1B43D0E6425D6ECE42FB5D4E9A0E7522279ACA56* L_8 = V_0;
		int32_t L_9 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_6, L_7, (RuntimeArray*)L_8, 0, L_9, NULL);
		goto IL_0087;
	}

IL_0043:
	{
		LightsModuleU5BU5D_t1B43D0E6425D6ECE42FB5D4E9A0E7522279ACA56* L_10 = __this->____array;
		int32_t L_11 = __this->____head;
		LightsModuleU5BU5D_t1B43D0E6425D6ECE42FB5D4E9A0E7522279ACA56* L_12 = V_0;
		LightsModuleU5BU5D_t1B43D0E6425D6ECE42FB5D4E9A0E7522279ACA56* L_13 = __this->____array;
		NullCheck(L_13);
		int32_t L_14 = __this->____head;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_10, L_11, (RuntimeArray*)L_12, 0, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_13)->max_length)), L_14)), NULL);
		LightsModuleU5BU5D_t1B43D0E6425D6ECE42FB5D4E9A0E7522279ACA56* L_15 = __this->____array;
		LightsModuleU5BU5D_t1B43D0E6425D6ECE42FB5D4E9A0E7522279ACA56* L_16 = V_0;
		LightsModuleU5BU5D_t1B43D0E6425D6ECE42FB5D4E9A0E7522279ACA56* L_17 = __this->____array;
		NullCheck(L_17);
		int32_t L_18 = __this->____head;
		int32_t L_19 = __this->____tail;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_15, 0, (RuntimeArray*)L_16, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_17)->max_length)), L_18)), L_19, NULL);
	}

IL_0087:
	{
		LightsModuleU5BU5D_t1B43D0E6425D6ECE42FB5D4E9A0E7522279ACA56* L_20 = V_0;
		return L_20;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_SetCapacity_m36119DA0B708006BB72193C19385189BA0DBD9F0_gshared (Queue_1_t4AA446582A62FB2A18563671B4E47108952DD4FB* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	LightsModuleU5BU5D_t1B43D0E6425D6ECE42FB5D4E9A0E7522279ACA56* V_0 = NULL;
	Queue_1_t4AA446582A62FB2A18563671B4E47108952DD4FB* G_B6_0 = NULL;
	Queue_1_t4AA446582A62FB2A18563671B4E47108952DD4FB* G_B5_0 = NULL;
	int32_t G_B7_0 = 0;
	Queue_1_t4AA446582A62FB2A18563671B4E47108952DD4FB* G_B7_1 = NULL;
	{
		int32_t L_0 = ___0_capacity;
		LightsModuleU5BU5D_t1B43D0E6425D6ECE42FB5D4E9A0E7522279ACA56* L_1 = (LightsModuleU5BU5D_t1B43D0E6425D6ECE42FB5D4E9A0E7522279ACA56*)(LightsModuleU5BU5D_t1B43D0E6425D6ECE42FB5D4E9A0E7522279ACA56*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_007d;
		}
	}
	{
		int32_t L_3 = __this->____head;
		int32_t L_4 = __this->____tail;
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0039;
		}
	}
	{
		LightsModuleU5BU5D_t1B43D0E6425D6ECE42FB5D4E9A0E7522279ACA56* L_5 = __this->____array;
		int32_t L_6 = __this->____head;
		LightsModuleU5BU5D_t1B43D0E6425D6ECE42FB5D4E9A0E7522279ACA56* L_7 = V_0;
		int32_t L_8 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, L_6, (RuntimeArray*)L_7, 0, L_8, NULL);
		goto IL_007d;
	}

IL_0039:
	{
		LightsModuleU5BU5D_t1B43D0E6425D6ECE42FB5D4E9A0E7522279ACA56* L_9 = __this->____array;
		int32_t L_10 = __this->____head;
		LightsModuleU5BU5D_t1B43D0E6425D6ECE42FB5D4E9A0E7522279ACA56* L_11 = V_0;
		LightsModuleU5BU5D_t1B43D0E6425D6ECE42FB5D4E9A0E7522279ACA56* L_12 = __this->____array;
		NullCheck(L_12);
		int32_t L_13 = __this->____head;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_9, L_10, (RuntimeArray*)L_11, 0, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_12)->max_length)), L_13)), NULL);
		LightsModuleU5BU5D_t1B43D0E6425D6ECE42FB5D4E9A0E7522279ACA56* L_14 = __this->____array;
		LightsModuleU5BU5D_t1B43D0E6425D6ECE42FB5D4E9A0E7522279ACA56* L_15 = V_0;
		LightsModuleU5BU5D_t1B43D0E6425D6ECE42FB5D4E9A0E7522279ACA56* L_16 = __this->____array;
		NullCheck(L_16);
		int32_t L_17 = __this->____head;
		int32_t L_18 = __this->____tail;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_14, 0, (RuntimeArray*)L_15, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_16)->max_length)), L_17)), L_18, NULL);
	}

IL_007d:
	{
		LightsModuleU5BU5D_t1B43D0E6425D6ECE42FB5D4E9A0E7522279ACA56* L_19 = V_0;
		__this->____array = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_19);
		__this->____head = 0;
		int32_t L_20 = __this->____size;
		int32_t L_21 = ___0_capacity;
		if ((((int32_t)L_20) == ((int32_t)L_21)))
		{
			G_B6_0 = __this;
			goto IL_009d;
		}
		G_B5_0 = __this;
	}
	{
		int32_t L_22 = __this->____size;
		G_B7_0 = L_22;
		G_B7_1 = G_B5_0;
		goto IL_009e;
	}

IL_009d:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
	}

IL_009e:
	{
		NullCheck(G_B7_1);
		G_B7_1->____tail = G_B7_0;
		int32_t L_23 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_23, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_MoveNext_mDC3D893F47661BA5C82C49C991C09CB2F7E55CE6_gshared (Queue_1_t4AA446582A62FB2A18563671B4E47108952DD4FB* __this, int32_t* ___0_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t* L_0 = ___0_index;
		int32_t L_1 = *((int32_t*)L_0);
		V_0 = ((int32_t)il2cpp_codegen_add(L_1, 1));
		int32_t L_2 = V_0;
		LightsModuleU5BU5D_t1B43D0E6425D6ECE42FB5D4E9A0E7522279ACA56* L_3 = __this->____array;
		NullCheck(L_3);
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))))
		{
			goto IL_0012;
		}
	}
	{
		V_0 = 0;
	}

IL_0012:
	{
		int32_t* L_4 = ___0_index;
		int32_t L_5 = V_0;
		*((int32_t*)L_4) = (int32_t)L_5;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_ThrowForEmptyQueue_m1A6FFBB1A9A0B73ACC736801F631354458BB1329_gshared (Queue_1_t4AA446582A62FB2A18563671B4E47108952DD4FB* __this, const RuntimeMethod* method) 
{
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1102619AA6FB2A4AADBDAA47DDC096AE04C772C0)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_mBE8CA4A760EDDA133B2C0450C67E86C693A1B171_gshared (Queue_1_tB7344F263E081890307F699D5579171FD2254E3C* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		LimitVelocityOverLifetimeModuleU5BU5D_tAF13DD144C6E43CE6DE2FE7A275FB904DD9068F1* L_0;
		L_0 = Array_Empty_TisLimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_m21FA0F5AE4672F90426A30B4FDE61DCE8DD75461_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		__this->____array = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m198734BB91E8338ABC1E56FB65EDE8DD75700795_gshared (Queue_1_tB7344F263E081890307F699D5579171FD2254E3C* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_1 = ___0_capacity;
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_2);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_4 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC37D78082ACFC8DEE7B32D9351C6E433A074FEC7)), L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0020:
	{
		int32_t L_5 = ___0_capacity;
		LimitVelocityOverLifetimeModuleU5BU5D_tAF13DD144C6E43CE6DE2FE7A275FB904DD9068F1* L_6 = (LimitVelocityOverLifetimeModuleU5BU5D_tAF13DD144C6E43CE6DE2FE7A275FB904DD9068F1*)(LimitVelocityOverLifetimeModuleU5BU5D_tAF13DD144C6E43CE6DE2FE7A275FB904DD9068F1*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_5);
		__this->____array = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_6);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_mB8E21F4764CB784EAB0F1464526B11A46EEF6828_gshared (Queue_1_tB7344F263E081890307F699D5579171FD2254E3C* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_System_Collections_ICollection_get_IsSynchronized_m535DF18140E808FFEEBDA7AC7BF769ABB04A4716_gshared (Queue_1_tB7344F263E081890307F699D5579171FD2254E3C* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_ICollection_get_SyncRoot_mC6A7A68A45E2B355667D2AB8AA9DF08D98E4327E_gshared (Queue_1_tB7344F263E081890307F699D5579171FD2254E3C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____syncRoot;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Clear_m294619288032462F0BCBA0290D468DD01AE1CBC5_gshared (Queue_1_tB7344F263E081890307F699D5579171FD2254E3C* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (!L_0)
		{
			goto IL_006f;
		}
	}
	{
	}
	{
		int32_t L_1 = __this->____head;
		int32_t L_2 = __this->____tail;
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_0036;
		}
	}
	{
		LimitVelocityOverLifetimeModuleU5BU5D_tAF13DD144C6E43CE6DE2FE7A275FB904DD9068F1* L_3 = __this->____array;
		int32_t L_4 = __this->____head;
		int32_t L_5 = __this->____size;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, L_4, L_5, NULL);
		goto IL_0068;
	}

IL_0036:
	{
		LimitVelocityOverLifetimeModuleU5BU5D_tAF13DD144C6E43CE6DE2FE7A275FB904DD9068F1* L_6 = __this->____array;
		int32_t L_7 = __this->____head;
		LimitVelocityOverLifetimeModuleU5BU5D_tAF13DD144C6E43CE6DE2FE7A275FB904DD9068F1* L_8 = __this->____array;
		NullCheck(L_8);
		int32_t L_9 = __this->____head;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_6, L_7, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_8)->max_length)), L_9)), NULL);
		LimitVelocityOverLifetimeModuleU5BU5D_tAF13DD144C6E43CE6DE2FE7A275FB904DD9068F1* L_10 = __this->____array;
		int32_t L_11 = __this->____tail;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_10, 0, L_11, NULL);
	}

IL_0068:
	{
		__this->____size = 0;
	}

IL_006f:
	{
		__this->____head = 0;
		__this->____tail = 0;
		int32_t L_12 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_12, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_System_Collections_ICollection_CopyTo_m61C8F52318B5287F4AE5C9E58B88C1B2161383EF_gshared (Queue_1_tB7344F263E081890307F699D5579171FD2254E3C* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	int32_t G_B17_0 = 0;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeArray* L_2 = ___0_array;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_2, NULL);
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral967D403A541A1026A83D548E5AD5CA800AD4EFB5)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0027:
	{
		RuntimeArray* L_5 = ___0_array;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_5, 0, NULL);
		if (!L_6)
		{
			goto IL_0040;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6195D7DA68D16D4985AD1A1B4FD2841A43CDDE70)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, method);
	}

IL_0040:
	{
		RuntimeArray* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_8, NULL);
		V_0 = L_9;
		int32_t L_10 = ___1_index;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_11 = ___1_index;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) <= ((int32_t)L_12)))
		{
			goto IL_0065;
		}
	}

IL_004f:
	{
		int32_t L_13 = ___1_index;
		int32_t L_14 = L_13;
		RuntimeObject* L_15 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_14);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_16 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_16, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), L_15, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, method);
	}

IL_0065:
	{
		int32_t L_17 = V_0;
		int32_t L_18 = ___1_index;
		int32_t L_19 = __this->____size;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_17, L_18))) >= ((int32_t)L_19)))
		{
			goto IL_007b;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_20 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_20, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, method);
	}

IL_007b:
	{
		int32_t L_21 = __this->____size;
		V_1 = L_21;
		int32_t L_22 = V_1;
		if (L_22)
		{
			goto IL_0086;
		}
	}
	{
		return;
	}

IL_0086:
	{
	}
	try
	{
		{
			LimitVelocityOverLifetimeModuleU5BU5D_tAF13DD144C6E43CE6DE2FE7A275FB904DD9068F1* L_23 = __this->____array;
			NullCheck(L_23);
			int32_t L_24 = __this->____head;
			int32_t L_25 = V_1;
			if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_23)->max_length)), L_24))) < ((int32_t)L_25)))
			{
				goto IL_009c_1;
			}
		}
		{
			int32_t L_26 = V_1;
			G_B17_0 = L_26;
			goto IL_00ab_1;
		}

IL_009c_1:
		{
			LimitVelocityOverLifetimeModuleU5BU5D_tAF13DD144C6E43CE6DE2FE7A275FB904DD9068F1* L_27 = __this->____array;
			NullCheck(L_27);
			int32_t L_28 = __this->____head;
			G_B17_0 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_27)->max_length)), L_28));
		}

IL_00ab_1:
		{
			V_2 = G_B17_0;
			LimitVelocityOverLifetimeModuleU5BU5D_tAF13DD144C6E43CE6DE2FE7A275FB904DD9068F1* L_29 = __this->____array;
			int32_t L_30 = __this->____head;
			RuntimeArray* L_31 = ___0_array;
			int32_t L_32 = ___1_index;
			int32_t L_33 = V_2;
			Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_29, L_30, L_31, L_32, L_33, NULL);
			int32_t L_34 = V_1;
			int32_t L_35 = V_2;
			V_1 = ((int32_t)il2cpp_codegen_subtract(L_34, L_35));
			int32_t L_36 = V_1;
			if ((((int32_t)L_36) <= ((int32_t)0)))
			{
				goto IL_00e7_1;
			}
		}
		{
			LimitVelocityOverLifetimeModuleU5BU5D_tAF13DD144C6E43CE6DE2FE7A275FB904DD9068F1* L_37 = __this->____array;
			RuntimeArray* L_38 = ___0_array;
			int32_t L_39 = ___1_index;
			LimitVelocityOverLifetimeModuleU5BU5D_tAF13DD144C6E43CE6DE2FE7A275FB904DD9068F1* L_40 = __this->____array;
			NullCheck(L_40);
			int32_t L_41 = __this->____head;
			int32_t L_42 = V_1;
			Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_37, 0, L_38, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_39, ((int32_t)(((RuntimeArray*)L_40)->max_length)))), L_41)), L_42, NULL);
		}

IL_00e7_1:
		{
			goto IL_00fa;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00e9;
		}
		throw e;
	}

CATCH_00e9:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_43 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_44 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_44, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBD0381A992FDF4F7DA60E5D83689FE7FF6309CB8)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_44, method);
	}

IL_00fa:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_m6EE2D433F0D27ACF2697C8569824D1F65BD77F7A_gshared (Queue_1_tB7344F263E081890307F699D5579171FD2254E3C* __this, LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____size;
		LimitVelocityOverLifetimeModuleU5BU5D_tAF13DD144C6E43CE6DE2FE7A275FB904DD9068F1* L_1 = __this->____array;
		NullCheck(L_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))))))
		{
			goto IL_0045;
		}
	}
	{
		LimitVelocityOverLifetimeModuleU5BU5D_tAF13DD144C6E43CE6DE2FE7A275FB904DD9068F1* L_2 = __this->____array;
		NullCheck(L_2);
		V_0 = ((int32_t)((int64_t)(((int64_t)il2cpp_codegen_multiply(((int64_t)((int32_t)(((RuntimeArray*)L_2)->max_length))), ((int64_t)((int32_t)200))))/((int64_t)((int32_t)100)))));
		int32_t L_3 = V_0;
		LimitVelocityOverLifetimeModuleU5BU5D_tAF13DD144C6E43CE6DE2FE7A275FB904DD9068F1* L_4 = __this->____array;
		NullCheck(L_4);
		if ((((int32_t)L_3) >= ((int32_t)((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_4)->max_length)), 4)))))
		{
			goto IL_003e;
		}
	}
	{
		LimitVelocityOverLifetimeModuleU5BU5D_tAF13DD144C6E43CE6DE2FE7A275FB904DD9068F1* L_5 = __this->____array;
		NullCheck(L_5);
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_5)->max_length)), 4));
	}

IL_003e:
	{
		int32_t L_6 = V_0;
		Queue_1_SetCapacity_mD4177C05AB09D5CFC4B7B3A1A499991CC6FB5A97(__this, L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
	}

IL_0045:
	{
		LimitVelocityOverLifetimeModuleU5BU5D_tAF13DD144C6E43CE6DE2FE7A275FB904DD9068F1* L_7 = __this->____array;
		int32_t L_8 = __this->____tail;
		LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 L_9 = ___0_item;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1)L_9);
		int32_t* L_10 = (int32_t*)(&__this->____tail);
		Queue_1_MoveNext_m91E2C414A3DBFB048C222977D05C65B61A91E5A0(__this, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		int32_t L_11 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_11, 1));
		int32_t L_12 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_12, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tBA1BBC08497A0A44E5697AB9B462427C96D8E161 Queue_1_GetEnumerator_m23F6DC53F41720A865DEC49B01F69F5B999896CF_gshared (Queue_1_tB7344F263E081890307F699D5579171FD2254E3C* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tBA1BBC08497A0A44E5697AB9B462427C96D8E161 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m055E106B6432C11C73BB557AE6283775691ECA04((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_mD76854E6E14D7CAB8CF5A7B5D0569F1E8FD71BE3_gshared (Queue_1_tB7344F263E081890307F699D5579171FD2254E3C* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tBA1BBC08497A0A44E5697AB9B462427C96D8E161 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m055E106B6432C11C73BB557AE6283775691ECA04((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		Enumerator_tBA1BBC08497A0A44E5697AB9B462427C96D8E161 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_IEnumerable_GetEnumerator_m01705CD701BA7ABD2EBE103DB660DF96712DC727_gshared (Queue_1_tB7344F263E081890307F699D5579171FD2254E3C* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tBA1BBC08497A0A44E5697AB9B462427C96D8E161 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m055E106B6432C11C73BB557AE6283775691ECA04((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		Enumerator_tBA1BBC08497A0A44E5697AB9B462427C96D8E161 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 Queue_1_Dequeue_m0E3E187542B71A6A3826FD2554E7B9A610EA60CC_gshared (Queue_1_tB7344F263E081890307F699D5579171FD2254E3C* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	LimitVelocityOverLifetimeModuleU5BU5D_tAF13DD144C6E43CE6DE2FE7A275FB904DD9068F1* V_1 = NULL;
	LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 V_2;
	memset((&V_2), 0, sizeof(V_2));
	LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 G_B4_0;
	memset((&G_B4_0), 0, sizeof(G_B4_0));
	LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		int32_t L_0 = __this->____head;
		V_0 = L_0;
		LimitVelocityOverLifetimeModuleU5BU5D_tAF13DD144C6E43CE6DE2FE7A275FB904DD9068F1* L_1 = __this->____array;
		V_1 = L_1;
		int32_t L_2 = __this->____size;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		Queue_1_ThrowForEmptyQueue_mC17BD2FE62E80298313851E5418D86CD1B61E785(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}

IL_001c:
	{
		LimitVelocityOverLifetimeModuleU5BU5D_tAF13DD144C6E43CE6DE2FE7A275FB904DD9068F1* L_3 = V_1;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		G_B3_0 = L_6;
	}
	{
		LimitVelocityOverLifetimeModuleU5BU5D_tAF13DD144C6E43CE6DE2FE7A275FB904DD9068F1* L_7 = V_1;
		int32_t L_8 = V_0;
		il2cpp_codegen_initobj((&V_2), sizeof(LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1));
		LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 L_9 = V_2;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1)L_9);
		G_B4_0 = G_B3_0;
	}

IL_003a:
	{
		int32_t* L_10 = (int32_t*)(&__this->____head);
		Queue_1_MoveNext_m91E2C414A3DBFB048C222977D05C65B61A91E5A0(__this, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		int32_t L_11 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
		int32_t L_12 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_12, 1));
		return G_B4_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 Queue_1_Peek_mF2E0FA6CA76948A6DB7A2DA0D82781EDD2E94898_gshared (Queue_1_tB7344F263E081890307F699D5579171FD2254E3C* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		Queue_1_ThrowForEmptyQueue_mC17BD2FE62E80298313851E5418D86CD1B61E785(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}

IL_000e:
	{
		LimitVelocityOverLifetimeModuleU5BU5D_tAF13DD144C6E43CE6DE2FE7A275FB904DD9068F1* L_1 = __this->____array;
		int32_t L_2 = __this->____head;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LimitVelocityOverLifetimeModuleU5BU5D_tAF13DD144C6E43CE6DE2FE7A275FB904DD9068F1* Queue_1_ToArray_mA5D7829464233EE5B6A021EF21321AFA1A2C0F44_gshared (Queue_1_tB7344F263E081890307F699D5579171FD2254E3C* __this, const RuntimeMethod* method) 
{
	LimitVelocityOverLifetimeModuleU5BU5D_tAF13DD144C6E43CE6DE2FE7A275FB904DD9068F1* V_0 = NULL;
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		LimitVelocityOverLifetimeModuleU5BU5D_tAF13DD144C6E43CE6DE2FE7A275FB904DD9068F1* L_1;
		L_1 = Array_Empty_TisLimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_m21FA0F5AE4672F90426A30B4FDE61DCE8DD75461_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____size;
		LimitVelocityOverLifetimeModuleU5BU5D_tAF13DD144C6E43CE6DE2FE7A275FB904DD9068F1* L_3 = (LimitVelocityOverLifetimeModuleU5BU5D_tAF13DD144C6E43CE6DE2FE7A275FB904DD9068F1*)(LimitVelocityOverLifetimeModuleU5BU5D_tAF13DD144C6E43CE6DE2FE7A275FB904DD9068F1*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_2);
		V_0 = L_3;
		int32_t L_4 = __this->____head;
		int32_t L_5 = __this->____tail;
		if ((((int32_t)L_4) >= ((int32_t)L_5)))
		{
			goto IL_0043;
		}
	}
	{
		LimitVelocityOverLifetimeModuleU5BU5D_tAF13DD144C6E43CE6DE2FE7A275FB904DD9068F1* L_6 = __this->____array;
		int32_t L_7 = __this->____head;
		LimitVelocityOverLifetimeModuleU5BU5D_tAF13DD144C6E43CE6DE2FE7A275FB904DD9068F1* L_8 = V_0;
		int32_t L_9 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_6, L_7, (RuntimeArray*)L_8, 0, L_9, NULL);
		goto IL_0087;
	}

IL_0043:
	{
		LimitVelocityOverLifetimeModuleU5BU5D_tAF13DD144C6E43CE6DE2FE7A275FB904DD9068F1* L_10 = __this->____array;
		int32_t L_11 = __this->____head;
		LimitVelocityOverLifetimeModuleU5BU5D_tAF13DD144C6E43CE6DE2FE7A275FB904DD9068F1* L_12 = V_0;
		LimitVelocityOverLifetimeModuleU5BU5D_tAF13DD144C6E43CE6DE2FE7A275FB904DD9068F1* L_13 = __this->____array;
		NullCheck(L_13);
		int32_t L_14 = __this->____head;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_10, L_11, (RuntimeArray*)L_12, 0, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_13)->max_length)), L_14)), NULL);
		LimitVelocityOverLifetimeModuleU5BU5D_tAF13DD144C6E43CE6DE2FE7A275FB904DD9068F1* L_15 = __this->____array;
		LimitVelocityOverLifetimeModuleU5BU5D_tAF13DD144C6E43CE6DE2FE7A275FB904DD9068F1* L_16 = V_0;
		LimitVelocityOverLifetimeModuleU5BU5D_tAF13DD144C6E43CE6DE2FE7A275FB904DD9068F1* L_17 = __this->____array;
		NullCheck(L_17);
		int32_t L_18 = __this->____head;
		int32_t L_19 = __this->____tail;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_15, 0, (RuntimeArray*)L_16, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_17)->max_length)), L_18)), L_19, NULL);
	}

IL_0087:
	{
		LimitVelocityOverLifetimeModuleU5BU5D_tAF13DD144C6E43CE6DE2FE7A275FB904DD9068F1* L_20 = V_0;
		return L_20;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_SetCapacity_mD4177C05AB09D5CFC4B7B3A1A499991CC6FB5A97_gshared (Queue_1_tB7344F263E081890307F699D5579171FD2254E3C* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	LimitVelocityOverLifetimeModuleU5BU5D_tAF13DD144C6E43CE6DE2FE7A275FB904DD9068F1* V_0 = NULL;
	Queue_1_tB7344F263E081890307F699D5579171FD2254E3C* G_B6_0 = NULL;
	Queue_1_tB7344F263E081890307F699D5579171FD2254E3C* G_B5_0 = NULL;
	int32_t G_B7_0 = 0;
	Queue_1_tB7344F263E081890307F699D5579171FD2254E3C* G_B7_1 = NULL;
	{
		int32_t L_0 = ___0_capacity;
		LimitVelocityOverLifetimeModuleU5BU5D_tAF13DD144C6E43CE6DE2FE7A275FB904DD9068F1* L_1 = (LimitVelocityOverLifetimeModuleU5BU5D_tAF13DD144C6E43CE6DE2FE7A275FB904DD9068F1*)(LimitVelocityOverLifetimeModuleU5BU5D_tAF13DD144C6E43CE6DE2FE7A275FB904DD9068F1*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_007d;
		}
	}
	{
		int32_t L_3 = __this->____head;
		int32_t L_4 = __this->____tail;
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0039;
		}
	}
	{
		LimitVelocityOverLifetimeModuleU5BU5D_tAF13DD144C6E43CE6DE2FE7A275FB904DD9068F1* L_5 = __this->____array;
		int32_t L_6 = __this->____head;
		LimitVelocityOverLifetimeModuleU5BU5D_tAF13DD144C6E43CE6DE2FE7A275FB904DD9068F1* L_7 = V_0;
		int32_t L_8 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, L_6, (RuntimeArray*)L_7, 0, L_8, NULL);
		goto IL_007d;
	}

IL_0039:
	{
		LimitVelocityOverLifetimeModuleU5BU5D_tAF13DD144C6E43CE6DE2FE7A275FB904DD9068F1* L_9 = __this->____array;
		int32_t L_10 = __this->____head;
		LimitVelocityOverLifetimeModuleU5BU5D_tAF13DD144C6E43CE6DE2FE7A275FB904DD9068F1* L_11 = V_0;
		LimitVelocityOverLifetimeModuleU5BU5D_tAF13DD144C6E43CE6DE2FE7A275FB904DD9068F1* L_12 = __this->____array;
		NullCheck(L_12);
		int32_t L_13 = __this->____head;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_9, L_10, (RuntimeArray*)L_11, 0, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_12)->max_length)), L_13)), NULL);
		LimitVelocityOverLifetimeModuleU5BU5D_tAF13DD144C6E43CE6DE2FE7A275FB904DD9068F1* L_14 = __this->____array;
		LimitVelocityOverLifetimeModuleU5BU5D_tAF13DD144C6E43CE6DE2FE7A275FB904DD9068F1* L_15 = V_0;
		LimitVelocityOverLifetimeModuleU5BU5D_tAF13DD144C6E43CE6DE2FE7A275FB904DD9068F1* L_16 = __this->____array;
		NullCheck(L_16);
		int32_t L_17 = __this->____head;
		int32_t L_18 = __this->____tail;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_14, 0, (RuntimeArray*)L_15, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_16)->max_length)), L_17)), L_18, NULL);
	}

IL_007d:
	{
		LimitVelocityOverLifetimeModuleU5BU5D_tAF13DD144C6E43CE6DE2FE7A275FB904DD9068F1* L_19 = V_0;
		__this->____array = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_19);
		__this->____head = 0;
		int32_t L_20 = __this->____size;
		int32_t L_21 = ___0_capacity;
		if ((((int32_t)L_20) == ((int32_t)L_21)))
		{
			G_B6_0 = __this;
			goto IL_009d;
		}
		G_B5_0 = __this;
	}
	{
		int32_t L_22 = __this->____size;
		G_B7_0 = L_22;
		G_B7_1 = G_B5_0;
		goto IL_009e;
	}

IL_009d:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
	}

IL_009e:
	{
		NullCheck(G_B7_1);
		G_B7_1->____tail = G_B7_0;
		int32_t L_23 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_23, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_MoveNext_m91E2C414A3DBFB048C222977D05C65B61A91E5A0_gshared (Queue_1_tB7344F263E081890307F699D5579171FD2254E3C* __this, int32_t* ___0_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t* L_0 = ___0_index;
		int32_t L_1 = *((int32_t*)L_0);
		V_0 = ((int32_t)il2cpp_codegen_add(L_1, 1));
		int32_t L_2 = V_0;
		LimitVelocityOverLifetimeModuleU5BU5D_tAF13DD144C6E43CE6DE2FE7A275FB904DD9068F1* L_3 = __this->____array;
		NullCheck(L_3);
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))))
		{
			goto IL_0012;
		}
	}
	{
		V_0 = 0;
	}

IL_0012:
	{
		int32_t* L_4 = ___0_index;
		int32_t L_5 = V_0;
		*((int32_t*)L_4) = (int32_t)L_5;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_ThrowForEmptyQueue_mC17BD2FE62E80298313851E5418D86CD1B61E785_gshared (Queue_1_tB7344F263E081890307F699D5579171FD2254E3C* __this, const RuntimeMethod* method) 
{
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1102619AA6FB2A4AADBDAA47DDC096AE04C772C0)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m6B43C317C0E351BBB8F4AA3781602A615D52237F_gshared (Queue_1_t9FD90F7D0CA85A6D0A14742DF2E9ED3816057293* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		MainModuleU5BU5D_tEEFB5F0E13630CB75255D344E67FEEDD38C47F0F* L_0;
		L_0 = Array_Empty_TisMainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9_m33C193685A1A3B0DD811A9F060572040030884B7_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		__this->____array = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_mC8F8E8A50AACA2E00E711D57C6F8A80BF607EAFD_gshared (Queue_1_t9FD90F7D0CA85A6D0A14742DF2E9ED3816057293* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_1 = ___0_capacity;
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_2);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_4 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC37D78082ACFC8DEE7B32D9351C6E433A074FEC7)), L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0020:
	{
		int32_t L_5 = ___0_capacity;
		MainModuleU5BU5D_tEEFB5F0E13630CB75255D344E67FEEDD38C47F0F* L_6 = (MainModuleU5BU5D_tEEFB5F0E13630CB75255D344E67FEEDD38C47F0F*)(MainModuleU5BU5D_tEEFB5F0E13630CB75255D344E67FEEDD38C47F0F*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_5);
		__this->____array = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_6);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_m8401AAC0434F1E513DFE82B165D58D4DEA248CAB_gshared (Queue_1_t9FD90F7D0CA85A6D0A14742DF2E9ED3816057293* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_System_Collections_ICollection_get_IsSynchronized_m6729C1B68D97499109A874F1C0DB7B9176BE555E_gshared (Queue_1_t9FD90F7D0CA85A6D0A14742DF2E9ED3816057293* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_ICollection_get_SyncRoot_mB767D6D15FAA0FAFEFAF78964536B1D16E67900B_gshared (Queue_1_t9FD90F7D0CA85A6D0A14742DF2E9ED3816057293* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____syncRoot;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Clear_m6FF91F5038561BAA0734979111509124C733BEBC_gshared (Queue_1_t9FD90F7D0CA85A6D0A14742DF2E9ED3816057293* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (!L_0)
		{
			goto IL_006f;
		}
	}
	{
	}
	{
		int32_t L_1 = __this->____head;
		int32_t L_2 = __this->____tail;
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_0036;
		}
	}
	{
		MainModuleU5BU5D_tEEFB5F0E13630CB75255D344E67FEEDD38C47F0F* L_3 = __this->____array;
		int32_t L_4 = __this->____head;
		int32_t L_5 = __this->____size;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, L_4, L_5, NULL);
		goto IL_0068;
	}

IL_0036:
	{
		MainModuleU5BU5D_tEEFB5F0E13630CB75255D344E67FEEDD38C47F0F* L_6 = __this->____array;
		int32_t L_7 = __this->____head;
		MainModuleU5BU5D_tEEFB5F0E13630CB75255D344E67FEEDD38C47F0F* L_8 = __this->____array;
		NullCheck(L_8);
		int32_t L_9 = __this->____head;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_6, L_7, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_8)->max_length)), L_9)), NULL);
		MainModuleU5BU5D_tEEFB5F0E13630CB75255D344E67FEEDD38C47F0F* L_10 = __this->____array;
		int32_t L_11 = __this->____tail;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_10, 0, L_11, NULL);
	}

IL_0068:
	{
		__this->____size = 0;
	}

IL_006f:
	{
		__this->____head = 0;
		__this->____tail = 0;
		int32_t L_12 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_12, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_System_Collections_ICollection_CopyTo_m6CC618E9D8CC385845CD714B991611EE1446627A_gshared (Queue_1_t9FD90F7D0CA85A6D0A14742DF2E9ED3816057293* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	int32_t G_B17_0 = 0;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeArray* L_2 = ___0_array;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_2, NULL);
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral967D403A541A1026A83D548E5AD5CA800AD4EFB5)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0027:
	{
		RuntimeArray* L_5 = ___0_array;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_5, 0, NULL);
		if (!L_6)
		{
			goto IL_0040;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6195D7DA68D16D4985AD1A1B4FD2841A43CDDE70)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, method);
	}

IL_0040:
	{
		RuntimeArray* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_8, NULL);
		V_0 = L_9;
		int32_t L_10 = ___1_index;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_11 = ___1_index;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) <= ((int32_t)L_12)))
		{
			goto IL_0065;
		}
	}

IL_004f:
	{
		int32_t L_13 = ___1_index;
		int32_t L_14 = L_13;
		RuntimeObject* L_15 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_14);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_16 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_16, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), L_15, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, method);
	}

IL_0065:
	{
		int32_t L_17 = V_0;
		int32_t L_18 = ___1_index;
		int32_t L_19 = __this->____size;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_17, L_18))) >= ((int32_t)L_19)))
		{
			goto IL_007b;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_20 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_20, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, method);
	}

IL_007b:
	{
		int32_t L_21 = __this->____size;
		V_1 = L_21;
		int32_t L_22 = V_1;
		if (L_22)
		{
			goto IL_0086;
		}
	}
	{
		return;
	}

IL_0086:
	{
	}
	try
	{
		{
			MainModuleU5BU5D_tEEFB5F0E13630CB75255D344E67FEEDD38C47F0F* L_23 = __this->____array;
			NullCheck(L_23);
			int32_t L_24 = __this->____head;
			int32_t L_25 = V_1;
			if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_23)->max_length)), L_24))) < ((int32_t)L_25)))
			{
				goto IL_009c_1;
			}
		}
		{
			int32_t L_26 = V_1;
			G_B17_0 = L_26;
			goto IL_00ab_1;
		}

IL_009c_1:
		{
			MainModuleU5BU5D_tEEFB5F0E13630CB75255D344E67FEEDD38C47F0F* L_27 = __this->____array;
			NullCheck(L_27);
			int32_t L_28 = __this->____head;
			G_B17_0 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_27)->max_length)), L_28));
		}

IL_00ab_1:
		{
			V_2 = G_B17_0;
			MainModuleU5BU5D_tEEFB5F0E13630CB75255D344E67FEEDD38C47F0F* L_29 = __this->____array;
			int32_t L_30 = __this->____head;
			RuntimeArray* L_31 = ___0_array;
			int32_t L_32 = ___1_index;
			int32_t L_33 = V_2;
			Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_29, L_30, L_31, L_32, L_33, NULL);
			int32_t L_34 = V_1;
			int32_t L_35 = V_2;
			V_1 = ((int32_t)il2cpp_codegen_subtract(L_34, L_35));
			int32_t L_36 = V_1;
			if ((((int32_t)L_36) <= ((int32_t)0)))
			{
				goto IL_00e7_1;
			}
		}
		{
			MainModuleU5BU5D_tEEFB5F0E13630CB75255D344E67FEEDD38C47F0F* L_37 = __this->____array;
			RuntimeArray* L_38 = ___0_array;
			int32_t L_39 = ___1_index;
			MainModuleU5BU5D_tEEFB5F0E13630CB75255D344E67FEEDD38C47F0F* L_40 = __this->____array;
			NullCheck(L_40);
			int32_t L_41 = __this->____head;
			int32_t L_42 = V_1;
			Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_37, 0, L_38, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_39, ((int32_t)(((RuntimeArray*)L_40)->max_length)))), L_41)), L_42, NULL);
		}

IL_00e7_1:
		{
			goto IL_00fa;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00e9;
		}
		throw e;
	}

CATCH_00e9:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_43 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_44 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_44, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBD0381A992FDF4F7DA60E5D83689FE7FF6309CB8)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_44, method);
	}

IL_00fa:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_mB187B8D74AED8A626E6950212C5DDCA5C24DAEAD_gshared (Queue_1_t9FD90F7D0CA85A6D0A14742DF2E9ED3816057293* __this, MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9 ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____size;
		MainModuleU5BU5D_tEEFB5F0E13630CB75255D344E67FEEDD38C47F0F* L_1 = __this->____array;
		NullCheck(L_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))))))
		{
			goto IL_0045;
		}
	}
	{
		MainModuleU5BU5D_tEEFB5F0E13630CB75255D344E67FEEDD38C47F0F* L_2 = __this->____array;
		NullCheck(L_2);
		V_0 = ((int32_t)((int64_t)(((int64_t)il2cpp_codegen_multiply(((int64_t)((int32_t)(((RuntimeArray*)L_2)->max_length))), ((int64_t)((int32_t)200))))/((int64_t)((int32_t)100)))));
		int32_t L_3 = V_0;
		MainModuleU5BU5D_tEEFB5F0E13630CB75255D344E67FEEDD38C47F0F* L_4 = __this->____array;
		NullCheck(L_4);
		if ((((int32_t)L_3) >= ((int32_t)((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_4)->max_length)), 4)))))
		{
			goto IL_003e;
		}
	}
	{
		MainModuleU5BU5D_tEEFB5F0E13630CB75255D344E67FEEDD38C47F0F* L_5 = __this->____array;
		NullCheck(L_5);
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_5)->max_length)), 4));
	}

IL_003e:
	{
		int32_t L_6 = V_0;
		Queue_1_SetCapacity_m2660F55989535ADE9CB18BF095B836927FE6EE38(__this, L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
	}

IL_0045:
	{
		MainModuleU5BU5D_tEEFB5F0E13630CB75255D344E67FEEDD38C47F0F* L_7 = __this->____array;
		int32_t L_8 = __this->____tail;
		MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9 L_9 = ___0_item;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9)L_9);
		int32_t* L_10 = (int32_t*)(&__this->____tail);
		Queue_1_MoveNext_m4AED005CE52AE4BE8D612B0E5C9ED0A1B15B0457(__this, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		int32_t L_11 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_11, 1));
		int32_t L_12 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_12, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t25DEAF258A8E28CE33A32030114FBDCD8F6B1953 Queue_1_GetEnumerator_m98BDB3779D5282A222F7DF45057DD1CB4910F8DC_gshared (Queue_1_t9FD90F7D0CA85A6D0A14742DF2E9ED3816057293* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t25DEAF258A8E28CE33A32030114FBDCD8F6B1953 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m5F7697BE18C0658908B84798AF319CA133B38A6D((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_mEDEECF501D1D9906EF7C72D6472C0DF57361E134_gshared (Queue_1_t9FD90F7D0CA85A6D0A14742DF2E9ED3816057293* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t25DEAF258A8E28CE33A32030114FBDCD8F6B1953 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m5F7697BE18C0658908B84798AF319CA133B38A6D((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		Enumerator_t25DEAF258A8E28CE33A32030114FBDCD8F6B1953 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_IEnumerable_GetEnumerator_mA65CA6B65BC98ACAA2138B134A72F6A953990FD8_gshared (Queue_1_t9FD90F7D0CA85A6D0A14742DF2E9ED3816057293* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t25DEAF258A8E28CE33A32030114FBDCD8F6B1953 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m5F7697BE18C0658908B84798AF319CA133B38A6D((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		Enumerator_t25DEAF258A8E28CE33A32030114FBDCD8F6B1953 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9 Queue_1_Dequeue_m0FF497C978162306BEDA73DA4A61A40C89200833_gshared (Queue_1_t9FD90F7D0CA85A6D0A14742DF2E9ED3816057293* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	MainModuleU5BU5D_tEEFB5F0E13630CB75255D344E67FEEDD38C47F0F* V_1 = NULL;
	MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9 V_2;
	memset((&V_2), 0, sizeof(V_2));
	MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9 G_B4_0;
	memset((&G_B4_0), 0, sizeof(G_B4_0));
	MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9 G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		int32_t L_0 = __this->____head;
		V_0 = L_0;
		MainModuleU5BU5D_tEEFB5F0E13630CB75255D344E67FEEDD38C47F0F* L_1 = __this->____array;
		V_1 = L_1;
		int32_t L_2 = __this->____size;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		Queue_1_ThrowForEmptyQueue_mBCC3E1CCB9996C874E1E05CA5F6E52C8D461964C(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}

IL_001c:
	{
		MainModuleU5BU5D_tEEFB5F0E13630CB75255D344E67FEEDD38C47F0F* L_3 = V_1;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9 L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		G_B3_0 = L_6;
	}
	{
		MainModuleU5BU5D_tEEFB5F0E13630CB75255D344E67FEEDD38C47F0F* L_7 = V_1;
		int32_t L_8 = V_0;
		il2cpp_codegen_initobj((&V_2), sizeof(MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9));
		MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9 L_9 = V_2;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9)L_9);
		G_B4_0 = G_B3_0;
	}

IL_003a:
	{
		int32_t* L_10 = (int32_t*)(&__this->____head);
		Queue_1_MoveNext_m4AED005CE52AE4BE8D612B0E5C9ED0A1B15B0457(__this, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		int32_t L_11 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
		int32_t L_12 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_12, 1));
		return G_B4_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9 Queue_1_Peek_m090E01D102F2C53916695330681126B8DFB9DC07_gshared (Queue_1_t9FD90F7D0CA85A6D0A14742DF2E9ED3816057293* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		Queue_1_ThrowForEmptyQueue_mBCC3E1CCB9996C874E1E05CA5F6E52C8D461964C(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}

IL_000e:
	{
		MainModuleU5BU5D_tEEFB5F0E13630CB75255D344E67FEEDD38C47F0F* L_1 = __this->____array;
		int32_t L_2 = __this->____head;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9 L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MainModuleU5BU5D_tEEFB5F0E13630CB75255D344E67FEEDD38C47F0F* Queue_1_ToArray_m3E07B7B1038B2D80136F088D711C97F3123B7AE2_gshared (Queue_1_t9FD90F7D0CA85A6D0A14742DF2E9ED3816057293* __this, const RuntimeMethod* method) 
{
	MainModuleU5BU5D_tEEFB5F0E13630CB75255D344E67FEEDD38C47F0F* V_0 = NULL;
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		MainModuleU5BU5D_tEEFB5F0E13630CB75255D344E67FEEDD38C47F0F* L_1;
		L_1 = Array_Empty_TisMainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9_m33C193685A1A3B0DD811A9F060572040030884B7_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____size;
		MainModuleU5BU5D_tEEFB5F0E13630CB75255D344E67FEEDD38C47F0F* L_3 = (MainModuleU5BU5D_tEEFB5F0E13630CB75255D344E67FEEDD38C47F0F*)(MainModuleU5BU5D_tEEFB5F0E13630CB75255D344E67FEEDD38C47F0F*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_2);
		V_0 = L_3;
		int32_t L_4 = __this->____head;
		int32_t L_5 = __this->____tail;
		if ((((int32_t)L_4) >= ((int32_t)L_5)))
		{
			goto IL_0043;
		}
	}
	{
		MainModuleU5BU5D_tEEFB5F0E13630CB75255D344E67FEEDD38C47F0F* L_6 = __this->____array;
		int32_t L_7 = __this->____head;
		MainModuleU5BU5D_tEEFB5F0E13630CB75255D344E67FEEDD38C47F0F* L_8 = V_0;
		int32_t L_9 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_6, L_7, (RuntimeArray*)L_8, 0, L_9, NULL);
		goto IL_0087;
	}

IL_0043:
	{
		MainModuleU5BU5D_tEEFB5F0E13630CB75255D344E67FEEDD38C47F0F* L_10 = __this->____array;
		int32_t L_11 = __this->____head;
		MainModuleU5BU5D_tEEFB5F0E13630CB75255D344E67FEEDD38C47F0F* L_12 = V_0;
		MainModuleU5BU5D_tEEFB5F0E13630CB75255D344E67FEEDD38C47F0F* L_13 = __this->____array;
		NullCheck(L_13);
		int32_t L_14 = __this->____head;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_10, L_11, (RuntimeArray*)L_12, 0, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_13)->max_length)), L_14)), NULL);
		MainModuleU5BU5D_tEEFB5F0E13630CB75255D344E67FEEDD38C47F0F* L_15 = __this->____array;
		MainModuleU5BU5D_tEEFB5F0E13630CB75255D344E67FEEDD38C47F0F* L_16 = V_0;
		MainModuleU5BU5D_tEEFB5F0E13630CB75255D344E67FEEDD38C47F0F* L_17 = __this->____array;
		NullCheck(L_17);
		int32_t L_18 = __this->____head;
		int32_t L_19 = __this->____tail;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_15, 0, (RuntimeArray*)L_16, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_17)->max_length)), L_18)), L_19, NULL);
	}

IL_0087:
	{
		MainModuleU5BU5D_tEEFB5F0E13630CB75255D344E67FEEDD38C47F0F* L_20 = V_0;
		return L_20;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_SetCapacity_m2660F55989535ADE9CB18BF095B836927FE6EE38_gshared (Queue_1_t9FD90F7D0CA85A6D0A14742DF2E9ED3816057293* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	MainModuleU5BU5D_tEEFB5F0E13630CB75255D344E67FEEDD38C47F0F* V_0 = NULL;
	Queue_1_t9FD90F7D0CA85A6D0A14742DF2E9ED3816057293* G_B6_0 = NULL;
	Queue_1_t9FD90F7D0CA85A6D0A14742DF2E9ED3816057293* G_B5_0 = NULL;
	int32_t G_B7_0 = 0;
	Queue_1_t9FD90F7D0CA85A6D0A14742DF2E9ED3816057293* G_B7_1 = NULL;
	{
		int32_t L_0 = ___0_capacity;
		MainModuleU5BU5D_tEEFB5F0E13630CB75255D344E67FEEDD38C47F0F* L_1 = (MainModuleU5BU5D_tEEFB5F0E13630CB75255D344E67FEEDD38C47F0F*)(MainModuleU5BU5D_tEEFB5F0E13630CB75255D344E67FEEDD38C47F0F*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_007d;
		}
	}
	{
		int32_t L_3 = __this->____head;
		int32_t L_4 = __this->____tail;
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0039;
		}
	}
	{
		MainModuleU5BU5D_tEEFB5F0E13630CB75255D344E67FEEDD38C47F0F* L_5 = __this->____array;
		int32_t L_6 = __this->____head;
		MainModuleU5BU5D_tEEFB5F0E13630CB75255D344E67FEEDD38C47F0F* L_7 = V_0;
		int32_t L_8 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, L_6, (RuntimeArray*)L_7, 0, L_8, NULL);
		goto IL_007d;
	}

IL_0039:
	{
		MainModuleU5BU5D_tEEFB5F0E13630CB75255D344E67FEEDD38C47F0F* L_9 = __this->____array;
		int32_t L_10 = __this->____head;
		MainModuleU5BU5D_tEEFB5F0E13630CB75255D344E67FEEDD38C47F0F* L_11 = V_0;
		MainModuleU5BU5D_tEEFB5F0E13630CB75255D344E67FEEDD38C47F0F* L_12 = __this->____array;
		NullCheck(L_12);
		int32_t L_13 = __this->____head;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_9, L_10, (RuntimeArray*)L_11, 0, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_12)->max_length)), L_13)), NULL);
		MainModuleU5BU5D_tEEFB5F0E13630CB75255D344E67FEEDD38C47F0F* L_14 = __this->____array;
		MainModuleU5BU5D_tEEFB5F0E13630CB75255D344E67FEEDD38C47F0F* L_15 = V_0;
		MainModuleU5BU5D_tEEFB5F0E13630CB75255D344E67FEEDD38C47F0F* L_16 = __this->____array;
		NullCheck(L_16);
		int32_t L_17 = __this->____head;
		int32_t L_18 = __this->____tail;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_14, 0, (RuntimeArray*)L_15, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_16)->max_length)), L_17)), L_18, NULL);
	}

IL_007d:
	{
		MainModuleU5BU5D_tEEFB5F0E13630CB75255D344E67FEEDD38C47F0F* L_19 = V_0;
		__this->____array = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_19);
		__this->____head = 0;
		int32_t L_20 = __this->____size;
		int32_t L_21 = ___0_capacity;
		if ((((int32_t)L_20) == ((int32_t)L_21)))
		{
			G_B6_0 = __this;
			goto IL_009d;
		}
		G_B5_0 = __this;
	}
	{
		int32_t L_22 = __this->____size;
		G_B7_0 = L_22;
		G_B7_1 = G_B5_0;
		goto IL_009e;
	}

IL_009d:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
	}

IL_009e:
	{
		NullCheck(G_B7_1);
		G_B7_1->____tail = G_B7_0;
		int32_t L_23 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_23, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_MoveNext_m4AED005CE52AE4BE8D612B0E5C9ED0A1B15B0457_gshared (Queue_1_t9FD90F7D0CA85A6D0A14742DF2E9ED3816057293* __this, int32_t* ___0_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t* L_0 = ___0_index;
		int32_t L_1 = *((int32_t*)L_0);
		V_0 = ((int32_t)il2cpp_codegen_add(L_1, 1));
		int32_t L_2 = V_0;
		MainModuleU5BU5D_tEEFB5F0E13630CB75255D344E67FEEDD38C47F0F* L_3 = __this->____array;
		NullCheck(L_3);
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))))
		{
			goto IL_0012;
		}
	}
	{
		V_0 = 0;
	}

IL_0012:
	{
		int32_t* L_4 = ___0_index;
		int32_t L_5 = V_0;
		*((int32_t*)L_4) = (int32_t)L_5;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_ThrowForEmptyQueue_mBCC3E1CCB9996C874E1E05CA5F6E52C8D461964C_gshared (Queue_1_t9FD90F7D0CA85A6D0A14742DF2E9ED3816057293* __this, const RuntimeMethod* method) 
{
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1102619AA6FB2A4AADBDAA47DDC096AE04C772C0)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m9CEEF493A018C2C616A090CF9C2E4F1F7AF98F08_gshared (Queue_1_tE50D0AAB2E9579CB69DE8C77FE39236C3E025C1E* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		NoiseModuleU5BU5D_t7C4F86128102E5F9E007D757ED34CFE5D887C565* L_0;
		L_0 = Array_Empty_TisNoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0_m1AD2426C747ABC797C05E61B05D61450076A8903_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		__this->____array = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m239C6192BB495C10179E32C79842D4538F3DE009_gshared (Queue_1_tE50D0AAB2E9579CB69DE8C77FE39236C3E025C1E* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_1 = ___0_capacity;
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_2);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_4 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC37D78082ACFC8DEE7B32D9351C6E433A074FEC7)), L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0020:
	{
		int32_t L_5 = ___0_capacity;
		NoiseModuleU5BU5D_t7C4F86128102E5F9E007D757ED34CFE5D887C565* L_6 = (NoiseModuleU5BU5D_t7C4F86128102E5F9E007D757ED34CFE5D887C565*)(NoiseModuleU5BU5D_t7C4F86128102E5F9E007D757ED34CFE5D887C565*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_5);
		__this->____array = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_6);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_m4E63294B7E48FF75A03B5E7E4C663874462AF8EC_gshared (Queue_1_tE50D0AAB2E9579CB69DE8C77FE39236C3E025C1E* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_System_Collections_ICollection_get_IsSynchronized_m357BEC23C4FCBA4458CE9ED330606337F5D5AA4D_gshared (Queue_1_tE50D0AAB2E9579CB69DE8C77FE39236C3E025C1E* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_ICollection_get_SyncRoot_mBC0D4B6A21330F9F18477755829748BBF1D35263_gshared (Queue_1_tE50D0AAB2E9579CB69DE8C77FE39236C3E025C1E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____syncRoot;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Clear_mBD6712AC30BB22B256B6D099017C24C46530CCFE_gshared (Queue_1_tE50D0AAB2E9579CB69DE8C77FE39236C3E025C1E* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (!L_0)
		{
			goto IL_006f;
		}
	}
	{
	}
	{
		int32_t L_1 = __this->____head;
		int32_t L_2 = __this->____tail;
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_0036;
		}
	}
	{
		NoiseModuleU5BU5D_t7C4F86128102E5F9E007D757ED34CFE5D887C565* L_3 = __this->____array;
		int32_t L_4 = __this->____head;
		int32_t L_5 = __this->____size;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, L_4, L_5, NULL);
		goto IL_0068;
	}

IL_0036:
	{
		NoiseModuleU5BU5D_t7C4F86128102E5F9E007D757ED34CFE5D887C565* L_6 = __this->____array;
		int32_t L_7 = __this->____head;
		NoiseModuleU5BU5D_t7C4F86128102E5F9E007D757ED34CFE5D887C565* L_8 = __this->____array;
		NullCheck(L_8);
		int32_t L_9 = __this->____head;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_6, L_7, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_8)->max_length)), L_9)), NULL);
		NoiseModuleU5BU5D_t7C4F86128102E5F9E007D757ED34CFE5D887C565* L_10 = __this->____array;
		int32_t L_11 = __this->____tail;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_10, 0, L_11, NULL);
	}

IL_0068:
	{
		__this->____size = 0;
	}

IL_006f:
	{
		__this->____head = 0;
		__this->____tail = 0;
		int32_t L_12 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_12, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_System_Collections_ICollection_CopyTo_m1F9370E92CA125E08A2652F7D0718F7AEB83AE89_gshared (Queue_1_tE50D0AAB2E9579CB69DE8C77FE39236C3E025C1E* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	int32_t G_B17_0 = 0;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeArray* L_2 = ___0_array;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_2, NULL);
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral967D403A541A1026A83D548E5AD5CA800AD4EFB5)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0027:
	{
		RuntimeArray* L_5 = ___0_array;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_5, 0, NULL);
		if (!L_6)
		{
			goto IL_0040;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6195D7DA68D16D4985AD1A1B4FD2841A43CDDE70)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, method);
	}

IL_0040:
	{
		RuntimeArray* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_8, NULL);
		V_0 = L_9;
		int32_t L_10 = ___1_index;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_11 = ___1_index;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) <= ((int32_t)L_12)))
		{
			goto IL_0065;
		}
	}

IL_004f:
	{
		int32_t L_13 = ___1_index;
		int32_t L_14 = L_13;
		RuntimeObject* L_15 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_14);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_16 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_16, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), L_15, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, method);
	}

IL_0065:
	{
		int32_t L_17 = V_0;
		int32_t L_18 = ___1_index;
		int32_t L_19 = __this->____size;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_17, L_18))) >= ((int32_t)L_19)))
		{
			goto IL_007b;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_20 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_20, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, method);
	}

IL_007b:
	{
		int32_t L_21 = __this->____size;
		V_1 = L_21;
		int32_t L_22 = V_1;
		if (L_22)
		{
			goto IL_0086;
		}
	}
	{
		return;
	}

IL_0086:
	{
	}
	try
	{
		{
			NoiseModuleU5BU5D_t7C4F86128102E5F9E007D757ED34CFE5D887C565* L_23 = __this->____array;
			NullCheck(L_23);
			int32_t L_24 = __this->____head;
			int32_t L_25 = V_1;
			if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_23)->max_length)), L_24))) < ((int32_t)L_25)))
			{
				goto IL_009c_1;
			}
		}
		{
			int32_t L_26 = V_1;
			G_B17_0 = L_26;
			goto IL_00ab_1;
		}

IL_009c_1:
		{
			NoiseModuleU5BU5D_t7C4F86128102E5F9E007D757ED34CFE5D887C565* L_27 = __this->____array;
			NullCheck(L_27);
			int32_t L_28 = __this->____head;
			G_B17_0 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_27)->max_length)), L_28));
		}

IL_00ab_1:
		{
			V_2 = G_B17_0;
			NoiseModuleU5BU5D_t7C4F86128102E5F9E007D757ED34CFE5D887C565* L_29 = __this->____array;
			int32_t L_30 = __this->____head;
			RuntimeArray* L_31 = ___0_array;
			int32_t L_32 = ___1_index;
			int32_t L_33 = V_2;
			Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_29, L_30, L_31, L_32, L_33, NULL);
			int32_t L_34 = V_1;
			int32_t L_35 = V_2;
			V_1 = ((int32_t)il2cpp_codegen_subtract(L_34, L_35));
			int32_t L_36 = V_1;
			if ((((int32_t)L_36) <= ((int32_t)0)))
			{
				goto IL_00e7_1;
			}
		}
		{
			NoiseModuleU5BU5D_t7C4F86128102E5F9E007D757ED34CFE5D887C565* L_37 = __this->____array;
			RuntimeArray* L_38 = ___0_array;
			int32_t L_39 = ___1_index;
			NoiseModuleU5BU5D_t7C4F86128102E5F9E007D757ED34CFE5D887C565* L_40 = __this->____array;
			NullCheck(L_40);
			int32_t L_41 = __this->____head;
			int32_t L_42 = V_1;
			Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_37, 0, L_38, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_39, ((int32_t)(((RuntimeArray*)L_40)->max_length)))), L_41)), L_42, NULL);
		}

IL_00e7_1:
		{
			goto IL_00fa;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00e9;
		}
		throw e;
	}

CATCH_00e9:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_43 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_44 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_44, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBD0381A992FDF4F7DA60E5D83689FE7FF6309CB8)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_44, method);
	}

IL_00fa:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_mAB1CF0E6BB28896B8F4A849F5C3F7A8095646866_gshared (Queue_1_tE50D0AAB2E9579CB69DE8C77FE39236C3E025C1E* __this, NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0 ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____size;
		NoiseModuleU5BU5D_t7C4F86128102E5F9E007D757ED34CFE5D887C565* L_1 = __this->____array;
		NullCheck(L_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))))))
		{
			goto IL_0045;
		}
	}
	{
		NoiseModuleU5BU5D_t7C4F86128102E5F9E007D757ED34CFE5D887C565* L_2 = __this->____array;
		NullCheck(L_2);
		V_0 = ((int32_t)((int64_t)(((int64_t)il2cpp_codegen_multiply(((int64_t)((int32_t)(((RuntimeArray*)L_2)->max_length))), ((int64_t)((int32_t)200))))/((int64_t)((int32_t)100)))));
		int32_t L_3 = V_0;
		NoiseModuleU5BU5D_t7C4F86128102E5F9E007D757ED34CFE5D887C565* L_4 = __this->____array;
		NullCheck(L_4);
		if ((((int32_t)L_3) >= ((int32_t)((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_4)->max_length)), 4)))))
		{
			goto IL_003e;
		}
	}
	{
		NoiseModuleU5BU5D_t7C4F86128102E5F9E007D757ED34CFE5D887C565* L_5 = __this->____array;
		NullCheck(L_5);
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_5)->max_length)), 4));
	}

IL_003e:
	{
		int32_t L_6 = V_0;
		Queue_1_SetCapacity_mB8E3DFCD07610A1612A7CE73AE8465447452CF2E(__this, L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
	}

IL_0045:
	{
		NoiseModuleU5BU5D_t7C4F86128102E5F9E007D757ED34CFE5D887C565* L_7 = __this->____array;
		int32_t L_8 = __this->____tail;
		NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0 L_9 = ___0_item;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0)L_9);
		int32_t* L_10 = (int32_t*)(&__this->____tail);
		Queue_1_MoveNext_m746098FB2E11F67364098F217D25B6816CC71789(__this, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		int32_t L_11 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_11, 1));
		int32_t L_12 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_12, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t7BB8049BB5F5F3EFF0638EC4F4A3E082C4591BAE Queue_1_GetEnumerator_m42B76A61FA07545F6687ED07EA15B7CFDDA5940B_gshared (Queue_1_tE50D0AAB2E9579CB69DE8C77FE39236C3E025C1E* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t7BB8049BB5F5F3EFF0638EC4F4A3E082C4591BAE L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m30A6766AAF8AF84D174C90D21D803EE4F75C80B4((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m7A75447840E0304869BEE48DDDFE7C8CE0F3976B_gshared (Queue_1_tE50D0AAB2E9579CB69DE8C77FE39236C3E025C1E* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t7BB8049BB5F5F3EFF0638EC4F4A3E082C4591BAE L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m30A6766AAF8AF84D174C90D21D803EE4F75C80B4((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		Enumerator_t7BB8049BB5F5F3EFF0638EC4F4A3E082C4591BAE L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_IEnumerable_GetEnumerator_m92D0A21372437D7A2FDA074ED6A4A17CBD3C7221_gshared (Queue_1_tE50D0AAB2E9579CB69DE8C77FE39236C3E025C1E* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t7BB8049BB5F5F3EFF0638EC4F4A3E082C4591BAE L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m30A6766AAF8AF84D174C90D21D803EE4F75C80B4((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		Enumerator_t7BB8049BB5F5F3EFF0638EC4F4A3E082C4591BAE L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0 Queue_1_Dequeue_m4D8936E9BAFA2E45E12D336391DFDCDD1BC937AC_gshared (Queue_1_tE50D0AAB2E9579CB69DE8C77FE39236C3E025C1E* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	NoiseModuleU5BU5D_t7C4F86128102E5F9E007D757ED34CFE5D887C565* V_1 = NULL;
	NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0 V_2;
	memset((&V_2), 0, sizeof(V_2));
	NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0 G_B4_0;
	memset((&G_B4_0), 0, sizeof(G_B4_0));
	NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0 G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		int32_t L_0 = __this->____head;
		V_0 = L_0;
		NoiseModuleU5BU5D_t7C4F86128102E5F9E007D757ED34CFE5D887C565* L_1 = __this->____array;
		V_1 = L_1;
		int32_t L_2 = __this->____size;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		Queue_1_ThrowForEmptyQueue_mAD0CD3033C992D3ECE9C29911C8C80149F696886(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}

IL_001c:
	{
		NoiseModuleU5BU5D_t7C4F86128102E5F9E007D757ED34CFE5D887C565* L_3 = V_1;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0 L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		G_B3_0 = L_6;
	}
	{
		NoiseModuleU5BU5D_t7C4F86128102E5F9E007D757ED34CFE5D887C565* L_7 = V_1;
		int32_t L_8 = V_0;
		il2cpp_codegen_initobj((&V_2), sizeof(NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0));
		NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0 L_9 = V_2;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0)L_9);
		G_B4_0 = G_B3_0;
	}

IL_003a:
	{
		int32_t* L_10 = (int32_t*)(&__this->____head);
		Queue_1_MoveNext_m746098FB2E11F67364098F217D25B6816CC71789(__this, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		int32_t L_11 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
		int32_t L_12 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_12, 1));
		return G_B4_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0 Queue_1_Peek_m01B5A9FFAB75B438ED042465B33DD110F01FC78A_gshared (Queue_1_tE50D0AAB2E9579CB69DE8C77FE39236C3E025C1E* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		Queue_1_ThrowForEmptyQueue_mAD0CD3033C992D3ECE9C29911C8C80149F696886(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}

IL_000e:
	{
		NoiseModuleU5BU5D_t7C4F86128102E5F9E007D757ED34CFE5D887C565* L_1 = __this->____array;
		int32_t L_2 = __this->____head;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		NoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0 L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NoiseModuleU5BU5D_t7C4F86128102E5F9E007D757ED34CFE5D887C565* Queue_1_ToArray_m0D5BA25D85C45D037A28CD453B9E4AF97045224C_gshared (Queue_1_tE50D0AAB2E9579CB69DE8C77FE39236C3E025C1E* __this, const RuntimeMethod* method) 
{
	NoiseModuleU5BU5D_t7C4F86128102E5F9E007D757ED34CFE5D887C565* V_0 = NULL;
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		NoiseModuleU5BU5D_t7C4F86128102E5F9E007D757ED34CFE5D887C565* L_1;
		L_1 = Array_Empty_TisNoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0_m1AD2426C747ABC797C05E61B05D61450076A8903_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____size;
		NoiseModuleU5BU5D_t7C4F86128102E5F9E007D757ED34CFE5D887C565* L_3 = (NoiseModuleU5BU5D_t7C4F86128102E5F9E007D757ED34CFE5D887C565*)(NoiseModuleU5BU5D_t7C4F86128102E5F9E007D757ED34CFE5D887C565*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_2);
		V_0 = L_3;
		int32_t L_4 = __this->____head;
		int32_t L_5 = __this->____tail;
		if ((((int32_t)L_4) >= ((int32_t)L_5)))
		{
			goto IL_0043;
		}
	}
	{
		NoiseModuleU5BU5D_t7C4F86128102E5F9E007D757ED34CFE5D887C565* L_6 = __this->____array;
		int32_t L_7 = __this->____head;
		NoiseModuleU5BU5D_t7C4F86128102E5F9E007D757ED34CFE5D887C565* L_8 = V_0;
		int32_t L_9 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_6, L_7, (RuntimeArray*)L_8, 0, L_9, NULL);
		goto IL_0087;
	}

IL_0043:
	{
		NoiseModuleU5BU5D_t7C4F86128102E5F9E007D757ED34CFE5D887C565* L_10 = __this->____array;
		int32_t L_11 = __this->____head;
		NoiseModuleU5BU5D_t7C4F86128102E5F9E007D757ED34CFE5D887C565* L_12 = V_0;
		NoiseModuleU5BU5D_t7C4F86128102E5F9E007D757ED34CFE5D887C565* L_13 = __this->____array;
		NullCheck(L_13);
		int32_t L_14 = __this->____head;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_10, L_11, (RuntimeArray*)L_12, 0, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_13)->max_length)), L_14)), NULL);
		NoiseModuleU5BU5D_t7C4F86128102E5F9E007D757ED34CFE5D887C565* L_15 = __this->____array;
		NoiseModuleU5BU5D_t7C4F86128102E5F9E007D757ED34CFE5D887C565* L_16 = V_0;
		NoiseModuleU5BU5D_t7C4F86128102E5F9E007D757ED34CFE5D887C565* L_17 = __this->____array;
		NullCheck(L_17);
		int32_t L_18 = __this->____head;
		int32_t L_19 = __this->____tail;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_15, 0, (RuntimeArray*)L_16, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_17)->max_length)), L_18)), L_19, NULL);
	}

IL_0087:
	{
		NoiseModuleU5BU5D_t7C4F86128102E5F9E007D757ED34CFE5D887C565* L_20 = V_0;
		return L_20;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_SetCapacity_mB8E3DFCD07610A1612A7CE73AE8465447452CF2E_gshared (Queue_1_tE50D0AAB2E9579CB69DE8C77FE39236C3E025C1E* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	NoiseModuleU5BU5D_t7C4F86128102E5F9E007D757ED34CFE5D887C565* V_0 = NULL;
	Queue_1_tE50D0AAB2E9579CB69DE8C77FE39236C3E025C1E* G_B6_0 = NULL;
	Queue_1_tE50D0AAB2E9579CB69DE8C77FE39236C3E025C1E* G_B5_0 = NULL;
	int32_t G_B7_0 = 0;
	Queue_1_tE50D0AAB2E9579CB69DE8C77FE39236C3E025C1E* G_B7_1 = NULL;
	{
		int32_t L_0 = ___0_capacity;
		NoiseModuleU5BU5D_t7C4F86128102E5F9E007D757ED34CFE5D887C565* L_1 = (NoiseModuleU5BU5D_t7C4F86128102E5F9E007D757ED34CFE5D887C565*)(NoiseModuleU5BU5D_t7C4F86128102E5F9E007D757ED34CFE5D887C565*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_007d;
		}
	}
	{
		int32_t L_3 = __this->____head;
		int32_t L_4 = __this->____tail;
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0039;
		}
	}
	{
		NoiseModuleU5BU5D_t7C4F86128102E5F9E007D757ED34CFE5D887C565* L_5 = __this->____array;
		int32_t L_6 = __this->____head;
		NoiseModuleU5BU5D_t7C4F86128102E5F9E007D757ED34CFE5D887C565* L_7 = V_0;
		int32_t L_8 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, L_6, (RuntimeArray*)L_7, 0, L_8, NULL);
		goto IL_007d;
	}

IL_0039:
	{
		NoiseModuleU5BU5D_t7C4F86128102E5F9E007D757ED34CFE5D887C565* L_9 = __this->____array;
		int32_t L_10 = __this->____head;
		NoiseModuleU5BU5D_t7C4F86128102E5F9E007D757ED34CFE5D887C565* L_11 = V_0;
		NoiseModuleU5BU5D_t7C4F86128102E5F9E007D757ED34CFE5D887C565* L_12 = __this->____array;
		NullCheck(L_12);
		int32_t L_13 = __this->____head;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_9, L_10, (RuntimeArray*)L_11, 0, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_12)->max_length)), L_13)), NULL);
		NoiseModuleU5BU5D_t7C4F86128102E5F9E007D757ED34CFE5D887C565* L_14 = __this->____array;
		NoiseModuleU5BU5D_t7C4F86128102E5F9E007D757ED34CFE5D887C565* L_15 = V_0;
		NoiseModuleU5BU5D_t7C4F86128102E5F9E007D757ED34CFE5D887C565* L_16 = __this->____array;
		NullCheck(L_16);
		int32_t L_17 = __this->____head;
		int32_t L_18 = __this->____tail;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_14, 0, (RuntimeArray*)L_15, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_16)->max_length)), L_17)), L_18, NULL);
	}

IL_007d:
	{
		NoiseModuleU5BU5D_t7C4F86128102E5F9E007D757ED34CFE5D887C565* L_19 = V_0;
		__this->____array = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_19);
		__this->____head = 0;
		int32_t L_20 = __this->____size;
		int32_t L_21 = ___0_capacity;
		if ((((int32_t)L_20) == ((int32_t)L_21)))
		{
			G_B6_0 = __this;
			goto IL_009d;
		}
		G_B5_0 = __this;
	}
	{
		int32_t L_22 = __this->____size;
		G_B7_0 = L_22;
		G_B7_1 = G_B5_0;
		goto IL_009e;
	}

IL_009d:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
	}

IL_009e:
	{
		NullCheck(G_B7_1);
		G_B7_1->____tail = G_B7_0;
		int32_t L_23 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_23, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_MoveNext_m746098FB2E11F67364098F217D25B6816CC71789_gshared (Queue_1_tE50D0AAB2E9579CB69DE8C77FE39236C3E025C1E* __this, int32_t* ___0_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t* L_0 = ___0_index;
		int32_t L_1 = *((int32_t*)L_0);
		V_0 = ((int32_t)il2cpp_codegen_add(L_1, 1));
		int32_t L_2 = V_0;
		NoiseModuleU5BU5D_t7C4F86128102E5F9E007D757ED34CFE5D887C565* L_3 = __this->____array;
		NullCheck(L_3);
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))))
		{
			goto IL_0012;
		}
	}
	{
		V_0 = 0;
	}

IL_0012:
	{
		int32_t* L_4 = ___0_index;
		int32_t L_5 = V_0;
		*((int32_t*)L_4) = (int32_t)L_5;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_ThrowForEmptyQueue_mAD0CD3033C992D3ECE9C29911C8C80149F696886_gshared (Queue_1_tE50D0AAB2E9579CB69DE8C77FE39236C3E025C1E* __this, const RuntimeMethod* method) 
{
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1102619AA6FB2A4AADBDAA47DDC096AE04C772C0)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_mBE36D070D67CD7B9514992C2B957DEAD782B6C8B_gshared (Queue_1_t9FA265C8E0E8BDEBE8DBED5C7F4E420B7C3ED03D* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		RotationBySpeedModuleU5BU5D_tFC82BD47383BAC5155E20F4CACA0B1D3377CA989* L_0;
		L_0 = Array_Empty_TisRotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_mA0D9CFABD04BEF3BFE482AE641DCD6F0C1597FA9_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		__this->____array = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m65948375721A12D86C6F56148B849A8F4EAAEE41_gshared (Queue_1_t9FA265C8E0E8BDEBE8DBED5C7F4E420B7C3ED03D* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_1 = ___0_capacity;
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_2);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_4 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC37D78082ACFC8DEE7B32D9351C6E433A074FEC7)), L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0020:
	{
		int32_t L_5 = ___0_capacity;
		RotationBySpeedModuleU5BU5D_tFC82BD47383BAC5155E20F4CACA0B1D3377CA989* L_6 = (RotationBySpeedModuleU5BU5D_tFC82BD47383BAC5155E20F4CACA0B1D3377CA989*)(RotationBySpeedModuleU5BU5D_tFC82BD47383BAC5155E20F4CACA0B1D3377CA989*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_5);
		__this->____array = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_6);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_mC3E2B8051D82EC556AFEA1E6C2202C13BABDC912_gshared (Queue_1_t9FA265C8E0E8BDEBE8DBED5C7F4E420B7C3ED03D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_System_Collections_ICollection_get_IsSynchronized_mBF597BDD200BCC7FAD457C5EDC4681FF20A16D85_gshared (Queue_1_t9FA265C8E0E8BDEBE8DBED5C7F4E420B7C3ED03D* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_ICollection_get_SyncRoot_mFF4AA07B9C9CE42014D5F139A310CD541316AB10_gshared (Queue_1_t9FA265C8E0E8BDEBE8DBED5C7F4E420B7C3ED03D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____syncRoot;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Clear_mD786DF463E63A00E70EE43CAA71BE46BF983C099_gshared (Queue_1_t9FA265C8E0E8BDEBE8DBED5C7F4E420B7C3ED03D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (!L_0)
		{
			goto IL_006f;
		}
	}
	{
	}
	{
		int32_t L_1 = __this->____head;
		int32_t L_2 = __this->____tail;
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_0036;
		}
	}
	{
		RotationBySpeedModuleU5BU5D_tFC82BD47383BAC5155E20F4CACA0B1D3377CA989* L_3 = __this->____array;
		int32_t L_4 = __this->____head;
		int32_t L_5 = __this->____size;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, L_4, L_5, NULL);
		goto IL_0068;
	}

IL_0036:
	{
		RotationBySpeedModuleU5BU5D_tFC82BD47383BAC5155E20F4CACA0B1D3377CA989* L_6 = __this->____array;
		int32_t L_7 = __this->____head;
		RotationBySpeedModuleU5BU5D_tFC82BD47383BAC5155E20F4CACA0B1D3377CA989* L_8 = __this->____array;
		NullCheck(L_8);
		int32_t L_9 = __this->____head;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_6, L_7, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_8)->max_length)), L_9)), NULL);
		RotationBySpeedModuleU5BU5D_tFC82BD47383BAC5155E20F4CACA0B1D3377CA989* L_10 = __this->____array;
		int32_t L_11 = __this->____tail;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_10, 0, L_11, NULL);
	}

IL_0068:
	{
		__this->____size = 0;
	}

IL_006f:
	{
		__this->____head = 0;
		__this->____tail = 0;
		int32_t L_12 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_12, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_System_Collections_ICollection_CopyTo_m093E57B581DFCC17AF65BE7652146489CEFD3402_gshared (Queue_1_t9FA265C8E0E8BDEBE8DBED5C7F4E420B7C3ED03D* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	int32_t G_B17_0 = 0;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeArray* L_2 = ___0_array;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_2, NULL);
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral967D403A541A1026A83D548E5AD5CA800AD4EFB5)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0027:
	{
		RuntimeArray* L_5 = ___0_array;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_5, 0, NULL);
		if (!L_6)
		{
			goto IL_0040;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6195D7DA68D16D4985AD1A1B4FD2841A43CDDE70)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, method);
	}

IL_0040:
	{
		RuntimeArray* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_8, NULL);
		V_0 = L_9;
		int32_t L_10 = ___1_index;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_11 = ___1_index;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) <= ((int32_t)L_12)))
		{
			goto IL_0065;
		}
	}

IL_004f:
	{
		int32_t L_13 = ___1_index;
		int32_t L_14 = L_13;
		RuntimeObject* L_15 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_14);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_16 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_16, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), L_15, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, method);
	}

IL_0065:
	{
		int32_t L_17 = V_0;
		int32_t L_18 = ___1_index;
		int32_t L_19 = __this->____size;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_17, L_18))) >= ((int32_t)L_19)))
		{
			goto IL_007b;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_20 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_20, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, method);
	}

IL_007b:
	{
		int32_t L_21 = __this->____size;
		V_1 = L_21;
		int32_t L_22 = V_1;
		if (L_22)
		{
			goto IL_0086;
		}
	}
	{
		return;
	}

IL_0086:
	{
	}
	try
	{
		{
			RotationBySpeedModuleU5BU5D_tFC82BD47383BAC5155E20F4CACA0B1D3377CA989* L_23 = __this->____array;
			NullCheck(L_23);
			int32_t L_24 = __this->____head;
			int32_t L_25 = V_1;
			if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_23)->max_length)), L_24))) < ((int32_t)L_25)))
			{
				goto IL_009c_1;
			}
		}
		{
			int32_t L_26 = V_1;
			G_B17_0 = L_26;
			goto IL_00ab_1;
		}

IL_009c_1:
		{
			RotationBySpeedModuleU5BU5D_tFC82BD47383BAC5155E20F4CACA0B1D3377CA989* L_27 = __this->____array;
			NullCheck(L_27);
			int32_t L_28 = __this->____head;
			G_B17_0 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_27)->max_length)), L_28));
		}

IL_00ab_1:
		{
			V_2 = G_B17_0;
			RotationBySpeedModuleU5BU5D_tFC82BD47383BAC5155E20F4CACA0B1D3377CA989* L_29 = __this->____array;
			int32_t L_30 = __this->____head;
			RuntimeArray* L_31 = ___0_array;
			int32_t L_32 = ___1_index;
			int32_t L_33 = V_2;
			Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_29, L_30, L_31, L_32, L_33, NULL);
			int32_t L_34 = V_1;
			int32_t L_35 = V_2;
			V_1 = ((int32_t)il2cpp_codegen_subtract(L_34, L_35));
			int32_t L_36 = V_1;
			if ((((int32_t)L_36) <= ((int32_t)0)))
			{
				goto IL_00e7_1;
			}
		}
		{
			RotationBySpeedModuleU5BU5D_tFC82BD47383BAC5155E20F4CACA0B1D3377CA989* L_37 = __this->____array;
			RuntimeArray* L_38 = ___0_array;
			int32_t L_39 = ___1_index;
			RotationBySpeedModuleU5BU5D_tFC82BD47383BAC5155E20F4CACA0B1D3377CA989* L_40 = __this->____array;
			NullCheck(L_40);
			int32_t L_41 = __this->____head;
			int32_t L_42 = V_1;
			Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_37, 0, L_38, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_39, ((int32_t)(((RuntimeArray*)L_40)->max_length)))), L_41)), L_42, NULL);
		}

IL_00e7_1:
		{
			goto IL_00fa;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00e9;
		}
		throw e;
	}

CATCH_00e9:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_43 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_44 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_44, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBD0381A992FDF4F7DA60E5D83689FE7FF6309CB8)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_44, method);
	}

IL_00fa:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_m928556A12AE98A583420CE11A9554CB1153245EA_gshared (Queue_1_t9FA265C8E0E8BDEBE8DBED5C7F4E420B7C3ED03D* __this, RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____size;
		RotationBySpeedModuleU5BU5D_tFC82BD47383BAC5155E20F4CACA0B1D3377CA989* L_1 = __this->____array;
		NullCheck(L_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))))))
		{
			goto IL_0045;
		}
	}
	{
		RotationBySpeedModuleU5BU5D_tFC82BD47383BAC5155E20F4CACA0B1D3377CA989* L_2 = __this->____array;
		NullCheck(L_2);
		V_0 = ((int32_t)((int64_t)(((int64_t)il2cpp_codegen_multiply(((int64_t)((int32_t)(((RuntimeArray*)L_2)->max_length))), ((int64_t)((int32_t)200))))/((int64_t)((int32_t)100)))));
		int32_t L_3 = V_0;
		RotationBySpeedModuleU5BU5D_tFC82BD47383BAC5155E20F4CACA0B1D3377CA989* L_4 = __this->____array;
		NullCheck(L_4);
		if ((((int32_t)L_3) >= ((int32_t)((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_4)->max_length)), 4)))))
		{
			goto IL_003e;
		}
	}
	{
		RotationBySpeedModuleU5BU5D_tFC82BD47383BAC5155E20F4CACA0B1D3377CA989* L_5 = __this->____array;
		NullCheck(L_5);
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_5)->max_length)), 4));
	}

IL_003e:
	{
		int32_t L_6 = V_0;
		Queue_1_SetCapacity_m3EE7DDC17C8BF4A848530E14BE83AB2FF51EAD72(__this, L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
	}

IL_0045:
	{
		RotationBySpeedModuleU5BU5D_tFC82BD47383BAC5155E20F4CACA0B1D3377CA989* L_7 = __this->____array;
		int32_t L_8 = __this->____tail;
		RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 L_9 = ___0_item;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6)L_9);
		int32_t* L_10 = (int32_t*)(&__this->____tail);
		Queue_1_MoveNext_m52BF4F216585A90D38D3C6B9FA208D7962CDE4B4(__this, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		int32_t L_11 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_11, 1));
		int32_t L_12 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_12, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t3BC8EAF606B91138C671F4AEB3B2CAAF456197A7 Queue_1_GetEnumerator_mD79DB7C0CDE5101B1BAFFFF57D1B0C3B1F8BE2E1_gshared (Queue_1_t9FA265C8E0E8BDEBE8DBED5C7F4E420B7C3ED03D* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t3BC8EAF606B91138C671F4AEB3B2CAAF456197A7 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m7B6EDAC6E45ED0FF0A0ED83628E74E50D2DF9132((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m0A00CA7BF2009459EA8BE4B498A4B22AD231DCB6_gshared (Queue_1_t9FA265C8E0E8BDEBE8DBED5C7F4E420B7C3ED03D* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t3BC8EAF606B91138C671F4AEB3B2CAAF456197A7 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m7B6EDAC6E45ED0FF0A0ED83628E74E50D2DF9132((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		Enumerator_t3BC8EAF606B91138C671F4AEB3B2CAAF456197A7 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_IEnumerable_GetEnumerator_m4653B6D21170100856D9D0119505C3A56EA86D31_gshared (Queue_1_t9FA265C8E0E8BDEBE8DBED5C7F4E420B7C3ED03D* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t3BC8EAF606B91138C671F4AEB3B2CAAF456197A7 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m7B6EDAC6E45ED0FF0A0ED83628E74E50D2DF9132((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		Enumerator_t3BC8EAF606B91138C671F4AEB3B2CAAF456197A7 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 Queue_1_Dequeue_mB3FA3D9093FFF08F098E6C1E2F81C3C9C8E0390F_gshared (Queue_1_t9FA265C8E0E8BDEBE8DBED5C7F4E420B7C3ED03D* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	RotationBySpeedModuleU5BU5D_tFC82BD47383BAC5155E20F4CACA0B1D3377CA989* V_1 = NULL;
	RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 V_2;
	memset((&V_2), 0, sizeof(V_2));
	RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 G_B4_0;
	memset((&G_B4_0), 0, sizeof(G_B4_0));
	RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		int32_t L_0 = __this->____head;
		V_0 = L_0;
		RotationBySpeedModuleU5BU5D_tFC82BD47383BAC5155E20F4CACA0B1D3377CA989* L_1 = __this->____array;
		V_1 = L_1;
		int32_t L_2 = __this->____size;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		Queue_1_ThrowForEmptyQueue_m0EBE213721CBC0DB5DDC03F4E5F8E6465BB4193F(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}

IL_001c:
	{
		RotationBySpeedModuleU5BU5D_tFC82BD47383BAC5155E20F4CACA0B1D3377CA989* L_3 = V_1;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		G_B3_0 = L_6;
	}
	{
		RotationBySpeedModuleU5BU5D_tFC82BD47383BAC5155E20F4CACA0B1D3377CA989* L_7 = V_1;
		int32_t L_8 = V_0;
		il2cpp_codegen_initobj((&V_2), sizeof(RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6));
		RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 L_9 = V_2;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6)L_9);
		G_B4_0 = G_B3_0;
	}

IL_003a:
	{
		int32_t* L_10 = (int32_t*)(&__this->____head);
		Queue_1_MoveNext_m52BF4F216585A90D38D3C6B9FA208D7962CDE4B4(__this, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		int32_t L_11 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
		int32_t L_12 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_12, 1));
		return G_B4_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 Queue_1_Peek_m6D752408DB9E2AD07A0DD95213C12A3E3F15D334_gshared (Queue_1_t9FA265C8E0E8BDEBE8DBED5C7F4E420B7C3ED03D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		Queue_1_ThrowForEmptyQueue_m0EBE213721CBC0DB5DDC03F4E5F8E6465BB4193F(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}

IL_000e:
	{
		RotationBySpeedModuleU5BU5D_tFC82BD47383BAC5155E20F4CACA0B1D3377CA989* L_1 = __this->____array;
		int32_t L_2 = __this->____head;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RotationBySpeedModuleU5BU5D_tFC82BD47383BAC5155E20F4CACA0B1D3377CA989* Queue_1_ToArray_m2C0536E0AC24B727C947EE41A2D63658014CA5EA_gshared (Queue_1_t9FA265C8E0E8BDEBE8DBED5C7F4E420B7C3ED03D* __this, const RuntimeMethod* method) 
{
	RotationBySpeedModuleU5BU5D_tFC82BD47383BAC5155E20F4CACA0B1D3377CA989* V_0 = NULL;
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		RotationBySpeedModuleU5BU5D_tFC82BD47383BAC5155E20F4CACA0B1D3377CA989* L_1;
		L_1 = Array_Empty_TisRotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_mA0D9CFABD04BEF3BFE482AE641DCD6F0C1597FA9_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____size;
		RotationBySpeedModuleU5BU5D_tFC82BD47383BAC5155E20F4CACA0B1D3377CA989* L_3 = (RotationBySpeedModuleU5BU5D_tFC82BD47383BAC5155E20F4CACA0B1D3377CA989*)(RotationBySpeedModuleU5BU5D_tFC82BD47383BAC5155E20F4CACA0B1D3377CA989*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_2);
		V_0 = L_3;
		int32_t L_4 = __this->____head;
		int32_t L_5 = __this->____tail;
		if ((((int32_t)L_4) >= ((int32_t)L_5)))
		{
			goto IL_0043;
		}
	}
	{
		RotationBySpeedModuleU5BU5D_tFC82BD47383BAC5155E20F4CACA0B1D3377CA989* L_6 = __this->____array;
		int32_t L_7 = __this->____head;
		RotationBySpeedModuleU5BU5D_tFC82BD47383BAC5155E20F4CACA0B1D3377CA989* L_8 = V_0;
		int32_t L_9 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_6, L_7, (RuntimeArray*)L_8, 0, L_9, NULL);
		goto IL_0087;
	}

IL_0043:
	{
		RotationBySpeedModuleU5BU5D_tFC82BD47383BAC5155E20F4CACA0B1D3377CA989* L_10 = __this->____array;
		int32_t L_11 = __this->____head;
		RotationBySpeedModuleU5BU5D_tFC82BD47383BAC5155E20F4CACA0B1D3377CA989* L_12 = V_0;
		RotationBySpeedModuleU5BU5D_tFC82BD47383BAC5155E20F4CACA0B1D3377CA989* L_13 = __this->____array;
		NullCheck(L_13);
		int32_t L_14 = __this->____head;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_10, L_11, (RuntimeArray*)L_12, 0, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_13)->max_length)), L_14)), NULL);
		RotationBySpeedModuleU5BU5D_tFC82BD47383BAC5155E20F4CACA0B1D3377CA989* L_15 = __this->____array;
		RotationBySpeedModuleU5BU5D_tFC82BD47383BAC5155E20F4CACA0B1D3377CA989* L_16 = V_0;
		RotationBySpeedModuleU5BU5D_tFC82BD47383BAC5155E20F4CACA0B1D3377CA989* L_17 = __this->____array;
		NullCheck(L_17);
		int32_t L_18 = __this->____head;
		int32_t L_19 = __this->____tail;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_15, 0, (RuntimeArray*)L_16, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_17)->max_length)), L_18)), L_19, NULL);
	}

IL_0087:
	{
		RotationBySpeedModuleU5BU5D_tFC82BD47383BAC5155E20F4CACA0B1D3377CA989* L_20 = V_0;
		return L_20;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_SetCapacity_m3EE7DDC17C8BF4A848530E14BE83AB2FF51EAD72_gshared (Queue_1_t9FA265C8E0E8BDEBE8DBED5C7F4E420B7C3ED03D* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	RotationBySpeedModuleU5BU5D_tFC82BD47383BAC5155E20F4CACA0B1D3377CA989* V_0 = NULL;
	Queue_1_t9FA265C8E0E8BDEBE8DBED5C7F4E420B7C3ED03D* G_B6_0 = NULL;
	Queue_1_t9FA265C8E0E8BDEBE8DBED5C7F4E420B7C3ED03D* G_B5_0 = NULL;
	int32_t G_B7_0 = 0;
	Queue_1_t9FA265C8E0E8BDEBE8DBED5C7F4E420B7C3ED03D* G_B7_1 = NULL;
	{
		int32_t L_0 = ___0_capacity;
		RotationBySpeedModuleU5BU5D_tFC82BD47383BAC5155E20F4CACA0B1D3377CA989* L_1 = (RotationBySpeedModuleU5BU5D_tFC82BD47383BAC5155E20F4CACA0B1D3377CA989*)(RotationBySpeedModuleU5BU5D_tFC82BD47383BAC5155E20F4CACA0B1D3377CA989*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_007d;
		}
	}
	{
		int32_t L_3 = __this->____head;
		int32_t L_4 = __this->____tail;
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0039;
		}
	}
	{
		RotationBySpeedModuleU5BU5D_tFC82BD47383BAC5155E20F4CACA0B1D3377CA989* L_5 = __this->____array;
		int32_t L_6 = __this->____head;
		RotationBySpeedModuleU5BU5D_tFC82BD47383BAC5155E20F4CACA0B1D3377CA989* L_7 = V_0;
		int32_t L_8 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, L_6, (RuntimeArray*)L_7, 0, L_8, NULL);
		goto IL_007d;
	}

IL_0039:
	{
		RotationBySpeedModuleU5BU5D_tFC82BD47383BAC5155E20F4CACA0B1D3377CA989* L_9 = __this->____array;
		int32_t L_10 = __this->____head;
		RotationBySpeedModuleU5BU5D_tFC82BD47383BAC5155E20F4CACA0B1D3377CA989* L_11 = V_0;
		RotationBySpeedModuleU5BU5D_tFC82BD47383BAC5155E20F4CACA0B1D3377CA989* L_12 = __this->____array;
		NullCheck(L_12);
		int32_t L_13 = __this->____head;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_9, L_10, (RuntimeArray*)L_11, 0, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_12)->max_length)), L_13)), NULL);
		RotationBySpeedModuleU5BU5D_tFC82BD47383BAC5155E20F4CACA0B1D3377CA989* L_14 = __this->____array;
		RotationBySpeedModuleU5BU5D_tFC82BD47383BAC5155E20F4CACA0B1D3377CA989* L_15 = V_0;
		RotationBySpeedModuleU5BU5D_tFC82BD47383BAC5155E20F4CACA0B1D3377CA989* L_16 = __this->____array;
		NullCheck(L_16);
		int32_t L_17 = __this->____head;
		int32_t L_18 = __this->____tail;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_14, 0, (RuntimeArray*)L_15, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_16)->max_length)), L_17)), L_18, NULL);
	}

IL_007d:
	{
		RotationBySpeedModuleU5BU5D_tFC82BD47383BAC5155E20F4CACA0B1D3377CA989* L_19 = V_0;
		__this->____array = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_19);
		__this->____head = 0;
		int32_t L_20 = __this->____size;
		int32_t L_21 = ___0_capacity;
		if ((((int32_t)L_20) == ((int32_t)L_21)))
		{
			G_B6_0 = __this;
			goto IL_009d;
		}
		G_B5_0 = __this;
	}
	{
		int32_t L_22 = __this->____size;
		G_B7_0 = L_22;
		G_B7_1 = G_B5_0;
		goto IL_009e;
	}

IL_009d:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
	}

IL_009e:
	{
		NullCheck(G_B7_1);
		G_B7_1->____tail = G_B7_0;
		int32_t L_23 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_23, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_MoveNext_m52BF4F216585A90D38D3C6B9FA208D7962CDE4B4_gshared (Queue_1_t9FA265C8E0E8BDEBE8DBED5C7F4E420B7C3ED03D* __this, int32_t* ___0_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t* L_0 = ___0_index;
		int32_t L_1 = *((int32_t*)L_0);
		V_0 = ((int32_t)il2cpp_codegen_add(L_1, 1));
		int32_t L_2 = V_0;
		RotationBySpeedModuleU5BU5D_tFC82BD47383BAC5155E20F4CACA0B1D3377CA989* L_3 = __this->____array;
		NullCheck(L_3);
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))))
		{
			goto IL_0012;
		}
	}
	{
		V_0 = 0;
	}

IL_0012:
	{
		int32_t* L_4 = ___0_index;
		int32_t L_5 = V_0;
		*((int32_t*)L_4) = (int32_t)L_5;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_ThrowForEmptyQueue_m0EBE213721CBC0DB5DDC03F4E5F8E6465BB4193F_gshared (Queue_1_t9FA265C8E0E8BDEBE8DBED5C7F4E420B7C3ED03D* __this, const RuntimeMethod* method) 
{
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1102619AA6FB2A4AADBDAA47DDC096AE04C772C0)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m67BD666D30B34E12A43214BEE10AC7FEEB7FC8A0_gshared (Queue_1_tBF1D02B07565C1EAA28556CFDAA2E3555501F50D* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		RotationOverLifetimeModuleU5BU5D_t50CBEBBC6B542E064BD30EB9EB49BCD9B5F419C8* L_0;
		L_0 = Array_Empty_TisRotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_m3E7ABA71381D6C3DA7508146A094FE8C9C5C7436_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		__this->____array = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m871E22D7551923F4CD9966C1530D1503148F42ED_gshared (Queue_1_tBF1D02B07565C1EAA28556CFDAA2E3555501F50D* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_1 = ___0_capacity;
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_2);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_4 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC37D78082ACFC8DEE7B32D9351C6E433A074FEC7)), L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0020:
	{
		int32_t L_5 = ___0_capacity;
		RotationOverLifetimeModuleU5BU5D_t50CBEBBC6B542E064BD30EB9EB49BCD9B5F419C8* L_6 = (RotationOverLifetimeModuleU5BU5D_t50CBEBBC6B542E064BD30EB9EB49BCD9B5F419C8*)(RotationOverLifetimeModuleU5BU5D_t50CBEBBC6B542E064BD30EB9EB49BCD9B5F419C8*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_5);
		__this->____array = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_6);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_m5F448492859EB5D9C0FB034E94E4E42573AE4289_gshared (Queue_1_tBF1D02B07565C1EAA28556CFDAA2E3555501F50D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_System_Collections_ICollection_get_IsSynchronized_m43ED8AE4BFFF0CDE605B3700947F4BEEC2B13C9E_gshared (Queue_1_tBF1D02B07565C1EAA28556CFDAA2E3555501F50D* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_ICollection_get_SyncRoot_mE0B934FBE3D6B63415C431224CE979B179530D6F_gshared (Queue_1_tBF1D02B07565C1EAA28556CFDAA2E3555501F50D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____syncRoot;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Clear_m094160AC6368ED0BC968F0D713A45B0D183E7017_gshared (Queue_1_tBF1D02B07565C1EAA28556CFDAA2E3555501F50D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (!L_0)
		{
			goto IL_006f;
		}
	}
	{
	}
	{
		int32_t L_1 = __this->____head;
		int32_t L_2 = __this->____tail;
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_0036;
		}
	}
	{
		RotationOverLifetimeModuleU5BU5D_t50CBEBBC6B542E064BD30EB9EB49BCD9B5F419C8* L_3 = __this->____array;
		int32_t L_4 = __this->____head;
		int32_t L_5 = __this->____size;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, L_4, L_5, NULL);
		goto IL_0068;
	}

IL_0036:
	{
		RotationOverLifetimeModuleU5BU5D_t50CBEBBC6B542E064BD30EB9EB49BCD9B5F419C8* L_6 = __this->____array;
		int32_t L_7 = __this->____head;
		RotationOverLifetimeModuleU5BU5D_t50CBEBBC6B542E064BD30EB9EB49BCD9B5F419C8* L_8 = __this->____array;
		NullCheck(L_8);
		int32_t L_9 = __this->____head;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_6, L_7, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_8)->max_length)), L_9)), NULL);
		RotationOverLifetimeModuleU5BU5D_t50CBEBBC6B542E064BD30EB9EB49BCD9B5F419C8* L_10 = __this->____array;
		int32_t L_11 = __this->____tail;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_10, 0, L_11, NULL);
	}

IL_0068:
	{
		__this->____size = 0;
	}

IL_006f:
	{
		__this->____head = 0;
		__this->____tail = 0;
		int32_t L_12 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_12, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_System_Collections_ICollection_CopyTo_mB1AABB779E92B9FC5B961F3B3FFFD268EB6D4538_gshared (Queue_1_tBF1D02B07565C1EAA28556CFDAA2E3555501F50D* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	int32_t G_B17_0 = 0;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeArray* L_2 = ___0_array;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_2, NULL);
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral967D403A541A1026A83D548E5AD5CA800AD4EFB5)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0027:
	{
		RuntimeArray* L_5 = ___0_array;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_5, 0, NULL);
		if (!L_6)
		{
			goto IL_0040;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6195D7DA68D16D4985AD1A1B4FD2841A43CDDE70)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, method);
	}

IL_0040:
	{
		RuntimeArray* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_8, NULL);
		V_0 = L_9;
		int32_t L_10 = ___1_index;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_11 = ___1_index;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) <= ((int32_t)L_12)))
		{
			goto IL_0065;
		}
	}

IL_004f:
	{
		int32_t L_13 = ___1_index;
		int32_t L_14 = L_13;
		RuntimeObject* L_15 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_14);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_16 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_16, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), L_15, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, method);
	}

IL_0065:
	{
		int32_t L_17 = V_0;
		int32_t L_18 = ___1_index;
		int32_t L_19 = __this->____size;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_17, L_18))) >= ((int32_t)L_19)))
		{
			goto IL_007b;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_20 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_20, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, method);
	}

IL_007b:
	{
		int32_t L_21 = __this->____size;
		V_1 = L_21;
		int32_t L_22 = V_1;
		if (L_22)
		{
			goto IL_0086;
		}
	}
	{
		return;
	}

IL_0086:
	{
	}
	try
	{
		{
			RotationOverLifetimeModuleU5BU5D_t50CBEBBC6B542E064BD30EB9EB49BCD9B5F419C8* L_23 = __this->____array;
			NullCheck(L_23);
			int32_t L_24 = __this->____head;
			int32_t L_25 = V_1;
			if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_23)->max_length)), L_24))) < ((int32_t)L_25)))
			{
				goto IL_009c_1;
			}
		}
		{
			int32_t L_26 = V_1;
			G_B17_0 = L_26;
			goto IL_00ab_1;
		}

IL_009c_1:
		{
			RotationOverLifetimeModuleU5BU5D_t50CBEBBC6B542E064BD30EB9EB49BCD9B5F419C8* L_27 = __this->____array;
			NullCheck(L_27);
			int32_t L_28 = __this->____head;
			G_B17_0 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_27)->max_length)), L_28));
		}

IL_00ab_1:
		{
			V_2 = G_B17_0;
			RotationOverLifetimeModuleU5BU5D_t50CBEBBC6B542E064BD30EB9EB49BCD9B5F419C8* L_29 = __this->____array;
			int32_t L_30 = __this->____head;
			RuntimeArray* L_31 = ___0_array;
			int32_t L_32 = ___1_index;
			int32_t L_33 = V_2;
			Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_29, L_30, L_31, L_32, L_33, NULL);
			int32_t L_34 = V_1;
			int32_t L_35 = V_2;
			V_1 = ((int32_t)il2cpp_codegen_subtract(L_34, L_35));
			int32_t L_36 = V_1;
			if ((((int32_t)L_36) <= ((int32_t)0)))
			{
				goto IL_00e7_1;
			}
		}
		{
			RotationOverLifetimeModuleU5BU5D_t50CBEBBC6B542E064BD30EB9EB49BCD9B5F419C8* L_37 = __this->____array;
			RuntimeArray* L_38 = ___0_array;
			int32_t L_39 = ___1_index;
			RotationOverLifetimeModuleU5BU5D_t50CBEBBC6B542E064BD30EB9EB49BCD9B5F419C8* L_40 = __this->____array;
			NullCheck(L_40);
			int32_t L_41 = __this->____head;
			int32_t L_42 = V_1;
			Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_37, 0, L_38, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_39, ((int32_t)(((RuntimeArray*)L_40)->max_length)))), L_41)), L_42, NULL);
		}

IL_00e7_1:
		{
			goto IL_00fa;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00e9;
		}
		throw e;
	}

CATCH_00e9:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_43 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_44 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_44, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBD0381A992FDF4F7DA60E5D83689FE7FF6309CB8)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_44, method);
	}

IL_00fa:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_mFA3C0A1B0CFB80EDEE57203C5C536B16C7262875_gshared (Queue_1_tBF1D02B07565C1EAA28556CFDAA2E3555501F50D* __this, RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____size;
		RotationOverLifetimeModuleU5BU5D_t50CBEBBC6B542E064BD30EB9EB49BCD9B5F419C8* L_1 = __this->____array;
		NullCheck(L_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))))))
		{
			goto IL_0045;
		}
	}
	{
		RotationOverLifetimeModuleU5BU5D_t50CBEBBC6B542E064BD30EB9EB49BCD9B5F419C8* L_2 = __this->____array;
		NullCheck(L_2);
		V_0 = ((int32_t)((int64_t)(((int64_t)il2cpp_codegen_multiply(((int64_t)((int32_t)(((RuntimeArray*)L_2)->max_length))), ((int64_t)((int32_t)200))))/((int64_t)((int32_t)100)))));
		int32_t L_3 = V_0;
		RotationOverLifetimeModuleU5BU5D_t50CBEBBC6B542E064BD30EB9EB49BCD9B5F419C8* L_4 = __this->____array;
		NullCheck(L_4);
		if ((((int32_t)L_3) >= ((int32_t)((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_4)->max_length)), 4)))))
		{
			goto IL_003e;
		}
	}
	{
		RotationOverLifetimeModuleU5BU5D_t50CBEBBC6B542E064BD30EB9EB49BCD9B5F419C8* L_5 = __this->____array;
		NullCheck(L_5);
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_5)->max_length)), 4));
	}

IL_003e:
	{
		int32_t L_6 = V_0;
		Queue_1_SetCapacity_m06D7B5BE55FEF9235CFA3C383C4CD74A3DEC4792(__this, L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
	}

IL_0045:
	{
		RotationOverLifetimeModuleU5BU5D_t50CBEBBC6B542E064BD30EB9EB49BCD9B5F419C8* L_7 = __this->____array;
		int32_t L_8 = __this->____tail;
		RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 L_9 = ___0_item;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6)L_9);
		int32_t* L_10 = (int32_t*)(&__this->____tail);
		Queue_1_MoveNext_m9AB4859605F51D7FFC3E732BD78F12ED623A6F17(__this, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		int32_t L_11 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_11, 1));
		int32_t L_12 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_12, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tE86A0C1F3FA0726AEC68EDEA1B95782056A41922 Queue_1_GetEnumerator_m14A3B664C17884EEF5DF1A231854E111A269381B_gshared (Queue_1_tBF1D02B07565C1EAA28556CFDAA2E3555501F50D* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tE86A0C1F3FA0726AEC68EDEA1B95782056A41922 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mF692387BB4116F7998F307A7FFAD03C96E5F47D8((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_mCAAF127F1EC368B2BC837E0A9899543BE3E7BBF1_gshared (Queue_1_tBF1D02B07565C1EAA28556CFDAA2E3555501F50D* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tE86A0C1F3FA0726AEC68EDEA1B95782056A41922 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mF692387BB4116F7998F307A7FFAD03C96E5F47D8((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		Enumerator_tE86A0C1F3FA0726AEC68EDEA1B95782056A41922 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_IEnumerable_GetEnumerator_mF4F8C857DEF800B97E65A910FC48BE534EECC627_gshared (Queue_1_tBF1D02B07565C1EAA28556CFDAA2E3555501F50D* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tE86A0C1F3FA0726AEC68EDEA1B95782056A41922 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mF692387BB4116F7998F307A7FFAD03C96E5F47D8((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		Enumerator_tE86A0C1F3FA0726AEC68EDEA1B95782056A41922 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 Queue_1_Dequeue_m300E36534089E0B56908030B58141AF27EC2E456_gshared (Queue_1_tBF1D02B07565C1EAA28556CFDAA2E3555501F50D* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	RotationOverLifetimeModuleU5BU5D_t50CBEBBC6B542E064BD30EB9EB49BCD9B5F419C8* V_1 = NULL;
	RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 V_2;
	memset((&V_2), 0, sizeof(V_2));
	RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 G_B4_0;
	memset((&G_B4_0), 0, sizeof(G_B4_0));
	RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		int32_t L_0 = __this->____head;
		V_0 = L_0;
		RotationOverLifetimeModuleU5BU5D_t50CBEBBC6B542E064BD30EB9EB49BCD9B5F419C8* L_1 = __this->____array;
		V_1 = L_1;
		int32_t L_2 = __this->____size;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		Queue_1_ThrowForEmptyQueue_mD77DAE9F8E6C99BD4E01B159FA8D36D8B9AAF125(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}

IL_001c:
	{
		RotationOverLifetimeModuleU5BU5D_t50CBEBBC6B542E064BD30EB9EB49BCD9B5F419C8* L_3 = V_1;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		G_B3_0 = L_6;
	}
	{
		RotationOverLifetimeModuleU5BU5D_t50CBEBBC6B542E064BD30EB9EB49BCD9B5F419C8* L_7 = V_1;
		int32_t L_8 = V_0;
		il2cpp_codegen_initobj((&V_2), sizeof(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6));
		RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 L_9 = V_2;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6)L_9);
		G_B4_0 = G_B3_0;
	}

IL_003a:
	{
		int32_t* L_10 = (int32_t*)(&__this->____head);
		Queue_1_MoveNext_m9AB4859605F51D7FFC3E732BD78F12ED623A6F17(__this, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		int32_t L_11 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
		int32_t L_12 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_12, 1));
		return G_B4_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 Queue_1_Peek_m253955779486759CBEE674C3DC67EE39C1D29F59_gshared (Queue_1_tBF1D02B07565C1EAA28556CFDAA2E3555501F50D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		Queue_1_ThrowForEmptyQueue_mD77DAE9F8E6C99BD4E01B159FA8D36D8B9AAF125(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}

IL_000e:
	{
		RotationOverLifetimeModuleU5BU5D_t50CBEBBC6B542E064BD30EB9EB49BCD9B5F419C8* L_1 = __this->____array;
		int32_t L_2 = __this->____head;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RotationOverLifetimeModuleU5BU5D_t50CBEBBC6B542E064BD30EB9EB49BCD9B5F419C8* Queue_1_ToArray_m617B4D65C8F80A6D59B665E9F6298133474A0EAC_gshared (Queue_1_tBF1D02B07565C1EAA28556CFDAA2E3555501F50D* __this, const RuntimeMethod* method) 
{
	RotationOverLifetimeModuleU5BU5D_t50CBEBBC6B542E064BD30EB9EB49BCD9B5F419C8* V_0 = NULL;
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		RotationOverLifetimeModuleU5BU5D_t50CBEBBC6B542E064BD30EB9EB49BCD9B5F419C8* L_1;
		L_1 = Array_Empty_TisRotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_m3E7ABA71381D6C3DA7508146A094FE8C9C5C7436_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____size;
		RotationOverLifetimeModuleU5BU5D_t50CBEBBC6B542E064BD30EB9EB49BCD9B5F419C8* L_3 = (RotationOverLifetimeModuleU5BU5D_t50CBEBBC6B542E064BD30EB9EB49BCD9B5F419C8*)(RotationOverLifetimeModuleU5BU5D_t50CBEBBC6B542E064BD30EB9EB49BCD9B5F419C8*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_2);
		V_0 = L_3;
		int32_t L_4 = __this->____head;
		int32_t L_5 = __this->____tail;
		if ((((int32_t)L_4) >= ((int32_t)L_5)))
		{
			goto IL_0043;
		}
	}
	{
		RotationOverLifetimeModuleU5BU5D_t50CBEBBC6B542E064BD30EB9EB49BCD9B5F419C8* L_6 = __this->____array;
		int32_t L_7 = __this->____head;
		RotationOverLifetimeModuleU5BU5D_t50CBEBBC6B542E064BD30EB9EB49BCD9B5F419C8* L_8 = V_0;
		int32_t L_9 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_6, L_7, (RuntimeArray*)L_8, 0, L_9, NULL);
		goto IL_0087;
	}

IL_0043:
	{
		RotationOverLifetimeModuleU5BU5D_t50CBEBBC6B542E064BD30EB9EB49BCD9B5F419C8* L_10 = __this->____array;
		int32_t L_11 = __this->____head;
		RotationOverLifetimeModuleU5BU5D_t50CBEBBC6B542E064BD30EB9EB49BCD9B5F419C8* L_12 = V_0;
		RotationOverLifetimeModuleU5BU5D_t50CBEBBC6B542E064BD30EB9EB49BCD9B5F419C8* L_13 = __this->____array;
		NullCheck(L_13);
		int32_t L_14 = __this->____head;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_10, L_11, (RuntimeArray*)L_12, 0, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_13)->max_length)), L_14)), NULL);
		RotationOverLifetimeModuleU5BU5D_t50CBEBBC6B542E064BD30EB9EB49BCD9B5F419C8* L_15 = __this->____array;
		RotationOverLifetimeModuleU5BU5D_t50CBEBBC6B542E064BD30EB9EB49BCD9B5F419C8* L_16 = V_0;
		RotationOverLifetimeModuleU5BU5D_t50CBEBBC6B542E064BD30EB9EB49BCD9B5F419C8* L_17 = __this->____array;
		NullCheck(L_17);
		int32_t L_18 = __this->____head;
		int32_t L_19 = __this->____tail;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_15, 0, (RuntimeArray*)L_16, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_17)->max_length)), L_18)), L_19, NULL);
	}

IL_0087:
	{
		RotationOverLifetimeModuleU5BU5D_t50CBEBBC6B542E064BD30EB9EB49BCD9B5F419C8* L_20 = V_0;
		return L_20;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_SetCapacity_m06D7B5BE55FEF9235CFA3C383C4CD74A3DEC4792_gshared (Queue_1_tBF1D02B07565C1EAA28556CFDAA2E3555501F50D* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	RotationOverLifetimeModuleU5BU5D_t50CBEBBC6B542E064BD30EB9EB49BCD9B5F419C8* V_0 = NULL;
	Queue_1_tBF1D02B07565C1EAA28556CFDAA2E3555501F50D* G_B6_0 = NULL;
	Queue_1_tBF1D02B07565C1EAA28556CFDAA2E3555501F50D* G_B5_0 = NULL;
	int32_t G_B7_0 = 0;
	Queue_1_tBF1D02B07565C1EAA28556CFDAA2E3555501F50D* G_B7_1 = NULL;
	{
		int32_t L_0 = ___0_capacity;
		RotationOverLifetimeModuleU5BU5D_t50CBEBBC6B542E064BD30EB9EB49BCD9B5F419C8* L_1 = (RotationOverLifetimeModuleU5BU5D_t50CBEBBC6B542E064BD30EB9EB49BCD9B5F419C8*)(RotationOverLifetimeModuleU5BU5D_t50CBEBBC6B542E064BD30EB9EB49BCD9B5F419C8*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_007d;
		}
	}
	{
		int32_t L_3 = __this->____head;
		int32_t L_4 = __this->____tail;
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0039;
		}
	}
	{
		RotationOverLifetimeModuleU5BU5D_t50CBEBBC6B542E064BD30EB9EB49BCD9B5F419C8* L_5 = __this->____array;
		int32_t L_6 = __this->____head;
		RotationOverLifetimeModuleU5BU5D_t50CBEBBC6B542E064BD30EB9EB49BCD9B5F419C8* L_7 = V_0;
		int32_t L_8 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, L_6, (RuntimeArray*)L_7, 0, L_8, NULL);
		goto IL_007d;
	}

IL_0039:
	{
		RotationOverLifetimeModuleU5BU5D_t50CBEBBC6B542E064BD30EB9EB49BCD9B5F419C8* L_9 = __this->____array;
		int32_t L_10 = __this->____head;
		RotationOverLifetimeModuleU5BU5D_t50CBEBBC6B542E064BD30EB9EB49BCD9B5F419C8* L_11 = V_0;
		RotationOverLifetimeModuleU5BU5D_t50CBEBBC6B542E064BD30EB9EB49BCD9B5F419C8* L_12 = __this->____array;
		NullCheck(L_12);
		int32_t L_13 = __this->____head;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_9, L_10, (RuntimeArray*)L_11, 0, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_12)->max_length)), L_13)), NULL);
		RotationOverLifetimeModuleU5BU5D_t50CBEBBC6B542E064BD30EB9EB49BCD9B5F419C8* L_14 = __this->____array;
		RotationOverLifetimeModuleU5BU5D_t50CBEBBC6B542E064BD30EB9EB49BCD9B5F419C8* L_15 = V_0;
		RotationOverLifetimeModuleU5BU5D_t50CBEBBC6B542E064BD30EB9EB49BCD9B5F419C8* L_16 = __this->____array;
		NullCheck(L_16);
		int32_t L_17 = __this->____head;
		int32_t L_18 = __this->____tail;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_14, 0, (RuntimeArray*)L_15, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_16)->max_length)), L_17)), L_18, NULL);
	}

IL_007d:
	{
		RotationOverLifetimeModuleU5BU5D_t50CBEBBC6B542E064BD30EB9EB49BCD9B5F419C8* L_19 = V_0;
		__this->____array = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_19);
		__this->____head = 0;
		int32_t L_20 = __this->____size;
		int32_t L_21 = ___0_capacity;
		if ((((int32_t)L_20) == ((int32_t)L_21)))
		{
			G_B6_0 = __this;
			goto IL_009d;
		}
		G_B5_0 = __this;
	}
	{
		int32_t L_22 = __this->____size;
		G_B7_0 = L_22;
		G_B7_1 = G_B5_0;
		goto IL_009e;
	}

IL_009d:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
	}

IL_009e:
	{
		NullCheck(G_B7_1);
		G_B7_1->____tail = G_B7_0;
		int32_t L_23 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_23, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_MoveNext_m9AB4859605F51D7FFC3E732BD78F12ED623A6F17_gshared (Queue_1_tBF1D02B07565C1EAA28556CFDAA2E3555501F50D* __this, int32_t* ___0_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t* L_0 = ___0_index;
		int32_t L_1 = *((int32_t*)L_0);
		V_0 = ((int32_t)il2cpp_codegen_add(L_1, 1));
		int32_t L_2 = V_0;
		RotationOverLifetimeModuleU5BU5D_t50CBEBBC6B542E064BD30EB9EB49BCD9B5F419C8* L_3 = __this->____array;
		NullCheck(L_3);
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))))
		{
			goto IL_0012;
		}
	}
	{
		V_0 = 0;
	}

IL_0012:
	{
		int32_t* L_4 = ___0_index;
		int32_t L_5 = V_0;
		*((int32_t*)L_4) = (int32_t)L_5;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_ThrowForEmptyQueue_mD77DAE9F8E6C99BD4E01B159FA8D36D8B9AAF125_gshared (Queue_1_tBF1D02B07565C1EAA28556CFDAA2E3555501F50D* __this, const RuntimeMethod* method) 
{
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1102619AA6FB2A4AADBDAA47DDC096AE04C772C0)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m985D7F9BB4DA03D0E0C0842231138379B726E19A_gshared (Queue_1_tB5C7771CD791E4C5A79218CD2C607517B63C00F6* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		ShapeModuleU5BU5D_t8997568E698C9B1509FCDFE401084FF80AB60243* L_0;
		L_0 = Array_Empty_TisShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2_m23574AE640623A2874871290CD7F26FE026C60FE_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		__this->____array = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m1D031B44FCBFEF5AFA79067D932D89177E224895_gshared (Queue_1_tB5C7771CD791E4C5A79218CD2C607517B63C00F6* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_1 = ___0_capacity;
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_2);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_4 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC37D78082ACFC8DEE7B32D9351C6E433A074FEC7)), L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0020:
	{
		int32_t L_5 = ___0_capacity;
		ShapeModuleU5BU5D_t8997568E698C9B1509FCDFE401084FF80AB60243* L_6 = (ShapeModuleU5BU5D_t8997568E698C9B1509FCDFE401084FF80AB60243*)(ShapeModuleU5BU5D_t8997568E698C9B1509FCDFE401084FF80AB60243*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_5);
		__this->____array = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_6);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_m40638BDBD7E5CE07B02BB78087027D57F2AFAAAB_gshared (Queue_1_tB5C7771CD791E4C5A79218CD2C607517B63C00F6* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_System_Collections_ICollection_get_IsSynchronized_mF4C99EDA4BA50B83FEED1BC2F2A09DAB79F2A02F_gshared (Queue_1_tB5C7771CD791E4C5A79218CD2C607517B63C00F6* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_ICollection_get_SyncRoot_mB552780933DFCFBC1433CF3BA9940750FC17D08A_gshared (Queue_1_tB5C7771CD791E4C5A79218CD2C607517B63C00F6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____syncRoot;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Clear_m3ECA7E3D9C46B139970BD18D1F321B40C261C934_gshared (Queue_1_tB5C7771CD791E4C5A79218CD2C607517B63C00F6* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (!L_0)
		{
			goto IL_006f;
		}
	}
	{
	}
	{
		int32_t L_1 = __this->____head;
		int32_t L_2 = __this->____tail;
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_0036;
		}
	}
	{
		ShapeModuleU5BU5D_t8997568E698C9B1509FCDFE401084FF80AB60243* L_3 = __this->____array;
		int32_t L_4 = __this->____head;
		int32_t L_5 = __this->____size;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, L_4, L_5, NULL);
		goto IL_0068;
	}

IL_0036:
	{
		ShapeModuleU5BU5D_t8997568E698C9B1509FCDFE401084FF80AB60243* L_6 = __this->____array;
		int32_t L_7 = __this->____head;
		ShapeModuleU5BU5D_t8997568E698C9B1509FCDFE401084FF80AB60243* L_8 = __this->____array;
		NullCheck(L_8);
		int32_t L_9 = __this->____head;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_6, L_7, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_8)->max_length)), L_9)), NULL);
		ShapeModuleU5BU5D_t8997568E698C9B1509FCDFE401084FF80AB60243* L_10 = __this->____array;
		int32_t L_11 = __this->____tail;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_10, 0, L_11, NULL);
	}

IL_0068:
	{
		__this->____size = 0;
	}

IL_006f:
	{
		__this->____head = 0;
		__this->____tail = 0;
		int32_t L_12 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_12, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_System_Collections_ICollection_CopyTo_m414BB538BDD1B3F8A40FED4AEE9A52FF1E138641_gshared (Queue_1_tB5C7771CD791E4C5A79218CD2C607517B63C00F6* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	int32_t G_B17_0 = 0;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeArray* L_2 = ___0_array;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_2, NULL);
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral967D403A541A1026A83D548E5AD5CA800AD4EFB5)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0027:
	{
		RuntimeArray* L_5 = ___0_array;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_5, 0, NULL);
		if (!L_6)
		{
			goto IL_0040;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6195D7DA68D16D4985AD1A1B4FD2841A43CDDE70)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, method);
	}

IL_0040:
	{
		RuntimeArray* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_8, NULL);
		V_0 = L_9;
		int32_t L_10 = ___1_index;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_11 = ___1_index;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) <= ((int32_t)L_12)))
		{
			goto IL_0065;
		}
	}

IL_004f:
	{
		int32_t L_13 = ___1_index;
		int32_t L_14 = L_13;
		RuntimeObject* L_15 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_14);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_16 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_16, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), L_15, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, method);
	}

IL_0065:
	{
		int32_t L_17 = V_0;
		int32_t L_18 = ___1_index;
		int32_t L_19 = __this->____size;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_17, L_18))) >= ((int32_t)L_19)))
		{
			goto IL_007b;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_20 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_20, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, method);
	}

IL_007b:
	{
		int32_t L_21 = __this->____size;
		V_1 = L_21;
		int32_t L_22 = V_1;
		if (L_22)
		{
			goto IL_0086;
		}
	}
	{
		return;
	}

IL_0086:
	{
	}
	try
	{
		{
			ShapeModuleU5BU5D_t8997568E698C9B1509FCDFE401084FF80AB60243* L_23 = __this->____array;
			NullCheck(L_23);
			int32_t L_24 = __this->____head;
			int32_t L_25 = V_1;
			if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_23)->max_length)), L_24))) < ((int32_t)L_25)))
			{
				goto IL_009c_1;
			}
		}
		{
			int32_t L_26 = V_1;
			G_B17_0 = L_26;
			goto IL_00ab_1;
		}

IL_009c_1:
		{
			ShapeModuleU5BU5D_t8997568E698C9B1509FCDFE401084FF80AB60243* L_27 = __this->____array;
			NullCheck(L_27);
			int32_t L_28 = __this->____head;
			G_B17_0 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_27)->max_length)), L_28));
		}

IL_00ab_1:
		{
			V_2 = G_B17_0;
			ShapeModuleU5BU5D_t8997568E698C9B1509FCDFE401084FF80AB60243* L_29 = __this->____array;
			int32_t L_30 = __this->____head;
			RuntimeArray* L_31 = ___0_array;
			int32_t L_32 = ___1_index;
			int32_t L_33 = V_2;
			Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_29, L_30, L_31, L_32, L_33, NULL);
			int32_t L_34 = V_1;
			int32_t L_35 = V_2;
			V_1 = ((int32_t)il2cpp_codegen_subtract(L_34, L_35));
			int32_t L_36 = V_1;
			if ((((int32_t)L_36) <= ((int32_t)0)))
			{
				goto IL_00e7_1;
			}
		}
		{
			ShapeModuleU5BU5D_t8997568E698C9B1509FCDFE401084FF80AB60243* L_37 = __this->____array;
			RuntimeArray* L_38 = ___0_array;
			int32_t L_39 = ___1_index;
			ShapeModuleU5BU5D_t8997568E698C9B1509FCDFE401084FF80AB60243* L_40 = __this->____array;
			NullCheck(L_40);
			int32_t L_41 = __this->____head;
			int32_t L_42 = V_1;
			Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_37, 0, L_38, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_39, ((int32_t)(((RuntimeArray*)L_40)->max_length)))), L_41)), L_42, NULL);
		}

IL_00e7_1:
		{
			goto IL_00fa;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00e9;
		}
		throw e;
	}

CATCH_00e9:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_43 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_44 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_44, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBD0381A992FDF4F7DA60E5D83689FE7FF6309CB8)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_44, method);
	}

IL_00fa:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_m58492A4F5805C149FD8357FB0D82BC6017F50153_gshared (Queue_1_tB5C7771CD791E4C5A79218CD2C607517B63C00F6* __this, ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2 ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____size;
		ShapeModuleU5BU5D_t8997568E698C9B1509FCDFE401084FF80AB60243* L_1 = __this->____array;
		NullCheck(L_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))))))
		{
			goto IL_0045;
		}
	}
	{
		ShapeModuleU5BU5D_t8997568E698C9B1509FCDFE401084FF80AB60243* L_2 = __this->____array;
		NullCheck(L_2);
		V_0 = ((int32_t)((int64_t)(((int64_t)il2cpp_codegen_multiply(((int64_t)((int32_t)(((RuntimeArray*)L_2)->max_length))), ((int64_t)((int32_t)200))))/((int64_t)((int32_t)100)))));
		int32_t L_3 = V_0;
		ShapeModuleU5BU5D_t8997568E698C9B1509FCDFE401084FF80AB60243* L_4 = __this->____array;
		NullCheck(L_4);
		if ((((int32_t)L_3) >= ((int32_t)((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_4)->max_length)), 4)))))
		{
			goto IL_003e;
		}
	}
	{
		ShapeModuleU5BU5D_t8997568E698C9B1509FCDFE401084FF80AB60243* L_5 = __this->____array;
		NullCheck(L_5);
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_5)->max_length)), 4));
	}

IL_003e:
	{
		int32_t L_6 = V_0;
		Queue_1_SetCapacity_m7B994227375B3265506AD6D468B9FFBC4C1FC3BA(__this, L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
	}

IL_0045:
	{
		ShapeModuleU5BU5D_t8997568E698C9B1509FCDFE401084FF80AB60243* L_7 = __this->____array;
		int32_t L_8 = __this->____tail;
		ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2 L_9 = ___0_item;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2)L_9);
		int32_t* L_10 = (int32_t*)(&__this->____tail);
		Queue_1_MoveNext_mAD088977D1BFE3B3B419965739E95586C2CBF1D4(__this, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		int32_t L_11 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_11, 1));
		int32_t L_12 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_12, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t28136747FD61ACF924C71B74CE5CB33F5FDE221C Queue_1_GetEnumerator_mE03FFDD66DB55E2A56813C3F61950D802F5D8B77_gshared (Queue_1_tB5C7771CD791E4C5A79218CD2C607517B63C00F6* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t28136747FD61ACF924C71B74CE5CB33F5FDE221C L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mF75902196303BAF176D98D9E2CC8C790066AA36D((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_mEBEC8C060089FC29FC273D810E7E30999C90F9DC_gshared (Queue_1_tB5C7771CD791E4C5A79218CD2C607517B63C00F6* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t28136747FD61ACF924C71B74CE5CB33F5FDE221C L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mF75902196303BAF176D98D9E2CC8C790066AA36D((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		Enumerator_t28136747FD61ACF924C71B74CE5CB33F5FDE221C L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_IEnumerable_GetEnumerator_m0B7A115A752F70926F570463FB786F665F2D4758_gshared (Queue_1_tB5C7771CD791E4C5A79218CD2C607517B63C00F6* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t28136747FD61ACF924C71B74CE5CB33F5FDE221C L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mF75902196303BAF176D98D9E2CC8C790066AA36D((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		Enumerator_t28136747FD61ACF924C71B74CE5CB33F5FDE221C L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2 Queue_1_Dequeue_mDEEF60E14D32343822219FEA48630711D79CE0A1_gshared (Queue_1_tB5C7771CD791E4C5A79218CD2C607517B63C00F6* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	ShapeModuleU5BU5D_t8997568E698C9B1509FCDFE401084FF80AB60243* V_1 = NULL;
	ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2 G_B4_0;
	memset((&G_B4_0), 0, sizeof(G_B4_0));
	ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2 G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		int32_t L_0 = __this->____head;
		V_0 = L_0;
		ShapeModuleU5BU5D_t8997568E698C9B1509FCDFE401084FF80AB60243* L_1 = __this->____array;
		V_1 = L_1;
		int32_t L_2 = __this->____size;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		Queue_1_ThrowForEmptyQueue_mAEBA69695B2B981467316821D5F68FC9793F22E3(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}

IL_001c:
	{
		ShapeModuleU5BU5D_t8997568E698C9B1509FCDFE401084FF80AB60243* L_3 = V_1;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2 L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		G_B3_0 = L_6;
	}
	{
		ShapeModuleU5BU5D_t8997568E698C9B1509FCDFE401084FF80AB60243* L_7 = V_1;
		int32_t L_8 = V_0;
		il2cpp_codegen_initobj((&V_2), sizeof(ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2));
		ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2 L_9 = V_2;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2)L_9);
		G_B4_0 = G_B3_0;
	}

IL_003a:
	{
		int32_t* L_10 = (int32_t*)(&__this->____head);
		Queue_1_MoveNext_mAD088977D1BFE3B3B419965739E95586C2CBF1D4(__this, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		int32_t L_11 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
		int32_t L_12 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_12, 1));
		return G_B4_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2 Queue_1_Peek_mC14F031778647FF2C866DD8B623549A2089CAD78_gshared (Queue_1_tB5C7771CD791E4C5A79218CD2C607517B63C00F6* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		Queue_1_ThrowForEmptyQueue_mAEBA69695B2B981467316821D5F68FC9793F22E3(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}

IL_000e:
	{
		ShapeModuleU5BU5D_t8997568E698C9B1509FCDFE401084FF80AB60243* L_1 = __this->____array;
		int32_t L_2 = __this->____head;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2 L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ShapeModuleU5BU5D_t8997568E698C9B1509FCDFE401084FF80AB60243* Queue_1_ToArray_m9C936007DB93B96D543D5200CF35C0E63E1799EB_gshared (Queue_1_tB5C7771CD791E4C5A79218CD2C607517B63C00F6* __this, const RuntimeMethod* method) 
{
	ShapeModuleU5BU5D_t8997568E698C9B1509FCDFE401084FF80AB60243* V_0 = NULL;
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ShapeModuleU5BU5D_t8997568E698C9B1509FCDFE401084FF80AB60243* L_1;
		L_1 = Array_Empty_TisShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2_m23574AE640623A2874871290CD7F26FE026C60FE_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____size;
		ShapeModuleU5BU5D_t8997568E698C9B1509FCDFE401084FF80AB60243* L_3 = (ShapeModuleU5BU5D_t8997568E698C9B1509FCDFE401084FF80AB60243*)(ShapeModuleU5BU5D_t8997568E698C9B1509FCDFE401084FF80AB60243*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_2);
		V_0 = L_3;
		int32_t L_4 = __this->____head;
		int32_t L_5 = __this->____tail;
		if ((((int32_t)L_4) >= ((int32_t)L_5)))
		{
			goto IL_0043;
		}
	}
	{
		ShapeModuleU5BU5D_t8997568E698C9B1509FCDFE401084FF80AB60243* L_6 = __this->____array;
		int32_t L_7 = __this->____head;
		ShapeModuleU5BU5D_t8997568E698C9B1509FCDFE401084FF80AB60243* L_8 = V_0;
		int32_t L_9 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_6, L_7, (RuntimeArray*)L_8, 0, L_9, NULL);
		goto IL_0087;
	}

IL_0043:
	{
		ShapeModuleU5BU5D_t8997568E698C9B1509FCDFE401084FF80AB60243* L_10 = __this->____array;
		int32_t L_11 = __this->____head;
		ShapeModuleU5BU5D_t8997568E698C9B1509FCDFE401084FF80AB60243* L_12 = V_0;
		ShapeModuleU5BU5D_t8997568E698C9B1509FCDFE401084FF80AB60243* L_13 = __this->____array;
		NullCheck(L_13);
		int32_t L_14 = __this->____head;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_10, L_11, (RuntimeArray*)L_12, 0, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_13)->max_length)), L_14)), NULL);
		ShapeModuleU5BU5D_t8997568E698C9B1509FCDFE401084FF80AB60243* L_15 = __this->____array;
		ShapeModuleU5BU5D_t8997568E698C9B1509FCDFE401084FF80AB60243* L_16 = V_0;
		ShapeModuleU5BU5D_t8997568E698C9B1509FCDFE401084FF80AB60243* L_17 = __this->____array;
		NullCheck(L_17);
		int32_t L_18 = __this->____head;
		int32_t L_19 = __this->____tail;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_15, 0, (RuntimeArray*)L_16, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_17)->max_length)), L_18)), L_19, NULL);
	}

IL_0087:
	{
		ShapeModuleU5BU5D_t8997568E698C9B1509FCDFE401084FF80AB60243* L_20 = V_0;
		return L_20;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_SetCapacity_m7B994227375B3265506AD6D468B9FFBC4C1FC3BA_gshared (Queue_1_tB5C7771CD791E4C5A79218CD2C607517B63C00F6* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	ShapeModuleU5BU5D_t8997568E698C9B1509FCDFE401084FF80AB60243* V_0 = NULL;
	Queue_1_tB5C7771CD791E4C5A79218CD2C607517B63C00F6* G_B6_0 = NULL;
	Queue_1_tB5C7771CD791E4C5A79218CD2C607517B63C00F6* G_B5_0 = NULL;
	int32_t G_B7_0 = 0;
	Queue_1_tB5C7771CD791E4C5A79218CD2C607517B63C00F6* G_B7_1 = NULL;
	{
		int32_t L_0 = ___0_capacity;
		ShapeModuleU5BU5D_t8997568E698C9B1509FCDFE401084FF80AB60243* L_1 = (ShapeModuleU5BU5D_t8997568E698C9B1509FCDFE401084FF80AB60243*)(ShapeModuleU5BU5D_t8997568E698C9B1509FCDFE401084FF80AB60243*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_007d;
		}
	}
	{
		int32_t L_3 = __this->____head;
		int32_t L_4 = __this->____tail;
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0039;
		}
	}
	{
		ShapeModuleU5BU5D_t8997568E698C9B1509FCDFE401084FF80AB60243* L_5 = __this->____array;
		int32_t L_6 = __this->____head;
		ShapeModuleU5BU5D_t8997568E698C9B1509FCDFE401084FF80AB60243* L_7 = V_0;
		int32_t L_8 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, L_6, (RuntimeArray*)L_7, 0, L_8, NULL);
		goto IL_007d;
	}

IL_0039:
	{
		ShapeModuleU5BU5D_t8997568E698C9B1509FCDFE401084FF80AB60243* L_9 = __this->____array;
		int32_t L_10 = __this->____head;
		ShapeModuleU5BU5D_t8997568E698C9B1509FCDFE401084FF80AB60243* L_11 = V_0;
		ShapeModuleU5BU5D_t8997568E698C9B1509FCDFE401084FF80AB60243* L_12 = __this->____array;
		NullCheck(L_12);
		int32_t L_13 = __this->____head;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_9, L_10, (RuntimeArray*)L_11, 0, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_12)->max_length)), L_13)), NULL);
		ShapeModuleU5BU5D_t8997568E698C9B1509FCDFE401084FF80AB60243* L_14 = __this->____array;
		ShapeModuleU5BU5D_t8997568E698C9B1509FCDFE401084FF80AB60243* L_15 = V_0;
		ShapeModuleU5BU5D_t8997568E698C9B1509FCDFE401084FF80AB60243* L_16 = __this->____array;
		NullCheck(L_16);
		int32_t L_17 = __this->____head;
		int32_t L_18 = __this->____tail;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_14, 0, (RuntimeArray*)L_15, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_16)->max_length)), L_17)), L_18, NULL);
	}

IL_007d:
	{
		ShapeModuleU5BU5D_t8997568E698C9B1509FCDFE401084FF80AB60243* L_19 = V_0;
		__this->____array = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_19);
		__this->____head = 0;
		int32_t L_20 = __this->____size;
		int32_t L_21 = ___0_capacity;
		if ((((int32_t)L_20) == ((int32_t)L_21)))
		{
			G_B6_0 = __this;
			goto IL_009d;
		}
		G_B5_0 = __this;
	}
	{
		int32_t L_22 = __this->____size;
		G_B7_0 = L_22;
		G_B7_1 = G_B5_0;
		goto IL_009e;
	}

IL_009d:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
	}

IL_009e:
	{
		NullCheck(G_B7_1);
		G_B7_1->____tail = G_B7_0;
		int32_t L_23 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_23, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_MoveNext_mAD088977D1BFE3B3B419965739E95586C2CBF1D4_gshared (Queue_1_tB5C7771CD791E4C5A79218CD2C607517B63C00F6* __this, int32_t* ___0_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t* L_0 = ___0_index;
		int32_t L_1 = *((int32_t*)L_0);
		V_0 = ((int32_t)il2cpp_codegen_add(L_1, 1));
		int32_t L_2 = V_0;
		ShapeModuleU5BU5D_t8997568E698C9B1509FCDFE401084FF80AB60243* L_3 = __this->____array;
		NullCheck(L_3);
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))))
		{
			goto IL_0012;
		}
	}
	{
		V_0 = 0;
	}

IL_0012:
	{
		int32_t* L_4 = ___0_index;
		int32_t L_5 = V_0;
		*((int32_t*)L_4) = (int32_t)L_5;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_ThrowForEmptyQueue_mAEBA69695B2B981467316821D5F68FC9793F22E3_gshared (Queue_1_tB5C7771CD791E4C5A79218CD2C607517B63C00F6* __this, const RuntimeMethod* method) 
{
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1102619AA6FB2A4AADBDAA47DDC096AE04C772C0)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m54FDEF30D4AA4D9473F033F678961DE454866EA2_gshared (Queue_1_tABEA5C7CAAB3B865D2F50F23AFA9C9D95DC83722* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		SizeBySpeedModuleU5BU5D_tEF4645160713AF1309F815C4B95C79975BA2D221* L_0;
		L_0 = Array_Empty_TisSizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4_m9AA9EFC539DB7558A084DA01995E1416885100E0_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		__this->____array = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_mA9A17E607CAA55466E8E46ED4E8D7E62A7A11EBD_gshared (Queue_1_tABEA5C7CAAB3B865D2F50F23AFA9C9D95DC83722* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_1 = ___0_capacity;
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_2);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_4 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC37D78082ACFC8DEE7B32D9351C6E433A074FEC7)), L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0020:
	{
		int32_t L_5 = ___0_capacity;
		SizeBySpeedModuleU5BU5D_tEF4645160713AF1309F815C4B95C79975BA2D221* L_6 = (SizeBySpeedModuleU5BU5D_tEF4645160713AF1309F815C4B95C79975BA2D221*)(SizeBySpeedModuleU5BU5D_tEF4645160713AF1309F815C4B95C79975BA2D221*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_5);
		__this->____array = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_6);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_mF0A7FC81177726AA6440024EC44C079A4263F007_gshared (Queue_1_tABEA5C7CAAB3B865D2F50F23AFA9C9D95DC83722* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_System_Collections_ICollection_get_IsSynchronized_m9F6B599967E9ED0936A59C9739462CC925E5BADB_gshared (Queue_1_tABEA5C7CAAB3B865D2F50F23AFA9C9D95DC83722* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_ICollection_get_SyncRoot_mD46079CB05CFD8FB2B7E3F6896206310045E7DE0_gshared (Queue_1_tABEA5C7CAAB3B865D2F50F23AFA9C9D95DC83722* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____syncRoot;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Clear_mAB9086CEDC5F3E4BC550529EDD32CCE551B34D96_gshared (Queue_1_tABEA5C7CAAB3B865D2F50F23AFA9C9D95DC83722* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (!L_0)
		{
			goto IL_006f;
		}
	}
	{
	}
	{
		int32_t L_1 = __this->____head;
		int32_t L_2 = __this->____tail;
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_0036;
		}
	}
	{
		SizeBySpeedModuleU5BU5D_tEF4645160713AF1309F815C4B95C79975BA2D221* L_3 = __this->____array;
		int32_t L_4 = __this->____head;
		int32_t L_5 = __this->____size;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, L_4, L_5, NULL);
		goto IL_0068;
	}

IL_0036:
	{
		SizeBySpeedModuleU5BU5D_tEF4645160713AF1309F815C4B95C79975BA2D221* L_6 = __this->____array;
		int32_t L_7 = __this->____head;
		SizeBySpeedModuleU5BU5D_tEF4645160713AF1309F815C4B95C79975BA2D221* L_8 = __this->____array;
		NullCheck(L_8);
		int32_t L_9 = __this->____head;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_6, L_7, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_8)->max_length)), L_9)), NULL);
		SizeBySpeedModuleU5BU5D_tEF4645160713AF1309F815C4B95C79975BA2D221* L_10 = __this->____array;
		int32_t L_11 = __this->____tail;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_10, 0, L_11, NULL);
	}

IL_0068:
	{
		__this->____size = 0;
	}

IL_006f:
	{
		__this->____head = 0;
		__this->____tail = 0;
		int32_t L_12 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_12, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_System_Collections_ICollection_CopyTo_m5F4F7B4234716597ABAED2503D5C043B2E8AFECA_gshared (Queue_1_tABEA5C7CAAB3B865D2F50F23AFA9C9D95DC83722* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	int32_t G_B17_0 = 0;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeArray* L_2 = ___0_array;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_2, NULL);
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral967D403A541A1026A83D548E5AD5CA800AD4EFB5)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0027:
	{
		RuntimeArray* L_5 = ___0_array;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_5, 0, NULL);
		if (!L_6)
		{
			goto IL_0040;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6195D7DA68D16D4985AD1A1B4FD2841A43CDDE70)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, method);
	}

IL_0040:
	{
		RuntimeArray* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_8, NULL);
		V_0 = L_9;
		int32_t L_10 = ___1_index;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_11 = ___1_index;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) <= ((int32_t)L_12)))
		{
			goto IL_0065;
		}
	}

IL_004f:
	{
		int32_t L_13 = ___1_index;
		int32_t L_14 = L_13;
		RuntimeObject* L_15 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_14);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_16 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_16, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), L_15, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, method);
	}

IL_0065:
	{
		int32_t L_17 = V_0;
		int32_t L_18 = ___1_index;
		int32_t L_19 = __this->____size;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_17, L_18))) >= ((int32_t)L_19)))
		{
			goto IL_007b;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_20 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_20, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, method);
	}

IL_007b:
	{
		int32_t L_21 = __this->____size;
		V_1 = L_21;
		int32_t L_22 = V_1;
		if (L_22)
		{
			goto IL_0086;
		}
	}
	{
		return;
	}

IL_0086:
	{
	}
	try
	{
		{
			SizeBySpeedModuleU5BU5D_tEF4645160713AF1309F815C4B95C79975BA2D221* L_23 = __this->____array;
			NullCheck(L_23);
			int32_t L_24 = __this->____head;
			int32_t L_25 = V_1;
			if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_23)->max_length)), L_24))) < ((int32_t)L_25)))
			{
				goto IL_009c_1;
			}
		}
		{
			int32_t L_26 = V_1;
			G_B17_0 = L_26;
			goto IL_00ab_1;
		}

IL_009c_1:
		{
			SizeBySpeedModuleU5BU5D_tEF4645160713AF1309F815C4B95C79975BA2D221* L_27 = __this->____array;
			NullCheck(L_27);
			int32_t L_28 = __this->____head;
			G_B17_0 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_27)->max_length)), L_28));
		}

IL_00ab_1:
		{
			V_2 = G_B17_0;
			SizeBySpeedModuleU5BU5D_tEF4645160713AF1309F815C4B95C79975BA2D221* L_29 = __this->____array;
			int32_t L_30 = __this->____head;
			RuntimeArray* L_31 = ___0_array;
			int32_t L_32 = ___1_index;
			int32_t L_33 = V_2;
			Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_29, L_30, L_31, L_32, L_33, NULL);
			int32_t L_34 = V_1;
			int32_t L_35 = V_2;
			V_1 = ((int32_t)il2cpp_codegen_subtract(L_34, L_35));
			int32_t L_36 = V_1;
			if ((((int32_t)L_36) <= ((int32_t)0)))
			{
				goto IL_00e7_1;
			}
		}
		{
			SizeBySpeedModuleU5BU5D_tEF4645160713AF1309F815C4B95C79975BA2D221* L_37 = __this->____array;
			RuntimeArray* L_38 = ___0_array;
			int32_t L_39 = ___1_index;
			SizeBySpeedModuleU5BU5D_tEF4645160713AF1309F815C4B95C79975BA2D221* L_40 = __this->____array;
			NullCheck(L_40);
			int32_t L_41 = __this->____head;
			int32_t L_42 = V_1;
			Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_37, 0, L_38, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_39, ((int32_t)(((RuntimeArray*)L_40)->max_length)))), L_41)), L_42, NULL);
		}

IL_00e7_1:
		{
			goto IL_00fa;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00e9;
		}
		throw e;
	}

CATCH_00e9:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_43 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_44 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_44, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBD0381A992FDF4F7DA60E5D83689FE7FF6309CB8)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_44, method);
	}

IL_00fa:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_mFE1CE339A6D9334B4BBFB750F1BBDAA69F6CCE97_gshared (Queue_1_tABEA5C7CAAB3B865D2F50F23AFA9C9D95DC83722* __this, SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4 ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____size;
		SizeBySpeedModuleU5BU5D_tEF4645160713AF1309F815C4B95C79975BA2D221* L_1 = __this->____array;
		NullCheck(L_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))))))
		{
			goto IL_0045;
		}
	}
	{
		SizeBySpeedModuleU5BU5D_tEF4645160713AF1309F815C4B95C79975BA2D221* L_2 = __this->____array;
		NullCheck(L_2);
		V_0 = ((int32_t)((int64_t)(((int64_t)il2cpp_codegen_multiply(((int64_t)((int32_t)(((RuntimeArray*)L_2)->max_length))), ((int64_t)((int32_t)200))))/((int64_t)((int32_t)100)))));
		int32_t L_3 = V_0;
		SizeBySpeedModuleU5BU5D_tEF4645160713AF1309F815C4B95C79975BA2D221* L_4 = __this->____array;
		NullCheck(L_4);
		if ((((int32_t)L_3) >= ((int32_t)((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_4)->max_length)), 4)))))
		{
			goto IL_003e;
		}
	}
	{
		SizeBySpeedModuleU5BU5D_tEF4645160713AF1309F815C4B95C79975BA2D221* L_5 = __this->____array;
		NullCheck(L_5);
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_5)->max_length)), 4));
	}

IL_003e:
	{
		int32_t L_6 = V_0;
		Queue_1_SetCapacity_mF2AC2CA3FB3A64549B30ABD823DAA8FF2D5FEC42(__this, L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
	}

IL_0045:
	{
		SizeBySpeedModuleU5BU5D_tEF4645160713AF1309F815C4B95C79975BA2D221* L_7 = __this->____array;
		int32_t L_8 = __this->____tail;
		SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4 L_9 = ___0_item;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4)L_9);
		int32_t* L_10 = (int32_t*)(&__this->____tail);
		Queue_1_MoveNext_m2B2042DA5BCAADE90BD07D423F1EFDBB886709BC(__this, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		int32_t L_11 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_11, 1));
		int32_t L_12 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_12, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tBC8B7CC2DAC33A9808E0B9D802C51843715F8B57 Queue_1_GetEnumerator_mCBD3924C298BCF0DB68F8647FFD21DC9BDDCB698_gshared (Queue_1_tABEA5C7CAAB3B865D2F50F23AFA9C9D95DC83722* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tBC8B7CC2DAC33A9808E0B9D802C51843715F8B57 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m47741F5A74E3B398EF05B1851CB6FAA53A54EBB8((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m3EF9BAE632340C95A5DD773AF03E1533271796B8_gshared (Queue_1_tABEA5C7CAAB3B865D2F50F23AFA9C9D95DC83722* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tBC8B7CC2DAC33A9808E0B9D802C51843715F8B57 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m47741F5A74E3B398EF05B1851CB6FAA53A54EBB8((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		Enumerator_tBC8B7CC2DAC33A9808E0B9D802C51843715F8B57 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_IEnumerable_GetEnumerator_mE11C41F4DFC8D47DA6037D792DAE53D611CBD774_gshared (Queue_1_tABEA5C7CAAB3B865D2F50F23AFA9C9D95DC83722* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tBC8B7CC2DAC33A9808E0B9D802C51843715F8B57 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m47741F5A74E3B398EF05B1851CB6FAA53A54EBB8((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		Enumerator_tBC8B7CC2DAC33A9808E0B9D802C51843715F8B57 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4 Queue_1_Dequeue_m9E8BFF3C97B2326780FD96250DC7705D6A48C95C_gshared (Queue_1_tABEA5C7CAAB3B865D2F50F23AFA9C9D95DC83722* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	SizeBySpeedModuleU5BU5D_tEF4645160713AF1309F815C4B95C79975BA2D221* V_1 = NULL;
	SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4 V_2;
	memset((&V_2), 0, sizeof(V_2));
	SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4 G_B4_0;
	memset((&G_B4_0), 0, sizeof(G_B4_0));
	SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4 G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		int32_t L_0 = __this->____head;
		V_0 = L_0;
		SizeBySpeedModuleU5BU5D_tEF4645160713AF1309F815C4B95C79975BA2D221* L_1 = __this->____array;
		V_1 = L_1;
		int32_t L_2 = __this->____size;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		Queue_1_ThrowForEmptyQueue_m39E173CC1E5FD7AF2C7907CD7CF099DB4CCCB577(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}

IL_001c:
	{
		SizeBySpeedModuleU5BU5D_tEF4645160713AF1309F815C4B95C79975BA2D221* L_3 = V_1;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4 L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		G_B3_0 = L_6;
	}
	{
		SizeBySpeedModuleU5BU5D_tEF4645160713AF1309F815C4B95C79975BA2D221* L_7 = V_1;
		int32_t L_8 = V_0;
		il2cpp_codegen_initobj((&V_2), sizeof(SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4));
		SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4 L_9 = V_2;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4)L_9);
		G_B4_0 = G_B3_0;
	}

IL_003a:
	{
		int32_t* L_10 = (int32_t*)(&__this->____head);
		Queue_1_MoveNext_m2B2042DA5BCAADE90BD07D423F1EFDBB886709BC(__this, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		int32_t L_11 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
		int32_t L_12 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_12, 1));
		return G_B4_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4 Queue_1_Peek_m77050696DEA3DABF0D9A271A08EBF18A90B5E218_gshared (Queue_1_tABEA5C7CAAB3B865D2F50F23AFA9C9D95DC83722* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		Queue_1_ThrowForEmptyQueue_m39E173CC1E5FD7AF2C7907CD7CF099DB4CCCB577(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}

IL_000e:
	{
		SizeBySpeedModuleU5BU5D_tEF4645160713AF1309F815C4B95C79975BA2D221* L_1 = __this->____array;
		int32_t L_2 = __this->____head;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4 L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SizeBySpeedModuleU5BU5D_tEF4645160713AF1309F815C4B95C79975BA2D221* Queue_1_ToArray_mD708B781EB16B15C9536703AB5825505C2AB7BD3_gshared (Queue_1_tABEA5C7CAAB3B865D2F50F23AFA9C9D95DC83722* __this, const RuntimeMethod* method) 
{
	SizeBySpeedModuleU5BU5D_tEF4645160713AF1309F815C4B95C79975BA2D221* V_0 = NULL;
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		SizeBySpeedModuleU5BU5D_tEF4645160713AF1309F815C4B95C79975BA2D221* L_1;
		L_1 = Array_Empty_TisSizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4_m9AA9EFC539DB7558A084DA01995E1416885100E0_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____size;
		SizeBySpeedModuleU5BU5D_tEF4645160713AF1309F815C4B95C79975BA2D221* L_3 = (SizeBySpeedModuleU5BU5D_tEF4645160713AF1309F815C4B95C79975BA2D221*)(SizeBySpeedModuleU5BU5D_tEF4645160713AF1309F815C4B95C79975BA2D221*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_2);
		V_0 = L_3;
		int32_t L_4 = __this->____head;
		int32_t L_5 = __this->____tail;
		if ((((int32_t)L_4) >= ((int32_t)L_5)))
		{
			goto IL_0043;
		}
	}
	{
		SizeBySpeedModuleU5BU5D_tEF4645160713AF1309F815C4B95C79975BA2D221* L_6 = __this->____array;
		int32_t L_7 = __this->____head;
		SizeBySpeedModuleU5BU5D_tEF4645160713AF1309F815C4B95C79975BA2D221* L_8 = V_0;
		int32_t L_9 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_6, L_7, (RuntimeArray*)L_8, 0, L_9, NULL);
		goto IL_0087;
	}

IL_0043:
	{
		SizeBySpeedModuleU5BU5D_tEF4645160713AF1309F815C4B95C79975BA2D221* L_10 = __this->____array;
		int32_t L_11 = __this->____head;
		SizeBySpeedModuleU5BU5D_tEF4645160713AF1309F815C4B95C79975BA2D221* L_12 = V_0;
		SizeBySpeedModuleU5BU5D_tEF4645160713AF1309F815C4B95C79975BA2D221* L_13 = __this->____array;
		NullCheck(L_13);
		int32_t L_14 = __this->____head;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_10, L_11, (RuntimeArray*)L_12, 0, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_13)->max_length)), L_14)), NULL);
		SizeBySpeedModuleU5BU5D_tEF4645160713AF1309F815C4B95C79975BA2D221* L_15 = __this->____array;
		SizeBySpeedModuleU5BU5D_tEF4645160713AF1309F815C4B95C79975BA2D221* L_16 = V_0;
		SizeBySpeedModuleU5BU5D_tEF4645160713AF1309F815C4B95C79975BA2D221* L_17 = __this->____array;
		NullCheck(L_17);
		int32_t L_18 = __this->____head;
		int32_t L_19 = __this->____tail;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_15, 0, (RuntimeArray*)L_16, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_17)->max_length)), L_18)), L_19, NULL);
	}

IL_0087:
	{
		SizeBySpeedModuleU5BU5D_tEF4645160713AF1309F815C4B95C79975BA2D221* L_20 = V_0;
		return L_20;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_SetCapacity_mF2AC2CA3FB3A64549B30ABD823DAA8FF2D5FEC42_gshared (Queue_1_tABEA5C7CAAB3B865D2F50F23AFA9C9D95DC83722* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	SizeBySpeedModuleU5BU5D_tEF4645160713AF1309F815C4B95C79975BA2D221* V_0 = NULL;
	Queue_1_tABEA5C7CAAB3B865D2F50F23AFA9C9D95DC83722* G_B6_0 = NULL;
	Queue_1_tABEA5C7CAAB3B865D2F50F23AFA9C9D95DC83722* G_B5_0 = NULL;
	int32_t G_B7_0 = 0;
	Queue_1_tABEA5C7CAAB3B865D2F50F23AFA9C9D95DC83722* G_B7_1 = NULL;
	{
		int32_t L_0 = ___0_capacity;
		SizeBySpeedModuleU5BU5D_tEF4645160713AF1309F815C4B95C79975BA2D221* L_1 = (SizeBySpeedModuleU5BU5D_tEF4645160713AF1309F815C4B95C79975BA2D221*)(SizeBySpeedModuleU5BU5D_tEF4645160713AF1309F815C4B95C79975BA2D221*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_007d;
		}
	}
	{
		int32_t L_3 = __this->____head;
		int32_t L_4 = __this->____tail;
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0039;
		}
	}
	{
		SizeBySpeedModuleU5BU5D_tEF4645160713AF1309F815C4B95C79975BA2D221* L_5 = __this->____array;
		int32_t L_6 = __this->____head;
		SizeBySpeedModuleU5BU5D_tEF4645160713AF1309F815C4B95C79975BA2D221* L_7 = V_0;
		int32_t L_8 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, L_6, (RuntimeArray*)L_7, 0, L_8, NULL);
		goto IL_007d;
	}

IL_0039:
	{
		SizeBySpeedModuleU5BU5D_tEF4645160713AF1309F815C4B95C79975BA2D221* L_9 = __this->____array;
		int32_t L_10 = __this->____head;
		SizeBySpeedModuleU5BU5D_tEF4645160713AF1309F815C4B95C79975BA2D221* L_11 = V_0;
		SizeBySpeedModuleU5BU5D_tEF4645160713AF1309F815C4B95C79975BA2D221* L_12 = __this->____array;
		NullCheck(L_12);
		int32_t L_13 = __this->____head;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_9, L_10, (RuntimeArray*)L_11, 0, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_12)->max_length)), L_13)), NULL);
		SizeBySpeedModuleU5BU5D_tEF4645160713AF1309F815C4B95C79975BA2D221* L_14 = __this->____array;
		SizeBySpeedModuleU5BU5D_tEF4645160713AF1309F815C4B95C79975BA2D221* L_15 = V_0;
		SizeBySpeedModuleU5BU5D_tEF4645160713AF1309F815C4B95C79975BA2D221* L_16 = __this->____array;
		NullCheck(L_16);
		int32_t L_17 = __this->____head;
		int32_t L_18 = __this->____tail;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_14, 0, (RuntimeArray*)L_15, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_16)->max_length)), L_17)), L_18, NULL);
	}

IL_007d:
	{
		SizeBySpeedModuleU5BU5D_tEF4645160713AF1309F815C4B95C79975BA2D221* L_19 = V_0;
		__this->____array = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_19);
		__this->____head = 0;
		int32_t L_20 = __this->____size;
		int32_t L_21 = ___0_capacity;
		if ((((int32_t)L_20) == ((int32_t)L_21)))
		{
			G_B6_0 = __this;
			goto IL_009d;
		}
		G_B5_0 = __this;
	}
	{
		int32_t L_22 = __this->____size;
		G_B7_0 = L_22;
		G_B7_1 = G_B5_0;
		goto IL_009e;
	}

IL_009d:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
	}

IL_009e:
	{
		NullCheck(G_B7_1);
		G_B7_1->____tail = G_B7_0;
		int32_t L_23 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_23, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_MoveNext_m2B2042DA5BCAADE90BD07D423F1EFDBB886709BC_gshared (Queue_1_tABEA5C7CAAB3B865D2F50F23AFA9C9D95DC83722* __this, int32_t* ___0_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t* L_0 = ___0_index;
		int32_t L_1 = *((int32_t*)L_0);
		V_0 = ((int32_t)il2cpp_codegen_add(L_1, 1));
		int32_t L_2 = V_0;
		SizeBySpeedModuleU5BU5D_tEF4645160713AF1309F815C4B95C79975BA2D221* L_3 = __this->____array;
		NullCheck(L_3);
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))))
		{
			goto IL_0012;
		}
	}
	{
		V_0 = 0;
	}

IL_0012:
	{
		int32_t* L_4 = ___0_index;
		int32_t L_5 = V_0;
		*((int32_t*)L_4) = (int32_t)L_5;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_ThrowForEmptyQueue_m39E173CC1E5FD7AF2C7907CD7CF099DB4CCCB577_gshared (Queue_1_tABEA5C7CAAB3B865D2F50F23AFA9C9D95DC83722* __this, const RuntimeMethod* method) 
{
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1102619AA6FB2A4AADBDAA47DDC096AE04C772C0)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m15F96D2F85490E73D916057CA891CC3F6FADA533_gshared (Queue_1_t9F5EC60BA20905CF85F0EC6D5CF8CDBA2DDEBF03* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		SizeOverLifetimeModuleU5BU5D_t31052F8FFC4F64017ABA0B123070F572D37A29A3* L_0;
		L_0 = Array_Empty_TisSizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C_m3A84DF47DB367D4CDF792D5F7DF11100A974F13D_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		__this->____array = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_mF794855E43E16FD17672CDF690762592002FA191_gshared (Queue_1_t9F5EC60BA20905CF85F0EC6D5CF8CDBA2DDEBF03* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_1 = ___0_capacity;
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_2);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_4 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC37D78082ACFC8DEE7B32D9351C6E433A074FEC7)), L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0020:
	{
		int32_t L_5 = ___0_capacity;
		SizeOverLifetimeModuleU5BU5D_t31052F8FFC4F64017ABA0B123070F572D37A29A3* L_6 = (SizeOverLifetimeModuleU5BU5D_t31052F8FFC4F64017ABA0B123070F572D37A29A3*)(SizeOverLifetimeModuleU5BU5D_t31052F8FFC4F64017ABA0B123070F572D37A29A3*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_5);
		__this->____array = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_6);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_m647346BA228E0A930FC92D054A74B6CDD4BA3845_gshared (Queue_1_t9F5EC60BA20905CF85F0EC6D5CF8CDBA2DDEBF03* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_System_Collections_ICollection_get_IsSynchronized_mE7C0F17AF0CD506E6FD84F554E4EFC24CB1F53B7_gshared (Queue_1_t9F5EC60BA20905CF85F0EC6D5CF8CDBA2DDEBF03* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_ICollection_get_SyncRoot_m9662B2969176B9AC233880481A71B24852374D53_gshared (Queue_1_t9F5EC60BA20905CF85F0EC6D5CF8CDBA2DDEBF03* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____syncRoot;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Clear_m837254C7B1BD3A07CF40125B46A53125E442E64A_gshared (Queue_1_t9F5EC60BA20905CF85F0EC6D5CF8CDBA2DDEBF03* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (!L_0)
		{
			goto IL_006f;
		}
	}
	{
	}
	{
		int32_t L_1 = __this->____head;
		int32_t L_2 = __this->____tail;
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_0036;
		}
	}
	{
		SizeOverLifetimeModuleU5BU5D_t31052F8FFC4F64017ABA0B123070F572D37A29A3* L_3 = __this->____array;
		int32_t L_4 = __this->____head;
		int32_t L_5 = __this->____size;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, L_4, L_5, NULL);
		goto IL_0068;
	}

IL_0036:
	{
		SizeOverLifetimeModuleU5BU5D_t31052F8FFC4F64017ABA0B123070F572D37A29A3* L_6 = __this->____array;
		int32_t L_7 = __this->____head;
		SizeOverLifetimeModuleU5BU5D_t31052F8FFC4F64017ABA0B123070F572D37A29A3* L_8 = __this->____array;
		NullCheck(L_8);
		int32_t L_9 = __this->____head;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_6, L_7, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_8)->max_length)), L_9)), NULL);
		SizeOverLifetimeModuleU5BU5D_t31052F8FFC4F64017ABA0B123070F572D37A29A3* L_10 = __this->____array;
		int32_t L_11 = __this->____tail;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_10, 0, L_11, NULL);
	}

IL_0068:
	{
		__this->____size = 0;
	}

IL_006f:
	{
		__this->____head = 0;
		__this->____tail = 0;
		int32_t L_12 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_12, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_System_Collections_ICollection_CopyTo_m5EE47D56859EFE4495676568F360F3356BEDBEDD_gshared (Queue_1_t9F5EC60BA20905CF85F0EC6D5CF8CDBA2DDEBF03* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	int32_t G_B17_0 = 0;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeArray* L_2 = ___0_array;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_2, NULL);
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral967D403A541A1026A83D548E5AD5CA800AD4EFB5)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0027:
	{
		RuntimeArray* L_5 = ___0_array;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_5, 0, NULL);
		if (!L_6)
		{
			goto IL_0040;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6195D7DA68D16D4985AD1A1B4FD2841A43CDDE70)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, method);
	}

IL_0040:
	{
		RuntimeArray* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_8, NULL);
		V_0 = L_9;
		int32_t L_10 = ___1_index;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_11 = ___1_index;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) <= ((int32_t)L_12)))
		{
			goto IL_0065;
		}
	}

IL_004f:
	{
		int32_t L_13 = ___1_index;
		int32_t L_14 = L_13;
		RuntimeObject* L_15 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_14);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_16 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_16, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), L_15, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, method);
	}

IL_0065:
	{
		int32_t L_17 = V_0;
		int32_t L_18 = ___1_index;
		int32_t L_19 = __this->____size;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_17, L_18))) >= ((int32_t)L_19)))
		{
			goto IL_007b;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_20 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_20, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, method);
	}

IL_007b:
	{
		int32_t L_21 = __this->____size;
		V_1 = L_21;
		int32_t L_22 = V_1;
		if (L_22)
		{
			goto IL_0086;
		}
	}
	{
		return;
	}

IL_0086:
	{
	}
	try
	{
		{
			SizeOverLifetimeModuleU5BU5D_t31052F8FFC4F64017ABA0B123070F572D37A29A3* L_23 = __this->____array;
			NullCheck(L_23);
			int32_t L_24 = __this->____head;
			int32_t L_25 = V_1;
			if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_23)->max_length)), L_24))) < ((int32_t)L_25)))
			{
				goto IL_009c_1;
			}
		}
		{
			int32_t L_26 = V_1;
			G_B17_0 = L_26;
			goto IL_00ab_1;
		}

IL_009c_1:
		{
			SizeOverLifetimeModuleU5BU5D_t31052F8FFC4F64017ABA0B123070F572D37A29A3* L_27 = __this->____array;
			NullCheck(L_27);
			int32_t L_28 = __this->____head;
			G_B17_0 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_27)->max_length)), L_28));
		}

IL_00ab_1:
		{
			V_2 = G_B17_0;
			SizeOverLifetimeModuleU5BU5D_t31052F8FFC4F64017ABA0B123070F572D37A29A3* L_29 = __this->____array;
			int32_t L_30 = __this->____head;
			RuntimeArray* L_31 = ___0_array;
			int32_t L_32 = ___1_index;
			int32_t L_33 = V_2;
			Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_29, L_30, L_31, L_32, L_33, NULL);
			int32_t L_34 = V_1;
			int32_t L_35 = V_2;
			V_1 = ((int32_t)il2cpp_codegen_subtract(L_34, L_35));
			int32_t L_36 = V_1;
			if ((((int32_t)L_36) <= ((int32_t)0)))
			{
				goto IL_00e7_1;
			}
		}
		{
			SizeOverLifetimeModuleU5BU5D_t31052F8FFC4F64017ABA0B123070F572D37A29A3* L_37 = __this->____array;
			RuntimeArray* L_38 = ___0_array;
			int32_t L_39 = ___1_index;
			SizeOverLifetimeModuleU5BU5D_t31052F8FFC4F64017ABA0B123070F572D37A29A3* L_40 = __this->____array;
			NullCheck(L_40);
			int32_t L_41 = __this->____head;
			int32_t L_42 = V_1;
			Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_37, 0, L_38, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_39, ((int32_t)(((RuntimeArray*)L_40)->max_length)))), L_41)), L_42, NULL);
		}

IL_00e7_1:
		{
			goto IL_00fa;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00e9;
		}
		throw e;
	}

CATCH_00e9:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_43 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_44 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_44, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBD0381A992FDF4F7DA60E5D83689FE7FF6309CB8)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_44, method);
	}

IL_00fa:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_mFF443B647939DD13F5E5D64DAC9C462A98886F40_gshared (Queue_1_t9F5EC60BA20905CF85F0EC6D5CF8CDBA2DDEBF03* __this, SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____size;
		SizeOverLifetimeModuleU5BU5D_t31052F8FFC4F64017ABA0B123070F572D37A29A3* L_1 = __this->____array;
		NullCheck(L_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))))))
		{
			goto IL_0045;
		}
	}
	{
		SizeOverLifetimeModuleU5BU5D_t31052F8FFC4F64017ABA0B123070F572D37A29A3* L_2 = __this->____array;
		NullCheck(L_2);
		V_0 = ((int32_t)((int64_t)(((int64_t)il2cpp_codegen_multiply(((int64_t)((int32_t)(((RuntimeArray*)L_2)->max_length))), ((int64_t)((int32_t)200))))/((int64_t)((int32_t)100)))));
		int32_t L_3 = V_0;
		SizeOverLifetimeModuleU5BU5D_t31052F8FFC4F64017ABA0B123070F572D37A29A3* L_4 = __this->____array;
		NullCheck(L_4);
		if ((((int32_t)L_3) >= ((int32_t)((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_4)->max_length)), 4)))))
		{
			goto IL_003e;
		}
	}
	{
		SizeOverLifetimeModuleU5BU5D_t31052F8FFC4F64017ABA0B123070F572D37A29A3* L_5 = __this->____array;
		NullCheck(L_5);
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_5)->max_length)), 4));
	}

IL_003e:
	{
		int32_t L_6 = V_0;
		Queue_1_SetCapacity_m9165403F0F0F7767662F23A1A6235E06D807D5CF(__this, L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
	}

IL_0045:
	{
		SizeOverLifetimeModuleU5BU5D_t31052F8FFC4F64017ABA0B123070F572D37A29A3* L_7 = __this->____array;
		int32_t L_8 = __this->____tail;
		SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C L_9 = ___0_item;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C)L_9);
		int32_t* L_10 = (int32_t*)(&__this->____tail);
		Queue_1_MoveNext_mE0C43CFEDDCD3B1D18F295FCE3F00C8C3595A990(__this, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		int32_t L_11 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_11, 1));
		int32_t L_12 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_12, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tBDEE937DC978007344F2C66A05E9710AB09A2920 Queue_1_GetEnumerator_m297B6AA1DBA254A14E60D66C8CC48BC1F5F0CFDA_gshared (Queue_1_t9F5EC60BA20905CF85F0EC6D5CF8CDBA2DDEBF03* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tBDEE937DC978007344F2C66A05E9710AB09A2920 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mE8EEF8C22FFFEF87157D2F38BC4B159A53642253((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_mFB45EAFBE264E3B010C46274B03B5620A04618A4_gshared (Queue_1_t9F5EC60BA20905CF85F0EC6D5CF8CDBA2DDEBF03* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tBDEE937DC978007344F2C66A05E9710AB09A2920 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mE8EEF8C22FFFEF87157D2F38BC4B159A53642253((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		Enumerator_tBDEE937DC978007344F2C66A05E9710AB09A2920 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_IEnumerable_GetEnumerator_mF6DF1CF61836F6111A931D3FA1087667CFF40102_gshared (Queue_1_t9F5EC60BA20905CF85F0EC6D5CF8CDBA2DDEBF03* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tBDEE937DC978007344F2C66A05E9710AB09A2920 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mE8EEF8C22FFFEF87157D2F38BC4B159A53642253((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		Enumerator_tBDEE937DC978007344F2C66A05E9710AB09A2920 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C Queue_1_Dequeue_m6EA82707456AB309708639323071E0DAEB1A5B0C_gshared (Queue_1_t9F5EC60BA20905CF85F0EC6D5CF8CDBA2DDEBF03* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	SizeOverLifetimeModuleU5BU5D_t31052F8FFC4F64017ABA0B123070F572D37A29A3* V_1 = NULL;
	SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C V_2;
	memset((&V_2), 0, sizeof(V_2));
	SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C G_B4_0;
	memset((&G_B4_0), 0, sizeof(G_B4_0));
	SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		int32_t L_0 = __this->____head;
		V_0 = L_0;
		SizeOverLifetimeModuleU5BU5D_t31052F8FFC4F64017ABA0B123070F572D37A29A3* L_1 = __this->____array;
		V_1 = L_1;
		int32_t L_2 = __this->____size;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		Queue_1_ThrowForEmptyQueue_m16D5601251C9383B03A20BE5B267E9AC2CC6A304(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}

IL_001c:
	{
		SizeOverLifetimeModuleU5BU5D_t31052F8FFC4F64017ABA0B123070F572D37A29A3* L_3 = V_1;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		G_B3_0 = L_6;
	}
	{
		SizeOverLifetimeModuleU5BU5D_t31052F8FFC4F64017ABA0B123070F572D37A29A3* L_7 = V_1;
		int32_t L_8 = V_0;
		il2cpp_codegen_initobj((&V_2), sizeof(SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C));
		SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C L_9 = V_2;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C)L_9);
		G_B4_0 = G_B3_0;
	}

IL_003a:
	{
		int32_t* L_10 = (int32_t*)(&__this->____head);
		Queue_1_MoveNext_mE0C43CFEDDCD3B1D18F295FCE3F00C8C3595A990(__this, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		int32_t L_11 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
		int32_t L_12 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_12, 1));
		return G_B4_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C Queue_1_Peek_m11DBB04669C9B10892F0A851DF88989399969C63_gshared (Queue_1_t9F5EC60BA20905CF85F0EC6D5CF8CDBA2DDEBF03* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		Queue_1_ThrowForEmptyQueue_m16D5601251C9383B03A20BE5B267E9AC2CC6A304(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}

IL_000e:
	{
		SizeOverLifetimeModuleU5BU5D_t31052F8FFC4F64017ABA0B123070F572D37A29A3* L_1 = __this->____array;
		int32_t L_2 = __this->____head;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SizeOverLifetimeModuleU5BU5D_t31052F8FFC4F64017ABA0B123070F572D37A29A3* Queue_1_ToArray_mDEAD4F7E738F4E93C3025CC33DDAD96FD17D2966_gshared (Queue_1_t9F5EC60BA20905CF85F0EC6D5CF8CDBA2DDEBF03* __this, const RuntimeMethod* method) 
{
	SizeOverLifetimeModuleU5BU5D_t31052F8FFC4F64017ABA0B123070F572D37A29A3* V_0 = NULL;
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		SizeOverLifetimeModuleU5BU5D_t31052F8FFC4F64017ABA0B123070F572D37A29A3* L_1;
		L_1 = Array_Empty_TisSizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C_m3A84DF47DB367D4CDF792D5F7DF11100A974F13D_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____size;
		SizeOverLifetimeModuleU5BU5D_t31052F8FFC4F64017ABA0B123070F572D37A29A3* L_3 = (SizeOverLifetimeModuleU5BU5D_t31052F8FFC4F64017ABA0B123070F572D37A29A3*)(SizeOverLifetimeModuleU5BU5D_t31052F8FFC4F64017ABA0B123070F572D37A29A3*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_2);
		V_0 = L_3;
		int32_t L_4 = __this->____head;
		int32_t L_5 = __this->____tail;
		if ((((int32_t)L_4) >= ((int32_t)L_5)))
		{
			goto IL_0043;
		}
	}
	{
		SizeOverLifetimeModuleU5BU5D_t31052F8FFC4F64017ABA0B123070F572D37A29A3* L_6 = __this->____array;
		int32_t L_7 = __this->____head;
		SizeOverLifetimeModuleU5BU5D_t31052F8FFC4F64017ABA0B123070F572D37A29A3* L_8 = V_0;
		int32_t L_9 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_6, L_7, (RuntimeArray*)L_8, 0, L_9, NULL);
		goto IL_0087;
	}

IL_0043:
	{
		SizeOverLifetimeModuleU5BU5D_t31052F8FFC4F64017ABA0B123070F572D37A29A3* L_10 = __this->____array;
		int32_t L_11 = __this->____head;
		SizeOverLifetimeModuleU5BU5D_t31052F8FFC4F64017ABA0B123070F572D37A29A3* L_12 = V_0;
		SizeOverLifetimeModuleU5BU5D_t31052F8FFC4F64017ABA0B123070F572D37A29A3* L_13 = __this->____array;
		NullCheck(L_13);
		int32_t L_14 = __this->____head;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_10, L_11, (RuntimeArray*)L_12, 0, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_13)->max_length)), L_14)), NULL);
		SizeOverLifetimeModuleU5BU5D_t31052F8FFC4F64017ABA0B123070F572D37A29A3* L_15 = __this->____array;
		SizeOverLifetimeModuleU5BU5D_t31052F8FFC4F64017ABA0B123070F572D37A29A3* L_16 = V_0;
		SizeOverLifetimeModuleU5BU5D_t31052F8FFC4F64017ABA0B123070F572D37A29A3* L_17 = __this->____array;
		NullCheck(L_17);
		int32_t L_18 = __this->____head;
		int32_t L_19 = __this->____tail;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_15, 0, (RuntimeArray*)L_16, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_17)->max_length)), L_18)), L_19, NULL);
	}

IL_0087:
	{
		SizeOverLifetimeModuleU5BU5D_t31052F8FFC4F64017ABA0B123070F572D37A29A3* L_20 = V_0;
		return L_20;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_SetCapacity_m9165403F0F0F7767662F23A1A6235E06D807D5CF_gshared (Queue_1_t9F5EC60BA20905CF85F0EC6D5CF8CDBA2DDEBF03* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	SizeOverLifetimeModuleU5BU5D_t31052F8FFC4F64017ABA0B123070F572D37A29A3* V_0 = NULL;
	Queue_1_t9F5EC60BA20905CF85F0EC6D5CF8CDBA2DDEBF03* G_B6_0 = NULL;
	Queue_1_t9F5EC60BA20905CF85F0EC6D5CF8CDBA2DDEBF03* G_B5_0 = NULL;
	int32_t G_B7_0 = 0;
	Queue_1_t9F5EC60BA20905CF85F0EC6D5CF8CDBA2DDEBF03* G_B7_1 = NULL;
	{
		int32_t L_0 = ___0_capacity;
		SizeOverLifetimeModuleU5BU5D_t31052F8FFC4F64017ABA0B123070F572D37A29A3* L_1 = (SizeOverLifetimeModuleU5BU5D_t31052F8FFC4F64017ABA0B123070F572D37A29A3*)(SizeOverLifetimeModuleU5BU5D_t31052F8FFC4F64017ABA0B123070F572D37A29A3*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_007d;
		}
	}
	{
		int32_t L_3 = __this->____head;
		int32_t L_4 = __this->____tail;
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0039;
		}
	}
	{
		SizeOverLifetimeModuleU5BU5D_t31052F8FFC4F64017ABA0B123070F572D37A29A3* L_5 = __this->____array;
		int32_t L_6 = __this->____head;
		SizeOverLifetimeModuleU5BU5D_t31052F8FFC4F64017ABA0B123070F572D37A29A3* L_7 = V_0;
		int32_t L_8 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, L_6, (RuntimeArray*)L_7, 0, L_8, NULL);
		goto IL_007d;
	}

IL_0039:
	{
		SizeOverLifetimeModuleU5BU5D_t31052F8FFC4F64017ABA0B123070F572D37A29A3* L_9 = __this->____array;
		int32_t L_10 = __this->____head;
		SizeOverLifetimeModuleU5BU5D_t31052F8FFC4F64017ABA0B123070F572D37A29A3* L_11 = V_0;
		SizeOverLifetimeModuleU5BU5D_t31052F8FFC4F64017ABA0B123070F572D37A29A3* L_12 = __this->____array;
		NullCheck(L_12);
		int32_t L_13 = __this->____head;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_9, L_10, (RuntimeArray*)L_11, 0, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_12)->max_length)), L_13)), NULL);
		SizeOverLifetimeModuleU5BU5D_t31052F8FFC4F64017ABA0B123070F572D37A29A3* L_14 = __this->____array;
		SizeOverLifetimeModuleU5BU5D_t31052F8FFC4F64017ABA0B123070F572D37A29A3* L_15 = V_0;
		SizeOverLifetimeModuleU5BU5D_t31052F8FFC4F64017ABA0B123070F572D37A29A3* L_16 = __this->____array;
		NullCheck(L_16);
		int32_t L_17 = __this->____head;
		int32_t L_18 = __this->____tail;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_14, 0, (RuntimeArray*)L_15, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_16)->max_length)), L_17)), L_18, NULL);
	}

IL_007d:
	{
		SizeOverLifetimeModuleU5BU5D_t31052F8FFC4F64017ABA0B123070F572D37A29A3* L_19 = V_0;
		__this->____array = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_19);
		__this->____head = 0;
		int32_t L_20 = __this->____size;
		int32_t L_21 = ___0_capacity;
		if ((((int32_t)L_20) == ((int32_t)L_21)))
		{
			G_B6_0 = __this;
			goto IL_009d;
		}
		G_B5_0 = __this;
	}
	{
		int32_t L_22 = __this->____size;
		G_B7_0 = L_22;
		G_B7_1 = G_B5_0;
		goto IL_009e;
	}

IL_009d:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
	}

IL_009e:
	{
		NullCheck(G_B7_1);
		G_B7_1->____tail = G_B7_0;
		int32_t L_23 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_23, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_MoveNext_mE0C43CFEDDCD3B1D18F295FCE3F00C8C3595A990_gshared (Queue_1_t9F5EC60BA20905CF85F0EC6D5CF8CDBA2DDEBF03* __this, int32_t* ___0_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t* L_0 = ___0_index;
		int32_t L_1 = *((int32_t*)L_0);
		V_0 = ((int32_t)il2cpp_codegen_add(L_1, 1));
		int32_t L_2 = V_0;
		SizeOverLifetimeModuleU5BU5D_t31052F8FFC4F64017ABA0B123070F572D37A29A3* L_3 = __this->____array;
		NullCheck(L_3);
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))))
		{
			goto IL_0012;
		}
	}
	{
		V_0 = 0;
	}

IL_0012:
	{
		int32_t* L_4 = ___0_index;
		int32_t L_5 = V_0;
		*((int32_t*)L_4) = (int32_t)L_5;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_ThrowForEmptyQueue_m16D5601251C9383B03A20BE5B267E9AC2CC6A304_gshared (Queue_1_t9F5EC60BA20905CF85F0EC6D5CF8CDBA2DDEBF03* __this, const RuntimeMethod* method) 
{
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1102619AA6FB2A4AADBDAA47DDC096AE04C772C0)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m709CB1CD1F793D44AF329E2235CE5452B8008A21_gshared (Queue_1_t729B9C657F6A9ECE0085BB5615128913418843BC* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		SubEmittersModuleU5BU5D_t0F0D2688875FC82644111B1ECCC27FA6B775A483* L_0;
		L_0 = Array_Empty_TisSubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B_m68BA68C658B6882B6E960B75E942EA462D773B90_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		__this->____array = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_mB21813C25DFAA14D9CBCF4F6CD43CCA69C36C06E_gshared (Queue_1_t729B9C657F6A9ECE0085BB5615128913418843BC* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_1 = ___0_capacity;
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_2);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_4 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC37D78082ACFC8DEE7B32D9351C6E433A074FEC7)), L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0020:
	{
		int32_t L_5 = ___0_capacity;
		SubEmittersModuleU5BU5D_t0F0D2688875FC82644111B1ECCC27FA6B775A483* L_6 = (SubEmittersModuleU5BU5D_t0F0D2688875FC82644111B1ECCC27FA6B775A483*)(SubEmittersModuleU5BU5D_t0F0D2688875FC82644111B1ECCC27FA6B775A483*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_5);
		__this->____array = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_6);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_mAC9233AA31DA8151234EEF8A52C05B390B93CB3C_gshared (Queue_1_t729B9C657F6A9ECE0085BB5615128913418843BC* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_System_Collections_ICollection_get_IsSynchronized_m69438EC10E4ABA04B76B296EAA112863C78C66FD_gshared (Queue_1_t729B9C657F6A9ECE0085BB5615128913418843BC* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_ICollection_get_SyncRoot_m3B7E4A3758D6B511F4DC75547024A1027EE80672_gshared (Queue_1_t729B9C657F6A9ECE0085BB5615128913418843BC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____syncRoot;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Clear_m20AA94ADA3F4FC2E625AE1BD11E27E913B502A7B_gshared (Queue_1_t729B9C657F6A9ECE0085BB5615128913418843BC* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (!L_0)
		{
			goto IL_006f;
		}
	}
	{
	}
	{
		int32_t L_1 = __this->____head;
		int32_t L_2 = __this->____tail;
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_0036;
		}
	}
	{
		SubEmittersModuleU5BU5D_t0F0D2688875FC82644111B1ECCC27FA6B775A483* L_3 = __this->____array;
		int32_t L_4 = __this->____head;
		int32_t L_5 = __this->____size;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, L_4, L_5, NULL);
		goto IL_0068;
	}

IL_0036:
	{
		SubEmittersModuleU5BU5D_t0F0D2688875FC82644111B1ECCC27FA6B775A483* L_6 = __this->____array;
		int32_t L_7 = __this->____head;
		SubEmittersModuleU5BU5D_t0F0D2688875FC82644111B1ECCC27FA6B775A483* L_8 = __this->____array;
		NullCheck(L_8);
		int32_t L_9 = __this->____head;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_6, L_7, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_8)->max_length)), L_9)), NULL);
		SubEmittersModuleU5BU5D_t0F0D2688875FC82644111B1ECCC27FA6B775A483* L_10 = __this->____array;
		int32_t L_11 = __this->____tail;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_10, 0, L_11, NULL);
	}

IL_0068:
	{
		__this->____size = 0;
	}

IL_006f:
	{
		__this->____head = 0;
		__this->____tail = 0;
		int32_t L_12 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_12, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_System_Collections_ICollection_CopyTo_m3233C284708BFFD1DF0749763D4EEA5920973BB6_gshared (Queue_1_t729B9C657F6A9ECE0085BB5615128913418843BC* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	int32_t G_B17_0 = 0;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeArray* L_2 = ___0_array;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_2, NULL);
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral967D403A541A1026A83D548E5AD5CA800AD4EFB5)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0027:
	{
		RuntimeArray* L_5 = ___0_array;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_5, 0, NULL);
		if (!L_6)
		{
			goto IL_0040;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6195D7DA68D16D4985AD1A1B4FD2841A43CDDE70)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, method);
	}

IL_0040:
	{
		RuntimeArray* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_8, NULL);
		V_0 = L_9;
		int32_t L_10 = ___1_index;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_11 = ___1_index;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) <= ((int32_t)L_12)))
		{
			goto IL_0065;
		}
	}

IL_004f:
	{
		int32_t L_13 = ___1_index;
		int32_t L_14 = L_13;
		RuntimeObject* L_15 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_14);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_16 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_16, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), L_15, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, method);
	}

IL_0065:
	{
		int32_t L_17 = V_0;
		int32_t L_18 = ___1_index;
		int32_t L_19 = __this->____size;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_17, L_18))) >= ((int32_t)L_19)))
		{
			goto IL_007b;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_20 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_20, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, method);
	}

IL_007b:
	{
		int32_t L_21 = __this->____size;
		V_1 = L_21;
		int32_t L_22 = V_1;
		if (L_22)
		{
			goto IL_0086;
		}
	}
	{
		return;
	}

IL_0086:
	{
	}
	try
	{
		{
			SubEmittersModuleU5BU5D_t0F0D2688875FC82644111B1ECCC27FA6B775A483* L_23 = __this->____array;
			NullCheck(L_23);
			int32_t L_24 = __this->____head;
			int32_t L_25 = V_1;
			if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_23)->max_length)), L_24))) < ((int32_t)L_25)))
			{
				goto IL_009c_1;
			}
		}
		{
			int32_t L_26 = V_1;
			G_B17_0 = L_26;
			goto IL_00ab_1;
		}

IL_009c_1:
		{
			SubEmittersModuleU5BU5D_t0F0D2688875FC82644111B1ECCC27FA6B775A483* L_27 = __this->____array;
			NullCheck(L_27);
			int32_t L_28 = __this->____head;
			G_B17_0 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_27)->max_length)), L_28));
		}

IL_00ab_1:
		{
			V_2 = G_B17_0;
			SubEmittersModuleU5BU5D_t0F0D2688875FC82644111B1ECCC27FA6B775A483* L_29 = __this->____array;
			int32_t L_30 = __this->____head;
			RuntimeArray* L_31 = ___0_array;
			int32_t L_32 = ___1_index;
			int32_t L_33 = V_2;
			Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_29, L_30, L_31, L_32, L_33, NULL);
			int32_t L_34 = V_1;
			int32_t L_35 = V_2;
			V_1 = ((int32_t)il2cpp_codegen_subtract(L_34, L_35));
			int32_t L_36 = V_1;
			if ((((int32_t)L_36) <= ((int32_t)0)))
			{
				goto IL_00e7_1;
			}
		}
		{
			SubEmittersModuleU5BU5D_t0F0D2688875FC82644111B1ECCC27FA6B775A483* L_37 = __this->____array;
			RuntimeArray* L_38 = ___0_array;
			int32_t L_39 = ___1_index;
			SubEmittersModuleU5BU5D_t0F0D2688875FC82644111B1ECCC27FA6B775A483* L_40 = __this->____array;
			NullCheck(L_40);
			int32_t L_41 = __this->____head;
			int32_t L_42 = V_1;
			Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_37, 0, L_38, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_39, ((int32_t)(((RuntimeArray*)L_40)->max_length)))), L_41)), L_42, NULL);
		}

IL_00e7_1:
		{
			goto IL_00fa;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00e9;
		}
		throw e;
	}

CATCH_00e9:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_43 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_44 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_44, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBD0381A992FDF4F7DA60E5D83689FE7FF6309CB8)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_44, method);
	}

IL_00fa:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_m8771A1C4CFCEDFD8E8551262A52B8A4F85937029_gshared (Queue_1_t729B9C657F6A9ECE0085BB5615128913418843BC* __this, SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____size;
		SubEmittersModuleU5BU5D_t0F0D2688875FC82644111B1ECCC27FA6B775A483* L_1 = __this->____array;
		NullCheck(L_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))))))
		{
			goto IL_0045;
		}
	}
	{
		SubEmittersModuleU5BU5D_t0F0D2688875FC82644111B1ECCC27FA6B775A483* L_2 = __this->____array;
		NullCheck(L_2);
		V_0 = ((int32_t)((int64_t)(((int64_t)il2cpp_codegen_multiply(((int64_t)((int32_t)(((RuntimeArray*)L_2)->max_length))), ((int64_t)((int32_t)200))))/((int64_t)((int32_t)100)))));
		int32_t L_3 = V_0;
		SubEmittersModuleU5BU5D_t0F0D2688875FC82644111B1ECCC27FA6B775A483* L_4 = __this->____array;
		NullCheck(L_4);
		if ((((int32_t)L_3) >= ((int32_t)((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_4)->max_length)), 4)))))
		{
			goto IL_003e;
		}
	}
	{
		SubEmittersModuleU5BU5D_t0F0D2688875FC82644111B1ECCC27FA6B775A483* L_5 = __this->____array;
		NullCheck(L_5);
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_5)->max_length)), 4));
	}

IL_003e:
	{
		int32_t L_6 = V_0;
		Queue_1_SetCapacity_m6B2C5C5826028020475F98EF83010A8CC0EF0594(__this, L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
	}

IL_0045:
	{
		SubEmittersModuleU5BU5D_t0F0D2688875FC82644111B1ECCC27FA6B775A483* L_7 = __this->____array;
		int32_t L_8 = __this->____tail;
		SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B L_9 = ___0_item;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B)L_9);
		int32_t* L_10 = (int32_t*)(&__this->____tail);
		Queue_1_MoveNext_mA7612B3642C784E094FEA6B2020E32C4953D8BEF(__this, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		int32_t L_11 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_11, 1));
		int32_t L_12 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_12, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tC101FE0399B2E5BB3E7512B286064A26F42F6696 Queue_1_GetEnumerator_m97A1862FDC53ED835E6C7A3656DD72307E16E6F1_gshared (Queue_1_t729B9C657F6A9ECE0085BB5615128913418843BC* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tC101FE0399B2E5BB3E7512B286064A26F42F6696 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mDB06CA75CE220B7F13D93F64A0AC031FE16E1376((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_mE0C3DFF036CFAFC447EA79DBDCDE62647E8A14DE_gshared (Queue_1_t729B9C657F6A9ECE0085BB5615128913418843BC* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tC101FE0399B2E5BB3E7512B286064A26F42F6696 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mDB06CA75CE220B7F13D93F64A0AC031FE16E1376((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		Enumerator_tC101FE0399B2E5BB3E7512B286064A26F42F6696 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_IEnumerable_GetEnumerator_m0518B641E160F0D248F188F7E802B0E47D839F70_gshared (Queue_1_t729B9C657F6A9ECE0085BB5615128913418843BC* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tC101FE0399B2E5BB3E7512B286064A26F42F6696 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mDB06CA75CE220B7F13D93F64A0AC031FE16E1376((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		Enumerator_tC101FE0399B2E5BB3E7512B286064A26F42F6696 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B Queue_1_Dequeue_mB55AC7AC44ED1698C5D06C655D8F65013597132D_gshared (Queue_1_t729B9C657F6A9ECE0085BB5615128913418843BC* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	SubEmittersModuleU5BU5D_t0F0D2688875FC82644111B1ECCC27FA6B775A483* V_1 = NULL;
	SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B V_2;
	memset((&V_2), 0, sizeof(V_2));
	SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B G_B4_0;
	memset((&G_B4_0), 0, sizeof(G_B4_0));
	SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		int32_t L_0 = __this->____head;
		V_0 = L_0;
		SubEmittersModuleU5BU5D_t0F0D2688875FC82644111B1ECCC27FA6B775A483* L_1 = __this->____array;
		V_1 = L_1;
		int32_t L_2 = __this->____size;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		Queue_1_ThrowForEmptyQueue_m762921511DDCF44E074EB355C146B5ACEE6E9192(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}

IL_001c:
	{
		SubEmittersModuleU5BU5D_t0F0D2688875FC82644111B1ECCC27FA6B775A483* L_3 = V_1;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		G_B3_0 = L_6;
	}
	{
		SubEmittersModuleU5BU5D_t0F0D2688875FC82644111B1ECCC27FA6B775A483* L_7 = V_1;
		int32_t L_8 = V_0;
		il2cpp_codegen_initobj((&V_2), sizeof(SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B));
		SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B L_9 = V_2;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B)L_9);
		G_B4_0 = G_B3_0;
	}

IL_003a:
	{
		int32_t* L_10 = (int32_t*)(&__this->____head);
		Queue_1_MoveNext_mA7612B3642C784E094FEA6B2020E32C4953D8BEF(__this, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		int32_t L_11 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
		int32_t L_12 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_12, 1));
		return G_B4_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B Queue_1_Peek_m9227A3C6CA723F9CA5FF243832E10E68B1D9E337_gshared (Queue_1_t729B9C657F6A9ECE0085BB5615128913418843BC* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		Queue_1_ThrowForEmptyQueue_m762921511DDCF44E074EB355C146B5ACEE6E9192(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}

IL_000e:
	{
		SubEmittersModuleU5BU5D_t0F0D2688875FC82644111B1ECCC27FA6B775A483* L_1 = __this->____array;
		int32_t L_2 = __this->____head;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SubEmittersModuleU5BU5D_t0F0D2688875FC82644111B1ECCC27FA6B775A483* Queue_1_ToArray_m345DB4A36A2B8F3E1A62329962969976DD811F0B_gshared (Queue_1_t729B9C657F6A9ECE0085BB5615128913418843BC* __this, const RuntimeMethod* method) 
{
	SubEmittersModuleU5BU5D_t0F0D2688875FC82644111B1ECCC27FA6B775A483* V_0 = NULL;
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		SubEmittersModuleU5BU5D_t0F0D2688875FC82644111B1ECCC27FA6B775A483* L_1;
		L_1 = Array_Empty_TisSubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B_m68BA68C658B6882B6E960B75E942EA462D773B90_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____size;
		SubEmittersModuleU5BU5D_t0F0D2688875FC82644111B1ECCC27FA6B775A483* L_3 = (SubEmittersModuleU5BU5D_t0F0D2688875FC82644111B1ECCC27FA6B775A483*)(SubEmittersModuleU5BU5D_t0F0D2688875FC82644111B1ECCC27FA6B775A483*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_2);
		V_0 = L_3;
		int32_t L_4 = __this->____head;
		int32_t L_5 = __this->____tail;
		if ((((int32_t)L_4) >= ((int32_t)L_5)))
		{
			goto IL_0043;
		}
	}
	{
		SubEmittersModuleU5BU5D_t0F0D2688875FC82644111B1ECCC27FA6B775A483* L_6 = __this->____array;
		int32_t L_7 = __this->____head;
		SubEmittersModuleU5BU5D_t0F0D2688875FC82644111B1ECCC27FA6B775A483* L_8 = V_0;
		int32_t L_9 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_6, L_7, (RuntimeArray*)L_8, 0, L_9, NULL);
		goto IL_0087;
	}

IL_0043:
	{
		SubEmittersModuleU5BU5D_t0F0D2688875FC82644111B1ECCC27FA6B775A483* L_10 = __this->____array;
		int32_t L_11 = __this->____head;
		SubEmittersModuleU5BU5D_t0F0D2688875FC82644111B1ECCC27FA6B775A483* L_12 = V_0;
		SubEmittersModuleU5BU5D_t0F0D2688875FC82644111B1ECCC27FA6B775A483* L_13 = __this->____array;
		NullCheck(L_13);
		int32_t L_14 = __this->____head;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_10, L_11, (RuntimeArray*)L_12, 0, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_13)->max_length)), L_14)), NULL);
		SubEmittersModuleU5BU5D_t0F0D2688875FC82644111B1ECCC27FA6B775A483* L_15 = __this->____array;
		SubEmittersModuleU5BU5D_t0F0D2688875FC82644111B1ECCC27FA6B775A483* L_16 = V_0;
		SubEmittersModuleU5BU5D_t0F0D2688875FC82644111B1ECCC27FA6B775A483* L_17 = __this->____array;
		NullCheck(L_17);
		int32_t L_18 = __this->____head;
		int32_t L_19 = __this->____tail;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_15, 0, (RuntimeArray*)L_16, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_17)->max_length)), L_18)), L_19, NULL);
	}

IL_0087:
	{
		SubEmittersModuleU5BU5D_t0F0D2688875FC82644111B1ECCC27FA6B775A483* L_20 = V_0;
		return L_20;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_SetCapacity_m6B2C5C5826028020475F98EF83010A8CC0EF0594_gshared (Queue_1_t729B9C657F6A9ECE0085BB5615128913418843BC* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	SubEmittersModuleU5BU5D_t0F0D2688875FC82644111B1ECCC27FA6B775A483* V_0 = NULL;
	Queue_1_t729B9C657F6A9ECE0085BB5615128913418843BC* G_B6_0 = NULL;
	Queue_1_t729B9C657F6A9ECE0085BB5615128913418843BC* G_B5_0 = NULL;
	int32_t G_B7_0 = 0;
	Queue_1_t729B9C657F6A9ECE0085BB5615128913418843BC* G_B7_1 = NULL;
	{
		int32_t L_0 = ___0_capacity;
		SubEmittersModuleU5BU5D_t0F0D2688875FC82644111B1ECCC27FA6B775A483* L_1 = (SubEmittersModuleU5BU5D_t0F0D2688875FC82644111B1ECCC27FA6B775A483*)(SubEmittersModuleU5BU5D_t0F0D2688875FC82644111B1ECCC27FA6B775A483*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_007d;
		}
	}
	{
		int32_t L_3 = __this->____head;
		int32_t L_4 = __this->____tail;
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0039;
		}
	}
	{
		SubEmittersModuleU5BU5D_t0F0D2688875FC82644111B1ECCC27FA6B775A483* L_5 = __this->____array;
		int32_t L_6 = __this->____head;
		SubEmittersModuleU5BU5D_t0F0D2688875FC82644111B1ECCC27FA6B775A483* L_7 = V_0;
		int32_t L_8 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, L_6, (RuntimeArray*)L_7, 0, L_8, NULL);
		goto IL_007d;
	}

IL_0039:
	{
		SubEmittersModuleU5BU5D_t0F0D2688875FC82644111B1ECCC27FA6B775A483* L_9 = __this->____array;
		int32_t L_10 = __this->____head;
		SubEmittersModuleU5BU5D_t0F0D2688875FC82644111B1ECCC27FA6B775A483* L_11 = V_0;
		SubEmittersModuleU5BU5D_t0F0D2688875FC82644111B1ECCC27FA6B775A483* L_12 = __this->____array;
		NullCheck(L_12);
		int32_t L_13 = __this->____head;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_9, L_10, (RuntimeArray*)L_11, 0, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_12)->max_length)), L_13)), NULL);
		SubEmittersModuleU5BU5D_t0F0D2688875FC82644111B1ECCC27FA6B775A483* L_14 = __this->____array;
		SubEmittersModuleU5BU5D_t0F0D2688875FC82644111B1ECCC27FA6B775A483* L_15 = V_0;
		SubEmittersModuleU5BU5D_t0F0D2688875FC82644111B1ECCC27FA6B775A483* L_16 = __this->____array;
		NullCheck(L_16);
		int32_t L_17 = __this->____head;
		int32_t L_18 = __this->____tail;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_14, 0, (RuntimeArray*)L_15, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_16)->max_length)), L_17)), L_18, NULL);
	}

IL_007d:
	{
		SubEmittersModuleU5BU5D_t0F0D2688875FC82644111B1ECCC27FA6B775A483* L_19 = V_0;
		__this->____array = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_19);
		__this->____head = 0;
		int32_t L_20 = __this->____size;
		int32_t L_21 = ___0_capacity;
		if ((((int32_t)L_20) == ((int32_t)L_21)))
		{
			G_B6_0 = __this;
			goto IL_009d;
		}
		G_B5_0 = __this;
	}
	{
		int32_t L_22 = __this->____size;
		G_B7_0 = L_22;
		G_B7_1 = G_B5_0;
		goto IL_009e;
	}

IL_009d:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
	}

IL_009e:
	{
		NullCheck(G_B7_1);
		G_B7_1->____tail = G_B7_0;
		int32_t L_23 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_23, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_MoveNext_mA7612B3642C784E094FEA6B2020E32C4953D8BEF_gshared (Queue_1_t729B9C657F6A9ECE0085BB5615128913418843BC* __this, int32_t* ___0_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t* L_0 = ___0_index;
		int32_t L_1 = *((int32_t*)L_0);
		V_0 = ((int32_t)il2cpp_codegen_add(L_1, 1));
		int32_t L_2 = V_0;
		SubEmittersModuleU5BU5D_t0F0D2688875FC82644111B1ECCC27FA6B775A483* L_3 = __this->____array;
		NullCheck(L_3);
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))))
		{
			goto IL_0012;
		}
	}
	{
		V_0 = 0;
	}

IL_0012:
	{
		int32_t* L_4 = ___0_index;
		int32_t L_5 = V_0;
		*((int32_t*)L_4) = (int32_t)L_5;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_ThrowForEmptyQueue_m762921511DDCF44E074EB355C146B5ACEE6E9192_gshared (Queue_1_t729B9C657F6A9ECE0085BB5615128913418843BC* __this, const RuntimeMethod* method) 
{
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1102619AA6FB2A4AADBDAA47DDC096AE04C772C0)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = __this->____items;
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___0_item;
		List_1_AddWithResize_m79A9BF770BEF9C06BE40D5401E55E375F2726CC4(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ((EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR fsVersionedTypeU5BU5D_tF4A5B18C49769943892747B1A1040CAE86746E1F* Array_Empty_TisfsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8_mE2BC05CF2CE0B2267A4A0BF14227F75DE3AE1B0C_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		fsVersionedTypeU5BU5D_tF4A5B18C49769943892747B1A1040CAE86746E1F* L_0 = ((EmptyArray_1_tD26FE3075DC228BE87FC137E462D9B9D87345E09_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* Array_Empty_TisEventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2_mAEF379183FDCBD07C651D56777D4AA5A5C969A47_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* L_0 = ((EmptyArray_1_t77401F488985814E4B89684C1CCE07D59127CD6C_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CollisionModuleU5BU5D_t9520E15E871E6E2B11790028A8CE1A6E1C0F2EC2* Array_Empty_TisCollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083_mFF74E742D160D48C5C4C03E9219544E7D5E133D5_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		CollisionModuleU5BU5D_t9520E15E871E6E2B11790028A8CE1A6E1C0F2EC2* L_0 = ((EmptyArray_1_t148D3B7315D7A6007D765544A0374ECF18C49A4F_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ColorBySpeedModuleU5BU5D_t0E5EE314CD20E42735C32A7A06AFC14BF9F17BD1* Array_Empty_TisColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_m12B6F1ECF375A80FB7C42121CBBD37A51893C2A5_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		ColorBySpeedModuleU5BU5D_t0E5EE314CD20E42735C32A7A06AFC14BF9F17BD1* L_0 = ((EmptyArray_1_tA2A0A5BC0848542E85C3C7090B698C7582EC293E_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ColorOverLifetimeModuleU5BU5D_t56D392498D03FF1B36CADEB8B1C61DF772B575CA* Array_Empty_TisColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9_mC1FDC75D8356A5C9870BF88F40972AFC7E8EF569_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		ColorOverLifetimeModuleU5BU5D_t56D392498D03FF1B36CADEB8B1C61DF772B575CA* L_0 = ((EmptyArray_1_t5DE9A902E68EAF6C3BEA0449EBDE9796931D38CA_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EmissionModuleU5BU5D_t110238586598A352710078862A6C32192CAFC5DE* Array_Empty_TisEmissionModule_t0F469FA4A08003F6D9C610D2F716A9DFDB9A3678_m0AF1109AB17569AAB476D0C066C70C18B4B5D746_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		EmissionModuleU5BU5D_t110238586598A352710078862A6C32192CAFC5DE* L_0 = ((EmptyArray_1_tAF4D7BF84EDEBCC665A1A7DDA7D9525F0A338241_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ExternalForcesModuleU5BU5D_t11431781ADD799A06D76C11D763A481B2423CD16* Array_Empty_TisExternalForcesModule_t4494E21ECF96F072432EF4DDC5F84BAF84912FC7_m2F3EA4E00B708F7E2F683839F2933A2077F67B9B_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		ExternalForcesModuleU5BU5D_t11431781ADD799A06D76C11D763A481B2423CD16* L_0 = ((EmptyArray_1_t335FEC980C152B1BB5C2B29BEBE9BB902BD96851_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ForceOverLifetimeModuleU5BU5D_t8B8EC5C9653BD37EA210B29740ACE97F39B6E1EC* Array_Empty_TisForceOverLifetimeModule_t4859776EAF945AEA86044CAB63CA7A8AC8C14976_mD3B31996CF3BEC24489EA770CDA781CA057E095D_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		ForceOverLifetimeModuleU5BU5D_t8B8EC5C9653BD37EA210B29740ACE97F39B6E1EC* L_0 = ((EmptyArray_1_t0301B61215E2E46DFEA03D75A6060D8CAC3D479A_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InheritVelocityModuleU5BU5D_tBBEA24AC089387EB19C315018C873CD94D15F41A* Array_Empty_TisInheritVelocityModule_tB71B2EDCAF328647DDB6BC79541D7C5E76C19562_mC34E022E193FCEBCBCFABE3D326AFD7A3BC72D81_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		InheritVelocityModuleU5BU5D_tBBEA24AC089387EB19C315018C873CD94D15F41A* L_0 = ((EmptyArray_1_tE05CFBC9C768DA6FECF8F30EAB67C277CCB8EC55_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR LightsModuleU5BU5D_t1B43D0E6425D6ECE42FB5D4E9A0E7522279ACA56* Array_Empty_TisLightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_mC84EDDF86908CEB62AAFDFDCD8E2E3210403A401_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		LightsModuleU5BU5D_t1B43D0E6425D6ECE42FB5D4E9A0E7522279ACA56* L_0 = ((EmptyArray_1_tEED641E019AD7833746EE21F5D5EF0BE46953FDF_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR LimitVelocityOverLifetimeModuleU5BU5D_tAF13DD144C6E43CE6DE2FE7A275FB904DD9068F1* Array_Empty_TisLimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_m21FA0F5AE4672F90426A30B4FDE61DCE8DD75461_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		LimitVelocityOverLifetimeModuleU5BU5D_tAF13DD144C6E43CE6DE2FE7A275FB904DD9068F1* L_0 = ((EmptyArray_1_tFF691A731ABD156600069C6A1AB13897214410E0_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MainModuleU5BU5D_tEEFB5F0E13630CB75255D344E67FEEDD38C47F0F* Array_Empty_TisMainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9_m33C193685A1A3B0DD811A9F060572040030884B7_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		MainModuleU5BU5D_tEEFB5F0E13630CB75255D344E67FEEDD38C47F0F* L_0 = ((EmptyArray_1_tCD3D2FDC32FABF46F37D9F0D5EE8033B21EE016C_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NoiseModuleU5BU5D_t7C4F86128102E5F9E007D757ED34CFE5D887C565* Array_Empty_TisNoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0_m1AD2426C747ABC797C05E61B05D61450076A8903_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		NoiseModuleU5BU5D_t7C4F86128102E5F9E007D757ED34CFE5D887C565* L_0 = ((EmptyArray_1_tD0E25BCF4832958D9C1F596570EF2919414A7103_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RotationBySpeedModuleU5BU5D_tFC82BD47383BAC5155E20F4CACA0B1D3377CA989* Array_Empty_TisRotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_mA0D9CFABD04BEF3BFE482AE641DCD6F0C1597FA9_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		RotationBySpeedModuleU5BU5D_tFC82BD47383BAC5155E20F4CACA0B1D3377CA989* L_0 = ((EmptyArray_1_tDA1E10579FDDCE25837B4F203EABDCA5251082FB_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RotationOverLifetimeModuleU5BU5D_t50CBEBBC6B542E064BD30EB9EB49BCD9B5F419C8* Array_Empty_TisRotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_m3E7ABA71381D6C3DA7508146A094FE8C9C5C7436_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		RotationOverLifetimeModuleU5BU5D_t50CBEBBC6B542E064BD30EB9EB49BCD9B5F419C8* L_0 = ((EmptyArray_1_tFF1C726B7AD2D4CB615066440DB2BD360077F74E_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ShapeModuleU5BU5D_t8997568E698C9B1509FCDFE401084FF80AB60243* Array_Empty_TisShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2_m23574AE640623A2874871290CD7F26FE026C60FE_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		ShapeModuleU5BU5D_t8997568E698C9B1509FCDFE401084FF80AB60243* L_0 = ((EmptyArray_1_t151CEED89EBC00271F4BF4ACC9D4E781D780866E_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SizeBySpeedModuleU5BU5D_tEF4645160713AF1309F815C4B95C79975BA2D221* Array_Empty_TisSizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4_m9AA9EFC539DB7558A084DA01995E1416885100E0_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		SizeBySpeedModuleU5BU5D_tEF4645160713AF1309F815C4B95C79975BA2D221* L_0 = ((EmptyArray_1_tBA9A911B01CFC769E520FBF101B83CC77C18ECCF_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SizeOverLifetimeModuleU5BU5D_t31052F8FFC4F64017ABA0B123070F572D37A29A3* Array_Empty_TisSizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C_m3A84DF47DB367D4CDF792D5F7DF11100A974F13D_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		SizeOverLifetimeModuleU5BU5D_t31052F8FFC4F64017ABA0B123070F572D37A29A3* L_0 = ((EmptyArray_1_tDEA777902FAFA73B2D66B35576B82407F616798F_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SubEmittersModuleU5BU5D_t0F0D2688875FC82644111B1ECCC27FA6B775A483* Array_Empty_TisSubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B_m68BA68C658B6882B6E960B75E942EA462D773B90_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		SubEmittersModuleU5BU5D_t0F0D2688875FC82644111B1ECCC27FA6B775A483* L_0 = ((EmptyArray_1_t45ACA127E94E3425602D4677D3A2A8DF9A62AC4C_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___Value;
		return L_0;
	}
}
