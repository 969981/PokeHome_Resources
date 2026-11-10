/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00691e30; name: FUN_.text__00691e30
 */


void FUN__text__00691e30(long *param_1,ulong param_2,long param_3,uint param_4)

{
  long lVar1;
  
  lVar1 = FUN__text__00691e80(param_1,*param_1,
                              param_3 << 0x30 | (ulong)(param_4 & 0xffff) << 0x20 |
                              param_2 & 0xffffffff);
  *param_1 = lVar1;
  if (lVar1 != 0) {
    *(undefined1 *)(lVar1 + 0x39) = 0;
  }
  return;
}


