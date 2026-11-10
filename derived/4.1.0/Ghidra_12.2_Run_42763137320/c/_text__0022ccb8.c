/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0022ccb8; name: FUN_.text__0022ccb8
 */


long FUN__text__0022ccb8(long param_1,int param_2)

{
  long lVar1;
  uint uVar2;
  
  uVar2 = param_2 - *(int *)(param_1 + 0x78);
  lVar1 = param_1 + (ulong)uVar2 * 0x11ad0 + 0x7c;
  if (*(int *)(param_1 + 0x74) <= param_2 || 0x7fffffff < uVar2) {
    lVar1 = 0;
  }
  return lVar1;
}


