/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002c44b0; name: FUN_.text__002c44b0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__002c44b0(int *param_1)

{
  long lVar1;
  undefined4 local_4;
  
  lVar1 = *(long *)(param_1 + 2);
  if (lVar1 != 0) {
    if (*param_1 - 1U < 3) {
      local_4 = 0;
      FUN__text__002b145c(*_DAT_0089f510,&local_4);
      FUN__text__002b4930();
      lVar1 = *(long *)(param_1 + 2);
    }
    FUN__text__005e896c(lVar1,0x7146c6,0xffffffff,0x10);
  }
  return;
}


