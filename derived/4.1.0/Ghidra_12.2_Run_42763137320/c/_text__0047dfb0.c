/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0047dfb0; name: FUN_.text__0047dfb0
 */


void FUN__text__0047dfb0(undefined4 *param_1,long param_2,uint param_3,uint param_4,
                        undefined4 param_5,uint param_6,uint param_7,undefined8 param_8,long param_9
                        )

{
  uint uVar1;
  long lVar2;
  float *pfVar3;
  float *pfVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auStack_80 [8];
  float fStack_78;
  uint local_74;
  
  local_74 = param_3;
  if ((*(char *)((long)param_1 + 0x16) == '\0') || ((param_6 & 0xf00) != 0x100)) {
    uVar7 = 0;
    if (param_3 < 2) {
      param_3 = 1;
    }
    uVar6 = (ulong)param_3;
    do {
      FUN__text__004828c0(*param_1,*(undefined4 *)(param_2 + 0x24),*(undefined4 *)(param_2 + 0x28),
                          param_2,param_9 + uVar7 * 4,param_5,*(undefined4 *)(param_2 + 0x2c),
                          param_6,param_8);
      param_2 = param_2 + 0x30;
      uVar7 = (ulong)((int)uVar7 + param_7);
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  else {
    if (param_3 < 2) {
      param_3 = 1;
    }
    uVar7 = (ulong)param_3;
    uVar6 = 0;
    if ((param_6 & 0xff9c0000) == 0) {
      do {
        fVar8 = *(float *)(param_2 + 0x1c) * *(float *)(param_2 + 0x1c);
        fVar9 = *(float *)(param_2 + 0x24);
        fVar10 = fVar8 + *(float *)(param_2 + 0x18) * *(float *)(param_2 + 0x18) +
                 *(float *)(param_2 + 0x20) * *(float *)(param_2 + 0x20);
        if ((0.0 < fVar10) && (fVar8 = fVar8 / fVar10, fVar9 <= fVar8)) {
          fVar9 = fVar8;
        }
        FUN__text__004828c0(*param_1,fVar9,*(undefined4 *)(param_2 + 0x28),param_2,
                            param_9 + uVar6 * 4,param_5,*(undefined4 *)(param_2 + 0x2c),param_6,
                            param_8);
        uVar6 = (ulong)((int)uVar6 + param_7);
        uVar7 = uVar7 - 1;
        param_2 = param_2 + 0x30;
      } while (uVar7 != 0);
    }
    else {
      do {
        fVar8 = *(float *)(param_2 + 0x1c);
        fVar9 = *(float *)(param_2 + 0x24);
        if ((fVar8 < 0.0) &&
           (fVar10 = fVar8 * fVar8 + *(float *)(param_2 + 0x18) * *(float *)(param_2 + 0x18) +
                     *(float *)(param_2 + 0x20) * *(float *)(param_2 + 0x20), 0.0 < fVar10)) {
          fVar10 = -fVar8 / SQRT(fVar10);
          fVar8 = ABS(fVar10);
          fVar8 = fVar8 * (fVar8 * (fVar8 * (fVar8 * (fVar8 * (fVar8 * 84.31466 + -242.71996) +
                                                     262.81305) + -131.11235) + 29.66154) +
                          -1.4518384) + 0.0328437;
          if (fVar10 < 0.0) {
            fVar8 = -fVar8;
          }
          if (fVar9 <= fVar8 * 0.31830987) {
            fVar9 = fVar8 * 0.31830987;
          }
        }
        FUN__text__004828c0(*param_1,fVar9,*(undefined4 *)(param_2 + 0x28),param_2,
                            param_9 + uVar6 * 4,param_5,*(undefined4 *)(param_2 + 0x2c),param_6,
                            param_8);
        uVar6 = (ulong)((int)uVar6 + param_7);
        uVar7 = uVar7 - 1;
        param_2 = param_2 + 0x30;
      } while (uVar7 != 0);
    }
  }
  if ((float)param_1[4] < 1.0) {
    lVar2 = -((ulong)param_7 * 4 + 0xf & 0x7fffffff0);
    FUN__text__00485210(param_1[1],param_1[2],param_1[3],*param_1,
                        *(undefined1 *)((long)param_1 + 0x15),param_4,param_6,auStack_80 + lVar2,
                        param_8);
    uVar1 = ((param_6 & 0xff) + 3 & 0x1fc) * (param_4 & 0xff);
    if (uVar1 != 0) {
      uVar6 = 0;
      uVar7 = 0;
      fVar9 = 1.0 - (float)param_1[4];
      if (local_74 < 2) {
        local_74 = 1;
      }
      do {
        fVar8 = (float)param_1[4];
        pfVar3 = (float *)(param_9 + 8 + uVar6 * 4);
        pfVar4 = pfVar3;
        uVar5 = (ulong)uVar1;
        do {
          uVar5 = uVar5 - 4;
          pfVar4[-2] = pfVar4[-2] * fVar8;
          pfVar4[-1] = pfVar4[-1] * fVar8;
          *pfVar4 = *pfVar4 * fVar8;
          pfVar4[1] = pfVar4[1] * fVar8;
          pfVar4 = pfVar4 + 4;
        } while (uVar5 != 0);
        pfVar4 = (float *)(auStack_80 + lVar2 + 8);
        uVar5 = (ulong)uVar1;
        do {
          fVar8 = pfVar4[-1];
          uVar5 = uVar5 - 4;
          fVar10 = *pfVar4;
          fVar11 = pfVar4[1];
          pfVar3[-2] = pfVar3[-2] + fVar9 * pfVar4[-2];
          pfVar3[-1] = pfVar3[-1] + fVar9 * fVar8;
          *pfVar3 = *pfVar3 + fVar9 * fVar10;
          pfVar3[1] = pfVar3[1] + fVar9 * fVar11;
          pfVar3 = pfVar3 + 4;
          pfVar4 = pfVar4 + 4;
        } while (uVar5 != 0);
        uVar7 = uVar7 + 1;
        uVar6 = (ulong)((int)uVar6 + param_7);
      } while (uVar7 != local_74);
    }
  }
  return;
}


