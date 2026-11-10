/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003fbcd4; name: FUN_.text__003fbcd4
 */


undefined8
FUN__text__003fbcd4(long param_1,long param_2,long *param_3,undefined4 param_4,float *param_5,
                   undefined8 param_6,uint param_7)

{
  byte bVar1;
  undefined1 uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  float fVar7;
  
  *(long *)(param_1 + 0x50) = param_2;
  if (*param_3 < 0) {
    uVar6 = 0x1f;
  }
  else {
    *(undefined4 *)(param_1 + 0x80) = param_4;
    uVar4 = (**(code **)(**(long **)(param_2 + 0x610) + 0x18))(*(long **)(param_2 + 0x610),param_3);
    if (uVar4 - 1 < param_7) {
      uVar3 = 0;
      if (uVar4 != 0) {
        uVar3 = param_7 / uVar4;
      }
      if (param_7 == uVar3 * uVar4) {
        *(uint *)(param_1 + 0x60) = uVar4;
        *(uint *)(param_1 + 0xa0) = uVar4;
        fVar7 = *param_5;
        if (fVar7 <= 1.0) {
          fVar7 = 1.0;
        }
        *(float *)(param_1 + 0x84) = fVar7;
        uVar3 = 0;
        if (uVar4 != 0) {
          uVar3 = (uint)param_5[1] / uVar4;
        }
        *(uint *)(param_1 + 0x8c) = uVar3 * uVar4;
        fVar7 = (float)*param_3;
        if ((long)(ulong)(uint)param_5[2] <= *param_3) {
          fVar7 = param_5[2];
        }
        *(float *)(param_1 + 0x90) = fVar7;
        bVar1 = *(byte *)(param_5 + 3);
        if (bVar1 < 2) {
          bVar1 = 1;
        }
        *(byte *)(param_1 + 0xc1) = bVar1;
        uVar2 = *(undefined1 *)((long)param_5 + 0xd);
        *(undefined8 *)(param_1 + 0x78) = 0;
        *(undefined1 *)(param_1 + 100) = uVar2;
        if (*param_3 == 0) {
          *(undefined1 *)(param_1 + 0x6c) = 0;
          *(undefined1 *)(param_1 + 0x67) = 1;
          uVar6 = FUN__text__003fbe20(param_1,param_6,param_7);
          iVar5 = (int)uVar6;
        }
        else {
          uVar6 = FUN__text__003fbe20(param_1,param_6,param_7);
          iVar5 = (int)uVar6;
        }
        if (iVar5 == 1) {
          return uVar6;
        }
      }
    }
    uVar6 = 2;
  }
  *(undefined1 *)(param_1 + 0x6c) = 0;
  *(undefined1 *)(param_1 + 0x68) = 1;
  return uVar6;
}


