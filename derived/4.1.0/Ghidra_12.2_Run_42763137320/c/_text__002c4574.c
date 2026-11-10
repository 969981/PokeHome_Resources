/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002c4574; name: FUN_.text__002c4574
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__002c4574(int *param_1)

{
  long lVar1;
  undefined4 local_4;
  
  lVar1 = *(long *)(param_1 + 2);
  if (lVar1 != 0) {
    if (*param_1 - 1U < 3) {
      local_4 = 0;
      FUN__text__002b145c(*_DAT_0089f510,&local_4);
      FUN__text__002b48f0();
      lVar1 = *(long *)(param_1 + 2);
      if (lVar1 == 0) {
        return;
      }
    }
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
    param_1[2] = 0;
    param_1[3] = 0;
  }
  return;
}


