/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003b93bc; name: FUN_.text__003b93bc
 */


void FUN__text__003b93bc(float param_1,long param_2)

{
  float fVar1;
  
  if (*(int *)(param_2 + 0x1b8) == 4) {
    *(undefined1 *)(param_2 + 0x1dc) = 1;
    fVar1 = *(float *)(param_2 + 0x1d4) / param_1;
    if (0.0 <= *(float *)(param_2 + 0x1d8)) {
      fVar1 = fVar1 + 1.0;
    }
    *(float *)(param_2 + 0x1e0) = (float)(int)fVar1 * param_1;
  }
  return;
}


