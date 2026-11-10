/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001467fc; name: FUN_.text__001467fc
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__001467fc(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long local_d8;
  long local_d0 [2];
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 local_b4;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined4 local_a0;
  undefined1 local_9c;
  undefined4 local_98;
  long local_90 [2];
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 local_64;
  undefined4 uStack_60;
  undefined1 local_5c;
  undefined4 local_58;
  
  param_1[7] = 0;
  param_1[6] = _DAT_0089f4c8 + 0x10;
  param_1[0x41] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  local_5c = 0;
  local_90[0] = 0;
  local_90[1] = 0x43800000780;
  local_58 = 0;
  local_d0[0] = 0;
  local_d0[1] = 0x43800000780;
  local_9c = 0;
  *param_1 = 0x86a3d8;
  param_1[1] = param_2;
  *(undefined4 *)((long)param_1 + 0x1ff) = 0;
  *(undefined4 *)(param_1 + 0x42) = 1;
  uStack_60 = 1;
  local_a0 = 1;
  local_98 = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  local_c0 = 0x1307;
  uStack_bc = 0x500;
  uStack_b8 = 0x2d0;
  local_b4 = 0x1307;
  local_70 = 8;
  uStack_6c = 8;
  uStack_68 = 0xb01;
  local_64 = 1;
  local_80 = 0xb06;
  uStack_7c = 0x500;
  local_78 = 0x2d0;
  uStack_74 = 0xb06;
  local_b0 = 0x800000008;
  uStack_a8 = 0x100000b01;
  FUN__text__00146354(&local_d8,param_3,local_90);
  if (param_1[2] != 0) {
    (**(code **)(*(long *)(param_1[2] + 0x48) + 0x18))();
  }
  param_1[2] = local_d8;
  FUN__text__00146470(&local_d8,param_3,local_d0);
  if (param_1[3] != 0) {
    (**(code **)(*(long *)(param_1[3] + 0x48) + 0x18))();
  }
  param_1[3] = local_d8;
  uStack_bc = (undefined4)local_d0[1];
  uStack_b8 = (undefined4)((ulong)local_d0[1] >> 0x20);
  local_b4 = local_c0;
  FUN__text__00146470(&local_d8,param_3,local_d0);
  if (param_1[4] != 0) {
    (**(code **)(*(long *)(param_1[4] + 0x48) + 0x18))();
  }
  local_5c = 0;
  uStack_6c = 8;
  uStack_68 = 0xb01;
  lVar2 = param_1[2];
  local_58 = 0;
  param_1[4] = local_d8;
  uStack_7c = 0x400;
  local_78 = 0x400;
  local_90[0] = 0;
  local_90[1] = 0x40000000400;
  uStack_74 = 0x1407;
  local_70 = 8;
  *(undefined8 *)(lVar2 + 0x98) = 0;
  *(undefined8 *)(lVar2 + 0xa0) = 0;
  local_80 = 0x1407;
  local_64 = 2;
  uStack_60 = 1;
  FUN__text__00146470(local_d0,param_3,local_90);
  if (param_1[5] != 0) {
    (**(code **)(*(long *)(param_1[5] + 0x48) + 0x18))();
  }
  local_5c = 0;
  uStack_60 = 1;
  local_58 = 0;
  param_1[5] = local_d0[0];
  local_70 = 8;
  uStack_6c = 8;
  uStack_68 = 0xb01;
  local_64 = 1;
  local_80 = 0x1505;
  uStack_7c = 0x280;
  local_78 = 0x168;
  uStack_74 = 0x1505;
  local_90[0] = 0;
  local_90[1] = 0x21c000003c0;
  FUN__text__00146354(local_d0,param_3,local_90);
  if (param_1[0x28] != 0) {
    (**(code **)(*(long *)(param_1[0x28] + 0x48) + 0x18))();
  }
  local_a0 = 1;
  local_b0 = 0x800000008;
  uStack_a8 = 0x100000b01;
  local_9c = 0;
  local_98 = 0;
  param_1[0x28] = local_d0[0];
  *(undefined8 *)(local_d0[0] + 0x98) = 0;
  *(undefined8 *)(local_d0[0] + 0xa0) = 0;
  local_d0[0] = 0;
  local_d0[1] = 0x21c000003c0;
  local_c0 = 0x1307;
  uStack_bc = 0x280;
  uStack_b8 = 0x168;
  local_b4 = 0x1307;
  FUN__text__00146470(&local_d8,param_3,local_d0);
  if (param_1[0x29] != 0) {
    (**(code **)(*(long *)(param_1[0x29] + 0x48) + 0x18))();
  }
  param_1[0x29] = local_d8;
  *(undefined4 *)(local_d8 + 0x580) = 0x3f800000;
  FUN__text__00146c00(local_90,0x70acc4);
  lVar1 = *_DAT_0089f550;
  lVar2 = *(long *)(lVar1 + 8);
  if (*(long *)(lVar1 + 0x1c8) != 0) {
    lVar2 = *(long *)(lVar1 + 0x1c8);
  }
  FUN__text__0010a590(local_d0,lVar1,0,local_90,0,lVar2,0);
  if (param_1[7] != 0) {
    (**(code **)(*(long *)(param_1[7] + 0x48) + 0x18))();
  }
  lVar2 = local_d0[0];
  param_1[7] = local_d0[0];
  if (local_d0[0] != 0) {
    plVar3 = (long *)(local_d0[0] + 0x48);
    (**(code **)(*plVar3 + 0x10))(plVar3);
    if (param_1[8] != 0 || param_1[0x18] != 0) {
      FUN__text__005d9010(lVar2,param_1 + 6,1);
    }
    FUN__text__005d8de0(lVar2);
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))(plVar3);
  }
  if ((CONCAT44(uStack_74,local_78) != 0) && (local_90[0] != 0)) {
    (**(code **)(*(long *)(local_90[0] + 0x48) + 0x18))();
  }
  local_90[0] = 0;
  local_90[1] = 0xcbf29ce484222645;
  local_80 = 0x70f683;
  uStack_7c = 0;
  local_78 = 0;
  uStack_74 = 0;
  if (CONCAT44(uStack_6c,local_70) != 0) {
    (**(code **)(*(long *)(CONCAT44(uStack_6c,local_70) + 0x48) + 0x18))();
  }
  return;
}


