/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00136338; name: FUN_.text__00136338
 */


void FUN__text__00136338(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long local_38;
  long local_18;
  
  local_18 = *(long *)(param_2 + 0x58);
  if (local_18 != 0) {
    (**(code **)(*(long *)(local_18 + 0x48) + 0x10))();
  }
  FUN__text__001370b0(&local_38,param_2,&local_18,0,param_1);
  if (local_18 != 0) {
    (**(code **)(*(long *)(local_18 + 0x48) + 0x18))();
  }
  lVar1 = local_38;
  lVar2 = 0x70f683;
  if (param_3 != 0) {
    lVar2 = param_3;
  }
  FUN__text__00109fd4(&local_18,lVar2);
  lVar2 = *(long *)(lVar1 + 0x640);
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
  }
  *(long *)(lVar1 + 0x640) = local_18;
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
  }
  return;
}


