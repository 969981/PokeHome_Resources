/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0013a4b0; name: FUN_.text__0013a4b0
 */


void FUN__text__0013a4b0(long param_1,ulong param_2,uint param_3)

{
  long lVar1;
  
  lVar1 = 0x722780;
  if (*(int *)(param_1 + 0x64c) != 0) {
    lVar1 = 0x722af0;
  }
  FUN__text__0012c378(param_1 + 0x110,
                      lVar1 + (param_2 & 0xffffffff) * 0x50 + (ulong)(param_3 & 0xff) * 8);
  return;
}


