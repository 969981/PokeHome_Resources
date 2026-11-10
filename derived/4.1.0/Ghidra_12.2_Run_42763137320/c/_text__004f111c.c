/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004f111c; name: FUN_.text__004f111c
 */


bool FUN__text__004f111c(undefined4 param_1,long param_2,long param_3,long param_4,int param_5,
                        long *param_6)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long local_78;
  undefined8 local_68;
  
  local_68 = 0x400000000;
  lVar3 = FUN__text__004ef680(*(undefined8 *)(param_2 + 0x80),*(undefined4 *)(param_4 + 4));
  if (lVar3 == 0) {
    iVar1 = 2;
  }
  else {
    lVar7 = *(long *)(param_2 + 0x10);
    if (*(short *)(lVar3 + 0x1a) == 0x10) {
      uVar8 = *(undefined8 *)(param_2 + 0x80);
      lVar6 = *(long *)(*(long *)(lVar7 + 0x10) + 0x60);
      uVar4 = FUN__text__004ec6d4(lVar7);
      uVar5 = FUN__text__004ec6e4(lVar7);
      iVar1 = FUN__text__004e717c(lVar6 + 0x58,param_2,uVar8,lVar3,uVar4,&local_68,uVar5,
                                  *(undefined4 *)(param_3 + 0x30),*(undefined4 *)(param_3 + 0x34),
                                  param_5,&local_78);
      lVar3 = local_78 + 0x58;
    }
    else {
      uVar8 = *(undefined8 *)(param_2 + 0x80);
      uVar4 = FUN__text__004ec6d4(lVar7);
      uVar5 = FUN__text__004ec6e4(lVar7);
      uVar2 = FUN__text__004ec6f4(lVar7);
      iVar1 = FUN__text__004e81d4(param_1,param_2,uVar8,lVar3,uVar4,&local_68,uVar5,uVar2 & 1,
                                  param_4,*(undefined4 *)(param_3 + 0x34),
                                  *(int *)(param_3 + 0x38) + param_5,&local_78);
      lVar3 = local_78 + 0x388;
    }
    lVar7 = 0;
    if (local_78 != 0) {
      lVar7 = lVar3;
    }
    *param_6 = lVar7;
  }
  return iVar1 == 1;
}


