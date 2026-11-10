/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004c5adc; name: FUN_.text__004c5adc
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__004c5adc(undefined4 *param_1,long param_2)

{
  if (*(long *)(param_2 + 8) != 0) {
    if (*(long *)(param_1 + 4) == 0) {
      FUN__text__004aa280(*_DAT_008a4630,*param_1,param_2);
    }
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined4 *)(param_2 + 0x10) = 0;
  }
  return;
}


