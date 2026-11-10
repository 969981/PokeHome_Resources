/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006a4560; name: FUN_.text__006a4560
 */


void FUN__text__006a4560(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  if (0 < *(int *)((long)param_1 + 0x1c)) {
    lVar1 = 0;
    lVar2 = 0;
    do {
      FUN__text__006a45fc(param_1[4] + lVar1);
      lVar2 = lVar2 + 1;
      lVar1 = lVar1 + 0x68;
    } while (lVar2 < *(int *)((long)param_1 + 0x1c));
  }
  *param_1 = 0;
  param_1[2] = 0;
  param_1[4] = 0;
  return;
}


