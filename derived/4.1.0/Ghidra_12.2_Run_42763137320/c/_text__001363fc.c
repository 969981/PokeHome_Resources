/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001363fc; name: FUN_.text__001363fc
 */


void FUN__text__001363fc(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long local_40;
  long local_38;
  
  local_38 = *(long *)(param_2 + 0x58);
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x10))();
  }
  FUN__text__001373d0(&local_40,param_2,&local_38,0,param_1,param_3);
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
  }
  lVar1 = local_40;
  lVar2 = 0x70f683;
  if (param_4 != 0) {
    lVar2 = param_4;
  }
  FUN__text__00109fd4(&local_38,lVar2);
  lVar2 = *(long *)(lVar1 + 0x640);
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
  }
  *(long *)(lVar1 + 0x640) = local_38;
  if (local_40 != 0) {
    (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
  }
  return;
}


