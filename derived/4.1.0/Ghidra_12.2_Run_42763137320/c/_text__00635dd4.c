/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00635dd4; name: FUN_.text__00635dd4
 */


bool FUN__text__00635dd4(long param_1)

{
  int iVar1;
  
  iVar1 = FUN__text__0060fed0(*(undefined8 *)(param_1 + 0x2f0));
  if ((iVar1 == 0x3ef) ||
     (iVar1 = FUN__text__0060fed0(*(undefined8 *)(param_1 + 0x2f0)), iVar1 == 0x3f0)) {
    iVar1 = FUN__text__006229b0(*(undefined8 *)(param_1 + 0x2f0));
    return iVar1 != 0;
  }
  return false;
}


