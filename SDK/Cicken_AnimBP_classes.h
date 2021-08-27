#pragma once

// Name: DBZ-Kakarot, Version: 4.21.2


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass Cicken_AnimBP.Cicken_AnimBP_C
// 0x0A38 (FullSize[0x0E38] - InheritedSize[0x0400])
class UCicken_AnimBP_C : public UNpcAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0400(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_CD65A15E412FE0209AD4EF9030D5DD80;       // 0x0408(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_C13494174F51A8800C6A9B8F623CF4AF; // 0x0448(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_A805E42D4819870B84BB6B8C19ECF347; // 0x0490(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_32A2DFF145F11D9809262EBE54494B0D; // 0x04D8(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_A03FE94341FC1B56FF3B138C2C3EF32B; // 0x0520(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_EE82DC5245FEAF2F3B1FD3A17F8F4AC5; // 0x0568(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_358A59C44F89445ADF5DB2A8DE052CD6; // 0x05B0(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_3D81CDC04D9571D3151D56886171E4AD; // 0x05F8(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_40BEE8944B5A1994E4D139A00034C403; // 0x0640(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_A8F7048147C7C7B48B7321807EF5829D; // 0x0688(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_E8F797FB474D9DCDA3E9BB86AA3FDEB6; // 0x06D0(0x00A0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_98222263490871AD815A8FBAEA43F086; // 0x0770(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_B4B81429426B5EE39D84989CBD4E2F47; // 0x07B0(0x00A0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_9B8B75024C96B2A83CF66EA041445217; // 0x0850(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_65A79A3F4B921718F6EA5D845D8A8B04; // 0x0890(0x00A0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_A14482A64B185527DA1AA89709290A84; // 0x0930(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_38A8EB46418DA8178895B28BDEAD1841; // 0x0970(0x00A0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_138FB1D14FAF78FDB4E18297CF8AFDE9; // 0x0A10(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_994031D849DF7855E462209098FE588C; // 0x0A50(0x00A0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_799DCA234AC33A7C7A1BE08A077A42E3; // 0x0AF0(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_323870E840779E6F10811088755C09E0; // 0x0B30(0x00A0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_6A1174264A92593247FC2FBEFB10ADDE; // 0x0BD0(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_ECC5C1D34087B563D0029D8AEA83D5E2; // 0x0C10(0x00A0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_678714B7473C339F21824C8DA6D915E5; // 0x0CB0(0x0040)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_30133BA240AFE31DE31774A39CF2919F; // 0x0CF0(0x00E0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_B469BE44432474CE2337B0B3409832D8;       // 0x0DD0(0x0068)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Cicken_AnimBP.Cicken_AnimBP_C");
		return ptr;
	}



	void EvaluateGraphExposedInputs_ExecuteUbergraph_Cicken_AnimBP_AnimGraphNode_TransitionResult_EE82DC5245FEAF2F3B1FD3A17F8F4AC5();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Cicken_AnimBP_AnimGraphNode_TransitionResult_32A2DFF145F11D9809262EBE54494B0D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Cicken_AnimBP_AnimGraphNode_TransitionResult_358A59C44F89445ADF5DB2A8DE052CD6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Cicken_AnimBP_AnimGraphNode_TransitionResult_3D81CDC04D9571D3151D56886171E4AD();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Cicken_AnimBP_AnimGraphNode_TransitionResult_40BEE8944B5A1994E4D139A00034C403();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Cicken_AnimBP_AnimGraphNode_TransitionResult_A8F7048147C7C7B48B7321807EF5829D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Cicken_AnimBP_AnimGraphNode_TransitionResult_A805E42D4819870B84BB6B8C19ECF347();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Cicken_AnimBP_AnimGraphNode_TransitionResult_C13494174F51A8800C6A9B8F623CF4AF();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Cicken_AnimBP_AnimGraphNode_TransitionResult_A03FE94341FC1B56FF3B138C2C3EF32B();
	void ExecuteUbergraph_Cicken_AnimBP(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
