/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003cbba8; name: FUN_.text__003cbba8
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN__text__003cbba8(long param_1)

{
  bool bVar1;
  byte bVar2;
  
  if (*(long *)(param_1 + 0x18) == 0) {
    bVar1 = false;
  }
  else {
    bVar1 = *(char *)(*(long *)(param_1 + 0x18) + 0x170) != '\0';
  }
  bVar2 = FUN__text__003ce4ec(*_DAT_0089f588,0);
  return bVar1 & bVar2;
}


