/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001a3cb4; name: FUN_.text__001a3cb4
 */


void FUN__text__001a3cb4(long param_1)

{
  long lVar1;
  undefined8 local_28;
  
  lVar1 = *(long *)(*(long *)(param_1 + 8) + 0x2d0);
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  }
  local_28 = 0;
  FUN__text__003c7960(lVar1,param_1 + 0x88,&local_28);
  local_28 = 0;
  FUN__text__003c7960(lVar1,param_1 + 0x188,&local_28);
  (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))((long *)(lVar1 + 0x48));
  return;
}


