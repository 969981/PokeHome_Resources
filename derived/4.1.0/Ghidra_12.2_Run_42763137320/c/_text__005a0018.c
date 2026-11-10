/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005a0018; name: FUN_.text__005a0018
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__005a0018(long param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1 + 0x88);
  *(undefined1 *)(param_1 + 0x109) = 0;
  if (pcVar1 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x90) = 0;
    *(undefined8 *)(param_1 + 0x98) = 0;
    *(undefined8 *)(param_1 + 0x80) = 0;
    *(undefined8 *)(param_1 + 0x88) = 0;
    (*pcVar1)(param_1 + 0xa0);
  }
  FUN__text__005a0558(*(long *)(param_1 + 0x58) + (long)*_DAT_008a0300 * 0x168);
  return;
}


