/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001d76dc; name: FUN_.text__001d76dc
 */


void FUN__text__001d76dc(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long local_40;
  long local_38;
  
  *(undefined8 *)(param_1 + 0x30) = 0xd3e246895da5aa50;
  *(undefined8 *)(param_1 + 0x28) = 0x391abf303cb31731;
  *(undefined8 *)(param_1 + 0x38) = 0x176cee07a71ffd76;
  uVar1 = FUN__text__001281d4(*(undefined8 *)(param_1 + 8));
  FUN__text__001156d0(&local_38,uVar1,0);
  lVar2 = *(long *)(local_38 + 0x60);
  local_40 = lVar2;
  if ((lVar2 == 0) || ((**(code **)(*(long *)(lVar2 + 0x48) + 0x10))(), local_38 != 0)) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 == 0) goto LAB__text__001d782c;
    if (lVar2 == 0) goto LAB__text__001d77a8;
  }
  else {
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 == 0) {
LAB__text__001d782c:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl();
    }
  }
  (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
LAB__text__001d77a8:
  local_38 = 0x1f28316c8ced4f4f;
  FUN__text__001ac1fc(lVar3,(undefined8 *)(param_1 + 0x30),&local_40,&local_38);
  if (local_40 != 0) {
    (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
    local_40 = 0;
  }
  *(undefined4 *)(param_1 + 0x40) = 0;
  FUN__text__001d7848(param_1);
  *(undefined2 *)(param_1 + 0x44) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  FUN__text__001d7848(param_1);
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
  }
  return;
}


