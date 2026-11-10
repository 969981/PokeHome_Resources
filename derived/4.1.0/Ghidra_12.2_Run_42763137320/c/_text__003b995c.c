/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003b995c; name: FUN_.text__003b995c
 */


void FUN__text__003b995c(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  bool bVar4;
  bool bVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float local_38;
  float fStack_34;
  
  fVar8 = *(float *)(param_1 + 0x1d4);
  fVar6 = *(float *)(param_1 + 0x1d8);
  fVar7 = fVar8 + fVar6;
  local_38 = fVar8;
  if ((*(char *)(param_1 + 0x1dc) != '\0') && (0.0 < fVar6)) {
    fVar9 = *(float *)(param_1 + 0x1e0);
    bVar4 = false;
    bVar5 = true;
    if (fVar8 <= fVar9) {
      bVar4 = false;
      bVar5 = true;
      if (!NAN(fVar9) && !NAN(fVar7)) {
        bVar4 = fVar9 == fVar7;
        bVar5 = fVar7 <= fVar9;
      }
    }
    if (!bVar5 || bVar4) goto LAB__text__003b9a80;
  }
  if ((*(char *)(param_1 + 0x1dc) != '\0') && (fVar6 < 0.0)) {
    fVar9 = *(float *)(param_1 + 0x1e0);
    bVar4 = false;
    bVar5 = true;
    if (fVar7 <= fVar9) {
      bVar4 = false;
      bVar5 = true;
      if (!NAN(fVar9) && !NAN(fVar8)) {
        bVar4 = fVar9 == fVar8;
        bVar5 = fVar8 <= fVar9;
      }
    }
    if (!bVar5 || bVar4) {
LAB__text__003b9a80:
      if (*(code **)(param_1 + 0x120) != (code *)0x0) {
        fStack_34 = fVar9;
        (**(code **)(param_1 + 0x120))(param_1 + 0x140,&fStack_34,&local_38);
      }
      *(float *)(param_1 + 0x1d4) = fVar9;
      *(undefined4 *)(param_1 + 0x1b8) = 0;
      *(undefined1 *)(param_1 + 0x1dc) = 0;
      *(undefined4 *)(param_1 + 0x1d8) = 0;
      return;
    }
  }
  if (*(code **)(param_1 + 0x120) != (code *)0x0) {
    fStack_34 = fVar7;
    (**(code **)(param_1 + 0x120))(param_1 + 0x140,&fStack_34,&local_38);
  }
  fVar6 = *(float *)(param_1 + 0x1a0);
  *(float *)(param_1 + 0x1d4) = fVar7;
  if (((fVar8 < fVar6) || (fVar9 = *(float *)(param_1 + 0x1a4), fVar9 < fVar8)) ||
     ((fVar6 <= fVar7 && (fVar7 <= fVar9)))) {
    uVar1 = *(int *)(param_1 + 0x1bc) + 1;
    *(uint *)(param_1 + 0x1bc) = uVar1;
    if ((*(uint *)(param_1 + 0x1c0) <= uVar1) && (*(char *)(param_1 + 0x1dc) == '\0')) {
      *(undefined4 *)(param_1 + 0x1bc) = 0;
      fVar6 = *(float *)(param_1 + 0x1d0) + *(float *)(param_1 + 0x1d8);
      fVar7 = *(float *)(param_1 + 0x1cc);
      *(float *)(param_1 + 0x1d8) = fVar6;
      lVar2 = 0x1cc;
      if (fVar7 <= fVar6) {
        lVar2 = 0x1d8;
      }
      lVar3 = 0x1cc;
      if (fVar6 <= fVar7) {
        lVar3 = 0x1d8;
      }
      if (fVar7 <= 0.0) {
        lVar3 = lVar2;
      }
      *(undefined4 *)(param_1 + 0x1d8) = *(undefined4 *)(param_1 + lVar3);
    }
  }
  else if (*(char *)(param_1 + 0x1ac) == '\0') {
    *(undefined1 *)(param_1 + 0x1dc) = 0;
    *(undefined4 *)(param_1 + 0x1d8) = 0;
    if (fVar6 <= fVar7) {
      fVar6 = fVar9;
    }
    *(undefined4 *)(param_1 + 0x1b8) = 0;
    if (*(code **)(param_1 + 0x120) != (code *)0x0) {
      local_38 = fVar7;
      fStack_34 = fVar6;
      (**(code **)(param_1 + 0x120))(param_1 + 0x140,&fStack_34,&local_38);
    }
    *(float *)(param_1 + 0x1d4) = fVar6;
    return;
  }
  return;
}


