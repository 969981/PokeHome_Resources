/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00631324; name: FUN_.text__00631324
 */


undefined8 FUN__text__00631324(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN__text__0060fed0(*(undefined8 *)(param_1 + 0x2f0));
  if (iVar1 == 0x365) {
    uVar2 = FUN__text__006229b0(*(undefined8 *)(param_1 + 0x2f0));
    return uVar2;
  }
  return 0;
}


