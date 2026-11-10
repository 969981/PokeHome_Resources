/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003b9350; name: FUN_.text__003b9350
 */


void FUN__text__003b9350(float param_1,undefined4 param_2,undefined4 param_3,long param_4,
                        undefined4 param_5)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  
  if (*(int *)(param_4 + 0x1b8) != 0) {
    *(undefined4 *)(param_4 + 0x1b8) = 0;
    *(undefined1 *)(param_4 + 0x1dc) = 0;
    *(undefined4 *)(param_4 + 0x1d8) = 0;
  }
  fVar2 = *(float *)(param_4 + 0x1d4);
  fVar3 = *(float *)(param_4 + 0x1a4);
  bVar1 = true;
  if ((*(float *)(param_4 + 0x1a0) <= fVar2) && (bVar1 = false, !NAN(fVar3) && !NAN(fVar2))) {
    bVar1 = fVar3 < fVar2;
  }
  if (bVar1) {
    bVar1 = false;
    if ((fVar2 < *(float *)(param_4 + 0x1a0)) && (bVar1 = false, !NAN(param_1))) {
      bVar1 = param_1 < 0.0;
    }
    if (bVar1) {
      return;
    }
    if (fVar3 < fVar2 && 0.0 < param_1) {
      return;
    }
  }
  *(undefined4 *)(param_4 + 0x1c0) = param_5;
  *(float *)(param_4 + 0x1d8) = param_1;
  *(undefined4 *)(param_4 + 0x1d0) = param_2;
  *(undefined4 *)(param_4 + 0x1cc) = param_3;
  *(undefined8 *)(param_4 + 0x1b8) = 4;
  return;
}


