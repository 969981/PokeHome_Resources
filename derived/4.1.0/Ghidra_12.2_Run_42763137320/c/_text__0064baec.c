/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0064baec; name: FUN_.text__0064baec
 */


undefined8 FUN__text__0064baec(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0xb8);
  if (*(long *)(param_1 + 0x10) != 0) {
    uVar1 = 0;
  }
  return uVar1;
}


