/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001a4de0; name: FUN_.text__001a4de0
 */


void FUN__text__001a4de0(long param_1,ulong param_2,char *param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 local_60;
  long local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 local_44;
  long local_28;
  
  lVar2 = *(long *)(*(long *)(param_1 + 8) + 0x2d0);
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  FUN__text__003c7c60(lVar2,param_1 + 0x1b0,0);
  if ((param_2 & 1) == 0) {
    FUN__text__003c7c60(lVar2,param_1 + 0x1b8,0);
    FUN__text__003c7c60(lVar2,param_1 + 0x1a8,0);
    goto LAB__text__001a4ff0;
  }
  FUN__text__003c7c60(lVar2,param_1 + 0x1b8,1);
  FUN__text__003c7c60(lVar2,param_1 + 0x1a8,1);
  uVar1 = FUN__text__001281d4(*(undefined8 *)(param_1 + 8));
  FUN__text__001156d0(&local_50,uVar1,0);
  lVar4 = CONCAT44(uStack_4c,local_50);
  lVar3 = *(long *)(lVar4 + 0x60);
  if (lVar3 == 0) {
LAB__text__001a4e90:
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))();
  }
  else {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
    lVar4 = CONCAT44(uStack_4c,local_50);
    if (lVar4 != 0) goto LAB__text__001a4e90;
  }
  if (*(long *)(param_1 + 0x18) == 0) {
LAB__text__001a5018:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl();
  }
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x10);
  if (*param_3 == '\0') {
    local_50 = *(undefined4 *)(param_3 + 4);
    local_44 = *(undefined4 *)(param_3 + 0x10);
    uStack_4c = (undefined4)*(undefined8 *)(param_3 + 8);
    uStack_48 = (undefined4)((ulong)*(undefined8 *)(param_3 + 8) >> 0x20);
    lVar4 = FUN__text__001961a8(uVar1,&local_50);
    if (lVar4 != 0) {
      lVar5 = *(long *)(param_1 + 0x10);
      if (lVar5 == 0) goto LAB__text__001a5018;
      local_58 = lVar3;
      if (lVar3 != 0) {
        (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
      }
      local_60 = 0xd0fe60b9df49c356;
      FUN__text__001ab790(lVar5,param_1 + 0x1c8,&local_58,&local_60,0,lVar4);
      if (local_58 != 0) {
        (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
        local_58 = 0;
      }
    }
  }
  else {
    uVar1 = FUN__text__00196200(uVar1,*(undefined4 *)(param_3 + 4));
    lVar4 = *(long *)(param_1 + 0x10);
    if (lVar4 == 0) goto LAB__text__001a5018;
    local_28 = lVar3;
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
    }
    local_50 = 0xdf49c356;
    uStack_4c = 0xd0fe60b9;
    FUN__text__001ab8f4(lVar4,param_1 + 0x1c8,&local_28,&local_50,0,uVar1);
    if (local_28 != 0) {
      (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
      local_28 = 0;
    }
  }
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
  }
LAB__text__001a4ff0:
  (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
  return;
}


