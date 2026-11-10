/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003ad78c; name: FUN_.text__003ad78c
 */


void FUN__text__003ad78c(long param_1)

{
  long lVar1;
  long lVar2;
  long *local_40;
  undefined8 uStack_38;
  long local_18;
  
  lVar1 = param_1 + 0x788;
  FUN__text__003b8e80(lVar1);
  lVar2 = FUN__text__003b8ec0(lVar1,param_1 + 0x8c0);
  if (lVar2 == 0) {
    lVar2 = FUN__text__003b8d08(lVar1,param_1 + 0x8c0);
  }
  FUN__text__003b8bdc(lVar2,0xffffffff);
  uStack_38 = *(undefined8 *)(param_1 + 0x8c0);
  local_40 = &local_18;
  local_18 = 0;
  FUN__text__003aa1c0(param_1,&local_40,0);
  if (local_18 != 0) {
    local_40 = *(long **)(local_18 + 0x88);
    (**(code **)(**(long **)(param_1 + 0x98) + 0x60))(*(long **)(param_1 + 0x98),&local_40,0);
  }
  *(undefined1 *)(param_1 + 0x7c0) = 0;
  *(undefined8 *)(param_1 + 0x7b8) = 0;
  *(undefined8 *)(param_1 + 0x7b0) = 0;
  *(undefined8 *)(param_1 + 0x7a8) = 0;
  return;
}


