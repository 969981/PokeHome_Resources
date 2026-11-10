/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002c35b8; name: FUN_.text__002c35b8
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__002c35b8(long param_1)

{
  undefined4 local_4;
  
  local_4 = 0;
  FUN__text__002b145c(*_DAT_0089f510,&local_4);
  FUN__text__002b455c();
  if (*(long *)(param_1 + 8) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 8) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 8) = 0;
  }
  return;
}


