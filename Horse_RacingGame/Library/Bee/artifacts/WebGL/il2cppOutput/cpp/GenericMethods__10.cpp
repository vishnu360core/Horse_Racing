﻿#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif




template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1>
struct ConstrainedFuncInvoker1;
template <typename R, typename T1>
struct ConstrainedFuncInvoker1<R, T1*>
{
	static inline R Invoke (RuntimeClass* type, const RuntimeMethod* constrainedMethod, void* boxBuffer, void* obj, T1* p1)
	{
		R ret;
		void* params[1] = { p1 };
		il2cpp_codegen_runtime_constrained_call(type, constrainedMethod, boxBuffer, obj, params, &ret);
		return ret;
	}
};

struct Dictionary_2_t79BA378F246EFA4AD0AFFA017D788423CACA8638;
struct Dictionary_2_t6F746BAA06881876A266EA34F6D2B0598F10A994;
struct Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83;
struct Dictionary_2_t645C7B1DAE2D839B52A5E387C165CE13D5465B00;
struct Func_2_t2A7432CC4F64D0DF6D8629208B154CF139B39AF2;
struct Func_3_tA9798B0F4A6E065506CCD2430A77D31C196DC1B0;
struct IDictionary_2_tDE898DC30C1D858174B83654BC6A8F1ED531A6E8;
struct IEnumerable_1_tCE758D940790D6D0D56B457E522C195F8C413AF2;
struct List_1_t06891929F0A7F28600C12114880027B889E110F3;
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
struct RefCounted_t6B975CD3D06E8D955346FC0D66E8F6E449D49A44;
struct RefCounted_t0E133AD36715877AE1CE72539A0199B4D3AA8CD1;
struct RefCounted_t81BCBAE57D930C934CF7A439452D65303AC6A8CD;
struct RefCounted_t78303B1CD3D08C664ABB15EBD7C882DA3E06CF7D;
struct RefCounted_tA9FB4D63A1064BD322AFDFCD70319CB384C057D9;
struct RefCounted_t812D790A2C787F18230F9234F6C9B84D4AC1A85A;
struct SessionRequest_1_t0D945BF99F771D7613383AF1EA42901FAF39A3E3;
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259;
struct ComputedTransitionPropertyU5BU5D_t25B9E78F5276CDA297C8215C316452CAB8219E82;
struct DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615;
struct EnumU5BU5D_t6106A94708E3435454078BF14FA50152B7301912;
struct EventAttributeU5BU5D_t7458F3C12053EE58DD40DCCD062900A713BEBA1D;
struct FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA;
struct HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622;
struct HighlightStateU5BU5D_tCF5677B4773947CE4C64B938B12AC50DDA347435;
struct HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2;
struct MaterialReferenceU5BU5D_t4A9B88114E223BD96CE5121053664023CE2DE07E;
struct PlayableBindingU5BU5D_tC50C3F27A8E4246488F7A5998CAABAC4811A92CD;
struct PlayerLoopSystemU5BU5D_t07C04E53AAC3CDA17603E8BA1B41D7E1AC083C6D;
struct ProtocolOptionsU5BU5D_tD97471A3320EE85560F7A876239FDF81A0F24C6C;
struct ShaderTagIdU5BU5D_tE1BA124E13B8096153E25C5AF9C1D15D71466143;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct StyleValueHandleU5BU5D_t66B7732469E9E30B1FB9A6E386315DAB36914ADE;
struct TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A;
struct TextAlignmentU5BU5D_t756DC2D672145699CB9718DDBA5982ED51A95F49;
struct TextColorGradientU5BU5D_tA27A5E49640CF01334A10DBDBC959903AFBD941A;
struct TextFontWeightU5BU5D_t3DE32809AEE657255C8333897D61F2EA5279D43F;
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
struct Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD;
struct XPathNodeU5BU5D_tABD91BA95C61EF982E9FB7D2386FCE4C39F8B90C;
struct ArgumentState_t80D4E71A31A6E55D1C4888B38C0E51798DB26F98;
struct BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832;
struct BitSet_t89F906D542C052F4565FBEF32E1E9713B966026B;
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3;
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
struct CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57;
struct ConnectionBase_t7C4914C0C49D494A073294EA24ACF12E42F32734;
struct CullingAllocationInfo_tB260F5CD0B290F74E145EB16E54B901CC68D9D5A;
struct DataColumn_t07796C0DD83AD590E7C821E08FE04A38FE8B1A66;
struct DebugInfo_t03C716886CE7E99C1662D1C236CCC2CC6F18A167;
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2;
struct Exception_t;
struct ExposedProperty_t90982415ECDCB651D6A637FE3DA1D53BC76D602A;
struct Font_tC95270EA3198038970422D78B74A7F2E218A96B6;
struct FontAsset_t61A6446D934E582651044E33D250EA8D306AB958;
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
struct Glyph_t700CF8EBE04ED4AEAB520885AAA1B309E02A103F;
struct HDProbe_tC20E8410994AE0C9042008CE779DAFFF7A7C861E;
struct HTTPRequest_tF57611B8437BCEC08E99FBF3463B96341D29927F;
struct IAsyncDisposable_t13A44C21C3C232FA66D0DC1CBC57FB9BAEB5EEA4;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
struct JsonDocument_tF96A1F7D1D40932B5EA6A97DA06E150B6CBDBE6F;
struct JsonParameterInfo_t45C8BCDFD6A660285681888FCB559CC21DFED94D;
struct JsonPropertyInfo_t8870BF608DD0641AC29D55C6747C5C5C7340876E;
struct JsonTypeInfo_tA6F51E32955C59782B075F76F6918E5B97598C36;
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
struct MemberInfo_t;
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
struct Metadata_t4AC24B559D85168A0280CC60EAD19CA5E0C2B1AC;
struct MethWithType_t5224495654DCC7D33AA524C25FB07822420735B2;
struct Namespaces_t21319E5B0935CA954D3DA6CAF3182442DFEF5FC2;
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
struct ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110;
struct Participant_t6902CD1ED748F1F6D364ACFB5F1C02E374EB0223;
struct ProtocolOptions_t87E54661957741DB313DB6887FC624D67FC2B668;
struct ProxySettings_tC5B1BE468FA695BAEC808B50711CA4AF2A279F9C;
struct RTHandle_t135537761C47BC929F032B3C8F4D55EA1111B07B;
struct RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA;
struct RequiredNamespaces_tAE60F5875B28826E0D827FC2131ABAE2B86C9FDC;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712;
struct Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692;
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
struct SpriteAsset_t1D3CF1D9DC350A4690CB09DE228A8B59F2F02313;
struct String_t;
struct StyleComplexSelector_tE46C29F65FDBA48D3152781187401C8B55B7D8AD;
struct StyleSheet_t6FAF43FCDB45BC6BED0522A222FD4C1A9BB10428;
struct TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB;
struct TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160;
struct TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39;
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9;
struct TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5;
struct TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D;
struct TextColorGradient_t22D94E441E8E8CD772B966C167E5C0AEB0919D70;
struct TextElement_tCEF567A8810788262275B39DC39CBA6EBE7472DA;
struct TextInfo_t27E58E62A7552C66D38C175AF9D22622365F5D09;
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
struct Type_t;
struct UnicodeEncoding_t2C90D9E1E55C16081FACA57B229053C1EF05DAF0;
struct Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E;
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct XPathNodeInfoAtom_t4E1898849C241487219F72C0B61B5D474E1059FE;
struct YogaNode_t9EE7C2B7C0BD1299C28837B1A66CF4660E724C8B;
struct CreateOutputMethod_tD18AFE3B69E6DDD913D82D5FA1D5D909CEEC8509;
struct UpdateFunction_t1C48B7EECBE47AC123A9D9D7D9D2A9EE951C56C4;

IL2CPP_EXTERN_C RuntimeClass* DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ScalableSettingSchemaId_t52565FBE2716C21A2C559CD569F2AD854E8DC9E9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SplineKnotIndex_t534896C5AC577CB9B0E1D694808A2491D2EEE38F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SqlBinary_tEFB13C14B44E4388798A2F7DB48438E16DE4E347_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SqlByte_t39089DB566BD0047D5ED18807B145019FB0F0B46_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SqlDecimal_t7A833A6D857AB79C4B2E4011CB728AEC6954D406_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SqlGuid_t93C33E370E5D3A344A15F9EFD9A2D4177576DED7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SqlInt16_t30ED9856D3373398B6005B34D664C64EE224260B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SqlInt32_t50DA35BC9FD9C46AA933DCF8195B2EE92064D152_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SqlInt64_t6F2A4BE192CBAA1059DDAB0D02FEDF4EDEAD6272_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SqlMoney_t88BD587F422EA297502BC57B18010762C03531BB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SqlSingle_tE807CFF8CCE4E77475D51223A37ADC73BC205767_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SqlString_t49F9D31E7FD7F45509E26DEFEB61F006965D588D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TextureId_tFF4B4AAE53408AB10B0B89CCA5F7B50CF2535E58_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TimingEvent_t5697F8C973C8A77FED2BC5449FC594A84DB15E6D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1;
struct Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B;
struct ComputedTransitionProperty_tD8E4D8EB5DD69E063944F27A48D9263F4F1354E1_marshaled_com;
struct ComputedTransitionProperty_tD8E4D8EB5DD69E063944F27A48D9263F4F1354E1_marshaled_pinvoke;
struct Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct Glyph_t700CF8EBE04ED4AEAB520885AAA1B309E02A103F_marshaled_com;
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com;
struct PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F_marshaled_com;
struct PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F_marshaled_pinvoke;
struct ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0;
struct StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D;
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7;
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2;
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3;
struct XPathNode_t4A9DCD8092B3B7DBA0A6DA09C03DB5274D43C3CA_marshaled_com;
struct XPathNode_t4A9DCD8092B3B7DBA0A6DA09C03DB5274D43C3CA_marshaled_pinvoke;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
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
struct ArraySlice_1_t38E85DAE9975597DC96B21D715F42183A9C5EF03 
{
	uint8_t* ___m_Buffer;
	int32_t ___m_Stride;
	int32_t ___m_Length;
};
struct Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 
{
	bool ___hasValue;
	bool ___value;
};
struct Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 
{
	bool ___hasValue;
	int64_t ___value;
};
struct StyleDataRef_1_tBB9987581539847AE5CCA2EA2349E05CDC9127FA 
{
	RefCounted_t6B975CD3D06E8D955346FC0D66E8F6E449D49A44* ___m_Ref;
};
struct StyleDataRef_1_t5330A6F4EAC0EAB88E3B9849D866AA23BB6BE5F4 
{
	RefCounted_t0E133AD36715877AE1CE72539A0199B4D3AA8CD1* ___m_Ref;
};
struct StyleDataRef_1_tF773E9CBC6DC0FEB38DF95A6F3F47AC49AE045B3 
{
	RefCounted_t81BCBAE57D930C934CF7A439452D65303AC6A8CD* ___m_Ref;
};
struct StyleDataRef_1_t1D59CCAB740BE6B330D5B5FDA9F67391800200B3 
{
	RefCounted_t78303B1CD3D08C664ABB15EBD7C882DA3E06CF7D* ___m_Ref;
};
struct StyleDataRef_1_t6A7B146DD79EDF7F42CD8CCF3E411B40AA729B8E 
{
	RefCounted_tA9FB4D63A1064BD322AFDFCD70319CB384C057D9* ___m_Ref;
};
struct StyleDataRef_1_t9CB834B90E638D92A3BE5123B0D3989697AA87FC 
{
	RefCounted_t812D790A2C787F18230F9234F6C9B84D4AC1A85A* ___m_Ref;
};
struct TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C 
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___itemStack;
	int32_t ___index;
	int32_t ___m_DefaultItem;
	int32_t ___m_Capacity;
	int32_t ___m_RolloverSize;
	int32_t ___m_Count;
};
struct TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 
{
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___itemStack;
	int32_t ___index;
	float ___m_DefaultItem;
	int32_t ___m_Capacity;
	int32_t ___m_RolloverSize;
	int32_t ___m_Count;
};
struct TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C 
{
	TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A* ___itemStack;
	int32_t ___index;
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_DefaultItem;
	int32_t ___m_Capacity;
	int32_t ___m_RolloverSize;
	int32_t ___m_Count;
};
struct TextProcessingStack_1_t27834AAB14D26DC6519558C4C2574BA9C190D8E8 
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___itemStack;
	int32_t ___index;
	int32_t ___m_DefaultItem;
	int32_t ___m_Capacity;
	int32_t ___m_RolloverSize;
	int32_t ___m_Count;
};
struct TextProcessingStack_1_t9FC06E35259ADD291ED640FE7554D8C03EA5F555 
{
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___itemStack;
	int32_t ___index;
	float ___m_DefaultItem;
	int32_t ___m_Capacity;
	int32_t ___m_RolloverSize;
	int32_t ___m_Count;
};
struct TextProcessingStack_1_t0F39F088E8F8F6E18C3C463B2998ADC5B7A0513E 
{
	TextColorGradientU5BU5D_tA27A5E49640CF01334A10DBDBC959903AFBD941A* ___itemStack;
	int32_t ___index;
	TextColorGradient_t22D94E441E8E8CD772B966C167E5C0AEB0919D70* ___m_DefaultItem;
	int32_t ___m_Capacity;
	int32_t ___m_RolloverSize;
	int32_t ___m_Count;
};
struct BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F 
{
	int32_t ____sign;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ____bits;
};
struct BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_marshaled_pinvoke
{
	int32_t ____sign;
	Il2CppSafeArray* ____bits;
};
struct BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_marshaled_com
{
	int32_t ____sign;
	Il2CppSafeArray* ____bits;
};
struct BitStack_t460BCC3E60CEEB19DD5A9535794E2702E50121B5 
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____array;
	uint64_t ____allocationFreeContainer;
	int32_t ____currentDepth;
};
struct BitStack_t460BCC3E60CEEB19DD5A9535794E2702E50121B5_marshaled_pinvoke
{
	Il2CppSafeArray* ____array;
	uint64_t ____allocationFreeContainer;
	int32_t ____currentDepth;
};
struct BitStack_t460BCC3E60CEEB19DD5A9535794E2702E50121B5_marshaled_com
{
	Il2CppSafeArray* ____array;
	uint64_t ____allocationFreeContainer;
	int32_t ____currentDepth;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	float ___r;
	float ___g;
	float ___b;
	float ___a;
};
struct Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___rgba;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			uint8_t ___r;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_OffsetPadding[1];
			uint8_t ___g;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_OffsetPadding[2];
			uint8_t ___b;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_OffsetPadding[3];
			uint8_t ___a;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_forAlignmentOnly;
		};
	};
};
struct ConstVal_t1FF839FC2CD0F6D6271C56906ACBB7B320DFE1BA 
{
	RuntimeObject* ___U3CObjectValU3Ek__BackingField;
};
struct ConstVal_t1FF839FC2CD0F6D6271C56906ACBB7B320DFE1BA_marshaled_pinvoke
{
	Il2CppIUnknown* ___U3CObjectValU3Ek__BackingField;
};
struct ConstVal_t1FF839FC2CD0F6D6271C56906ACBB7B320DFE1BA_marshaled_com
{
	Il2CppIUnknown* ___U3CObjectValU3Ek__BackingField;
};
struct CurrencyValue_t990E85902BF45B2E1BCB44F0865B3EF5F7C8F5B3 
{
	String_t* ___name;
	String_t* ___symbol;
	String_t* ___decimals;
	String_t* ___value;
	String_t* ___displayValue;
};
struct CurrencyValue_t990E85902BF45B2E1BCB44F0865B3EF5F7C8F5B3_marshaled_pinvoke
{
	char* ___name;
	char* ___symbol;
	char* ___decimals;
	char* ___value;
	char* ___displayValue;
};
struct CurrencyValue_t990E85902BF45B2E1BCB44F0865B3EF5F7C8F5B3_marshaled_com
{
	Il2CppChar* ___name;
	Il2CppChar* ___symbol;
	Il2CppChar* ___decimals;
	Il2CppChar* ___value;
	Il2CppChar* ___displayValue;
};
struct CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F 
{
	Type_t* ___U3CArgumentTypeU3Ek__BackingField;
	RuntimeObject* ___U3CValueU3Ek__BackingField;
};
struct CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F_marshaled_pinvoke
{
	Type_t* ___U3CArgumentTypeU3Ek__BackingField;
	Il2CppIUnknown* ___U3CValueU3Ek__BackingField;
};
struct CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F_marshaled_com
{
	Type_t* ___U3CArgumentTypeU3Ek__BackingField;
	Il2CppIUnknown* ___U3CValueU3Ek__BackingField;
};
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D 
{
	uint64_t ____dateData;
};
struct DecalEntity_t8CAF09C65939503449C4138ADCDC4907196293FD 
{
	int32_t ___index;
	int32_t ___version;
};
struct DecalSubDrawCall_t68CDD2E663F805776DE0281AB4FAEDC8B8D9EC49 
{
	int32_t ___start;
	int32_t ___end;
};
struct Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___flags;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___flags_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___hi_OffsetPadding[4];
			int32_t ___hi;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___hi_OffsetPadding_forAlignmentOnly[4];
			int32_t ___hi_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___lo_OffsetPadding[8];
			int32_t ___lo;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___lo_OffsetPadding_forAlignmentOnly[8];
			int32_t ___lo_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___mid_OffsetPadding[12];
			int32_t ___mid;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___mid_OffsetPadding_forAlignmentOnly[12];
			int32_t ___mid_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ulomidLE_OffsetPadding[8];
			uint64_t ___ulomidLE;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ulomidLE_OffsetPadding_forAlignmentOnly[8];
			uint64_t ___ulomidLE_forAlignmentOnly;
		};
	};
};
struct DepthState_t798415D2C1D9202E555FEE5D4C5FDF6B3A077255 
{
	uint8_t ___m_WriteEnabled;
	int8_t ___m_CompareFunction;
};
struct DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB 
{
	RuntimeObject* ____key;
	RuntimeObject* ____value;
};
struct DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_marshaled_pinvoke
{
	Il2CppIUnknown* ____key;
	Il2CppIUnknown* ____value;
};
struct DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_marshaled_com
{
	Il2CppIUnknown* ____key;
	Il2CppIUnknown* ____value;
};
struct DistanceToInterpolation_t88DD77AC188D5F202C38FE6B29DD721AA84DC6B8 
{
	float ___Distance;
	float ___T;
};
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	double ___m_value;
};
struct DoublePoint_t446FD90BD115DB77200658E482706463B1E514AF 
{
	double ___X;
	double ___Y;
};
struct DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5 
{
	int32_t ___firstIndex;
	int32_t ___indexCount;
	int32_t ___minIndexVal;
	int32_t ___vertsReferenced;
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
struct EnumData_tB9520C9179D9D6C57B2BF70E76FE4EB4DC94A6F8 
{
	EnumU5BU5D_t6106A94708E3435454078BF14FA50152B7301912* ___values;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___flagValues;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___displayNames;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___names;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___tooltip;
	bool ___flags;
	Type_t* ___underlyingType;
	bool ___unsigned;
	bool ___serializable;
};
struct EnumData_tB9520C9179D9D6C57B2BF70E76FE4EB4DC94A6F8_marshaled_pinvoke
{
	EnumU5BU5D_t6106A94708E3435454078BF14FA50152B7301912* ___values;
	Il2CppSafeArray* ___flagValues;
	char** ___displayNames;
	char** ___names;
	char** ___tooltip;
	int32_t ___flags;
	Type_t* ___underlyingType;
	int32_t ___unsigned;
	int32_t ___serializable;
};
struct EnumData_tB9520C9179D9D6C57B2BF70E76FE4EB4DC94A6F8_marshaled_com
{
	EnumU5BU5D_t6106A94708E3435454078BF14FA50152B7301912* ___values;
	Il2CppSafeArray* ___flagValues;
	Il2CppChar** ___displayNames;
	Il2CppChar** ___names;
	Il2CppChar** ___tooltip;
	int32_t ___flags;
	Type_t* ___underlyingType;
	int32_t ___unsigned;
	int32_t ___serializable;
};
struct Ephemeron_t74F279F5E7CF4A0CFC21C822431DD840572C6DA2 
{
	RuntimeObject* ___key;
	RuntimeObject* ___value;
};
struct Ephemeron_t74F279F5E7CF4A0CFC21C822431DD840572C6DA2_marshaled_pinvoke
{
	Il2CppIUnknown* ___key;
	Il2CppIUnknown* ___value;
};
struct Ephemeron_t74F279F5E7CF4A0CFC21C822431DD840572C6DA2_marshaled_com
{
	Il2CppIUnknown* ___key;
	Il2CppIUnknown* ___value;
};
struct EventAttributes_t08E6304B102F41E4FF59ED5A938F2C819CAA6D1A 
{
	EventAttributeU5BU5D_t7458F3C12053EE58DD40DCCD062900A713BEBA1D* ___content;
};
struct EventAttributes_t08E6304B102F41E4FF59ED5A938F2C819CAA6D1A_marshaled_pinvoke
{
	EventAttributeU5BU5D_t7458F3C12053EE58DD40DCCD062900A713BEBA1D* ___content;
};
struct EventAttributes_t08E6304B102F41E4FF59ED5A938F2C819CAA6D1A_marshaled_com
{
	EventAttributeU5BU5D_t7458F3C12053EE58DD40DCCD062900A713BEBA1D* ___content;
};
#pragma pack(push, tp, 1)
struct EventDescriptor_tA8140DBFDF03F8F9B9F7080D526AFE7363DFDAD3 
{
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					uint16_t ___m_id;
				};
				#pragma pack(pop, tp)
				struct
				{
					uint16_t ___m_id_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___m_version_OffsetPadding[2];
					uint8_t ___m_version;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___m_version_OffsetPadding_forAlignmentOnly[2];
					uint8_t ___m_version_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___m_channel_OffsetPadding[3];
					uint8_t ___m_channel;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___m_channel_OffsetPadding_forAlignmentOnly[3];
					uint8_t ___m_channel_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___m_level_OffsetPadding[4];
					uint8_t ___m_level;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___m_level_OffsetPadding_forAlignmentOnly[4];
					uint8_t ___m_level_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___m_opcode_OffsetPadding[5];
					uint8_t ___m_opcode;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___m_opcode_OffsetPadding_forAlignmentOnly[5];
					uint8_t ___m_opcode_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___m_task_OffsetPadding[6];
					uint16_t ___m_task;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___m_task_OffsetPadding_forAlignmentOnly[6];
					uint16_t ___m_task_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___m_keywords_OffsetPadding[8];
					int64_t ___m_keywords;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___m_keywords_OffsetPadding_forAlignmentOnly[8];
					int64_t ___m_keywords_forAlignmentOnly;
				};
			};
		};
		uint8_t EventDescriptor_tA8140DBFDF03F8F9B9F7080D526AFE7363DFDAD3__padding[16];
	};
};
#pragma pack(pop, tp)
struct FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C 
{
	Font_tC95270EA3198038970422D78B74A7F2E218A96B6* ___m_Font;
	FontAsset_t61A6446D934E582651044E33D250EA8D306AB958* ___m_FontAsset;
};
struct FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C_marshaled_pinvoke
{
	Font_tC95270EA3198038970422D78B74A7F2E218A96B6* ___m_Font;
	FontAsset_t61A6446D934E582651044E33D250EA8D306AB958* ___m_FontAsset;
};
struct FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C_marshaled_com
{
	Font_tC95270EA3198038970422D78B74A7F2E218A96B6* ___m_Font;
	FontAsset_t61A6446D934E582651044E33D250EA8D306AB958* ___m_FontAsset;
};
struct FontStyleStack_t63C77495F068E6DF762D6AF063A817E3709659A7 
{
	uint8_t ___bold;
	uint8_t ___italic;
	uint8_t ___underline;
	uint8_t ___strikethrough;
	uint8_t ___highlight;
	uint8_t ___superscript;
	uint8_t ___subscript;
	uint8_t ___uppercase;
	uint8_t ___lowercase;
	uint8_t ___smallcaps;
};
struct FontWeightPair_tB94169BD86D0DFC25D651F890B15991A3E0ADA42 
{
	FontAsset_t61A6446D934E582651044E33D250EA8D306AB958* ___regularTypeface;
	FontAsset_t61A6446D934E582651044E33D250EA8D306AB958* ___italicTypeface;
};
struct FontWeightPair_tB94169BD86D0DFC25D651F890B15991A3E0ADA42_marshaled_pinvoke
{
	FontAsset_t61A6446D934E582651044E33D250EA8D306AB958* ___regularTypeface;
	FontAsset_t61A6446D934E582651044E33D250EA8D306AB958* ___italicTypeface;
};
struct FontWeightPair_tB94169BD86D0DFC25D651F890B15991A3E0ADA42_marshaled_com
{
	FontAsset_t61A6446D934E582651044E33D250EA8D306AB958* ___regularTypeface;
	FontAsset_t61A6446D934E582651044E33D250EA8D306AB958* ___italicTypeface;
};
struct FrameTimeSample_tADB152E5D63C6EB073852FBE9D9EE9A66CA31AA7 
{
	float ___FramesPerSecond;
	float ___FullFrameTime;
	float ___MainThreadCPUFrameTime;
	float ___MainThreadCPUPresentWaitTime;
	float ___RenderThreadCPUFrameTime;
	float ___GPUFrameTime;
};
struct FrameTiming_tD5EE8535CF7DB0D391A5E9E0DB0CBEEA0D8600AD 
{
	double ___cpuFrameTime;
	double ___cpuMainThreadFrameTime;
	double ___cpuMainThreadPresentWaitTime;
	double ___cpuRenderThreadFrameTime;
	double ___gpuFrameTime;
	uint64_t ___frameStartTimestamp;
	uint64_t ___firstSubmitTimestamp;
	uint64_t ___cpuTimePresentCalled;
	uint64_t ___cpuTimeFrameComplete;
	float ___heightScale;
	float ___widthScale;
	uint32_t ___syncInterval;
};
struct GlyphAnchorPoint_t581FDCAD5A1D0F3B129968FAEF20C113AAB0BC08 
{
	float ___m_XCoordinate;
	float ___m_YCoordinate;
};
struct GlyphMetrics_t6C1C65A891A6279A0EE807C436436B1E44F7AF1A 
{
	float ___m_Width;
	float ___m_Height;
	float ___m_HorizontalBearingX;
	float ___m_HorizontalBearingY;
	float ___m_HorizontalAdvance;
};
struct GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D 
{
	int32_t ___m_X;
	int32_t ___m_Y;
	int32_t ___m_Width;
	int32_t ___m_Height;
};
struct GlyphValueRecord_t780927A39D46924E0D546A2AE5DDF1BB2B5A9C8E 
{
	float ___m_XPlacement;
	float ___m_YPlacement;
	float ___m_XAdvance;
	float ___m_YAdvance;
};
struct GradientAlphaKey_tF469955E4BBAF1044320D956CD8D990F1A26EAA0 
{
	float ___alpha;
	float ___time;
};
struct Guid_t 
{
	int32_t ____a;
	int16_t ____b;
	int16_t ____c;
	uint8_t ____d;
	uint8_t ____e;
	uint8_t ____f;
	uint8_t ____g;
	uint8_t ____h;
	uint8_t ____i;
	uint8_t ____j;
	uint8_t ____k;
};
struct HDLightRenderEntity_tB3F5C39C0699568B572B6319F57BECE44E80BBF0 
{
	int32_t ___entityIndex;
};
struct Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 
{
	uint64_t ___u64_0;
	uint64_t ___u64_1;
};
struct InclusiveRange_t1762A170B7A199C25DAC4CB39CB109710812A54D 
{
	int16_t ___start;
	int16_t ___end;
};
struct IndexField_t6285D0782FB7D55EC60F7DFB20AF7D3E7D37B795 
{
	DataColumn_t07796C0DD83AD590E7C821E08FE04A38FE8B1A66* ___Column;
	bool ___IsDescending;
};
struct IndexField_t6285D0782FB7D55EC60F7DFB20AF7D3E7D37B795_marshaled_pinvoke
{
	DataColumn_t07796C0DD83AD590E7C821E08FE04A38FE8B1A66* ___Column;
	int32_t ___IsDescending;
};
struct IndexField_t6285D0782FB7D55EC60F7DFB20AF7D3E7D37B795_marshaled_com
{
	DataColumn_t07796C0DD83AD590E7C821E08FE04A38FE8B1A66* ___Column;
	int32_t ___IsDescending;
};
struct Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175 
{
	int16_t ___m_value;
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	int64_t ___m_value;
};
struct IntPoint_t2AA3A6066E5DF1400D3A9CFA2F8E84A82132174A 
{
	int64_t ___N;
	int64_t ___X;
	int64_t ___Y;
	int64_t ___D;
	double ___NX;
	double ___NY;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct InternalCodePageDataItem_t6B4913D6507B26FFAE0B805874644D3DBE78F316 
{
	uint16_t ___codePage;
	uint16_t ___uiFamilyCodePage;
	uint32_t ___flags;
	String_t* ___Names;
};
struct InternalCodePageDataItem_t6B4913D6507B26FFAE0B805874644D3DBE78F316_marshaled_pinvoke
{
	uint16_t ___codePage;
	uint16_t ___uiFamilyCodePage;
	uint32_t ___flags;
	char* ___Names;
};
struct InternalCodePageDataItem_t6B4913D6507B26FFAE0B805874644D3DBE78F316_marshaled_com
{
	uint16_t ___codePage;
	uint16_t ___uiFamilyCodePage;
	uint32_t ___flags;
	Il2CppChar* ___Names;
};
struct InternalEncodingDataItem_t1D6DA6BCE8389C12ECC229A644D2CA45A86C06EB 
{
	String_t* ___webName;
	uint16_t ___codePage;
};
struct InternalEncodingDataItem_t1D6DA6BCE8389C12ECC229A644D2CA45A86C06EB_marshaled_pinvoke
{
	char* ___webName;
	uint16_t ___codePage;
};
struct InternalEncodingDataItem_t1D6DA6BCE8389C12ECC229A644D2CA45A86C06EB_marshaled_com
{
	Il2CppChar* ___webName;
	uint16_t ___codePage;
};
struct InterpretedFrameInfo_tEF62B79D176B8D032C22953AA0D5B581C4076321 
{
	String_t* ____methodName;
	DebugInfo_t03C716886CE7E99C1662D1C236CCC2CC6F18A167* ____debugInfo;
};
struct InterpretedFrameInfo_tEF62B79D176B8D032C22953AA0D5B581C4076321_marshaled_pinvoke
{
	char* ____methodName;
	DebugInfo_t03C716886CE7E99C1662D1C236CCC2CC6F18A167* ____debugInfo;
};
struct InterpretedFrameInfo_tEF62B79D176B8D032C22953AA0D5B581C4076321_marshaled_com
{
	Il2CppChar* ____methodName;
	DebugInfo_t03C716886CE7E99C1662D1C236CCC2CC6F18A167* ____debugInfo;
};
struct IntervalTreeNode_tDAA7D63276D62CD178C91CC7DF932C97896332EC 
{
	int64_t ___center;
	int32_t ___first;
	int32_t ___last;
	int32_t ___left;
	int32_t ___right;
};
struct JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 
{
	uint64_t ___jobGroup;
	int32_t ___version;
};
struct JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1 
{
	JsonDocument_tF96A1F7D1D40932B5EA6A97DA06E150B6CBDBE6F* ____parent;
	int32_t ____idx;
};
struct JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1_marshaled_pinvoke
{
	JsonDocument_tF96A1F7D1D40932B5EA6A97DA06E150B6CBDBE6F* ____parent;
	int32_t ____idx;
};
struct JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1_marshaled_com
{
	JsonDocument_tF96A1F7D1D40932B5EA6A97DA06E150B6CBDBE6F* ____parent;
	int32_t ____idx;
};
struct JsonEncodedText_tCBC417E15CEE99E4865E048489B637A186628D23 
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____utf8Value;
	String_t* ____value;
};
struct JsonEncodedText_tCBC417E15CEE99E4865E048489B637A186628D23_marshaled_pinvoke
{
	Il2CppSafeArray* ____utf8Value;
	char* ____value;
};
struct JsonEncodedText_tCBC417E15CEE99E4865E048489B637A186628D23_marshaled_com
{
	Il2CppSafeArray* ____utf8Value;
	Il2CppChar* ____value;
};
struct Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 
{
	float ___m_Time;
	float ___m_Value;
	float ___m_InTangent;
	float ___m_OutTangent;
	int32_t ___m_WeightedMode;
	float ___m_InWeight;
	float ___m_OutWeight;
};
struct LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB 
{
	int32_t ___m_Mask;
};
struct LigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94 
{
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___m_ComponentGlyphIDs;
	uint32_t ___m_LigatureGlyphID;
};
struct LigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94_marshaled_pinvoke
{
	Il2CppSafeArray* ___m_ComponentGlyphIDs;
	uint32_t ___m_LigatureGlyphID;
};
struct LigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94_marshaled_com
{
	Il2CppSafeArray* ___m_ComponentGlyphIDs;
	uint32_t ___m_LigatureGlyphID;
};
struct LightStats_tBB72AF16728E19482A5C8A6B65A94F7FFB9DA80C 
{
	int32_t ___totalLights;
	int32_t ___totalNormalMapUsage;
	int32_t ___totalVolumetricUsage;
	uint32_t ___blendStylesUsed;
	uint32_t ___blendStylesWithLights;
};
struct LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 
{
	float ___m_red;
	float ___m_green;
	float ___m_blue;
	float ___m_intensity;
};
struct LinkInfo_tE85DDAFDFBDA635E6405C88EE4FD5941A9243DD8 
{
	int32_t ___hashCode;
	int32_t ___linkIdFirstCharacterIndex;
	int32_t ___linkIdLength;
	int32_t ___linkTextfirstCharacterIndex;
	int32_t ___linkTextLength;
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___linkId;
	String_t* ___m_LinkIdString;
	String_t* ___m_LinkTextString;
};
struct LinkInfo_tE85DDAFDFBDA635E6405C88EE4FD5941A9243DD8_marshaled_pinvoke
{
	int32_t ___hashCode;
	int32_t ___linkIdFirstCharacterIndex;
	int32_t ___linkIdLength;
	int32_t ___linkTextfirstCharacterIndex;
	int32_t ___linkTextLength;
	uint8_t* ___linkId;
	char* ___m_LinkIdString;
	char* ___m_LinkTextString;
};
struct LinkInfo_tE85DDAFDFBDA635E6405C88EE4FD5941A9243DD8_marshaled_com
{
	int32_t ___hashCode;
	int32_t ___linkIdFirstCharacterIndex;
	int32_t ___linkIdLength;
	int32_t ___linkTextfirstCharacterIndex;
	int32_t ___linkTextLength;
	uint8_t* ___linkId;
	Il2CppChar* ___m_LinkIdString;
	Il2CppChar* ___m_LinkTextString;
};
struct LocalDefinition_t7B90DE35AAE919E1C79BA7EAFB99BF70589B1C02 
{
	int32_t ___U3CIndexU3Ek__BackingField;
	ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* ___U3CParameterU3Ek__BackingField;
};
struct LocalDefinition_t7B90DE35AAE919E1C79BA7EAFB99BF70589B1C02_marshaled_pinvoke
{
	int32_t ___U3CIndexU3Ek__BackingField;
	ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* ___U3CParameterU3Ek__BackingField;
};
struct LocalDefinition_t7B90DE35AAE919E1C79BA7EAFB99BF70589B1C02_marshaled_com
{
	int32_t ___U3CIndexU3Ek__BackingField;
	ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* ___U3CParameterU3Ek__BackingField;
};
struct MarkPositionAdjustment_t2523798D56F14A93A080D9D1298498325A51F436 
{
	float ___m_XPositionAdjustment;
	float ___m_YPositionAdjustment;
};
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B 
{
	int32_t ___index;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material;
	bool ___isDefaultMaterial;
	bool ___isFallbackMaterial;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial;
	float ___padding;
	int32_t ___referenceCount;
};
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_pinvoke
{
	int32_t ___index;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material;
	int32_t ___isDefaultMaterial;
	int32_t ___isFallbackMaterial;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial;
	float ___padding;
	int32_t ___referenceCount;
};
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_com
{
	int32_t ___index;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material;
	int32_t ___isDefaultMaterial;
	int32_t ___isFallbackMaterial;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial;
	float ___padding;
	int32_t ___referenceCount;
};
struct MaterialReference_t86DB0799D5C82869D4FF0A4F59624AED6910FD26 
{
	int32_t ___index;
	FontAsset_t61A6446D934E582651044E33D250EA8D306AB958* ___fontAsset;
	SpriteAsset_t1D3CF1D9DC350A4690CB09DE228A8B59F2F02313* ___spriteAsset;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material;
	bool ___isDefaultMaterial;
	bool ___isFallbackMaterial;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial;
	float ___padding;
	int32_t ___referenceCount;
};
struct MaterialReference_t86DB0799D5C82869D4FF0A4F59624AED6910FD26_marshaled_pinvoke
{
	int32_t ___index;
	FontAsset_t61A6446D934E582651044E33D250EA8D306AB958* ___fontAsset;
	SpriteAsset_t1D3CF1D9DC350A4690CB09DE228A8B59F2F02313* ___spriteAsset;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material;
	int32_t ___isDefaultMaterial;
	int32_t ___isFallbackMaterial;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial;
	float ___padding;
	int32_t ___referenceCount;
};
struct MaterialReference_t86DB0799D5C82869D4FF0A4F59624AED6910FD26_marshaled_com
{
	int32_t ___index;
	FontAsset_t61A6446D934E582651044E33D250EA8D306AB958* ___fontAsset;
	SpriteAsset_t1D3CF1D9DC350A4690CB09DE228A8B59F2F02313* ___spriteAsset;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material;
	int32_t ___isDefaultMaterial;
	int32_t ___isFallbackMaterial;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial;
	float ___padding;
	int32_t ___referenceCount;
};
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
	float ___m00;
	float ___m10;
	float ___m20;
	float ___m30;
	float ___m01;
	float ___m11;
	float ___m21;
	float ___m31;
	float ___m02;
	float ___m12;
	float ___m22;
	float ___m32;
	float ___m03;
	float ___m13;
	float ___m23;
	float ___m33;
};
struct MultipleSubstitutionRecord_t668A640AFADBD46E3D4EC3A8417D0A02764DF87B 
{
	uint32_t ___m_TargetGlyphID;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___m_SubstituteGlyphIDs;
};
struct MultipleSubstitutionRecord_t668A640AFADBD46E3D4EC3A8417D0A02764DF87B_marshaled_pinvoke
{
	uint32_t ___m_TargetGlyphID;
	Il2CppSafeArray* ___m_SubstituteGlyphIDs;
};
struct MultipleSubstitutionRecord_t668A640AFADBD46E3D4EC3A8417D0A02764DF87B_marshaled_com
{
	uint32_t ___m_TargetGlyphID;
	Il2CppSafeArray* ___m_SubstituteGlyphIDs;
};
struct NFTMetadata_t57B87F3F600CF2DB4051680552AC25ED94440D31 
{
	String_t* ___id;
	String_t* ___uri;
	String_t* ___description;
	String_t* ___image;
	String_t* ___name;
	String_t* ___external_url;
	RuntimeObject* ___attributes;
};
struct NFTMetadata_t57B87F3F600CF2DB4051680552AC25ED94440D31_marshaled_pinvoke
{
	char* ___id;
	char* ___uri;
	char* ___description;
	char* ___image;
	char* ___name;
	char* ___external_url;
	Il2CppIUnknown* ___attributes;
};
struct NFTMetadata_t57B87F3F600CF2DB4051680552AC25ED94440D31_marshaled_com
{
	Il2CppChar* ___id;
	Il2CppChar* ___uri;
	Il2CppChar* ___description;
	Il2CppChar* ___image;
	Il2CppChar* ___name;
	Il2CppChar* ___external_url;
	Il2CppIUnknown* ___attributes;
};
struct ObjectMetadata_t30C8C19944FF797CD9C60138709E5331AAC82449 
{
	Type_t* ___element_type;
	bool ___is_dictionary;
	RuntimeObject* ___properties;
};
struct ObjectMetadata_t30C8C19944FF797CD9C60138709E5331AAC82449_marshaled_pinvoke
{
	Type_t* ___element_type;
	int32_t ___is_dictionary;
	RuntimeObject* ___properties;
};
struct ObjectMetadata_t30C8C19944FF797CD9C60138709E5331AAC82449_marshaled_com
{
	Type_t* ___element_type;
	int32_t ___is_dictionary;
	RuntimeObject* ___properties;
};
struct Offset_tF4AF8F62C21FD6DCB5255F705A59CC10583E22C4 
{
	float ___m_Left;
	float ___m_Right;
	float ___m_Top;
	float ___m_Bottom;
};
struct PageInfo_tFFF6B289E9A37E4D69353B32F941421180DA5909 
{
	int32_t ___firstCharacterIndex;
	int32_t ___lastCharacterIndex;
	float ___ascender;
	float ___baseLine;
	float ___descender;
};
struct ParameterModifier_t75F1AF13B2AD5EDBD3A3579FD337D0A66E3FF510 
{
	BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ____byRef;
};
struct ParameterModifier_t75F1AF13B2AD5EDBD3A3579FD337D0A66E3FF510_marshaled_pinvoke
{
	int32_t* ____byRef;
};
struct ParameterModifier_t75F1AF13B2AD5EDBD3A3579FD337D0A66E3FF510_marshaled_com
{
	int32_t* ____byRef;
};
struct ParameterRef_tA842D9CDC9FF6DDF197615051AC940B647E3D117 
{
	uint64_t ___Key;
	JsonParameterInfo_t45C8BCDFD6A660285681888FCB559CC21DFED94D* ___Info;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___NameFromJson;
};
struct ParameterRef_tA842D9CDC9FF6DDF197615051AC940B647E3D117_marshaled_pinvoke
{
	uint64_t ___Key;
	JsonParameterInfo_t45C8BCDFD6A660285681888FCB559CC21DFED94D* ___Info;
	Il2CppSafeArray* ___NameFromJson;
};
struct ParameterRef_tA842D9CDC9FF6DDF197615051AC940B647E3D117_marshaled_com
{
	uint64_t ___Key;
	JsonParameterInfo_t45C8BCDFD6A660285681888FCB559CC21DFED94D* ___Info;
	Il2CppSafeArray* ___NameFromJson;
};
struct PendingRequestStruct_tD97E2F0E0DAF8AEEC3658FBA80300039C0F54837 
{
	int64_t ___Id;
	String_t* ___Topic;
	SessionRequest_1_t0D945BF99F771D7613383AF1EA42901FAF39A3E3* ___Parameters;
};
struct PendingRequestStruct_tD97E2F0E0DAF8AEEC3658FBA80300039C0F54837_marshaled_pinvoke
{
	int64_t ___Id;
	char* ___Topic;
	SessionRequest_1_t0D945BF99F771D7613383AF1EA42901FAF39A3E3* ___Parameters;
};
struct PendingRequestStruct_tD97E2F0E0DAF8AEEC3658FBA80300039C0F54837_marshaled_com
{
	int64_t ___Id;
	Il2CppChar* ___Topic;
	SessionRequest_1_t0D945BF99F771D7613383AF1EA42901FAF39A3E3* ___Parameters;
};
struct ProbeDilationSettings_t28A862582E313EFC300E6437FDCB9D9DC9A9A167 
{
	bool ___enableDilation;
	float ___dilationDistance;
	float ___dilationValidityThreshold;
	int32_t ___dilationIterations;
	bool ___squaredDistWeighting;
};
struct ProbeDilationSettings_t28A862582E313EFC300E6437FDCB9D9DC9A9A167_marshaled_pinvoke
{
	int32_t ___enableDilation;
	float ___dilationDistance;
	float ___dilationValidityThreshold;
	int32_t ___dilationIterations;
	int32_t ___squaredDistWeighting;
};
struct ProbeDilationSettings_t28A862582E313EFC300E6437FDCB9D9DC9A9A167_marshaled_com
{
	int32_t ___enableDilation;
	float ___dilationDistance;
	float ___dilationValidityThreshold;
	int32_t ___dilationIterations;
	int32_t ___squaredDistWeighting;
};
struct ProcessedProbeData_t81DA0DD14190AF02A979E73590320609D41502F8 
{
	HDProbe_tC20E8410994AE0C9042008CE779DAFFF7A7C861E* ___hdProbe;
	float ___weight;
};
struct ProcessedProbeData_t81DA0DD14190AF02A979E73590320609D41502F8_marshaled_pinvoke
{
	HDProbe_tC20E8410994AE0C9042008CE779DAFFF7A7C861E* ___hdProbe;
	float ___weight;
};
struct ProcessedProbeData_t81DA0DD14190AF02A979E73590320609D41502F8_marshaled_com
{
	HDProbe_tC20E8410994AE0C9042008CE779DAFFF7A7C861E* ___hdProbe;
	float ___weight;
};
struct PropertyMetadata_tA6CD4455C72B9D65D44FD6EE1581D04BA014C529 
{
	MemberInfo_t* ___Info;
	bool ___IsField;
	Type_t* ___Type;
};
struct PropertyMetadata_tA6CD4455C72B9D65D44FD6EE1581D04BA014C529_marshaled_pinvoke
{
	MemberInfo_t* ___Info;
	int32_t ___IsField;
	Type_t* ___Type;
};
struct PropertyMetadata_tA6CD4455C72B9D65D44FD6EE1581D04BA014C529_marshaled_com
{
	MemberInfo_t* ___Info;
	int32_t ___IsField;
	Type_t* ___Type;
};
struct PropertyRef_t6F3DCA5A0DEBB543DAFAE13FB6ED6FBF92F894A7 
{
	uint64_t ___Key;
	JsonPropertyInfo_t8870BF608DD0641AC29D55C6747C5C5C7340876E* ___Info;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___NameFromJson;
};
struct PropertyRef_t6F3DCA5A0DEBB543DAFAE13FB6ED6FBF92F894A7_marshaled_pinvoke
{
	uint64_t ___Key;
	JsonPropertyInfo_t8870BF608DD0641AC29D55C6747C5C5C7340876E* ___Info;
	Il2CppSafeArray* ___NameFromJson;
};
struct PropertyRef_t6F3DCA5A0DEBB543DAFAE13FB6ED6FBF92F894A7_marshaled_com
{
	uint64_t ___Key;
	JsonPropertyInfo_t8870BF608DD0641AC29D55C6747C5C5C7340876E* ___Info;
	Il2CppSafeArray* ___NameFromJson;
};
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	float ___x;
	float ___y;
	float ___z;
	float ___w;
};
struct RangePositionInfo_t27BA7EB1EC12061DD5ACFD24BD71A915D412223F 
{
	BitSet_t89F906D542C052F4565FBEF32E1E9713B966026B* ___curpos;
	DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615* ___rangeCounters;
};
struct RangePositionInfo_t27BA7EB1EC12061DD5ACFD24BD71A915D412223F_marshaled_pinvoke
{
	BitSet_t89F906D542C052F4565FBEF32E1E9713B966026B* ___curpos;
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F* ___rangeCounters;
};
struct RangePositionInfo_t27BA7EB1EC12061DD5ACFD24BD71A915D412223F_marshaled_com
{
	BitSet_t89F906D542C052F4565FBEF32E1E9713B966026B* ___curpos;
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F* ___rangeCounters;
};
struct RayTracingInstanceCullingTest_t6DA9023466CE29C537155A919FEDD9A95D8D5A21 
{
	uint32_t ___instanceMask;
	int32_t ___layerMask;
	int32_t ___shadowCastingModeMask;
	bool ___allowOpaqueMaterials;
	bool ___allowTransparentMaterials;
	bool ___allowAlphaTestedMaterials;
};
struct RayTracingInstanceCullingTest_t6DA9023466CE29C537155A919FEDD9A95D8D5A21_marshaled_pinvoke
{
	uint32_t ___instanceMask;
	int32_t ___layerMask;
	int32_t ___shadowCastingModeMask;
	int32_t ___allowOpaqueMaterials;
	int32_t ___allowTransparentMaterials;
	int32_t ___allowAlphaTestedMaterials;
};
struct RayTracingInstanceCullingTest_t6DA9023466CE29C537155A919FEDD9A95D8D5A21_marshaled_com
{
	uint32_t ___instanceMask;
	int32_t ___layerMask;
	int32_t ___shadowCastingModeMask;
	int32_t ___allowOpaqueMaterials;
	int32_t ___allowTransparentMaterials;
	int32_t ___allowAlphaTestedMaterials;
};
struct RayTracingInstanceMaterialCRC_tD542B9A5617C59DDA00598FD789005C623D87931 
{
	int32_t ___instanceID;
	int32_t ___crc;
};
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	float ___m_XMin;
	float ___m_YMin;
	float ___m_Width;
	float ___m_Height;
};
struct RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 
{
	int32_t ___m_XMin;
	int32_t ___m_YMin;
	int32_t ___m_Width;
	int32_t ___m_Height;
};
struct ReferenceEqualsWrapper_tC5C782AAD0F1CA019DF6257DAA92C92F62DA9C94 
{
	RuntimeObject* ____object;
};
struct ReferenceEqualsWrapper_tC5C782AAD0F1CA019DF6257DAA92C92F62DA9C94_marshaled_pinvoke
{
	Il2CppIUnknown* ____object;
};
struct ReferenceEqualsWrapper_tC5C782AAD0F1CA019DF6257DAA92C92F62DA9C94_marshaled_com
{
	Il2CppIUnknown* ____object;
};
struct RenderInstancedDataLayout_t06AF33510AC89DBD09A3A161FF809EDFAB30EC7A 
{
	int32_t ___U3CsizeU3Ek__BackingField;
	int32_t ___U3CoffsetObjectToWorldU3Ek__BackingField;
	int32_t ___U3CoffsetPrevObjectToWorldU3Ek__BackingField;
	int32_t ___U3CoffsetRenderingLayerMaskU3Ek__BackingField;
};
struct RenderQueueRange_t7518252AA6426B1EA45D3D9B394F304EEF784D71 
{
	int32_t ___m_LowerBound;
	int32_t ___m_UpperBound;
};
struct RenderTargetBlendState_t51229A3F09EE698F8E49731F1BC5BB77DBEDC4C7 
{
	uint8_t ___m_WriteMask;
	uint8_t ___m_SourceColorBlendMode;
	uint8_t ___m_DestinationColorBlendMode;
	uint8_t ___m_SourceAlphaBlendMode;
	uint8_t ___m_DestinationAlphaBlendMode;
	uint8_t ___m_ColorBlendOperation;
	uint8_t ___m_AlphaBlendOperation;
	uint8_t ___m_Padding;
};
struct RendererListHandle_t21AFDDE69B0048546497B890088B880F8080C62D 
{
	bool ___m_IsValid;
	int32_t ___U3ChandleU3Ek__BackingField;
};
struct RendererListHandle_t21AFDDE69B0048546497B890088B880F8080C62D_marshaled_pinvoke
{
	int32_t ___m_IsValid;
	int32_t ___U3ChandleU3Ek__BackingField;
};
struct RendererListHandle_t21AFDDE69B0048546497B890088B880F8080C62D_marshaled_com
{
	int32_t ___m_IsValid;
	int32_t ___U3ChandleU3Ek__BackingField;
};
struct ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122 
{
	RuntimeObject* ____value;
	int32_t ____dataPos;
};
struct ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122_marshaled_pinvoke
{
	Il2CppIUnknown* ____value;
	int32_t ____dataPos;
};
struct ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122_marshaled_com
{
	Il2CppIUnknown* ____value;
	int32_t ____dataPos;
};
struct RuleMatcher_t327CFEB02C81AA20E639DE949DCBBAB5E92FF28E 
{
	StyleSheet_t6FAF43FCDB45BC6BED0522A222FD4C1A9BB10428* ___sheet;
	StyleComplexSelector_tE46C29F65FDBA48D3152781187401C8B55B7D8AD* ___complexSelector;
};
struct RuleMatcher_t327CFEB02C81AA20E639DE949DCBBAB5E92FF28E_marshaled_pinvoke
{
	StyleSheet_t6FAF43FCDB45BC6BED0522A222FD4C1A9BB10428* ___sheet;
	StyleComplexSelector_tE46C29F65FDBA48D3152781187401C8B55B7D8AD* ___complexSelector;
};
struct RuleMatcher_t327CFEB02C81AA20E639DE949DCBBAB5E92FF28E_marshaled_com
{
	StyleSheet_t6FAF43FCDB45BC6BED0522A222FD4C1A9BB10428* ___sheet;
	StyleComplexSelector_tE46C29F65FDBA48D3152781187401C8B55B7D8AD* ___complexSelector;
};
struct RuntimeLabel_tD233E2C3F1E1A1877FFE3E9DFB3A69C57D40A548 
{
	int32_t ___Index;
	int32_t ___StackDepth;
	int32_t ___ContinuationStackDepth;
};
struct SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5 
{
	int8_t ___m_value;
};
struct ScalableImage_t64F0F6F75D1099EF5D595E70CA1A2A7B9914E80F 
{
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___normalImage;
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___highResolutionImage;
};
struct ScalableImage_t64F0F6F75D1099EF5D595E70CA1A2A7B9914E80F_marshaled_pinvoke
{
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___normalImage;
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___highResolutionImage;
};
struct ScalableImage_t64F0F6F75D1099EF5D595E70CA1A2A7B9914E80F_marshaled_com
{
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___normalImage;
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___highResolutionImage;
};
struct ScalableSettingSchemaId_t52565FBE2716C21A2C559CD569F2AD854E8DC9E9 
{
	String_t* ___m_Id;
};
struct ScalableSettingSchemaId_t52565FBE2716C21A2C559CD569F2AD854E8DC9E9_marshaled_pinvoke
{
	char* ___m_Id;
};
struct ScalableSettingSchemaId_t52565FBE2716C21A2C559CD569F2AD854E8DC9E9_marshaled_com
{
	Il2CppChar* ___m_Id;
};
struct Scene_tA1DC762B79745EB5140F054C884855B922318356 
{
	int32_t ___m_Handle;
};
struct SecondarySpriteTexture_tAB48BE37F20C61C85B24FB2E38F751082AF1A07B 
{
	String_t* ___name;
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___texture;
};
struct SecondarySpriteTexture_tAB48BE37F20C61C85B24FB2E38F751082AF1A07B_marshaled_pinvoke
{
	char* ___name;
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___texture;
};
struct SecondarySpriteTexture_tAB48BE37F20C61C85B24FB2E38F751082AF1A07B_marshaled_com
{
	Il2CppChar* ___name;
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___texture;
};
struct SelectorMatchRecord_t1E93CDB54312CFB4A67768BB25ABB9AFB31BC5D7 
{
	StyleSheet_t6FAF43FCDB45BC6BED0522A222FD4C1A9BB10428* ___sheet;
	int32_t ___styleSheetIndexInStack;
	StyleComplexSelector_tE46C29F65FDBA48D3152781187401C8B55B7D8AD* ___complexSelector;
};
struct SelectorMatchRecord_t1E93CDB54312CFB4A67768BB25ABB9AFB31BC5D7_marshaled_pinvoke
{
	StyleSheet_t6FAF43FCDB45BC6BED0522A222FD4C1A9BB10428* ___sheet;
	int32_t ___styleSheetIndexInStack;
	StyleComplexSelector_tE46C29F65FDBA48D3152781187401C8B55B7D8AD* ___complexSelector;
};
struct SelectorMatchRecord_t1E93CDB54312CFB4A67768BB25ABB9AFB31BC5D7_marshaled_com
{
	StyleSheet_t6FAF43FCDB45BC6BED0522A222FD4C1A9BB10428* ___sheet;
	int32_t ___styleSheetIndexInStack;
	StyleComplexSelector_tE46C29F65FDBA48D3152781187401C8B55B7D8AD* ___complexSelector;
};
struct ShaderKeyword_t683126BB2B2337DB41954B0FE0DA7EBAA7028661 
{
	String_t* ___m_Name;
	uint32_t ___m_Index;
	bool ___m_IsLocal;
	bool ___m_IsCompute;
	bool ___m_IsValid;
};
struct ShaderKeyword_t683126BB2B2337DB41954B0FE0DA7EBAA7028661_marshaled_pinvoke
{
	char* ___m_Name;
	uint32_t ___m_Index;
	int32_t ___m_IsLocal;
	int32_t ___m_IsCompute;
	int32_t ___m_IsValid;
};
struct ShaderKeyword_t683126BB2B2337DB41954B0FE0DA7EBAA7028661_marshaled_com
{
	Il2CppChar* ___m_Name;
	uint32_t ___m_Index;
	int32_t ___m_IsLocal;
	int32_t ___m_IsCompute;
	int32_t ___m_IsValid;
};
struct ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0 
{
	int32_t ___m_Id;
};
struct ShaderVariablesRaytracing_tCD939378DEB0EE78E6BD4CD460734BE7E21CDAE4 
{
	float ____RayTracingPadding0;
	float ____RaytracingRayMaxLength;
	int32_t ____RaytracingNumSamples;
	int32_t ____RaytracingSampleIndex;
	float ____RaytracingIntensityClamp;
	int32_t ____RayCountEnabled;
	int32_t ____RaytracingPreExposition;
	float ____RaytracingCameraNearPlane;
	float ____RaytracingPixelSpreadAngle;
	float ____RaytracingReflectionMinSmoothness;
	float ____RaytracingReflectionSmoothnessFadeStart;
	int32_t ____RaytracingMinRecursion;
	int32_t ____RaytracingMaxRecursion;
	int32_t ____RayTracingDiffuseLightingOnly;
	float ____DirectionalShadowFallbackIntensity;
	float ____RayTracingLodBias;
	int32_t ____RayTracingRayMissFallbackHierarchy;
	int32_t ____RayTracingLastBounceFallbackHierarchy;
	int32_t ____RayTracingClampingFlag;
	float ____RayTracingAmbientProbeDimmer;
	int32_t ____RayTracingAPVRayMiss;
	float ____RayTracingRayBias;
	float ____RayTracingDistantRayBias;
	int32_t ____PaddingRT0;
};
struct ShaderVariablesScreenSpaceReflection_tA0A0C725A618D20BEBA8B0ADC06643C85D9F1DA5 
{
	float ____SsrThicknessScale;
	float ____SsrThicknessBias;
	int32_t ____SsrStencilBit;
	int32_t ____SsrIterLimit;
	float ____SsrRoughnessFadeEnd;
	float ____SsrRoughnessFadeRcpLength;
	float ____SsrRoughnessFadeEndTimesRcpLength;
	float ____SsrEdgeFadeRcpLength;
	int32_t ____SsrDepthPyramidMaxMip;
	int32_t ____SsrColorPyramidMaxMip;
	int32_t ____SsrReflectsSky;
	float ____SsrAccumulationAmount;
	float ____SsrPBRSpeedRejection;
	float ____SsrPBRBias;
	float ____SsrPRBSpeedRejectionScalerFactor;
	float ____SsrPBRPad0;
};
struct SignerPermissions_tC55810C9339598226586F847674303571824125C 
{
	String_t* ___startDate;
	String_t* ___expirationDate;
	String_t* ___nativeTokenLimitPerTransaction;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___approvedCallTargets;
};
struct SignerPermissions_tC55810C9339598226586F847674303571824125C_marshaled_pinvoke
{
	char* ___startDate;
	char* ___expirationDate;
	char* ___nativeTokenLimitPerTransaction;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___approvedCallTargets;
};
struct SignerPermissions_tC55810C9339598226586F847674303571824125C_marshaled_com
{
	Il2CppChar* ___startDate;
	Il2CppChar* ___expirationDate;
	Il2CppChar* ___nativeTokenLimitPerTransaction;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___approvedCallTargets;
};
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	float ___m_value;
};
struct SortingLayer_tB4F4D4E2CE652DB0881CDAB9E329DE9833C2B9C3 
{
	int32_t ___m_Id;
};
struct SortingLayerRange_t96D04CFB4E8824978FEB2CFFFCFEAC37E56D52C9 
{
	int16_t ___m_LowerBound;
	int16_t ___m_UpperBound;
};
struct SplineKnotIndex_t534896C5AC577CB9B0E1D694808A2491D2EEE38F 
{
	int32_t ___Spline;
	int32_t ___Knot;
};
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD 
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite;
};
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_pinvoke
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite;
};
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_com
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite;
};
struct SqlBinary_tEFB13C14B44E4388798A2F7DB48438E16DE4E347 
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____value;
};
struct SqlBinary_tEFB13C14B44E4388798A2F7DB48438E16DE4E347_marshaled_pinvoke
{
	Il2CppSafeArray* ____value;
};
struct SqlBinary_tEFB13C14B44E4388798A2F7DB48438E16DE4E347_marshaled_com
{
	Il2CppSafeArray* ____value;
};
struct SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7 
{
	uint8_t ___m_value;
};
struct SqlByte_t39089DB566BD0047D5ED18807B145019FB0F0B46 
{
	bool ___m_fNotNull;
	uint8_t ___m_value;
};
struct SqlByte_t39089DB566BD0047D5ED18807B145019FB0F0B46_marshaled_pinvoke
{
	int32_t ___m_fNotNull;
	uint8_t ___m_value;
};
struct SqlByte_t39089DB566BD0047D5ED18807B145019FB0F0B46_marshaled_com
{
	int32_t ___m_fNotNull;
	uint8_t ___m_value;
};
struct SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2 
{
	bool ___m_fNotNull;
	int32_t ___m_day;
	int32_t ___m_time;
};
struct SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2_marshaled_pinvoke
{
	int32_t ___m_fNotNull;
	int32_t ___m_day;
	int32_t ___m_time;
};
struct SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2_marshaled_com
{
	int32_t ___m_fNotNull;
	int32_t ___m_day;
	int32_t ___m_time;
};
struct SqlDecimal_t7A833A6D857AB79C4B2E4011CB728AEC6954D406 
{
	uint8_t ____bStatus;
	uint8_t ____bLen;
	uint8_t ____bPrec;
	uint8_t ____bScale;
	uint32_t ____data1;
	uint32_t ____data2;
	uint32_t ____data3;
	uint32_t ____data4;
};
struct SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 
{
	bool ___m_fNotNull;
	double ___m_value;
};
struct SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98_marshaled_pinvoke
{
	int32_t ___m_fNotNull;
	double ___m_value;
};
struct SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98_marshaled_com
{
	int32_t ___m_fNotNull;
	double ___m_value;
};
struct SqlGuid_t93C33E370E5D3A344A15F9EFD9A2D4177576DED7 
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___m_value;
};
struct SqlGuid_t93C33E370E5D3A344A15F9EFD9A2D4177576DED7_marshaled_pinvoke
{
	Il2CppSafeArray* ___m_value;
};
struct SqlGuid_t93C33E370E5D3A344A15F9EFD9A2D4177576DED7_marshaled_com
{
	Il2CppSafeArray* ___m_value;
};
struct SqlInt16_t30ED9856D3373398B6005B34D664C64EE224260B 
{
	bool ___m_fNotNull;
	int16_t ___m_value;
};
struct SqlInt16_t30ED9856D3373398B6005B34D664C64EE224260B_marshaled_pinvoke
{
	int32_t ___m_fNotNull;
	int16_t ___m_value;
};
struct SqlInt16_t30ED9856D3373398B6005B34D664C64EE224260B_marshaled_com
{
	int32_t ___m_fNotNull;
	int16_t ___m_value;
};
struct SqlInt32_t50DA35BC9FD9C46AA933DCF8195B2EE92064D152 
{
	bool ___m_fNotNull;
	int32_t ___m_value;
};
struct SqlInt32_t50DA35BC9FD9C46AA933DCF8195B2EE92064D152_marshaled_pinvoke
{
	int32_t ___m_fNotNull;
	int32_t ___m_value;
};
struct SqlInt32_t50DA35BC9FD9C46AA933DCF8195B2EE92064D152_marshaled_com
{
	int32_t ___m_fNotNull;
	int32_t ___m_value;
};
struct SqlInt64_t6F2A4BE192CBAA1059DDAB0D02FEDF4EDEAD6272 
{
	bool ___m_fNotNull;
	int64_t ___m_value;
};
struct SqlInt64_t6F2A4BE192CBAA1059DDAB0D02FEDF4EDEAD6272_marshaled_pinvoke
{
	int32_t ___m_fNotNull;
	int64_t ___m_value;
};
struct SqlInt64_t6F2A4BE192CBAA1059DDAB0D02FEDF4EDEAD6272_marshaled_com
{
	int32_t ___m_fNotNull;
	int64_t ___m_value;
};
struct SqlMoney_t88BD587F422EA297502BC57B18010762C03531BB 
{
	bool ____fNotNull;
	int64_t ____value;
};
struct SqlMoney_t88BD587F422EA297502BC57B18010762C03531BB_marshaled_pinvoke
{
	int32_t ____fNotNull;
	int64_t ____value;
};
struct SqlMoney_t88BD587F422EA297502BC57B18010762C03531BB_marshaled_com
{
	int32_t ____fNotNull;
	int64_t ____value;
};
struct SqlSingle_tE807CFF8CCE4E77475D51223A37ADC73BC205767 
{
	bool ____fNotNull;
	float ____value;
};
struct SqlSingle_tE807CFF8CCE4E77475D51223A37ADC73BC205767_marshaled_pinvoke
{
	int32_t ____fNotNull;
	float ____value;
};
struct SqlSingle_tE807CFF8CCE4E77475D51223A37ADC73BC205767_marshaled_com
{
	int32_t ____fNotNull;
	float ____value;
};
struct StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9 
{
	uint8_t ___m_Enabled;
	uint8_t ___m_ReadMask;
	uint8_t ___m_WriteMask;
	uint8_t ___m_Padding;
	uint8_t ___m_CompareFunctionFront;
	uint8_t ___m_PassOperationFront;
	uint8_t ___m_FailOperationFront;
	uint8_t ___m_ZFailOperationFront;
	uint8_t ___m_CompareFunctionBack;
	uint8_t ___m_PassOperationBack;
	uint8_t ___m_FailOperationBack;
	uint8_t ___m_ZFailOperationBack;
};
struct StyleVariable_t5D4DEC936102A13961F4F2C6214B83D6CDC56269 
{
	String_t* ___name;
	StyleSheet_t6FAF43FCDB45BC6BED0522A222FD4C1A9BB10428* ___sheet;
	StyleValueHandleU5BU5D_t66B7732469E9E30B1FB9A6E386315DAB36914ADE* ___handles;
};
struct StyleVariable_t5D4DEC936102A13961F4F2C6214B83D6CDC56269_marshaled_pinvoke
{
	char* ___name;
	StyleSheet_t6FAF43FCDB45BC6BED0522A222FD4C1A9BB10428* ___sheet;
	StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D* ___handles;
};
struct StyleVariable_t5D4DEC936102A13961F4F2C6214B83D6CDC56269_marshaled_com
{
	Il2CppChar* ___name;
	StyleSheet_t6FAF43FCDB45BC6BED0522A222FD4C1A9BB10428* ___sheet;
	StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D* ___handles;
};
struct TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC 
{
	uint8_t ___bold;
	uint8_t ___italic;
	uint8_t ___underline;
	uint8_t ___strikethrough;
	uint8_t ___highlight;
	uint8_t ___superscript;
	uint8_t ___subscript;
	uint8_t ___uppercase;
	uint8_t ___lowercase;
	uint8_t ___smallcaps;
};
struct TMP_FontWeightPair_t2835DA6BF1309AC6C817ECF878232CCF9DDB703E 
{
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___regularTypeface;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___italicTypeface;
};
struct TMP_FontWeightPair_t2835DA6BF1309AC6C817ECF878232CCF9DDB703E_marshaled_pinvoke
{
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___regularTypeface;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___italicTypeface;
};
struct TMP_FontWeightPair_t2835DA6BF1309AC6C817ECF878232CCF9DDB703E_marshaled_com
{
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___regularTypeface;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___italicTypeface;
};
struct TMP_LinkInfo_t9DC08E8BF8C5E8094AFF8C9FB3C251AF88B92DA6 
{
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___textComponent;
	int32_t ___hashCode;
	int32_t ___linkIdFirstCharacterIndex;
	int32_t ___linkIdLength;
	int32_t ___linkTextfirstCharacterIndex;
	int32_t ___linkTextLength;
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___linkID;
};
struct TMP_LinkInfo_t9DC08E8BF8C5E8094AFF8C9FB3C251AF88B92DA6_marshaled_pinvoke
{
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___textComponent;
	int32_t ___hashCode;
	int32_t ___linkIdFirstCharacterIndex;
	int32_t ___linkIdLength;
	int32_t ___linkTextfirstCharacterIndex;
	int32_t ___linkTextLength;
	uint8_t* ___linkID;
};
struct TMP_LinkInfo_t9DC08E8BF8C5E8094AFF8C9FB3C251AF88B92DA6_marshaled_com
{
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___textComponent;
	int32_t ___hashCode;
	int32_t ___linkIdFirstCharacterIndex;
	int32_t ___linkIdLength;
	int32_t ___linkTextfirstCharacterIndex;
	int32_t ___linkTextLength;
	uint8_t* ___linkID;
};
struct TMP_MeshInfo_t320C52212E9D672EBB5F5C18C3E0700AA33DD76B 
{
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___mesh;
	int32_t ___vertexCount;
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___vertices;
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___normals;
	Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___tangents;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___uvs0;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___uvs2;
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___colors32;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___triangles;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material;
};
struct TMP_MeshInfo_t320C52212E9D672EBB5F5C18C3E0700AA33DD76B_marshaled_pinvoke
{
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___mesh;
	int32_t ___vertexCount;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___vertices;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___normals;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* ___tangents;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___uvs0;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___uvs2;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* ___colors32;
	Il2CppSafeArray* ___triangles;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material;
};
struct TMP_MeshInfo_t320C52212E9D672EBB5F5C18C3E0700AA33DD76B_marshaled_com
{
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___mesh;
	int32_t ___vertexCount;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___vertices;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___normals;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* ___tangents;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___uvs0;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___uvs2;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* ___colors32;
	Il2CppSafeArray* ___triangles;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material;
};
struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 
{
	float ___m_Left;
	float ___m_Right;
	float ___m_Top;
	float ___m_Bottom;
};
struct TMP_PageInfo_t062E56948480FAB066C168E14DC79CC83CC369B4 
{
	int32_t ___firstCharacterIndex;
	int32_t ___lastCharacterIndex;
	float ___ascender;
	float ___baseLine;
	float ___descender;
};
struct TMP_WordInfo_t825112AF0B76E4461F9C7DD336A02CC6A090A983 
{
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___textComponent;
	int32_t ___firstCharacterIndex;
	int32_t ___lastCharacterIndex;
	int32_t ___characterCount;
};
struct TMP_WordInfo_t825112AF0B76E4461F9C7DD336A02CC6A090A983_marshaled_pinvoke
{
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___textComponent;
	int32_t ___firstCharacterIndex;
	int32_t ___lastCharacterIndex;
	int32_t ___characterCount;
};
struct TMP_WordInfo_t825112AF0B76E4461F9C7DD336A02CC6A090A983_marshaled_com
{
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___textComponent;
	int32_t ___firstCharacterIndex;
	int32_t ___lastCharacterIndex;
	int32_t ___characterCount;
};
struct TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09 
{
	int32_t ___tileX;
	int32_t ___tileZ;
};
struct TextureId_tFF4B4AAE53408AB10B0B89CCA5F7B50CF2535E58 
{
	int32_t ___m_Index;
};
struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A 
{
	int64_t ____ticks;
};
struct TreeItem_t6B0F84E487FB869A51E1DA4987183127271F4F90 
{
	int32_t ___U3CidU3Ek__BackingField;
	int32_t ___U3CparentIdU3Ek__BackingField;
	RuntimeObject* ___U3CchildrenIdsU3Ek__BackingField;
};
struct TreeItem_t6B0F84E487FB869A51E1DA4987183127271F4F90_marshaled_pinvoke
{
	int32_t ___U3CidU3Ek__BackingField;
	int32_t ___U3CparentIdU3Ek__BackingField;
	RuntimeObject* ___U3CchildrenIdsU3Ek__BackingField;
};
struct TreeItem_t6B0F84E487FB869A51E1DA4987183127271F4F90_marshaled_com
{
	int32_t ___U3CidU3Ek__BackingField;
	int32_t ___U3CparentIdU3Ek__BackingField;
	RuntimeObject* ___U3CchildrenIdsU3Ek__BackingField;
};
struct UILineInfo_tC6FF4F85BD2316FADA2148A1789B3FF0B05A6CAC 
{
	int32_t ___startCharIdx;
	int32_t ___height;
	float ___topY;
	float ___leading;
};
struct UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455 
{
	uint16_t ___m_value;
};
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	uint32_t ___m_value;
};
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	uint64_t ___m_value;
};
struct UIntPtr_t 
{
	void* ____pointer;
};
struct UdConvInfo_t3290B09FC3242E96E0F6D3FB81B325E2A44ABD8F 
{
	MethWithType_t5224495654DCC7D33AA524C25FB07822420735B2* ___Meth;
	bool ___SrcImplicit;
	bool ___DstImplicit;
};
struct UdConvInfo_t3290B09FC3242E96E0F6D3FB81B325E2A44ABD8F_marshaled_pinvoke
{
	MethWithType_t5224495654DCC7D33AA524C25FB07822420735B2* ___Meth;
	int32_t ___SrcImplicit;
	int32_t ___DstImplicit;
};
struct UdConvInfo_t3290B09FC3242E96E0F6D3FB81B325E2A44ABD8F_marshaled_com
{
	MethWithType_t5224495654DCC7D33AA524C25FB07822420735B2* ___Meth;
	int32_t ___SrcImplicit;
	int32_t ___DstImplicit;
};
struct Vec3_t7EDAE0ABBD2BC4C43A47B8BEF6C079AB55FB0CBB 
{
	float ___X;
	float ___Y;
	float ___Z;
};
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	float ___x;
	float ___y;
};
struct Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A 
{
	int32_t ___m_X;
	int32_t ___m_Y;
};
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	float ___x;
	float ___y;
	float ___z;
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
struct WordInfo_tA466206097891A5A2590896EE164AFC406EB060D 
{
	int32_t ___firstCharacterIndex;
	int32_t ___lastCharacterIndex;
	int32_t ___characterCount;
};
struct XPathNode_t4A9DCD8092B3B7DBA0A6DA09C03DB5274D43C3CA 
{
	XPathNodeInfoAtom_t4E1898849C241487219F72C0B61B5D474E1059FE* ____info;
	uint16_t ____idxSibling;
	uint16_t ____idxParent;
	uint16_t ____idxSimilar;
	uint16_t ____posOffset;
	uint32_t ____props;
	String_t* ____value;
};
struct XPathNode_t4A9DCD8092B3B7DBA0A6DA09C03DB5274D43C3CA_marshaled_pinvoke
{
	XPathNodeInfoAtom_t4E1898849C241487219F72C0B61B5D474E1059FE* ____info;
	uint16_t ____idxSibling;
	uint16_t ____idxParent;
	uint16_t ____idxSimilar;
	uint16_t ____posOffset;
	uint32_t ____props;
	char* ____value;
};
struct XPathNode_t4A9DCD8092B3B7DBA0A6DA09C03DB5274D43C3CA_marshaled_com
{
	XPathNodeInfoAtom_t4E1898849C241487219F72C0B61B5D474E1059FE* ____info;
	uint16_t ____idxSibling;
	uint16_t ____idxParent;
	uint16_t ____idxSimilar;
	uint16_t ____posOffset;
	uint32_t ____props;
	Il2CppChar* ____value;
};
struct XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 
{
	XPathNodeU5BU5D_tABD91BA95C61EF982E9FB7D2386FCE4C39F8B90C* ____page;
	int32_t ____idx;
};
struct XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470_marshaled_pinvoke
{
	XPathNode_t4A9DCD8092B3B7DBA0A6DA09C03DB5274D43C3CA_marshaled_pinvoke* ____page;
	int32_t ____idx;
};
struct XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470_marshaled_com
{
	XPathNode_t4A9DCD8092B3B7DBA0A6DA09C03DB5274D43C3CA_marshaled_com* ____page;
	int32_t ____idx;
};
struct double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA 
{
	double ___x;
	double ___y;
};
struct float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA 
{
	float ___x;
	float ___y;
};
struct float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E 
{
	float ___x;
	float ___y;
	float ___z;
};
struct float4_t89D9A294E7A79BD81BFBDD18654508532958555E 
{
	float ___x;
	float ___y;
	float ___z;
	float ___w;
};
struct int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A 
{
	int32_t ___x;
	int32_t ___y;
};
struct int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF 
{
	int32_t ___x;
	int32_t ___y;
	int32_t ___z;
};
struct int4_tBA77D4945786DE82C3A487B33955EA1004996052 
{
	int32_t ___x;
	int32_t ___y;
	int32_t ___z;
	int32_t ___w;
};
struct U3C_CubeScaleOffsetU3Ee__FixedBuffer_t396807C56AE67FFABD13B1E9A570A73D7CE47270 
{
	union
	{
		struct
		{
			float ___FixedElementField;
		};
		uint8_t U3C_CubeScaleOffsetU3Ee__FixedBuffer_t396807C56AE67FFABD13B1E9A570A73D7CE47270__padding[2048];
	};
};
struct U3C_PlanarCaptureVPU3Ee__FixedBuffer_t4DAACC1882E6CBCCE2B008570CE0405D69294039 
{
	union
	{
		struct
		{
			float ___FixedElementField;
		};
		uint8_t U3C_PlanarCaptureVPU3Ee__FixedBuffer_t4DAACC1882E6CBCCE2B008570CE0405D69294039__padding[1024];
	};
};
struct U3C_PlanarScaleOffsetU3Ee__FixedBuffer_t05EA52A54329CA1A4A10DC4B37834705C654ADAF 
{
	union
	{
		struct
		{
			float ___FixedElementField;
		};
		uint8_t U3C_PlanarScaleOffsetU3Ee__FixedBuffer_t05EA52A54329CA1A4A10DC4B37834705C654ADAF__padding[256];
	};
};
struct U3C_CubeScaleOffsetRTU3Ee__FixedBuffer_tA389321B23D0E9608C1AA1B743B352487A6F2940 
{
	union
	{
		struct
		{
			float ___FixedElementField;
		};
		uint8_t U3C_CubeScaleOffsetRTU3Ee__FixedBuffer_tA389321B23D0E9608C1AA1B743B352487A6F2940__padding[2048];
	};
};
struct U3C_PlanarCaptureVPRTU3Ee__FixedBuffer_t94BE785F8B39D22C01E7D9602DE7A410366EDEEC 
{
	union
	{
		struct
		{
			float ___FixedElementField;
		};
		uint8_t U3C_PlanarCaptureVPRTU3Ee__FixedBuffer_t94BE785F8B39D22C01E7D9602DE7A410366EDEEC__padding[1024];
	};
};
struct U3C_PlanarScaleOffsetRTU3Ee__FixedBuffer_tEEB1A945B972415B074D6881A669FDA6059EC948 
{
	union
	{
		struct
		{
			float ___FixedElementField;
		};
		uint8_t U3C_PlanarScaleOffsetRTU3Ee__FixedBuffer_tEEB1A945B972415B074D6881A669FDA6059EC948__padding[256];
	};
};
struct U3CcascadeBordersU3Ee__FixedBuffer_t20736ECB4257ACA4B697A048414E85485AA0ACB0 
{
	union
	{
		struct
		{
			float ___FixedElementField;
		};
		uint8_t U3CcascadeBordersU3Ee__FixedBuffer_t20736ECB4257ACA4B697A048414E85485AA0ACB0__padding[16];
	};
};
struct U3CsphereCascadesU3Ee__FixedBuffer_t29E9A28A667001D3EC3910FDF2C6402ACC3CB6D2 
{
	union
	{
		struct
		{
			float ___FixedElementField;
		};
		uint8_t U3CsphereCascadesU3Ee__FixedBuffer_t29E9A28A667001D3EC3910FDF2C6402ACC3CB6D2__padding[64];
	};
};
struct U3CrenderTargetIdsU3Ee__FixedBuffer_tFE129E2590DE72A1D57D7367CFEE0F7C9C8523F5 
{
	union
	{
		struct
		{
			int32_t ___FixedElementField;
		};
		uint8_t U3CrenderTargetIdsU3Ee__FixedBuffer_tFE129E2590DE72A1D57D7367CFEE0F7C9C8523F5__padding[16];
	};
};
struct U3CrenderTargetUsedU3Ee__FixedBuffer_tFD6BC31F926EE730D12C5E649A0B4B46B3C49647 
{
	union
	{
		struct
		{
			bool ___FixedElementField;
		};
		uint8_t U3CrenderTargetUsedU3Ee__FixedBuffer_tFD6BC31F926EE730D12C5E649A0B4B46B3C49647__padding[4];
	};
};
struct U3CrenderTargetUsedU3Ee__FixedBuffer_tFD6BC31F926EE730D12C5E649A0B4B46B3C49647_marshaled_pinvoke
{
	union
	{
		struct
		{
			int32_t ___FixedElementField;
		};
		uint8_t U3CrenderTargetUsedU3Ee__FixedBuffer_tFD6BC31F926EE730D12C5E649A0B4B46B3C49647__padding[4];
	};
};
struct U3CrenderTargetUsedU3Ee__FixedBuffer_tFD6BC31F926EE730D12C5E649A0B4B46B3C49647_marshaled_com
{
	union
	{
		struct
		{
			int32_t ___FixedElementField;
		};
		uint8_t U3CrenderTargetUsedU3Ee__FixedBuffer_tFD6BC31F926EE730D12C5E649A0B4B46B3C49647__padding[4];
	};
};
struct U3C_DistanceBasedWeightsU3Ee__FixedBuffer_t592C8FA36F6571FFBA30952E171EA4399E8E9E3E 
{
	union
	{
		struct
		{
			float ___FixedElementField;
		};
		uint8_t U3C_DistanceBasedWeightsU3Ee__FixedBuffer_t592C8FA36F6571FFBA30952E171EA4399E8E9E3E__padding[192];
	};
};
struct U3C_TapOffsetsU3Ee__FixedBuffer_t7EA77F6C8AD3D821114624B51D067C6D8099ADC0 
{
	union
	{
		struct
		{
			float ___FixedElementField;
		};
		uint8_t U3C_TapOffsetsU3Ee__FixedBuffer_t7EA77F6C8AD3D821114624B51D067C6D8099ADC0__padding[128];
	};
};
struct U3C_DistanceBasedWeightsU3Ee__FixedBuffer_t7B434F6A0F152BF4292DB5A722AFE3B4421A6180 
{
	union
	{
		struct
		{
			float ___FixedElementField;
		};
		uint8_t U3C_DistanceBasedWeightsU3Ee__FixedBuffer_t7B434F6A0F152BF4292DB5A722AFE3B4421A6180__padding[192];
	};
};
struct U3C_DebugAPVSubdivColorsU3Ee__FixedBuffer_t376D9DA8AEE2F2016D631895AE6A01F6439C8189 
{
	union
	{
		struct
		{
			float ___FixedElementField;
		};
		uint8_t U3C_DebugAPVSubdivColorsU3Ee__FixedBuffer_t376D9DA8AEE2F2016D631895AE6A01F6439C8189__padding[112];
	};
};
struct U3C_DebugRenderingLayersColorsU3Ee__FixedBuffer_tC4034D533BE7F6EB3DE07839929398E2D66842BD 
{
	union
	{
		struct
		{
			float ___FixedElementField;
		};
		uint8_t U3C_DebugRenderingLayersColorsU3Ee__FixedBuffer_tC4034D533BE7F6EB3DE07839929398E2D66842BD__padding[512];
	};
};
struct U3C_DebugViewMaterialArrayU3Ee__FixedBuffer_t63813ABD6DAD46FA9CDFA9F51AD98468340826A9 
{
	union
	{
		struct
		{
			uint32_t ___FixedElementField;
		};
		uint8_t U3C_DebugViewMaterialArrayU3Ee__FixedBuffer_t63813ABD6DAD46FA9CDFA9F51AD98468340826A9__padding[176];
	};
};
struct U3C_DiffusionProfileHashTableU3Ee__FixedBuffer_t67607AC6B85E8C2ADBAC6CAD25F056DD7AB52777 
{
	union
	{
		struct
		{
			uint32_t ___FixedElementField;
		};
		uint8_t U3C_DiffusionProfileHashTableU3Ee__FixedBuffer_t67607AC6B85E8C2ADBAC6CAD25F056DD7AB52777__padding[256];
	};
};
struct U3C_FrustumPlanesU3Ee__FixedBuffer_t73BFA8EB26E001BDEC450C919F4907681F3D0FAB 
{
	union
	{
		struct
		{
			float ___FixedElementField;
		};
		uint8_t U3C_FrustumPlanesU3Ee__FixedBuffer_t73BFA8EB26E001BDEC450C919F4907681F3D0FAB__padding[96];
	};
};
struct U3C_ShadowFrustumPlanesU3Ee__FixedBuffer_t133A529073E5CF2C51E08C382003BCE34694E677 
{
	union
	{
		struct
		{
			float ___FixedElementField;
		};
		uint8_t U3C_ShadowFrustumPlanesU3Ee__FixedBuffer_t133A529073E5CF2C51E08C382003BCE34694E677__padding[96];
	};
};
struct U3C_ShapeParamsAndMaxScatterDistsU3Ee__FixedBuffer_t2C9C5DCCD422AD66D9E512BBB29514CA5F130E04 
{
	union
	{
		struct
		{
			float ___FixedElementField;
		};
		uint8_t U3C_ShapeParamsAndMaxScatterDistsU3Ee__FixedBuffer_t2C9C5DCCD422AD66D9E512BBB29514CA5F130E04__padding[256];
	};
};
struct U3C_TransmissionTintsAndFresnel0U3Ee__FixedBuffer_tA78E2F5239C9A06A1BD7A224DCB6C2CA8229F483 
{
	union
	{
		struct
		{
			float ___FixedElementField;
		};
		uint8_t U3C_TransmissionTintsAndFresnel0U3Ee__FixedBuffer_tA78E2F5239C9A06A1BD7A224DCB6C2CA8229F483__padding[256];
	};
};
struct U3C_WorldScalesAndFilterRadiiAndThicknessRemapsU3Ee__FixedBuffer_t98305C8D11F8570D2AE0885D5116EDDCC0C62BB7 
{
	union
	{
		struct
		{
			float ___FixedElementField;
		};
		uint8_t U3C_WorldScalesAndFilterRadiiAndThicknessRemapsU3Ee__FixedBuffer_t98305C8D11F8570D2AE0885D5116EDDCC0C62BB7__padding[256];
	};
};
struct U3Cg_mInvProjectionArrU3Ee__FixedBuffer_t8B09A405C352AEBAE1B65D5AC73C58EEDFF2D7A3 
{
	union
	{
		struct
		{
			float ___FixedElementField;
		};
		uint8_t U3Cg_mInvProjectionArrU3Ee__FixedBuffer_t8B09A405C352AEBAE1B65D5AC73C58EEDFF2D7A3__padding[128];
	};
};
struct U3Cg_mInvScrProjectionArrU3Ee__FixedBuffer_t366E4B72DD7B403506ACA991495E5F59BB6DD12C 
{
	union
	{
		struct
		{
			float ___FixedElementField;
		};
		uint8_t U3Cg_mInvScrProjectionArrU3Ee__FixedBuffer_t366E4B72DD7B403506ACA991495E5F59BB6DD12C__padding[128];
	};
};
struct U3Cg_mProjectionArrU3Ee__FixedBuffer_t3419CCE3ED1DD827B4FBC71281B00F430630D568 
{
	union
	{
		struct
		{
			float ___FixedElementField;
		};
		uint8_t U3Cg_mProjectionArrU3Ee__FixedBuffer_t3419CCE3ED1DD827B4FBC71281B00F430630D568__padding[128];
	};
};
struct U3Cg_mScrProjectionArrU3Ee__FixedBuffer_t5CC21F8A872194455A53C0C33E9E89E038BB8656 
{
	union
	{
		struct
		{
			float ___FixedElementField;
		};
		uint8_t U3Cg_mScrProjectionArrU3Ee__FixedBuffer_t5CC21F8A872194455A53C0C33E9E89E038BB8656__padding[128];
	};
};
struct U3C_VBufferCoordToViewDirWSU3Ee__FixedBuffer_t2C828A4461067A3477C6C3324CA9F7D8C4010A3B 
{
	union
	{
		struct
		{
			float ___FixedElementField;
		};
		uint8_t U3C_VBufferCoordToViewDirWSU3Ee__FixedBuffer_t2C828A4461067A3477C6C3324CA9F7D8C4010A3B__padding[128];
	};
};
struct U3C_XRInvProjMatrixU3Ee__FixedBuffer_t895041F84922ACFE6F743A2EC4D450854832878E 
{
	union
	{
		struct
		{
			float ___FixedElementField;
		};
		uint8_t U3C_XRInvProjMatrixU3Ee__FixedBuffer_t895041F84922ACFE6F743A2EC4D450854832878E__padding[128];
	};
};
struct U3C_XRInvViewMatrixU3Ee__FixedBuffer_t14105568440401911C7CBEF9F996073EA879C64A 
{
	union
	{
		struct
		{
			float ___FixedElementField;
		};
		uint8_t U3C_XRInvViewMatrixU3Ee__FixedBuffer_t14105568440401911C7CBEF9F996073EA879C64A__padding[128];
	};
};
struct U3C_XRInvViewProjMatrixU3Ee__FixedBuffer_t78F56BFE46509CDB8F4078B05F6568625E38EF24 
{
	union
	{
		struct
		{
			float ___FixedElementField;
		};
		uint8_t U3C_XRInvViewProjMatrixU3Ee__FixedBuffer_t78F56BFE46509CDB8F4078B05F6568625E38EF24__padding[128];
	};
};
struct U3C_XRNonJitteredViewProjMatrixU3Ee__FixedBuffer_t06EDF4973E8E986A5CC949C1D0E99412818F5921 
{
	union
	{
		struct
		{
			float ___FixedElementField;
		};
		uint8_t U3C_XRNonJitteredViewProjMatrixU3Ee__FixedBuffer_t06EDF4973E8E986A5CC949C1D0E99412818F5921__padding[128];
	};
};
struct U3C_XRPixelCoordToViewDirWSU3Ee__FixedBuffer_t3B569F455DC338753321303765A7863E6C1C25D2 
{
	union
	{
		struct
		{
			float ___FixedElementField;
		};
		uint8_t U3C_XRPixelCoordToViewDirWSU3Ee__FixedBuffer_t3B569F455DC338753321303765A7863E6C1C25D2__padding[128];
	};
};
struct U3C_XRPrevInvViewProjMatrixU3Ee__FixedBuffer_t69ECF1FCFBA7CB180C7276B50D86D4D8CC3D7473 
{
	union
	{
		struct
		{
			float ___FixedElementField;
		};
		uint8_t U3C_XRPrevInvViewProjMatrixU3Ee__FixedBuffer_t69ECF1FCFBA7CB180C7276B50D86D4D8CC3D7473__padding[128];
	};
};
struct U3C_XRPrevViewProjMatrixU3Ee__FixedBuffer_t1F36095861B928A64A476D665B2AE67E70F6BBA5 
{
	union
	{
		struct
		{
			float ___FixedElementField;
		};
		uint8_t U3C_XRPrevViewProjMatrixU3Ee__FixedBuffer_t1F36095861B928A64A476D665B2AE67E70F6BBA5__padding[128];
	};
};
struct U3C_XRPrevViewProjMatrixNoCameraTransU3Ee__FixedBuffer_t386971266A74BC45AF86A1B3A967548A80205921 
{
	union
	{
		struct
		{
			float ___FixedElementField;
		};
		uint8_t U3C_XRPrevViewProjMatrixNoCameraTransU3Ee__FixedBuffer_t386971266A74BC45AF86A1B3A967548A80205921__padding[128];
	};
};
struct U3C_XRPrevWorldSpaceCameraPosU3Ee__FixedBuffer_t3700D348A5CAD8B9DAEFF746D8FB50C7A0B0EE6C 
{
	union
	{
		struct
		{
			float ___FixedElementField;
		};
		uint8_t U3C_XRPrevWorldSpaceCameraPosU3Ee__FixedBuffer_t3700D348A5CAD8B9DAEFF746D8FB50C7A0B0EE6C__padding[32];
	};
};
struct U3C_XRProjMatrixU3Ee__FixedBuffer_t8C38F7CE6262EEF2996017B6AD3DDEF269933664 
{
	union
	{
		struct
		{
			float ___FixedElementField;
		};
		uint8_t U3C_XRProjMatrixU3Ee__FixedBuffer_t8C38F7CE6262EEF2996017B6AD3DDEF269933664__padding[128];
	};
};
struct U3C_XRViewMatrixU3Ee__FixedBuffer_tCD285A65283D91EAFABDF67612F2537F9C548073 
{
	union
	{
		struct
		{
			float ___FixedElementField;
		};
		uint8_t U3C_XRViewMatrixU3Ee__FixedBuffer_tCD285A65283D91EAFABDF67612F2537F9C548073__padding[128];
	};
};
struct U3C_XRViewProjMatrixU3Ee__FixedBuffer_t852D424EAB67B07B9263E5E4535F8400FCE3F110 
{
	union
	{
		struct
		{
			float ___FixedElementField;
		};
		uint8_t U3C_XRViewProjMatrixU3Ee__FixedBuffer_t852D424EAB67B07B9263E5E4535F8400FCE3F110__padding[128];
	};
};
struct U3C_XRViewProjMatrixNoCameraTransU3Ee__FixedBuffer_tBFEDE90CAE81742C83B249565EFDE1E7C7BA9A85 
{
	union
	{
		struct
		{
			float ___FixedElementField;
		};
		uint8_t U3C_XRViewProjMatrixNoCameraTransU3Ee__FixedBuffer_tBFEDE90CAE81742C83B249565EFDE1E7C7BA9A85__padding[128];
	};
};
struct U3C_XRWorldSpaceCameraPosU3Ee__FixedBuffer_t4CE8AE794A77A7E0C28EAD9684C0E6A94BA75FD4 
{
	union
	{
		struct
		{
			float ___FixedElementField;
		};
		uint8_t U3C_XRWorldSpaceCameraPosU3Ee__FixedBuffer_t4CE8AE794A77A7E0C28EAD9684C0E6A94BA75FD4__padding[32];
	};
};
struct U3C_XRWorldSpaceCameraPosViewOffsetU3Ee__FixedBuffer_t0D65053D83CF10F5B5005314D5C88A3FE9BE68BF 
{
	union
	{
		struct
		{
			float ___FixedElementField;
		};
		uint8_t U3C_XRWorldSpaceCameraPosViewOffsetU3Ee__FixedBuffer_t0D65053D83CF10F5B5005314D5C88A3FE9BE68BF__padding[32];
	};
};
struct U3Cm_CullingPlanesU3Ee__FixedBuffer_tC12F25D54F08F8DA4BD1129A6E4B09385A888B62 
{
	union
	{
		struct
		{
			uint8_t ___FixedElementField;
		};
		uint8_t U3Cm_CullingPlanesU3Ee__FixedBuffer_tC12F25D54F08F8DA4BD1129A6E4B09385A888B62__padding[160];
	};
};
struct NativeCustomSlice_1_t00144D7121E64139E2BBFAEB4BA01FB646F1A71B 
{
	intptr_t ___data;
	int32_t ___length;
	int32_t ___stride;
};
struct NativeCustomSlice_1_t0D6722C6A546C76474543C10D2E576E494D019A8 
{
	intptr_t ___data;
	int32_t ___length;
	int32_t ___stride;
};
struct NativeCustomSlice_1_tB3DF9F46AA60E8412DC5B89CC7878A4BE49ABA45 
{
	intptr_t ___data;
	int32_t ___length;
	int32_t ___stride;
};
struct NativeCustomSlice_1_t553B89694440B1C5C7DF7F314D7A0711AE7A0783 
{
	intptr_t ___data;
	int32_t ___length;
	int32_t ___stride;
};
struct NativeCustomSlice_1_t1BD4A99A5C57F16086ACE5EED91D969C19693921 
{
	intptr_t ___data;
	int32_t ___length;
	int32_t ___stride;
};
struct Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 
{
	bool ___hasValue;
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___value;
};
struct Nullable_1_t91416B74D1845CE0E7426E33CBC75C126B777D39 
{
	bool ___hasValue;
	CurrencyValue_t990E85902BF45B2E1BCB44F0865B3EF5F7C8F5B3 ___value;
};
struct Nullable_1_tE3A40595000DDF3F2E0514B54C6C2C1FC18DB130 
{
	bool ___hasValue;
	NFTMetadata_t57B87F3F600CF2DB4051680552AC25ED94440D31 ___value;
};
struct TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 
{
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___itemStack;
	int32_t ___index;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_DefaultItem;
	int32_t ___m_Capacity;
	int32_t ___m_RolloverSize;
	int32_t ___m_Count;
};
struct TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 
{
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___itemStack;
	int32_t ___index;
	MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B ___m_DefaultItem;
	int32_t ___m_Capacity;
	int32_t ___m_RolloverSize;
	int32_t ___m_Count;
};
struct TextProcessingStack_1_t7868E818AC1E1B5FED21B76D5C309C9A04380B63 
{
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___itemStack;
	int32_t ___index;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_DefaultItem;
	int32_t ___m_Capacity;
	int32_t ___m_RolloverSize;
	int32_t ___m_Count;
};
struct TextProcessingStack_1_t0C74606C1B6C7817CA95F0DCA46B219CF6FB35CA 
{
	MaterialReferenceU5BU5D_t4A9B88114E223BD96CE5121053664023CE2DE07E* ___itemStack;
	int32_t ___index;
	MaterialReference_t86DB0799D5C82869D4FF0A4F59624AED6910FD26 ___m_DefaultItem;
	int32_t ___m_Capacity;
	int32_t ___m_RolloverSize;
	int32_t ___m_Count;
};
struct AddressMode_t2C6D839F1391CCABEFAB25D8500B448D3CAB5EA3 
{
	int32_t ___value__;
};
struct AreaLightShape_tA99322326629F317FE7719EBA97E3F756EA4E1DB 
{
	int32_t ___value__;
};
struct BackgroundPositionKeyword_tE680A05B983D256AADC8E2CF1CA169D004B8641B 
{
	int32_t ___value__;
};
struct BlendState_tC9B817349E49EF26CBCDC8FCE02789A661DC2630 
{
	RenderTargetBlendState_t51229A3F09EE698F8E49731F1BC5BB77DBEDC4C7 ___m_BlendState0;
	RenderTargetBlendState_t51229A3F09EE698F8E49731F1BC5BB77DBEDC4C7 ___m_BlendState1;
	RenderTargetBlendState_t51229A3F09EE698F8E49731F1BC5BB77DBEDC4C7 ___m_BlendState2;
	RenderTargetBlendState_t51229A3F09EE698F8E49731F1BC5BB77DBEDC4C7 ___m_BlendState3;
	RenderTargetBlendState_t51229A3F09EE698F8E49731F1BC5BB77DBEDC4C7 ___m_BlendState4;
	RenderTargetBlendState_t51229A3F09EE698F8E49731F1BC5BB77DBEDC4C7 ___m_BlendState5;
	RenderTargetBlendState_t51229A3F09EE698F8E49731F1BC5BB77DBEDC4C7 ___m_BlendState6;
	RenderTargetBlendState_t51229A3F09EE698F8E49731F1BC5BB77DBEDC4C7 ___m_BlendState7;
	uint8_t ___m_SeparateMRTBlendStates;
	uint8_t ___m_AlphaToMask;
	int16_t ___m_Padding;
};
struct Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Center;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Extents;
};
struct BuiltinRenderTextureType_t3D56813CAC7C6E4AC3B438039BD1CE7E62FE7C4E 
{
	int32_t ___value__;
};
struct CollisionPairHeaderFlags_tBA40F470BC1564B84C3093CEA5761804FA0650C3 
{
	uint16_t ___value__;
};
struct CompareOptions_tE5E7275E1FCBD5F8F3B53CC0038A11CABE120B00 
{
	int32_t ___value__;
};
struct ComputedStyle_t8B08CCCEE20525528B3FFDAC6D3F58F101AAF54C 
{
	StyleDataRef_1_tBB9987581539847AE5CCA2EA2349E05CDC9127FA ___inheritedData;
	StyleDataRef_1_t5330A6F4EAC0EAB88E3B9849D866AA23BB6BE5F4 ___layoutData;
	StyleDataRef_1_tF773E9CBC6DC0FEB38DF95A6F3F47AC49AE045B3 ___rareData;
	StyleDataRef_1_t1D59CCAB740BE6B330D5B5FDA9F67391800200B3 ___transformData;
	StyleDataRef_1_t6A7B146DD79EDF7F42CD8CCF3E411B40AA729B8E ___transitionData;
	StyleDataRef_1_t9CB834B90E638D92A3BE5123B0D3989697AA87FC ___visualData;
	YogaNode_t9EE7C2B7C0BD1299C28837B1A66CF4660E724C8B* ___yogaNode;
	Dictionary_2_t645C7B1DAE2D839B52A5E387C165CE13D5465B00* ___customProperties;
	int64_t ___matchingRulesHash;
	float ___dpiScaling;
	ComputedTransitionPropertyU5BU5D_t25B9E78F5276CDA297C8215C316452CAB8219E82* ___computedTransitions;
};
struct ComputedStyle_t8B08CCCEE20525528B3FFDAC6D3F58F101AAF54C_marshaled_pinvoke
{
	StyleDataRef_1_tBB9987581539847AE5CCA2EA2349E05CDC9127FA ___inheritedData;
	StyleDataRef_1_t5330A6F4EAC0EAB88E3B9849D866AA23BB6BE5F4 ___layoutData;
	StyleDataRef_1_tF773E9CBC6DC0FEB38DF95A6F3F47AC49AE045B3 ___rareData;
	StyleDataRef_1_t1D59CCAB740BE6B330D5B5FDA9F67391800200B3 ___transformData;
	StyleDataRef_1_t6A7B146DD79EDF7F42CD8CCF3E411B40AA729B8E ___transitionData;
	StyleDataRef_1_t9CB834B90E638D92A3BE5123B0D3989697AA87FC ___visualData;
	YogaNode_t9EE7C2B7C0BD1299C28837B1A66CF4660E724C8B* ___yogaNode;
	Dictionary_2_t645C7B1DAE2D839B52A5E387C165CE13D5465B00* ___customProperties;
	int64_t ___matchingRulesHash;
	float ___dpiScaling;
	ComputedTransitionProperty_tD8E4D8EB5DD69E063944F27A48D9263F4F1354E1_marshaled_pinvoke* ___computedTransitions;
};
struct ComputedStyle_t8B08CCCEE20525528B3FFDAC6D3F58F101AAF54C_marshaled_com
{
	StyleDataRef_1_tBB9987581539847AE5CCA2EA2349E05CDC9127FA ___inheritedData;
	StyleDataRef_1_t5330A6F4EAC0EAB88E3B9849D866AA23BB6BE5F4 ___layoutData;
	StyleDataRef_1_tF773E9CBC6DC0FEB38DF95A6F3F47AC49AE045B3 ___rareData;
	StyleDataRef_1_t1D59CCAB740BE6B330D5B5FDA9F67391800200B3 ___transformData;
	StyleDataRef_1_t6A7B146DD79EDF7F42CD8CCF3E411B40AA729B8E ___transitionData;
	StyleDataRef_1_t9CB834B90E638D92A3BE5123B0D3989697AA87FC ___visualData;
	YogaNode_t9EE7C2B7C0BD1299C28837B1A66CF4660E724C8B* ___yogaNode;
	Dictionary_2_t645C7B1DAE2D839B52A5E387C165CE13D5465B00* ___customProperties;
	int64_t ___matchingRulesHash;
	float ___dpiScaling;
	ComputedTransitionProperty_tD8E4D8EB5DD69E063944F27A48D9263F4F1354E1_marshaled_com* ___computedTransitions;
};
struct ConnectionEvents_t52A6A04ED08B6F7EB61EBD67A0174D883C7BEF31 
{
	int32_t ___value__;
};
struct ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Point;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Normal;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Impulse;
	int32_t ___m_ThisColliderInstanceID;
	int32_t ___m_OtherColliderInstanceID;
	float ___m_Separation;
};
struct ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Point;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Normal;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_RelativeVelocity;
	float ___m_Separation;
	float ___m_NormalImpulse;
	float ___m_TangentImpulse;
	int32_t ___m_Collider;
	int32_t ___m_OtherCollider;
	int32_t ___m_Rigidbody;
	int32_t ___m_OtherRigidbody;
	int32_t ___m_Enabled;
};
struct ContourVertex_t58C64DD8B2209C868718C7B50657707A15EEEF32 
{
	Vec3_t7EDAE0ABBD2BC4C43A47B8BEF6C079AB55FB0CBB ___Position;
	RuntimeObject* ___Data;
};
struct ContourVertex_t58C64DD8B2209C868718C7B50657707A15EEEF32_marshaled_pinvoke
{
	Vec3_t7EDAE0ABBD2BC4C43A47B8BEF6C079AB55FB0CBB ___Position;
	Il2CppIUnknown* ___Data;
};
struct ContourVertex_t58C64DD8B2209C868718C7B50657707A15EEEF32_marshaled_com
{
	Vec3_t7EDAE0ABBD2BC4C43A47B8BEF6C079AB55FB0CBB ___Position;
	Il2CppIUnknown* ___Data;
};
struct ControlPoint_tCAFE592FCADA75007AF24FEB842AE63DAFA9B8D1 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b;
};
struct ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1 
{
	intptr_t ___vertSrc;
	intptr_t ___vertDst;
	int32_t ___vertCount;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___transform;
	int32_t ___transformUVs;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___xformClipPages;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___ids;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___addFlags;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___opacityPage;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___textCoreSettingsPage;
	int32_t ___isText;
	float ___textureId;
	intptr_t ___indexSrc;
	intptr_t ___indexDst;
	int32_t ___indexCount;
	int32_t ___indexOffset;
	int32_t ___flipIndices;
};
struct CookieMode_tC4C7CAE12640338C0D0007A0E55522C82F04D234 
{
	int32_t ___value__;
};
struct CookieVariant_t7E73D4627A51D0F441CAFC7B50293953F9A198C5 
{
	int32_t ___value__;
};
struct CopyClosingMeshJobData_t92845C1341A518A8D05CD9DCE53496BD70CF2044 
{
	intptr_t ___vertSrc;
	intptr_t ___vertDst;
	int32_t ___vertCount;
	intptr_t ___indexSrc;
	intptr_t ___indexDst;
	int32_t ___indexCount;
	int32_t ___indexOffset;
};
struct CubemapFace_t300D6E2CD7DF60D44AA28338748B607677ED1D1B 
{
	int32_t ___value__;
};
struct CullMode_t049B71889E4E981866E205A3F71DC8B856306D50 
{
	int32_t ___value__;
};
struct CullingResults_tD6B7EF20B68D47DFF3A99EB2EA73F47F1D460267 
{
	intptr_t ___ptr;
	CullingAllocationInfo_tB260F5CD0B290F74E145EB16E54B901CC68D9D5A* ___m_AllocationInfo;
};
struct CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___sphereCenter;
	float ___sphereRadius;
	int32_t ___cullingPlaneOffset;
	int32_t ___cullingPlaneCount;
	float ___cascadeBlendCullingFactor;
	float ___nearPlane;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___cullingMatrix;
};
struct CustomAttributeNamedArgument_t4EC1C2BB9943BEB7E77AC0870BE2A899E23B4E02 
{
	CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F ___U3CTypedValueU3Ek__BackingField;
	bool ___U3CIsFieldU3Ek__BackingField;
	String_t* ___U3CMemberNameU3Ek__BackingField;
	Type_t* ____attributeType;
	MemberInfo_t* ____lazyMemberInfo;
};
struct CustomAttributeNamedArgument_t4EC1C2BB9943BEB7E77AC0870BE2A899E23B4E02_marshaled_pinvoke
{
	CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F_marshaled_pinvoke ___U3CTypedValueU3Ek__BackingField;
	int32_t ___U3CIsFieldU3Ek__BackingField;
	char* ___U3CMemberNameU3Ek__BackingField;
	Type_t* ____attributeType;
	MemberInfo_t* ____lazyMemberInfo;
};
struct CustomAttributeNamedArgument_t4EC1C2BB9943BEB7E77AC0870BE2A899E23B4E02_marshaled_com
{
	CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F_marshaled_com ___U3CTypedValueU3Ek__BackingField;
	int32_t ___U3CIsFieldU3Ek__BackingField;
	Il2CppChar* ___U3CMemberNameU3Ek__BackingField;
	Type_t* ____attributeType;
	MemberInfo_t* ____lazyMemberInfo;
};
struct DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 
{
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ____dateTime;
	int16_t ____offsetMinutes;
};
struct DecalData_tEA26843A0FE044B1D3E3D3164D2FBA1313E882B3 
{
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___worldToDecal;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___normalToWorld;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___diffuseScaleBias;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___normalScaleBias;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___maskScaleBias;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___baseColor;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___remappingAOS;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___scalingBAndRemappingM;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___blendParams;
	uint32_t ___decalLayerMask;
};
struct EasingMode_tEF87477B9B9EB2524525550AE5ABEBC00FC7B0DF 
{
	int32_t ___value__;
};
struct EnvLightReflectionData_t10A627789630C9183B350596571BEA3B3D458C55 
{
	U3C_PlanarCaptureVPU3Ee__FixedBuffer_t4DAACC1882E6CBCCE2B008570CE0405D69294039 ____PlanarCaptureVP;
	U3C_PlanarScaleOffsetU3Ee__FixedBuffer_t05EA52A54329CA1A4A10DC4B37834705C654ADAF ____PlanarScaleOffset;
	U3C_CubeScaleOffsetU3Ee__FixedBuffer_t396807C56AE67FFABD13B1E9A570A73D7CE47270 ____CubeScaleOffset;
};
struct EnvLightReflectionDataRT_t49B44BE9BAF106BEA7064FC689E1819F0C5A1CF1 
{
	U3C_PlanarCaptureVPRTU3Ee__FixedBuffer_t94BE785F8B39D22C01E7D9602DE7A410366EDEEC ____PlanarCaptureVPRT;
	U3C_PlanarScaleOffsetRTU3Ee__FixedBuffer_tEEB1A945B972415B074D6881A669FDA6059EC948 ____PlanarScaleOffsetRT;
	U3C_CubeScaleOffsetRTU3Ee__FixedBuffer_tA389321B23D0E9608C1AA1B743B352487A6F2940 ____CubeScaleOffsetRT;
};
struct EnvShapeType_t12199482542ECFBFD4E3FC377D2E1D9499B5BB8D 
{
	int32_t ___value__;
};
struct EventModifiers_t48244B043FBB42CDD555C6AC43279EC7158777AC 
{
	int32_t ___value__;
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
struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___min;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___max;
};
struct Extents_t369FB2B84521A0229C2FA3D4C8592B14E07CEFE6 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___min;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___max;
};
struct FalloffType_tE9BECCB411DA63109760103AF7476F422A01376D 
{
	uint8_t ___value__;
};
struct FontFeatureLookupFlags_t2000121BA341A3CAE5E0D4FAC6AA4378FE14AE1B 
{
	int32_t ___value__;
};
struct FontStyles_t9E611EE6BBE6E192A73EAFF7872596517C527FF5 
{
	int32_t ___value__;
};
struct FontStyles_t284AF8C10031F4774DF8BC8DE6DF9EC11EE14668 
{
	int32_t ___value__;
};
struct FontWeight_tA2585C0A73B70D31CE71E7843149098A5E16BC80 
{
	int32_t ___value__;
};
struct FrustumGPU_t86585C3DD3E7B71AA05F2317B9A39FE0E619100D 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___normal0;
	float ___dist0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___normal1;
	float ___dist1;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___normal2;
	float ___dist2;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___normal3;
	float ___dist3;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___normal4;
	float ___dist4;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___normal5;
	float ___dist5;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___corner0;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___corner1;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___corner2;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___corner3;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___corner4;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___corner5;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___corner6;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___corner7;
};
struct GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC 
{
	intptr_t ___handle;
};
struct GPULightType_t6D42B7037E766FD1A46AA670B2F9F8D53276C4CC 
{
	int32_t ___value__;
};
struct GfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C 
{
	uint32_t ___offsetFromWriteStart;
	uint32_t ___size;
	uintptr_t ___source;
};
struct GlyphAdjustmentRecord_tC7A1B2E0AC7C4ED9CDB8E95E48790A46B6F315F7 
{
	uint32_t ___m_GlyphIndex;
	GlyphValueRecord_t780927A39D46924E0D546A2AE5DDF1BB2B5A9C8E ___m_GlyphValueRecord;
};
struct GlyphClassDefinitionType_t9C21A3848A07B17C2690F285B5FA60A2E246FBA2 
{
	int32_t ___value__;
};
struct GlyphRenderMode_tE7FB60827750662A45E89D168932FE2D8AEB5281 
{
	int32_t ___value__;
};
struct GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color;
	float ___time;
};
struct GradientType_tF6700196CF15D686C2CFC54BDDE6EF4B4B325F22 
{
	int32_t ___value__;
};
struct GraphicsFormat_tC3D1898F3F3F1F57256C7F3FFD6BA9A37AE7E713 
{
	int32_t ___value__;
};
struct HDDirectionalShadowData_tACCC416167F037274770B4A0242B0E49BB021569 
{
	U3CsphereCascadesU3Ee__FixedBuffer_t29E9A28A667001D3EC3910FDF2C6402ACC3CB6D2 ___sphereCascades;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___cascadeDirection;
	U3CcascadeBordersU3Ee__FixedBuffer_t20736ECB4257ACA4B697A048414E85485AA0ACB0 ___cascadeBorders;
};
struct HDLightType_t0236103D9A58CC856BAD15B3033AEED0DDBDD8E7 
{
	int32_t ___value__;
};
struct HDShadowData_t3B43038178B689E7FE8F8C3456CB445E3260F880 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rot0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rot1;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rot2;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___proj;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___atlasOffset;
	float ___worldTexelSize;
	float ___normalBias;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zBufferParam;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___shadowMapSize;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___shadowFilterParams0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___cacheTranslationDelta;
	float ___isInCachedAtlas;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___shadowToWorld;
};
struct HTTPConnectionStates_t0708C20001531995DF17AAD882322C9EBC1840F4 
{
	int32_t ___value__;
};
struct HTTPRequestStates_t76B383683C34FD2420FDFD0A0429635834C3D4B1 
{
	int32_t ___value__;
};
struct HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B 
{
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color;
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___padding;
};
struct HighlightState_tFF5FE9065990F04A37FEC545A0024047F0ABD740 
{
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color;
	Offset_tF4AF8F62C21FD6DCB5255F705A59CC10583E22C4 ___padding;
};
struct HorizontalAlignmentOptions_tCC21260E9FBEC656BA7783643ED5F44AFF7955A1 
{
	int32_t ___value__;
};
struct HostKey_t9F403627F25B0C2AF53C98D5CEF1978C14E47408 
{
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___Uri;
	ProxySettings_tC5B1BE468FA695BAEC808B50711CA4AF2A279F9C* ___Proxy;
	Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 ___Key;
};
struct HostKey_t9F403627F25B0C2AF53C98D5CEF1978C14E47408_marshaled_pinvoke
{
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___Uri;
	ProxySettings_tC5B1BE468FA695BAEC808B50711CA4AF2A279F9C* ___Proxy;
	Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 ___Key;
};
struct HostKey_t9F403627F25B0C2AF53C98D5CEF1978C14E47408_marshaled_com
{
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___Uri;
	ProxySettings_tC5B1BE468FA695BAEC808B50711CA4AF2A279F9C* ___Proxy;
	Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 ___Key;
};
struct HostProtocolSupport_t0A218E02B00B72D75163DF455C09E86F7561457E 
{
	uint8_t ___value__;
};
struct HumanLimit_tE825F951DEE60E2641DD91F3C92C6B56A139A36E 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Min;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Max;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Center;
	float ___m_AxisLength;
	int32_t ___m_UseDefaultValues;
};
struct Int32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C 
{
	int32_t ___value__;
};
struct JsonCommentHandling_t3DF839E2E7AB5879034222280AE7FD287DDE22BB 
{
	uint8_t ___value__;
};
struct JsonContainerType_t4F8244AEE40CAB63CA2C1E281038F4E2B3E3887E 
{
	int32_t ___value__;
};
struct JsonNumberHandling_t3388CBDB24D1512184DC1F20B174AAB2E8CDAFE5 
{
	int32_t ___value__;
};
struct JsonProperty_t9ED20BB68BAF4B8220A5D4AF3350B05639735739 
{
	JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1 ___U3CValueU3Ek__BackingField;
	String_t* ___U3C_nameU3Ek__BackingField;
};
struct JsonProperty_t9ED20BB68BAF4B8220A5D4AF3350B05639735739_marshaled_pinvoke
{
	JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1_marshaled_pinvoke ___U3CValueU3Ek__BackingField;
	char* ___U3C_nameU3Ek__BackingField;
};
struct JsonProperty_t9ED20BB68BAF4B8220A5D4AF3350B05639735739_marshaled_com
{
	JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1_marshaled_com ___U3CValueU3Ek__BackingField;
	Il2CppChar* ___U3C_nameU3Ek__BackingField;
};
struct JsonTokenType_t8E1DB7069B7AAEC58356A325AC450129B95C3209 
{
	uint8_t ___value__;
};
struct LayerBatch_tEC81EE605197FE053EB5C65E38CFD93D9A6B75BC 
{
	int32_t ___startLayerID;
	int32_t ___endLayerValue;
	SortingLayerRange_t96D04CFB4E8824978FEB2CFFFCFEAC37E56D52C9 ___layerRange;
	LightStats_tBB72AF16728E19482A5C8A6B65A94F7FFB9DA80C ___lightStats;
	U3CrenderTargetIdsU3Ee__FixedBuffer_tFE129E2590DE72A1D57D7367CFEE0F7C9C8523F5 ___renderTargetIds;
	U3CrenderTargetUsedU3Ee__FixedBuffer_tFD6BC31F926EE730D12C5E649A0B4B46B3C49647 ___renderTargetUsed;
};
struct LayerBatch_tEC81EE605197FE053EB5C65E38CFD93D9A6B75BC_marshaled_pinvoke
{
	int32_t ___startLayerID;
	int32_t ___endLayerValue;
	SortingLayerRange_t96D04CFB4E8824978FEB2CFFFCFEAC37E56D52C9 ___layerRange;
	LightStats_tBB72AF16728E19482A5C8A6B65A94F7FFB9DA80C ___lightStats;
	U3CrenderTargetIdsU3Ee__FixedBuffer_tFE129E2590DE72A1D57D7367CFEE0F7C9C8523F5 ___renderTargetIds;
	U3CrenderTargetUsedU3Ee__FixedBuffer_tFD6BC31F926EE730D12C5E649A0B4B46B3C49647_marshaled_pinvoke ___renderTargetUsed;
};
struct LayerBatch_tEC81EE605197FE053EB5C65E38CFD93D9A6B75BC_marshaled_com
{
	int32_t ___startLayerID;
	int32_t ___endLayerValue;
	SortingLayerRange_t96D04CFB4E8824978FEB2CFFFCFEAC37E56D52C9 ___layerRange;
	LightStats_tBB72AF16728E19482A5C8A6B65A94F7FFB9DA80C ___lightStats;
	U3CrenderTargetIdsU3Ee__FixedBuffer_tFE129E2590DE72A1D57D7367CFEE0F7C9C8523F5 ___renderTargetIds;
	U3CrenderTargetUsedU3Ee__FixedBuffer_tFD6BC31F926EE730D12C5E649A0B4B46B3C49647_marshaled_com ___renderTargetUsed;
};
struct LightLayerEnum_tF77AE3A62DD11C8288254C0217AB3AD1C647716A 
{
	int32_t ___value__;
};
struct LightMode_t058E4E7AAE5689BCFF46BB8E0259D90D227E7FF9 
{
	uint8_t ___value__;
};
struct LightType_t2D4D43054E7473EECEB54493C0055AE074780234 
{
	int32_t ___value__;
};
struct LightType_t97C5050F2F742FBF050FEB8FC5131A9A8DB50D26 
{
	uint8_t ___value__;
};
struct LightVolume_tEB4C2A43FC367479D5FE4C9E65CCDCE637992A54 
{
	int32_t ___active;
	int32_t ___shape;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___range;
	uint32_t ___lightType;
	uint32_t ___lightIndex;
};
struct LightVolumeData_t7687C5CEA8E59C0EB0F57D7DEA3B95183A8EF402 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lightPos;
	uint32_t ___lightVolume;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lightAxisX;
	uint32_t ___lightCategory;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lightAxisY;
	float ___radiusSq;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lightAxisZ;
	float ___cotan;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___boxInnerDist;
	uint32_t ___featureFlags;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___boxInvRange;
	float ___unused2;
};
struct LightmapBakeType_tD6FF28E59BAAD80648796C2835AB8DC0B0F8B232 
{
	int32_t ___value__;
};
struct LocalKeywordSpace_t8D56A7A6130EF8C8F8BA247C67F1CB8256DA34AA 
{
	intptr_t ___m_KeywordSpace;
};
struct LocalVolumetricFogBlendingMode_t5384F9440013D9B398B67EDB7A0FB056EF053D70 
{
	int32_t ___value__;
};
struct LocalVolumetricFogFalloffMode_tF04846AB9C2A8420938B617752C6A3667AF49D89 
{
	int32_t ___value__;
};
struct MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607 
{
	uint32_t ___m_BaseGlyphID;
	GlyphAnchorPoint_t581FDCAD5A1D0F3B129968FAEF20C113AAB0BC08 ___m_BaseGlyphAnchorPoint;
	uint32_t ___m_MarkGlyphID;
	MarkPositionAdjustment_t2523798D56F14A93A080D9D1298498325A51F436 ___m_MarkPositionAdjustment;
};
struct MarkToMarkAdjustmentRecord_tD53618A3728435D5C904857DAC644EE27640807C 
{
	uint32_t ___m_BaseMarkGlyphID;
	GlyphAnchorPoint_t581FDCAD5A1D0F3B129968FAEF20C113AAB0BC08 ___m_BaseMarkGlyphAnchorPoint;
	uint32_t ___m_CombiningMarkGlyphID;
	MarkPositionAdjustment_t2523798D56F14A93A080D9D1298498325A51F436 ___m_CombiningMarkPositionAdjustment;
};
struct MarkteplaceStatus_t7C9041A6E9335CD452B843762B014F5B9525AC70 
{
	int32_t ___value__;
};
struct MetadataPropertyName_t022E4209ADB6A99BAB99A8B4BD83A1FC04D49EA8 
{
	int32_t ___value__;
};
struct MixedLightingMode_t6B7F0DC1BB531DDE85B2FF98C8BD122840060061 
{
	int32_t ___value__;
};
struct ModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960 
{
	intptr_t ___actor;
	intptr_t ___otherActor;
	intptr_t ___shape;
	intptr_t ___otherShape;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___otherRotation;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___otherPosition;
	int32_t ___numContacts;
	intptr_t ___contacts;
};
struct MouseButton_tEF578B8F208D798E053BC320C29FCBB655E24454 
{
	int32_t ___value__;
};
struct NFTType_tB57B4697E2EE216D735DE4E95D722CB6808DD008 
{
	int32_t ___value__;
};
struct NudgeJobData_tC303DCF7D6A8683AA414D05AA13CB6FAD4BB4022 
{
	intptr_t ___src;
	intptr_t ___dst;
	int32_t ___count;
	intptr_t ___closingSrc;
	intptr_t ___closingDst;
	int32_t ___closingCount;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___transform;
	int32_t ___vertsBeforeUVDisplacement;
	int32_t ___vertsAfterUVDisplacement;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	intptr_t ___m_CachedPtr;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr;
};
struct OrientedBBox_tA411E6F6C5EED372F11AF02C65B0F19B1B413A4F 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___right;
	float ___extentX;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___up;
	float ___extentY;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___center;
	float ___extentZ;
};
struct PairingStruct_tB9E5AD6EF680AF0EBE40D0A9EA7B5E92D7C2A745 
{
	String_t* ___Topic;
	Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 ___Expiry;
	ProtocolOptions_t87E54661957741DB313DB6887FC624D67FC2B668* ___Relay;
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___Active;
	Metadata_t4AC24B559D85168A0280CC60EAD19CA5E0C2B1AC* ___PeerMetadata;
};
struct PairingStruct_tB9E5AD6EF680AF0EBE40D0A9EA7B5E92D7C2A745_marshaled_pinvoke
{
	char* ___Topic;
	Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 ___Expiry;
	ProtocolOptions_t87E54661957741DB313DB6887FC624D67FC2B668* ___Relay;
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___Active;
	Metadata_t4AC24B559D85168A0280CC60EAD19CA5E0C2B1AC* ___PeerMetadata;
};
struct PairingStruct_tB9E5AD6EF680AF0EBE40D0A9EA7B5E92D7C2A745_marshaled_com
{
	Il2CppChar* ___Topic;
	Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 ___Expiry;
	ProtocolOptions_t87E54661957741DB313DB6887FC624D67FC2B668* ___Relay;
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___Active;
	Metadata_t4AC24B559D85168A0280CC60EAD19CA5E0C2B1AC* ___PeerMetadata;
};
struct ParticleCollisionEvent_t9152F03D9336BAAFEAF1CCA498C0F156ABD19858 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Intersection;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Normal;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Velocity;
	int32_t ___m_ColliderInstanceID;
};
struct PerObjectData_t04DDCBE9ABF1113E8F9BAFCF4A7F94DD841B9CC9 
{
	int32_t ___value__;
};
struct PerSkinJobData_t12269B9BCDB1CA26111CF0EC8C1410DEB10863A0 
{
	int32_t ___deformVerticesStartPos;
	int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A ___bindPosesIndex;
	int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A ___verticesIndex;
};
struct Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Normal;
	float ___m_Distance;
};
struct PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 
{
	intptr_t ___m_Handle;
	uint32_t ___m_Version;
};
struct PlayableTimeSpace_t50D0B70C3C085E9A4F35E57C4B1DB47B29EB527F 
{
	int32_t ___value__;
};
struct PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F 
{
	Type_t* ___type;
	PlayerLoopSystemU5BU5D_t07C04E53AAC3CDA17603E8BA1B41D7E1AC083C6D* ___subSystemList;
	UpdateFunction_t1C48B7EECBE47AC123A9D9D7D9D2A9EE951C56C4* ___updateDelegate;
	intptr_t ___updateFunction;
	intptr_t ___loopConditionFunction;
};
struct PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F_marshaled_pinvoke
{
	Type_t* ___type;
	PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F_marshaled_pinvoke* ___subSystemList;
	Il2CppMethodPointer ___updateDelegate;
	intptr_t ___updateFunction;
	intptr_t ___loopConditionFunction;
};
struct PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F_marshaled_com
{
	Type_t* ___type;
	PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F_marshaled_com* ___subSystemList;
	Il2CppMethodPointer ___updateDelegate;
	intptr_t ___updateFunction;
	intptr_t ___loopConditionFunction;
};
struct PositionTangentVertex_t2A3AA7C428755E24BA9ECCBD89F67D0828D6555C 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___tangent;
};
struct PositionVertex_tE2E9C13E829C47759FB1722B0548D2D8925C4D12 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position;
};
struct ProposalStruct_tF717CC78D2B24F2F6DDDCD3995B3E204768C3A35 
{
	int64_t ___Id;
	Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 ___Expiry;
	ProtocolOptionsU5BU5D_tD97471A3320EE85560F7A876239FDF81A0F24C6C* ___Relays;
	Participant_t6902CD1ED748F1F6D364ACFB5F1C02E374EB0223* ___Proposer;
	RequiredNamespaces_tAE60F5875B28826E0D827FC2131ABAE2B86C9FDC* ___RequiredNamespaces;
	Dictionary_2_t6F746BAA06881876A266EA34F6D2B0598F10A994* ___OptionalNamespaces;
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___SessionProperties;
	String_t* ___PairingTopic;
};
struct ProposalStruct_tF717CC78D2B24F2F6DDDCD3995B3E204768C3A35_marshaled_pinvoke
{
	int64_t ___Id;
	Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 ___Expiry;
	ProtocolOptionsU5BU5D_tD97471A3320EE85560F7A876239FDF81A0F24C6C* ___Relays;
	Participant_t6902CD1ED748F1F6D364ACFB5F1C02E374EB0223* ___Proposer;
	RequiredNamespaces_tAE60F5875B28826E0D827FC2131ABAE2B86C9FDC* ___RequiredNamespaces;
	Dictionary_2_t6F746BAA06881876A266EA34F6D2B0598F10A994* ___OptionalNamespaces;
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___SessionProperties;
	char* ___PairingTopic;
};
struct ProposalStruct_tF717CC78D2B24F2F6DDDCD3995B3E204768C3A35_marshaled_com
{
	int64_t ___Id;
	Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 ___Expiry;
	ProtocolOptionsU5BU5D_tD97471A3320EE85560F7A876239FDF81A0F24C6C* ___Relays;
	Participant_t6902CD1ED748F1F6D364ACFB5F1C02E374EB0223* ___Proposer;
	RequiredNamespaces_tAE60F5875B28826E0D827FC2131ABAE2B86C9FDC* ___RequiredNamespaces;
	Dictionary_2_t6F746BAA06881876A266EA34F6D2B0598F10A994* ___OptionalNamespaces;
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___SessionProperties;
	Il2CppChar* ___PairingTopic;
};
struct RayTracingInstanceCullingShaderTagConfig_tFA2FE015BBF1440CB19E44452833532A9614F824 
{
	ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0 ___tagId;
	ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0 ___tagValueId;
};
struct RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Point;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Normal;
	uint32_t ___m_FaceID;
	float ___m_Distance;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_UV;
	int32_t ___m_Collider;
};
struct RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Centroid;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Point;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Normal;
	float ___m_Distance;
	float ___m_Fraction;
	int32_t ___m_Collider;
};
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject;
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module;
	float ___distance;
	float ___index;
	int32_t ___depth;
	int32_t ___sortingGroupID;
	int32_t ___sortingGroupOrder;
	int32_t ___sortingLayer;
	int32_t ___sortingOrder;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition;
	int32_t ___displayIndex;
};
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshaled_pinvoke
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject;
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module;
	float ___distance;
	float ___index;
	int32_t ___depth;
	int32_t ___sortingGroupID;
	int32_t ___sortingGroupOrder;
	int32_t ___sortingLayer;
	int32_t ___sortingOrder;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition;
	int32_t ___displayIndex;
};
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshaled_com
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject;
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module;
	float ___distance;
	float ___index;
	int32_t ___depth;
	int32_t ___sortingGroupID;
	int32_t ___sortingGroupOrder;
	int32_t ___sortingLayer;
	int32_t ___sortingOrder;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition;
	int32_t ___displayIndex;
};
struct RenderGraphResourceType_tAFC98053C956B68EDA12B1B8A9BC4B245C97D996 
{
	int32_t ___value__;
};
struct RenderStateMask_tC9C95BF62EADEE4D622D4E16CDE1DF94E2A9EF57 
{
	int32_t ___value__;
};
struct RendererList_t608CE60421616EF4211F5B8AC62E3C36D4BDDF85 
{
	uintptr_t ___context;
	uint32_t ___index;
	uint32_t ___frame;
	uint32_t ___type;
};
struct Repeat_tC0330B75B12D24B063BA5151AF3BB73B85D8B840 
{
	int32_t ___value__;
};
struct RequestEvents_t7294ADEBBC6989FEFAD3D43952705E07D66682E1 
{
	int32_t ___value__;
};
struct SByteEnum_t0782AA0EFC5D1042A39675F37D7DD7C098781DD9 
{
	int8_t ___value__;
};
struct SFiniteLightBound_t0CD72B06261C3F1BE48899DCFDD5CB705620D2B2 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___boxAxisX;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___boxAxisY;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___boxAxisZ;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___center;
	float ___scaleXY;
	float ___radius;
};
struct Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Scale;
	bool ___m_IsNone;
};
struct Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7_marshaled_pinvoke
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Scale;
	int32_t ___m_IsNone;
};
struct Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7_marshaled_com
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Scale;
	int32_t ___m_IsNone;
};
struct SessionStruct_tB44158BBCD00F6106D012CFF575CBA54FC84030E 
{
	String_t* ___Topic;
	String_t* ___PairingTopic;
	ProtocolOptions_t87E54661957741DB313DB6887FC624D67FC2B668* ___Relay;
	Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 ___Expiry;
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___Acknowledged;
	String_t* ___Controller;
	Namespaces_t21319E5B0935CA954D3DA6CAF3182442DFEF5FC2* ___Namespaces;
	RequiredNamespaces_tAE60F5875B28826E0D827FC2131ABAE2B86C9FDC* ___RequiredNamespaces;
	Participant_t6902CD1ED748F1F6D364ACFB5F1C02E374EB0223* ___Self;
	Participant_t6902CD1ED748F1F6D364ACFB5F1C02E374EB0223* ___Peer;
};
struct SessionStruct_tB44158BBCD00F6106D012CFF575CBA54FC84030E_marshaled_pinvoke
{
	char* ___Topic;
	char* ___PairingTopic;
	ProtocolOptions_t87E54661957741DB313DB6887FC624D67FC2B668* ___Relay;
	Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 ___Expiry;
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___Acknowledged;
	char* ___Controller;
	Namespaces_t21319E5B0935CA954D3DA6CAF3182442DFEF5FC2* ___Namespaces;
	RequiredNamespaces_tAE60F5875B28826E0D827FC2131ABAE2B86C9FDC* ___RequiredNamespaces;
	Participant_t6902CD1ED748F1F6D364ACFB5F1C02E374EB0223* ___Self;
	Participant_t6902CD1ED748F1F6D364ACFB5F1C02E374EB0223* ___Peer;
};
struct SessionStruct_tB44158BBCD00F6106D012CFF575CBA54FC84030E_marshaled_com
{
	Il2CppChar* ___Topic;
	Il2CppChar* ___PairingTopic;
	ProtocolOptions_t87E54661957741DB313DB6887FC624D67FC2B668* ___Relay;
	Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 ___Expiry;
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___Acknowledged;
	Il2CppChar* ___Controller;
	Namespaces_t21319E5B0935CA954D3DA6CAF3182442DFEF5FC2* ___Namespaces;
	RequiredNamespaces_tAE60F5875B28826E0D827FC2131ABAE2B86C9FDC* ___RequiredNamespaces;
	Participant_t6902CD1ED748F1F6D364ACFB5F1C02E374EB0223* ___Self;
	Participant_t6902CD1ED748F1F6D364ACFB5F1C02E374EB0223* ___Peer;
};
struct ShaderVariablesAmbientOcclusion_tA90F627D9D2AB69DCC7AB6F316725DC0A0D581FB 
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ____AOBufferSize;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ____AOParams0;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ____AOParams1;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ____AOParams2;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ____AOParams3;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ____AOParams4;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ____FirstTwoDepthMipOffsets;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ____AODepthToViewParams;
};
struct ShaderVariablesBilateralUpsample_t3B0C434F9A93654059B6D240FD1923FBF10A8CFA 
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ____HalfScreenSize;
	U3C_DistanceBasedWeightsU3Ee__FixedBuffer_t592C8FA36F6571FFBA30952E171EA4399E8E9E3E ____DistanceBasedWeights;
	U3C_TapOffsetsU3Ee__FixedBuffer_t7EA77F6C8AD3D821114624B51D067C6D8099ADC0 ____TapOffsets;
};
struct ShaderVariablesClouds_tBB238E8673196AFA8A7F9389ADAE8D2F2FCF3C31 
{
	float ____MaxRayMarchingDistance;
	float ____HighestCloudAltitude;
	float ____LowestCloudAltitude;
	float ____EarthRadius;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ____CloudRangeSquared;
	int32_t ____NumPrimarySteps;
	int32_t ____NumLightSteps;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ____CloudMapTiling;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ____WindDirection;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ____WindVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ____ShapeNoiseOffset;
	float ____VerticalShapeWindDisplacement;
	float ____VerticalErosionWindDisplacement;
	float ____VerticalShapeNoiseOffset;
	float ____LargeWindSpeed;
	float ____MediumWindSpeed;
	float ____SmallWindSpeed;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ____SunLightColor;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ____SunDirection;
	int32_t ____PhysicallyBasedSun;
	float ____MultiScattering;
	float ____ErosionOcclusion;
	float ____PowderEffectIntensity;
	float ____NormalizationFactor;
	float ____MaxCloudDistance;
	float ____DensityMultiplier;
	float ____ShapeFactor;
	float ____ErosionFactor;
	float ____ShapeScale;
	float ____ErosionScale;
	float ____TemporalAccumulationFactor;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ____ScatteringTint;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ____FinalScreenSize;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ____IntermediateScreenSize;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ____TraceScreenSize;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ____HistoryViewportSize;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ____HistoryBufferSize;
	int32_t ____ExposureSunColor;
	int32_t ____AccumulationFrameIndex;
	int32_t ____SubPixelIndex;
	int32_t ____RenderForSky;
	float ____FadeInStart;
	float ____FadeInDistance;
	int32_t ____LowResolutionEvaluation;
	int32_t ____EnableIntegration;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ____SunRight;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ____SunUp;
	float ____ShadowIntensity;
	float ____ShadowFallbackValue;
	int32_t ____ShadowCookieResolution;
	float ____ShadowPlaneOffset;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ____ShadowRegionSize;
	float ____CloudHistoryInvalidation;
	float ____PaddingVC0;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ____WorldSpaceShadowCenter;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ____CameraViewProjection_NO;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ____CameraInverseViewProjection_NO;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ____CameraPrevViewProjection_NO;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ____CloudsPixelCoordToViewDirWS;
	float ____AltitudeDistortion;
	float ____ErosionFactorCompensation;
	int32_t ____EnableFastToneMapping;
	int32_t ____IsPlanarReflection;
	int32_t ____ValidMaxZMask;
	float ____ImprovedTransmittanceBlend;
	float ____CubicTransmittance;
	int32_t ____Padding1;
	U3C_DistanceBasedWeightsU3Ee__FixedBuffer_t7B434F6A0F152BF4292DB5A722AFE3B4421A6180 ____DistanceBasedWeights;
};
struct ShaderVariablesDebugDisplay_t8495B115F456DFCE8FA218AAC745328EC12D4A93 
{
	U3C_DebugRenderingLayersColorsU3Ee__FixedBuffer_tC4034D533BE7F6EB3DE07839929398E2D66842BD ____DebugRenderingLayersColors;
	U3C_DebugViewMaterialArrayU3Ee__FixedBuffer_t63813ABD6DAD46FA9CDFA9F51AD98468340826A9 ____DebugViewMaterialArray;
	U3C_DebugAPVSubdivColorsU3Ee__FixedBuffer_t376D9DA8AEE2F2016D631895AE6A01F6439C8189 ____DebugAPVSubdivColors;
	int32_t ____DebugLightingMode;
	int32_t ____DebugLightLayersMask;
	int32_t ____DebugShadowMapMode;
	int32_t ____DebugMipMapMode;
	int32_t ____DebugFullScreenMode;
	float ____DebugTransparencyOverdrawWeight;
	int32_t ____DebugMipMapModeTerrainTexture;
	int32_t ____ColorPickerMode;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ____DebugViewportSize;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ____DebugLightingAlbedo;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ____DebugLightingSmoothness;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ____DebugLightingNormal;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ____DebugLightingAmbientOcclusion;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ____DebugLightingSpecularColor;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ____DebugLightingEmissiveColor;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ____DebugLightingMaterialValidateHighColor;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ____DebugLightingMaterialValidateLowColor;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ____DebugLightingMaterialValidatePureMetalColor;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ____MousePixelCoord;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ____MouseClickPixelCoord;
	int32_t ____MatcapMixAlbedo;
	float ____MatcapViewScale;
	int32_t ____DebugSingleShadowIndex;
	int32_t ____DebugIsLitShaderModeDeferred;
	int32_t ____DebugAOVOutput;
	float ____ShaderVariablesDebugDisplayPad0;
	float ____ShaderVariablesDebugDisplayPad1;
	float ____ShaderVariablesDebugDisplayPad2;
};
struct ShaderVariablesGlobal_t1ED96D9F204BB3577D505C7F1C845726B1009540 
{
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ____ViewMatrix;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ____CameraViewMatrix;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ____InvViewMatrix;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ____ProjMatrix;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ____InvProjMatrix;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ____ViewProjMatrix;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ____CameraViewProjMatrix;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ____InvViewProjMatrix;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ____NonJitteredViewProjMatrix;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ____PrevViewProjMatrix;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ____PrevInvViewProjMatrix;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ____WorldSpaceCameraPos_Internal;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ____PrevCamPosRWS_Internal;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ____ScreenSize;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ____PostProcessScreenSize;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ____RTHandleScale;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ____RTHandleScaleHistory;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ____RTHandlePostProcessScale;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ____RTHandlePostProcessScaleHistory;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ____DynamicResolutionFullscreenScale;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ____ZBufferParams;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ____ProjectionParams;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___unity_OrthoParams;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ____ScreenParams;
	U3C_FrustumPlanesU3Ee__FixedBuffer_t73BFA8EB26E001BDEC450C919F4907681F3D0FAB ____FrustumPlanes;
	U3C_ShadowFrustumPlanesU3Ee__FixedBuffer_t133A529073E5CF2C51E08C382003BCE34694E677 ____ShadowFrustumPlanes;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ____TaaFrameInfo;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ____TaaJitterStrength;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ____Time;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ____SinTime;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ____CosTime;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___unity_DeltaTime;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ____TimeParameters;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ____LastTimeParameters;
	int32_t ____FogEnabled;
	int32_t ____PBRFogEnabled;
	int32_t ____EnableVolumetricFog;
	float ____MaxFogDistance;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ____FogColor;
	float ____FogColorMode;
	float ____GlobalMipBias;
	float ____GlobalMipBiasPow2;
	float ____Pad0;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ____MipFogParameters;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ____HeightFogBaseScattering;
	float ____HeightFogBaseExtinction;
	float ____HeightFogBaseHeight;
	float ____GlobalFogAnisotropy;
	int32_t ____VolumetricFilteringEnabled;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ____HeightFogExponents;
	int32_t ____FogDirectionalOnly;
	float ____FogGIDimmer;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ____VBufferViewportSize;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ____VBufferLightingViewportScale;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ____VBufferLightingViewportLimit;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ____VBufferDistanceEncodingParams;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ____VBufferDistanceDecodingParams;
	uint32_t ____VBufferSliceCount;
	float ____VBufferRcpSliceCount;
	float ____VBufferRcpInstancedViewCount;
	float ____VBufferLastSliceDist;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ____ShadowAtlasSize;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ____CascadeShadowAtlasSize;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ____AreaShadowAtlasSize;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ____CachedShadowAtlasSize;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ____CachedAreaShadowAtlasSize;
	int32_t ____ReflectionsMode;
	int32_t ____UnusedPadding0;
	int32_t ____UnusedPadding1;
	int32_t ____UnusedPadding2;
	uint32_t ____DirectionalLightCount;
	uint32_t ____PunctualLightCount;
	uint32_t ____AreaLightCount;
	uint32_t ____EnvLightCount;
	int32_t ____EnvLightSkyEnabled;
	uint32_t ____CascadeShadowCount;
	int32_t ____DirectionalShadowIndex;
	uint32_t ____EnableLightLayers;
	uint32_t ____EnableSkyReflection;
	uint32_t ____EnableSSRefraction;
	float ____SSRefractionInvScreenWeightDistance;
	float ____ColorPyramidLodCount;
	float ____DirectionalTransmissionMultiplier;
	float ____ProbeExposureScale;
	float ____ContactShadowOpacity;
	float ____ReplaceDiffuseForIndirect;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ____AmbientOcclusionParam;
	float ____IndirectDiffuseLightingMultiplier;
	uint32_t ____IndirectDiffuseLightingLayers;
	float ____ReflectionLightingMultiplier;
	uint32_t ____ReflectionLightingLayers;
	float ____MicroShadowOpacity;
	uint32_t ____EnableProbeVolumes;
	uint32_t ____ProbeVolumeCount;
	float ____SlopeScaleDepthBias;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ____CookieAtlasSize;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ____CookieAtlasData;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ____ReflectionAtlasCubeData;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ____ReflectionAtlasPlanarData;
	uint32_t ____NumTileFtplX;
	uint32_t ____NumTileFtplY;
	float ___g_fClustScale;
	float ___g_fClustBase;
	float ___g_fNearPlane;
	float ___g_fFarPlane;
	int32_t ___g_iLog2NumClusters;
	uint32_t ___g_isLogBaseBufferEnabled;
	uint32_t ____NumTileClusteredX;
	uint32_t ____NumTileClusteredY;
	int32_t ____EnvSliceSize;
	uint32_t ____EnableDecalLayers;
	U3C_ShapeParamsAndMaxScatterDistsU3Ee__FixedBuffer_t2C9C5DCCD422AD66D9E512BBB29514CA5F130E04 ____ShapeParamsAndMaxScatterDists;
	U3C_TransmissionTintsAndFresnel0U3Ee__FixedBuffer_tA78E2F5239C9A06A1BD7A224DCB6C2CA8229F483 ____TransmissionTintsAndFresnel0;
	U3C_WorldScalesAndFilterRadiiAndThicknessRemapsU3Ee__FixedBuffer_t98305C8D11F8570D2AE0885D5116EDDCC0C62BB7 ____WorldScalesAndFilterRadiiAndThicknessRemaps;
	U3C_DiffusionProfileHashTableU3Ee__FixedBuffer_t67607AC6B85E8C2ADBAC6CAD25F056DD7AB52777 ____DiffusionProfileHashTable;
	uint32_t ____EnableSubsurfaceScattering;
	uint32_t ____TexturingModeFlags;
	uint32_t ____TransmissionFlags;
	uint32_t ____DiffusionProfileCount;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ____DecalAtlasResolution;
	uint32_t ____EnableDecals;
	uint32_t ____DecalCount;
	float ____OffScreenDownsampleFactor;
	uint32_t ____OffScreenRendering;
	uint32_t ____XRViewCount;
	int32_t ____FrameCount;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ____CoarseStencilBufferSize;
	int32_t ____IndirectDiffuseMode;
	int32_t ____EnableRayTracedReflections;
	int32_t ____RaytracingFrameIndex;
	uint32_t ____EnableRecursiveRayTracing;
	int32_t ____TransparentCameraOnlyMotionVectors;
	float ____GlobalTessellationFactorMultiplier;
	float ____SpecularOcclusionBlend;
	float ____DeExposureMultiplier;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ____ScreenSizeOverride;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ____ScreenCoordScaleBias;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ____ColorPyramidUvScaleAndLimitPrevFrame;
};
struct ShaderVariablesLightList_t628A0287D1F14C61E8F9370F92E1AE1F2F949118 
{
	U3Cg_mInvScrProjectionArrU3Ee__FixedBuffer_t366E4B72DD7B403506ACA991495E5F59BB6DD12C ___g_mInvScrProjectionArr;
	U3Cg_mScrProjectionArrU3Ee__FixedBuffer_t5CC21F8A872194455A53C0C33E9E89E038BB8656 ___g_mScrProjectionArr;
	U3Cg_mInvProjectionArrU3Ee__FixedBuffer_t8B09A405C352AEBAE1B65D5AC73C58EEDFF2D7A3 ___g_mInvProjectionArr;
	U3Cg_mProjectionArrU3Ee__FixedBuffer_t3419CCE3ED1DD827B4FBC71281B00F430630D568 ___g_mProjectionArr;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___g_screenSize;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___g_viDimensions;
	int32_t ___g_iNrVisibLights;
	uint32_t ___g_isOrthographic;
	uint32_t ___g_BaseFeatureFlags;
	int32_t ___g_iNumSamplesMSAA;
	uint32_t ____EnvLightIndexShift;
	uint32_t ____DecalIndexShift;
};
struct ShaderVariablesPhysicallyBasedSky_tDAB44A93AFD7EC0709C979FC7D3FF963898D0961 
{
	float ____PlanetaryRadius;
	float ____RcpPlanetaryRadius;
	float ____AtmosphericDepth;
	float ____RcpAtmosphericDepth;
	float ____AtmosphericRadius;
	float ____AerosolAnisotropy;
	float ____AerosolPhasePartConstant;
	float ____Unused;
	float ____AirDensityFalloff;
	float ____AirScaleHeight;
	float ____AerosolDensityFalloff;
	float ____AerosolScaleHeight;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ____AirSeaLevelExtinction;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ____AirSeaLevelScattering;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ____AerosolSeaLevelScattering;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ____GroundAlbedo;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ____PlanetCenterPosition;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ____HorizonTint;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ____ZenithTint;
	float ____AerosolSeaLevelExtinction;
	float ____IntensityMultiplier;
	float ____ColorSaturation;
	float ____AlphaSaturation;
	float ____AlphaMultiplier;
	float ____HorizonZenithShiftPower;
	float ____HorizonZenithShiftScale;
	float ____Unused2;
};
struct ShaderVariablesProbeVolumes_t93D502CF0A3275CEBA1EDF0E6DB84816618662D4 
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ____PoolDim_CellInMeters;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ____MinCellPos_Noise;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ____IndicesDim_IndexChunkSize;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ____Biases_CellInMinBrick_MinBrickSize;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ____LeakReductionParams;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ____Weight_MinLoadedCell;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ____MaxLoadedCell_FrameIndex;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ____NormalizationClamp_Padding12;
};
struct ShaderVariablesRaytracingLightLoop_tE3916615DE581851EF9738B5A1D99275417E21B7 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____MinClusterPos;
	uint32_t ____LightPerCellCount;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____MaxClusterPos;
	uint32_t ____PunctualLightCountRT;
	uint32_t ____AreaLightCountRT;
	uint32_t ____EnvLightCountRT;
};
struct ShaderVariablesUnderWater_tD2B3C822909C1ED171C6E0F4F1D61BD39319A1DD 
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ____WaterRefractionColor;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ____WaterScatteringColor;
	float ____MaxViewDistanceMultiplier;
	float ____OutScatteringCoeff;
	float ____WaterTransitionSize;
	float ____PaddingUW;
};
struct ShaderVariablesVolumetric_t8D5D8F4ED54979AF40EDF95C258E731EDEC86931 
{
	U3C_VBufferCoordToViewDirWSU3Ee__FixedBuffer_t2C828A4461067A3477C6C3324CA9F7D8C4010A3B ____VBufferCoordToViewDirWS;
	float ____VBufferUnitDepthTexelSpacing;
	uint32_t ____NumVisibleLocalVolumetricFog;
	float ____CornetteShanksConstant;
	uint32_t ____VBufferHistoryIsValid;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ____VBufferSampleOffset;
	float ____VBufferVoxelSize;
	float ____HaveToPad;
	float ____OtherwiseTheBuffer;
	float ____IsFilledWithGarbage;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ____VBufferPrevViewportSize;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ____VBufferHistoryViewportScale;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ____VBufferHistoryViewportLimit;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ____VBufferPrevDistanceEncodingParams;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ____VBufferPrevDistanceDecodingParams;
	uint32_t ____NumTileBigTileX;
	uint32_t ____NumTileBigTileY;
	uint32_t ____Pad0_SVV;
	uint32_t ____Pad1_SVV;
};
struct ShaderVariablesWater_t07049694F97712589E44B8B54D3E65B949DF4620 
{
	uint32_t ____BandResolution;
	float ____MaxWaveHeight;
	float ____SimulationTime;
	float ____ScatteringWaveHeight;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ____PatchSize;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ____PatchAmplitudeMultiplier;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ____PatchDirectionDampener;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ____PatchWindSpeed;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ____PatchWindOrientation;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ____PatchCurrentSpeed;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ____PatchCurrentOrientation;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ____PatchFadeStart;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ____PatchFadeDistance;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ____PatchFadeValue;
	float ____SimulationFoamSmoothness;
	float ____JacobianDrag;
	float ____SimulationFoamAmount;
	float ____SSSMaskCoefficient;
	float ____Choppiness;
	float ____DeltaTime;
	float ____MaxWaveDisplacement;
	float ____MaxRefractionDistance;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ____FoamOffsets;
	float ____FoamTilling;
	float ____WindFoamAttenuation;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ____TransparencyColor;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ____ScatteringColorTips;
	float ____DisplacementScattering;
	int32_t ____WaterInitialFrame;
	int32_t ____SurfaceIndex;
	float ____CausticsRegionSize;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ____ScatteringLambertLighting;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ____DeepFoamColor;
	float ____OutScatteringCoefficient;
	float ____FoamSmoothness;
	float ____HeightBasedScattering;
	float ____WaterSmoothness;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ____FoamJacobianLambda;
	int32_t ____WaterRefSimRes;
	float ____WaterSpectrumOffset;
	int32_t ____WaterSampleOffset;
	int32_t ____WaterBandCount;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ____PaddingW0;
	float ____AmbientScattering;
	int32_t ____CausticsBandIndex;
};
struct ShaderVariablesWaterRendering_t7387B4D50AD04EA24E1F2EDE74316D8BABA3FF18 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ____GridSize;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ____WaterRotation;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ____PatchOffset;
	uint32_t ____WaterLODCount;
	uint32_t ____NumWaterPatches;
	float ____FoamIntensity;
	float ____CausticsIntensity;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ____WaterMaskScale;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ____WaterMaskOffset;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ____FoamMaskScale;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ____FoamMaskOffset;
	float ____CausticsPlaneBlendDistance;
	int32_t ____WaterCausticsEnabled;
	uint32_t ____WaterDecalLayer;
	int32_t ____InfiniteSurface;
	float ____WaterMaxTessellationFactor;
	float ____WaterTessellationFadeStart;
	float ____WaterTessellationFadeRange;
	int32_t ____CameraInUnderwaterRegion;
};
struct ShaderVariablesXR_t80A2FFAE6813A890710DFB5F6FC07A6BB505ADE1 
{
	U3C_XRViewMatrixU3Ee__FixedBuffer_tCD285A65283D91EAFABDF67612F2537F9C548073 ____XRViewMatrix;
	U3C_XRInvViewMatrixU3Ee__FixedBuffer_t14105568440401911C7CBEF9F996073EA879C64A ____XRInvViewMatrix;
	U3C_XRProjMatrixU3Ee__FixedBuffer_t8C38F7CE6262EEF2996017B6AD3DDEF269933664 ____XRProjMatrix;
	U3C_XRInvProjMatrixU3Ee__FixedBuffer_t895041F84922ACFE6F743A2EC4D450854832878E ____XRInvProjMatrix;
	U3C_XRViewProjMatrixU3Ee__FixedBuffer_t852D424EAB67B07B9263E5E4535F8400FCE3F110 ____XRViewProjMatrix;
	U3C_XRInvViewProjMatrixU3Ee__FixedBuffer_t78F56BFE46509CDB8F4078B05F6568625E38EF24 ____XRInvViewProjMatrix;
	U3C_XRNonJitteredViewProjMatrixU3Ee__FixedBuffer_t06EDF4973E8E986A5CC949C1D0E99412818F5921 ____XRNonJitteredViewProjMatrix;
	U3C_XRPrevViewProjMatrixU3Ee__FixedBuffer_t1F36095861B928A64A476D665B2AE67E70F6BBA5 ____XRPrevViewProjMatrix;
	U3C_XRPrevInvViewProjMatrixU3Ee__FixedBuffer_t69ECF1FCFBA7CB180C7276B50D86D4D8CC3D7473 ____XRPrevInvViewProjMatrix;
	U3C_XRPrevViewProjMatrixNoCameraTransU3Ee__FixedBuffer_t386971266A74BC45AF86A1B3A967548A80205921 ____XRPrevViewProjMatrixNoCameraTrans;
	U3C_XRViewProjMatrixNoCameraTransU3Ee__FixedBuffer_tBFEDE90CAE81742C83B249565EFDE1E7C7BA9A85 ____XRViewProjMatrixNoCameraTrans;
	U3C_XRPixelCoordToViewDirWSU3Ee__FixedBuffer_t3B569F455DC338753321303765A7863E6C1C25D2 ____XRPixelCoordToViewDirWS;
	U3C_XRWorldSpaceCameraPosU3Ee__FixedBuffer_t4CE8AE794A77A7E0C28EAD9684C0E6A94BA75FD4 ____XRWorldSpaceCameraPos;
	U3C_XRWorldSpaceCameraPosViewOffsetU3Ee__FixedBuffer_t0D65053D83CF10F5B5005314D5C88A3FE9BE68BF ____XRWorldSpaceCameraPosViewOffset;
	U3C_XRPrevWorldSpaceCameraPosU3Ee__FixedBuffer_t3700D348A5CAD8B9DAEFF746D8FB50C7A0B0EE6C ____XRPrevWorldSpaceCameraPos;
};
struct ShadowSplitData_tC276A96F461DD73CFF6D94DB557D42A1643640DF 
{
	int32_t ___m_CullingPlaneCount;
	U3Cm_CullingPlanesU3Ee__FixedBuffer_tC12F25D54F08F8DA4BD1129A6E4B09385A888B62 ___m_CullingPlanes;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_CullingSphere;
	float ___m_ShadowCascadeBlendCullingFactor;
	float ___m_CullingNearPlane;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_CullingMatrix;
};
struct SignerWithPermissions_tC2BFC110BE8323ADD92D8C3C763C87A44FF6733D 
{
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___isAdmin;
	String_t* ___signer;
	SignerPermissions_tC55810C9339598226586F847674303571824125C ___permissions;
};
struct SignerWithPermissions_tC2BFC110BE8323ADD92D8C3C763C87A44FF6733D_marshaled_pinvoke
{
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___isAdmin;
	char* ___signer;
	SignerPermissions_tC55810C9339598226586F847674303571824125C_marshaled_pinvoke ___permissions;
};
struct SignerWithPermissions_tC2BFC110BE8323ADD92D8C3C763C87A44FF6733D_marshaled_com
{
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___isAdmin;
	Il2CppChar* ___signer;
	SignerPermissions_tC55810C9339598226586F847674303571824125C_marshaled_com ___permissions;
};
struct SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126 
{
	String_t* ___name;
	String_t* ___parentName;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___scale;
};
struct SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126_marshaled_pinvoke
{
	char* ___name;
	char* ___parentName;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___scale;
};
struct SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126_marshaled_com
{
	Il2CppChar* ___name;
	Il2CppChar* ___parentName;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___scale;
};
struct SortingCriteria_t4907D221CB6E6AA4A32C1ED7B5D17103FD3E7C39 
{
	int32_t ___value__;
};
struct SpotLightShape_t742B3F95EAC982B416DF7E7916070FAEAE0DB681 
{
	int32_t ___value__;
};
struct SpriteBone_t92E0FF1412CC4B6A5FC71895699E35FB3EF75044 
{
	String_t* ___m_Name;
	String_t* ___m_Guid;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Position;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___m_Rotation;
	float ___m_Length;
	int32_t ___m_ParentId;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_Color;
};
struct SpriteBone_t92E0FF1412CC4B6A5FC71895699E35FB3EF75044_marshaled_pinvoke
{
	char* ___m_Name;
	char* ___m_Guid;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Position;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___m_Rotation;
	float ___m_Length;
	int32_t ___m_ParentId;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_Color;
};
struct SpriteBone_t92E0FF1412CC4B6A5FC71895699E35FB3EF75044_marshaled_com
{
	Il2CppChar* ___m_Name;
	Il2CppChar* ___m_Guid;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Position;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___m_Rotation;
	float ___m_Length;
	int32_t ___m_ParentId;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_Color;
};
struct SqlCompareOptions_t587E37815433668F9B319101E1E9AFE84377ABA8 
{
	int32_t ___value__;
};
struct StackFrameObjectState_tF130309857939DE8157081DB8E762C361A53DC32 
{
	uint8_t ___value__;
};
struct StackFramePropertyState_tFC72561BA46D87C2FE3369F97799444AAC45678F 
{
	uint8_t ___value__;
};
struct StyleKeyword_t2812E72266C15CBA8927586972DC2FD27B10E705 
{
	int32_t ___value__;
};
struct StylePropertyId_tA3B8A5213F5BA43F9C5443B27B165D744713BE69 
{
	int32_t ___value__;
};
struct StyleSelectorType_t425962DE6D175F785FA2B5554D793B71D39430A3 
{
	int32_t ___value__;
};
struct StyleSyntaxTokenType_tFB5906557ADB62467788C6C7F28D771374EC4834 
{
	int32_t ___value__;
};
struct StyleValueType_tC3253FE046DBB95224A74D13B534D015CC4AADDE 
{
	int32_t ___value__;
};
struct TMP_TextElementType_t51EE6662436732F22C6B599F5757B7F35F706342 
{
	int32_t ___value__;
};
struct TMP_Vertex_t0FD80AE2515219689310A8F619A265667B530E1A 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___uv;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___uv2;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___uv4;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color;
};
struct TagUnitType_t474C73D5D3F1A2691F64E452E657A4849B2BEF8C 
{
	int32_t ___value__;
};
struct TagUnitType_tE96B416272B0326E2683B4BD84B5E51C60FCB7EE 
{
	int32_t ___value__;
};
struct TagValueType_tDB67CA3DFCA6CDE7E8F14EDD33B51D424BA3EF08 
{
	int32_t ___value__;
};
struct TagValueType_t9A889DA5C696E6477A6E1D5D6BC2767315745B2E 
{
	int32_t ___value__;
};
struct TextAlignment_tD681BE7D2451C44115A90D2D8AA7D91C78A5A070 
{
	int32_t ___value__;
};
struct TextElementType_tEBCF09EEF888E8B1F62D3DD66AF21890D12545EB 
{
	uint8_t ___value__;
};
struct TextFontWeight_t789E26840C291C6C1270D4434CE007ACDFA40350 
{
	int32_t ___value__;
};
struct TextProcessingElementType_t0F469889070F147273CE0C33D25C8A80E11C1319 
{
	int32_t ___value__;
};
struct TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___offset;
	float ___blurRadius;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color;
};
struct TextVertex_tF030A16DC67EAF3F6C9C9C0564D4B88758B173A9 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___uv;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___uv2;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color;
};
struct TimeUnit_t56A79CDB672E98A4EE28002BD23B6D5E0BAA2649 
{
	int32_t ___value__;
};
struct TimerData_t8010CFAF29DE9990BB65E621F386D9F74ACA449B 
{
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___Created;
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___Interval;
	RuntimeObject* ___Context;
	Func_3_tA9798B0F4A6E065506CCD2430A77D31C196DC1B0* ___OnTimer;
};
struct TimerData_t8010CFAF29DE9990BB65E621F386D9F74ACA449B_marshaled_pinvoke
{
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___Created;
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___Interval;
	Il2CppIUnknown* ___Context;
	Il2CppMethodPointer ___OnTimer;
};
struct TimerData_t8010CFAF29DE9990BB65E621F386D9F74ACA449B_marshaled_com
{
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___Created;
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___Interval;
	Il2CppIUnknown* ___Context;
	Il2CppMethodPointer ___OnTimer;
};
struct TimingEvent_t5697F8C973C8A77FED2BC5449FC594A84DB15E6D 
{
	String_t* ___Name;
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___Duration;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___When;
};
struct TimingEvent_t5697F8C973C8A77FED2BC5449FC594A84DB15E6D_marshaled_pinvoke
{
	char* ___Name;
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___Duration;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___When;
};
struct TimingEvent_t5697F8C973C8A77FED2BC5449FC594A84DB15E6D_marshaled_com
{
	Il2CppChar* ___Name;
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___Duration;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___When;
};
struct TimingEvents_t991F8C07B43D056A5D99D83B0F63156F26E41F2B 
{
	int32_t ___value__;
};
struct TouchPhase_t54E0A1AF80465997849420A72317B733E1D49A9E 
{
	int32_t ___value__;
};
struct TouchType_t84F82C73BC1A6012141735AD84DA67AA7F7AB43F 
{
	int32_t ___value__;
};
struct Transform3x4_t9F79FC0112A00D3FFD7AFAD2D10AD22DF929052F 
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___v0;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___v1;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___v2;
};
struct TreeViewItemWrapper_t4475B9923345B2D51C29E1E5285A4F92FA65C839 
{
	TreeItem_t6B0F84E487FB869A51E1DA4987183127271F4F90 ___item;
	int32_t ___depth;
};
struct TreeViewItemWrapper_t4475B9923345B2D51C29E1E5285A4F92FA65C839_marshaled_pinvoke
{
	TreeItem_t6B0F84E487FB869A51E1DA4987183127271F4F90_marshaled_pinvoke ___item;
	int32_t ___depth;
};
struct TreeViewItemWrapper_t4475B9923345B2D51C29E1E5285A4F92FA65C839_marshaled_com
{
	TreeItem_t6B0F84E487FB869A51E1DA4987183127271F4F90_marshaled_com ___item;
	int32_t ___depth;
};
struct UCircle_t68411F86930A7056CDBAB9E208076A3075D15218 
{
	float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA ___center;
	float ___radius;
};
struct UEncroachingSegment_tD13983B03A27E74BB47A12B60732B020888416BA 
{
	float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA ___a;
	float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA ___b;
	int32_t ___index;
};
struct UEvent_t6B46070B7BC816FDF53E67775BD4EA5508B807C2 
{
	float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA ___a;
	float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA ___b;
	int32_t ___idx;
	int32_t ___type;
};
struct UHull_t042A8827A0CEE132C9302730F1CC1C2206B18B53 
{
	float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA ___a;
	float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA ___b;
	int32_t ___idx;
	ArraySlice_1_t38E85DAE9975597DC96B21D715F42183A9C5EF03 ___ilarray;
	int32_t ___ilcount;
	ArraySlice_1_t38E85DAE9975597DC96B21D715F42183A9C5EF03 ___iuarray;
	int32_t ___iucount;
};
struct UICharInfo_t24C2EA0F2F3A938100C271891D9DEB015ABA5FBD 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___cursorPos;
	float ___charWidth;
};
struct UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___normal;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___tangent;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___uv0;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___uv1;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___uv2;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___uv3;
};
struct UInt16Enum_t481D129F5FAE551E8684190D640F0FAEFB237CF8 
{
	uint16_t ___value__;
};
struct UInt32Enum_t7B4F5C6C14D2C4B2A5927C59620BE3868714DACF 
{
	uint32_t ___value__;
};
struct UStar_t44BAFB3CDE2A6D37FF4F48B038D7D920F8F47BD4 
{
	ArraySlice_1_t38E85DAE9975597DC96B21D715F42183A9C5EF03 ___points;
	int32_t ___pointCount;
};
struct VBufferParameters_t89273391C14B9731089C42F3884CC8F88A295624 
{
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___viewportSize;
	float ___voxelSize;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___depthEncodingParams;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___depthDecodingParams;
};
struct VectorImageVertex_t9D42377517CC059BD40E2A626ECEBE0C94CA0948 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___tint;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___uv;
	uint32_t ___settingIndex;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___flags;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___circle;
};
struct Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___tint;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___uv;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___xformClipPages;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___ids;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___flags;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___opacityColorPages;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___settingIndex;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___circle;
	float ___textureId;
};
struct VertexAttribute_tF34C1B76F20CA4AEC9D606BCD37A8A0C4A24C9A6 
{
	int32_t ___value__;
};
struct VertexAttributeFormat_tD714C51E671502B116ACE5E23F042BA80649D32F 
{
	int32_t ___value__;
};
struct VirtualOffsetSettings_tC91F136546790A8318F26B183DCB14460F426A44 
{
	bool ___useVirtualOffset;
	float ___outOfGeoOffset;
	float ___searchMultiplier;
	float ___rayOriginBias;
	int32_t ___maxHitsPerRay;
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___collisionMask;
};
struct VirtualOffsetSettings_tC91F136546790A8318F26B183DCB14460F426A44_marshaled_pinvoke
{
	int32_t ___useVirtualOffset;
	float ___outOfGeoOffset;
	float ___searchMultiplier;
	float ___rayOriginBias;
	int32_t ___maxHitsPerRay;
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___collisionMask;
};
struct VirtualOffsetSettings_tC91F136546790A8318F26B183DCB14460F426A44_marshaled_com
{
	int32_t ___useVirtualOffset;
	float ___outOfGeoOffset;
	float ___searchMultiplier;
	float ___rayOriginBias;
	int32_t ___maxHitsPerRay;
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___collisionMask;
};
struct VisibleLightFlags_t337DB92EFB0014AD6A250E1E45338B1194657CD8 
{
	int32_t ___value__;
};
struct VolumetricMaterialDataCBuffer_t0D314D7D0572D7B9FAC037F45A24AEBE49C0CFC7 
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ____VolumetricMaterialObbRight;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ____VolumetricMaterialObbUp;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ____VolumetricMaterialObbExtents;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ____VolumetricMaterialObbCenter;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ____VolumetricMaterialAlbedo;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ____VolumetricMaterialRcpPosFaceFade;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ____VolumetricMaterialRcpNegFaceFade;
	float ____VolumetricMaterialInvertFade;
	float ____VolumetricMaterialExtinction;
	float ____VolumetricMaterialRcpDistFadeLen;
	float ____VolumetricMaterialEndTimesRcpDistFadeLen;
	float ____VolumetricMaterialFalloffMode;
	float ___padding0;
	float ___padding1;
	float ___padding2;
};
struct WaterSurfaceProfile_tB344F3897C4432C713B93D510F01DF7EFBB6760D 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___waterAmbientProbe;
	float ___tipScatteringHeight;
	float ___bodyScatteringHeight;
	float ___maxRefractionDistance;
	uint32_t ___lightLayers;
	int32_t ___cameraUnderWater;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___transparencyColor;
	float ___outScatteringCoefficient;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___scatteringColor;
	float ___envPerceptualRoughness;
	float ___smoothnessFadeStart;
	float ___smoothnessFadeDistance;
	float ___roughnessEndValue;
	float ___padding;
};
struct X509ChainStatusFlags_t57C80D7C1F4C319F6D6B9FBDEA402E3023E6C769 
{
	int32_t ___value__;
};
struct XRView_t70E23918C68E24DB22A8614AA8717B3BA213FAB5 
{
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___projMatrix;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___viewMatrix;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___viewport;
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___occlusionMesh;
	int32_t ___textureArraySlice;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___eyeCenterUV;
};
struct XRView_t70E23918C68E24DB22A8614AA8717B3BA213FAB5_marshaled_pinvoke
{
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___projMatrix;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___viewMatrix;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___viewport;
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___occlusionMesh;
	int32_t ___textureArraySlice;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___eyeCenterUV;
};
struct XRView_t70E23918C68E24DB22A8614AA8717B3BA213FAB5_marshaled_com
{
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___projMatrix;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___viewMatrix;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___viewport;
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___occlusionMesh;
	int32_t ___textureArraySlice;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___eyeCenterUV;
};
struct float4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2 
{
	float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___c0;
	float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___c1;
	float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___c2;
	float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___c3;
};
struct Unit_t21DCD5C095F7DC1A0B9A47CAF8CAD3E7776CD3DB 
{
	int32_t ___value__;
};
struct Unit_tAE6456027618FB5F9E5CCB6E5C209250AC5695CC 
{
	int32_t ___value__;
};
struct PointLightHDType_tA256D3C60B6D12D451F74815B9500703F94F45D6 
{
	int32_t ___value__;
};
struct ShadowMapFlags_t816A10098737AB9F5ABB2AFD68AA46B96A2DACFB 
{
	int32_t ___value__;
};
struct Unit_t7A9C3ABB0618BEBFDC1813D07080CE0C145448ED 
{
	int32_t ___value__;
};
struct BlendMode_t671052DA10350EE6C3B91408B076BFC43D89D4D8 
{
	int32_t ___value__;
};
struct TextureChannel_tE5494C23DBE79DE46AD00AEF3D0777DDE1642532 
{
	int32_t ___value__;
};
struct Mode_t2D49D0E10E2FDA0026278C2400C16033888D0542 
{
	int32_t ___value__;
};
struct SettingsVersion_t3663C03E36EF45364E201CE47DCA26BDFCF05A2E 
{
	int32_t ___value__;
};
struct Nullable_1_t84A7D78AC69EB909256B961C8DFE4DF7670F9CB2 
{
	bool ___hasValue;
	int32_t ___value;
};
struct Nullable_1_t4CEC474D5FE9DA8D9DA0F75751091FF7B52745B8 
{
	bool ___hasValue;
	int32_t ___value;
};
struct TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 
{
	FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA* ___itemStack;
	int32_t ___index;
	int32_t ___m_DefaultItem;
	int32_t ___m_Capacity;
	int32_t ___m_RolloverSize;
	int32_t ___m_Count;
};
struct TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D 
{
	HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622* ___itemStack;
	int32_t ___index;
	HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B ___m_DefaultItem;
	int32_t ___m_Capacity;
	int32_t ___m_RolloverSize;
	int32_t ___m_Count;
};
struct TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 
{
	HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658* ___itemStack;
	int32_t ___index;
	int32_t ___m_DefaultItem;
	int32_t ___m_Capacity;
	int32_t ___m_RolloverSize;
	int32_t ___m_Count;
};
struct TextProcessingStack_1_tF3616757510D9631241E95596F10A4139420DA16 
{
	HighlightStateU5BU5D_tCF5677B4773947CE4C64B938B12AC50DDA347435* ___itemStack;
	int32_t ___index;
	HighlightState_tFF5FE9065990F04A37FEC545A0024047F0ABD740 ___m_DefaultItem;
	int32_t ___m_Capacity;
	int32_t ___m_RolloverSize;
	int32_t ___m_Count;
};
struct TextProcessingStack_1_tE63296B08A4C34E38D7EF3FFFA3470076B9E3A0F 
{
	TextAlignmentU5BU5D_t756DC2D672145699CB9718DDBA5982ED51A95F49* ___itemStack;
	int32_t ___index;
	int32_t ___m_DefaultItem;
	int32_t ___m_Capacity;
	int32_t ___m_RolloverSize;
	int32_t ___m_Count;
};
struct TextProcessingStack_1_t698B87CDD968C2046F57134BB3AB807EBFFD7790 
{
	TextFontWeightU5BU5D_t3DE32809AEE657255C8333897D61F2EA5279D43F* ___itemStack;
	int32_t ___index;
	int32_t ___m_DefaultItem;
	int32_t ___m_Capacity;
	int32_t ___m_RolloverSize;
	int32_t ___m_Count;
};
struct Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC 
{
	float ___m_Value;
	int32_t ___m_Unit;
};
struct BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F 
{
	int32_t ___x;
	int32_t ___y;
};
struct ComputedTransitionProperty_tD8E4D8EB5DD69E063944F27A48D9263F4F1354E1 
{
	int32_t ___id;
	int32_t ___durationMs;
	int32_t ___delayMs;
	Func_2_t2A7432CC4F64D0DF6D8629208B154CF139B39AF2* ___easingCurve;
};
struct ComputedTransitionProperty_tD8E4D8EB5DD69E063944F27A48D9263F4F1354E1_marshaled_pinvoke
{
	int32_t ___id;
	int32_t ___durationMs;
	int32_t ___delayMs;
	Il2CppMethodPointer ___easingCurve;
};
struct ComputedTransitionProperty_tD8E4D8EB5DD69E063944F27A48D9263F4F1354E1_marshaled_com
{
	int32_t ___id;
	int32_t ___durationMs;
	int32_t ___delayMs;
	Il2CppMethodPointer ___easingCurve;
};
struct ConnectionEventInfo_t419635A5BBCD4FA5CAA7E25536F475F5B305049A 
{
	ConnectionBase_t7C4914C0C49D494A073294EA24ACF12E42F32734* ___Source;
	int32_t ___Event;
	int32_t ___State;
	uint8_t ___ProtocolSupport;
	HTTPRequest_tF57611B8437BCEC08E99FBF3463B96341D29927F* ___Request;
	int32_t ___RequestState;
};
struct ConnectionEventInfo_t419635A5BBCD4FA5CAA7E25536F475F5B305049A_marshaled_pinvoke
{
	ConnectionBase_t7C4914C0C49D494A073294EA24ACF12E42F32734* ___Source;
	int32_t ___Event;
	int32_t ___State;
	uint8_t ___ProtocolSupport;
	HTTPRequest_tF57611B8437BCEC08E99FBF3463B96341D29927F* ___Request;
	int32_t ___RequestState;
};
struct ConnectionEventInfo_t419635A5BBCD4FA5CAA7E25536F475F5B305049A_marshaled_com
{
	ConnectionBase_t7C4914C0C49D494A073294EA24ACF12E42F32734* ___Source;
	int32_t ___Event;
	int32_t ___State;
	uint8_t ___ProtocolSupport;
	HTTPRequest_tF57611B8437BCEC08E99FBF3463B96341D29927F* ___Request;
	int32_t ___RequestState;
};
struct ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B 
{
	int32_t ___m_BodyID;
	int32_t ___m_OtherBodyID;
	intptr_t ___m_StartPtr;
	uint32_t ___m_NbPairs;
	uint16_t ___m_Flags;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_RelativeVelocity;
};
struct Dimension_t5B1EAB500AE32C3789A2BCC4D43F7A29996DF3F8 
{
	int32_t ___unit;
	float ___value;
};
struct DirectionalLightData_t65160A2C6A29DD3686EE1DE6CC22F1F16971245D 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positionRWS;
	uint32_t ___lightLayers;
	float ___lightDimmer;
	float ___volumetricLightDimmer;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forward;
	int32_t ___cookieMode;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___cookieScaleOffset;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___right;
	int32_t ___shadowIndex;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___up;
	int32_t ___contactShadowIndex;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___color;
	int32_t ___contactShadowMask;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___shadowTint;
	float ___shadowDimmer;
	float ___volumetricShadowDimmer;
	int32_t ___nonLightMappedOnly;
	float ___minRoughness;
	int32_t ___screenSpaceShadowIndex;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___shadowMaskSelector;
	float ___diffuseDimmer;
	float ___specularDimmer;
	float ___penumbraTint;
	float ___isRayTracedContactShadow;
	float ___distanceFromCamera;
	float ___angularDiameter;
	float ___flareFalloff;
	float ___flareCosInner;
	float ___flareCosOuter;
	float _____unused__;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___flareTint;
	float ___flareSize;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___surfaceTint;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___surfaceTextureScaleOffset;
};
struct EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4 
{
	int32_t ___m_Mode;
};
struct EnvLightData_t8A17ECB16F4806CC1A4B1755A304E429441B39C6 
{
	uint32_t ___lightLayers;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___capturePositionRWS;
	int32_t ___influenceShapeType;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___proxyExtents;
	float ___minProjectionDistance;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___proxyPositionRWS;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___proxyForward;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___proxyUp;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___proxyRight;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___influencePositionRWS;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___influenceForward;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___influenceUp;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___influenceRight;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___influenceExtents;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___blendDistancePositive;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___blendDistanceNegative;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___blendNormalDistancePositive;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___blendNormalDistanceNegative;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___boxSideFadePositive;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___boxSideFadeNegative;
	float ___weight;
	float ___multiplier;
	float ___rangeCompressionFactorCompensation;
	float ___roughReflections;
	float ___distanceBasedRoughness;
	int32_t ___envIndex;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___L0L1;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___L2_1;
	float ___L2_2;
	int32_t ___normalizeWithAPV;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___padding;
};
struct GPUCacheSettingSRP_tBD53F8D6C7296AE80C857C330F86A6AF8A6B7723 
{
	int32_t ___format;
	uint32_t ___sizeInMegaBytes;
};
struct Glyph_t700CF8EBE04ED4AEAB520885AAA1B309E02A103F  : public RuntimeObject
{
	uint32_t ___m_Index;
	GlyphMetrics_t6C1C65A891A6279A0EE807C436436B1E44F7AF1A ___m_Metrics;
	GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D ___m_GlyphRect;
	float ___m_Scale;
	int32_t ___m_AtlasIndex;
	int32_t ___m_ClassDefinitionType;
};
struct Glyph_t700CF8EBE04ED4AEAB520885AAA1B309E02A103F_marshaled_pinvoke
{
	uint32_t ___m_Index;
	GlyphMetrics_t6C1C65A891A6279A0EE807C436436B1E44F7AF1A ___m_Metrics;
	GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D ___m_GlyphRect;
	float ___m_Scale;
	int32_t ___m_AtlasIndex;
	int32_t ___m_ClassDefinitionType;
};
struct Glyph_t700CF8EBE04ED4AEAB520885AAA1B309E02A103F_marshaled_com
{
	uint32_t ___m_Index;
	GlyphMetrics_t6C1C65A891A6279A0EE807C436436B1E44F7AF1A ___m_Metrics;
	GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D ___m_GlyphRect;
	float ___m_Scale;
	int32_t ___m_AtlasIndex;
	int32_t ___m_ClassDefinitionType;
};
struct GlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C 
{
	uint32_t ___index;
	GlyphMetrics_t6C1C65A891A6279A0EE807C436436B1E44F7AF1A ___metrics;
	GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D ___glyphRect;
	float ___scale;
	int32_t ___atlasIndex;
	int32_t ___classDefinitionType;
};
struct GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E 
{
	GlyphAdjustmentRecord_tC7A1B2E0AC7C4ED9CDB8E95E48790A46B6F315F7 ___m_FirstAdjustmentRecord;
	GlyphAdjustmentRecord_tC7A1B2E0AC7C4ED9CDB8E95E48790A46B6F315F7 ___m_SecondAdjustmentRecord;
	int32_t ___m_FeatureLookupFlags;
};
struct GradientSettings_tADA3CAA17319C58811DE187298039CC950FBAAF3 
{
	int32_t ___gradientType;
	int32_t ___addressMode;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___radialFocus;
	RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 ___location;
};
struct HDLightRenderData_t7F8BD9B18E878A3003A1F69B1926D1DAB56B1D9F 
{
	int32_t ___pointLightType;
	int32_t ___spotLightShape;
	int32_t ___areaLightShape;
	int32_t ___lightLayer;
	float ___fadeDistance;
	float ___distance;
	float ___angularDiameter;
	float ___volumetricFadeDistance;
	bool ___includeForRayTracing;
	bool ___useScreenSpaceShadows;
	bool ___useRayTracedShadows;
	bool ___colorShadow;
	float ___lightDimmer;
	float ___volumetricDimmer;
	float ___shadowDimmer;
	float ___shadowFadeDistance;
	float ___volumetricShadowDimmer;
	float ___shapeWidth;
	float ___shapeHeight;
	float ___aspectRatio;
	float ___innerSpotPercent;
	float ___spotIESCutoffPercent;
	float ___shapeRadius;
	float ___barnDoorLength;
	float ___barnDoorAngle;
	float ___flareSize;
	float ___flareFalloff;
	bool ___affectVolumetric;
	bool ___affectDiffuse;
	bool ___affectSpecular;
	bool ___applyRangeAttenuation;
	bool ___penumbraTint;
	bool ___interactsWithSky;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___surfaceTint;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___shadowTint;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___flareTint;
};
struct HDLightRenderData_t7F8BD9B18E878A3003A1F69B1926D1DAB56B1D9F_marshaled_pinvoke
{
	int32_t ___pointLightType;
	int32_t ___spotLightShape;
	int32_t ___areaLightShape;
	int32_t ___lightLayer;
	float ___fadeDistance;
	float ___distance;
	float ___angularDiameter;
	float ___volumetricFadeDistance;
	int32_t ___includeForRayTracing;
	int32_t ___useScreenSpaceShadows;
	int32_t ___useRayTracedShadows;
	int32_t ___colorShadow;
	float ___lightDimmer;
	float ___volumetricDimmer;
	float ___shadowDimmer;
	float ___shadowFadeDistance;
	float ___volumetricShadowDimmer;
	float ___shapeWidth;
	float ___shapeHeight;
	float ___aspectRatio;
	float ___innerSpotPercent;
	float ___spotIESCutoffPercent;
	float ___shapeRadius;
	float ___barnDoorLength;
	float ___barnDoorAngle;
	float ___flareSize;
	float ___flareFalloff;
	int32_t ___affectVolumetric;
	int32_t ___affectDiffuse;
	int32_t ___affectSpecular;
	int32_t ___applyRangeAttenuation;
	int32_t ___penumbraTint;
	int32_t ___interactsWithSky;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___surfaceTint;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___shadowTint;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___flareTint;
};
struct HDLightRenderData_t7F8BD9B18E878A3003A1F69B1926D1DAB56B1D9F_marshaled_com
{
	int32_t ___pointLightType;
	int32_t ___spotLightShape;
	int32_t ___areaLightShape;
	int32_t ___lightLayer;
	float ___fadeDistance;
	float ___distance;
	float ___angularDiameter;
	float ___volumetricFadeDistance;
	int32_t ___includeForRayTracing;
	int32_t ___useScreenSpaceShadows;
	int32_t ___useRayTracedShadows;
	int32_t ___colorShadow;
	float ___lightDimmer;
	float ___volumetricDimmer;
	float ___shadowDimmer;
	float ___shadowFadeDistance;
	float ___volumetricShadowDimmer;
	float ___shapeWidth;
	float ___shapeHeight;
	float ___aspectRatio;
	float ___innerSpotPercent;
	float ___spotIESCutoffPercent;
	float ___shapeRadius;
	float ___barnDoorLength;
	float ___barnDoorAngle;
	float ___flareSize;
	float ___flareFalloff;
	int32_t ___affectVolumetric;
	int32_t ___affectDiffuse;
	int32_t ___affectSpecular;
	int32_t ___applyRangeAttenuation;
	int32_t ___penumbraTint;
	int32_t ___interactsWithSky;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___surfaceTint;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___shadowTint;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___flareTint;
};
struct HDProcessedVisibleLight_t374B0791C7675D2ADD6E951703D237559E1CDF6B 
{
	int32_t ___dataIndex;
	int32_t ___gpuLightType;
	int32_t ___lightType;
	float ___lightDistanceFade;
	float ___lightVolumetricDistanceFade;
	float ___distanceToCamera;
	int32_t ___shadowMapFlags;
	bool ___isBakedShadowMask;
};
struct HDProcessedVisibleLight_t374B0791C7675D2ADD6E951703D237559E1CDF6B_marshaled_pinvoke
{
	int32_t ___dataIndex;
	int32_t ___gpuLightType;
	int32_t ___lightType;
	float ___lightDistanceFade;
	float ___lightVolumetricDistanceFade;
	float ___distanceToCamera;
	int32_t ___shadowMapFlags;
	int32_t ___isBakedShadowMask;
};
struct HDProcessedVisibleLight_t374B0791C7675D2ADD6E951703D237559E1CDF6B_marshaled_com
{
	int32_t ___dataIndex;
	int32_t ___gpuLightType;
	int32_t ___lightType;
	float ___lightDistanceFade;
	float ___lightVolumetricDistanceFade;
	float ___distanceToCamera;
	int32_t ___shadowMapFlags;
	int32_t ___isBakedShadowMask;
};
struct HeaderVariantInfo_t99223ED0C557730FBD8AA572065B994254F3386A 
{
	String_t* ___m_name;
	int32_t ___m_variant;
};
struct HeaderVariantInfo_t99223ED0C557730FBD8AA572065B994254F3386A_marshaled_pinvoke
{
	char* ___m_name;
	int32_t ___m_variant;
};
struct HeaderVariantInfo_t99223ED0C557730FBD8AA572065B994254F3386A_marshaled_com
{
	Il2CppChar* ___m_name;
	int32_t ___m_variant;
};
struct HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8 
{
	String_t* ___m_BoneName;
	String_t* ___m_HumanName;
	HumanLimit_tE825F951DEE60E2641DD91F3C92C6B56A139A36E ___limit;
};
struct HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8_marshaled_pinvoke
{
	char* ___m_BoneName;
	char* ___m_HumanName;
	HumanLimit_tE825F951DEE60E2641DD91F3C92C6B56A139A36E ___limit;
};
struct HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8_marshaled_com
{
	Il2CppChar* ___m_BoneName;
	Il2CppChar* ___m_HumanName;
	HumanLimit_tE825F951DEE60E2641DD91F3C92C6B56A139A36E ___limit;
};
struct JsonPosition_t7788656A280615072710710E8C15D23285850E8E 
{
	int32_t ___Type;
	int32_t ___Position;
	String_t* ___PropertyName;
	bool ___HasIndex;
};
struct JsonPosition_t7788656A280615072710710E8C15D23285850E8E_marshaled_pinvoke
{
	int32_t ___Type;
	int32_t ___Position;
	char* ___PropertyName;
	int32_t ___HasIndex;
};
struct JsonPosition_t7788656A280615072710710E8C15D23285850E8E_marshaled_com
{
	int32_t ___Type;
	int32_t ___Position;
	Il2CppChar* ___PropertyName;
	int32_t ___HasIndex;
};
struct JsonReaderOptions_t947F34FBFA3AD2E8E137B660EC0FAFE4571D7E32 
{
	int32_t ____maxDepth;
	uint8_t ____commentHandling;
	bool ___U3CAllowTrailingCommasU3Ek__BackingField;
};
struct JsonReaderOptions_t947F34FBFA3AD2E8E137B660EC0FAFE4571D7E32_marshaled_pinvoke
{
	int32_t ____maxDepth;
	uint8_t ____commentHandling;
	int32_t ___U3CAllowTrailingCommasU3Ek__BackingField;
};
struct JsonReaderOptions_t947F34FBFA3AD2E8E137B660EC0FAFE4571D7E32_marshaled_com
{
	int32_t ____maxDepth;
	uint8_t ____commentHandling;
	int32_t ___U3CAllowTrailingCommasU3Ek__BackingField;
};
struct Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 
{
	float ___m_Value;
	int32_t ___m_Unit;
};
struct Light2DBlendStyle_tD5C374DD9D54E8FA4BC495EA99F386F09B16B3D4 
{
	String_t* ___name;
	int32_t ___maskTextureChannel;
	int32_t ___blendMode;
	bool ___U3CisDirtyU3Ek__BackingField;
	bool ___U3ChasRenderTargetU3Ek__BackingField;
	int32_t ___renderTargetHandleId;
	RTHandle_t135537761C47BC929F032B3C8F4D55EA1111B07B* ___renderTargetHandle;
};
struct Light2DBlendStyle_tD5C374DD9D54E8FA4BC495EA99F386F09B16B3D4_marshaled_pinvoke
{
	char* ___name;
	int32_t ___maskTextureChannel;
	int32_t ___blendMode;
	int32_t ___U3CisDirtyU3Ek__BackingField;
	int32_t ___U3ChasRenderTargetU3Ek__BackingField;
	int32_t ___renderTargetHandleId;
	RTHandle_t135537761C47BC929F032B3C8F4D55EA1111B07B* ___renderTargetHandle;
};
struct Light2DBlendStyle_tD5C374DD9D54E8FA4BC495EA99F386F09B16B3D4_marshaled_com
{
	Il2CppChar* ___name;
	int32_t ___maskTextureChannel;
	int32_t ___blendMode;
	int32_t ___U3CisDirtyU3Ek__BackingField;
	int32_t ___U3ChasRenderTargetU3Ek__BackingField;
	int32_t ___renderTargetHandleId;
	RTHandle_t135537761C47BC929F032B3C8F4D55EA1111B07B* ___renderTargetHandle;
};
struct LightBakingOutput_t6212AB0B6B34C94F1982FE964FC48201854B5B90 
{
	int32_t ___probeOcclusionLightIndex;
	int32_t ___occlusionMaskChannel;
	int32_t ___lightmapBakeType;
	int32_t ___mixedLightingMode;
	bool ___isBaked;
};
struct LightBakingOutput_t6212AB0B6B34C94F1982FE964FC48201854B5B90_marshaled_pinvoke
{
	int32_t ___probeOcclusionLightIndex;
	int32_t ___occlusionMaskChannel;
	int32_t ___lightmapBakeType;
	int32_t ___mixedLightingMode;
	int32_t ___isBaked;
};
struct LightBakingOutput_t6212AB0B6B34C94F1982FE964FC48201854B5B90_marshaled_com
{
	int32_t ___probeOcclusionLightIndex;
	int32_t ___occlusionMaskChannel;
	int32_t ___lightmapBakeType;
	int32_t ___mixedLightingMode;
	int32_t ___isBaked;
};
struct LightData_t8694116A62939E2F9CFB1D9C2DC626F399FF51CE 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positionRWS;
	uint32_t ___lightLayers;
	float ___lightDimmer;
	float ___volumetricLightDimmer;
	float ___angleScale;
	float ___angleOffset;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forward;
	float ___iesCut;
	int32_t ___lightType;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___right;
	float ___penumbraTint;
	float ___range;
	int32_t ___cookieMode;
	int32_t ___shadowIndex;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___up;
	float ___rangeAttenuationScale;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___color;
	float ___rangeAttenuationBias;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___cookieScaleOffset;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___shadowTint;
	float ___shadowDimmer;
	float ___volumetricShadowDimmer;
	int32_t ___nonLightMappedOnly;
	float ___minRoughness;
	int32_t ___screenSpaceShadowIndex;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___shadowMaskSelector;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___size;
	int32_t ___contactShadowMask;
	float ___diffuseDimmer;
	float ___specularDimmer;
	float _____unused__;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___padding;
	float ___isRayTracedContactShadow;
	float ___boxLightSafeExtent;
};
struct LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21 
{
	int32_t ___instanceID;
	int32_t ___cookieID;
	float ___cookieScale;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___color;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___indirectColor;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___orientation;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position;
	float ___range;
	float ___coneAngle;
	float ___innerConeAngle;
	float ___shape0;
	float ___shape1;
	uint8_t ___type;
	uint8_t ___mode;
	uint8_t ___shadow;
	uint8_t ___falloff;
};
struct LineInfo_t2BBD461B330C46ACA45596A8E72FEA4172F88CF5 
{
	int32_t ___controlCharacterCount;
	int32_t ___characterCount;
	int32_t ___visibleCharacterCount;
	int32_t ___spaceCount;
	int32_t ___visibleSpaceCount;
	int32_t ___wordCount;
	int32_t ___firstCharacterIndex;
	int32_t ___firstVisibleCharacterIndex;
	int32_t ___lastCharacterIndex;
	int32_t ___lastVisibleCharacterIndex;
	float ___length;
	float ___lineHeight;
	float ___ascender;
	float ___baseline;
	float ___descender;
	float ___maxAdvance;
	float ___width;
	float ___marginLeft;
	float ___marginRight;
	int32_t ___alignment;
	Extents_t369FB2B84521A0229C2FA3D4C8592B14E07CEFE6 ___lineExtents;
};
struct LocalKeyword_tED7F563B432A5461E58CE7032AF6D1CD669CD0CB 
{
	LocalKeywordSpace_t8D56A7A6130EF8C8F8BA247C67F1CB8256DA34AA ___m_SpaceInfo;
	String_t* ___m_Name;
	uint32_t ___m_Index;
};
struct LocalKeyword_tED7F563B432A5461E58CE7032AF6D1CD669CD0CB_marshaled_pinvoke
{
	LocalKeywordSpace_t8D56A7A6130EF8C8F8BA247C67F1CB8256DA34AA ___m_SpaceInfo;
	char* ___m_Name;
	uint32_t ___m_Index;
};
struct LocalKeyword_tED7F563B432A5461E58CE7032AF6D1CD669CD0CB_marshaled_com
{
	LocalKeywordSpace_t8D56A7A6130EF8C8F8BA247C67F1CB8256DA34AA ___m_SpaceInfo;
	Il2CppChar* ___m_Name;
	uint32_t ___m_Index;
};
struct LocalVolumetricFogEngineData_t2C635B70223D58196377D772AA4595F496283118 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___scattering;
	float ___extinction;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___textureTiling;
	int32_t ___invertFade;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___textureScroll;
	float ___rcpDistFadeLen;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rcpPosFaceFade;
	float ___endTimesRcpDistFadeLen;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rcpNegFaceFade;
	int32_t ___blendingMode;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___albedo;
	int32_t ___falloffMode;
};
struct ManipulatorActivationFilter_t866A0295DA75EA271B30BDC1F9EEA2C4FDEB1A81 
{
	int32_t ___U3CbuttonU3Ek__BackingField;
	int32_t ___U3CmodifiersU3Ek__BackingField;
	int32_t ___U3CclickCountU3Ek__BackingField;
};
struct MeshInfo_tE55C4A8846CC2C399CCC3FE989476D987B86AB2F 
{
	int32_t ___vertexCount;
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___vertices;
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___normals;
	Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___tangents;
	Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___uvs0;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___uvs2;
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___colors32;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___triangles;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material;
	int32_t ___glyphRenderMode;
};
struct MeshInfo_tE55C4A8846CC2C399CCC3FE989476D987B86AB2F_marshaled_pinvoke
{
	int32_t ___vertexCount;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___vertices;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___normals;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* ___tangents;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* ___uvs0;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___uvs2;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* ___colors32;
	Il2CppSafeArray* ___triangles;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material;
	int32_t ___glyphRenderMode;
};
struct MeshInfo_tE55C4A8846CC2C399CCC3FE989476D987B86AB2F_marshaled_com
{
	int32_t ___vertexCount;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___vertices;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___normals;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* ___tangents;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* ___uvs0;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___uvs2;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* ___colors32;
	Il2CppSafeArray* ___triangles;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material;
	int32_t ___glyphRenderMode;
};
struct MultiQuery_tCA0D1FA8A2B1738C903C816F85D7FC2727677794 
{
	String_t* ___contractAddress;
	int32_t ___startID;
	int32_t ___count;
	int32_t ___type;
};
struct MultiQuery_tCA0D1FA8A2B1738C903C816F85D7FC2727677794_marshaled_pinvoke
{
	char* ___contractAddress;
	int32_t ___startID;
	int32_t ___count;
	int32_t ___type;
};
struct MultiQuery_tCA0D1FA8A2B1738C903C816F85D7FC2727677794_marshaled_com
{
	Il2CppChar* ___contractAddress;
	int32_t ___startID;
	int32_t ___count;
	int32_t ___type;
};
struct NFT_t46E6566285B819F76FC6BF8DED1EBBDDEE46566D 
{
	NFTMetadata_t57B87F3F600CF2DB4051680552AC25ED94440D31 ___metadata;
	String_t* ___owner;
	String_t* ___type;
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___supply;
	Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 ___quantityOwned;
};
struct NFT_t46E6566285B819F76FC6BF8DED1EBBDDEE46566D_marshaled_pinvoke
{
	NFTMetadata_t57B87F3F600CF2DB4051680552AC25ED94440D31_marshaled_pinvoke ___metadata;
	char* ___owner;
	char* ___type;
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_marshaled_pinvoke ___supply;
	Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 ___quantityOwned;
};
struct NFT_t46E6566285B819F76FC6BF8DED1EBBDDEE46566D_marshaled_com
{
	NFTMetadata_t57B87F3F600CF2DB4051680552AC25ED94440D31_marshaled_com ___metadata;
	Il2CppChar* ___owner;
	Il2CppChar* ___type;
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_marshaled_com ___supply;
	Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 ___quantityOwned;
};
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C 
{
	int32_t ___m_Mode;
	bool ___m_WrapAround;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight;
};
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_pinvoke
{
	int32_t ___m_Mode;
	int32_t ___m_WrapAround;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight;
};
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_com
{
	int32_t ___m_Mode;
	int32_t ___m_WrapAround;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight;
};
struct OwnedQuery_t30BE34629D61DB9FED414CDEB7D73ABB51DD29E7 
{
	String_t* ___contractAddress;
	String_t* ___owner;
	int32_t ___type;
};
struct OwnedQuery_t30BE34629D61DB9FED414CDEB7D73ABB51DD29E7_marshaled_pinvoke
{
	char* ___contractAddress;
	char* ___owner;
	int32_t ___type;
};
struct OwnedQuery_t30BE34629D61DB9FED414CDEB7D73ABB51DD29E7_marshaled_com
{
	Il2CppChar* ___contractAddress;
	Il2CppChar* ___owner;
	int32_t ___type;
};
struct Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F 
{
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___m_Handle;
};
struct PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4 
{
	String_t* ___m_StreamName;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___m_SourceObject;
	Type_t* ___m_SourceBindingType;
	CreateOutputMethod_tD18AFE3B69E6DDD913D82D5FA1D5D909CEEC8509* ___m_CreateOutputMethod;
};
struct PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4_marshaled_pinvoke
{
	char* ___m_StreamName;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke ___m_SourceObject;
	Type_t* ___m_SourceBindingType;
	Il2CppMethodPointer ___m_CreateOutputMethod;
};
struct PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4_marshaled_com
{
	Il2CppChar* ___m_StreamName;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com* ___m_SourceObject;
	Type_t* ___m_SourceBindingType;
	Il2CppMethodPointer ___m_CreateOutputMethod;
};
struct ProbeVolumeBakingProcessSettings_t1A0C71DD07CFB6660AFC0D3EBF81FA5064CFDAD7 
{
	int32_t ___m_Version;
	ProbeDilationSettings_t28A862582E313EFC300E6437FDCB9D9DC9A9A167 ___dilationSettings;
	VirtualOffsetSettings_tC91F136546790A8318F26B183DCB14460F426A44 ___virtualOffsetSettings;
};
struct ProbeVolumeBakingProcessSettings_t1A0C71DD07CFB6660AFC0D3EBF81FA5064CFDAD7_marshaled_pinvoke
{
	int32_t ___m_Version;
	ProbeDilationSettings_t28A862582E313EFC300E6437FDCB9D9DC9A9A167_marshaled_pinvoke ___dilationSettings;
	VirtualOffsetSettings_tC91F136546790A8318F26B183DCB14460F426A44_marshaled_pinvoke ___virtualOffsetSettings;
};
struct ProbeVolumeBakingProcessSettings_t1A0C71DD07CFB6660AFC0D3EBF81FA5064CFDAD7_marshaled_com
{
	int32_t ___m_Version;
	ProbeDilationSettings_t28A862582E313EFC300E6437FDCB9D9DC9A9A167_marshaled_com ___dilationSettings;
	VirtualOffsetSettings_tC91F136546790A8318F26B183DCB14460F426A44_marshaled_com ___virtualOffsetSettings;
};
struct RasterState_tA30E8336EA5D1E2152A6C7252F15384985B98A26 
{
	int32_t ___m_CullingMode;
	int32_t ___m_OffsetUnits;
	float ___m_OffsetFactor;
	uint8_t ___m_DepthClip;
	uint8_t ___m_Conservative;
	uint8_t ___m_Padding1;
	uint8_t ___m_Padding2;
};
struct RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B 
{
	int32_t ___m_Type;
	int32_t ___m_NameID;
	int32_t ___m_InstanceID;
	intptr_t ___m_BufferPointer;
	int32_t ___m_MipLevel;
	int32_t ___m_CubeFace;
	int32_t ___m_DepthSlice;
};
struct RequestEventInfo_t40A34279BA8F8E88971CB743BAB41959EE134123 
{
	HTTPRequest_tF57611B8437BCEC08E99FBF3463B96341D29927F* ___SourceRequest;
	int32_t ___Event;
	int32_t ___State;
	Exception_t* ___Error;
	int64_t ___Progress;
	int64_t ___ProgressLength;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___Data;
	int32_t ___DataLength;
	Dictionary_2_t79BA378F246EFA4AD0AFFA017D788423CACA8638* ___Headers;
};
struct RequestEventInfo_t40A34279BA8F8E88971CB743BAB41959EE134123_marshaled_pinvoke
{
	HTTPRequest_tF57611B8437BCEC08E99FBF3463B96341D29927F* ___SourceRequest;
	int32_t ___Event;
	int32_t ___State;
	Exception_t_marshaled_pinvoke* ___Error;
	int64_t ___Progress;
	int64_t ___ProgressLength;
	Il2CppSafeArray* ___Data;
	int32_t ___DataLength;
	Dictionary_2_t79BA378F246EFA4AD0AFFA017D788423CACA8638* ___Headers;
};
struct RequestEventInfo_t40A34279BA8F8E88971CB743BAB41959EE134123_marshaled_com
{
	HTTPRequest_tF57611B8437BCEC08E99FBF3463B96341D29927F* ___SourceRequest;
	int32_t ___Event;
	int32_t ___State;
	Exception_t_marshaled_com* ___Error;
	int64_t ___Progress;
	int64_t ___ProgressLength;
	Il2CppSafeArray* ___Data;
	int32_t ___DataLength;
	Dictionary_2_t79BA378F246EFA4AD0AFFA017D788423CACA8638* ___Headers;
};
struct ResourceHandle_t0B9B0555328A08152F1EDA2BE4024446D670531A 
{
	uint32_t ___m_Value;
	int32_t ___U3CtypeU3Ek__BackingField;
};
struct RichTextTagAttribute_t1BB51A8FD6C14746D177D8E84E281A4FD4A720E0 
{
	int32_t ___nameHashCode;
	int32_t ___valueHashCode;
	int32_t ___valueType;
	int32_t ___valueStartIndex;
	int32_t ___valueLength;
	int32_t ___unitType;
};
struct RichTextTagAttribute_t0600951F833208392F1D8EE3E6A58AD5C797F9DA 
{
	int32_t ___nameHashCode;
	int32_t ___valueHashCode;
	int32_t ___valueType;
	int32_t ___valueStartIndex;
	int32_t ___valueLength;
	int32_t ___unitType;
};
struct ShadowSliceData_t1BCFEDC63BECA994949FE1F4245CEE930EE69E20 
{
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___viewMatrix;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___projectionMatrix;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___shadowTransform;
	int32_t ___offsetX;
	int32_t ___offsetY;
	int32_t ___resolution;
	ShadowSplitData_tC276A96F461DD73CFF6D94DB557D42A1643640DF ___splitData;
};
struct SingleQuery_t42035514AA7B5CC3BAAA8A72C79E9D66C6E0D8F0 
{
	String_t* ___contractAddress;
	String_t* ___tokenID;
	int32_t ___type;
};
struct SingleQuery_t42035514AA7B5CC3BAAA8A72C79E9D66C6E0D8F0_marshaled_pinvoke
{
	char* ___contractAddress;
	char* ___tokenID;
	int32_t ___type;
};
struct SingleQuery_t42035514AA7B5CC3BAAA8A72C79E9D66C6E0D8F0_marshaled_com
{
	Il2CppChar* ___contractAddress;
	Il2CppChar* ___tokenID;
	int32_t ___type;
};
struct SpriteSkinData_tAF363C091096E80EF5A98430D5738204C2CEF4A4 
{
	NativeCustomSlice_1_t553B89694440B1C5C7DF7F314D7A0711AE7A0783 ___vertices;
	NativeCustomSlice_1_t00144D7121E64139E2BBFAEB4BA01FB646F1A71B ___boneWeights;
	NativeCustomSlice_1_tB3DF9F46AA60E8412DC5B89CC7878A4BE49ABA45 ___bindPoses;
	NativeCustomSlice_1_t1BD4A99A5C57F16086ACE5EED91D969C19693921 ___tangents;
	bool ___hasTangents;
	int32_t ___spriteVertexStreamSize;
	int32_t ___spriteVertexCount;
	int32_t ___tangentVertexOffset;
	int32_t ___deformVerticesStartPos;
	int32_t ___transformId;
	NativeCustomSlice_1_t0D6722C6A546C76474543C10D2E576E494D019A8 ___boneTransformId;
};
struct SpriteSkinData_tAF363C091096E80EF5A98430D5738204C2CEF4A4_marshaled_pinvoke
{
	NativeCustomSlice_1_t553B89694440B1C5C7DF7F314D7A0711AE7A0783 ___vertices;
	NativeCustomSlice_1_t00144D7121E64139E2BBFAEB4BA01FB646F1A71B ___boneWeights;
	NativeCustomSlice_1_tB3DF9F46AA60E8412DC5B89CC7878A4BE49ABA45 ___bindPoses;
	NativeCustomSlice_1_t1BD4A99A5C57F16086ACE5EED91D969C19693921 ___tangents;
	int32_t ___hasTangents;
	int32_t ___spriteVertexStreamSize;
	int32_t ___spriteVertexCount;
	int32_t ___tangentVertexOffset;
	int32_t ___deformVerticesStartPos;
	int32_t ___transformId;
	NativeCustomSlice_1_t0D6722C6A546C76474543C10D2E576E494D019A8 ___boneTransformId;
};
struct SpriteSkinData_tAF363C091096E80EF5A98430D5738204C2CEF4A4_marshaled_com
{
	NativeCustomSlice_1_t553B89694440B1C5C7DF7F314D7A0711AE7A0783 ___vertices;
	NativeCustomSlice_1_t00144D7121E64139E2BBFAEB4BA01FB646F1A71B ___boneWeights;
	NativeCustomSlice_1_tB3DF9F46AA60E8412DC5B89CC7878A4BE49ABA45 ___bindPoses;
	NativeCustomSlice_1_t1BD4A99A5C57F16086ACE5EED91D969C19693921 ___tangents;
	int32_t ___hasTangents;
	int32_t ___spriteVertexStreamSize;
	int32_t ___spriteVertexCount;
	int32_t ___tangentVertexOffset;
	int32_t ___deformVerticesStartPos;
	int32_t ___transformId;
	NativeCustomSlice_1_t0D6722C6A546C76474543C10D2E576E494D019A8 ___boneTransformId;
};
struct SqlString_t49F9D31E7FD7F45509E26DEFEB61F006965D588D 
{
	String_t* ___m_value;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___m_cmpInfo;
	int32_t ___m_lcid;
	int32_t ___m_flag;
	bool ___m_fNotNull;
};
struct SqlString_t49F9D31E7FD7F45509E26DEFEB61F006965D588D_marshaled_pinvoke
{
	char* ___m_value;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___m_cmpInfo;
	int32_t ___m_lcid;
	int32_t ___m_flag;
	int32_t ___m_fNotNull;
};
struct SqlString_t49F9D31E7FD7F45509E26DEFEB61F006965D588D_marshaled_com
{
	Il2CppChar* ___m_value;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___m_cmpInfo;
	int32_t ___m_lcid;
	int32_t ___m_flag;
	int32_t ___m_fNotNull;
};
struct StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF 
{
	int32_t ___U3CidU3Ek__BackingField;
	String_t* ___U3CnameU3Ek__BackingField;
};
struct StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF_marshaled_pinvoke
{
	int32_t ___U3CidU3Ek__BackingField;
	char* ___U3CnameU3Ek__BackingField;
};
struct StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF_marshaled_com
{
	int32_t ___U3CidU3Ek__BackingField;
	Il2CppChar* ___U3CnameU3Ek__BackingField;
};
struct StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 
{
	String_t* ___m_Value;
	int32_t ___m_Type;
	RuntimeObject* ___tempData;
};
struct StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470_marshaled_pinvoke
{
	char* ___m_Value;
	int32_t ___m_Type;
	Il2CppIUnknown* ___tempData;
};
struct StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470_marshaled_com
{
	Il2CppChar* ___m_Value;
	int32_t ___m_Type;
	Il2CppIUnknown* ___tempData;
};
struct StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C 
{
	int32_t ___type;
	String_t* ___text;
	int32_t ___number;
};
struct StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C_marshaled_pinvoke
{
	int32_t ___type;
	char* ___text;
	int32_t ___number;
};
struct StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C_marshaled_com
{
	int32_t ___type;
	Il2CppChar* ___text;
	int32_t ___number;
};
struct StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D 
{
	int32_t ___m_ValueType;
	int32_t ___valueIndex;
};
struct StyleValueManaged_t68DFBEC1594279E4DC56634FD5092318D1E9A5F4 
{
	int32_t ___id;
	int32_t ___keyword;
	RuntimeObject* ___value;
};
struct StyleValueManaged_t68DFBEC1594279E4DC56634FD5092318D1E9A5F4_marshaled_pinvoke
{
	int32_t ___id;
	int32_t ___keyword;
	Il2CppIUnknown* ___value;
};
struct StyleValueManaged_t68DFBEC1594279E4DC56634FD5092318D1E9A5F4_marshaled_com
{
	int32_t ___id;
	int32_t ___keyword;
	Il2CppIUnknown* ___value;
};
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};
struct TMP_CharacterInfo_t8B8FF32D6AACE251F2E7835AA5BC6608D535D9F8 
{
	Il2CppChar ___character;
	int32_t ___index;
	int32_t ___stringLength;
	int32_t ___elementType;
	TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5* ___textElement;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset;
	int32_t ___spriteIndex;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material;
	int32_t ___materialReferenceIndex;
	bool ___isUsingAlternateTypeface;
	float ___pointSize;
	int32_t ___lineNumber;
	int32_t ___pageNumber;
	int32_t ___vertexIndex;
	TMP_Vertex_t0FD80AE2515219689310A8F619A265667B530E1A ___vertex_BL;
	TMP_Vertex_t0FD80AE2515219689310A8F619A265667B530E1A ___vertex_TL;
	TMP_Vertex_t0FD80AE2515219689310A8F619A265667B530E1A ___vertex_TR;
	TMP_Vertex_t0FD80AE2515219689310A8F619A265667B530E1A ___vertex_BR;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___topLeft;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___bottomLeft;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___topRight;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___bottomRight;
	float ___origin;
	float ___xAdvance;
	float ___ascender;
	float ___baseLine;
	float ___descender;
	float ___adjustedAscender;
	float ___adjustedDescender;
	float ___aspectRatio;
	float ___scale;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor;
	int32_t ___underlineVertexIndex;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor;
	int32_t ___strikethroughVertexIndex;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor;
	HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B ___highlightState;
	int32_t ___style;
	bool ___isVisible;
};
struct TMP_CharacterInfo_t8B8FF32D6AACE251F2E7835AA5BC6608D535D9F8_marshaled_pinvoke
{
	uint8_t ___character;
	int32_t ___index;
	int32_t ___stringLength;
	int32_t ___elementType;
	TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5* ___textElement;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset;
	int32_t ___spriteIndex;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material;
	int32_t ___materialReferenceIndex;
	int32_t ___isUsingAlternateTypeface;
	float ___pointSize;
	int32_t ___lineNumber;
	int32_t ___pageNumber;
	int32_t ___vertexIndex;
	TMP_Vertex_t0FD80AE2515219689310A8F619A265667B530E1A ___vertex_BL;
	TMP_Vertex_t0FD80AE2515219689310A8F619A265667B530E1A ___vertex_TL;
	TMP_Vertex_t0FD80AE2515219689310A8F619A265667B530E1A ___vertex_TR;
	TMP_Vertex_t0FD80AE2515219689310A8F619A265667B530E1A ___vertex_BR;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___topLeft;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___bottomLeft;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___topRight;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___bottomRight;
	float ___origin;
	float ___xAdvance;
	float ___ascender;
	float ___baseLine;
	float ___descender;
	float ___adjustedAscender;
	float ___adjustedDescender;
	float ___aspectRatio;
	float ___scale;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor;
	int32_t ___underlineVertexIndex;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor;
	int32_t ___strikethroughVertexIndex;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor;
	HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B ___highlightState;
	int32_t ___style;
	int32_t ___isVisible;
};
struct TMP_CharacterInfo_t8B8FF32D6AACE251F2E7835AA5BC6608D535D9F8_marshaled_com
{
	uint8_t ___character;
	int32_t ___index;
	int32_t ___stringLength;
	int32_t ___elementType;
	TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5* ___textElement;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset;
	int32_t ___spriteIndex;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material;
	int32_t ___materialReferenceIndex;
	int32_t ___isUsingAlternateTypeface;
	float ___pointSize;
	int32_t ___lineNumber;
	int32_t ___pageNumber;
	int32_t ___vertexIndex;
	TMP_Vertex_t0FD80AE2515219689310A8F619A265667B530E1A ___vertex_BL;
	TMP_Vertex_t0FD80AE2515219689310A8F619A265667B530E1A ___vertex_TL;
	TMP_Vertex_t0FD80AE2515219689310A8F619A265667B530E1A ___vertex_TR;
	TMP_Vertex_t0FD80AE2515219689310A8F619A265667B530E1A ___vertex_BR;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___topLeft;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___bottomLeft;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___topRight;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___bottomRight;
	float ___origin;
	float ___xAdvance;
	float ___ascender;
	float ___baseLine;
	float ___descender;
	float ___adjustedAscender;
	float ___adjustedDescender;
	float ___aspectRatio;
	float ___scale;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor;
	int32_t ___underlineVertexIndex;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor;
	int32_t ___strikethroughVertexIndex;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor;
	HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B ___highlightState;
	int32_t ___style;
	int32_t ___isVisible;
};
struct TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 
{
	int32_t ___controlCharacterCount;
	int32_t ___characterCount;
	int32_t ___visibleCharacterCount;
	int32_t ___spaceCount;
	int32_t ___wordCount;
	int32_t ___firstCharacterIndex;
	int32_t ___firstVisibleCharacterIndex;
	int32_t ___lastCharacterIndex;
	int32_t ___lastVisibleCharacterIndex;
	float ___length;
	float ___lineHeight;
	float ___ascender;
	float ___baseline;
	float ___descender;
	float ___maxAdvance;
	float ___width;
	float ___marginLeft;
	float ___marginRight;
	int32_t ___alignment;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___lineExtents;
};
struct TextProcessingElement_tDCD1EAF9D54829E796F4F9726D63B205344C7698 
{
	int32_t ___elementType;
	uint32_t ___unicode;
	int32_t ___stringIndex;
	int32_t ___length;
};
struct TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E 
{
	float ___m_Value;
	int32_t ___m_Unit;
};
struct TimingEventInfo_t538B54329731926111A3B11FB8917B347FFCA604 
{
	HTTPRequest_tF57611B8437BCEC08E99FBF3463B96341D29927F* ___SourceRequest;
	int32_t ___Event;
	String_t* ___Name;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___Time;
};
struct TimingEventInfo_t538B54329731926111A3B11FB8917B347FFCA604_marshaled_pinvoke
{
	HTTPRequest_tF57611B8437BCEC08E99FBF3463B96341D29927F* ___SourceRequest;
	int32_t ___Event;
	char* ___Name;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___Time;
};
struct TimingEventInfo_t538B54329731926111A3B11FB8917B347FFCA604_marshaled_com
{
	HTTPRequest_tF57611B8437BCEC08E99FBF3463B96341D29927F* ___SourceRequest;
	int32_t ___Event;
	Il2CppChar* ___Name;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___Time;
};
struct Touch_t03E51455ED508492B3F278903A0114FA0E87B417 
{
	int32_t ___m_FingerId;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Position;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_RawPosition;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PositionDelta;
	float ___m_TimeDelta;
	int32_t ___m_TapCount;
	int32_t ___m_Phase;
	int32_t ___m_Type;
	float ___m_Pressure;
	float ___m_maximumPossiblePressure;
	float ___m_Radius;
	float ___m_RadiusVariance;
	float ___m_AltitudeAngle;
	float ___m_AzimuthAngle;
};
struct UTriangle_tCD210F61D627BAB81A1CFFEC7076C3FBB9A6D7CD 
{
	float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA ___va;
	float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA ___vb;
	float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA ___vc;
	UCircle_t68411F86930A7056CDBAB9E208076A3075D15218 ___c;
	float ___area;
	int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF ___indices;
};
struct VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76 
{
	int32_t ___U3CattributeU3Ek__BackingField;
	int32_t ___U3CformatU3Ek__BackingField;
	int32_t ___U3CdimensionU3Ek__BackingField;
	int32_t ___U3CstreamU3Ek__BackingField;
};
struct VisibleLight_t0A4DF5B22865A00F618A0352B805277FA0132805 
{
	int32_t ___m_LightType;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_FinalColor;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_ScreenRect;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_LocalToWorldMatrix;
	float ___m_Range;
	float ___m_SpotAngle;
	int32_t ___m_InstanceId;
	int32_t ___m_Flags;
};
struct VisibleReflectionProbe_t8AF1FAD09A36E33F5101B683DB8E99582815EF0B 
{
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___m_Bounds;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_LocalToWorldMatrix;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_HdrData;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Center;
	float ___m_BlendDistance;
	int32_t ___m_Importance;
	int32_t ___m_BoxProjection;
	int32_t ___m_InstanceId;
	int32_t ___m_TextureId;
};
struct VisualEffectPlayableSerializedEvent_t81FFD0AB85C7A0D22E898F03776FD3513BB4B4C1 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___editorColor;
	double ___time;
	int32_t ___timeSpace;
	ExposedProperty_t90982415ECDCB651D6A637FE3DA1D53BC76D602A* ___name;
	EventAttributes_t08E6304B102F41E4FF59ED5A938F2C819CAA6D1A ___eventAttributes;
};
struct VisualEffectPlayableSerializedEvent_t81FFD0AB85C7A0D22E898F03776FD3513BB4B4C1_marshaled_pinvoke
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___editorColor;
	double ___time;
	int32_t ___timeSpace;
	ExposedProperty_t90982415ECDCB651D6A637FE3DA1D53BC76D602A* ___name;
	EventAttributes_t08E6304B102F41E4FF59ED5A938F2C819CAA6D1A_marshaled_pinvoke ___eventAttributes;
};
struct VisualEffectPlayableSerializedEvent_t81FFD0AB85C7A0D22E898F03776FD3513BB4B4C1_marshaled_com
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___editorColor;
	double ___time;
	int32_t ___timeSpace;
	ExposedProperty_t90982415ECDCB651D6A637FE3DA1D53BC76D602A* ___name;
	EventAttributes_t08E6304B102F41E4FF59ED5A938F2C819CAA6D1A_marshaled_com ___eventAttributes;
};
struct X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D 
{
	int32_t ___status;
	String_t* ___info;
};
struct X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D_marshaled_pinvoke
{
	int32_t ___status;
	char* ___info;
};
struct X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D_marshaled_com
{
	int32_t ___status;
	Il2CppChar* ___info;
};
struct BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56 
{
	int32_t ___keyword;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___offset;
};
struct DirectListing_tD8AFF5F3E73B0DFBF7F91BD54DCCCB53127791C4 
{
	String_t* ___id;
	String_t* ___creatorAddress;
	String_t* ___assetContractAddress;
	String_t* ___tokenId;
	String_t* ___quantity;
	String_t* ___currencyContractAddress;
	Nullable_1_t91416B74D1845CE0E7426E33CBC75C126B777D39 ___currencyValuePerToken;
	String_t* ___pricePerToken;
	Nullable_1_tE3A40595000DDF3F2E0514B54C6C2C1FC18DB130 ___asset;
	Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 ___startTimeInSeconds;
	Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 ___endTimeInSeconds;
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___isReservedListing;
	Nullable_1_t4CEC474D5FE9DA8D9DA0F75751091FF7B52745B8 ___status;
};
struct DirectListing_tD8AFF5F3E73B0DFBF7F91BD54DCCCB53127791C4_marshaled_pinvoke
{
	char* ___id;
	char* ___creatorAddress;
	char* ___assetContractAddress;
	char* ___tokenId;
	char* ___quantity;
	char* ___currencyContractAddress;
	Nullable_1_t91416B74D1845CE0E7426E33CBC75C126B777D39 ___currencyValuePerToken;
	char* ___pricePerToken;
	Nullable_1_tE3A40595000DDF3F2E0514B54C6C2C1FC18DB130 ___asset;
	Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 ___startTimeInSeconds;
	Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 ___endTimeInSeconds;
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___isReservedListing;
	Nullable_1_t4CEC474D5FE9DA8D9DA0F75751091FF7B52745B8 ___status;
};
struct DirectListing_tD8AFF5F3E73B0DFBF7F91BD54DCCCB53127791C4_marshaled_com
{
	Il2CppChar* ___id;
	Il2CppChar* ___creatorAddress;
	Il2CppChar* ___assetContractAddress;
	Il2CppChar* ___tokenId;
	Il2CppChar* ___quantity;
	Il2CppChar* ___currencyContractAddress;
	Nullable_1_t91416B74D1845CE0E7426E33CBC75C126B777D39 ___currencyValuePerToken;
	Il2CppChar* ___pricePerToken;
	Nullable_1_tE3A40595000DDF3F2E0514B54C6C2C1FC18DB130 ___asset;
	Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 ___startTimeInSeconds;
	Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 ___endTimeInSeconds;
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___isReservedListing;
	Nullable_1_t4CEC474D5FE9DA8D9DA0F75751091FF7B52745B8 ___status;
};
struct JsonReaderState_t6F9FAEDB51A98D33397B9B838A7F7706052AE071 
{
	int64_t ____lineNumber;
	int64_t ____bytePositionInLine;
	bool ____inObject;
	bool ____isNotPrimitive;
	bool ____stringHasEscaping;
	bool ____trailingCommaBeforeComment;
	uint8_t ____tokenType;
	uint8_t ____previousTokenType;
	JsonReaderOptions_t947F34FBFA3AD2E8E137B660EC0FAFE4571D7E32 ____readerOptions;
	BitStack_t460BCC3E60CEEB19DD5A9535794E2702E50121B5 ____bitStack;
};
struct JsonReaderState_t6F9FAEDB51A98D33397B9B838A7F7706052AE071_marshaled_pinvoke
{
	int64_t ____lineNumber;
	int64_t ____bytePositionInLine;
	int32_t ____inObject;
	int32_t ____isNotPrimitive;
	int32_t ____stringHasEscaping;
	int32_t ____trailingCommaBeforeComment;
	uint8_t ____tokenType;
	uint8_t ____previousTokenType;
	JsonReaderOptions_t947F34FBFA3AD2E8E137B660EC0FAFE4571D7E32_marshaled_pinvoke ____readerOptions;
	BitStack_t460BCC3E60CEEB19DD5A9535794E2702E50121B5_marshaled_pinvoke ____bitStack;
};
struct JsonReaderState_t6F9FAEDB51A98D33397B9B838A7F7706052AE071_marshaled_com
{
	int64_t ____lineNumber;
	int64_t ____bytePositionInLine;
	int32_t ____inObject;
	int32_t ____isNotPrimitive;
	int32_t ____stringHasEscaping;
	int32_t ____trailingCommaBeforeComment;
	uint8_t ____tokenType;
	uint8_t ____previousTokenType;
	JsonReaderOptions_t947F34FBFA3AD2E8E137B660EC0FAFE4571D7E32_marshaled_com ____readerOptions;
	BitStack_t460BCC3E60CEEB19DD5A9535794E2702E50121B5_marshaled_com ____bitStack;
};
struct Offer_t2BFDE41BB17E5B1717032EBB03B8DA6D2ABD8644 
{
	String_t* ___id;
	String_t* ___offerorAddress;
	String_t* ___assetContractAddress;
	String_t* ___tokenId;
	String_t* ___quantity;
	String_t* ___currencyContractAddress;
	Nullable_1_t91416B74D1845CE0E7426E33CBC75C126B777D39 ___currencyValue;
	String_t* ___totalPrice;
	Nullable_1_tE3A40595000DDF3F2E0514B54C6C2C1FC18DB130 ___asset;
	Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 ___endTimeInSeconds;
	Nullable_1_t4CEC474D5FE9DA8D9DA0F75751091FF7B52745B8 ___status;
};
struct Offer_t2BFDE41BB17E5B1717032EBB03B8DA6D2ABD8644_marshaled_pinvoke
{
	char* ___id;
	char* ___offerorAddress;
	char* ___assetContractAddress;
	char* ___tokenId;
	char* ___quantity;
	char* ___currencyContractAddress;
	Nullable_1_t91416B74D1845CE0E7426E33CBC75C126B777D39 ___currencyValue;
	char* ___totalPrice;
	Nullable_1_tE3A40595000DDF3F2E0514B54C6C2C1FC18DB130 ___asset;
	Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 ___endTimeInSeconds;
	Nullable_1_t4CEC474D5FE9DA8D9DA0F75751091FF7B52745B8 ___status;
};
struct Offer_t2BFDE41BB17E5B1717032EBB03B8DA6D2ABD8644_marshaled_com
{
	Il2CppChar* ___id;
	Il2CppChar* ___offerorAddress;
	Il2CppChar* ___assetContractAddress;
	Il2CppChar* ___tokenId;
	Il2CppChar* ___quantity;
	Il2CppChar* ___currencyContractAddress;
	Nullable_1_t91416B74D1845CE0E7426E33CBC75C126B777D39 ___currencyValue;
	Il2CppChar* ___totalPrice;
	Nullable_1_tE3A40595000DDF3F2E0514B54C6C2C1FC18DB130 ___asset;
	Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 ___endTimeInSeconds;
	Nullable_1_t4CEC474D5FE9DA8D9DA0F75751091FF7B52745B8 ___status;
};
struct RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct ReadStackFrame_t8DABE60E6F912C1C19F02BE56C9BC7CA062EE20A 
{
	JsonPropertyInfo_t8870BF608DD0641AC29D55C6747C5C5C7340876E* ___JsonPropertyInfo;
	uint8_t ___PropertyState;
	bool ___UseExtensionProperty;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___JsonPropertyName;
	String_t* ___JsonPropertyNameAsString;
	RuntimeObject* ___DictionaryKey;
	int32_t ___OriginalDepth;
	uint8_t ___OriginalTokenType;
	RuntimeObject* ___ReturnValue;
	JsonTypeInfo_tA6F51E32955C59782B075F76F6918E5B97598C36* ___JsonTypeInfo;
	uint8_t ___ObjectState;
	bool ___ValidateEndTokenOnArray;
	int32_t ___PropertyIndex;
	List_1_t06891929F0A7F28600C12114880027B889E110F3* ___PropertyRefCache;
	int32_t ___CtorArgumentStateIndex;
	ArgumentState_t80D4E71A31A6E55D1C4888B38C0E51798DB26F98* ___CtorArgumentState;
	Nullable_1_t84A7D78AC69EB909256B961C8DFE4DF7670F9CB2 ___NumberHandling;
};
struct ReadStackFrame_t8DABE60E6F912C1C19F02BE56C9BC7CA062EE20A_marshaled_pinvoke
{
	JsonPropertyInfo_t8870BF608DD0641AC29D55C6747C5C5C7340876E* ___JsonPropertyInfo;
	uint8_t ___PropertyState;
	int32_t ___UseExtensionProperty;
	Il2CppSafeArray* ___JsonPropertyName;
	char* ___JsonPropertyNameAsString;
	Il2CppIUnknown* ___DictionaryKey;
	int32_t ___OriginalDepth;
	uint8_t ___OriginalTokenType;
	Il2CppIUnknown* ___ReturnValue;
	JsonTypeInfo_tA6F51E32955C59782B075F76F6918E5B97598C36* ___JsonTypeInfo;
	uint8_t ___ObjectState;
	int32_t ___ValidateEndTokenOnArray;
	int32_t ___PropertyIndex;
	List_1_t06891929F0A7F28600C12114880027B889E110F3* ___PropertyRefCache;
	int32_t ___CtorArgumentStateIndex;
	ArgumentState_t80D4E71A31A6E55D1C4888B38C0E51798DB26F98* ___CtorArgumentState;
	Nullable_1_t84A7D78AC69EB909256B961C8DFE4DF7670F9CB2 ___NumberHandling;
};
struct ReadStackFrame_t8DABE60E6F912C1C19F02BE56C9BC7CA062EE20A_marshaled_com
{
	JsonPropertyInfo_t8870BF608DD0641AC29D55C6747C5C5C7340876E* ___JsonPropertyInfo;
	uint8_t ___PropertyState;
	int32_t ___UseExtensionProperty;
	Il2CppSafeArray* ___JsonPropertyName;
	Il2CppChar* ___JsonPropertyNameAsString;
	Il2CppIUnknown* ___DictionaryKey;
	int32_t ___OriginalDepth;
	uint8_t ___OriginalTokenType;
	Il2CppIUnknown* ___ReturnValue;
	JsonTypeInfo_tA6F51E32955C59782B075F76F6918E5B97598C36* ___JsonTypeInfo;
	uint8_t ___ObjectState;
	int32_t ___ValidateEndTokenOnArray;
	int32_t ___PropertyIndex;
	List_1_t06891929F0A7F28600C12114880027B889E110F3* ___PropertyRefCache;
	int32_t ___CtorArgumentStateIndex;
	ArgumentState_t80D4E71A31A6E55D1C4888B38C0E51798DB26F98* ___CtorArgumentState;
	Nullable_1_t84A7D78AC69EB909256B961C8DFE4DF7670F9CB2 ___NumberHandling;
};
struct RenderStateBlock_tFC570EF2C8F3A817FECD578E385D18CEEEA06733 
{
	BlendState_tC9B817349E49EF26CBCDC8FCE02789A661DC2630 ___m_BlendState;
	RasterState_tA30E8336EA5D1E2152A6C7252F15384985B98A26 ___m_RasterState;
	DepthState_t798415D2C1D9202E555FEE5D4C5FDF6B3A077255 ___m_DepthState;
	StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9 ___m_StencilState;
	int32_t ___m_StencilReference;
	int32_t ___m_Mask;
};
struct Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7 
{
	Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC ___m_Angle;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Axis;
	bool ___m_IsNone;
};
struct Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7_marshaled_pinvoke
{
	Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC ___m_Angle;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Axis;
	int32_t ___m_IsNone;
};
struct Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7_marshaled_com
{
	Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC ___m_Angle;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Axis;
	int32_t ___m_IsNone;
};
struct StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2 
{
	StyleSheet_t6FAF43FCDB45BC6BED0522A222FD4C1A9BB10428* ___sheet;
	StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D ___handle;
};
struct StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2_marshaled_pinvoke
{
	StyleSheet_t6FAF43FCDB45BC6BED0522A222FD4C1A9BB10428* ___sheet;
	StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D ___handle;
};
struct StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2_marshaled_com
{
	StyleSheet_t6FAF43FCDB45BC6BED0522A222FD4C1A9BB10428* ___sheet;
	StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D ___handle;
};
struct TextElementInfo_tDD7A12E319505510E0B350E342BD55F32AB5F976 
{
	Il2CppChar ___character;
	int32_t ___index;
	uint8_t ___elementType;
	int32_t ___stringLength;
	TextElement_tCEF567A8810788262275B39DC39CBA6EBE7472DA* ___textElement;
	Glyph_t700CF8EBE04ED4AEAB520885AAA1B309E02A103F* ___alternativeGlyph;
	FontAsset_t61A6446D934E582651044E33D250EA8D306AB958* ___fontAsset;
	SpriteAsset_t1D3CF1D9DC350A4690CB09DE228A8B59F2F02313* ___spriteAsset;
	int32_t ___spriteIndex;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material;
	int32_t ___materialReferenceIndex;
	bool ___isUsingAlternateTypeface;
	float ___pointSize;
	int32_t ___lineNumber;
	int32_t ___pageNumber;
	int32_t ___vertexIndex;
	TextVertex_tF030A16DC67EAF3F6C9C9C0564D4B88758B173A9 ___vertexTopLeft;
	TextVertex_tF030A16DC67EAF3F6C9C9C0564D4B88758B173A9 ___vertexBottomLeft;
	TextVertex_tF030A16DC67EAF3F6C9C9C0564D4B88758B173A9 ___vertexTopRight;
	TextVertex_tF030A16DC67EAF3F6C9C9C0564D4B88758B173A9 ___vertexBottomRight;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___topLeft;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___bottomLeft;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___topRight;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___bottomRight;
	float ___origin;
	float ___ascender;
	float ___baseLine;
	float ___descender;
	float ___adjustedAscender;
	float ___adjustedDescender;
	float ___adjustedHorizontalAdvance;
	float ___xAdvance;
	float ___aspectRatio;
	float ___scale;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor;
	int32_t ___underlineVertexIndex;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor;
	int32_t ___strikethroughVertexIndex;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor;
	HighlightState_tFF5FE9065990F04A37FEC545A0024047F0ABD740 ___highlightState;
	int32_t ___style;
	bool ___isVisible;
};
struct TextElementInfo_tDD7A12E319505510E0B350E342BD55F32AB5F976_marshaled_pinvoke
{
	uint8_t ___character;
	int32_t ___index;
	uint8_t ___elementType;
	int32_t ___stringLength;
	TextElement_tCEF567A8810788262275B39DC39CBA6EBE7472DA* ___textElement;
	Glyph_t700CF8EBE04ED4AEAB520885AAA1B309E02A103F_marshaled_pinvoke ___alternativeGlyph;
	FontAsset_t61A6446D934E582651044E33D250EA8D306AB958* ___fontAsset;
	SpriteAsset_t1D3CF1D9DC350A4690CB09DE228A8B59F2F02313* ___spriteAsset;
	int32_t ___spriteIndex;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material;
	int32_t ___materialReferenceIndex;
	int32_t ___isUsingAlternateTypeface;
	float ___pointSize;
	int32_t ___lineNumber;
	int32_t ___pageNumber;
	int32_t ___vertexIndex;
	TextVertex_tF030A16DC67EAF3F6C9C9C0564D4B88758B173A9 ___vertexTopLeft;
	TextVertex_tF030A16DC67EAF3F6C9C9C0564D4B88758B173A9 ___vertexBottomLeft;
	TextVertex_tF030A16DC67EAF3F6C9C9C0564D4B88758B173A9 ___vertexTopRight;
	TextVertex_tF030A16DC67EAF3F6C9C9C0564D4B88758B173A9 ___vertexBottomRight;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___topLeft;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___bottomLeft;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___topRight;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___bottomRight;
	float ___origin;
	float ___ascender;
	float ___baseLine;
	float ___descender;
	float ___adjustedAscender;
	float ___adjustedDescender;
	float ___adjustedHorizontalAdvance;
	float ___xAdvance;
	float ___aspectRatio;
	float ___scale;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor;
	int32_t ___underlineVertexIndex;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor;
	int32_t ___strikethroughVertexIndex;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor;
	HighlightState_tFF5FE9065990F04A37FEC545A0024047F0ABD740 ___highlightState;
	int32_t ___style;
	int32_t ___isVisible;
};
struct TextElementInfo_tDD7A12E319505510E0B350E342BD55F32AB5F976_marshaled_com
{
	uint8_t ___character;
	int32_t ___index;
	uint8_t ___elementType;
	int32_t ___stringLength;
	TextElement_tCEF567A8810788262275B39DC39CBA6EBE7472DA* ___textElement;
	Glyph_t700CF8EBE04ED4AEAB520885AAA1B309E02A103F_marshaled_com* ___alternativeGlyph;
	FontAsset_t61A6446D934E582651044E33D250EA8D306AB958* ___fontAsset;
	SpriteAsset_t1D3CF1D9DC350A4690CB09DE228A8B59F2F02313* ___spriteAsset;
	int32_t ___spriteIndex;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material;
	int32_t ___materialReferenceIndex;
	int32_t ___isUsingAlternateTypeface;
	float ___pointSize;
	int32_t ___lineNumber;
	int32_t ___pageNumber;
	int32_t ___vertexIndex;
	TextVertex_tF030A16DC67EAF3F6C9C9C0564D4B88758B173A9 ___vertexTopLeft;
	TextVertex_tF030A16DC67EAF3F6C9C9C0564D4B88758B173A9 ___vertexBottomLeft;
	TextVertex_tF030A16DC67EAF3F6C9C9C0564D4B88758B173A9 ___vertexTopRight;
	TextVertex_tF030A16DC67EAF3F6C9C9C0564D4B88758B173A9 ___vertexBottomRight;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___topLeft;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___bottomLeft;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___topRight;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___bottomRight;
	float ___origin;
	float ___ascender;
	float ___baseLine;
	float ___descender;
	float ___adjustedAscender;
	float ___adjustedDescender;
	float ___adjustedHorizontalAdvance;
	float ___xAdvance;
	float ___aspectRatio;
	float ___scale;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor;
	int32_t ___underlineVertexIndex;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor;
	int32_t ___strikethroughVertexIndex;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor;
	HighlightState_tFF5FE9065990F04A37FEC545A0024047F0ABD740 ___highlightState;
	int32_t ___style;
	int32_t ___isVisible;
};
struct TextureHandle_t87D7D063E5E22E38632961AB2B6F89978942BE09 
{
	ResourceHandle_t0B9B0555328A08152F1EDA2BE4024446D670531A ___handle;
};
struct TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502 
{
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___m_X;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___m_Y;
	float ___m_Z;
};
struct Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E 
{
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___m_X;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___m_Y;
	float ___m_Z;
	bool ___m_isNone;
};
struct Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E_marshaled_pinvoke
{
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___m_X;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___m_Y;
	float ___m_Z;
	int32_t ___m_isNone;
};
struct Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E_marshaled_com
{
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___m_X;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___m_Y;
	float ___m_Z;
	int32_t ___m_isNone;
};
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A 
{
	int32_t ___previous_WordBreak;
	int32_t ___total_CharacterCount;
	int32_t ___visible_CharacterCount;
	int32_t ___visible_SpriteCount;
	int32_t ___visible_LinkCount;
	int32_t ___firstCharacterIndex;
	int32_t ___firstVisibleCharacterIndex;
	int32_t ___lastCharacterIndex;
	int32_t ___lastVisibleCharIndex;
	int32_t ___lineNumber;
	float ___maxCapHeight;
	float ___maxAscender;
	float ___maxDescender;
	float ___startOfLineAscender;
	float ___maxLineAscender;
	float ___maxLineDescender;
	float ___pageAscender;
	int32_t ___horizontalAlignment;
	float ___marginLeft;
	float ___marginRight;
	float ___xAdvance;
	float ___preferredWidth;
	float ___preferredHeight;
	float ___previousLineScale;
	int32_t ___wordCount;
	int32_t ___fontStyle;
	int32_t ___italicAngle;
	float ___fontScaleMultiplier;
	float ___currentFontSize;
	float ___baselineOffset;
	float ___lineOffset;
	bool ___isDrivenLineSpacing;
	float ___glyphHorizontalAdvanceAdjustment;
	float ___cSpace;
	float ___mSpace;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack;
	int32_t ___spriteAnimationID;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial;
	int32_t ___currentMaterialIndex;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents;
	bool ___tagNoParsing;
	bool ___isNonBreakingSpace;
};
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_pinvoke
{
	int32_t ___previous_WordBreak;
	int32_t ___total_CharacterCount;
	int32_t ___visible_CharacterCount;
	int32_t ___visible_SpriteCount;
	int32_t ___visible_LinkCount;
	int32_t ___firstCharacterIndex;
	int32_t ___firstVisibleCharacterIndex;
	int32_t ___lastCharacterIndex;
	int32_t ___lastVisibleCharIndex;
	int32_t ___lineNumber;
	float ___maxCapHeight;
	float ___maxAscender;
	float ___maxDescender;
	float ___startOfLineAscender;
	float ___maxLineAscender;
	float ___maxLineDescender;
	float ___pageAscender;
	int32_t ___horizontalAlignment;
	float ___marginLeft;
	float ___marginRight;
	float ___xAdvance;
	float ___preferredWidth;
	float ___preferredHeight;
	float ___previousLineScale;
	int32_t ___wordCount;
	int32_t ___fontStyle;
	int32_t ___italicAngle;
	float ___fontScaleMultiplier;
	float ___currentFontSize;
	float ___baselineOffset;
	float ___lineOffset;
	int32_t ___isDrivenLineSpacing;
	float ___glyphHorizontalAdvanceAdjustment;
	float ___cSpace;
	float ___mSpace;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack;
	int32_t ___spriteAnimationID;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial;
	int32_t ___currentMaterialIndex;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents;
	int32_t ___tagNoParsing;
	int32_t ___isNonBreakingSpace;
};
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_com
{
	int32_t ___previous_WordBreak;
	int32_t ___total_CharacterCount;
	int32_t ___visible_CharacterCount;
	int32_t ___visible_SpriteCount;
	int32_t ___visible_LinkCount;
	int32_t ___firstCharacterIndex;
	int32_t ___firstVisibleCharacterIndex;
	int32_t ___lastCharacterIndex;
	int32_t ___lastVisibleCharIndex;
	int32_t ___lineNumber;
	float ___maxCapHeight;
	float ___maxAscender;
	float ___maxDescender;
	float ___startOfLineAscender;
	float ___maxLineAscender;
	float ___maxLineDescender;
	float ___pageAscender;
	int32_t ___horizontalAlignment;
	float ___marginLeft;
	float ___marginRight;
	float ___xAdvance;
	float ___preferredWidth;
	float ___preferredHeight;
	float ___previousLineScale;
	int32_t ___wordCount;
	int32_t ___fontStyle;
	int32_t ___italicAngle;
	float ___fontScaleMultiplier;
	float ___currentFontSize;
	float ___baselineOffset;
	float ___lineOffset;
	int32_t ___isDrivenLineSpacing;
	float ___glyphHorizontalAdvanceAdjustment;
	float ___cSpace;
	float ___mSpace;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack;
	int32_t ___spriteAnimationID;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial;
	int32_t ___currentMaterialIndex;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents;
	int32_t ___tagNoParsing;
	int32_t ___isNonBreakingSpace;
};
struct WordWrapState_tD71131CF008362DB9562FB9794AE9D9225D8F123 
{
	int32_t ___previousWordBreak;
	int32_t ___totalCharacterCount;
	int32_t ___visibleCharacterCount;
	int32_t ___visibleSpaceCount;
	int32_t ___visibleSpriteCount;
	int32_t ___visibleLinkCount;
	int32_t ___firstCharacterIndex;
	int32_t ___firstVisibleCharacterIndex;
	int32_t ___lastCharacterIndex;
	int32_t ___lastVisibleCharIndex;
	int32_t ___lineNumber;
	float ___maxCapHeight;
	float ___maxAscender;
	float ___maxDescender;
	float ___maxLineAscender;
	float ___maxLineDescender;
	float ___startOfLineAscender;
	float ___xAdvance;
	float ___preferredWidth;
	float ___preferredHeight;
	float ___previousLineScale;
	float ___pageAscender;
	int32_t ___wordCount;
	int32_t ___fontStyle;
	float ___fontScale;
	float ___fontScaleMultiplier;
	int32_t ___italicAngle;
	float ___currentFontSize;
	float ___baselineOffset;
	float ___lineOffset;
	TextInfo_t27E58E62A7552C66D38C175AF9D22622365F5D09* ___textInfo;
	LineInfo_t2BBD461B330C46ACA45596A8E72FEA4172F88CF5 ___lineInfo;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor;
	HighlightState_tFF5FE9065990F04A37FEC545A0024047F0ABD740 ___highlightState;
	FontStyleStack_t63C77495F068E6DF762D6AF063A817E3709659A7 ___basicStyleStack;
	TextProcessingStack_1_t27834AAB14D26DC6519558C4C2574BA9C190D8E8 ___italicAngleStack;
	TextProcessingStack_1_t7868E818AC1E1B5FED21B76D5C309C9A04380B63 ___colorStack;
	TextProcessingStack_1_t7868E818AC1E1B5FED21B76D5C309C9A04380B63 ___underlineColorStack;
	TextProcessingStack_1_t7868E818AC1E1B5FED21B76D5C309C9A04380B63 ___strikethroughColorStack;
	TextProcessingStack_1_t7868E818AC1E1B5FED21B76D5C309C9A04380B63 ___highlightColorStack;
	TextProcessingStack_1_tF3616757510D9631241E95596F10A4139420DA16 ___highlightStateStack;
	TextProcessingStack_1_t0F39F088E8F8F6E18C3C463B2998ADC5B7A0513E ___colorGradientStack;
	TextProcessingStack_1_t9FC06E35259ADD291ED640FE7554D8C03EA5F555 ___sizeStack;
	TextProcessingStack_1_t9FC06E35259ADD291ED640FE7554D8C03EA5F555 ___indentStack;
	TextProcessingStack_1_t698B87CDD968C2046F57134BB3AB807EBFFD7790 ___fontWeightStack;
	TextProcessingStack_1_t27834AAB14D26DC6519558C4C2574BA9C190D8E8 ___styleStack;
	TextProcessingStack_1_t9FC06E35259ADD291ED640FE7554D8C03EA5F555 ___baselineStack;
	TextProcessingStack_1_t27834AAB14D26DC6519558C4C2574BA9C190D8E8 ___actionStack;
	TextProcessingStack_1_t0C74606C1B6C7817CA95F0DCA46B219CF6FB35CA ___materialReferenceStack;
	TextProcessingStack_1_tE63296B08A4C34E38D7EF3FFFA3470076B9E3A0F ___lineJustificationStack;
	int32_t ___lastBaseGlyphIndex;
	int32_t ___spriteAnimationId;
	FontAsset_t61A6446D934E582651044E33D250EA8D306AB958* ___currentFontAsset;
	SpriteAsset_t1D3CF1D9DC350A4690CB09DE228A8B59F2F02313* ___currentSpriteAsset;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial;
	int32_t ___currentMaterialIndex;
	Extents_t369FB2B84521A0229C2FA3D4C8592B14E07CEFE6 ___meshExtents;
	bool ___tagNoParsing;
	bool ___isNonBreakingSpace;
	bool ___isDrivenLineSpacing;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___fxScale;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___fxRotation;
};
struct WordWrapState_tD71131CF008362DB9562FB9794AE9D9225D8F123_marshaled_pinvoke
{
	int32_t ___previousWordBreak;
	int32_t ___totalCharacterCount;
	int32_t ___visibleCharacterCount;
	int32_t ___visibleSpaceCount;
	int32_t ___visibleSpriteCount;
	int32_t ___visibleLinkCount;
	int32_t ___firstCharacterIndex;
	int32_t ___firstVisibleCharacterIndex;
	int32_t ___lastCharacterIndex;
	int32_t ___lastVisibleCharIndex;
	int32_t ___lineNumber;
	float ___maxCapHeight;
	float ___maxAscender;
	float ___maxDescender;
	float ___maxLineAscender;
	float ___maxLineDescender;
	float ___startOfLineAscender;
	float ___xAdvance;
	float ___preferredWidth;
	float ___preferredHeight;
	float ___previousLineScale;
	float ___pageAscender;
	int32_t ___wordCount;
	int32_t ___fontStyle;
	float ___fontScale;
	float ___fontScaleMultiplier;
	int32_t ___italicAngle;
	float ___currentFontSize;
	float ___baselineOffset;
	float ___lineOffset;
	TextInfo_t27E58E62A7552C66D38C175AF9D22622365F5D09* ___textInfo;
	LineInfo_t2BBD461B330C46ACA45596A8E72FEA4172F88CF5 ___lineInfo;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor;
	HighlightState_tFF5FE9065990F04A37FEC545A0024047F0ABD740 ___highlightState;
	FontStyleStack_t63C77495F068E6DF762D6AF063A817E3709659A7 ___basicStyleStack;
	TextProcessingStack_1_t27834AAB14D26DC6519558C4C2574BA9C190D8E8 ___italicAngleStack;
	TextProcessingStack_1_t7868E818AC1E1B5FED21B76D5C309C9A04380B63 ___colorStack;
	TextProcessingStack_1_t7868E818AC1E1B5FED21B76D5C309C9A04380B63 ___underlineColorStack;
	TextProcessingStack_1_t7868E818AC1E1B5FED21B76D5C309C9A04380B63 ___strikethroughColorStack;
	TextProcessingStack_1_t7868E818AC1E1B5FED21B76D5C309C9A04380B63 ___highlightColorStack;
	TextProcessingStack_1_tF3616757510D9631241E95596F10A4139420DA16 ___highlightStateStack;
	TextProcessingStack_1_t0F39F088E8F8F6E18C3C463B2998ADC5B7A0513E ___colorGradientStack;
	TextProcessingStack_1_t9FC06E35259ADD291ED640FE7554D8C03EA5F555 ___sizeStack;
	TextProcessingStack_1_t9FC06E35259ADD291ED640FE7554D8C03EA5F555 ___indentStack;
	TextProcessingStack_1_t698B87CDD968C2046F57134BB3AB807EBFFD7790 ___fontWeightStack;
	TextProcessingStack_1_t27834AAB14D26DC6519558C4C2574BA9C190D8E8 ___styleStack;
	TextProcessingStack_1_t9FC06E35259ADD291ED640FE7554D8C03EA5F555 ___baselineStack;
	TextProcessingStack_1_t27834AAB14D26DC6519558C4C2574BA9C190D8E8 ___actionStack;
	TextProcessingStack_1_t0C74606C1B6C7817CA95F0DCA46B219CF6FB35CA ___materialReferenceStack;
	TextProcessingStack_1_tE63296B08A4C34E38D7EF3FFFA3470076B9E3A0F ___lineJustificationStack;
	int32_t ___lastBaseGlyphIndex;
	int32_t ___spriteAnimationId;
	FontAsset_t61A6446D934E582651044E33D250EA8D306AB958* ___currentFontAsset;
	SpriteAsset_t1D3CF1D9DC350A4690CB09DE228A8B59F2F02313* ___currentSpriteAsset;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial;
	int32_t ___currentMaterialIndex;
	Extents_t369FB2B84521A0229C2FA3D4C8592B14E07CEFE6 ___meshExtents;
	int32_t ___tagNoParsing;
	int32_t ___isNonBreakingSpace;
	int32_t ___isDrivenLineSpacing;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___fxScale;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___fxRotation;
};
struct WordWrapState_tD71131CF008362DB9562FB9794AE9D9225D8F123_marshaled_com
{
	int32_t ___previousWordBreak;
	int32_t ___totalCharacterCount;
	int32_t ___visibleCharacterCount;
	int32_t ___visibleSpaceCount;
	int32_t ___visibleSpriteCount;
	int32_t ___visibleLinkCount;
	int32_t ___firstCharacterIndex;
	int32_t ___firstVisibleCharacterIndex;
	int32_t ___lastCharacterIndex;
	int32_t ___lastVisibleCharIndex;
	int32_t ___lineNumber;
	float ___maxCapHeight;
	float ___maxAscender;
	float ___maxDescender;
	float ___maxLineAscender;
	float ___maxLineDescender;
	float ___startOfLineAscender;
	float ___xAdvance;
	float ___preferredWidth;
	float ___preferredHeight;
	float ___previousLineScale;
	float ___pageAscender;
	int32_t ___wordCount;
	int32_t ___fontStyle;
	float ___fontScale;
	float ___fontScaleMultiplier;
	int32_t ___italicAngle;
	float ___currentFontSize;
	float ___baselineOffset;
	float ___lineOffset;
	TextInfo_t27E58E62A7552C66D38C175AF9D22622365F5D09* ___textInfo;
	LineInfo_t2BBD461B330C46ACA45596A8E72FEA4172F88CF5 ___lineInfo;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor;
	HighlightState_tFF5FE9065990F04A37FEC545A0024047F0ABD740 ___highlightState;
	FontStyleStack_t63C77495F068E6DF762D6AF063A817E3709659A7 ___basicStyleStack;
	TextProcessingStack_1_t27834AAB14D26DC6519558C4C2574BA9C190D8E8 ___italicAngleStack;
	TextProcessingStack_1_t7868E818AC1E1B5FED21B76D5C309C9A04380B63 ___colorStack;
	TextProcessingStack_1_t7868E818AC1E1B5FED21B76D5C309C9A04380B63 ___underlineColorStack;
	TextProcessingStack_1_t7868E818AC1E1B5FED21B76D5C309C9A04380B63 ___strikethroughColorStack;
	TextProcessingStack_1_t7868E818AC1E1B5FED21B76D5C309C9A04380B63 ___highlightColorStack;
	TextProcessingStack_1_tF3616757510D9631241E95596F10A4139420DA16 ___highlightStateStack;
	TextProcessingStack_1_t0F39F088E8F8F6E18C3C463B2998ADC5B7A0513E ___colorGradientStack;
	TextProcessingStack_1_t9FC06E35259ADD291ED640FE7554D8C03EA5F555 ___sizeStack;
	TextProcessingStack_1_t9FC06E35259ADD291ED640FE7554D8C03EA5F555 ___indentStack;
	TextProcessingStack_1_t698B87CDD968C2046F57134BB3AB807EBFFD7790 ___fontWeightStack;
	TextProcessingStack_1_t27834AAB14D26DC6519558C4C2574BA9C190D8E8 ___styleStack;
	TextProcessingStack_1_t9FC06E35259ADD291ED640FE7554D8C03EA5F555 ___baselineStack;
	TextProcessingStack_1_t27834AAB14D26DC6519558C4C2574BA9C190D8E8 ___actionStack;
	TextProcessingStack_1_t0C74606C1B6C7817CA95F0DCA46B219CF6FB35CA ___materialReferenceStack;
	TextProcessingStack_1_tE63296B08A4C34E38D7EF3FFFA3470076B9E3A0F ___lineJustificationStack;
	int32_t ___lastBaseGlyphIndex;
	int32_t ___spriteAnimationId;
	FontAsset_t61A6446D934E582651044E33D250EA8D306AB958* ___currentFontAsset;
	SpriteAsset_t1D3CF1D9DC350A4690CB09DE228A8B59F2F02313* ___currentSpriteAsset;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial;
	int32_t ___currentMaterialIndex;
	Extents_t369FB2B84521A0229C2FA3D4C8592B14E07CEFE6 ___meshExtents;
	int32_t ___tagNoParsing;
	int32_t ___isNonBreakingSpace;
	int32_t ___isDrivenLineSpacing;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___fxScale;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___fxRotation;
};
struct WriteStackFrame_t0CC4719C6FFC6CE075F03E260758587265CB9902 
{
	RuntimeObject* ___CollectionEnumerator;
	RuntimeObject* ___AsyncDisposable;
	bool ___AsyncEnumeratorIsPendingCompletion;
	JsonPropertyInfo_t8870BF608DD0641AC29D55C6747C5C5C7340876E* ___DeclaredJsonPropertyInfo;
	bool ___IsWritingExtensionDataProperty;
	JsonTypeInfo_tA6F51E32955C59782B075F76F6918E5B97598C36* ___JsonTypeInfo;
	int32_t ___OriginalDepth;
	bool ___ProcessedStartToken;
	bool ___ProcessedEndToken;
	uint8_t ___PropertyState;
	int32_t ___EnumeratorIndex;
	String_t* ___JsonPropertyNameAsString;
	int32_t ___MetadataPropertyName;
	JsonPropertyInfo_t8870BF608DD0641AC29D55C6747C5C5C7340876E* ___PolymorphicJsonPropertyInfo;
	Nullable_1_t84A7D78AC69EB909256B961C8DFE4DF7670F9CB2 ___NumberHandling;
};
struct WriteStackFrame_t0CC4719C6FFC6CE075F03E260758587265CB9902_marshaled_pinvoke
{
	RuntimeObject* ___CollectionEnumerator;
	RuntimeObject* ___AsyncDisposable;
	int32_t ___AsyncEnumeratorIsPendingCompletion;
	JsonPropertyInfo_t8870BF608DD0641AC29D55C6747C5C5C7340876E* ___DeclaredJsonPropertyInfo;
	int32_t ___IsWritingExtensionDataProperty;
	JsonTypeInfo_tA6F51E32955C59782B075F76F6918E5B97598C36* ___JsonTypeInfo;
	int32_t ___OriginalDepth;
	int32_t ___ProcessedStartToken;
	int32_t ___ProcessedEndToken;
	uint8_t ___PropertyState;
	int32_t ___EnumeratorIndex;
	char* ___JsonPropertyNameAsString;
	int32_t ___MetadataPropertyName;
	JsonPropertyInfo_t8870BF608DD0641AC29D55C6747C5C5C7340876E* ___PolymorphicJsonPropertyInfo;
	Nullable_1_t84A7D78AC69EB909256B961C8DFE4DF7670F9CB2 ___NumberHandling;
};
struct WriteStackFrame_t0CC4719C6FFC6CE075F03E260758587265CB9902_marshaled_com
{
	RuntimeObject* ___CollectionEnumerator;
	RuntimeObject* ___AsyncDisposable;
	int32_t ___AsyncEnumeratorIsPendingCompletion;
	JsonPropertyInfo_t8870BF608DD0641AC29D55C6747C5C5C7340876E* ___DeclaredJsonPropertyInfo;
	int32_t ___IsWritingExtensionDataProperty;
	JsonTypeInfo_tA6F51E32955C59782B075F76F6918E5B97598C36* ___JsonTypeInfo;
	int32_t ___OriginalDepth;
	int32_t ___ProcessedStartToken;
	int32_t ___ProcessedEndToken;
	uint8_t ___PropertyState;
	int32_t ___EnumeratorIndex;
	Il2CppChar* ___JsonPropertyNameAsString;
	int32_t ___MetadataPropertyName;
	JsonPropertyInfo_t8870BF608DD0641AC29D55C6747C5C5C7340876E* ___PolymorphicJsonPropertyInfo;
	Nullable_1_t84A7D78AC69EB909256B961C8DFE4DF7670F9CB2 ___NumberHandling;
};
struct Nullable_1_tA4A30D1008B44E6BEFB1666997B110F382EE3AA5 
{
	bool ___hasValue;
	RenderStateBlock_tFC570EF2C8F3A817FECD578E385D18CEEEA06733 ___value;
};
struct StyleValue_t56307594EC04E04EFBCC3220595B4AAD66FF93C5 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___id;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___id_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___keyword_OffsetPadding[4];
			int32_t ___keyword;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___keyword_OffsetPadding_forAlignmentOnly[4];
			int32_t ___keyword_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___number_OffsetPadding[8];
			float ___number;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___number_OffsetPadding_forAlignmentOnly[8];
			float ___number_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___length_OffsetPadding[8];
			Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___length;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___length_OffsetPadding_forAlignmentOnly[8];
			Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___length_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___color_OffsetPadding[8];
			Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___color_OffsetPadding_forAlignmentOnly[8];
			Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___resource_OffsetPadding[8];
			GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC ___resource;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___resource_OffsetPadding_forAlignmentOnly[8];
			GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC ___resource_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___position_OffsetPadding[8];
			BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56 ___position;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___position_OffsetPadding_forAlignmentOnly[8];
			BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56 ___position_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___repeat_OffsetPadding[8];
			BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F ___repeat;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___repeat_OffsetPadding_forAlignmentOnly[8];
			BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F ___repeat_forAlignmentOnly;
		};
	};
};
struct RendererListDesc_t5C51B75B4D539F99345A077545015B8FB99FE78E 
{
	int32_t ___sortingCriteria;
	int32_t ___rendererConfiguration;
	RenderQueueRange_t7518252AA6426B1EA45D3D9B394F304EEF784D71 ___renderQueueRange;
	Nullable_1_tA4A30D1008B44E6BEFB1666997B110F382EE3AA5 ___stateBlock;
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___overrideShader;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___overrideMaterial;
	bool ___excludeObjectMotionVectors;
	int32_t ___layerMask;
	uint32_t ___renderingLayerMask;
	int32_t ___overrideMaterialPassIndex;
	int32_t ___overrideShaderPassIndex;
	CullingResults_tD6B7EF20B68D47DFF3A99EB2EA73F47F1D460267 ___U3CcullingResultU3Ek__BackingField;
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___U3CcameraU3Ek__BackingField;
	ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0 ___U3CpassNameU3Ek__BackingField;
	ShaderTagIdU5BU5D_tE1BA124E13B8096153E25C5AF9C1D15D71466143* ___U3CpassNamesU3Ek__BackingField;
};
struct RendererListDesc_t5C51B75B4D539F99345A077545015B8FB99FE78E_marshaled_pinvoke
{
	int32_t ___sortingCriteria;
	int32_t ___rendererConfiguration;
	RenderQueueRange_t7518252AA6426B1EA45D3D9B394F304EEF784D71 ___renderQueueRange;
	Nullable_1_tA4A30D1008B44E6BEFB1666997B110F382EE3AA5 ___stateBlock;
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___overrideShader;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___overrideMaterial;
	int32_t ___excludeObjectMotionVectors;
	int32_t ___layerMask;
	uint32_t ___renderingLayerMask;
	int32_t ___overrideMaterialPassIndex;
	int32_t ___overrideShaderPassIndex;
	CullingResults_tD6B7EF20B68D47DFF3A99EB2EA73F47F1D460267 ___U3CcullingResultU3Ek__BackingField;
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___U3CcameraU3Ek__BackingField;
	ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0 ___U3CpassNameU3Ek__BackingField;
	ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0* ___U3CpassNamesU3Ek__BackingField;
};
struct RendererListDesc_t5C51B75B4D539F99345A077545015B8FB99FE78E_marshaled_com
{
	int32_t ___sortingCriteria;
	int32_t ___rendererConfiguration;
	RenderQueueRange_t7518252AA6426B1EA45D3D9B394F304EEF784D71 ___renderQueueRange;
	Nullable_1_tA4A30D1008B44E6BEFB1666997B110F382EE3AA5 ___stateBlock;
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___overrideShader;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___overrideMaterial;
	int32_t ___excludeObjectMotionVectors;
	int32_t ___layerMask;
	uint32_t ___renderingLayerMask;
	int32_t ___overrideMaterialPassIndex;
	int32_t ___overrideShaderPassIndex;
	CullingResults_tD6B7EF20B68D47DFF3A99EB2EA73F47F1D460267 ___U3CcullingResultU3Ek__BackingField;
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___U3CcameraU3Ek__BackingField;
	ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0 ___U3CpassNameU3Ek__BackingField;
	ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0* ___U3CpassNamesU3Ek__BackingField;
};
struct RendererListResource_t9B978DD85ADC467D7E4DB42EF603B7C49918BF49 
{
	RendererListDesc_t5C51B75B4D539F99345A077545015B8FB99FE78E ___desc;
	RendererList_t608CE60421616EF4211F5B8AC62E3C36D4BDDF85 ___rendererList;
};
struct RendererListResource_t9B978DD85ADC467D7E4DB42EF603B7C49918BF49_marshaled_pinvoke
{
	RendererListDesc_t5C51B75B4D539F99345A077545015B8FB99FE78E_marshaled_pinvoke ___desc;
	RendererList_t608CE60421616EF4211F5B8AC62E3C36D4BDDF85 ___rendererList;
};
struct RendererListResource_t9B978DD85ADC467D7E4DB42EF603B7C49918BF49_marshaled_com
{
	RendererListDesc_t5C51B75B4D539F99345A077545015B8FB99FE78E_marshaled_com ___desc;
	RendererList_t608CE60421616EF4211F5B8AC62E3C36D4BDDF85 ___rendererList;
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
struct ConstVal_t1FF839FC2CD0F6D6271C56906ACBB7B320DFE1BA_StaticFields
{
	RuntimeObject* ___s_false;
	RuntimeObject* ___s_true;
	RuntimeObject* ___s_zeroInt32;
};
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_StaticFields
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth365;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth366;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MinValue;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MaxValue;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___UnixEpoch;
};
struct Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_StaticFields
{
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___Zero;
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___One;
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___MinusOne;
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___MaxValue;
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___MinValue;
};
struct DistanceToInterpolation_t88DD77AC188D5F202C38FE6B29DD721AA84DC6B8_StaticFields
{
	DistanceToInterpolation_t88DD77AC188D5F202C38FE6B29DD721AA84DC6B8 ___Invalid;
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_StaticFields
{
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___enumSeperatorCharArray;
};
struct GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D_StaticFields
{
	GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D ___s_ZeroGlyphRect;
};
struct Guid_t_StaticFields
{
	Guid_t ___Empty;
};
struct HDLightRenderEntity_tB3F5C39C0699568B572B6319F57BECE44E80BBF0_StaticFields
{
	HDLightRenderEntity_tB3F5C39C0699568B572B6319F57BECE44E80BBF0 ___Invalid;
};
struct IntPtr_t_StaticFields
{
	intptr_t ___Zero;
};
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields
{
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___zeroMatrix;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___identityMatrix;
};
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion;
};
struct ScalableSettingSchemaId_t52565FBE2716C21A2C559CD569F2AD854E8DC9E9_StaticFields
{
	ScalableSettingSchemaId_t52565FBE2716C21A2C559CD569F2AD854E8DC9E9 ___With3Levels;
	ScalableSettingSchemaId_t52565FBE2716C21A2C559CD569F2AD854E8DC9E9 ___With4Levels;
};
struct ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0_StaticFields
{
	ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0 ___none;
};
struct SplineKnotIndex_t534896C5AC577CB9B0E1D694808A2491D2EEE38F_StaticFields
{
	SplineKnotIndex_t534896C5AC577CB9B0E1D694808A2491D2EEE38F ___Invalid;
};
struct SqlBinary_tEFB13C14B44E4388798A2F7DB48438E16DE4E347_StaticFields
{
	SqlBinary_tEFB13C14B44E4388798A2F7DB48438E16DE4E347 ___Null;
};
struct SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7_StaticFields
{
	SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7 ___True;
	SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7 ___False;
	SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7 ___Null;
	SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7 ___Zero;
	SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7 ___One;
};
struct SqlByte_t39089DB566BD0047D5ED18807B145019FB0F0B46_StaticFields
{
	int32_t ___s_iBitNotByteMax;
	SqlByte_t39089DB566BD0047D5ED18807B145019FB0F0B46 ___Null;
	SqlByte_t39089DB566BD0047D5ED18807B145019FB0F0B46 ___Zero;
	SqlByte_t39089DB566BD0047D5ED18807B145019FB0F0B46 ___MinValue;
	SqlByte_t39089DB566BD0047D5ED18807B145019FB0F0B46 ___MaxValue;
};
struct SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2_StaticFields
{
	double ___s_SQLTicksPerMillisecond;
	int32_t ___SQLTicksPerSecond;
	int32_t ___SQLTicksPerMinute;
	int32_t ___SQLTicksPerHour;
	int32_t ___s_SQLTicksPerDay;
	int64_t ___s_ticksPerSecond;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___s_SQLBaseDate;
	int64_t ___s_SQLBaseDateTicks;
	int32_t ___s_minYear;
	int32_t ___s_maxYear;
	int32_t ___s_minDay;
	int32_t ___s_maxDay;
	int32_t ___s_minTime;
	int32_t ___s_maxTime;
	int32_t ___s_dayBase;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth365;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth366;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___s_minDateTime;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___s_maxDateTime;
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___s_minTimeSpan;
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___s_maxTimeSpan;
	String_t* ___s_ISO8601_DateTimeFormat;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___s_dateTimeFormats;
	SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2 ___MinValue;
	SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2 ___MaxValue;
	SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2 ___Null;
};
struct SqlDecimal_t7A833A6D857AB79C4B2E4011CB728AEC6954D406_StaticFields
{
	uint8_t ___s_NUMERIC_MAX_PRECISION;
	uint8_t ___MaxPrecision;
	uint8_t ___MaxScale;
	uint8_t ___s_bNullMask;
	uint8_t ___s_bIsNull;
	uint8_t ___s_bNotNull;
	uint8_t ___s_bReverseNullMask;
	uint8_t ___s_bSignMask;
	uint8_t ___s_bPositive;
	uint8_t ___s_bNegative;
	uint8_t ___s_bReverseSignMask;
	uint32_t ___s_uiZero;
	int32_t ___s_cNumeMax;
	int64_t ___s_lInt32Base;
	uint64_t ___s_ulInt32Base;
	uint64_t ___s_ulInt32BaseForMod;
	uint64_t ___s_llMax;
	uint32_t ___s_ulBase10;
	double ___s_DUINT_BASE;
	double ___s_DUINT_BASE2;
	double ___s_DUINT_BASE3;
	double ___s_DMAX_NUME;
	uint32_t ___s_DBL_DIG;
	uint8_t ___s_cNumeDivScaleMin;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___s_rgulShiftBase;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___s_decimalHelpersLo;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___s_decimalHelpersMid;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___s_decimalHelpersHi;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___s_decimalHelpersHiHi;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_rgCLenFromPrec;
	uint32_t ___s_ulT1;
	uint32_t ___s_ulT2;
	uint32_t ___s_ulT3;
	uint32_t ___s_ulT4;
	uint32_t ___s_ulT5;
	uint32_t ___s_ulT6;
	uint32_t ___s_ulT7;
	uint32_t ___s_ulT8;
	uint32_t ___s_ulT9;
	uint64_t ___s_dwlT10;
	uint64_t ___s_dwlT11;
	uint64_t ___s_dwlT12;
	uint64_t ___s_dwlT13;
	uint64_t ___s_dwlT14;
	uint64_t ___s_dwlT15;
	uint64_t ___s_dwlT16;
	uint64_t ___s_dwlT17;
	uint64_t ___s_dwlT18;
	uint64_t ___s_dwlT19;
	SqlDecimal_t7A833A6D857AB79C4B2E4011CB728AEC6954D406 ___Null;
	SqlDecimal_t7A833A6D857AB79C4B2E4011CB728AEC6954D406 ___MinValue;
	SqlDecimal_t7A833A6D857AB79C4B2E4011CB728AEC6954D406 ___MaxValue;
};
struct SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98_StaticFields
{
	SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 ___Null;
	SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 ___Zero;
	SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 ___MinValue;
	SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 ___MaxValue;
};
struct SqlGuid_t93C33E370E5D3A344A15F9EFD9A2D4177576DED7_StaticFields
{
	int32_t ___s_sizeOfGuid;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_rgiGuidOrder;
	SqlGuid_t93C33E370E5D3A344A15F9EFD9A2D4177576DED7 ___Null;
};
struct SqlInt16_t30ED9856D3373398B6005B34D664C64EE224260B_StaticFields
{
	int32_t ___s_MASKI2;
	SqlInt16_t30ED9856D3373398B6005B34D664C64EE224260B ___Null;
	SqlInt16_t30ED9856D3373398B6005B34D664C64EE224260B ___Zero;
	SqlInt16_t30ED9856D3373398B6005B34D664C64EE224260B ___MinValue;
	SqlInt16_t30ED9856D3373398B6005B34D664C64EE224260B ___MaxValue;
};
struct SqlInt32_t50DA35BC9FD9C46AA933DCF8195B2EE92064D152_StaticFields
{
	int64_t ___s_iIntMin;
	int64_t ___s_lBitNotIntMax;
	SqlInt32_t50DA35BC9FD9C46AA933DCF8195B2EE92064D152 ___Null;
	SqlInt32_t50DA35BC9FD9C46AA933DCF8195B2EE92064D152 ___Zero;
	SqlInt32_t50DA35BC9FD9C46AA933DCF8195B2EE92064D152 ___MinValue;
	SqlInt32_t50DA35BC9FD9C46AA933DCF8195B2EE92064D152 ___MaxValue;
};
struct SqlInt64_t6F2A4BE192CBAA1059DDAB0D02FEDF4EDEAD6272_StaticFields
{
	int64_t ___s_lLowIntMask;
	int64_t ___s_lHighIntMask;
	SqlInt64_t6F2A4BE192CBAA1059DDAB0D02FEDF4EDEAD6272 ___Null;
	SqlInt64_t6F2A4BE192CBAA1059DDAB0D02FEDF4EDEAD6272 ___Zero;
	SqlInt64_t6F2A4BE192CBAA1059DDAB0D02FEDF4EDEAD6272 ___MinValue;
	SqlInt64_t6F2A4BE192CBAA1059DDAB0D02FEDF4EDEAD6272 ___MaxValue;
};
struct SqlMoney_t88BD587F422EA297502BC57B18010762C03531BB_StaticFields
{
	int32_t ___s_iMoneyScale;
	int64_t ___s_lTickBase;
	double ___s_dTickBase;
	int64_t ___s_minLong;
	int64_t ___s_maxLong;
	SqlMoney_t88BD587F422EA297502BC57B18010762C03531BB ___Null;
	SqlMoney_t88BD587F422EA297502BC57B18010762C03531BB ___Zero;
	SqlMoney_t88BD587F422EA297502BC57B18010762C03531BB ___MinValue;
	SqlMoney_t88BD587F422EA297502BC57B18010762C03531BB ___MaxValue;
};
struct SqlSingle_tE807CFF8CCE4E77475D51223A37ADC73BC205767_StaticFields
{
	SqlSingle_tE807CFF8CCE4E77475D51223A37ADC73BC205767 ___Null;
	SqlSingle_tE807CFF8CCE4E77475D51223A37ADC73BC205767 ___Zero;
	SqlSingle_tE807CFF8CCE4E77475D51223A37ADC73BC205767 ___MinValue;
	SqlSingle_tE807CFF8CCE4E77475D51223A37ADC73BC205767 ___MaxValue;
};
struct TMP_MeshInfo_t320C52212E9D672EBB5F5C18C3E0700AA33DD76B_StaticFields
{
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___s_DefaultColor;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___s_DefaultNormal;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___s_DefaultTangent;
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___s_DefaultBounds;
};
struct TextureId_tFF4B4AAE53408AB10B0B89CCA5F7B50CF2535E58_StaticFields
{
	TextureId_tFF4B4AAE53408AB10B0B89CCA5F7B50CF2535E58 ___invalid;
};
struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_StaticFields
{
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___Zero;
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MaxValue;
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MinValue;
};
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector;
};
struct Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_StaticFields
{
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Zero;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_One;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Up;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Down;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Left;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Right;
};
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector;
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
struct double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA_StaticFields
{
	double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA ___zero;
};
struct float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA_StaticFields
{
	float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA ___zero;
};
struct float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E_StaticFields
{
	float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___zero;
};
struct float4_t89D9A294E7A79BD81BFBDD18654508532958555E_StaticFields
{
	float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___zero;
};
struct int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A_StaticFields
{
	int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A ___zero;
};
struct DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4_StaticFields
{
	DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 ___MinValue;
	DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 ___MaxValue;
	DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 ___UnixEpoch;
};
struct RendererList_t608CE60421616EF4211F5B8AC62E3C36D4BDDF85_StaticFields
{
	RendererList_t608CE60421616EF4211F5B8AC62E3C36D4BDDF85 ___nullRendererList;
};
struct TimingEvent_t5697F8C973C8A77FED2BC5449FC594A84DB15E6D_StaticFields
{
	TimingEvent_t5697F8C973C8A77FED2BC5449FC594A84DB15E6D ___Empty;
};
struct UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207_StaticFields
{
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___s_DefaultColor;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___s_DefaultTangent;
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 ___simpleVert;
};
struct Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7_StaticFields
{
	float ___nearZ;
};
struct float4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2_StaticFields
{
	float4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2 ___identity;
	float4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2 ___zero;
};
struct JsonPosition_t7788656A280615072710710E8C15D23285850E8E_StaticFields
{
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___SpecialCharacters;
};
struct MeshInfo_tE55C4A8846CC2C399CCC3FE989476D987B86AB2F_StaticFields
{
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___k_DefaultColor;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___k_DefaultNormal;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___k_DefaultTangent;
};
struct Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F_StaticFields
{
	Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F ___m_NullPlayable;
};
struct PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4_StaticFields
{
	PlayableBindingU5BU5D_tC50C3F27A8E4246488F7A5998CAABAC4811A92CD* ___None;
	double ___DefaultDuration;
};
struct ResourceHandle_t0B9B0555328A08152F1EDA2BE4024446D670531A_StaticFields
{
	uint32_t ___s_CurrentValidBit;
	uint32_t ___s_SharedResourceValidBit;
};
struct SqlString_t49F9D31E7FD7F45509E26DEFEB61F006965D588D_StaticFields
{
	SqlString_t49F9D31E7FD7F45509E26DEFEB61F006965D588D ___Null;
	UnicodeEncoding_t2C90D9E1E55C16081FACA57B229053C1EF05DAF0* ___s_unicodeEncoding;
	int32_t ___IgnoreCase;
	int32_t ___IgnoreWidth;
	int32_t ___IgnoreNonSpace;
	int32_t ___IgnoreKanaType;
	int32_t ___BinarySort;
	int32_t ___BinarySort2;
	int32_t ___s_iDefaultFlag;
	int32_t ___s_iValidCompareOptionMask;
	int32_t ___s_iValidSqlCompareOptionMask;
	int32_t ___s_lcidUSEnglish;
	int32_t ___s_lcidBinary;
};
struct TextureHandle_t87D7D063E5E22E38632961AB2B6F89978942BE09_StaticFields
{
	TextureHandle_t87D7D063E5E22E38632961AB2B6F89978942BE09 ___s_NullHandle;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif



IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F (RuntimeArray* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57 (RuntimeArray* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D (RuntimeObject* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CustomAttributeNamedArgument_Equals_mB1743B7F2494519A511010F4CB52FC26DF692151 (CustomAttributeNamedArgument_t4EC1C2BB9943BEB7E77AC0870BE2A899E23B4E02* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CustomAttributeTypedArgument_Equals_m88F54FC46D513F75E9C932B5AB529E7C3895D917 (CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DateTime_Equals_m0EF1F769B475D00BB907072ED7585E6A6ECAB133 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DateTimeOffset_Equals_m140EDD50EA8FDA74619AA64737497663B56B0483 (DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Decimal_Equals_mD06AE5E80DBE3651F359FA951A93B7EACAB1A4D8 (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dimension_Equals_m4D328F20818BA59A8984495E22DE4CDEE086CC1D (Dimension_t5B1EAB500AE32C3789A2BCC4D43F7A29996DF3F8* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Double_Equals_m342E8F178661ABF8306D58D5F2130C58E0601DA3 (double* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EasingFunction_Equals_m0EE1C44C3557C069C5AAFEBFC9877D1D37250873 (EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EventDescriptor_Equals_m106990A4D32B29E8DA713F5CAE2FD96EA7C492EC (EventDescriptor_tA8140DBFDF03F8F9B9F7080D526AFE7363DFDAD3* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FontDefinition_Equals_m11510FB12876FE932360D45761D07A87E8494AF8 (FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GCHandle_Equals_m27E0A4AD1CA71DA8071F816D6BFCD7556BC3E015 (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* __this, RuntimeObject* ___0_o, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GlyphPairAdjustmentRecord_Equals_m0F49F5D76C114BB660B7619A93247591AE323CFD (GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GlyphRect_Equals_mF3BA7FD405AFCEA9E2A6ED2423C27CC023A1289B (GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Guid_Equals_mC7349E47BF1CBCBFB4C9032C050DE54AAC10000B (Guid_t* __this, RuntimeObject* ___0_o, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Hash128_Equals_m28FADCC2F9A565AF152A53BCEEF88F798716B104 (Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HighlightState_Equals_m0317881F19561A64B9016A27C306FDB77460D165 (HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HighlightState_Equals_mE0643D119E2942355F5FFED759BC329326E0C849 (HighlightState_tFF5FE9065990F04A37FEC545A0024047F0ABD740* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HostKey_Equals_m4FCFDE2BDFE408627F45B300BCE1F4C1D88983F7 (HostKey_t9F403627F25B0C2AF53C98D5CEF1978C14E47408* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IndexField_Equals_m232FDF421FB3E4A3D0A66830A904D60D5CA610BC (IndexField_t6285D0782FB7D55EC60F7DFB20AF7D3E7D37B795* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Int16_Equals_m4F5EDE255F1646CAF6CFD5052D80D56AAECB0512 (int16_t* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Int32_Equals_m089564150E8AF7C63B419427E2E57E3420659B1B (int32_t* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enum_Equals_m96B1058BA6312E23F31A5FBF594E96EB692EAF4E (RuntimeObject* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Int64_Equals_mDA5711B3D23B8CB282F34F73F1D7C0726D042FE8 (int64_t* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPoint_Equals_mD840FE13E838D3E8A3A6B8738BC4F62E65915B1D (IntPoint_t2AA3A6066E5DF1400D3A9CFA2F8E84A82132174A* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_Equals_m0F39AB64A7BBD67190E745FF8334A5FC766CB26E (intptr_t* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonEncodedText_Equals_mE176157268A0949E8C234E0175B00F9FF800B6C9 (JsonEncodedText_tCBC417E15CEE99E4865E048489B637A186628D23* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Length_Equals_mFFEB4478ADE2C602ED8006F4043022862D677F82 (Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LocalDefinition_Equals_mB4B6A7A6A87ABBDC60769E2E9D380DDFD7EBD5CE (LocalDefinition_t7B90DE35AAE919E1C79BA7EAFB99BF70589B1C02* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LocalKeyword_Equals_m8D31C93AA8E3230CAC337955B60C721FB18DB1D5 (LocalKeyword_tED7F563B432A5461E58CE7032AF6D1CD669CD0CB* __this, RuntimeObject* ___0_o, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ManipulatorActivationFilter_Equals_m5BE53154869F0B26619DB5EEE913398BE351483E (ManipulatorActivationFilter_t866A0295DA75EA271B30BDC1F9EEA2C4FDEB1A81* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Matrix4x4_Equals_m35CFC5F304BB40EFFE011B92AA87B77CD8FF8F74_inline (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Quaternion_Equals_mCF93B00BA4FCDDE6100918451343DB9A0583A0A0_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Rect_Equals_mD7EB2046512E4A46524A7ED929F1C38A32C408F8_inline (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReferenceEqualsWrapper_Equals_m8031E33E7452D51C78A060DDEC5C9EBC404549BA (ReferenceEqualsWrapper_tC5C782AAD0F1CA019DF6257DAA92C92F62DA9C94* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RenderStateBlock_Equals_mF2FD2D7C1C6EA07116947C3BC730E741A4054EE9 (RenderStateBlock_tFC570EF2C8F3A817FECD578E385D18CEEEA06733* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RenderTargetIdentifier_Equals_m07E36F91E8966A0E3882EF168F1AE3656BE48E9A (RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Rotate_Equals_m49F7E80F31B6317836CA1628FAA1D2194B5B6165 (Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SByte_Equals_m2436A58AA51169044BB6FAB4F3924C06037C34EF (int8_t* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ScalableSettingSchemaId_Equals_m67F45A578FD42C6467DEFB2D8FA5939A10A3D656 (ScalableSettingSchemaId_t52565FBE2716C21A2C559CD569F2AD854E8DC9E9* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Scale_Equals_mBC77FF15A4E956C17CECA719B2BF64C0F38B24FA (Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Scene_Equals_mB973481492F291BF8EAF1AD66B9F7FA3ACF3928D (Scene_tA1DC762B79745EB5140F054C884855B922318356* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ShaderTagId_Equals_m02826F7AFC63AA3AE5DB14F7A891F8F173FD9A33 (ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Single_Equals_mC2B8FFE9D39B98FA2108771CCAFEC580873D054F (float* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SplineKnotIndex_Equals_mE695B045700A70C6E31AF9051FE42AFBD1D5095E (SplineKnotIndex_t534896C5AC577CB9B0E1D694808A2491D2EEE38F* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SqlBinary_Equals_m238970418BF4DD9F9086E451AE877664DC60C724 (SqlBinary_tEFB13C14B44E4388798A2F7DB48438E16DE4E347* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SqlBoolean_Equals_m561B9537FA9804DB2EAF73AC786AFA658C83E2D3 (SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SqlByte_Equals_mB4A0F47A740D93049A4B9FAE79CE2BB82B576006 (SqlByte_t39089DB566BD0047D5ED18807B145019FB0F0B46* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SqlDateTime_Equals_m9401BFF901122AAD43042D8F4D54DFA26C0D6634 (SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SqlDecimal_Equals_mEE75EC213CFD059F31273138FAF5F16B03AD63D1 (SqlDecimal_t7A833A6D857AB79C4B2E4011CB728AEC6954D406* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SqlDouble_Equals_m8FEF106DFF53DC046CA65ECEDED37077ECF188D6 (SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SqlGuid_Equals_mD5EE347E7EF1EEB88DFCF35284F116506DBE8DD8 (SqlGuid_t93C33E370E5D3A344A15F9EFD9A2D4177576DED7* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SqlInt16_Equals_m335E7011F568068C141BA839D38B2534F6A8B3CF (SqlInt16_t30ED9856D3373398B6005B34D664C64EE224260B* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SqlInt32_Equals_m7D89FC6A3D733052B28E202EB4C5FC7D0E6B808E (SqlInt32_t50DA35BC9FD9C46AA933DCF8195B2EE92064D152* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SqlInt64_Equals_m2AC85D8BB3CF583B13C8B3915A30CB3F09553FC4 (SqlInt64_t6F2A4BE192CBAA1059DDAB0D02FEDF4EDEAD6272* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SqlMoney_Equals_mA70EFA899CB137218CC72CA4A2B5DEF24DCD2FD5 (SqlMoney_t88BD587F422EA297502BC57B18010762C03531BB* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SqlSingle_Equals_m8EE5074BA8FE7BA43B07014FB2EE08B29BD12E8B (SqlSingle_tE807CFF8CCE4E77475D51223A37ADC73BC205767* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SqlString_Equals_mED3A10DBF394BE1410C0E780D44E96249FDD9D5D (SqlString_t49F9D31E7FD7F45509E26DEFEB61F006965D588D* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StylePropertyName_Equals_m189314376AD8AD19270E89E0402E6A378DAD0F56 (StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TextShadow_Equals_m0BC39E39C12D4D49BC554184C02CC78B417289BE (TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TextureId_Equals_m455DF7673CD85DCDDAA9AAC0F888DA8F8488081D (TextureId_tFF4B4AAE53408AB10B0B89CCA5F7B50CF2535E58* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TimeSpan_Equals_mFE37205C5F1295DD799B0EE207142BFA4222D47A (TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TimeValue_Equals_mA581A2F3D44993E0C780E6BC36C355875CDAB513 (TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TimingEvent_Equals_mA89157228575BCD1D29A84C825540327838F8DDF (TimingEvent_t5697F8C973C8A77FED2BC5449FC594A84DB15E6D* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TransformOrigin_Equals_m1BB998DC4BF023074E997BDF9FFBB477B8D8C542 (TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Translate_Equals_mEE5D86BA4C5C8C65EC0F226E081F49BA891792E1 (Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UInt16_Equals_mA21E8831A57BC983311BFEE7023615002FC50207 (uint16_t* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UInt32_Equals_mC516812849D8243A72D34D830D840A1F1E32795E (uint32_t* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UInt64_Equals_m175E7A6F2A4606A94579529400854317542648A9 (uint64_t* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2_Equals_mA4E81D6FCE503DBD502BA499708344410F60DA4E_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2Int_Equals_m6D91EFAA6B3254334436BD262A4547EA08281BA3_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_Equals_mB4BE43D5986864F5C22B919F2957E0309F10E3B4_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3Int_Equals_m419967067E76BF0381E4CD8FE14DF5ED46ACFB02_inline (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector4_Equals_mC2596CA0F441D25DE7A9419BE66A8FA2DA355CB9_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VertexAttributeDescriptor_Equals_m6FBFEE42E1BAAAC2D38434EDF0906C5B76D56BE5 (VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VisibleLight_Equals_m40D683BCDD1632AC8127BEC3810B73A4EC90EAEB (VisibleLight_t0A4DF5B22865A00F618A0352B805277FA0132805* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VisibleReflectionProbe_Equals_m67A72812AD1FEEA3C942AAAAA2A47909F3FEC845 (VisibleReflectionProbe_t8AF1FAD09A36E33F5101B683DB8E99582815EF0B* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool double2_Equals_mFF460810B0184AFE3BF8DC1865F306AD087FEC33 (double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA* __this, RuntimeObject* ___0_o, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool float2_Equals_mD389D74AC9D1E4E537F95C97B79026A6C3244788 (float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA* __this, RuntimeObject* ___0_o, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool float3_Equals_mD988046122040559D8C9EFED2DA347495D722A2C (float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* __this, RuntimeObject* ___0_o, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool float4_Equals_m4D841ABA91D26FA16B07205DC9D51612265FFAB4 (float4_t89D9A294E7A79BD81BFBDD18654508532958555E* __this, RuntimeObject* ___0_o, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool float4x4_Equals_mD77FF5880D1151E85DC213AFF8E24B12044DB6B8 (float4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2* __this, RuntimeObject* ___0_o, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool int2_Equals_m6B885828097BED2665EAA565C07E9FE83627C481 (int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A* __this, RuntimeObject* ___0_o, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool int3_Equals_mAD3F27218DB5A5341B15F177DBA5ED687A0727D1 (int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF* __this, RuntimeObject* ___0_o, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool int4_Equals_mD93E26A15709372D4D3E34D8797F80C3FA01CD97 (int4_tBA77D4945786DE82C3A487B33955EA1004996052* __this, RuntimeObject* ___0_o, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Matrix4x4_Equals_mDB0C4CCC58BE3E108F1A40BE8DBDCD62E284CC51_inline (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* __this, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___0_other, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Quaternion_Equals_m25B95D8412B79CC7F8B34062BFAE662BD99578BE_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_other, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Rect_Equals_mE725DE506D3F1DB92F58B876BDA42AACD4D991B5_inline (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___0_other, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2_Equals_mDF84D5ED14E018609C6A9C9BAE016C1B33BCFF4C_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_other, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2Int_Equals_m32811BA0576C096D5EB5C0CFD8231478F17229A6_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___0_other, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_Equals_mEDEAF86793D229455BBF9BA5B30DDF438D6CABC1_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_other, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3Int_Equals_mE4D179C5001B77DE05E3E4BC39DC9F6AE441EBD8_inline (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___0_other, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector4_Equals_m73FAA65A1A565EE28D6C9385603829894B7D4392_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Matrix4x4_GetColumn_m5CE079D7A69DE70E3144BADD20A1651C73A8D118 (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Single_Equals_m97C79E2B80F39214DB3F7E714FF2BCA45A0A8BF9 (float* __this, float ___0_obj, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Rect_get_x_mB267B718E0D067F2BAE31BA477647FBF964916EB_inline (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Rect_get_y_mC733E8D49F3CE21B2A3D40A1B72D687F22C97F49_inline (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9_inline (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8_inline (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3Int_op_Equality_mB10073AF3B08421C46BF678C8FF64AAD62C83617_inline (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___0_lhs, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___1_rhs, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector3Int_get_x_m21C268D2AA4C03CE35AA49DF6155347C9748054C_inline (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector3Int_get_y_m42F43000F85D356557CAF03442273E7AA08F7F72_inline (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector3Int_get_z_m96E180F866145E373F42358F2371EFF446F08AED_inline (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisComputedStyle_t8B08CCCEE20525528B3FFDAC6D3F58F101AAF54C_m46A6FC48CCE62B7E9B6428D06CBE5AEBBD1BF199_gshared (RuntimeArray* __this, ComputedStyle_t8B08CCCEE20525528B3FFDAC6D3F58F101AAF54C ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	ComputedStyle_t8B08CCCEE20525528B3FFDAC6D3F58F101AAF54C V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		ComputedStyle_t8B08CCCEE20525528B3FFDAC6D3F58F101AAF54C L_5 = V_2;
		ComputedStyle_t8B08CCCEE20525528B3FFDAC6D3F58F101AAF54C L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<ComputedStyle_t8B08CCCEE20525528B3FFDAC6D3F58F101AAF54C> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisComputedTransitionProperty_tD8E4D8EB5DD69E063944F27A48D9263F4F1354E1_m87F1A730B20C027EFC66D1D7BD18FCE8936D101B_gshared (RuntimeArray* __this, ComputedTransitionProperty_tD8E4D8EB5DD69E063944F27A48D9263F4F1354E1 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	ComputedTransitionProperty_tD8E4D8EB5DD69E063944F27A48D9263F4F1354E1 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		ComputedTransitionProperty_tD8E4D8EB5DD69E063944F27A48D9263F4F1354E1 L_5 = V_2;
		ComputedTransitionProperty_tD8E4D8EB5DD69E063944F27A48D9263F4F1354E1 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<ComputedTransitionProperty_tD8E4D8EB5DD69E063944F27A48D9263F4F1354E1> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisConnectionEventInfo_t419635A5BBCD4FA5CAA7E25536F475F5B305049A_mC5A1648E37B890BBD704EBA3800DD95A4D8F9FCB_gshared (RuntimeArray* __this, ConnectionEventInfo_t419635A5BBCD4FA5CAA7E25536F475F5B305049A ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	ConnectionEventInfo_t419635A5BBCD4FA5CAA7E25536F475F5B305049A V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		ConnectionEventInfo_t419635A5BBCD4FA5CAA7E25536F475F5B305049A L_5 = V_2;
		ConnectionEventInfo_t419635A5BBCD4FA5CAA7E25536F475F5B305049A L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<ConnectionEventInfo_t419635A5BBCD4FA5CAA7E25536F475F5B305049A> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisConstVal_t1FF839FC2CD0F6D6271C56906ACBB7B320DFE1BA_m912C6D4E1266B6FC48044BA71C865DAEA97A27F7_gshared (RuntimeArray* __this, ConstVal_t1FF839FC2CD0F6D6271C56906ACBB7B320DFE1BA ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	ConstVal_t1FF839FC2CD0F6D6271C56906ACBB7B320DFE1BA V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		ConstVal_t1FF839FC2CD0F6D6271C56906ACBB7B320DFE1BA L_5 = V_2;
		ConstVal_t1FF839FC2CD0F6D6271C56906ACBB7B320DFE1BA L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<ConstVal_t1FF839FC2CD0F6D6271C56906ACBB7B320DFE1BA> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B_mDDD77A023B3F7E5071A190D94251C3921BBB510C_gshared (RuntimeArray* __this, ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B L_5 = V_2;
		ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9_m0729FE6DACE1E36C3992812B453D904458179990_gshared (RuntimeArray* __this, ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9 L_5 = V_2;
		ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801_m5020C2DE7D97D0DB87A85454CB43024B87B608D4_gshared (RuntimeArray* __this, ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801 L_5 = V_2;
		ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisContourVertex_t58C64DD8B2209C868718C7B50657707A15EEEF32_m8657E922DEA45D291419EAF795934303993EFBE9_gshared (RuntimeArray* __this, ContourVertex_t58C64DD8B2209C868718C7B50657707A15EEEF32 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	ContourVertex_t58C64DD8B2209C868718C7B50657707A15EEEF32 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		ContourVertex_t58C64DD8B2209C868718C7B50657707A15EEEF32 L_5 = V_2;
		ContourVertex_t58C64DD8B2209C868718C7B50657707A15EEEF32 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<ContourVertex_t58C64DD8B2209C868718C7B50657707A15EEEF32> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisControlPoint_tCAFE592FCADA75007AF24FEB842AE63DAFA9B8D1_m1BF18668D2CF0221E9FF7A96E34FB7D58E7BCFB6_gshared (RuntimeArray* __this, ControlPoint_tCAFE592FCADA75007AF24FEB842AE63DAFA9B8D1 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	ControlPoint_tCAFE592FCADA75007AF24FEB842AE63DAFA9B8D1 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		ControlPoint_tCAFE592FCADA75007AF24FEB842AE63DAFA9B8D1 L_5 = V_2;
		ControlPoint_tCAFE592FCADA75007AF24FEB842AE63DAFA9B8D1 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<ControlPoint_tCAFE592FCADA75007AF24FEB842AE63DAFA9B8D1> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1_m74962CC702F82F0B7A1B3909F9545A5189957178_gshared (RuntimeArray* __this, ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1 L_5 = V_2;
		ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisCopyClosingMeshJobData_t92845C1341A518A8D05CD9DCE53496BD70CF2044_mED95DED2C6BBB270765B90A2A22D2CACAD6DDDC3_gshared (RuntimeArray* __this, CopyClosingMeshJobData_t92845C1341A518A8D05CD9DCE53496BD70CF2044 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	CopyClosingMeshJobData_t92845C1341A518A8D05CD9DCE53496BD70CF2044 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		CopyClosingMeshJobData_t92845C1341A518A8D05CD9DCE53496BD70CF2044 L_5 = V_2;
		CopyClosingMeshJobData_t92845C1341A518A8D05CD9DCE53496BD70CF2044 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<CopyClosingMeshJobData_t92845C1341A518A8D05CD9DCE53496BD70CF2044> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisCullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0_mED66EB0130E5999ABFA4C9F4CA8F08A3EDD53F81_gshared (RuntimeArray* __this, CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0 L_5 = V_2;
		CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisCustomAttributeNamedArgument_t4EC1C2BB9943BEB7E77AC0870BE2A899E23B4E02_m1427D542FE35095CC9A79F960D878ED26934CF7C_gshared (RuntimeArray* __this, CustomAttributeNamedArgument_t4EC1C2BB9943BEB7E77AC0870BE2A899E23B4E02 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	CustomAttributeNamedArgument_t4EC1C2BB9943BEB7E77AC0870BE2A899E23B4E02 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		CustomAttributeNamedArgument_t4EC1C2BB9943BEB7E77AC0870BE2A899E23B4E02 L_5 = V_2;
		CustomAttributeNamedArgument_t4EC1C2BB9943BEB7E77AC0870BE2A899E23B4E02 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = CustomAttributeNamedArgument_Equals_mB1743B7F2494519A511010F4CB52FC26DF692151((&___0_item), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0055:
	{
		int32_t L_10 = V_1;
		int32_t L_11 = V_0;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisCustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F_mFE99DD48A9C338C45C4FABA5BF4976104CC8FD21_gshared (RuntimeArray* __this, CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F L_5 = V_2;
		CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = CustomAttributeTypedArgument_Equals_m88F54FC46D513F75E9C932B5AB529E7C3895D917((&___0_item), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0055:
	{
		int32_t L_10 = V_1;
		int32_t L_11 = V_0;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisDateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_m1C31E773FB9B1E15CCA9DB91315E9500662967BD_gshared (RuntimeArray* __this, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___0_item, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_5 = V_2;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = DateTime_Equals_m0EF1F769B475D00BB907072ED7585E6A6ECAB133((&___0_item), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0055:
	{
		int32_t L_10 = V_1;
		int32_t L_11 = V_0;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisDateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4_m15E958898A54E2F8F1E1F33B7BB2BBA0415AEC5B_gshared (RuntimeArray* __this, DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 ___0_item, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 L_5 = V_2;
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		il2cpp_codegen_runtime_class_init_inline(DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = DateTimeOffset_Equals_m140EDD50EA8FDA74619AA64737497663B56B0483((&___0_item), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0055:
	{
		int32_t L_10 = V_1;
		int32_t L_11 = V_0;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisDecalData_tEA26843A0FE044B1D3E3D3164D2FBA1313E882B3_m84862F264C58D13F2127DDB29ECA895BDE4476C5_gshared (RuntimeArray* __this, DecalData_tEA26843A0FE044B1D3E3D3164D2FBA1313E882B3 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	DecalData_tEA26843A0FE044B1D3E3D3164D2FBA1313E882B3 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		DecalData_tEA26843A0FE044B1D3E3D3164D2FBA1313E882B3 L_5 = V_2;
		DecalData_tEA26843A0FE044B1D3E3D3164D2FBA1313E882B3 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<DecalData_tEA26843A0FE044B1D3E3D3164D2FBA1313E882B3> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisDecalEntity_t8CAF09C65939503449C4138ADCDC4907196293FD_mBFD2953E40AEF47577BB9E156CD9838117A3D42B_gshared (RuntimeArray* __this, DecalEntity_t8CAF09C65939503449C4138ADCDC4907196293FD ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	DecalEntity_t8CAF09C65939503449C4138ADCDC4907196293FD V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		DecalEntity_t8CAF09C65939503449C4138ADCDC4907196293FD L_5 = V_2;
		DecalEntity_t8CAF09C65939503449C4138ADCDC4907196293FD L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<DecalEntity_t8CAF09C65939503449C4138ADCDC4907196293FD> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisDecalSubDrawCall_t68CDD2E663F805776DE0281AB4FAEDC8B8D9EC49_m77BA88DD6195AB35C367B9E0842953E4B4537AA6_gshared (RuntimeArray* __this, DecalSubDrawCall_t68CDD2E663F805776DE0281AB4FAEDC8B8D9EC49 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	DecalSubDrawCall_t68CDD2E663F805776DE0281AB4FAEDC8B8D9EC49 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		DecalSubDrawCall_t68CDD2E663F805776DE0281AB4FAEDC8B8D9EC49 L_5 = V_2;
		DecalSubDrawCall_t68CDD2E663F805776DE0281AB4FAEDC8B8D9EC49 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<DecalSubDrawCall_t68CDD2E663F805776DE0281AB4FAEDC8B8D9EC49> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisDecimal_tDA6C877282B2D789CF97C0949661CC11D643969F_m7C245196FAEBEFB44A1DFABF33EAC90C8AE6747F_gshared (RuntimeArray* __this, Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___0_item, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_5 = V_2;
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		il2cpp_codegen_runtime_class_init_inline(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Decimal_Equals_mD06AE5E80DBE3651F359FA951A93B7EACAB1A4D8((&___0_item), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0055:
	{
		int32_t L_10 = V_1;
		int32_t L_11 = V_0;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisDictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_mA189072379510048306CE0107DC15AC38840E4A8_gshared (RuntimeArray* __this, DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_5 = V_2;
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisDimension_t5B1EAB500AE32C3789A2BCC4D43F7A29996DF3F8_m4E0C16FC6E6076AB8694BE085A2ECCDC0EC748E9_gshared (RuntimeArray* __this, Dimension_t5B1EAB500AE32C3789A2BCC4D43F7A29996DF3F8 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Dimension_t5B1EAB500AE32C3789A2BCC4D43F7A29996DF3F8 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		Dimension_t5B1EAB500AE32C3789A2BCC4D43F7A29996DF3F8 L_5 = V_2;
		Dimension_t5B1EAB500AE32C3789A2BCC4D43F7A29996DF3F8 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = Dimension_Equals_m4D328F20818BA59A8984495E22DE4CDEE086CC1D((&___0_item), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0055:
	{
		int32_t L_10 = V_1;
		int32_t L_11 = V_0;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisDirectListing_tD8AFF5F3E73B0DFBF7F91BD54DCCCB53127791C4_m076701CF4CDBBB3CE97B588AE563C577E0F8FBAA_gshared (RuntimeArray* __this, DirectListing_tD8AFF5F3E73B0DFBF7F91BD54DCCCB53127791C4 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	DirectListing_tD8AFF5F3E73B0DFBF7F91BD54DCCCB53127791C4 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		DirectListing_tD8AFF5F3E73B0DFBF7F91BD54DCCCB53127791C4 L_5 = V_2;
		DirectListing_tD8AFF5F3E73B0DFBF7F91BD54DCCCB53127791C4 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<DirectListing_tD8AFF5F3E73B0DFBF7F91BD54DCCCB53127791C4> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisDirectionalLightData_t65160A2C6A29DD3686EE1DE6CC22F1F16971245D_mCC3DC9DF0EE78DB2278D64CED41A10A32ADC611A_gshared (RuntimeArray* __this, DirectionalLightData_t65160A2C6A29DD3686EE1DE6CC22F1F16971245D ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	DirectionalLightData_t65160A2C6A29DD3686EE1DE6CC22F1F16971245D V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		DirectionalLightData_t65160A2C6A29DD3686EE1DE6CC22F1F16971245D L_5 = V_2;
		DirectionalLightData_t65160A2C6A29DD3686EE1DE6CC22F1F16971245D L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<DirectionalLightData_t65160A2C6A29DD3686EE1DE6CC22F1F16971245D> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisDistanceToInterpolation_t88DD77AC188D5F202C38FE6B29DD721AA84DC6B8_mE59F8742864FD5273D840DE1AB673B4733A94432_gshared (RuntimeArray* __this, DistanceToInterpolation_t88DD77AC188D5F202C38FE6B29DD721AA84DC6B8 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	DistanceToInterpolation_t88DD77AC188D5F202C38FE6B29DD721AA84DC6B8 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		DistanceToInterpolation_t88DD77AC188D5F202C38FE6B29DD721AA84DC6B8 L_5 = V_2;
		DistanceToInterpolation_t88DD77AC188D5F202C38FE6B29DD721AA84DC6B8 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<DistanceToInterpolation_t88DD77AC188D5F202C38FE6B29DD721AA84DC6B8> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m4BB37EE94A46C905E68E8B1E07B272F7E8919BD6_gshared (RuntimeArray* __this, double ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	double V_2 = 0.0;
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		double L_5 = V_2;
		double L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = Double_Equals_m342E8F178661ABF8306D58D5F2130C58E0601DA3((&___0_item), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0055:
	{
		int32_t L_10 = V_1;
		int32_t L_11 = V_0;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisDoublePoint_t446FD90BD115DB77200658E482706463B1E514AF_mBCC743907D8FC6B2A5F460E47E1E97577DE4D5A4_gshared (RuntimeArray* __this, DoublePoint_t446FD90BD115DB77200658E482706463B1E514AF ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	DoublePoint_t446FD90BD115DB77200658E482706463B1E514AF V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		DoublePoint_t446FD90BD115DB77200658E482706463B1E514AF L_5 = V_2;
		DoublePoint_t446FD90BD115DB77200658E482706463B1E514AF L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<DoublePoint_t446FD90BD115DB77200658E482706463B1E514AF> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisDrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5_m03B05EFD6ADD9258190C39047D819DD89B2A4981_gshared (RuntimeArray* __this, DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5 L_5 = V_2;
		DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisEasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4_m6356FDB54E8A356B1D58F101ACE4CF5C5C6303F0_gshared (RuntimeArray* __this, EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4 L_5 = V_2;
		EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = EasingFunction_Equals_m0EE1C44C3557C069C5AAFEBFC9877D1D37250873((&___0_item), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0055:
	{
		int32_t L_10 = V_1;
		int32_t L_11 = V_0;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisEnumData_tB9520C9179D9D6C57B2BF70E76FE4EB4DC94A6F8_mDCBD5683BF3A510D8814BA74F3DA294AD59BD72E_gshared (RuntimeArray* __this, EnumData_tB9520C9179D9D6C57B2BF70E76FE4EB4DC94A6F8 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	EnumData_tB9520C9179D9D6C57B2BF70E76FE4EB4DC94A6F8 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		EnumData_tB9520C9179D9D6C57B2BF70E76FE4EB4DC94A6F8 L_5 = V_2;
		EnumData_tB9520C9179D9D6C57B2BF70E76FE4EB4DC94A6F8 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<EnumData_tB9520C9179D9D6C57B2BF70E76FE4EB4DC94A6F8> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisEnvLightData_t8A17ECB16F4806CC1A4B1755A304E429441B39C6_m480B01B55E51061F89476C997CF74BCBEA32641B_gshared (RuntimeArray* __this, EnvLightData_t8A17ECB16F4806CC1A4B1755A304E429441B39C6 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	EnvLightData_t8A17ECB16F4806CC1A4B1755A304E429441B39C6 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		EnvLightData_t8A17ECB16F4806CC1A4B1755A304E429441B39C6 L_5 = V_2;
		EnvLightData_t8A17ECB16F4806CC1A4B1755A304E429441B39C6 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<EnvLightData_t8A17ECB16F4806CC1A4B1755A304E429441B39C6> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisEnvLightReflectionData_t10A627789630C9183B350596571BEA3B3D458C55_mEA0DCB01427E9A6484FAF69DFFC539CE345C315D_gshared (RuntimeArray* __this, EnvLightReflectionData_t10A627789630C9183B350596571BEA3B3D458C55 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	EnvLightReflectionData_t10A627789630C9183B350596571BEA3B3D458C55 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		EnvLightReflectionData_t10A627789630C9183B350596571BEA3B3D458C55 L_5 = V_2;
		EnvLightReflectionData_t10A627789630C9183B350596571BEA3B3D458C55 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<EnvLightReflectionData_t10A627789630C9183B350596571BEA3B3D458C55> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisEnvLightReflectionDataRT_t49B44BE9BAF106BEA7064FC689E1819F0C5A1CF1_mDDC42D369C5E9AB46F915118FF8F6EB75C0C34DA_gshared (RuntimeArray* __this, EnvLightReflectionDataRT_t49B44BE9BAF106BEA7064FC689E1819F0C5A1CF1 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	EnvLightReflectionDataRT_t49B44BE9BAF106BEA7064FC689E1819F0C5A1CF1 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		EnvLightReflectionDataRT_t49B44BE9BAF106BEA7064FC689E1819F0C5A1CF1 L_5 = V_2;
		EnvLightReflectionDataRT_t49B44BE9BAF106BEA7064FC689E1819F0C5A1CF1 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<EnvLightReflectionDataRT_t49B44BE9BAF106BEA7064FC689E1819F0C5A1CF1> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisEphemeron_t74F279F5E7CF4A0CFC21C822431DD840572C6DA2_m7B0AC0662A50AD908D364F7A4A6C887C2EB715FD_gshared (RuntimeArray* __this, Ephemeron_t74F279F5E7CF4A0CFC21C822431DD840572C6DA2 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Ephemeron_t74F279F5E7CF4A0CFC21C822431DD840572C6DA2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		Ephemeron_t74F279F5E7CF4A0CFC21C822431DD840572C6DA2 L_5 = V_2;
		Ephemeron_t74F279F5E7CF4A0CFC21C822431DD840572C6DA2 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<Ephemeron_t74F279F5E7CF4A0CFC21C822431DD840572C6DA2> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisEventDescriptor_tA8140DBFDF03F8F9B9F7080D526AFE7363DFDAD3_mBC6F56711293D3263A678932F79A8FAE95EFD494_gshared (RuntimeArray* __this, EventDescriptor_tA8140DBFDF03F8F9B9F7080D526AFE7363DFDAD3 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	EventDescriptor_tA8140DBFDF03F8F9B9F7080D526AFE7363DFDAD3 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		EventDescriptor_tA8140DBFDF03F8F9B9F7080D526AFE7363DFDAD3 L_5 = V_2;
		EventDescriptor_tA8140DBFDF03F8F9B9F7080D526AFE7363DFDAD3 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = EventDescriptor_Equals_m106990A4D32B29E8DA713F5CAE2FD96EA7C492EC((&___0_item), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0055:
	{
		int32_t L_10 = V_1;
		int32_t L_11 = V_0;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisFontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C_m872B08E2F544F0E9328F33BE9DAF5398CE86C426_gshared (RuntimeArray* __this, FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C L_5 = V_2;
		FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = FontDefinition_Equals_m11510FB12876FE932360D45761D07A87E8494AF8((&___0_item), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0055:
	{
		int32_t L_10 = V_1;
		int32_t L_11 = V_0;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisFontWeightPair_tB94169BD86D0DFC25D651F890B15991A3E0ADA42_m4D598BA331810D41FC0CC263C4B9E11295AA6446_gshared (RuntimeArray* __this, FontWeightPair_tB94169BD86D0DFC25D651F890B15991A3E0ADA42 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	FontWeightPair_tB94169BD86D0DFC25D651F890B15991A3E0ADA42 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		FontWeightPair_tB94169BD86D0DFC25D651F890B15991A3E0ADA42 L_5 = V_2;
		FontWeightPair_tB94169BD86D0DFC25D651F890B15991A3E0ADA42 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<FontWeightPair_tB94169BD86D0DFC25D651F890B15991A3E0ADA42> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisFrameTimeSample_tADB152E5D63C6EB073852FBE9D9EE9A66CA31AA7_mEADCC39B66F00D1F47C455A63B9AE5FA4AF9AA11_gshared (RuntimeArray* __this, FrameTimeSample_tADB152E5D63C6EB073852FBE9D9EE9A66CA31AA7 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	FrameTimeSample_tADB152E5D63C6EB073852FBE9D9EE9A66CA31AA7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		FrameTimeSample_tADB152E5D63C6EB073852FBE9D9EE9A66CA31AA7 L_5 = V_2;
		FrameTimeSample_tADB152E5D63C6EB073852FBE9D9EE9A66CA31AA7 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<FrameTimeSample_tADB152E5D63C6EB073852FBE9D9EE9A66CA31AA7> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisFrameTiming_tD5EE8535CF7DB0D391A5E9E0DB0CBEEA0D8600AD_m29D1BEC11475EAE757AC27C6D8A9C46E0DBD779E_gshared (RuntimeArray* __this, FrameTiming_tD5EE8535CF7DB0D391A5E9E0DB0CBEEA0D8600AD ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	FrameTiming_tD5EE8535CF7DB0D391A5E9E0DB0CBEEA0D8600AD V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		FrameTiming_tD5EE8535CF7DB0D391A5E9E0DB0CBEEA0D8600AD L_5 = V_2;
		FrameTiming_tD5EE8535CF7DB0D391A5E9E0DB0CBEEA0D8600AD L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<FrameTiming_tD5EE8535CF7DB0D391A5E9E0DB0CBEEA0D8600AD> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisFrustumGPU_t86585C3DD3E7B71AA05F2317B9A39FE0E619100D_mA92DEADBAD54134E53B46D0E09EF23DE84520E77_gshared (RuntimeArray* __this, FrustumGPU_t86585C3DD3E7B71AA05F2317B9A39FE0E619100D ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	FrustumGPU_t86585C3DD3E7B71AA05F2317B9A39FE0E619100D V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		FrustumGPU_t86585C3DD3E7B71AA05F2317B9A39FE0E619100D L_5 = V_2;
		FrustumGPU_t86585C3DD3E7B71AA05F2317B9A39FE0E619100D L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<FrustumGPU_t86585C3DD3E7B71AA05F2317B9A39FE0E619100D> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisGCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC_m1CA483AC46D1C34936AC1F40616176E0C37A970D_gshared (RuntimeArray* __this, GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_5 = V_2;
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = GCHandle_Equals_m27E0A4AD1CA71DA8071F816D6BFCD7556BC3E015((&___0_item), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0055:
	{
		int32_t L_10 = V_1;
		int32_t L_11 = V_0;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisGPUCacheSettingSRP_tBD53F8D6C7296AE80C857C330F86A6AF8A6B7723_mF7293FF3E9D18A9F85F77F8F449F0CA9D06C286A_gshared (RuntimeArray* __this, GPUCacheSettingSRP_tBD53F8D6C7296AE80C857C330F86A6AF8A6B7723 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	GPUCacheSettingSRP_tBD53F8D6C7296AE80C857C330F86A6AF8A6B7723 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		GPUCacheSettingSRP_tBD53F8D6C7296AE80C857C330F86A6AF8A6B7723 L_5 = V_2;
		GPUCacheSettingSRP_tBD53F8D6C7296AE80C857C330F86A6AF8A6B7723 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<GPUCacheSettingSRP_tBD53F8D6C7296AE80C857C330F86A6AF8A6B7723> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisGfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C_m25EED3DC48C29624612DAAD1D00EAA1E60B88281_gshared (RuntimeArray* __this, GfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	GfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		GfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C L_5 = V_2;
		GfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<GfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisGlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C_mF44468AD220AC63E4E7894490778598615C94762_gshared (RuntimeArray* __this, GlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	GlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		GlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C L_5 = V_2;
		GlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<GlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisGlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E_mBA192AAD8EA9D0D62E40A8648467519E33AE217B_gshared (RuntimeArray* __this, GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E L_5 = V_2;
		GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = GlyphPairAdjustmentRecord_Equals_m0F49F5D76C114BB660B7619A93247591AE323CFD((&___0_item), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0055:
	{
		int32_t L_10 = V_1;
		int32_t L_11 = V_0;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisGlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D_m737310551800AAC363357BC676CA8957F0898068_gshared (RuntimeArray* __this, GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D ___0_item, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D L_5 = V_2;
		GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		il2cpp_codegen_runtime_class_init_inline(GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = GlyphRect_Equals_mF3BA7FD405AFCEA9E2A6ED2423C27CC023A1289B((&___0_item), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0055:
	{
		int32_t L_10 = V_1;
		int32_t L_11 = V_0;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisGradientAlphaKey_tF469955E4BBAF1044320D956CD8D990F1A26EAA0_mEF06135603FC961C856FE485948DE70AEF6D9CCF_gshared (RuntimeArray* __this, GradientAlphaKey_tF469955E4BBAF1044320D956CD8D990F1A26EAA0 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	GradientAlphaKey_tF469955E4BBAF1044320D956CD8D990F1A26EAA0 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		GradientAlphaKey_tF469955E4BBAF1044320D956CD8D990F1A26EAA0 L_5 = V_2;
		GradientAlphaKey_tF469955E4BBAF1044320D956CD8D990F1A26EAA0 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<GradientAlphaKey_tF469955E4BBAF1044320D956CD8D990F1A26EAA0> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisGradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A_mCE0E280C7352C62A032E9855A1B023A79775C91F_gshared (RuntimeArray* __this, GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A L_5 = V_2;
		GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisGradientSettings_tADA3CAA17319C58811DE187298039CC950FBAAF3_m0F5D95C83FEA7EAEBF73C1C4E2609A7389BB5469_gshared (RuntimeArray* __this, GradientSettings_tADA3CAA17319C58811DE187298039CC950FBAAF3 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	GradientSettings_tADA3CAA17319C58811DE187298039CC950FBAAF3 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		GradientSettings_tADA3CAA17319C58811DE187298039CC950FBAAF3 L_5 = V_2;
		GradientSettings_tADA3CAA17319C58811DE187298039CC950FBAAF3 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<GradientSettings_tADA3CAA17319C58811DE187298039CC950FBAAF3> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisGuid_t_mC9AAC1A97533FC5FCEAEEBBFDC7A5650B137E4B0_gshared (RuntimeArray* __this, Guid_t ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Guid_t V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		Guid_t L_5 = V_2;
		Guid_t L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = Guid_Equals_mC7349E47BF1CBCBFB4C9032C050DE54AAC10000B((&___0_item), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0055:
	{
		int32_t L_10 = V_1;
		int32_t L_11 = V_0;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisHDDirectionalShadowData_tACCC416167F037274770B4A0242B0E49BB021569_mC577F4EA98BF7E1DD1F94F1051199B3A1EBF930C_gshared (RuntimeArray* __this, HDDirectionalShadowData_tACCC416167F037274770B4A0242B0E49BB021569 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	HDDirectionalShadowData_tACCC416167F037274770B4A0242B0E49BB021569 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		HDDirectionalShadowData_tACCC416167F037274770B4A0242B0E49BB021569 L_5 = V_2;
		HDDirectionalShadowData_tACCC416167F037274770B4A0242B0E49BB021569 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<HDDirectionalShadowData_tACCC416167F037274770B4A0242B0E49BB021569> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisHDLightRenderData_t7F8BD9B18E878A3003A1F69B1926D1DAB56B1D9F_mE8C3BDB5A747C5EF4E710500EADEBCCEF7311D34_gshared (RuntimeArray* __this, HDLightRenderData_t7F8BD9B18E878A3003A1F69B1926D1DAB56B1D9F ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	HDLightRenderData_t7F8BD9B18E878A3003A1F69B1926D1DAB56B1D9F V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		HDLightRenderData_t7F8BD9B18E878A3003A1F69B1926D1DAB56B1D9F L_5 = V_2;
		HDLightRenderData_t7F8BD9B18E878A3003A1F69B1926D1DAB56B1D9F L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<HDLightRenderData_t7F8BD9B18E878A3003A1F69B1926D1DAB56B1D9F> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisHDLightRenderEntity_tB3F5C39C0699568B572B6319F57BECE44E80BBF0_m1C1F9777E408662114537863B25AD6091EF60B7F_gshared (RuntimeArray* __this, HDLightRenderEntity_tB3F5C39C0699568B572B6319F57BECE44E80BBF0 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	HDLightRenderEntity_tB3F5C39C0699568B572B6319F57BECE44E80BBF0 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		HDLightRenderEntity_tB3F5C39C0699568B572B6319F57BECE44E80BBF0 L_5 = V_2;
		HDLightRenderEntity_tB3F5C39C0699568B572B6319F57BECE44E80BBF0 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<HDLightRenderEntity_tB3F5C39C0699568B572B6319F57BECE44E80BBF0> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisHDProcessedVisibleLight_t374B0791C7675D2ADD6E951703D237559E1CDF6B_m89F51D0CA048FB53C682E7ACDD3B22142F8F5D6F_gshared (RuntimeArray* __this, HDProcessedVisibleLight_t374B0791C7675D2ADD6E951703D237559E1CDF6B ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	HDProcessedVisibleLight_t374B0791C7675D2ADD6E951703D237559E1CDF6B V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		HDProcessedVisibleLight_t374B0791C7675D2ADD6E951703D237559E1CDF6B L_5 = V_2;
		HDProcessedVisibleLight_t374B0791C7675D2ADD6E951703D237559E1CDF6B L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<HDProcessedVisibleLight_t374B0791C7675D2ADD6E951703D237559E1CDF6B> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisHDShadowData_t3B43038178B689E7FE8F8C3456CB445E3260F880_m3398C73491B701D8BEAA333606E0CFB6F777B7EE_gshared (RuntimeArray* __this, HDShadowData_t3B43038178B689E7FE8F8C3456CB445E3260F880 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	HDShadowData_t3B43038178B689E7FE8F8C3456CB445E3260F880 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		HDShadowData_t3B43038178B689E7FE8F8C3456CB445E3260F880 L_5 = V_2;
		HDShadowData_t3B43038178B689E7FE8F8C3456CB445E3260F880 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<HDShadowData_t3B43038178B689E7FE8F8C3456CB445E3260F880> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisHash128_t93367F504B687578F893CDBCD13FB95AC8A87A40_mA9DEACFEB4ECA1EAEAFE4B16693A8F77A995A96E_gshared (RuntimeArray* __this, Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 L_5 = V_2;
		Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = Hash128_Equals_m28FADCC2F9A565AF152A53BCEEF88F798716B104((&___0_item), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0055:
	{
		int32_t L_10 = V_1;
		int32_t L_11 = V_0;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisHeaderVariantInfo_t99223ED0C557730FBD8AA572065B994254F3386A_mD9B49BD7A780D2540AF25B260ACD9E19D37B6409_gshared (RuntimeArray* __this, HeaderVariantInfo_t99223ED0C557730FBD8AA572065B994254F3386A ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	HeaderVariantInfo_t99223ED0C557730FBD8AA572065B994254F3386A V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		HeaderVariantInfo_t99223ED0C557730FBD8AA572065B994254F3386A L_5 = V_2;
		HeaderVariantInfo_t99223ED0C557730FBD8AA572065B994254F3386A L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<HeaderVariantInfo_t99223ED0C557730FBD8AA572065B994254F3386A> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisHighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B_mFA7AC7671C27478FF96FBE8C66E02F96D77BB5AD_gshared (RuntimeArray* __this, HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B L_5 = V_2;
		HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = HighlightState_Equals_m0317881F19561A64B9016A27C306FDB77460D165((&___0_item), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0055:
	{
		int32_t L_10 = V_1;
		int32_t L_11 = V_0;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisHighlightState_tFF5FE9065990F04A37FEC545A0024047F0ABD740_m04FA8A6DC39B822A2C3C32E8585DBFAFA260EEEE_gshared (RuntimeArray* __this, HighlightState_tFF5FE9065990F04A37FEC545A0024047F0ABD740 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	HighlightState_tFF5FE9065990F04A37FEC545A0024047F0ABD740 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		HighlightState_tFF5FE9065990F04A37FEC545A0024047F0ABD740 L_5 = V_2;
		HighlightState_tFF5FE9065990F04A37FEC545A0024047F0ABD740 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = HighlightState_Equals_mE0643D119E2942355F5FFED759BC329326E0C849((&___0_item), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0055:
	{
		int32_t L_10 = V_1;
		int32_t L_11 = V_0;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisHostKey_t9F403627F25B0C2AF53C98D5CEF1978C14E47408_mD5B00784F205D441745BF777A218A861CC4A4049_gshared (RuntimeArray* __this, HostKey_t9F403627F25B0C2AF53C98D5CEF1978C14E47408 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	HostKey_t9F403627F25B0C2AF53C98D5CEF1978C14E47408 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		HostKey_t9F403627F25B0C2AF53C98D5CEF1978C14E47408 L_5 = V_2;
		HostKey_t9F403627F25B0C2AF53C98D5CEF1978C14E47408 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = HostKey_Equals_m4FCFDE2BDFE408627F45B300BCE1F4C1D88983F7((&___0_item), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0055:
	{
		int32_t L_10 = V_1;
		int32_t L_11 = V_0;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisHumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8_m6305FDBB2BFF49258299F865B2136C7A724CF22C_gshared (RuntimeArray* __this, HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8 L_5 = V_2;
		HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisInclusiveRange_t1762A170B7A199C25DAC4CB39CB109710812A54D_m6E60E4D6D38A0EB776A795A5500C28E60C25B993_gshared (RuntimeArray* __this, InclusiveRange_t1762A170B7A199C25DAC4CB39CB109710812A54D ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	InclusiveRange_t1762A170B7A199C25DAC4CB39CB109710812A54D V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		InclusiveRange_t1762A170B7A199C25DAC4CB39CB109710812A54D L_5 = V_2;
		InclusiveRange_t1762A170B7A199C25DAC4CB39CB109710812A54D L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<InclusiveRange_t1762A170B7A199C25DAC4CB39CB109710812A54D> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisIndexField_t6285D0782FB7D55EC60F7DFB20AF7D3E7D37B795_m9230F7B43DFA786D9CFE02235117FF9089682ECB_gshared (RuntimeArray* __this, IndexField_t6285D0782FB7D55EC60F7DFB20AF7D3E7D37B795 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	IndexField_t6285D0782FB7D55EC60F7DFB20AF7D3E7D37B795 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		IndexField_t6285D0782FB7D55EC60F7DFB20AF7D3E7D37B795 L_5 = V_2;
		IndexField_t6285D0782FB7D55EC60F7DFB20AF7D3E7D37B795 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = IndexField_Equals_m232FDF421FB3E4A3D0A66830A904D60D5CA610BC((&___0_item), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0055:
	{
		int32_t L_10 = V_1;
		int32_t L_11 = V_0;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mD0EFBAEDA75462AE4287A998615363E165D2C2DA_gshared (RuntimeArray* __this, int16_t ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int16_t V_2 = 0;
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		int16_t L_5 = V_2;
		int16_t L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = Int16_Equals_m4F5EDE255F1646CAF6CFD5052D80D56AAECB0512((&___0_item), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0055:
	{
		int32_t L_10 = V_1;
		int32_t L_11 = V_0;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mCDAE0B80FAD7C65F6A0D744C8D6096BBB34BD947_gshared (RuntimeArray* __this, int32_t ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		int32_t L_5 = V_2;
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = Int32_Equals_m089564150E8AF7C63B419427E2E57E3420659B1B((&___0_item), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0055:
	{
		int32_t L_10 = V_1;
		int32_t L_11 = V_0;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_mE4B26EE3E4AD2A50843DC53472DCA56DCF076655_gshared (RuntimeArray* __this, int32_t ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		int32_t L_5 = V_2;
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<int32_t> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = Enum_Equals_m96B1058BA6312E23F31A5FBF594E96EB692EAF4E((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mD67B0D910E7F1FAC22A160F7C9E95A863BF02D6F_gshared (RuntimeArray* __this, int64_t ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int64_t V_2 = 0;
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		int64_t L_5 = V_2;
		int64_t L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = Int64_Equals_mDA5711B3D23B8CB282F34F73F1D7C0726D042FE8((&___0_item), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0055:
	{
		int32_t L_10 = V_1;
		int32_t L_11 = V_0;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisIntPoint_t2AA3A6066E5DF1400D3A9CFA2F8E84A82132174A_mC8C4D3BA5F34C8D957D5162EA72F68A01D422749_gshared (RuntimeArray* __this, IntPoint_t2AA3A6066E5DF1400D3A9CFA2F8E84A82132174A ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	IntPoint_t2AA3A6066E5DF1400D3A9CFA2F8E84A82132174A V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		IntPoint_t2AA3A6066E5DF1400D3A9CFA2F8E84A82132174A L_5 = V_2;
		IntPoint_t2AA3A6066E5DF1400D3A9CFA2F8E84A82132174A L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = IntPoint_Equals_mD840FE13E838D3E8A3A6B8738BC4F62E65915B1D((&___0_item), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0055:
	{
		int32_t L_10 = V_1;
		int32_t L_11 = V_0;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisIntPtr_t_mD75990B24E50B4F290BF6C620F2EE6488210ACE6_gshared (RuntimeArray* __this, intptr_t ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	intptr_t V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		intptr_t L_5 = V_2;
		intptr_t L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = IntPtr_Equals_m0F39AB64A7BBD67190E745FF8334A5FC766CB26E((&___0_item), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0055:
	{
		int32_t L_10 = V_1;
		int32_t L_11 = V_0;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisInternalCodePageDataItem_t6B4913D6507B26FFAE0B805874644D3DBE78F316_mB6A6FF6819917F9256983A53F57CE2F3EE431A49_gshared (RuntimeArray* __this, InternalCodePageDataItem_t6B4913D6507B26FFAE0B805874644D3DBE78F316 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	InternalCodePageDataItem_t6B4913D6507B26FFAE0B805874644D3DBE78F316 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		InternalCodePageDataItem_t6B4913D6507B26FFAE0B805874644D3DBE78F316 L_5 = V_2;
		InternalCodePageDataItem_t6B4913D6507B26FFAE0B805874644D3DBE78F316 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<InternalCodePageDataItem_t6B4913D6507B26FFAE0B805874644D3DBE78F316> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisInternalEncodingDataItem_t1D6DA6BCE8389C12ECC229A644D2CA45A86C06EB_m578CC4C880244C4A7F0C3F37F42C1A3E7ECE6077_gshared (RuntimeArray* __this, InternalEncodingDataItem_t1D6DA6BCE8389C12ECC229A644D2CA45A86C06EB ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	InternalEncodingDataItem_t1D6DA6BCE8389C12ECC229A644D2CA45A86C06EB V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		InternalEncodingDataItem_t1D6DA6BCE8389C12ECC229A644D2CA45A86C06EB L_5 = V_2;
		InternalEncodingDataItem_t1D6DA6BCE8389C12ECC229A644D2CA45A86C06EB L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<InternalEncodingDataItem_t1D6DA6BCE8389C12ECC229A644D2CA45A86C06EB> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisInterpretedFrameInfo_tEF62B79D176B8D032C22953AA0D5B581C4076321_m6133DE1B031B5933BAEDE62D6C3BAF3F54EB21A3_gshared (RuntimeArray* __this, InterpretedFrameInfo_tEF62B79D176B8D032C22953AA0D5B581C4076321 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	InterpretedFrameInfo_tEF62B79D176B8D032C22953AA0D5B581C4076321 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		InterpretedFrameInfo_tEF62B79D176B8D032C22953AA0D5B581C4076321 L_5 = V_2;
		InterpretedFrameInfo_tEF62B79D176B8D032C22953AA0D5B581C4076321 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<InterpretedFrameInfo_tEF62B79D176B8D032C22953AA0D5B581C4076321> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisIntervalTreeNode_tDAA7D63276D62CD178C91CC7DF932C97896332EC_m9F9FB7C6B5C4DB8529B488D3571BE4A227EFE2B7_gshared (RuntimeArray* __this, IntervalTreeNode_tDAA7D63276D62CD178C91CC7DF932C97896332EC ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	IntervalTreeNode_tDAA7D63276D62CD178C91CC7DF932C97896332EC V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		IntervalTreeNode_tDAA7D63276D62CD178C91CC7DF932C97896332EC L_5 = V_2;
		IntervalTreeNode_tDAA7D63276D62CD178C91CC7DF932C97896332EC L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<IntervalTreeNode_tDAA7D63276D62CD178C91CC7DF932C97896332EC> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisJobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08_m07B03D306CF8B3D15D59AE59602E05107323E80C_gshared (RuntimeArray* __this, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_5 = V_2;
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisJsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1_mFC6C22FDD19C1710B2451B83B2D1EB683B3654FD_gshared (RuntimeArray* __this, JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1 L_5 = V_2;
		JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisJsonEncodedText_tCBC417E15CEE99E4865E048489B637A186628D23_mEB9E0D52D5A079F727E0326DCD4F1D31B6E024CB_gshared (RuntimeArray* __this, JsonEncodedText_tCBC417E15CEE99E4865E048489B637A186628D23 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	JsonEncodedText_tCBC417E15CEE99E4865E048489B637A186628D23 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		JsonEncodedText_tCBC417E15CEE99E4865E048489B637A186628D23 L_5 = V_2;
		JsonEncodedText_tCBC417E15CEE99E4865E048489B637A186628D23 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = JsonEncodedText_Equals_mE176157268A0949E8C234E0175B00F9FF800B6C9((&___0_item), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0055:
	{
		int32_t L_10 = V_1;
		int32_t L_11 = V_0;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisJsonPosition_t7788656A280615072710710E8C15D23285850E8E_m9C6751960E71AE03E93D68DC38A76019FB8A9D42_gshared (RuntimeArray* __this, JsonPosition_t7788656A280615072710710E8C15D23285850E8E ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	JsonPosition_t7788656A280615072710710E8C15D23285850E8E V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		JsonPosition_t7788656A280615072710710E8C15D23285850E8E L_5 = V_2;
		JsonPosition_t7788656A280615072710710E8C15D23285850E8E L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<JsonPosition_t7788656A280615072710710E8C15D23285850E8E> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisJsonProperty_t9ED20BB68BAF4B8220A5D4AF3350B05639735739_mAB1BDBEA86D91DEB66FD99FBF765C3C0D220D0CD_gshared (RuntimeArray* __this, JsonProperty_t9ED20BB68BAF4B8220A5D4AF3350B05639735739 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	JsonProperty_t9ED20BB68BAF4B8220A5D4AF3350B05639735739 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		JsonProperty_t9ED20BB68BAF4B8220A5D4AF3350B05639735739 L_5 = V_2;
		JsonProperty_t9ED20BB68BAF4B8220A5D4AF3350B05639735739 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<JsonProperty_t9ED20BB68BAF4B8220A5D4AF3350B05639735739> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisJsonReaderState_t6F9FAEDB51A98D33397B9B838A7F7706052AE071_m4EDC2807A25A9061116C7D52CB7590996E3DCBE9_gshared (RuntimeArray* __this, JsonReaderState_t6F9FAEDB51A98D33397B9B838A7F7706052AE071 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	JsonReaderState_t6F9FAEDB51A98D33397B9B838A7F7706052AE071 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		JsonReaderState_t6F9FAEDB51A98D33397B9B838A7F7706052AE071 L_5 = V_2;
		JsonReaderState_t6F9FAEDB51A98D33397B9B838A7F7706052AE071 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<JsonReaderState_t6F9FAEDB51A98D33397B9B838A7F7706052AE071> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisKeyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0_m95C4FE394434D56A0E6E3D42F98204C6D63E16B2_gshared (RuntimeArray* __this, Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 L_5 = V_2;
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisLayerBatch_tEC81EE605197FE053EB5C65E38CFD93D9A6B75BC_mC84030F72E250FB5E8C69F5767365D52A5AC6EF4_gshared (RuntimeArray* __this, LayerBatch_tEC81EE605197FE053EB5C65E38CFD93D9A6B75BC ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	LayerBatch_tEC81EE605197FE053EB5C65E38CFD93D9A6B75BC V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		LayerBatch_tEC81EE605197FE053EB5C65E38CFD93D9A6B75BC L_5 = V_2;
		LayerBatch_tEC81EE605197FE053EB5C65E38CFD93D9A6B75BC L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<LayerBatch_tEC81EE605197FE053EB5C65E38CFD93D9A6B75BC> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisLayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_m9A2B6E000B4EEFB369779ED5629E1226372C6BE5_gshared (RuntimeArray* __this, LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_5 = V_2;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisLength_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256_m8A069C00262F54EF081159A13FBE48AAAF423427_gshared (RuntimeArray* __this, Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 L_5 = V_2;
		Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = Length_Equals_mFFEB4478ADE2C602ED8006F4043022862D677F82((&___0_item), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0055:
	{
		int32_t L_10 = V_1;
		int32_t L_11 = V_0;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisLigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94_m8F48C4710855234C3178B066F387FB2319C83F84_gshared (RuntimeArray* __this, LigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	LigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		LigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94 L_5 = V_2;
		LigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<LigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisLight2DBlendStyle_tD5C374DD9D54E8FA4BC495EA99F386F09B16B3D4_mA47A02762C94B17F04E40144730925D02ACA01C7_gshared (RuntimeArray* __this, Light2DBlendStyle_tD5C374DD9D54E8FA4BC495EA99F386F09B16B3D4 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Light2DBlendStyle_tD5C374DD9D54E8FA4BC495EA99F386F09B16B3D4 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		Light2DBlendStyle_tD5C374DD9D54E8FA4BC495EA99F386F09B16B3D4 L_5 = V_2;
		Light2DBlendStyle_tD5C374DD9D54E8FA4BC495EA99F386F09B16B3D4 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<Light2DBlendStyle_tD5C374DD9D54E8FA4BC495EA99F386F09B16B3D4> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisLightBakingOutput_t6212AB0B6B34C94F1982FE964FC48201854B5B90_m7D90D502FF67A3010720E410F13ECBB8E26D6AF2_gshared (RuntimeArray* __this, LightBakingOutput_t6212AB0B6B34C94F1982FE964FC48201854B5B90 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	LightBakingOutput_t6212AB0B6B34C94F1982FE964FC48201854B5B90 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		LightBakingOutput_t6212AB0B6B34C94F1982FE964FC48201854B5B90 L_5 = V_2;
		LightBakingOutput_t6212AB0B6B34C94F1982FE964FC48201854B5B90 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<LightBakingOutput_t6212AB0B6B34C94F1982FE964FC48201854B5B90> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisLightData_t8694116A62939E2F9CFB1D9C2DC626F399FF51CE_mF9488C8577D4BBEFEF2A918BBA9BC6304FB4F045_gshared (RuntimeArray* __this, LightData_t8694116A62939E2F9CFB1D9C2DC626F399FF51CE ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	LightData_t8694116A62939E2F9CFB1D9C2DC626F399FF51CE V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		LightData_t8694116A62939E2F9CFB1D9C2DC626F399FF51CE L_5 = V_2;
		LightData_t8694116A62939E2F9CFB1D9C2DC626F399FF51CE L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<LightData_t8694116A62939E2F9CFB1D9C2DC626F399FF51CE> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisLightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21_m49486A08AD3F523B9B0758E51F2CB80D158BC7A5_gshared (RuntimeArray* __this, LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21 L_5 = V_2;
		LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisLightVolume_tEB4C2A43FC367479D5FE4C9E65CCDCE637992A54_m35A75965195BE1F861D9400986BD95AF3349725B_gshared (RuntimeArray* __this, LightVolume_tEB4C2A43FC367479D5FE4C9E65CCDCE637992A54 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	LightVolume_tEB4C2A43FC367479D5FE4C9E65CCDCE637992A54 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		LightVolume_tEB4C2A43FC367479D5FE4C9E65CCDCE637992A54 L_5 = V_2;
		LightVolume_tEB4C2A43FC367479D5FE4C9E65CCDCE637992A54 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<LightVolume_tEB4C2A43FC367479D5FE4C9E65CCDCE637992A54> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisLightVolumeData_t7687C5CEA8E59C0EB0F57D7DEA3B95183A8EF402_m03DDF3A0D0194E908A76BA764166CE9DDA59E51D_gshared (RuntimeArray* __this, LightVolumeData_t7687C5CEA8E59C0EB0F57D7DEA3B95183A8EF402 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	LightVolumeData_t7687C5CEA8E59C0EB0F57D7DEA3B95183A8EF402 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		LightVolumeData_t7687C5CEA8E59C0EB0F57D7DEA3B95183A8EF402 L_5 = V_2;
		LightVolumeData_t7687C5CEA8E59C0EB0F57D7DEA3B95183A8EF402 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<LightVolumeData_t7687C5CEA8E59C0EB0F57D7DEA3B95183A8EF402> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisLineInfo_t2BBD461B330C46ACA45596A8E72FEA4172F88CF5_m87D5DAB388D67500FBA7E021228AE0D2ACF51851_gshared (RuntimeArray* __this, LineInfo_t2BBD461B330C46ACA45596A8E72FEA4172F88CF5 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	LineInfo_t2BBD461B330C46ACA45596A8E72FEA4172F88CF5 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		LineInfo_t2BBD461B330C46ACA45596A8E72FEA4172F88CF5 L_5 = V_2;
		LineInfo_t2BBD461B330C46ACA45596A8E72FEA4172F88CF5 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<LineInfo_t2BBD461B330C46ACA45596A8E72FEA4172F88CF5> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisLinkInfo_tE85DDAFDFBDA635E6405C88EE4FD5941A9243DD8_mFBA1FAF68A5CDF492EF806E1D5B269C4886FAF8A_gshared (RuntimeArray* __this, LinkInfo_tE85DDAFDFBDA635E6405C88EE4FD5941A9243DD8 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	LinkInfo_tE85DDAFDFBDA635E6405C88EE4FD5941A9243DD8 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		LinkInfo_tE85DDAFDFBDA635E6405C88EE4FD5941A9243DD8 L_5 = V_2;
		LinkInfo_tE85DDAFDFBDA635E6405C88EE4FD5941A9243DD8 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<LinkInfo_tE85DDAFDFBDA635E6405C88EE4FD5941A9243DD8> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisLocalDefinition_t7B90DE35AAE919E1C79BA7EAFB99BF70589B1C02_mB709B8136101D3C0BA8F642EC1160822FA4D4D77_gshared (RuntimeArray* __this, LocalDefinition_t7B90DE35AAE919E1C79BA7EAFB99BF70589B1C02 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	LocalDefinition_t7B90DE35AAE919E1C79BA7EAFB99BF70589B1C02 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		LocalDefinition_t7B90DE35AAE919E1C79BA7EAFB99BF70589B1C02 L_5 = V_2;
		LocalDefinition_t7B90DE35AAE919E1C79BA7EAFB99BF70589B1C02 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = LocalDefinition_Equals_mB4B6A7A6A87ABBDC60769E2E9D380DDFD7EBD5CE((&___0_item), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0055:
	{
		int32_t L_10 = V_1;
		int32_t L_11 = V_0;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisLocalKeyword_tED7F563B432A5461E58CE7032AF6D1CD669CD0CB_m3A4686949FF58D67EE38422C3578382271D155C5_gshared (RuntimeArray* __this, LocalKeyword_tED7F563B432A5461E58CE7032AF6D1CD669CD0CB ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	LocalKeyword_tED7F563B432A5461E58CE7032AF6D1CD669CD0CB V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		LocalKeyword_tED7F563B432A5461E58CE7032AF6D1CD669CD0CB L_5 = V_2;
		LocalKeyword_tED7F563B432A5461E58CE7032AF6D1CD669CD0CB L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = LocalKeyword_Equals_m8D31C93AA8E3230CAC337955B60C721FB18DB1D5((&___0_item), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0055:
	{
		int32_t L_10 = V_1;
		int32_t L_11 = V_0;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisLocalVolumetricFogEngineData_t2C635B70223D58196377D772AA4595F496283118_m007CABCCDC04C12CED54EEA569243C0680BDA0DE_gshared (RuntimeArray* __this, LocalVolumetricFogEngineData_t2C635B70223D58196377D772AA4595F496283118 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	LocalVolumetricFogEngineData_t2C635B70223D58196377D772AA4595F496283118 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		LocalVolumetricFogEngineData_t2C635B70223D58196377D772AA4595F496283118 L_5 = V_2;
		LocalVolumetricFogEngineData_t2C635B70223D58196377D772AA4595F496283118 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<LocalVolumetricFogEngineData_t2C635B70223D58196377D772AA4595F496283118> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisManipulatorActivationFilter_t866A0295DA75EA271B30BDC1F9EEA2C4FDEB1A81_m7EEC0EB2EF91F7C221DB89514243E8AC57433D90_gshared (RuntimeArray* __this, ManipulatorActivationFilter_t866A0295DA75EA271B30BDC1F9EEA2C4FDEB1A81 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	ManipulatorActivationFilter_t866A0295DA75EA271B30BDC1F9EEA2C4FDEB1A81 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		ManipulatorActivationFilter_t866A0295DA75EA271B30BDC1F9EEA2C4FDEB1A81 L_5 = V_2;
		ManipulatorActivationFilter_t866A0295DA75EA271B30BDC1F9EEA2C4FDEB1A81 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = ManipulatorActivationFilter_Equals_m5BE53154869F0B26619DB5EEE913398BE351483E((&___0_item), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0055:
	{
		int32_t L_10 = V_1;
		int32_t L_11 = V_0;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisMarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607_m8C87746F1BA606F5920E9E4C07BDC3B26D5A8D86_gshared (RuntimeArray* __this, MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607 L_5 = V_2;
		MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisMarkToMarkAdjustmentRecord_tD53618A3728435D5C904857DAC644EE27640807C_mDB64984FAB8FE33899D772654F59EA0C75E5F2C8_gshared (RuntimeArray* __this, MarkToMarkAdjustmentRecord_tD53618A3728435D5C904857DAC644EE27640807C ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	MarkToMarkAdjustmentRecord_tD53618A3728435D5C904857DAC644EE27640807C V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		MarkToMarkAdjustmentRecord_tD53618A3728435D5C904857DAC644EE27640807C L_5 = V_2;
		MarkToMarkAdjustmentRecord_tD53618A3728435D5C904857DAC644EE27640807C L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<MarkToMarkAdjustmentRecord_tD53618A3728435D5C904857DAC644EE27640807C> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisMaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_mD23D5BA9879FD8BDE5C1829348FEF86919F81313_gshared (RuntimeArray* __this, MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B L_5 = V_2;
		MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisMaterialReference_t86DB0799D5C82869D4FF0A4F59624AED6910FD26_mC6783FE614D2E6C44B6C853C1A706EFAC498C81E_gshared (RuntimeArray* __this, MaterialReference_t86DB0799D5C82869D4FF0A4F59624AED6910FD26 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	MaterialReference_t86DB0799D5C82869D4FF0A4F59624AED6910FD26 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		MaterialReference_t86DB0799D5C82869D4FF0A4F59624AED6910FD26 L_5 = V_2;
		MaterialReference_t86DB0799D5C82869D4FF0A4F59624AED6910FD26 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<MaterialReference_t86DB0799D5C82869D4FF0A4F59624AED6910FD26> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_mAE7D82B8914842B3514D1E045AABDD85824881CB_gshared (RuntimeArray* __this, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_5 = V_2;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = Matrix4x4_Equals_m35CFC5F304BB40EFFE011B92AA87B77CD8FF8F74_inline((&___0_item), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0055:
	{
		int32_t L_10 = V_1;
		int32_t L_11 = V_0;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisMeshInfo_tE55C4A8846CC2C399CCC3FE989476D987B86AB2F_m96A0DFE2925F92A194EC191CD71A817CC84CBDA2_gshared (RuntimeArray* __this, MeshInfo_tE55C4A8846CC2C399CCC3FE989476D987B86AB2F ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	MeshInfo_tE55C4A8846CC2C399CCC3FE989476D987B86AB2F V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		MeshInfo_tE55C4A8846CC2C399CCC3FE989476D987B86AB2F L_5 = V_2;
		MeshInfo_tE55C4A8846CC2C399CCC3FE989476D987B86AB2F L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<MeshInfo_tE55C4A8846CC2C399CCC3FE989476D987B86AB2F> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960_mCF2C054273EBCFA512FE8DC4EE44B2BC218DAD24_gshared (RuntimeArray* __this, ModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	ModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		ModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960 L_5 = V_2;
		ModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<ModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisMultiQuery_tCA0D1FA8A2B1738C903C816F85D7FC2727677794_m2F3681A2600243067B7D81982F026D09BF79A519_gshared (RuntimeArray* __this, MultiQuery_tCA0D1FA8A2B1738C903C816F85D7FC2727677794 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	MultiQuery_tCA0D1FA8A2B1738C903C816F85D7FC2727677794 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		MultiQuery_tCA0D1FA8A2B1738C903C816F85D7FC2727677794 L_5 = V_2;
		MultiQuery_tCA0D1FA8A2B1738C903C816F85D7FC2727677794 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<MultiQuery_tCA0D1FA8A2B1738C903C816F85D7FC2727677794> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisMultipleSubstitutionRecord_t668A640AFADBD46E3D4EC3A8417D0A02764DF87B_m674BFFE726CE26D1288A4FA6696732A37A2BCF51_gshared (RuntimeArray* __this, MultipleSubstitutionRecord_t668A640AFADBD46E3D4EC3A8417D0A02764DF87B ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	MultipleSubstitutionRecord_t668A640AFADBD46E3D4EC3A8417D0A02764DF87B V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		MultipleSubstitutionRecord_t668A640AFADBD46E3D4EC3A8417D0A02764DF87B L_5 = V_2;
		MultipleSubstitutionRecord_t668A640AFADBD46E3D4EC3A8417D0A02764DF87B L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<MultipleSubstitutionRecord_t668A640AFADBD46E3D4EC3A8417D0A02764DF87B> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisNFT_t46E6566285B819F76FC6BF8DED1EBBDDEE46566D_m39D3F67E96AC40598FD797CF72D4099E9CA0D0E3_gshared (RuntimeArray* __this, NFT_t46E6566285B819F76FC6BF8DED1EBBDDEE46566D ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	NFT_t46E6566285B819F76FC6BF8DED1EBBDDEE46566D V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		NFT_t46E6566285B819F76FC6BF8DED1EBBDDEE46566D L_5 = V_2;
		NFT_t46E6566285B819F76FC6BF8DED1EBBDDEE46566D L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<NFT_t46E6566285B819F76FC6BF8DED1EBBDDEE46566D> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisNFTMetadata_t57B87F3F600CF2DB4051680552AC25ED94440D31_m76A55C7E7CE28006139F3D25C86BC7D21A15AD7F_gshared (RuntimeArray* __this, NFTMetadata_t57B87F3F600CF2DB4051680552AC25ED94440D31 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	NFTMetadata_t57B87F3F600CF2DB4051680552AC25ED94440D31 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		NFTMetadata_t57B87F3F600CF2DB4051680552AC25ED94440D31 L_5 = V_2;
		NFTMetadata_t57B87F3F600CF2DB4051680552AC25ED94440D31 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<NFTMetadata_t57B87F3F600CF2DB4051680552AC25ED94440D31> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisNavigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_m1E9050B29F06823D195D65778AA8842D526BC8CB_gshared (RuntimeArray* __this, Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C L_5 = V_2;
		Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisNudgeJobData_tC303DCF7D6A8683AA414D05AA13CB6FAD4BB4022_m2252ECDB2F84C979FBBA91C583CCD77EF7A81ECB_gshared (RuntimeArray* __this, NudgeJobData_tC303DCF7D6A8683AA414D05AA13CB6FAD4BB4022 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	NudgeJobData_tC303DCF7D6A8683AA414D05AA13CB6FAD4BB4022 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		NudgeJobData_tC303DCF7D6A8683AA414D05AA13CB6FAD4BB4022 L_5 = V_2;
		NudgeJobData_tC303DCF7D6A8683AA414D05AA13CB6FAD4BB4022 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<NudgeJobData_tC303DCF7D6A8683AA414D05AA13CB6FAD4BB4022> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisRuntimeObject_m7D46A960F53B4839DAA7C6CFE652D1B31AD079C7_gshared (RuntimeArray* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		RuntimeObject* L_4 = ___0_item;
		if (L_4)
		{
			goto IL_003a;
		}
	}
	{
		RuntimeObject* L_5 = V_2;
		if (L_5)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_003a:
	{
		RuntimeObject* L_6 = V_2;
		bool L_7;
		L_7 = VirtualFuncInvoker1< bool, RuntimeObject* >::Invoke(0, (___0_item), L_6);
		if (!L_7)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_0055:
	{
		int32_t L_9 = V_1;
		int32_t L_10 = V_0;
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisObjectMetadata_t30C8C19944FF797CD9C60138709E5331AAC82449_m6695583DEF87E22727B164F113C33C77C0542115_gshared (RuntimeArray* __this, ObjectMetadata_t30C8C19944FF797CD9C60138709E5331AAC82449 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	ObjectMetadata_t30C8C19944FF797CD9C60138709E5331AAC82449 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		ObjectMetadata_t30C8C19944FF797CD9C60138709E5331AAC82449 L_5 = V_2;
		ObjectMetadata_t30C8C19944FF797CD9C60138709E5331AAC82449 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<ObjectMetadata_t30C8C19944FF797CD9C60138709E5331AAC82449> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisOffer_t2BFDE41BB17E5B1717032EBB03B8DA6D2ABD8644_m35FCAF3C58CA213B8487BE3B8CCFC93EC0663F05_gshared (RuntimeArray* __this, Offer_t2BFDE41BB17E5B1717032EBB03B8DA6D2ABD8644 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Offer_t2BFDE41BB17E5B1717032EBB03B8DA6D2ABD8644 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		Offer_t2BFDE41BB17E5B1717032EBB03B8DA6D2ABD8644 L_5 = V_2;
		Offer_t2BFDE41BB17E5B1717032EBB03B8DA6D2ABD8644 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<Offer_t2BFDE41BB17E5B1717032EBB03B8DA6D2ABD8644> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisOrientedBBox_tA411E6F6C5EED372F11AF02C65B0F19B1B413A4F_m2033FB0E0A8DCFA223FC2F6DCD0BBB9BE29303FF_gshared (RuntimeArray* __this, OrientedBBox_tA411E6F6C5EED372F11AF02C65B0F19B1B413A4F ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	OrientedBBox_tA411E6F6C5EED372F11AF02C65B0F19B1B413A4F V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		OrientedBBox_tA411E6F6C5EED372F11AF02C65B0F19B1B413A4F L_5 = V_2;
		OrientedBBox_tA411E6F6C5EED372F11AF02C65B0F19B1B413A4F L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<OrientedBBox_tA411E6F6C5EED372F11AF02C65B0F19B1B413A4F> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisOwnedQuery_t30BE34629D61DB9FED414CDEB7D73ABB51DD29E7_m409858FEC15E190B5D19FCD5ADA38CEAC3B4147F_gshared (RuntimeArray* __this, OwnedQuery_t30BE34629D61DB9FED414CDEB7D73ABB51DD29E7 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	OwnedQuery_t30BE34629D61DB9FED414CDEB7D73ABB51DD29E7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		OwnedQuery_t30BE34629D61DB9FED414CDEB7D73ABB51DD29E7 L_5 = V_2;
		OwnedQuery_t30BE34629D61DB9FED414CDEB7D73ABB51DD29E7 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<OwnedQuery_t30BE34629D61DB9FED414CDEB7D73ABB51DD29E7> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisPageInfo_tFFF6B289E9A37E4D69353B32F941421180DA5909_mDD06D600D91B01BCF8CAAFF9606735F412DB8AA9_gshared (RuntimeArray* __this, PageInfo_tFFF6B289E9A37E4D69353B32F941421180DA5909 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	PageInfo_tFFF6B289E9A37E4D69353B32F941421180DA5909 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		PageInfo_tFFF6B289E9A37E4D69353B32F941421180DA5909 L_5 = V_2;
		PageInfo_tFFF6B289E9A37E4D69353B32F941421180DA5909 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<PageInfo_tFFF6B289E9A37E4D69353B32F941421180DA5909> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisPairingStruct_tB9E5AD6EF680AF0EBE40D0A9EA7B5E92D7C2A745_m4E20CC5B9A3BA394092A2678B06E85EB566F67F9_gshared (RuntimeArray* __this, PairingStruct_tB9E5AD6EF680AF0EBE40D0A9EA7B5E92D7C2A745 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	PairingStruct_tB9E5AD6EF680AF0EBE40D0A9EA7B5E92D7C2A745 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		PairingStruct_tB9E5AD6EF680AF0EBE40D0A9EA7B5E92D7C2A745 L_5 = V_2;
		PairingStruct_tB9E5AD6EF680AF0EBE40D0A9EA7B5E92D7C2A745 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<PairingStruct_tB9E5AD6EF680AF0EBE40D0A9EA7B5E92D7C2A745> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisParameterModifier_t75F1AF13B2AD5EDBD3A3579FD337D0A66E3FF510_mAB740A2D5C4C627889328C5393009D58BDDDEB5E_gshared (RuntimeArray* __this, ParameterModifier_t75F1AF13B2AD5EDBD3A3579FD337D0A66E3FF510 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	ParameterModifier_t75F1AF13B2AD5EDBD3A3579FD337D0A66E3FF510 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		ParameterModifier_t75F1AF13B2AD5EDBD3A3579FD337D0A66E3FF510 L_5 = V_2;
		ParameterModifier_t75F1AF13B2AD5EDBD3A3579FD337D0A66E3FF510 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<ParameterModifier_t75F1AF13B2AD5EDBD3A3579FD337D0A66E3FF510> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisParameterRef_tA842D9CDC9FF6DDF197615051AC940B647E3D117_m41C59FAA6DE1E3A71B3171DBDFD5E01D28D19ECD_gshared (RuntimeArray* __this, ParameterRef_tA842D9CDC9FF6DDF197615051AC940B647E3D117 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	ParameterRef_tA842D9CDC9FF6DDF197615051AC940B647E3D117 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		ParameterRef_tA842D9CDC9FF6DDF197615051AC940B647E3D117 L_5 = V_2;
		ParameterRef_tA842D9CDC9FF6DDF197615051AC940B647E3D117 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<ParameterRef_tA842D9CDC9FF6DDF197615051AC940B647E3D117> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisParticleCollisionEvent_t9152F03D9336BAAFEAF1CCA498C0F156ABD19858_mC98C520F698F7A783A3241D98E672102385223E5_gshared (RuntimeArray* __this, ParticleCollisionEvent_t9152F03D9336BAAFEAF1CCA498C0F156ABD19858 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	ParticleCollisionEvent_t9152F03D9336BAAFEAF1CCA498C0F156ABD19858 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		ParticleCollisionEvent_t9152F03D9336BAAFEAF1CCA498C0F156ABD19858 L_5 = V_2;
		ParticleCollisionEvent_t9152F03D9336BAAFEAF1CCA498C0F156ABD19858 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<ParticleCollisionEvent_t9152F03D9336BAAFEAF1CCA498C0F156ABD19858> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisPendingRequestStruct_tD97E2F0E0DAF8AEEC3658FBA80300039C0F54837_m654A3C2868CFA790DCD9B8DCA0C2B79A6A8B04ED_gshared (RuntimeArray* __this, PendingRequestStruct_tD97E2F0E0DAF8AEEC3658FBA80300039C0F54837 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	PendingRequestStruct_tD97E2F0E0DAF8AEEC3658FBA80300039C0F54837 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		PendingRequestStruct_tD97E2F0E0DAF8AEEC3658FBA80300039C0F54837 L_5 = V_2;
		PendingRequestStruct_tD97E2F0E0DAF8AEEC3658FBA80300039C0F54837 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<PendingRequestStruct_tD97E2F0E0DAF8AEEC3658FBA80300039C0F54837> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisPerSkinJobData_t12269B9BCDB1CA26111CF0EC8C1410DEB10863A0_m80D3288F72814957C766994599C21783CA8E77D4_gshared (RuntimeArray* __this, PerSkinJobData_t12269B9BCDB1CA26111CF0EC8C1410DEB10863A0 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	PerSkinJobData_t12269B9BCDB1CA26111CF0EC8C1410DEB10863A0 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		PerSkinJobData_t12269B9BCDB1CA26111CF0EC8C1410DEB10863A0 L_5 = V_2;
		PerSkinJobData_t12269B9BCDB1CA26111CF0EC8C1410DEB10863A0 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<PerSkinJobData_t12269B9BCDB1CA26111CF0EC8C1410DEB10863A0> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisPlane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C_m231E229B4753061B10769EC966D8B59C09087245_gshared (RuntimeArray* __this, Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C L_5 = V_2;
		Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisPlayable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F_m7D40E5FF3D8F6BD5C05872EC075DE69F41B6994F_gshared (RuntimeArray* __this, Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F L_5 = V_2;
		Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisPlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4_m20E6FE80BE3502BA9FBD9BDAB235F88B171FB2F0_gshared (RuntimeArray* __this, PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4 L_5 = V_2;
		PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisPlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F_m419098DE3E19B0E25295AFEF94F42434502A37C3_gshared (RuntimeArray* __this, PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F L_5 = V_2;
		PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisPositionTangentVertex_t2A3AA7C428755E24BA9ECCBD89F67D0828D6555C_m366F41EC08EFFE2794B42F803185554D3AA2D004_gshared (RuntimeArray* __this, PositionTangentVertex_t2A3AA7C428755E24BA9ECCBD89F67D0828D6555C ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	PositionTangentVertex_t2A3AA7C428755E24BA9ECCBD89F67D0828D6555C V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		PositionTangentVertex_t2A3AA7C428755E24BA9ECCBD89F67D0828D6555C L_5 = V_2;
		PositionTangentVertex_t2A3AA7C428755E24BA9ECCBD89F67D0828D6555C L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<PositionTangentVertex_t2A3AA7C428755E24BA9ECCBD89F67D0828D6555C> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisPositionVertex_tE2E9C13E829C47759FB1722B0548D2D8925C4D12_mF0461A3C3A3680267B4D2EC7803A9A7FD92C698C_gshared (RuntimeArray* __this, PositionVertex_tE2E9C13E829C47759FB1722B0548D2D8925C4D12 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	PositionVertex_tE2E9C13E829C47759FB1722B0548D2D8925C4D12 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		PositionVertex_tE2E9C13E829C47759FB1722B0548D2D8925C4D12 L_5 = V_2;
		PositionVertex_tE2E9C13E829C47759FB1722B0548D2D8925C4D12 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<PositionVertex_tE2E9C13E829C47759FB1722B0548D2D8925C4D12> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisProbeVolumeBakingProcessSettings_t1A0C71DD07CFB6660AFC0D3EBF81FA5064CFDAD7_mFD7161FD6DCEC86BB844C0F965709755EA13DA9D_gshared (RuntimeArray* __this, ProbeVolumeBakingProcessSettings_t1A0C71DD07CFB6660AFC0D3EBF81FA5064CFDAD7 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	ProbeVolumeBakingProcessSettings_t1A0C71DD07CFB6660AFC0D3EBF81FA5064CFDAD7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		ProbeVolumeBakingProcessSettings_t1A0C71DD07CFB6660AFC0D3EBF81FA5064CFDAD7 L_5 = V_2;
		ProbeVolumeBakingProcessSettings_t1A0C71DD07CFB6660AFC0D3EBF81FA5064CFDAD7 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<ProbeVolumeBakingProcessSettings_t1A0C71DD07CFB6660AFC0D3EBF81FA5064CFDAD7> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisProcessedProbeData_t81DA0DD14190AF02A979E73590320609D41502F8_m2906DE486E6D4F24E85311DFC97703FABA72F85C_gshared (RuntimeArray* __this, ProcessedProbeData_t81DA0DD14190AF02A979E73590320609D41502F8 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	ProcessedProbeData_t81DA0DD14190AF02A979E73590320609D41502F8 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		ProcessedProbeData_t81DA0DD14190AF02A979E73590320609D41502F8 L_5 = V_2;
		ProcessedProbeData_t81DA0DD14190AF02A979E73590320609D41502F8 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<ProcessedProbeData_t81DA0DD14190AF02A979E73590320609D41502F8> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisPropertyMetadata_tA6CD4455C72B9D65D44FD6EE1581D04BA014C529_mFBCA9487C033606B6863BC5025237DD1A08DF123_gshared (RuntimeArray* __this, PropertyMetadata_tA6CD4455C72B9D65D44FD6EE1581D04BA014C529 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	PropertyMetadata_tA6CD4455C72B9D65D44FD6EE1581D04BA014C529 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		PropertyMetadata_tA6CD4455C72B9D65D44FD6EE1581D04BA014C529 L_5 = V_2;
		PropertyMetadata_tA6CD4455C72B9D65D44FD6EE1581D04BA014C529 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<PropertyMetadata_tA6CD4455C72B9D65D44FD6EE1581D04BA014C529> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisPropertyRef_t6F3DCA5A0DEBB543DAFAE13FB6ED6FBF92F894A7_m9FBD12CA73ED6EB2FC3AB8B6285EA4298F5B914F_gshared (RuntimeArray* __this, PropertyRef_t6F3DCA5A0DEBB543DAFAE13FB6ED6FBF92F894A7 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	PropertyRef_t6F3DCA5A0DEBB543DAFAE13FB6ED6FBF92F894A7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		PropertyRef_t6F3DCA5A0DEBB543DAFAE13FB6ED6FBF92F894A7 L_5 = V_2;
		PropertyRef_t6F3DCA5A0DEBB543DAFAE13FB6ED6FBF92F894A7 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<PropertyRef_t6F3DCA5A0DEBB543DAFAE13FB6ED6FBF92F894A7> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisProposalStruct_tF717CC78D2B24F2F6DDDCD3995B3E204768C3A35_mE91952B2712001BD5A8F31E887DDBC83A49FB468_gshared (RuntimeArray* __this, ProposalStruct_tF717CC78D2B24F2F6DDDCD3995B3E204768C3A35 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	ProposalStruct_tF717CC78D2B24F2F6DDDCD3995B3E204768C3A35 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		ProposalStruct_tF717CC78D2B24F2F6DDDCD3995B3E204768C3A35 L_5 = V_2;
		ProposalStruct_tF717CC78D2B24F2F6DDDCD3995B3E204768C3A35 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<ProposalStruct_tF717CC78D2B24F2F6DDDCD3995B3E204768C3A35> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m3CB4A506B40BCCF27D7462B9878C9275ECA8657E_gshared (RuntimeArray* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5 = V_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = Quaternion_Equals_mCF93B00BA4FCDDE6100918451343DB9A0583A0A0_inline((&___0_item), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0055:
	{
		int32_t L_10 = V_1;
		int32_t L_11 = V_0;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisRangePositionInfo_t27BA7EB1EC12061DD5ACFD24BD71A915D412223F_m9731C3DE8540C6BB886B5AD3BB766D26E7B5E8A6_gshared (RuntimeArray* __this, RangePositionInfo_t27BA7EB1EC12061DD5ACFD24BD71A915D412223F ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	RangePositionInfo_t27BA7EB1EC12061DD5ACFD24BD71A915D412223F V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		RangePositionInfo_t27BA7EB1EC12061DD5ACFD24BD71A915D412223F L_5 = V_2;
		RangePositionInfo_t27BA7EB1EC12061DD5ACFD24BD71A915D412223F L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<RangePositionInfo_t27BA7EB1EC12061DD5ACFD24BD71A915D412223F> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisRayTracingInstanceCullingShaderTagConfig_tFA2FE015BBF1440CB19E44452833532A9614F824_mA743CA5760D32CA01A336AB5FD771126F6FDFC90_gshared (RuntimeArray* __this, RayTracingInstanceCullingShaderTagConfig_tFA2FE015BBF1440CB19E44452833532A9614F824 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	RayTracingInstanceCullingShaderTagConfig_tFA2FE015BBF1440CB19E44452833532A9614F824 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		RayTracingInstanceCullingShaderTagConfig_tFA2FE015BBF1440CB19E44452833532A9614F824 L_5 = V_2;
		RayTracingInstanceCullingShaderTagConfig_tFA2FE015BBF1440CB19E44452833532A9614F824 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<RayTracingInstanceCullingShaderTagConfig_tFA2FE015BBF1440CB19E44452833532A9614F824> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisRayTracingInstanceCullingTest_t6DA9023466CE29C537155A919FEDD9A95D8D5A21_mCDC91F31AB2B27CE5D8AA8BC0F4D715A422A1CEB_gshared (RuntimeArray* __this, RayTracingInstanceCullingTest_t6DA9023466CE29C537155A919FEDD9A95D8D5A21 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	RayTracingInstanceCullingTest_t6DA9023466CE29C537155A919FEDD9A95D8D5A21 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		RayTracingInstanceCullingTest_t6DA9023466CE29C537155A919FEDD9A95D8D5A21 L_5 = V_2;
		RayTracingInstanceCullingTest_t6DA9023466CE29C537155A919FEDD9A95D8D5A21 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<RayTracingInstanceCullingTest_t6DA9023466CE29C537155A919FEDD9A95D8D5A21> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisRayTracingInstanceMaterialCRC_tD542B9A5617C59DDA00598FD789005C623D87931_m09B6E2EDC8195FECC998CAE0426B0492FC4287DC_gshared (RuntimeArray* __this, RayTracingInstanceMaterialCRC_tD542B9A5617C59DDA00598FD789005C623D87931 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	RayTracingInstanceMaterialCRC_tD542B9A5617C59DDA00598FD789005C623D87931 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		RayTracingInstanceMaterialCRC_tD542B9A5617C59DDA00598FD789005C623D87931 L_5 = V_2;
		RayTracingInstanceMaterialCRC_tD542B9A5617C59DDA00598FD789005C623D87931 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<RayTracingInstanceMaterialCRC_tD542B9A5617C59DDA00598FD789005C623D87931> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisRaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5_m8F0732060388F29DADC9AB53DB7ADE537EDC2623_gshared (RuntimeArray* __this, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 L_5 = V_2;
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisRaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA_mCA021E579A5B7D10742C7AF56C6DDFDB63F33C04_gshared (RuntimeArray* __this, RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA L_5 = V_2;
		RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisRaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_mFA91C9D3BC8CCBBB5F44094040F91E8182C5D4EA_gshared (RuntimeArray* __this, RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 L_5 = V_2;
		RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisReadStackFrame_t8DABE60E6F912C1C19F02BE56C9BC7CA062EE20A_mB41792BBA3B167EE14B2324E12C08B50EB088DA9_gshared (RuntimeArray* __this, ReadStackFrame_t8DABE60E6F912C1C19F02BE56C9BC7CA062EE20A ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	ReadStackFrame_t8DABE60E6F912C1C19F02BE56C9BC7CA062EE20A V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		ReadStackFrame_t8DABE60E6F912C1C19F02BE56C9BC7CA062EE20A L_5 = V_2;
		ReadStackFrame_t8DABE60E6F912C1C19F02BE56C9BC7CA062EE20A L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<ReadStackFrame_t8DABE60E6F912C1C19F02BE56C9BC7CA062EE20A> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisRect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_mC1A918BF371A87F492DE40D6F89763ECF94FECB7_gshared (RuntimeArray* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_5 = V_2;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = Rect_Equals_mD7EB2046512E4A46524A7ED929F1C38A32C408F8_inline((&___0_item), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0055:
	{
		int32_t L_10 = V_1;
		int32_t L_11 = V_0;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisRectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8_mC50FE226CC08982C597571FF97D64B4037F9EB06_gshared (RuntimeArray* __this, RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 L_5 = V_2;
		RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisReferenceEqualsWrapper_tC5C782AAD0F1CA019DF6257DAA92C92F62DA9C94_m1994A1706F258DEFAA42550257507019DF4B58ED_gshared (RuntimeArray* __this, ReferenceEqualsWrapper_tC5C782AAD0F1CA019DF6257DAA92C92F62DA9C94 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	ReferenceEqualsWrapper_tC5C782AAD0F1CA019DF6257DAA92C92F62DA9C94 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		ReferenceEqualsWrapper_tC5C782AAD0F1CA019DF6257DAA92C92F62DA9C94 L_5 = V_2;
		ReferenceEqualsWrapper_tC5C782AAD0F1CA019DF6257DAA92C92F62DA9C94 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = ReferenceEqualsWrapper_Equals_m8031E33E7452D51C78A060DDEC5C9EBC404549BA((&___0_item), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0055:
	{
		int32_t L_10 = V_1;
		int32_t L_11 = V_0;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisRenderInstancedDataLayout_t06AF33510AC89DBD09A3A161FF809EDFAB30EC7A_mB8D6D7C4BECE2E4F78551E81A3A6E08343030767_gshared (RuntimeArray* __this, RenderInstancedDataLayout_t06AF33510AC89DBD09A3A161FF809EDFAB30EC7A ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	RenderInstancedDataLayout_t06AF33510AC89DBD09A3A161FF809EDFAB30EC7A V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		RenderInstancedDataLayout_t06AF33510AC89DBD09A3A161FF809EDFAB30EC7A L_5 = V_2;
		RenderInstancedDataLayout_t06AF33510AC89DBD09A3A161FF809EDFAB30EC7A L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<RenderInstancedDataLayout_t06AF33510AC89DBD09A3A161FF809EDFAB30EC7A> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisRenderStateBlock_tFC570EF2C8F3A817FECD578E385D18CEEEA06733_m8ACE83869D94A11693CC7D38D1460915A1DFE86C_gshared (RuntimeArray* __this, RenderStateBlock_tFC570EF2C8F3A817FECD578E385D18CEEEA06733 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	RenderStateBlock_tFC570EF2C8F3A817FECD578E385D18CEEEA06733 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		RenderStateBlock_tFC570EF2C8F3A817FECD578E385D18CEEEA06733 L_5 = V_2;
		RenderStateBlock_tFC570EF2C8F3A817FECD578E385D18CEEEA06733 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = RenderStateBlock_Equals_mF2FD2D7C1C6EA07116947C3BC730E741A4054EE9((&___0_item), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0055:
	{
		int32_t L_10 = V_1;
		int32_t L_11 = V_0;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisRenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B_m6EFFD87701C0FE7B54D967C824FFBFB3DF01441A_gshared (RuntimeArray* __this, RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B L_5 = V_2;
		RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = RenderTargetIdentifier_Equals_m07E36F91E8966A0E3882EF168F1AE3656BE48E9A((&___0_item), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0055:
	{
		int32_t L_10 = V_1;
		int32_t L_11 = V_0;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisRendererList_t608CE60421616EF4211F5B8AC62E3C36D4BDDF85_mAF9ED3BCFB66A10A497D7169AD0E2E55628582BC_gshared (RuntimeArray* __this, RendererList_t608CE60421616EF4211F5B8AC62E3C36D4BDDF85 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	RendererList_t608CE60421616EF4211F5B8AC62E3C36D4BDDF85 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		RendererList_t608CE60421616EF4211F5B8AC62E3C36D4BDDF85 L_5 = V_2;
		RendererList_t608CE60421616EF4211F5B8AC62E3C36D4BDDF85 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<RendererList_t608CE60421616EF4211F5B8AC62E3C36D4BDDF85> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisRendererListHandle_t21AFDDE69B0048546497B890088B880F8080C62D_m60A115E22989D3FC72D2C0C5F225C803E20CC5E3_gshared (RuntimeArray* __this, RendererListHandle_t21AFDDE69B0048546497B890088B880F8080C62D ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	RendererListHandle_t21AFDDE69B0048546497B890088B880F8080C62D V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		RendererListHandle_t21AFDDE69B0048546497B890088B880F8080C62D L_5 = V_2;
		RendererListHandle_t21AFDDE69B0048546497B890088B880F8080C62D L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<RendererListHandle_t21AFDDE69B0048546497B890088B880F8080C62D> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisRendererListResource_t9B978DD85ADC467D7E4DB42EF603B7C49918BF49_mA043239F23EB887F17CB7015B8C764C7584F6677_gshared (RuntimeArray* __this, RendererListResource_t9B978DD85ADC467D7E4DB42EF603B7C49918BF49 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	RendererListResource_t9B978DD85ADC467D7E4DB42EF603B7C49918BF49 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		RendererListResource_t9B978DD85ADC467D7E4DB42EF603B7C49918BF49 L_5 = V_2;
		RendererListResource_t9B978DD85ADC467D7E4DB42EF603B7C49918BF49 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<RendererListResource_t9B978DD85ADC467D7E4DB42EF603B7C49918BF49> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisRequestEventInfo_t40A34279BA8F8E88971CB743BAB41959EE134123_m1B546E4F3959FE944CF5442D52745906F0916745_gshared (RuntimeArray* __this, RequestEventInfo_t40A34279BA8F8E88971CB743BAB41959EE134123 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	RequestEventInfo_t40A34279BA8F8E88971CB743BAB41959EE134123 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		RequestEventInfo_t40A34279BA8F8E88971CB743BAB41959EE134123 L_5 = V_2;
		RequestEventInfo_t40A34279BA8F8E88971CB743BAB41959EE134123 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<RequestEventInfo_t40A34279BA8F8E88971CB743BAB41959EE134123> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisResourceHandle_t0B9B0555328A08152F1EDA2BE4024446D670531A_m4EA1071F6CD1F4A91F568E9BDDAAFC638D9F5C66_gshared (RuntimeArray* __this, ResourceHandle_t0B9B0555328A08152F1EDA2BE4024446D670531A ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	ResourceHandle_t0B9B0555328A08152F1EDA2BE4024446D670531A V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		ResourceHandle_t0B9B0555328A08152F1EDA2BE4024446D670531A L_5 = V_2;
		ResourceHandle_t0B9B0555328A08152F1EDA2BE4024446D670531A L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<ResourceHandle_t0B9B0555328A08152F1EDA2BE4024446D670531A> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122_m776D1B79E6A5389B97BDCB7B81E59A24F6E21A20_gshared (RuntimeArray* __this, ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122 L_5 = V_2;
		ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisRichTextTagAttribute_t1BB51A8FD6C14746D177D8E84E281A4FD4A720E0_m582AD28CA00172A4ADE2D6DCA911E1CFB500144C_gshared (RuntimeArray* __this, RichTextTagAttribute_t1BB51A8FD6C14746D177D8E84E281A4FD4A720E0 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	RichTextTagAttribute_t1BB51A8FD6C14746D177D8E84E281A4FD4A720E0 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		RichTextTagAttribute_t1BB51A8FD6C14746D177D8E84E281A4FD4A720E0 L_5 = V_2;
		RichTextTagAttribute_t1BB51A8FD6C14746D177D8E84E281A4FD4A720E0 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<RichTextTagAttribute_t1BB51A8FD6C14746D177D8E84E281A4FD4A720E0> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisRichTextTagAttribute_t0600951F833208392F1D8EE3E6A58AD5C797F9DA_mE7E1C39A705CECE8E32EC17EB6EDD61EAB6ED197_gshared (RuntimeArray* __this, RichTextTagAttribute_t0600951F833208392F1D8EE3E6A58AD5C797F9DA ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	RichTextTagAttribute_t0600951F833208392F1D8EE3E6A58AD5C797F9DA V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		RichTextTagAttribute_t0600951F833208392F1D8EE3E6A58AD5C797F9DA L_5 = V_2;
		RichTextTagAttribute_t0600951F833208392F1D8EE3E6A58AD5C797F9DA L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<RichTextTagAttribute_t0600951F833208392F1D8EE3E6A58AD5C797F9DA> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisRotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7_mC0DD18A608B80CA886B259AC90CB7800DBB70D7B_gshared (RuntimeArray* __this, Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7 L_5 = V_2;
		Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = Rotate_Equals_m49F7E80F31B6317836CA1628FAA1D2194B5B6165((&___0_item), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0055:
	{
		int32_t L_10 = V_1;
		int32_t L_11 = V_0;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisRuleMatcher_t327CFEB02C81AA20E639DE949DCBBAB5E92FF28E_m3B275CB579B9677C77EA61A57E694B097BF94EA5_gshared (RuntimeArray* __this, RuleMatcher_t327CFEB02C81AA20E639DE949DCBBAB5E92FF28E ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	RuleMatcher_t327CFEB02C81AA20E639DE949DCBBAB5E92FF28E V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		RuleMatcher_t327CFEB02C81AA20E639DE949DCBBAB5E92FF28E L_5 = V_2;
		RuleMatcher_t327CFEB02C81AA20E639DE949DCBBAB5E92FF28E L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<RuleMatcher_t327CFEB02C81AA20E639DE949DCBBAB5E92FF28E> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisRuntimeLabel_tD233E2C3F1E1A1877FFE3E9DFB3A69C57D40A548_m1792CBBB7CB4E0349BB8934A9DE43579480A32C1_gshared (RuntimeArray* __this, RuntimeLabel_tD233E2C3F1E1A1877FFE3E9DFB3A69C57D40A548 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	RuntimeLabel_tD233E2C3F1E1A1877FFE3E9DFB3A69C57D40A548 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		RuntimeLabel_tD233E2C3F1E1A1877FFE3E9DFB3A69C57D40A548 L_5 = V_2;
		RuntimeLabel_tD233E2C3F1E1A1877FFE3E9DFB3A69C57D40A548 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<RuntimeLabel_tD233E2C3F1E1A1877FFE3E9DFB3A69C57D40A548> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m6888F664F26CF829368E79565702880BCDA6747E_gshared (RuntimeArray* __this, int8_t ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int8_t V_2 = 0x0;
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		int8_t L_5 = V_2;
		int8_t L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = SByte_Equals_m2436A58AA51169044BB6FAB4F3924C06037C34EF((&___0_item), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0055:
	{
		int32_t L_10 = V_1;
		int32_t L_11 = V_0;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisSByteEnum_t0782AA0EFC5D1042A39675F37D7DD7C098781DD9_mB11897F84C48269D04127C4C897019B55294CB28_gshared (RuntimeArray* __this, int8_t ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int8_t V_2 = 0;
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		int8_t L_5 = V_2;
		int8_t L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<int8_t> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = Enum_Equals_m96B1058BA6312E23F31A5FBF594E96EB692EAF4E((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisSFiniteLightBound_t0CD72B06261C3F1BE48899DCFDD5CB705620D2B2_mAB3A4A7E55CBA7E9A6FD863EC1E1BA4017E06708_gshared (RuntimeArray* __this, SFiniteLightBound_t0CD72B06261C3F1BE48899DCFDD5CB705620D2B2 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	SFiniteLightBound_t0CD72B06261C3F1BE48899DCFDD5CB705620D2B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		SFiniteLightBound_t0CD72B06261C3F1BE48899DCFDD5CB705620D2B2 L_5 = V_2;
		SFiniteLightBound_t0CD72B06261C3F1BE48899DCFDD5CB705620D2B2 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<SFiniteLightBound_t0CD72B06261C3F1BE48899DCFDD5CB705620D2B2> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisScalableImage_t64F0F6F75D1099EF5D595E70CA1A2A7B9914E80F_m06A548E3BEE775ED9A328D93715329829B89573A_gshared (RuntimeArray* __this, ScalableImage_t64F0F6F75D1099EF5D595E70CA1A2A7B9914E80F ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	ScalableImage_t64F0F6F75D1099EF5D595E70CA1A2A7B9914E80F V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		ScalableImage_t64F0F6F75D1099EF5D595E70CA1A2A7B9914E80F L_5 = V_2;
		ScalableImage_t64F0F6F75D1099EF5D595E70CA1A2A7B9914E80F L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<ScalableImage_t64F0F6F75D1099EF5D595E70CA1A2A7B9914E80F> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisScalableSettingSchemaId_t52565FBE2716C21A2C559CD569F2AD854E8DC9E9_m38EE1DC168D067D43F6673F886318358CC959F7D_gshared (RuntimeArray* __this, ScalableSettingSchemaId_t52565FBE2716C21A2C559CD569F2AD854E8DC9E9 ___0_item, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScalableSettingSchemaId_t52565FBE2716C21A2C559CD569F2AD854E8DC9E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	ScalableSettingSchemaId_t52565FBE2716C21A2C559CD569F2AD854E8DC9E9 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		ScalableSettingSchemaId_t52565FBE2716C21A2C559CD569F2AD854E8DC9E9 L_5 = V_2;
		ScalableSettingSchemaId_t52565FBE2716C21A2C559CD569F2AD854E8DC9E9 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		il2cpp_codegen_runtime_class_init_inline(ScalableSettingSchemaId_t52565FBE2716C21A2C559CD569F2AD854E8DC9E9_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = ScalableSettingSchemaId_Equals_m67F45A578FD42C6467DEFB2D8FA5939A10A3D656((&___0_item), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0055:
	{
		int32_t L_10 = V_1;
		int32_t L_11 = V_0;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisScale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7_mD1FDC4506669DAF01BF71E6CECF4A6E5BDEEF31A_gshared (RuntimeArray* __this, Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7 L_5 = V_2;
		Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = Scale_Equals_mBC77FF15A4E956C17CECA719B2BF64C0F38B24FA((&___0_item), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0055:
	{
		int32_t L_10 = V_1;
		int32_t L_11 = V_0;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisScene_tA1DC762B79745EB5140F054C884855B922318356_mD977C59F62D51E2530FD56AA6647E25040B620B7_gshared (RuntimeArray* __this, Scene_tA1DC762B79745EB5140F054C884855B922318356 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Scene_tA1DC762B79745EB5140F054C884855B922318356 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_5 = V_2;
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = Scene_Equals_mB973481492F291BF8EAF1AD66B9F7FA3ACF3928D((&___0_item), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0055:
	{
		int32_t L_10 = V_1;
		int32_t L_11 = V_0;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisSecondarySpriteTexture_tAB48BE37F20C61C85B24FB2E38F751082AF1A07B_m9CA071BE298E2F86C3EB48AC82DBF4F8B7227F45_gshared (RuntimeArray* __this, SecondarySpriteTexture_tAB48BE37F20C61C85B24FB2E38F751082AF1A07B ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	SecondarySpriteTexture_tAB48BE37F20C61C85B24FB2E38F751082AF1A07B V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		SecondarySpriteTexture_tAB48BE37F20C61C85B24FB2E38F751082AF1A07B L_5 = V_2;
		SecondarySpriteTexture_tAB48BE37F20C61C85B24FB2E38F751082AF1A07B L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<SecondarySpriteTexture_tAB48BE37F20C61C85B24FB2E38F751082AF1A07B> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisSelectorMatchRecord_t1E93CDB54312CFB4A67768BB25ABB9AFB31BC5D7_m6121539D22A6148DEB36407BDC3A9EC5C3D706F5_gshared (RuntimeArray* __this, SelectorMatchRecord_t1E93CDB54312CFB4A67768BB25ABB9AFB31BC5D7 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	SelectorMatchRecord_t1E93CDB54312CFB4A67768BB25ABB9AFB31BC5D7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		SelectorMatchRecord_t1E93CDB54312CFB4A67768BB25ABB9AFB31BC5D7 L_5 = V_2;
		SelectorMatchRecord_t1E93CDB54312CFB4A67768BB25ABB9AFB31BC5D7 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<SelectorMatchRecord_t1E93CDB54312CFB4A67768BB25ABB9AFB31BC5D7> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisSessionStruct_tB44158BBCD00F6106D012CFF575CBA54FC84030E_mE15B3AD44E87C7FF066A1B81AE47D84858871431_gshared (RuntimeArray* __this, SessionStruct_tB44158BBCD00F6106D012CFF575CBA54FC84030E ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	SessionStruct_tB44158BBCD00F6106D012CFF575CBA54FC84030E V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		SessionStruct_tB44158BBCD00F6106D012CFF575CBA54FC84030E L_5 = V_2;
		SessionStruct_tB44158BBCD00F6106D012CFF575CBA54FC84030E L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<SessionStruct_tB44158BBCD00F6106D012CFF575CBA54FC84030E> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisShaderKeyword_t683126BB2B2337DB41954B0FE0DA7EBAA7028661_m69B4D908F8A3DD96DAA76CCEC7ED223DC2D85CA4_gshared (RuntimeArray* __this, ShaderKeyword_t683126BB2B2337DB41954B0FE0DA7EBAA7028661 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	ShaderKeyword_t683126BB2B2337DB41954B0FE0DA7EBAA7028661 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		ShaderKeyword_t683126BB2B2337DB41954B0FE0DA7EBAA7028661 L_5 = V_2;
		ShaderKeyword_t683126BB2B2337DB41954B0FE0DA7EBAA7028661 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<ShaderKeyword_t683126BB2B2337DB41954B0FE0DA7EBAA7028661> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0_mD83FDC9A09181346958F7358855E31DC1FA124B5_gshared (RuntimeArray* __this, ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0 L_5 = V_2;
		ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = ShaderTagId_Equals_m02826F7AFC63AA3AE5DB14F7A891F8F173FD9A33((&___0_item), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0055:
	{
		int32_t L_10 = V_1;
		int32_t L_11 = V_0;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisShaderVariablesAmbientOcclusion_tA90F627D9D2AB69DCC7AB6F316725DC0A0D581FB_mB411DD69410CCB457C0E0A27F029F38BE7C7144F_gshared (RuntimeArray* __this, ShaderVariablesAmbientOcclusion_tA90F627D9D2AB69DCC7AB6F316725DC0A0D581FB ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	ShaderVariablesAmbientOcclusion_tA90F627D9D2AB69DCC7AB6F316725DC0A0D581FB V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		ShaderVariablesAmbientOcclusion_tA90F627D9D2AB69DCC7AB6F316725DC0A0D581FB L_5 = V_2;
		ShaderVariablesAmbientOcclusion_tA90F627D9D2AB69DCC7AB6F316725DC0A0D581FB L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<ShaderVariablesAmbientOcclusion_tA90F627D9D2AB69DCC7AB6F316725DC0A0D581FB> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisShaderVariablesBilateralUpsample_t3B0C434F9A93654059B6D240FD1923FBF10A8CFA_mCC3BD350026E7E9334635E08E050FBF497A3F8C5_gshared (RuntimeArray* __this, ShaderVariablesBilateralUpsample_t3B0C434F9A93654059B6D240FD1923FBF10A8CFA ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	ShaderVariablesBilateralUpsample_t3B0C434F9A93654059B6D240FD1923FBF10A8CFA V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		ShaderVariablesBilateralUpsample_t3B0C434F9A93654059B6D240FD1923FBF10A8CFA L_5 = V_2;
		ShaderVariablesBilateralUpsample_t3B0C434F9A93654059B6D240FD1923FBF10A8CFA L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<ShaderVariablesBilateralUpsample_t3B0C434F9A93654059B6D240FD1923FBF10A8CFA> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisShaderVariablesClouds_tBB238E8673196AFA8A7F9389ADAE8D2F2FCF3C31_mB1271E44A6316CF79C5C81A2094EC042963ADAA8_gshared (RuntimeArray* __this, ShaderVariablesClouds_tBB238E8673196AFA8A7F9389ADAE8D2F2FCF3C31 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	ShaderVariablesClouds_tBB238E8673196AFA8A7F9389ADAE8D2F2FCF3C31 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		ShaderVariablesClouds_tBB238E8673196AFA8A7F9389ADAE8D2F2FCF3C31 L_5 = V_2;
		ShaderVariablesClouds_tBB238E8673196AFA8A7F9389ADAE8D2F2FCF3C31 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<ShaderVariablesClouds_tBB238E8673196AFA8A7F9389ADAE8D2F2FCF3C31> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisShaderVariablesDebugDisplay_t8495B115F456DFCE8FA218AAC745328EC12D4A93_m4674700D519AA47196106F77B15B2C032F04E2A3_gshared (RuntimeArray* __this, ShaderVariablesDebugDisplay_t8495B115F456DFCE8FA218AAC745328EC12D4A93 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	ShaderVariablesDebugDisplay_t8495B115F456DFCE8FA218AAC745328EC12D4A93 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		ShaderVariablesDebugDisplay_t8495B115F456DFCE8FA218AAC745328EC12D4A93 L_5 = V_2;
		ShaderVariablesDebugDisplay_t8495B115F456DFCE8FA218AAC745328EC12D4A93 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<ShaderVariablesDebugDisplay_t8495B115F456DFCE8FA218AAC745328EC12D4A93> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisShaderVariablesGlobal_t1ED96D9F204BB3577D505C7F1C845726B1009540_m454C601AB3B6E5B264404643F6B59C1DBBF718DC_gshared (RuntimeArray* __this, ShaderVariablesGlobal_t1ED96D9F204BB3577D505C7F1C845726B1009540 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	ShaderVariablesGlobal_t1ED96D9F204BB3577D505C7F1C845726B1009540 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		ShaderVariablesGlobal_t1ED96D9F204BB3577D505C7F1C845726B1009540 L_5 = V_2;
		ShaderVariablesGlobal_t1ED96D9F204BB3577D505C7F1C845726B1009540 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<ShaderVariablesGlobal_t1ED96D9F204BB3577D505C7F1C845726B1009540> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisShaderVariablesLightList_t628A0287D1F14C61E8F9370F92E1AE1F2F949118_m1BBC9AFD50392C5C711FFEC5ADF41D562AAD5766_gshared (RuntimeArray* __this, ShaderVariablesLightList_t628A0287D1F14C61E8F9370F92E1AE1F2F949118 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	ShaderVariablesLightList_t628A0287D1F14C61E8F9370F92E1AE1F2F949118 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		ShaderVariablesLightList_t628A0287D1F14C61E8F9370F92E1AE1F2F949118 L_5 = V_2;
		ShaderVariablesLightList_t628A0287D1F14C61E8F9370F92E1AE1F2F949118 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<ShaderVariablesLightList_t628A0287D1F14C61E8F9370F92E1AE1F2F949118> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisShaderVariablesPhysicallyBasedSky_tDAB44A93AFD7EC0709C979FC7D3FF963898D0961_mBF2F9CFEAB70ADACFA2A0725A9067A83C434DD7D_gshared (RuntimeArray* __this, ShaderVariablesPhysicallyBasedSky_tDAB44A93AFD7EC0709C979FC7D3FF963898D0961 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	ShaderVariablesPhysicallyBasedSky_tDAB44A93AFD7EC0709C979FC7D3FF963898D0961 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		ShaderVariablesPhysicallyBasedSky_tDAB44A93AFD7EC0709C979FC7D3FF963898D0961 L_5 = V_2;
		ShaderVariablesPhysicallyBasedSky_tDAB44A93AFD7EC0709C979FC7D3FF963898D0961 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<ShaderVariablesPhysicallyBasedSky_tDAB44A93AFD7EC0709C979FC7D3FF963898D0961> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisShaderVariablesProbeVolumes_t93D502CF0A3275CEBA1EDF0E6DB84816618662D4_m709E507AC006538F1EC4017C349788205C8E17E1_gshared (RuntimeArray* __this, ShaderVariablesProbeVolumes_t93D502CF0A3275CEBA1EDF0E6DB84816618662D4 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	ShaderVariablesProbeVolumes_t93D502CF0A3275CEBA1EDF0E6DB84816618662D4 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		ShaderVariablesProbeVolumes_t93D502CF0A3275CEBA1EDF0E6DB84816618662D4 L_5 = V_2;
		ShaderVariablesProbeVolumes_t93D502CF0A3275CEBA1EDF0E6DB84816618662D4 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<ShaderVariablesProbeVolumes_t93D502CF0A3275CEBA1EDF0E6DB84816618662D4> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisShaderVariablesRaytracing_tCD939378DEB0EE78E6BD4CD460734BE7E21CDAE4_m9B98B0ECD666855AE8DFE9B2BF39A278030F31E9_gshared (RuntimeArray* __this, ShaderVariablesRaytracing_tCD939378DEB0EE78E6BD4CD460734BE7E21CDAE4 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	ShaderVariablesRaytracing_tCD939378DEB0EE78E6BD4CD460734BE7E21CDAE4 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		ShaderVariablesRaytracing_tCD939378DEB0EE78E6BD4CD460734BE7E21CDAE4 L_5 = V_2;
		ShaderVariablesRaytracing_tCD939378DEB0EE78E6BD4CD460734BE7E21CDAE4 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<ShaderVariablesRaytracing_tCD939378DEB0EE78E6BD4CD460734BE7E21CDAE4> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisShaderVariablesRaytracingLightLoop_tE3916615DE581851EF9738B5A1D99275417E21B7_m36157F189426094CEF58AF1B41B73BDA67EA5520_gshared (RuntimeArray* __this, ShaderVariablesRaytracingLightLoop_tE3916615DE581851EF9738B5A1D99275417E21B7 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	ShaderVariablesRaytracingLightLoop_tE3916615DE581851EF9738B5A1D99275417E21B7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		ShaderVariablesRaytracingLightLoop_tE3916615DE581851EF9738B5A1D99275417E21B7 L_5 = V_2;
		ShaderVariablesRaytracingLightLoop_tE3916615DE581851EF9738B5A1D99275417E21B7 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<ShaderVariablesRaytracingLightLoop_tE3916615DE581851EF9738B5A1D99275417E21B7> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisShaderVariablesScreenSpaceReflection_tA0A0C725A618D20BEBA8B0ADC06643C85D9F1DA5_m003C02B95C8C3A4EA717FACEF0D13FCD4CFF4053_gshared (RuntimeArray* __this, ShaderVariablesScreenSpaceReflection_tA0A0C725A618D20BEBA8B0ADC06643C85D9F1DA5 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	ShaderVariablesScreenSpaceReflection_tA0A0C725A618D20BEBA8B0ADC06643C85D9F1DA5 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		ShaderVariablesScreenSpaceReflection_tA0A0C725A618D20BEBA8B0ADC06643C85D9F1DA5 L_5 = V_2;
		ShaderVariablesScreenSpaceReflection_tA0A0C725A618D20BEBA8B0ADC06643C85D9F1DA5 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<ShaderVariablesScreenSpaceReflection_tA0A0C725A618D20BEBA8B0ADC06643C85D9F1DA5> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisShaderVariablesUnderWater_tD2B3C822909C1ED171C6E0F4F1D61BD39319A1DD_mF62F5EE2117E3A2D47D52D69E0CB09BB0DFEB311_gshared (RuntimeArray* __this, ShaderVariablesUnderWater_tD2B3C822909C1ED171C6E0F4F1D61BD39319A1DD ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	ShaderVariablesUnderWater_tD2B3C822909C1ED171C6E0F4F1D61BD39319A1DD V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		ShaderVariablesUnderWater_tD2B3C822909C1ED171C6E0F4F1D61BD39319A1DD L_5 = V_2;
		ShaderVariablesUnderWater_tD2B3C822909C1ED171C6E0F4F1D61BD39319A1DD L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<ShaderVariablesUnderWater_tD2B3C822909C1ED171C6E0F4F1D61BD39319A1DD> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisShaderVariablesVolumetric_t8D5D8F4ED54979AF40EDF95C258E731EDEC86931_mEE5FAB683DD8944C27DCCF6C5731B9D8C517AA5B_gshared (RuntimeArray* __this, ShaderVariablesVolumetric_t8D5D8F4ED54979AF40EDF95C258E731EDEC86931 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	ShaderVariablesVolumetric_t8D5D8F4ED54979AF40EDF95C258E731EDEC86931 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		ShaderVariablesVolumetric_t8D5D8F4ED54979AF40EDF95C258E731EDEC86931 L_5 = V_2;
		ShaderVariablesVolumetric_t8D5D8F4ED54979AF40EDF95C258E731EDEC86931 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<ShaderVariablesVolumetric_t8D5D8F4ED54979AF40EDF95C258E731EDEC86931> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisShaderVariablesWater_t07049694F97712589E44B8B54D3E65B949DF4620_m3EC560F70C430FFC20F166422C6E1FC903BA9421_gshared (RuntimeArray* __this, ShaderVariablesWater_t07049694F97712589E44B8B54D3E65B949DF4620 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	ShaderVariablesWater_t07049694F97712589E44B8B54D3E65B949DF4620 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		ShaderVariablesWater_t07049694F97712589E44B8B54D3E65B949DF4620 L_5 = V_2;
		ShaderVariablesWater_t07049694F97712589E44B8B54D3E65B949DF4620 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<ShaderVariablesWater_t07049694F97712589E44B8B54D3E65B949DF4620> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisShaderVariablesWaterRendering_t7387B4D50AD04EA24E1F2EDE74316D8BABA3FF18_m383BA190413215A25D383A5E05DED966A45FD3A3_gshared (RuntimeArray* __this, ShaderVariablesWaterRendering_t7387B4D50AD04EA24E1F2EDE74316D8BABA3FF18 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	ShaderVariablesWaterRendering_t7387B4D50AD04EA24E1F2EDE74316D8BABA3FF18 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		ShaderVariablesWaterRendering_t7387B4D50AD04EA24E1F2EDE74316D8BABA3FF18 L_5 = V_2;
		ShaderVariablesWaterRendering_t7387B4D50AD04EA24E1F2EDE74316D8BABA3FF18 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<ShaderVariablesWaterRendering_t7387B4D50AD04EA24E1F2EDE74316D8BABA3FF18> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisShaderVariablesXR_t80A2FFAE6813A890710DFB5F6FC07A6BB505ADE1_m734769C9F17A1EA756942F3F874EB8F3CAEAF53C_gshared (RuntimeArray* __this, ShaderVariablesXR_t80A2FFAE6813A890710DFB5F6FC07A6BB505ADE1 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	ShaderVariablesXR_t80A2FFAE6813A890710DFB5F6FC07A6BB505ADE1 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		ShaderVariablesXR_t80A2FFAE6813A890710DFB5F6FC07A6BB505ADE1 L_5 = V_2;
		ShaderVariablesXR_t80A2FFAE6813A890710DFB5F6FC07A6BB505ADE1 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<ShaderVariablesXR_t80A2FFAE6813A890710DFB5F6FC07A6BB505ADE1> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisShadowSliceData_t1BCFEDC63BECA994949FE1F4245CEE930EE69E20_m425CE0600A425E2E8AC80D8A78156E829FA94B0F_gshared (RuntimeArray* __this, ShadowSliceData_t1BCFEDC63BECA994949FE1F4245CEE930EE69E20 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	ShadowSliceData_t1BCFEDC63BECA994949FE1F4245CEE930EE69E20 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		ShadowSliceData_t1BCFEDC63BECA994949FE1F4245CEE930EE69E20 L_5 = V_2;
		ShadowSliceData_t1BCFEDC63BECA994949FE1F4245CEE930EE69E20 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<ShadowSliceData_t1BCFEDC63BECA994949FE1F4245CEE930EE69E20> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisSignerWithPermissions_tC2BFC110BE8323ADD92D8C3C763C87A44FF6733D_m14DBB343FF7DAC55FD2B1CCC296A718C5C383D51_gshared (RuntimeArray* __this, SignerWithPermissions_tC2BFC110BE8323ADD92D8C3C763C87A44FF6733D ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	SignerWithPermissions_tC2BFC110BE8323ADD92D8C3C763C87A44FF6733D V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		SignerWithPermissions_tC2BFC110BE8323ADD92D8C3C763C87A44FF6733D L_5 = V_2;
		SignerWithPermissions_tC2BFC110BE8323ADD92D8C3C763C87A44FF6733D L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<SignerWithPermissions_tC2BFC110BE8323ADD92D8C3C763C87A44FF6733D> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m384621DFFAC2C672E33EB1CEB91541B6BB9B1544_gshared (RuntimeArray* __this, float ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		float L_5 = V_2;
		float L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = Single_Equals_mC2B8FFE9D39B98FA2108771CCAFEC580873D054F((&___0_item), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0055:
	{
		int32_t L_10 = V_1;
		int32_t L_11 = V_0;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisSingleQuery_t42035514AA7B5CC3BAAA8A72C79E9D66C6E0D8F0_m4B3601E2C94F136FEA4826422B207D06F3FAF600_gshared (RuntimeArray* __this, SingleQuery_t42035514AA7B5CC3BAAA8A72C79E9D66C6E0D8F0 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	SingleQuery_t42035514AA7B5CC3BAAA8A72C79E9D66C6E0D8F0 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		SingleQuery_t42035514AA7B5CC3BAAA8A72C79E9D66C6E0D8F0 L_5 = V_2;
		SingleQuery_t42035514AA7B5CC3BAAA8A72C79E9D66C6E0D8F0 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<SingleQuery_t42035514AA7B5CC3BAAA8A72C79E9D66C6E0D8F0> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisSkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126_m027FFA501ABC101495A75CD87B87707E26F129BF_gshared (RuntimeArray* __this, SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126 L_5 = V_2;
		SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisSortingLayer_tB4F4D4E2CE652DB0881CDAB9E329DE9833C2B9C3_m3A0EADA21938C9946536F4F736698200DEA44A30_gshared (RuntimeArray* __this, SortingLayer_tB4F4D4E2CE652DB0881CDAB9E329DE9833C2B9C3 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	SortingLayer_tB4F4D4E2CE652DB0881CDAB9E329DE9833C2B9C3 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		SortingLayer_tB4F4D4E2CE652DB0881CDAB9E329DE9833C2B9C3 L_5 = V_2;
		SortingLayer_tB4F4D4E2CE652DB0881CDAB9E329DE9833C2B9C3 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<SortingLayer_tB4F4D4E2CE652DB0881CDAB9E329DE9833C2B9C3> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisSplineKnotIndex_t534896C5AC577CB9B0E1D694808A2491D2EEE38F_mA447EB0AD6DE966F1BD42ADA33B0349BDC5FEBA2_gshared (RuntimeArray* __this, SplineKnotIndex_t534896C5AC577CB9B0E1D694808A2491D2EEE38F ___0_item, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SplineKnotIndex_t534896C5AC577CB9B0E1D694808A2491D2EEE38F_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	SplineKnotIndex_t534896C5AC577CB9B0E1D694808A2491D2EEE38F V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		SplineKnotIndex_t534896C5AC577CB9B0E1D694808A2491D2EEE38F L_5 = V_2;
		SplineKnotIndex_t534896C5AC577CB9B0E1D694808A2491D2EEE38F L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		il2cpp_codegen_runtime_class_init_inline(SplineKnotIndex_t534896C5AC577CB9B0E1D694808A2491D2EEE38F_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = SplineKnotIndex_Equals_mE695B045700A70C6E31AF9051FE42AFBD1D5095E((&___0_item), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0055:
	{
		int32_t L_10 = V_1;
		int32_t L_11 = V_0;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisSpriteBone_t92E0FF1412CC4B6A5FC71895699E35FB3EF75044_m3B38F9E2D5BB270779806A654A8BDBC4408A014E_gshared (RuntimeArray* __this, SpriteBone_t92E0FF1412CC4B6A5FC71895699E35FB3EF75044 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	SpriteBone_t92E0FF1412CC4B6A5FC71895699E35FB3EF75044 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		SpriteBone_t92E0FF1412CC4B6A5FC71895699E35FB3EF75044 L_5 = V_2;
		SpriteBone_t92E0FF1412CC4B6A5FC71895699E35FB3EF75044 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<SpriteBone_t92E0FF1412CC4B6A5FC71895699E35FB3EF75044> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisSpriteSkinData_tAF363C091096E80EF5A98430D5738204C2CEF4A4_m2E07851D475C18E5B85001D2564781A28809F07D_gshared (RuntimeArray* __this, SpriteSkinData_tAF363C091096E80EF5A98430D5738204C2CEF4A4 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	SpriteSkinData_tAF363C091096E80EF5A98430D5738204C2CEF4A4 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		SpriteSkinData_tAF363C091096E80EF5A98430D5738204C2CEF4A4 L_5 = V_2;
		SpriteSkinData_tAF363C091096E80EF5A98430D5738204C2CEF4A4 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<SpriteSkinData_tAF363C091096E80EF5A98430D5738204C2CEF4A4> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisSpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_m8F6278AA19596DE397575149851162F2D4AD3297_gshared (RuntimeArray* __this, SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD L_5 = V_2;
		SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisSqlBinary_tEFB13C14B44E4388798A2F7DB48438E16DE4E347_m8FE4754F64AE523C972D90EC929C5838C0F0B504_gshared (RuntimeArray* __this, SqlBinary_tEFB13C14B44E4388798A2F7DB48438E16DE4E347 ___0_item, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SqlBinary_tEFB13C14B44E4388798A2F7DB48438E16DE4E347_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	SqlBinary_tEFB13C14B44E4388798A2F7DB48438E16DE4E347 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		SqlBinary_tEFB13C14B44E4388798A2F7DB48438E16DE4E347 L_5 = V_2;
		SqlBinary_tEFB13C14B44E4388798A2F7DB48438E16DE4E347 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		il2cpp_codegen_runtime_class_init_inline(SqlBinary_tEFB13C14B44E4388798A2F7DB48438E16DE4E347_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = SqlBinary_Equals_m238970418BF4DD9F9086E451AE877664DC60C724((&___0_item), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0055:
	{
		int32_t L_10 = V_1;
		int32_t L_11 = V_0;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisSqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7_m89890DE7917F9675E3E337C632393FB15B257B9F_gshared (RuntimeArray* __this, SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7 ___0_item, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7 L_5 = V_2;
		SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		il2cpp_codegen_runtime_class_init_inline(SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = SqlBoolean_Equals_m561B9537FA9804DB2EAF73AC786AFA658C83E2D3((&___0_item), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0055:
	{
		int32_t L_10 = V_1;
		int32_t L_11 = V_0;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisSqlByte_t39089DB566BD0047D5ED18807B145019FB0F0B46_m2AB5E86C176342F5E22FC2EA53A3E80C07360B12_gshared (RuntimeArray* __this, SqlByte_t39089DB566BD0047D5ED18807B145019FB0F0B46 ___0_item, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SqlByte_t39089DB566BD0047D5ED18807B145019FB0F0B46_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	SqlByte_t39089DB566BD0047D5ED18807B145019FB0F0B46 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		SqlByte_t39089DB566BD0047D5ED18807B145019FB0F0B46 L_5 = V_2;
		SqlByte_t39089DB566BD0047D5ED18807B145019FB0F0B46 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		il2cpp_codegen_runtime_class_init_inline(SqlByte_t39089DB566BD0047D5ED18807B145019FB0F0B46_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = SqlByte_Equals_mB4A0F47A740D93049A4B9FAE79CE2BB82B576006((&___0_item), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0055:
	{
		int32_t L_10 = V_1;
		int32_t L_11 = V_0;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisSqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2_m70E3D97BF58F5E8A35E7ECB27D73F7391452103A_gshared (RuntimeArray* __this, SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2 ___0_item, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2 L_5 = V_2;
		SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		il2cpp_codegen_runtime_class_init_inline(SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = SqlDateTime_Equals_m9401BFF901122AAD43042D8F4D54DFA26C0D6634((&___0_item), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0055:
	{
		int32_t L_10 = V_1;
		int32_t L_11 = V_0;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisSqlDecimal_t7A833A6D857AB79C4B2E4011CB728AEC6954D406_m0C44FE0790E6EF7CABC499E6EA6223E1BA4B4796_gshared (RuntimeArray* __this, SqlDecimal_t7A833A6D857AB79C4B2E4011CB728AEC6954D406 ___0_item, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SqlDecimal_t7A833A6D857AB79C4B2E4011CB728AEC6954D406_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	SqlDecimal_t7A833A6D857AB79C4B2E4011CB728AEC6954D406 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		SqlDecimal_t7A833A6D857AB79C4B2E4011CB728AEC6954D406 L_5 = V_2;
		SqlDecimal_t7A833A6D857AB79C4B2E4011CB728AEC6954D406 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		il2cpp_codegen_runtime_class_init_inline(SqlDecimal_t7A833A6D857AB79C4B2E4011CB728AEC6954D406_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = SqlDecimal_Equals_mEE75EC213CFD059F31273138FAF5F16B03AD63D1((&___0_item), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0055:
	{
		int32_t L_10 = V_1;
		int32_t L_11 = V_0;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisSqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98_m716CBECBF95E3A8C98B5E5D10A759C91E64AF4D8_gshared (RuntimeArray* __this, SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 ___0_item, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_5 = V_2;
		SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		il2cpp_codegen_runtime_class_init_inline(SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = SqlDouble_Equals_m8FEF106DFF53DC046CA65ECEDED37077ECF188D6((&___0_item), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0055:
	{
		int32_t L_10 = V_1;
		int32_t L_11 = V_0;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisSqlGuid_t93C33E370E5D3A344A15F9EFD9A2D4177576DED7_m9594CDF8EDBDA1DAFEC93C14A4887A9FAFAA4C6C_gshared (RuntimeArray* __this, SqlGuid_t93C33E370E5D3A344A15F9EFD9A2D4177576DED7 ___0_item, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SqlGuid_t93C33E370E5D3A344A15F9EFD9A2D4177576DED7_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	SqlGuid_t93C33E370E5D3A344A15F9EFD9A2D4177576DED7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		SqlGuid_t93C33E370E5D3A344A15F9EFD9A2D4177576DED7 L_5 = V_2;
		SqlGuid_t93C33E370E5D3A344A15F9EFD9A2D4177576DED7 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		il2cpp_codegen_runtime_class_init_inline(SqlGuid_t93C33E370E5D3A344A15F9EFD9A2D4177576DED7_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = SqlGuid_Equals_mD5EE347E7EF1EEB88DFCF35284F116506DBE8DD8((&___0_item), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0055:
	{
		int32_t L_10 = V_1;
		int32_t L_11 = V_0;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisSqlInt16_t30ED9856D3373398B6005B34D664C64EE224260B_m5AD9442C85725759FC3AFAA7DAAB8E97622E902E_gshared (RuntimeArray* __this, SqlInt16_t30ED9856D3373398B6005B34D664C64EE224260B ___0_item, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SqlInt16_t30ED9856D3373398B6005B34D664C64EE224260B_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	SqlInt16_t30ED9856D3373398B6005B34D664C64EE224260B V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		SqlInt16_t30ED9856D3373398B6005B34D664C64EE224260B L_5 = V_2;
		SqlInt16_t30ED9856D3373398B6005B34D664C64EE224260B L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		il2cpp_codegen_runtime_class_init_inline(SqlInt16_t30ED9856D3373398B6005B34D664C64EE224260B_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = SqlInt16_Equals_m335E7011F568068C141BA839D38B2534F6A8B3CF((&___0_item), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0055:
	{
		int32_t L_10 = V_1;
		int32_t L_11 = V_0;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisSqlInt32_t50DA35BC9FD9C46AA933DCF8195B2EE92064D152_m77AA797FD5BB58F24146E48F96B921A9163BF124_gshared (RuntimeArray* __this, SqlInt32_t50DA35BC9FD9C46AA933DCF8195B2EE92064D152 ___0_item, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SqlInt32_t50DA35BC9FD9C46AA933DCF8195B2EE92064D152_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	SqlInt32_t50DA35BC9FD9C46AA933DCF8195B2EE92064D152 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		SqlInt32_t50DA35BC9FD9C46AA933DCF8195B2EE92064D152 L_5 = V_2;
		SqlInt32_t50DA35BC9FD9C46AA933DCF8195B2EE92064D152 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		il2cpp_codegen_runtime_class_init_inline(SqlInt32_t50DA35BC9FD9C46AA933DCF8195B2EE92064D152_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = SqlInt32_Equals_m7D89FC6A3D733052B28E202EB4C5FC7D0E6B808E((&___0_item), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0055:
	{
		int32_t L_10 = V_1;
		int32_t L_11 = V_0;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisSqlInt64_t6F2A4BE192CBAA1059DDAB0D02FEDF4EDEAD6272_m99BAA0B58990901E97BBACE5DCF65ABE41C00658_gshared (RuntimeArray* __this, SqlInt64_t6F2A4BE192CBAA1059DDAB0D02FEDF4EDEAD6272 ___0_item, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SqlInt64_t6F2A4BE192CBAA1059DDAB0D02FEDF4EDEAD6272_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	SqlInt64_t6F2A4BE192CBAA1059DDAB0D02FEDF4EDEAD6272 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		SqlInt64_t6F2A4BE192CBAA1059DDAB0D02FEDF4EDEAD6272 L_5 = V_2;
		SqlInt64_t6F2A4BE192CBAA1059DDAB0D02FEDF4EDEAD6272 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		il2cpp_codegen_runtime_class_init_inline(SqlInt64_t6F2A4BE192CBAA1059DDAB0D02FEDF4EDEAD6272_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = SqlInt64_Equals_m2AC85D8BB3CF583B13C8B3915A30CB3F09553FC4((&___0_item), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0055:
	{
		int32_t L_10 = V_1;
		int32_t L_11 = V_0;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisSqlMoney_t88BD587F422EA297502BC57B18010762C03531BB_m1C932C41C41FBEE4DF192C74B652F8A4932168A1_gshared (RuntimeArray* __this, SqlMoney_t88BD587F422EA297502BC57B18010762C03531BB ___0_item, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SqlMoney_t88BD587F422EA297502BC57B18010762C03531BB_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	SqlMoney_t88BD587F422EA297502BC57B18010762C03531BB V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		SqlMoney_t88BD587F422EA297502BC57B18010762C03531BB L_5 = V_2;
		SqlMoney_t88BD587F422EA297502BC57B18010762C03531BB L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		il2cpp_codegen_runtime_class_init_inline(SqlMoney_t88BD587F422EA297502BC57B18010762C03531BB_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = SqlMoney_Equals_mA70EFA899CB137218CC72CA4A2B5DEF24DCD2FD5((&___0_item), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0055:
	{
		int32_t L_10 = V_1;
		int32_t L_11 = V_0;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisSqlSingle_tE807CFF8CCE4E77475D51223A37ADC73BC205767_mAE37174B1F34DC627B9D61F7085EC805124AE6CD_gshared (RuntimeArray* __this, SqlSingle_tE807CFF8CCE4E77475D51223A37ADC73BC205767 ___0_item, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SqlSingle_tE807CFF8CCE4E77475D51223A37ADC73BC205767_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	SqlSingle_tE807CFF8CCE4E77475D51223A37ADC73BC205767 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		SqlSingle_tE807CFF8CCE4E77475D51223A37ADC73BC205767 L_5 = V_2;
		SqlSingle_tE807CFF8CCE4E77475D51223A37ADC73BC205767 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		il2cpp_codegen_runtime_class_init_inline(SqlSingle_tE807CFF8CCE4E77475D51223A37ADC73BC205767_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = SqlSingle_Equals_m8EE5074BA8FE7BA43B07014FB2EE08B29BD12E8B((&___0_item), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0055:
	{
		int32_t L_10 = V_1;
		int32_t L_11 = V_0;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisSqlString_t49F9D31E7FD7F45509E26DEFEB61F006965D588D_mF63C65E690E81D01FDD91E6CABD95DE2954CDD6D_gshared (RuntimeArray* __this, SqlString_t49F9D31E7FD7F45509E26DEFEB61F006965D588D ___0_item, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SqlString_t49F9D31E7FD7F45509E26DEFEB61F006965D588D_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	SqlString_t49F9D31E7FD7F45509E26DEFEB61F006965D588D V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		SqlString_t49F9D31E7FD7F45509E26DEFEB61F006965D588D L_5 = V_2;
		SqlString_t49F9D31E7FD7F45509E26DEFEB61F006965D588D L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		il2cpp_codegen_runtime_class_init_inline(SqlString_t49F9D31E7FD7F45509E26DEFEB61F006965D588D_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = SqlString_Equals_mED3A10DBF394BE1410C0E780D44E96249FDD9D5D((&___0_item), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0055:
	{
		int32_t L_10 = V_1;
		int32_t L_11 = V_0;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisStylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF_mE626D67E03E8036001AFAC8CF580AEB53460CB61_gshared (RuntimeArray* __this, StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF L_5 = V_2;
		StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = StylePropertyName_Equals_m189314376AD8AD19270E89E0402E6A378DAD0F56((&___0_item), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0055:
	{
		int32_t L_10 = V_1;
		int32_t L_11 = V_0;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisStylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2_m06272F4F5CCE419AB62C3088787FDA80FA7790D8_gshared (RuntimeArray* __this, StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2 L_5 = V_2;
		StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisStyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470_m91312439735C23B922A9511D9E15F636C2BE7179_gshared (RuntimeArray* __this, StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 L_5 = V_2;
		StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisStyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C_m29F598A250DA2ABF12E1D54FF8C69E7FF571D525_gshared (RuntimeArray* __this, StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C L_5 = V_2;
		StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisStyleValue_t56307594EC04E04EFBCC3220595B4AAD66FF93C5_mFD950C3401BA2100CE9310CA2C4A432D2CDC6002_gshared (RuntimeArray* __this, StyleValue_t56307594EC04E04EFBCC3220595B4AAD66FF93C5 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	StyleValue_t56307594EC04E04EFBCC3220595B4AAD66FF93C5 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		StyleValue_t56307594EC04E04EFBCC3220595B4AAD66FF93C5 L_5 = V_2;
		StyleValue_t56307594EC04E04EFBCC3220595B4AAD66FF93C5 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<StyleValue_t56307594EC04E04EFBCC3220595B4AAD66FF93C5> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisStyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D_m60B3C2604B1EAD3EF5BC579AC36BD600818FFD8F_gshared (RuntimeArray* __this, StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D L_5 = V_2;
		StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisStyleValueManaged_t68DFBEC1594279E4DC56634FD5092318D1E9A5F4_mF8C1CD04B51F95363622B1410675FEC3BD9098E3_gshared (RuntimeArray* __this, StyleValueManaged_t68DFBEC1594279E4DC56634FD5092318D1E9A5F4 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	StyleValueManaged_t68DFBEC1594279E4DC56634FD5092318D1E9A5F4 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		StyleValueManaged_t68DFBEC1594279E4DC56634FD5092318D1E9A5F4 L_5 = V_2;
		StyleValueManaged_t68DFBEC1594279E4DC56634FD5092318D1E9A5F4 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<StyleValueManaged_t68DFBEC1594279E4DC56634FD5092318D1E9A5F4> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisStyleVariable_t5D4DEC936102A13961F4F2C6214B83D6CDC56269_m9D3F6351B0375268C8C8B28C3D98697F8C264F4B_gshared (RuntimeArray* __this, StyleVariable_t5D4DEC936102A13961F4F2C6214B83D6CDC56269 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	StyleVariable_t5D4DEC936102A13961F4F2C6214B83D6CDC56269 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		StyleVariable_t5D4DEC936102A13961F4F2C6214B83D6CDC56269 L_5 = V_2;
		StyleVariable_t5D4DEC936102A13961F4F2C6214B83D6CDC56269 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<StyleVariable_t5D4DEC936102A13961F4F2C6214B83D6CDC56269> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisTMP_CharacterInfo_t8B8FF32D6AACE251F2E7835AA5BC6608D535D9F8_m8CC751DA8B03A0346602A18DA73B910D16B97ED8_gshared (RuntimeArray* __this, TMP_CharacterInfo_t8B8FF32D6AACE251F2E7835AA5BC6608D535D9F8 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	TMP_CharacterInfo_t8B8FF32D6AACE251F2E7835AA5BC6608D535D9F8 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		TMP_CharacterInfo_t8B8FF32D6AACE251F2E7835AA5BC6608D535D9F8 L_5 = V_2;
		TMP_CharacterInfo_t8B8FF32D6AACE251F2E7835AA5BC6608D535D9F8 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<TMP_CharacterInfo_t8B8FF32D6AACE251F2E7835AA5BC6608D535D9F8> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisTMP_FontWeightPair_t2835DA6BF1309AC6C817ECF878232CCF9DDB703E_m9A08A1CF00F6246E42697995A011601D3EB5E15B_gshared (RuntimeArray* __this, TMP_FontWeightPair_t2835DA6BF1309AC6C817ECF878232CCF9DDB703E ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	TMP_FontWeightPair_t2835DA6BF1309AC6C817ECF878232CCF9DDB703E V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		TMP_FontWeightPair_t2835DA6BF1309AC6C817ECF878232CCF9DDB703E L_5 = V_2;
		TMP_FontWeightPair_t2835DA6BF1309AC6C817ECF878232CCF9DDB703E L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<TMP_FontWeightPair_t2835DA6BF1309AC6C817ECF878232CCF9DDB703E> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisTMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3_m9473A8EA639C83B326CDACDC45CA6DC7DF38ED13_gshared (RuntimeArray* __this, TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 L_5 = V_2;
		TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisTMP_LinkInfo_t9DC08E8BF8C5E8094AFF8C9FB3C251AF88B92DA6_m0138AD98077155074B2F322F8D2993ACA8ACF0F7_gshared (RuntimeArray* __this, TMP_LinkInfo_t9DC08E8BF8C5E8094AFF8C9FB3C251AF88B92DA6 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	TMP_LinkInfo_t9DC08E8BF8C5E8094AFF8C9FB3C251AF88B92DA6 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		TMP_LinkInfo_t9DC08E8BF8C5E8094AFF8C9FB3C251AF88B92DA6 L_5 = V_2;
		TMP_LinkInfo_t9DC08E8BF8C5E8094AFF8C9FB3C251AF88B92DA6 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<TMP_LinkInfo_t9DC08E8BF8C5E8094AFF8C9FB3C251AF88B92DA6> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisTMP_MeshInfo_t320C52212E9D672EBB5F5C18C3E0700AA33DD76B_m7FD69BF649F5E3E25036B7729A9BF046D741918A_gshared (RuntimeArray* __this, TMP_MeshInfo_t320C52212E9D672EBB5F5C18C3E0700AA33DD76B ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	TMP_MeshInfo_t320C52212E9D672EBB5F5C18C3E0700AA33DD76B V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		TMP_MeshInfo_t320C52212E9D672EBB5F5C18C3E0700AA33DD76B L_5 = V_2;
		TMP_MeshInfo_t320C52212E9D672EBB5F5C18C3E0700AA33DD76B L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<TMP_MeshInfo_t320C52212E9D672EBB5F5C18C3E0700AA33DD76B> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisTMP_PageInfo_t062E56948480FAB066C168E14DC79CC83CC369B4_mE5A10DEA5C1535AFCF7E110F4055EA340665BCBE_gshared (RuntimeArray* __this, TMP_PageInfo_t062E56948480FAB066C168E14DC79CC83CC369B4 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	TMP_PageInfo_t062E56948480FAB066C168E14DC79CC83CC369B4 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		TMP_PageInfo_t062E56948480FAB066C168E14DC79CC83CC369B4 L_5 = V_2;
		TMP_PageInfo_t062E56948480FAB066C168E14DC79CC83CC369B4 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<TMP_PageInfo_t062E56948480FAB066C168E14DC79CC83CC369B4> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisTMP_WordInfo_t825112AF0B76E4461F9C7DD336A02CC6A090A983_mC6BFF830E9C2AABF1FC7664290F2C6309344C7C5_gshared (RuntimeArray* __this, TMP_WordInfo_t825112AF0B76E4461F9C7DD336A02CC6A090A983 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	TMP_WordInfo_t825112AF0B76E4461F9C7DD336A02CC6A090A983 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		TMP_WordInfo_t825112AF0B76E4461F9C7DD336A02CC6A090A983 L_5 = V_2;
		TMP_WordInfo_t825112AF0B76E4461F9C7DD336A02CC6A090A983 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<TMP_WordInfo_t825112AF0B76E4461F9C7DD336A02CC6A090A983> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisTerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09_mBD4C419193E8A9849E13785D2871753D7D82916F_gshared (RuntimeArray* __this, TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09 L_5 = V_2;
		TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisTextElementInfo_tDD7A12E319505510E0B350E342BD55F32AB5F976_m6800D63A169F10A3650E14FBBC44E7604F8CBB0A_gshared (RuntimeArray* __this, TextElementInfo_tDD7A12E319505510E0B350E342BD55F32AB5F976 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	TextElementInfo_tDD7A12E319505510E0B350E342BD55F32AB5F976 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		TextElementInfo_tDD7A12E319505510E0B350E342BD55F32AB5F976 L_5 = V_2;
		TextElementInfo_tDD7A12E319505510E0B350E342BD55F32AB5F976 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<TextElementInfo_tDD7A12E319505510E0B350E342BD55F32AB5F976> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisTextProcessingElement_tDCD1EAF9D54829E796F4F9726D63B205344C7698_mD69844274195F871BCE9BD046019A2ACC3C661A6_gshared (RuntimeArray* __this, TextProcessingElement_tDCD1EAF9D54829E796F4F9726D63B205344C7698 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	TextProcessingElement_tDCD1EAF9D54829E796F4F9726D63B205344C7698 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		TextProcessingElement_tDCD1EAF9D54829E796F4F9726D63B205344C7698 L_5 = V_2;
		TextProcessingElement_tDCD1EAF9D54829E796F4F9726D63B205344C7698 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<TextProcessingElement_tDCD1EAF9D54829E796F4F9726D63B205344C7698> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisTextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05_mF810E10523C36F7E1496B6CE7B3F879790BBCCC7_gshared (RuntimeArray* __this, TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05 L_5 = V_2;
		TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = TextShadow_Equals_m0BC39E39C12D4D49BC554184C02CC78B417289BE((&___0_item), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0055:
	{
		int32_t L_10 = V_1;
		int32_t L_11 = V_0;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisTextureHandle_t87D7D063E5E22E38632961AB2B6F89978942BE09_m8FDEBCE69B398F24EF59A89D4D0C9DD2DA045FAB_gshared (RuntimeArray* __this, TextureHandle_t87D7D063E5E22E38632961AB2B6F89978942BE09 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	TextureHandle_t87D7D063E5E22E38632961AB2B6F89978942BE09 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		TextureHandle_t87D7D063E5E22E38632961AB2B6F89978942BE09 L_5 = V_2;
		TextureHandle_t87D7D063E5E22E38632961AB2B6F89978942BE09 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<TextureHandle_t87D7D063E5E22E38632961AB2B6F89978942BE09> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisTextureId_tFF4B4AAE53408AB10B0B89CCA5F7B50CF2535E58_m9188C5B5F203CAD7DBDAAF220D02CEAD737B07B8_gshared (RuntimeArray* __this, TextureId_tFF4B4AAE53408AB10B0B89CCA5F7B50CF2535E58 ___0_item, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextureId_tFF4B4AAE53408AB10B0B89CCA5F7B50CF2535E58_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	TextureId_tFF4B4AAE53408AB10B0B89CCA5F7B50CF2535E58 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		TextureId_tFF4B4AAE53408AB10B0B89CCA5F7B50CF2535E58 L_5 = V_2;
		TextureId_tFF4B4AAE53408AB10B0B89CCA5F7B50CF2535E58 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		il2cpp_codegen_runtime_class_init_inline(TextureId_tFF4B4AAE53408AB10B0B89CCA5F7B50CF2535E58_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = TextureId_Equals_m455DF7673CD85DCDDAA9AAC0F888DA8F8488081D((&___0_item), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0055:
	{
		int32_t L_10 = V_1;
		int32_t L_11 = V_0;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisTimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_m3BDCB7D50FEAF5FA3C4C8AC5D875BCAEE35D288A_gshared (RuntimeArray* __this, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___0_item, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_5 = V_2;
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		il2cpp_codegen_runtime_class_init_inline(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = TimeSpan_Equals_mFE37205C5F1295DD799B0EE207142BFA4222D47A((&___0_item), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0055:
	{
		int32_t L_10 = V_1;
		int32_t L_11 = V_0;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisTimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E_m5EA3EC0A9385BEFADDF7DD3CB465ECC1E4862502_gshared (RuntimeArray* __this, TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E L_5 = V_2;
		TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = TimeValue_Equals_mA581A2F3D44993E0C780E6BC36C355875CDAB513((&___0_item), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0055:
	{
		int32_t L_10 = V_1;
		int32_t L_11 = V_0;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisTimerData_t8010CFAF29DE9990BB65E621F386D9F74ACA449B_mA91832828C0543FAB6265DF0D86F11669025C3B5_gshared (RuntimeArray* __this, TimerData_t8010CFAF29DE9990BB65E621F386D9F74ACA449B ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	TimerData_t8010CFAF29DE9990BB65E621F386D9F74ACA449B V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		TimerData_t8010CFAF29DE9990BB65E621F386D9F74ACA449B L_5 = V_2;
		TimerData_t8010CFAF29DE9990BB65E621F386D9F74ACA449B L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<TimerData_t8010CFAF29DE9990BB65E621F386D9F74ACA449B> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisTimingEvent_t5697F8C973C8A77FED2BC5449FC594A84DB15E6D_m25E8E946C66F64BF6EFA16B18A4A7674280384E4_gshared (RuntimeArray* __this, TimingEvent_t5697F8C973C8A77FED2BC5449FC594A84DB15E6D ___0_item, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimingEvent_t5697F8C973C8A77FED2BC5449FC594A84DB15E6D_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	TimingEvent_t5697F8C973C8A77FED2BC5449FC594A84DB15E6D V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		TimingEvent_t5697F8C973C8A77FED2BC5449FC594A84DB15E6D L_5 = V_2;
		TimingEvent_t5697F8C973C8A77FED2BC5449FC594A84DB15E6D L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		il2cpp_codegen_runtime_class_init_inline(TimingEvent_t5697F8C973C8A77FED2BC5449FC594A84DB15E6D_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = TimingEvent_Equals_mA89157228575BCD1D29A84C825540327838F8DDF((&___0_item), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0055:
	{
		int32_t L_10 = V_1;
		int32_t L_11 = V_0;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisTimingEventInfo_t538B54329731926111A3B11FB8917B347FFCA604_mA80B3E6DAF7AB2E6571F964CAFAA00E55C739671_gshared (RuntimeArray* __this, TimingEventInfo_t538B54329731926111A3B11FB8917B347FFCA604 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	TimingEventInfo_t538B54329731926111A3B11FB8917B347FFCA604 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		TimingEventInfo_t538B54329731926111A3B11FB8917B347FFCA604 L_5 = V_2;
		TimingEventInfo_t538B54329731926111A3B11FB8917B347FFCA604 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<TimingEventInfo_t538B54329731926111A3B11FB8917B347FFCA604> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisTouch_t03E51455ED508492B3F278903A0114FA0E87B417_m11E208F75A476AAFB06F3C369EE1EC79EB6E01A5_gshared (RuntimeArray* __this, Touch_t03E51455ED508492B3F278903A0114FA0E87B417 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Touch_t03E51455ED508492B3F278903A0114FA0E87B417 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_5 = V_2;
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<Touch_t03E51455ED508492B3F278903A0114FA0E87B417> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisTransform3x4_t9F79FC0112A00D3FFD7AFAD2D10AD22DF929052F_m1E4E1EF9833EF13EEE3BF2C53B18A93DCD0DA90B_gshared (RuntimeArray* __this, Transform3x4_t9F79FC0112A00D3FFD7AFAD2D10AD22DF929052F ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Transform3x4_t9F79FC0112A00D3FFD7AFAD2D10AD22DF929052F V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		Transform3x4_t9F79FC0112A00D3FFD7AFAD2D10AD22DF929052F L_5 = V_2;
		Transform3x4_t9F79FC0112A00D3FFD7AFAD2D10AD22DF929052F L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<Transform3x4_t9F79FC0112A00D3FFD7AFAD2D10AD22DF929052F> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisTransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502_m1749C6A8E9617BFA4AE432499D450833E6EBDD79_gshared (RuntimeArray* __this, TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502 L_5 = V_2;
		TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = TransformOrigin_Equals_m1BB998DC4BF023074E997BDF9FFBB477B8D8C542((&___0_item), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0055:
	{
		int32_t L_10 = V_1;
		int32_t L_11 = V_0;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisTranslate_t494F6E802F8A640D67819C9D26BE62DED1218A8E_m73198A0F88851B6BD6D6914B658DFB429DF24242_gshared (RuntimeArray* __this, Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E L_5 = V_2;
		Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = Translate_Equals_mEE5D86BA4C5C8C65EC0F226E081F49BA891792E1((&___0_item), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0055:
	{
		int32_t L_10 = V_1;
		int32_t L_11 = V_0;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisTreeItem_t6B0F84E487FB869A51E1DA4987183127271F4F90_m6BEEF942CA36890E33BE3A630F67872D8E98A42E_gshared (RuntimeArray* __this, TreeItem_t6B0F84E487FB869A51E1DA4987183127271F4F90 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	TreeItem_t6B0F84E487FB869A51E1DA4987183127271F4F90 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		TreeItem_t6B0F84E487FB869A51E1DA4987183127271F4F90 L_5 = V_2;
		TreeItem_t6B0F84E487FB869A51E1DA4987183127271F4F90 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<TreeItem_t6B0F84E487FB869A51E1DA4987183127271F4F90> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisTreeViewItemWrapper_t4475B9923345B2D51C29E1E5285A4F92FA65C839_mDEA819EBAA80191039CCE5CAA96A6EBF78C1A03C_gshared (RuntimeArray* __this, TreeViewItemWrapper_t4475B9923345B2D51C29E1E5285A4F92FA65C839 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	TreeViewItemWrapper_t4475B9923345B2D51C29E1E5285A4F92FA65C839 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		TreeViewItemWrapper_t4475B9923345B2D51C29E1E5285A4F92FA65C839 L_5 = V_2;
		TreeViewItemWrapper_t4475B9923345B2D51C29E1E5285A4F92FA65C839 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<TreeViewItemWrapper_t4475B9923345B2D51C29E1E5285A4F92FA65C839> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisUEncroachingSegment_tD13983B03A27E74BB47A12B60732B020888416BA_m3A9D3B7D6EF468F4F224CC418939AB8579EB6BE5_gshared (RuntimeArray* __this, UEncroachingSegment_tD13983B03A27E74BB47A12B60732B020888416BA ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	UEncroachingSegment_tD13983B03A27E74BB47A12B60732B020888416BA V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		UEncroachingSegment_tD13983B03A27E74BB47A12B60732B020888416BA L_5 = V_2;
		UEncroachingSegment_tD13983B03A27E74BB47A12B60732B020888416BA L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<UEncroachingSegment_tD13983B03A27E74BB47A12B60732B020888416BA> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisUEvent_t6B46070B7BC816FDF53E67775BD4EA5508B807C2_m10AFA90AE243E5E493F75ACFFFDB09AF0FE5F247_gshared (RuntimeArray* __this, UEvent_t6B46070B7BC816FDF53E67775BD4EA5508B807C2 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	UEvent_t6B46070B7BC816FDF53E67775BD4EA5508B807C2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		UEvent_t6B46070B7BC816FDF53E67775BD4EA5508B807C2 L_5 = V_2;
		UEvent_t6B46070B7BC816FDF53E67775BD4EA5508B807C2 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<UEvent_t6B46070B7BC816FDF53E67775BD4EA5508B807C2> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisUHull_t042A8827A0CEE132C9302730F1CC1C2206B18B53_mAA38EDB65A38819E914BA4FCA651D59DBE0027BF_gshared (RuntimeArray* __this, UHull_t042A8827A0CEE132C9302730F1CC1C2206B18B53 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	UHull_t042A8827A0CEE132C9302730F1CC1C2206B18B53 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		UHull_t042A8827A0CEE132C9302730F1CC1C2206B18B53 L_5 = V_2;
		UHull_t042A8827A0CEE132C9302730F1CC1C2206B18B53 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<UHull_t042A8827A0CEE132C9302730F1CC1C2206B18B53> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisUICharInfo_t24C2EA0F2F3A938100C271891D9DEB015ABA5FBD_m528F98A01CE3509FCC74F63F3F3E0286289F70A2_gshared (RuntimeArray* __this, UICharInfo_t24C2EA0F2F3A938100C271891D9DEB015ABA5FBD ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	UICharInfo_t24C2EA0F2F3A938100C271891D9DEB015ABA5FBD V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		UICharInfo_t24C2EA0F2F3A938100C271891D9DEB015ABA5FBD L_5 = V_2;
		UICharInfo_t24C2EA0F2F3A938100C271891D9DEB015ABA5FBD L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<UICharInfo_t24C2EA0F2F3A938100C271891D9DEB015ABA5FBD> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisUILineInfo_tC6FF4F85BD2316FADA2148A1789B3FF0B05A6CAC_m5733E49B329379ABA39C55E0734CE71BFF84366E_gshared (RuntimeArray* __this, UILineInfo_tC6FF4F85BD2316FADA2148A1789B3FF0B05A6CAC ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	UILineInfo_tC6FF4F85BD2316FADA2148A1789B3FF0B05A6CAC V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		UILineInfo_tC6FF4F85BD2316FADA2148A1789B3FF0B05A6CAC L_5 = V_2;
		UILineInfo_tC6FF4F85BD2316FADA2148A1789B3FF0B05A6CAC L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<UILineInfo_tC6FF4F85BD2316FADA2148A1789B3FF0B05A6CAC> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisUIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207_m8B9BCCADC4F117F73732600D3596E9D3824B1A18_gshared (RuntimeArray* __this, UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_5 = V_2;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m7B91F0DA35979BA791D7541B042D190E7C4C7E26_gshared (RuntimeArray* __this, uint16_t ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	uint16_t V_2 = 0;
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		uint16_t L_5 = V_2;
		uint16_t L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = UInt16_Equals_mA21E8831A57BC983311BFEE7023615002FC50207((&___0_item), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0055:
	{
		int32_t L_10 = V_1;
		int32_t L_11 = V_0;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisUInt16Enum_t481D129F5FAE551E8684190D640F0FAEFB237CF8_m63F25D0841F81317567605F376A5359DE3A1D17B_gshared (RuntimeArray* __this, uint16_t ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	uint16_t V_2 = 0;
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		uint16_t L_5 = V_2;
		uint16_t L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<uint16_t> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = Enum_Equals_m96B1058BA6312E23F31A5FBF594E96EB692EAF4E((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mBAA9FACABB5696A8592793BEF567BF723A951DF6_gshared (RuntimeArray* __this, uint32_t ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	uint32_t V_2 = 0;
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		uint32_t L_5 = V_2;
		uint32_t L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = UInt32_Equals_mC516812849D8243A72D34D830D840A1F1E32795E((&___0_item), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0055:
	{
		int32_t L_10 = V_1;
		int32_t L_11 = V_0;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisUInt32Enum_t7B4F5C6C14D2C4B2A5927C59620BE3868714DACF_m650510CBAF6E623587E4123FBF0486A182BE6B9C_gshared (RuntimeArray* __this, uint32_t ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	uint32_t V_2 = 0;
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		uint32_t L_5 = V_2;
		uint32_t L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<uint32_t> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = Enum_Equals_m96B1058BA6312E23F31A5FBF594E96EB692EAF4E((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m535A0795211CEE4B52530E18675AB25798181FA8_gshared (RuntimeArray* __this, uint64_t ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	uint64_t V_2 = 0;
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		uint64_t L_5 = V_2;
		uint64_t L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = UInt64_Equals_m175E7A6F2A4606A94579529400854317542648A9((&___0_item), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0055:
	{
		int32_t L_10 = V_1;
		int32_t L_11 = V_0;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisUStar_t44BAFB3CDE2A6D37FF4F48B038D7D920F8F47BD4_mE0953306BBF155AFB516EE959D19AA45C65B228D_gshared (RuntimeArray* __this, UStar_t44BAFB3CDE2A6D37FF4F48B038D7D920F8F47BD4 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	UStar_t44BAFB3CDE2A6D37FF4F48B038D7D920F8F47BD4 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		UStar_t44BAFB3CDE2A6D37FF4F48B038D7D920F8F47BD4 L_5 = V_2;
		UStar_t44BAFB3CDE2A6D37FF4F48B038D7D920F8F47BD4 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<UStar_t44BAFB3CDE2A6D37FF4F48B038D7D920F8F47BD4> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisUTriangle_tCD210F61D627BAB81A1CFFEC7076C3FBB9A6D7CD_mF6F95F1DEDE777DB86FE6D8AD2D751B41AFF47CD_gshared (RuntimeArray* __this, UTriangle_tCD210F61D627BAB81A1CFFEC7076C3FBB9A6D7CD ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	UTriangle_tCD210F61D627BAB81A1CFFEC7076C3FBB9A6D7CD V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		UTriangle_tCD210F61D627BAB81A1CFFEC7076C3FBB9A6D7CD L_5 = V_2;
		UTriangle_tCD210F61D627BAB81A1CFFEC7076C3FBB9A6D7CD L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<UTriangle_tCD210F61D627BAB81A1CFFEC7076C3FBB9A6D7CD> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisUdConvInfo_t3290B09FC3242E96E0F6D3FB81B325E2A44ABD8F_m4896D22DD605766115BFAF649A01EEFAB2544888_gshared (RuntimeArray* __this, UdConvInfo_t3290B09FC3242E96E0F6D3FB81B325E2A44ABD8F ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	UdConvInfo_t3290B09FC3242E96E0F6D3FB81B325E2A44ABD8F V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		UdConvInfo_t3290B09FC3242E96E0F6D3FB81B325E2A44ABD8F L_5 = V_2;
		UdConvInfo_t3290B09FC3242E96E0F6D3FB81B325E2A44ABD8F L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<UdConvInfo_t3290B09FC3242E96E0F6D3FB81B325E2A44ABD8F> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisVBufferParameters_t89273391C14B9731089C42F3884CC8F88A295624_mFDD69C1E6A98F1FADF09034D6C8FD28142AF0751_gshared (RuntimeArray* __this, VBufferParameters_t89273391C14B9731089C42F3884CC8F88A295624 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	VBufferParameters_t89273391C14B9731089C42F3884CC8F88A295624 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		VBufferParameters_t89273391C14B9731089C42F3884CC8F88A295624 L_5 = V_2;
		VBufferParameters_t89273391C14B9731089C42F3884CC8F88A295624 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<VBufferParameters_t89273391C14B9731089C42F3884CC8F88A295624> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m20F9EB8336058847F4D5D628E9B12ADE98DCB4DC_gshared (RuntimeArray* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = V_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = Vector2_Equals_mA4E81D6FCE503DBD502BA499708344410F60DA4E_inline((&___0_item), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0055:
	{
		int32_t L_10 = V_1;
		int32_t L_11 = V_0;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisVector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_m5C41EA5A7D3D49A268429828AB1BBFADD8117BD1_gshared (RuntimeArray* __this, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_5 = V_2;
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = Vector2Int_Equals_m6D91EFAA6B3254334436BD262A4547EA08281BA3_inline((&___0_item), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0055:
	{
		int32_t L_10 = V_1;
		int32_t L_11 = V_0;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mA465430D4F835712943FC6D4E4FA5A9D4B14E054_gshared (RuntimeArray* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = Vector3_Equals_mB4BE43D5986864F5C22B919F2957E0309F10E3B4_inline((&___0_item), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0055:
	{
		int32_t L_10 = V_1;
		int32_t L_11 = V_0;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_mDF27B24DCDDDFB285EA6DCA9F48EAE69D29751B1_gshared (RuntimeArray* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_5 = V_2;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = Vector3Int_Equals_m419967067E76BF0381E4CD8FE14DF5ED46ACFB02_inline((&___0_item), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0055:
	{
		int32_t L_10 = V_1;
		int32_t L_11 = V_0;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m92BB9340A6AA35C875E443F0EDBB712376A5AA51_gshared (RuntimeArray* __this, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_5 = V_2;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = Vector4_Equals_mC2596CA0F441D25DE7A9419BE66A8FA2DA355CB9_inline((&___0_item), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0055:
	{
		int32_t L_10 = V_1;
		int32_t L_11 = V_0;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisVectorImageVertex_t9D42377517CC059BD40E2A626ECEBE0C94CA0948_m3D4C82E85B739368FF10762B57C2B8448125A5C2_gshared (RuntimeArray* __this, VectorImageVertex_t9D42377517CC059BD40E2A626ECEBE0C94CA0948 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	VectorImageVertex_t9D42377517CC059BD40E2A626ECEBE0C94CA0948 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		VectorImageVertex_t9D42377517CC059BD40E2A626ECEBE0C94CA0948 L_5 = V_2;
		VectorImageVertex_t9D42377517CC059BD40E2A626ECEBE0C94CA0948 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<VectorImageVertex_t9D42377517CC059BD40E2A626ECEBE0C94CA0948> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisVertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7_m1617A0392F509BECBB069EBDE0AAC855C1EDE8B1_gshared (RuntimeArray* __this, Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 L_5 = V_2;
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisVertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76_m274CB3E86E12E7D35746F35321928E06E854D66C_gshared (RuntimeArray* __this, VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76 L_5 = V_2;
		VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = VertexAttributeDescriptor_Equals_m6FBFEE42E1BAAAC2D38434EDF0906C5B76D56BE5((&___0_item), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0055:
	{
		int32_t L_10 = V_1;
		int32_t L_11 = V_0;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisVisibleLight_t0A4DF5B22865A00F618A0352B805277FA0132805_mEF4A69B33CF7E531EDD094C0E615EDC90F73BEC2_gshared (RuntimeArray* __this, VisibleLight_t0A4DF5B22865A00F618A0352B805277FA0132805 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	VisibleLight_t0A4DF5B22865A00F618A0352B805277FA0132805 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		VisibleLight_t0A4DF5B22865A00F618A0352B805277FA0132805 L_5 = V_2;
		VisibleLight_t0A4DF5B22865A00F618A0352B805277FA0132805 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = VisibleLight_Equals_m40D683BCDD1632AC8127BEC3810B73A4EC90EAEB((&___0_item), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0055:
	{
		int32_t L_10 = V_1;
		int32_t L_11 = V_0;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisVisibleReflectionProbe_t8AF1FAD09A36E33F5101B683DB8E99582815EF0B_mBBE077415F440DB7C2E1D1B409B37A7AB25DBD40_gshared (RuntimeArray* __this, VisibleReflectionProbe_t8AF1FAD09A36E33F5101B683DB8E99582815EF0B ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	VisibleReflectionProbe_t8AF1FAD09A36E33F5101B683DB8E99582815EF0B V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		VisibleReflectionProbe_t8AF1FAD09A36E33F5101B683DB8E99582815EF0B L_5 = V_2;
		VisibleReflectionProbe_t8AF1FAD09A36E33F5101B683DB8E99582815EF0B L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = VisibleReflectionProbe_Equals_m67A72812AD1FEEA3C942AAAAA2A47909F3FEC845((&___0_item), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0055:
	{
		int32_t L_10 = V_1;
		int32_t L_11 = V_0;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisVisualEffectPlayableSerializedEvent_t81FFD0AB85C7A0D22E898F03776FD3513BB4B4C1_m8EC10F824CBF3AE3A4B0CC096B2FA415DC57A794_gshared (RuntimeArray* __this, VisualEffectPlayableSerializedEvent_t81FFD0AB85C7A0D22E898F03776FD3513BB4B4C1 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	VisualEffectPlayableSerializedEvent_t81FFD0AB85C7A0D22E898F03776FD3513BB4B4C1 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		VisualEffectPlayableSerializedEvent_t81FFD0AB85C7A0D22E898F03776FD3513BB4B4C1 L_5 = V_2;
		VisualEffectPlayableSerializedEvent_t81FFD0AB85C7A0D22E898F03776FD3513BB4B4C1 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<VisualEffectPlayableSerializedEvent_t81FFD0AB85C7A0D22E898F03776FD3513BB4B4C1> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisVolumetricMaterialDataCBuffer_t0D314D7D0572D7B9FAC037F45A24AEBE49C0CFC7_m41C4757236680EE77416C4007B09A57DB5053A00_gshared (RuntimeArray* __this, VolumetricMaterialDataCBuffer_t0D314D7D0572D7B9FAC037F45A24AEBE49C0CFC7 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	VolumetricMaterialDataCBuffer_t0D314D7D0572D7B9FAC037F45A24AEBE49C0CFC7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		VolumetricMaterialDataCBuffer_t0D314D7D0572D7B9FAC037F45A24AEBE49C0CFC7 L_5 = V_2;
		VolumetricMaterialDataCBuffer_t0D314D7D0572D7B9FAC037F45A24AEBE49C0CFC7 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<VolumetricMaterialDataCBuffer_t0D314D7D0572D7B9FAC037F45A24AEBE49C0CFC7> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisWaterSurfaceProfile_tB344F3897C4432C713B93D510F01DF7EFBB6760D_m413CCDE1F1250F04644357FD687ACE6BEEE71067_gshared (RuntimeArray* __this, WaterSurfaceProfile_tB344F3897C4432C713B93D510F01DF7EFBB6760D ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	WaterSurfaceProfile_tB344F3897C4432C713B93D510F01DF7EFBB6760D V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		WaterSurfaceProfile_tB344F3897C4432C713B93D510F01DF7EFBB6760D L_5 = V_2;
		WaterSurfaceProfile_tB344F3897C4432C713B93D510F01DF7EFBB6760D L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<WaterSurfaceProfile_tB344F3897C4432C713B93D510F01DF7EFBB6760D> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisWordInfo_tA466206097891A5A2590896EE164AFC406EB060D_m2E1E8627602B20E181F8C514B35FB0E5683BA97B_gshared (RuntimeArray* __this, WordInfo_tA466206097891A5A2590896EE164AFC406EB060D ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	WordInfo_tA466206097891A5A2590896EE164AFC406EB060D V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		WordInfo_tA466206097891A5A2590896EE164AFC406EB060D L_5 = V_2;
		WordInfo_tA466206097891A5A2590896EE164AFC406EB060D L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<WordInfo_tA466206097891A5A2590896EE164AFC406EB060D> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisWordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_mED89F4F36C87E74070E414A25512515312DAADB2_gshared (RuntimeArray* __this, WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A L_5 = V_2;
		WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisWordWrapState_tD71131CF008362DB9562FB9794AE9D9225D8F123_m3D835D3DD72FE198DFA6D1CE83663FE127A893BE_gshared (RuntimeArray* __this, WordWrapState_tD71131CF008362DB9562FB9794AE9D9225D8F123 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	WordWrapState_tD71131CF008362DB9562FB9794AE9D9225D8F123 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		WordWrapState_tD71131CF008362DB9562FB9794AE9D9225D8F123 L_5 = V_2;
		WordWrapState_tD71131CF008362DB9562FB9794AE9D9225D8F123 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<WordWrapState_tD71131CF008362DB9562FB9794AE9D9225D8F123> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisWriteStackFrame_t0CC4719C6FFC6CE075F03E260758587265CB9902_m7709D9CAE882BA1C0915FB0363B6E20B876C0671_gshared (RuntimeArray* __this, WriteStackFrame_t0CC4719C6FFC6CE075F03E260758587265CB9902 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	WriteStackFrame_t0CC4719C6FFC6CE075F03E260758587265CB9902 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		WriteStackFrame_t0CC4719C6FFC6CE075F03E260758587265CB9902 L_5 = V_2;
		WriteStackFrame_t0CC4719C6FFC6CE075F03E260758587265CB9902 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<WriteStackFrame_t0CC4719C6FFC6CE075F03E260758587265CB9902> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisX509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D_m23B381AEAF04BBFBF01032208C77E6401559E2FC_gshared (RuntimeArray* __this, X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D L_5 = V_2;
		X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisXPathNode_t4A9DCD8092B3B7DBA0A6DA09C03DB5274D43C3CA_m2961396C128F029A2B4E2E312D1FECB870D430D7_gshared (RuntimeArray* __this, XPathNode_t4A9DCD8092B3B7DBA0A6DA09C03DB5274D43C3CA ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	XPathNode_t4A9DCD8092B3B7DBA0A6DA09C03DB5274D43C3CA V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		XPathNode_t4A9DCD8092B3B7DBA0A6DA09C03DB5274D43C3CA L_5 = V_2;
		XPathNode_t4A9DCD8092B3B7DBA0A6DA09C03DB5274D43C3CA L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<XPathNode_t4A9DCD8092B3B7DBA0A6DA09C03DB5274D43C3CA> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisXPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470_m960287BCD8D79DA03B0D7E36B8433898E999D2E6_gshared (RuntimeArray* __this, XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 L_5 = V_2;
		XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisXRView_t70E23918C68E24DB22A8614AA8717B3BA213FAB5_m8717EA3B0793F330F88B207AB6347F9671A358E7_gshared (RuntimeArray* __this, XRView_t70E23918C68E24DB22A8614AA8717B3BA213FAB5 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	XRView_t70E23918C68E24DB22A8614AA8717B3BA213FAB5 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		XRView_t70E23918C68E24DB22A8614AA8717B3BA213FAB5 L_5 = V_2;
		XRView_t70E23918C68E24DB22A8614AA8717B3BA213FAB5 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<XRView_t70E23918C68E24DB22A8614AA8717B3BA213FAB5> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisIl2CppFullySharedGenericAny_m148347D7A91B363E18C6B2BCDCDB9CE43122A494_gshared (RuntimeArray* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t1E57CAFF53DFD82B91CA25DBB4095EF4F5FC124B = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	void* L_10 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 1)));
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_T_t1E57CAFF53DFD82B91CA25DBB4095EF4F5FC124B);
	const Il2CppFullySharedGenericAny L_6 = L_4;
	const Il2CppFullySharedGenericAny L_8 = L_4;
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Il2CppFullySharedGenericAny V_2 = alloca(SizeOf_T_t1E57CAFF53DFD82B91CA25DBB4095EF4F5FC124B);
	memset(V_2, 0, SizeOf_T_t1E57CAFF53DFD82B91CA25DBB4095EF4F5FC124B);
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (Il2CppFullySharedGenericAny*)V_2);
		il2cpp_codegen_memcpy(L_4, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? ___0_item : &___0_item), SizeOf_T_t1E57CAFF53DFD82B91CA25DBB4095EF4F5FC124B);
		bool L_5 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), L_4);
		if (L_5)
		{
			goto IL_003a;
		}
	}
	{
		il2cpp_codegen_memcpy(L_6, V_2, SizeOf_T_t1E57CAFF53DFD82B91CA25DBB4095EF4F5FC124B);
		bool L_7 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), L_6);
		if (L_7)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_003a:
	{
		il2cpp_codegen_memcpy(L_8, V_2, SizeOf_T_t1E57CAFF53DFD82B91CA25DBB4095EF4F5FC124B);
		RuntimeObject* L_9 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), L_8);
		bool L_11;
		L_11 = ConstrainedFuncInvoker1< bool, RuntimeObject* >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 1), il2cpp_rgctx_method(method->rgctx_data, 2), L_10, (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? ___0_item : &___0_item), L_9);
		if (!L_11)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0055:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_Tisdouble2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA_mAFB115D89F729C99424CE5A55F7A2E838A6F4345_gshared (RuntimeArray* __this, double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA L_5 = V_2;
		double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = double2_Equals_mFF460810B0184AFE3BF8DC1865F306AD087FEC33((&___0_item), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0055:
	{
		int32_t L_10 = V_1;
		int32_t L_11 = V_0;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_Tisfloat2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA_m2C34F881A9A7823C73C2B67A7A6F301D33C000A2_gshared (RuntimeArray* __this, float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_5 = V_2;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = float2_Equals_mD389D74AC9D1E4E537F95C97B79026A6C3244788((&___0_item), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0055:
	{
		int32_t L_10 = V_1;
		int32_t L_11 = V_0;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_Tisfloat3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E_mDE4557A666299270978EE28C778A3577835DA41F_gshared (RuntimeArray* __this, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_5 = V_2;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = float3_Equals_mD988046122040559D8C9EFED2DA347495D722A2C((&___0_item), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0055:
	{
		int32_t L_10 = V_1;
		int32_t L_11 = V_0;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_Tisfloat4_t89D9A294E7A79BD81BFBDD18654508532958555E_mF1D05EC5A30C32FC7DB8CD1BD9347DE823367796_gshared (RuntimeArray* __this, float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	float4_t89D9A294E7A79BD81BFBDD18654508532958555E V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_5 = V_2;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = float4_Equals_m4D841ABA91D26FA16B07205DC9D51612265FFAB4((&___0_item), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0055:
	{
		int32_t L_10 = V_1;
		int32_t L_11 = V_0;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_Tisfloat4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2_m922EA7804FDAE46AFEC07F1592735EDEF2B8AC1B_gshared (RuntimeArray* __this, float4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	float4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		float4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2 L_5 = V_2;
		float4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = float4x4_Equals_mD77FF5880D1151E85DC213AFF8E24B12044DB6B8((&___0_item), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0055:
	{
		int32_t L_10 = V_1;
		int32_t L_11 = V_0;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_Tisint2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A_mB1B4F9ACD299130CAE84D04E4342A230B8D7E670_gshared (RuntimeArray* __this, int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A L_5 = V_2;
		int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = int2_Equals_m6B885828097BED2665EAA565C07E9FE83627C481((&___0_item), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0055:
	{
		int32_t L_10 = V_1;
		int32_t L_11 = V_0;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_Tisint3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF_m0ED12A67B5F292703698F85CF382A2DB9DF19E93_gshared (RuntimeArray* __this, int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF L_5 = V_2;
		int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = int3_Equals_mAD3F27218DB5A5341B15F177DBA5ED687A0727D1((&___0_item), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0055:
	{
		int32_t L_10 = V_1;
		int32_t L_11 = V_0;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_Tisint4_tBA77D4945786DE82C3A487B33955EA1004996052_m38298C6D26183AB392DF83D8D199C46E4E4CB560_gshared (RuntimeArray* __this, int4_tBA77D4945786DE82C3A487B33955EA1004996052 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int4_tBA77D4945786DE82C3A487B33955EA1004996052 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		int4_tBA77D4945786DE82C3A487B33955EA1004996052 L_5 = V_2;
		int4_tBA77D4945786DE82C3A487B33955EA1004996052 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = int4_Equals_mD93E26A15709372D4D3E34D8797F80C3FA01CD97((&___0_item), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0055:
	{
		int32_t L_10 = V_1;
		int32_t L_11 = V_0;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Matrix4x4_Equals_m35CFC5F304BB40EFFE011B92AA87B77CD8FF8F74_inline (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		RuntimeObject* L_0 = ___0_other;
		V_0 = (bool)((((int32_t)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (bool)0;
		goto IL_0024;
	}

IL_0015:
	{
		RuntimeObject* L_2 = ___0_other;
		bool L_3;
		L_3 = Matrix4x4_Equals_mDB0C4CCC58BE3E108F1A40BE8DBDCD62E284CC51_inline(__this, ((*(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6*)((Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6*)(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6*)UnBox(L_2, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var)))), NULL);
		V_1 = L_3;
		goto IL_0024;
	}

IL_0024:
	{
		bool L_4 = V_1;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Quaternion_Equals_mCF93B00BA4FCDDE6100918451343DB9A0583A0A0_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		RuntimeObject* L_0 = ___0_other;
		V_0 = (bool)((((int32_t)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (bool)0;
		goto IL_0024;
	}

IL_0015:
	{
		RuntimeObject* L_2 = ___0_other;
		bool L_3;
		L_3 = Quaternion_Equals_m25B95D8412B79CC7F8B34062BFAE662BD99578BE_inline(__this, ((*(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*)((Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*)(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*)UnBox(L_2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var)))), NULL);
		V_1 = L_3;
		goto IL_0024;
	}

IL_0024:
	{
		bool L_4 = V_1;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Rect_Equals_mD7EB2046512E4A46524A7ED929F1C38A32C408F8_inline (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		RuntimeObject* L_0 = ___0_other;
		V_0 = (bool)((((int32_t)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (bool)0;
		goto IL_0024;
	}

IL_0015:
	{
		RuntimeObject* L_2 = ___0_other;
		bool L_3;
		L_3 = Rect_Equals_mE725DE506D3F1DB92F58B876BDA42AACD4D991B5_inline(__this, ((*(Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D*)((Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D*)(Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D*)UnBox(L_2, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_il2cpp_TypeInfo_var)))), NULL);
		V_1 = L_3;
		goto IL_0024;
	}

IL_0024:
	{
		bool L_4 = V_1;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2_Equals_mA4E81D6FCE503DBD502BA499708344410F60DA4E_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		RuntimeObject* L_0 = ___0_other;
		V_0 = (bool)((((int32_t)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (bool)0;
		goto IL_0024;
	}

IL_0015:
	{
		RuntimeObject* L_2 = ___0_other;
		bool L_3;
		L_3 = Vector2_Equals_mDF84D5ED14E018609C6A9C9BAE016C1B33BCFF4C_inline(__this, ((*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)UnBox(L_2, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var)))), NULL);
		V_1 = L_3;
		goto IL_0024;
	}

IL_0024:
	{
		bool L_4 = V_1;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2Int_Equals_m6D91EFAA6B3254334436BD262A4547EA08281BA3_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		RuntimeObject* L_0 = ___0_other;
		V_0 = (bool)((((int32_t)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (bool)0;
		goto IL_0024;
	}

IL_0015:
	{
		RuntimeObject* L_2 = ___0_other;
		bool L_3;
		L_3 = Vector2Int_Equals_m32811BA0576C096D5EB5C0CFD8231478F17229A6_inline(__this, ((*(Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A*)((Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A*)(Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A*)UnBox(L_2, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_il2cpp_TypeInfo_var)))), NULL);
		V_1 = L_3;
		goto IL_0024;
	}

IL_0024:
	{
		bool L_4 = V_1;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_Equals_mB4BE43D5986864F5C22B919F2957E0309F10E3B4_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		RuntimeObject* L_0 = ___0_other;
		V_0 = (bool)((((int32_t)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (bool)0;
		goto IL_0024;
	}

IL_0015:
	{
		RuntimeObject* L_2 = ___0_other;
		bool L_3;
		L_3 = Vector3_Equals_mEDEAF86793D229455BBF9BA5B30DDF438D6CABC1_inline(__this, ((*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)UnBox(L_2, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var)))), NULL);
		V_1 = L_3;
		goto IL_0024;
	}

IL_0024:
	{
		bool L_4 = V_1;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3Int_Equals_m419967067E76BF0381E4CD8FE14DF5ED46ACFB02_inline (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		RuntimeObject* L_0 = ___0_other;
		V_0 = (bool)((((int32_t)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (bool)0;
		goto IL_0024;
	}

IL_0015:
	{
		RuntimeObject* L_2 = ___0_other;
		bool L_3;
		L_3 = Vector3Int_Equals_mE4D179C5001B77DE05E3E4BC39DC9F6AE441EBD8_inline(__this, ((*(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)((Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)UnBox(L_2, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_il2cpp_TypeInfo_var)))), NULL);
		V_1 = L_3;
		goto IL_0024;
	}

IL_0024:
	{
		bool L_4 = V_1;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector4_Equals_mC2596CA0F441D25DE7A9419BE66A8FA2DA355CB9_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		RuntimeObject* L_0 = ___0_other;
		V_0 = (bool)((((int32_t)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (bool)0;
		goto IL_0024;
	}

IL_0015:
	{
		RuntimeObject* L_2 = ___0_other;
		bool L_3;
		L_3 = Vector4_Equals_m73FAA65A1A565EE28D6C9385603829894B7D4392_inline(__this, ((*(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*)((Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*)(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*)UnBox(L_2, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_il2cpp_TypeInfo_var)))), NULL);
		V_1 = L_3;
		goto IL_0024;
	}

IL_0024:
	{
		bool L_4 = V_1;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Matrix4x4_Equals_mDB0C4CCC58BE3E108F1A40BE8DBDCD62E284CC51_inline (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* __this, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___0_other, const RuntimeMethod* method) 
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	int32_t G_B5_0 = 0;
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_0;
		L_0 = Matrix4x4_GetColumn_m5CE079D7A69DE70E3144BADD20A1651C73A8D118(__this, 0, NULL);
		V_0 = L_0;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_1;
		L_1 = Matrix4x4_GetColumn_m5CE079D7A69DE70E3144BADD20A1651C73A8D118((&___0_other), 0, NULL);
		bool L_2;
		L_2 = Vector4_Equals_m73FAA65A1A565EE28D6C9385603829894B7D4392_inline((&V_0), L_1, NULL);
		if (!L_2)
		{
			goto IL_0065;
		}
	}
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_3;
		L_3 = Matrix4x4_GetColumn_m5CE079D7A69DE70E3144BADD20A1651C73A8D118(__this, 1, NULL);
		V_0 = L_3;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_4;
		L_4 = Matrix4x4_GetColumn_m5CE079D7A69DE70E3144BADD20A1651C73A8D118((&___0_other), 1, NULL);
		bool L_5;
		L_5 = Vector4_Equals_m73FAA65A1A565EE28D6C9385603829894B7D4392_inline((&V_0), L_4, NULL);
		if (!L_5)
		{
			goto IL_0065;
		}
	}
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_6;
		L_6 = Matrix4x4_GetColumn_m5CE079D7A69DE70E3144BADD20A1651C73A8D118(__this, 2, NULL);
		V_0 = L_6;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_7;
		L_7 = Matrix4x4_GetColumn_m5CE079D7A69DE70E3144BADD20A1651C73A8D118((&___0_other), 2, NULL);
		bool L_8;
		L_8 = Vector4_Equals_m73FAA65A1A565EE28D6C9385603829894B7D4392_inline((&V_0), L_7, NULL);
		if (!L_8)
		{
			goto IL_0065;
		}
	}
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_9;
		L_9 = Matrix4x4_GetColumn_m5CE079D7A69DE70E3144BADD20A1651C73A8D118(__this, 3, NULL);
		V_0 = L_9;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_10;
		L_10 = Matrix4x4_GetColumn_m5CE079D7A69DE70E3144BADD20A1651C73A8D118((&___0_other), 3, NULL);
		bool L_11;
		L_11 = Vector4_Equals_m73FAA65A1A565EE28D6C9385603829894B7D4392_inline((&V_0), L_10, NULL);
		G_B5_0 = ((int32_t)(L_11));
		goto IL_0066;
	}

IL_0065:
	{
		G_B5_0 = 0;
	}

IL_0066:
	{
		V_1 = (bool)G_B5_0;
		goto IL_0069;
	}

IL_0069:
	{
		bool L_12 = V_1;
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Quaternion_Equals_m25B95D8412B79CC7F8B34062BFAE662BD99578BE_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_other, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B5_0 = 0;
	{
		float* L_0 = (float*)(&__this->___x);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = ___0_other;
		float L_2 = L_1.___x;
		bool L_3;
		L_3 = Single_Equals_m97C79E2B80F39214DB3F7E714FF2BCA45A0A8BF9(L_0, L_2, NULL);
		if (!L_3)
		{
			goto IL_004d;
		}
	}
	{
		float* L_4 = (float*)(&__this->___y);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5 = ___0_other;
		float L_6 = L_5.___y;
		bool L_7;
		L_7 = Single_Equals_m97C79E2B80F39214DB3F7E714FF2BCA45A0A8BF9(L_4, L_6, NULL);
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		float* L_8 = (float*)(&__this->___z);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_9 = ___0_other;
		float L_10 = L_9.___z;
		bool L_11;
		L_11 = Single_Equals_m97C79E2B80F39214DB3F7E714FF2BCA45A0A8BF9(L_8, L_10, NULL);
		if (!L_11)
		{
			goto IL_004d;
		}
	}
	{
		float* L_12 = (float*)(&__this->___w);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_13 = ___0_other;
		float L_14 = L_13.___w;
		bool L_15;
		L_15 = Single_Equals_m97C79E2B80F39214DB3F7E714FF2BCA45A0A8BF9(L_12, L_14, NULL);
		G_B5_0 = ((int32_t)(L_15));
		goto IL_004e;
	}

IL_004d:
	{
		G_B5_0 = 0;
	}

IL_004e:
	{
		V_0 = (bool)G_B5_0;
		goto IL_0051;
	}

IL_0051:
	{
		bool L_16 = V_0;
		return L_16;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Rect_Equals_mE725DE506D3F1DB92F58B876BDA42AACD4D991B5_inline (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___0_other, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	int32_t G_B5_0 = 0;
	{
		float L_0;
		L_0 = Rect_get_x_mB267B718E0D067F2BAE31BA477647FBF964916EB_inline(__this, NULL);
		V_0 = L_0;
		float L_1;
		L_1 = Rect_get_x_mB267B718E0D067F2BAE31BA477647FBF964916EB_inline((&___0_other), NULL);
		bool L_2;
		L_2 = Single_Equals_m97C79E2B80F39214DB3F7E714FF2BCA45A0A8BF9((&V_0), L_1, NULL);
		if (!L_2)
		{
			goto IL_005d;
		}
	}
	{
		float L_3;
		L_3 = Rect_get_y_mC733E8D49F3CE21B2A3D40A1B72D687F22C97F49_inline(__this, NULL);
		V_0 = L_3;
		float L_4;
		L_4 = Rect_get_y_mC733E8D49F3CE21B2A3D40A1B72D687F22C97F49_inline((&___0_other), NULL);
		bool L_5;
		L_5 = Single_Equals_m97C79E2B80F39214DB3F7E714FF2BCA45A0A8BF9((&V_0), L_4, NULL);
		if (!L_5)
		{
			goto IL_005d;
		}
	}
	{
		float L_6;
		L_6 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9_inline(__this, NULL);
		V_0 = L_6;
		float L_7;
		L_7 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9_inline((&___0_other), NULL);
		bool L_8;
		L_8 = Single_Equals_m97C79E2B80F39214DB3F7E714FF2BCA45A0A8BF9((&V_0), L_7, NULL);
		if (!L_8)
		{
			goto IL_005d;
		}
	}
	{
		float L_9;
		L_9 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8_inline(__this, NULL);
		V_0 = L_9;
		float L_10;
		L_10 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8_inline((&___0_other), NULL);
		bool L_11;
		L_11 = Single_Equals_m97C79E2B80F39214DB3F7E714FF2BCA45A0A8BF9((&V_0), L_10, NULL);
		G_B5_0 = ((int32_t)(L_11));
		goto IL_005e;
	}

IL_005d:
	{
		G_B5_0 = 0;
	}

IL_005e:
	{
		V_1 = (bool)G_B5_0;
		goto IL_0061;
	}

IL_0061:
	{
		bool L_12 = V_1;
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2_Equals_mDF84D5ED14E018609C6A9C9BAE016C1B33BCFF4C_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_other, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		float L_0 = __this->___x;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___0_other;
		float L_2 = L_1.___x;
		if ((!(((float)L_0) == ((float)L_2))))
		{
			goto IL_001f;
		}
	}
	{
		float L_3 = __this->___y;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___0_other;
		float L_5 = L_4.___y;
		G_B3_0 = ((((float)L_3) == ((float)L_5))? 1 : 0);
		goto IL_0020;
	}

IL_001f:
	{
		G_B3_0 = 0;
	}

IL_0020:
	{
		V_0 = (bool)G_B3_0;
		goto IL_0023;
	}

IL_0023:
	{
		bool L_6 = V_0;
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2Int_Equals_m32811BA0576C096D5EB5C0CFD8231478F17229A6_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___0_other, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0;
		L_0 = Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline(__this, NULL);
		int32_t L_1;
		L_1 = Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline((&___0_other), NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_0021;
		}
	}
	{
		int32_t L_2;
		L_2 = Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline(__this, NULL);
		int32_t L_3;
		L_3 = Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline((&___0_other), NULL);
		G_B3_0 = ((((int32_t)L_2) == ((int32_t)L_3))? 1 : 0);
		goto IL_0022;
	}

IL_0021:
	{
		G_B3_0 = 0;
	}

IL_0022:
	{
		V_0 = (bool)G_B3_0;
		goto IL_0025;
	}

IL_0025:
	{
		bool L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_Equals_mEDEAF86793D229455BBF9BA5B30DDF438D6CABC1_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_other, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B4_0 = 0;
	{
		float L_0 = __this->___x;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___0_other;
		float L_2 = L_1.___x;
		if ((!(((float)L_0) == ((float)L_2))))
		{
			goto IL_002d;
		}
	}
	{
		float L_3 = __this->___y;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_other;
		float L_5 = L_4.___y;
		if ((!(((float)L_3) == ((float)L_5))))
		{
			goto IL_002d;
		}
	}
	{
		float L_6 = __this->___z;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = ___0_other;
		float L_8 = L_7.___z;
		G_B4_0 = ((((float)L_6) == ((float)L_8))? 1 : 0);
		goto IL_002e;
	}

IL_002d:
	{
		G_B4_0 = 0;
	}

IL_002e:
	{
		V_0 = (bool)G_B4_0;
		goto IL_0031;
	}

IL_0031:
	{
		bool L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3Int_Equals_mE4D179C5001B77DE05E3E4BC39DC9F6AE441EBD8_inline (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___0_other, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_0 = (*(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)__this);
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_1 = ___0_other;
		bool L_2;
		L_2 = Vector3Int_op_Equality_mB10073AF3B08421C46BF678C8FF64AAD62C83617_inline(L_0, L_1, NULL);
		V_0 = L_2;
		goto IL_0010;
	}

IL_0010:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector4_Equals_m73FAA65A1A565EE28D6C9385603829894B7D4392_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___0_other, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B5_0 = 0;
	{
		float L_0 = __this->___x;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_1 = ___0_other;
		float L_2 = L_1.___x;
		if ((!(((float)L_0) == ((float)L_2))))
		{
			goto IL_003b;
		}
	}
	{
		float L_3 = __this->___y;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_4 = ___0_other;
		float L_5 = L_4.___y;
		if ((!(((float)L_3) == ((float)L_5))))
		{
			goto IL_003b;
		}
	}
	{
		float L_6 = __this->___z;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_7 = ___0_other;
		float L_8 = L_7.___z;
		if ((!(((float)L_6) == ((float)L_8))))
		{
			goto IL_003b;
		}
	}
	{
		float L_9 = __this->___w;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_10 = ___0_other;
		float L_11 = L_10.___w;
		G_B5_0 = ((((float)L_9) == ((float)L_11))? 1 : 0);
		goto IL_003c;
	}

IL_003b:
	{
		G_B5_0 = 0;
	}

IL_003c:
	{
		V_0 = (bool)G_B5_0;
		goto IL_003f;
	}

IL_003f:
	{
		bool L_12 = V_0;
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Rect_get_x_mB267B718E0D067F2BAE31BA477647FBF964916EB_inline (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->___m_XMin;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		float L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Rect_get_y_mC733E8D49F3CE21B2A3D40A1B72D687F22C97F49_inline (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->___m_YMin;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		float L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9_inline (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->___m_Width;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		float L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8_inline (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->___m_Height;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		float L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___m_X;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___m_Y;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3Int_op_Equality_mB10073AF3B08421C46BF678C8FF64AAD62C83617_inline (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___0_lhs, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___1_rhs, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B4_0 = 0;
	{
		int32_t L_0;
		L_0 = Vector3Int_get_x_m21C268D2AA4C03CE35AA49DF6155347C9748054C_inline((&___0_lhs), NULL);
		int32_t L_1;
		L_1 = Vector3Int_get_x_m21C268D2AA4C03CE35AA49DF6155347C9748054C_inline((&___1_rhs), NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_0033;
		}
	}
	{
		int32_t L_2;
		L_2 = Vector3Int_get_y_m42F43000F85D356557CAF03442273E7AA08F7F72_inline((&___0_lhs), NULL);
		int32_t L_3;
		L_3 = Vector3Int_get_y_m42F43000F85D356557CAF03442273E7AA08F7F72_inline((&___1_rhs), NULL);
		if ((!(((uint32_t)L_2) == ((uint32_t)L_3))))
		{
			goto IL_0033;
		}
	}
	{
		int32_t L_4;
		L_4 = Vector3Int_get_z_m96E180F866145E373F42358F2371EFF446F08AED_inline((&___0_lhs), NULL);
		int32_t L_5;
		L_5 = Vector3Int_get_z_m96E180F866145E373F42358F2371EFF446F08AED_inline((&___1_rhs), NULL);
		G_B4_0 = ((((int32_t)L_4) == ((int32_t)L_5))? 1 : 0);
		goto IL_0034;
	}

IL_0033:
	{
		G_B4_0 = 0;
	}

IL_0034:
	{
		V_0 = (bool)G_B4_0;
		goto IL_0037;
	}

IL_0037:
	{
		bool L_6 = V_0;
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector3Int_get_x_m21C268D2AA4C03CE35AA49DF6155347C9748054C_inline (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___m_X;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector3Int_get_y_m42F43000F85D356557CAF03442273E7AA08F7F72_inline (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___m_Y;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector3Int_get_z_m96E180F866145E373F42358F2371EFF446F08AED_inline (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___m_Z;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
