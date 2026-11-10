/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00685cc4; name: FUN_.text__00685cc4
 */


void FUN__text__00685cc4(long param_1,undefined8 param_2)

{
  int iVar1;
  
  *(undefined8 *)(param_1 + 0xa8) = param_2;
  iVar1 = FUN__text__00685f68(*(undefined8 *)(param_1 + 0x70),param_1);
  if (iVar1 != 0) {
    *(undefined8 *)(param_1 + 0xa8) = 0;
  }
  return;
}


