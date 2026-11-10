/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003e9ad8; name: FUN_.text__003e9ad8
 */


void FUN__text__003e9ad8(long param_1,long param_2,uint param_3,undefined8 param_4,uint param_5)

{
  ulong uVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  
  if (*(uint *)(param_1 + 0x2b8) <= param_3) {
    return;
  }
  uVar8 = (ulong)param_3;
  uVar1 = FUN__text__003eb460(*(long *)(param_1 + 0x298) + uVar8 * 0x40);
  if (((uVar1 & 1) != 0) && (param_3 < *(uint *)(param_1 + 0x2b8))) {
    lVar4 = *(long *)(param_1 + 0x298) + uVar8 * 0x40;
    uVar1 = FUN__text__003eb460(lVar4);
    if ((uVar1 & 1) != 0) {
      FUN__text__003eb540(lVar4);
      plVar2 = (long *)FUN__text__003eb74c(lVar4);
      uVar3 = FUN__text__003eb744(lVar4);
      (**(code **)(*plVar2 + 0x18))(plVar2,uVar3);
      FUN__text__003eb334(lVar4);
    }
  }
  lVar7 = *(long *)(param_2 + 0xe8);
  lVar4 = FUN__text__006a0f04(0x40);
  if (lVar4 != 0) {
    FUN__text__006973d8(lVar4);
    plVar2 = (long *)(lVar4 + 8);
    lVar5 = *plVar2;
    plVar6 = (long *)(lVar7 + 8);
    *plVar2 = *plVar6;
    *(long **)(lVar5 + 8) = plVar6;
    *(long **)(*plVar6 + 8) = plVar2;
    *plVar6 = lVar5;
  }
  FUN__text__003eb350(*(long *)(param_1 + 0x298) + uVar8 * 0x40,lVar7,lVar4,
                      *(undefined8 *)(param_1 + 0x2c0),param_4,lVar7);
  FUN__text__003eb470(*(long *)(param_1 + 0x298) + uVar8 * 0x40,lVar7,param_5 & 1);
  return;
}


