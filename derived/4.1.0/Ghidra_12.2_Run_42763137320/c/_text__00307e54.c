/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00307e54; name: FUN_.text__00307e54
 */


undefined8 FUN__text__00307e54(long param_1)

{
  int iVar1;
  
  iVar1 = FUN__text__006312d8(*(undefined8 *)(param_1 + 0x58));
  if ((iVar1 == 0x22) &&
     (iVar1 = FUN__text__006313c4(*(undefined8 *)(param_1 + 0x58),7), iVar1 == 0x753c)) {
    return 1;
  }
  return 0;
}


