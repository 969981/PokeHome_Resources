/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0050be60; name: FUN_.text__0050be60
 */


undefined4 FUN__text__0050be60(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  
  lVar1 = FUN__text__0050a98c();
  *(long *)(param_1 + 0x78) = lVar1;
  uVar2 = 0x34;
  if (lVar1 != 0) {
    uVar2 = 1;
  }
  return uVar2;
}


