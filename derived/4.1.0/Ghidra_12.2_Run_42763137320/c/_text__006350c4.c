/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006350c4; name: FUN_.text__006350c4
 */


undefined8 FUN__text__006350c4(long param_1)

{
  int iVar1;
  ulong uVar2;
  
  uVar2 = FUN__text__0061b010(*(undefined8 *)(param_1 + 0x2f0));
  if ((uVar2 & 1) == 0) {
    return 0;
  }
  iVar1 = FUN__text__0060fed0(*(undefined8 *)(param_1 + 0x2f0));
  if (iVar1 < 0x85) {
    if ((iVar1 != 0x19) && (iVar1 != 0x34)) {
      return 0;
    }
  }
  else if ((iVar1 != 0x85) && (iVar1 != 0x374)) {
    return 0;
  }
  return 1;
}


