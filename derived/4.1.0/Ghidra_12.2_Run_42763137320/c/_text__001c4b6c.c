/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001c4b6c; name: FUN_.text__001c4b6c
 */


void FUN__text__001c4b6c(long param_1,int param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long local_48;
  long local_40;
  undefined8 local_38;
  
  *(undefined8 *)(param_1 + 0x30) = 0xd3e246895da5aa50;
  *(undefined8 *)(param_1 + 0x28) = 0x391abf303cb31731;
  lVar2 = *(long *)(*(long *)(param_1 + 8) + 0x2d0);
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  local_38 = 0;
  if (param_2 != 2) {
    uVar1 = FUN__text__001281d4(*(undefined8 *)(param_1 + 8));
    FUN__text__001156d0(&local_40,uVar1,0);
    lVar4 = *(long *)(local_40 + 0x60);
    if (lVar4 == 0) {
LAB__text__001c4c6c:
      (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
    }
    else {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
      if (local_40 != 0) goto LAB__text__001c4c6c;
    }
    local_38 = 0x1f1dbf6c8ce43914;
    goto LAB__text__001c4c88;
  }
  uVar1 = FUN__text__001281d4(*(undefined8 *)(param_1 + 8));
  FUN__text__001156d0(&local_40,uVar1,3);
  lVar4 = *(long *)(local_40 + 0x60);
  if (lVar4 == 0) {
LAB__text__001c4c14:
    (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
  }
  else {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
    if (local_40 != 0) goto LAB__text__001c4c14;
  }
  local_38 = 0x5e27a64fd90fa579;
LAB__text__001c4c88:
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl();
  }
  local_48 = lVar4;
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  FUN__text__001ac1fc(lVar3,(undefined8 *)(param_1 + 0x30),&local_48,&local_38);
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
    local_48 = 0;
  }
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
  }
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
  }
  return;
}


