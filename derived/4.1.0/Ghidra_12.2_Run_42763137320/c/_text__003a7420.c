/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003a7420; name: FUN_.text__003a7420
 */


void FUN__text__003a7420(long param_1,long *param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  long local_38;
  long local_18;
  
  *(undefined8 *)(param_1 + 0x140) = *(undefined8 *)(*param_3 + 0x88);
  *(undefined1 *)(param_1 + 0x149) = 1;
  if (*(long *)(param_1 + 0xc0) != 0) {
    lVar1 = *param_2;
    if (lVar1 != 0) {
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
    }
    lVar2 = *param_3;
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
    }
    local_18 = lVar1;
    if (lVar1 != 0) {
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
    }
    local_38 = lVar2;
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
    }
    (**(code **)(param_1 + 0xc0))(param_1 + 0xe0,&local_18,&local_38);
    if (local_38 != 0) {
      (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
      local_38 = 0;
    }
    if (local_18 != 0) {
      (**(code **)(*(long *)(local_18 + 0x48) + 0x18))();
    }
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
    }
    if (lVar1 != 0) {
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))((long *)(lVar1 + 0x48));
    }
  }
  return;
}


