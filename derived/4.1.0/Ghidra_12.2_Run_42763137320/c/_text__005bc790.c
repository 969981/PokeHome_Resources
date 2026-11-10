/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005bc790; name: FUN_.text__005bc790
 */


void FUN__text__005bc790(long param_1,undefined8 param_2)

{
  long *plVar1;
  int iVar2;
  undefined8 uVar3;
  long *plVar4;
  long local_58;
  long local_50;
  undefined8 local_48;
  
  local_50 = *(long *)(param_1 + 0xb8) - *(long *)(param_1 + 0xb0) >> 3;
  FUN__text__005bc87c(&local_48,*(undefined8 *)(param_1 + 8),&local_50);
  if (*(long *)(param_1 + 0xe0) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0xe0) + 0x48) + 0x18))();
  }
  plVar4 = *(long **)(param_1 + 0xb0);
  plVar1 = *(long **)(param_1 + 0xb8);
  *(undefined8 *)(param_1 + 0xe0) = local_48;
  if (plVar4 != plVar1) {
    iVar2 = 0;
    do {
      uVar3 = *(undefined8 *)(param_1 + 0xe0);
      local_58 = *plVar4;
      if (local_58 != 0) {
        (**(code **)(*(long *)(local_58 + 0x48) + 0x10))();
      }
      FUN__text__005a15b0(uVar3,iVar2,&local_58);
      if (local_58 != 0) {
        (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
        local_58 = 0;
      }
      plVar4 = plVar4 + 1;
      iVar2 = iVar2 + 1;
    } while (plVar4 != plVar1);
    local_48 = *(undefined8 *)(param_1 + 0xe0);
  }
  FUN__text__005a1860(local_48,param_2);
  return;
}


