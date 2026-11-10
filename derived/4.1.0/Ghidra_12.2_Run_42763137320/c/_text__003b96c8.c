/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003b96c8; name: FUN_.text__003b96c8
 */


void FUN__text__003b96c8(long param_1)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  bool bVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  ulong auStack_80 [3];
  undefined8 uStack_68;
  ulong local_60 [2];
  ulong local_50 [2];
  
  if (*(uint *)(param_1 + 0x1c0) <= *(uint *)(param_1 + 0x1bc)) {
    uVar8 = *(undefined4 *)(param_1 + 0x1c4);
    *(undefined4 *)(param_1 + 0x1b8) = 0;
    *(undefined1 *)(param_1 + 0x1dc) = 0;
    *(undefined4 *)(param_1 + 0x1d8) = 0;
    if (*(code **)(param_1 + 0x120) != (code *)0x0) {
      local_50[0] = CONCAT44(local_50[0]._4_4_,uVar8);
      local_60[0] = CONCAT44(local_60[0]._4_4_,*(undefined4 *)(param_1 + 0x1d4));
      (**(code **)(param_1 + 0x120))(param_1 + 0x140,local_50,local_60);
    }
    *(undefined4 *)(param_1 + 0x1d4) = uVar8;
    *(undefined4 *)(param_1 + 0x1b8) = 0;
    return;
  }
  uVar1 = *(uint *)(param_1 + 0x1bc) + 1;
  fVar7 = (float)uVar1;
  *(uint *)(param_1 + 0x1bc) = uVar1;
  fVar9 = *(float *)(param_1 + 0x1d4);
  fVar7 = *(float *)(param_1 + 0x1c8) +
          fVar7 * (*(float *)(param_1 + 0x1cc) + fVar7 * *(float *)(param_1 + 0x1d0) * 0.5);
  *(float *)(param_1 + 0x1d8) = fVar7 - fVar9;
  if (*(code **)(param_1 + 0x120) != (code *)0x0) {
    local_50[0] = CONCAT44(local_50[0]._4_4_,fVar7);
    local_60[0] = CONCAT44(local_60[0]._4_4_,fVar9);
    (**(code **)(param_1 + 0x120))(param_1 + 0x140,local_50,local_60);
  }
  fVar5 = *(float *)(param_1 + 0x1a0);
  *(float *)(param_1 + 0x1d4) = fVar7;
  if ((fVar5 <= fVar9) && (fVar6 = *(float *)(param_1 + 0x1a4), fVar9 <= fVar6)) {
    bVar3 = true;
    if ((fVar5 <= fVar7) && (bVar3 = false, !NAN(fVar6) && !NAN(fVar7))) {
      bVar3 = fVar6 < fVar7;
    }
    if (bVar3) {
      if (*(char *)(param_1 + 0x1ac) != '\0') {
        lVar2 = param_1 + 0x10;
        FUN__text__003b9bfc(lVar2);
        local_50[0] = (ulong)(uint)*(float *)(param_1 + 0x1d4);
        fVar7 = *(float *)(param_1 + 0x1a0);
        if (*(float *)(param_1 + 0x1a0) <= *(float *)(param_1 + 0x1d4)) {
          fVar7 = *(float *)(param_1 + 0x1a4);
        }
        local_50[1] = 0;
        local_60[0] = (ulong)(uint)*(float *)(param_1 + 0x1d8);
        local_60[1] = 0;
        auStack_80[0] = (ulong)(uint)-*(float *)(param_1 + 0x1d8);
        auStack_80[2] = (ulong)(uint)fVar7;
        auStack_80[1] = 0;
        uStack_68 = 0;
        FUN__text__003b9c20(lVar2,0,local_50,local_60);
        FUN__text__003b9c20(lVar2,*(undefined4 *)(param_1 + 0x1b0),auStack_80 + 2,auStack_80);
        *(undefined4 *)(param_1 + 0x1bc) = 0;
        *(undefined4 *)(param_1 + 0x1c0) = *(undefined4 *)(param_1 + 0x1b0);
        *(float *)(param_1 + 0x1c4) = fVar7;
        *(undefined4 *)(param_1 + 0x1b8) = 2;
        return;
      }
      *(undefined1 *)(param_1 + 0x1dc) = 0;
      *(undefined4 *)(param_1 + 0x1d8) = 0;
      if (fVar5 <= fVar7) {
        fVar5 = fVar6;
      }
      *(undefined4 *)(param_1 + 0x1b8) = 0;
      if (*(code **)(param_1 + 0x120) != (code *)0x0) {
        local_50[0] = CONCAT44(local_50[0]._4_4_,fVar5);
        local_60[0] = CONCAT44(local_60[0]._4_4_,fVar7);
        (**(code **)(param_1 + 0x120))(param_1 + 0x140,local_50,local_60);
      }
      *(float *)(param_1 + 0x1d4) = fVar5;
      return;
    }
  }
  if ((((*(char *)(param_1 + 0x1dc) != '\0') && (0.0 < *(float *)(param_1 + 0x1d8))) &&
      (fVar5 = *(float *)(param_1 + 0x1e0), fVar9 <= fVar5)) && (fVar5 <= fVar7)) {
LAB__text__003b98c4:
    if (*(code **)(param_1 + 0x120) != (code *)0x0) {
      local_50[0] = CONCAT44(local_50[0]._4_4_,fVar5);
      local_60[0] = CONCAT44(local_60[0]._4_4_,fVar7);
      (**(code **)(param_1 + 0x120))(param_1 + 0x140,local_50,local_60);
    }
    *(float *)(param_1 + 0x1d4) = fVar5;
    *(undefined4 *)(param_1 + 0x1b8) = 0;
    *(undefined1 *)(param_1 + 0x1dc) = 0;
    *(undefined4 *)(param_1 + 0x1d8) = 0;
    return;
  }
  if ((*(char *)(param_1 + 0x1dc) != '\0') && (*(float *)(param_1 + 0x1d8) < 0.0)) {
    fVar5 = *(float *)(param_1 + 0x1e0);
    bVar3 = false;
    bVar4 = true;
    if (fVar7 <= fVar5) {
      bVar3 = false;
      bVar4 = true;
      if (!NAN(fVar5) && !NAN(fVar9)) {
        bVar3 = fVar5 == fVar9;
        bVar4 = fVar9 <= fVar5;
      }
    }
    if (!bVar4 || bVar3) goto LAB__text__003b98c4;
  }
  return;
}


