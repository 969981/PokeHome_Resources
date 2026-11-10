/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0059172c; name: FUN_.text__0059172c
 */


undefined8 FUN__text__0059172c(long param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  ushort uVar4;
  short sVar5;
  undefined8 uVar6;
  long lVar7;
  float local_60 [3];
  undefined1 local_53;
  int local_50 [2];
  undefined8 local_48;
  undefined1 auStack_40 [8];
  short *local_38;
  
  local_50[0] = 0;
  local_48 = 0;
  uVar6 = FUN__text__004aed30(param_2,*(undefined4 *)(param_1 + 0x68),auStack_40,param_1 + 0x40,
                              param_1 + 0x34,(int *)(param_1 + 0x38),param_1 + 0x2c,param_1 + 0x30,
                              local_50,0,0);
  if ((int)uVar6 == 1) {
    if (*local_38 != 0x3039) {
      return 7;
    }
    *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)(local_38 + 2);
    *(uint *)(param_1 + 0x88) = (uint)(ushort)local_38[1];
    iVar1 = *(int *)(local_38 + 0xc);
    *(int *)(param_1 + 0x24) = iVar1;
    *(undefined4 *)(param_1 + 0x9c) = *(undefined4 *)(local_38 + 0xe);
    *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(local_38 + 0x10);
    uVar2 = *(uint *)(local_38 + 0x12);
    *(uint *)(param_1 + 200) = uVar2;
    uVar4 = local_38[9];
    *(uint *)(param_1 + 0xb0) = uVar2 >> 2;
    *(uint *)(param_1 + 0x98) = (uint)uVar4;
    *(uint *)(param_1 + 0xcc) = *(int *)(param_1 + 0x2c) - uVar2;
    if (*(int *)(param_1 + 0x38) == 0) {
      *(int *)(param_1 + 0x38) = iVar1 + -1;
    }
    if (local_50[0] != 0) {
      FUN__text__004dd7a8(param_1,local_50);
    }
    sVar5 = local_38[1];
    uVar3 = *(undefined4 *)(local_38 + 10);
    lVar7 = *(long *)(param_1 + 0x18);
    *(undefined4 *)(lVar7 + 0x2b0) = *(undefined4 *)(local_38 + 2);
    *(undefined4 *)(lVar7 + 0x2b4) = uVar3;
    *(undefined1 *)(lVar7 + 0x2ba) = 0;
    *(ushort *)(lVar7 + 0x2b8) = sVar5 << 7 | 0x10;
    if (*(long *)(param_1 + 0xc0) == 0) {
      lVar7 = FUN__text__00400f80(5,*(undefined4 *)(param_1 + 200));
      *(long *)(param_1 + 0xc0) = lVar7;
      if (lVar7 == 0) {
        return 0x34;
      }
    }
    (**(code **)(**(long **)(param_1 + 0x58) + 0x28))(*(long **)(param_1 + 0x58),local_60);
    iVar1 = *(int *)(param_1 + 200) + *(int *)(param_1 + 0x30);
    *(int *)(param_1 + 0x78) = iVar1 + *(int *)(param_1 + 0x9c);
    *(int *)(param_1 + 0x7c) = *(int *)(param_1 + 0xa0) + iVar1;
    FUN__text__004dd6d0(param_1,*(short *)(param_1 + 0x54) != 1,local_60);
    local_60[0] = (float)NEON_ucvtf(*(undefined4 *)(local_38 + 4));
    local_60[0] = local_60[0] * 0.001;
    local_53 = (undefined1)(int)*(float *)(*(long *)(param_1 + 0x18) + 0x318);
    (**(code **)(**(long **)(param_1 + 0x58) + 0x30))(*(long **)(param_1 + 0x58),local_60);
    uVar6 = (**(code **)(**(long **)(param_1 + 0x58) + 0x38))(*(long **)(param_1 + 0x58),1);
  }
  return uVar6;
}


