/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001b9bcc; name: FUN_.text__001b9bcc
 */


void FUN__text__001b9bcc(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 local_50;
  long local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 local_34;
  
  if (*(char *)(param_1 + 0x5a58) != '\0') {
    return;
  }
  uVar1 = FUN__text__001281d4(*(undefined8 *)(param_1 + 8));
  FUN__text__001156d0(&local_40,uVar1,0);
  lVar2 = CONCAT44(uStack_3c,local_40);
  lVar3 = *(long *)(lVar2 + 0x60);
  if (lVar3 == 0) {
LAB__text__001b9c40:
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
  }
  else {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
    lVar2 = CONCAT44(uStack_3c,local_40);
    if (lVar2 != 0) goto LAB__text__001b9c40;
  }
  if (*(long *)(param_1 + 0x18) == 0) {
LAB__text__001b9d18:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl();
  }
  local_40 = *(undefined4 *)(param_1 + 0x5a5c);
  uStack_3c = (undefined4)*(undefined8 *)(param_1 + 0x5a60);
  uStack_38 = (undefined4)((ulong)*(undefined8 *)(param_1 + 0x5a60) >> 0x20);
  local_34 = *(undefined4 *)(param_1 + 0x5a68);
  lVar2 = FUN__text__001961a8(*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x10),&local_40);
  if (lVar2 != 0) {
    lVar4 = *(long *)(param_1 + 0x10);
    if (lVar4 == 0) goto LAB__text__001b9d18;
    local_48 = lVar3;
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
    }
    local_50 = 0xd0fe60b9df49c356;
    FUN__text__001ab790(lVar4,param_1 + 0x78,&local_48,&local_50,0,lVar2);
    if (local_48 != 0) {
      (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
      local_48 = 0;
    }
  }
  if (lVar3 == 0) {
    return;
  }
  (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
  return;
}


