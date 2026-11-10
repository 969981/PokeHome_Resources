/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003b9408; name: FUN_.text__003b9408
 */


void FUN__text__003b9408(long param_1)

{
  long lVar1;
  uint uVar2;
  bool bVar3;
  float fVar4;
  ulong auStack_60 [3];
  undefined8 uStack_48;
  ulong local_40 [3];
  undefined8 uStack_28;
  
  if (*(char *)(param_1 + 0x1b4) == '\0') {
    if (*(int *)(param_1 + 0x1b8) != 0) {
      uVar2 = *(int *)(param_1 + 0x1b8) - 1;
      if (uVar2 < 4) {
                    /* WARNING: Could not emulate address calculation at 0x003b9540 */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(&UNK__text__003b9550 + (ulong)*(byte *)((ulong)uVar2 + 0x73a7b5) * 4))();
        return;
      }
      return;
    }
    fVar4 = *(float *)(param_1 + 0x1d4);
    bVar3 = true;
    if ((*(float *)(param_1 + 0x1a0) <= fVar4) &&
       (bVar3 = false, !NAN(*(float *)(param_1 + 0x1a4)) && !NAN(fVar4))) {
      bVar3 = *(float *)(param_1 + 0x1a4) < fVar4;
    }
    if (bVar3) {
      lVar1 = param_1 + 0x10;
      FUN__text__003b9bfc(lVar1);
      local_40[2] = (ulong)(uint)*(float *)(param_1 + 0x1d4);
      fVar4 = *(float *)(param_1 + 0x1a0);
      if (*(float *)(param_1 + 0x1a0) <= *(float *)(param_1 + 0x1d4)) {
        fVar4 = *(float *)(param_1 + 0x1a4);
      }
      local_40[0] = (ulong)(uint)*(float *)(param_1 + 0x1d8);
      local_40[1] = 0;
      uStack_28 = 0;
      auStack_60[0] = (ulong)(uint)-*(float *)(param_1 + 0x1d8);
      auStack_60[2] = (ulong)(uint)fVar4;
      auStack_60[1] = 0;
      uStack_48 = 0;
      FUN__text__003b9c20(lVar1,0,local_40 + 2,local_40);
      FUN__text__003b9c20(lVar1,*(undefined4 *)(param_1 + 0x1b0),auStack_60 + 2,auStack_60);
      *(undefined4 *)(param_1 + 0x1bc) = 0;
      *(undefined4 *)(param_1 + 0x1c0) = *(undefined4 *)(param_1 + 0x1b0);
      *(float *)(param_1 + 0x1c4) = fVar4;
      *(undefined4 *)(param_1 + 0x1b8) = 2;
      return;
    }
  }
  return;
}


