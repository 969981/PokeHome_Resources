/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001a90e4; name: FUN_.text__001a90e4
 */


uint FUN__text__001a90e4(long param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  long local_38;
  
  uVar4 = param_2[1];
  uVar1 = *(undefined4 *)(param_2 + 2);
  *(undefined8 *)(param_1 + 0x20) = *param_2;
  *(undefined4 *)(param_1 + 0x30) = uVar1;
  lVar3 = *(long *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x28) = uVar4;
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl();
  }
  uVar4 = *(undefined8 *)(lVar3 + 0x10);
  lVar3 = *(long *)(lVar3 + 0x158);
  if (lVar3 != 0) {
    plVar5 = (long *)(lVar3 + 0x48);
    (**(code **)(*plVar5 + 0x10))(plVar5);
    (**(code **)(*plVar5 + 0x10))(plVar5);
  }
  local_38 = lVar3;
  uVar2 = FUN__text__00194730(uVar4,&local_38,(undefined8 *)(param_1 + 0x20));
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    local_38 = 0;
  }
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
  }
  return uVar2 & 1;
}


