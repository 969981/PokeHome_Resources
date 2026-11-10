/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001417e4; name: FUN_.text__001417e4
 */


void FUN__text__001417e4(long param_1,undefined8 param_2,long param_3)

{
  code *pcVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 local_b0;
  code *local_a8;
  undefined1 *local_a0;
  undefined1 *local_98;
  long alStack_90 [12];
  
  if (param_3 < 0x3a1cd35152173db4) {
    if (param_3 == -0x1ae385bfc1dbb86a) {
      lVar4 = param_1 + 0x110;
      FUN__text__0012bca0(lVar4,0);
      local_b0 = (code *)0x431e769ffc1ad350;
      uVar3 = FUN__text__0012ce7c(lVar4,&local_b0);
      FUN__text__003a14e8(uVar3,0);
      local_b0 = FUN__text__001426ac;
      local_a8 = FUN__text__001426fc;
      local_a0 = &LAB__text__00142700;
      local_98 = &LAB__text__0014270c;
      alStack_90[0] = param_1;
      FUN__text__0012c3b0(lVar4,0x71b5cf,&local_b0);
      pcVar1 = local_a8;
      if (local_a8 == (code *)0x0) {
        return;
      }
      local_a0 = (undefined1 *)0x0;
      local_98 = (undefined1 *)0x0;
      local_b0 = (code *)0x0;
      local_a8 = (code *)0x0;
      (*pcVar1)(alStack_90);
      return;
    }
    if (param_3 == 0x3a1cd15152173a4e) {
      uVar3 = 4;
    }
    else {
      if (param_3 != 0x3a1cd25152173c01) {
        return;
      }
      uVar3 = 5;
    }
    FUN__text__00141b08(param_1,uVar3);
    goto LAB__text__00141ad0;
  }
  if (param_3 < 0x3a1cd5515217411a) {
    if (param_3 == 0x3a1cd35152173db4) {
      if (*(code **)(param_1 + 0x650) != (code *)0x0) {
        local_b0 = (code *)CONCAT44(local_b0._4_4_,2);
        (**(code **)(param_1 + 0x650))(param_1 + 0x670,&local_b0);
      }
      if (*(code **)(param_1 + 2000) == (code *)0x0) goto LAB__text__00141ad0;
      local_b0 = (code *)CONCAT44(local_b0._4_4_,2);
      iVar2 = (**(code **)(param_1 + 2000))(param_1 + 0x7f0,&local_b0);
      lVar4 = (long)iVar2 * 8 + 0x7244f8;
    }
    else {
      if (param_3 != 0x3a1cd45152173f67) {
        return;
      }
      if (*(code **)(param_1 + 0x650) != (code *)0x0) {
        local_b0 = (code *)CONCAT44(local_b0._4_4_,3);
        (**(code **)(param_1 + 0x650))(param_1 + 0x670,&local_b0);
      }
      if (*(code **)(param_1 + 2000) == (code *)0x0) goto LAB__text__00141ad0;
      local_b0 = (code *)CONCAT44(local_b0._4_4_,3);
      iVar2 = (**(code **)(param_1 + 2000))(param_1 + 0x7f0,&local_b0);
      lVar4 = (long)iVar2 * 8 + 0x724518;
    }
  }
  else if (param_3 == 0x3a1cd5515217411a) {
    if (*(code **)(param_1 + 0x650) != (code *)0x0) {
      local_b0 = (code *)((ulong)local_b0._4_4_ << 0x20);
      (**(code **)(param_1 + 0x650))(param_1 + 0x670,&local_b0);
    }
    if (*(code **)(param_1 + 2000) == (code *)0x0) goto LAB__text__00141ad0;
    local_b0 = (code *)((ulong)local_b0 & 0xffffffff00000000);
    iVar2 = (**(code **)(param_1 + 2000))(param_1 + 0x7f0,&local_b0);
    lVar4 = (long)iVar2 * 8 + 0x7244b8;
  }
  else {
    if (param_3 != 0x3a1cd651521742cd) {
      return;
    }
    if (*(code **)(param_1 + 0x650) != (code *)0x0) {
      local_b0 = (code *)CONCAT44(local_b0._4_4_,1);
      (**(code **)(param_1 + 0x650))(param_1 + 0x670,&local_b0);
    }
    if (*(code **)(param_1 + 2000) == (code *)0x0) goto LAB__text__00141ad0;
    local_b0 = (code *)CONCAT44(local_b0._4_4_,1);
    iVar2 = (**(code **)(param_1 + 2000))(param_1 + 0x7f0,&local_b0);
    lVar4 = (long)iVar2 * 8 + 0x7244d8;
  }
  FUN__text__0012c378(param_1 + 0x110,lVar4);
LAB__text__00141ad0:
  FUN__text__003a1630(*(undefined8 *)(param_1 + 0x640));
  (**(code **)(**(long **)(param_1 + 0x640) + 0x50))();
  if (*(long *)(param_1 + 0x4e0) == 0) {
    return;
  }
  FUN__text__003c02e4();
  return;
}


