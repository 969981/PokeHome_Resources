/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00543d38; name: FUN_.text__00543d38
 */


void FUN__text__00543d38(long param_1,long param_2,ulong param_3,ulong param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  float local_80;
  float fStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  long *plStack_48;
  
  local_f0 = 0x7fefffffffffffff;
  local_e8 = 0x7fefffffffffffff;
  uStack_e0 = 0x7fefffffffffffff;
  local_d8 = 0xffefffffffffffff;
  uStack_d0 = 0xffefffffffffffff;
  local_c8 = 0xffefffffffffffff;
  uStack_c0 = 0x7f7fffff7f7fffff;
  local_b8 = 0xff7fffff7f7fffff;
  uStack_b0 = 0xff7fffffff7fffff;
  local_a8 = 0;
  local_a0 = 0;
  local_88 = 0;
  local_98 = 0;
  local_90 = 0;
  local_f8 = param_2;
  uVar3 = FUN__text__00543ec0(&local_f0,*(undefined4 *)(param_2 + 0x18),
                              *(undefined4 *)(param_2 + 0x1c),*(undefined4 *)(param_2 + 0x20),
                              *(undefined4 *)(param_2 + 0x24),*(undefined4 *)(param_2 + 0x28),
                              *(undefined4 *)(param_2 + 0x2c));
  fStack_7c = *(float *)(param_2 + 0x44);
  local_80 = -fStack_7c;
  local_78 = local_f0;
  uStack_70 = local_e8;
  local_58 = uStack_d0;
  local_68 = uStack_e0;
  uStack_60 = local_d8;
  local_50 = local_c8;
  plStack_48 = &local_f8;
  if (*(long *)(param_1 + 0x10) == 0) {
    uVar1 = 0;
    uVar2 = 0;
  }
  else {
    uVar3 = FUN__text__005466b0(param_1 + 8,*(long *)(param_1 + 0x10),&local_78,&plStack_48);
    uVar1 = local_88;
    uVar2 = local_98;
  }
  if ((param_3 & 1) != 0) {
    uVar3 = FUN__text__00542d40(uVar3,param_2,local_a0,local_90,0);
  }
  if ((param_4 & 1) == 0) {
    return;
  }
  FUN__text__00542d40(uVar3,param_2,uVar2,uVar1,1);
  return;
}


