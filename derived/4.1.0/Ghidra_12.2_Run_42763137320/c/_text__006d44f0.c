/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006d44f0; name: FUN_.text__006d44f0
 */


void FUN__text__006d44f0(long param_1,undefined8 param_2,long *param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined2 uVar3;
  long *plVar4;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 *local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 *local_58;
  long lStack_50;
  long local_48;
  undefined8 *local_40;
  long local_38;
  
  local_58 = (undefined8 *)*param_3;
  lStack_50 = param_3[1];
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  local_80 = 0;
  local_48 = param_3[2];
  local_98 = 0;
  uStack_90 = 0;
  local_40 = (undefined8 *)0x0;
  local_38 = param_3[4];
  if (*(long *)(param_1 + 0x1c0) != 0) {
    FUN__text__006ebccc(&local_98);
    uVar1 = local_98;
    uVar3 = local_98._4_2_;
    local_98._0_3_ = (uint3)(ushort)local_98;
    uVar2 = local_98;
    local_98._6_2_ = SUB82(uVar1,6);
    local_98._0_4_ = (undefined4)uVar2;
    local_98 = CONCAT26(local_98._6_2_,CONCAT24(uVar3,(undefined4)local_98)) | 0xe00000000;
    FUN__text__006ebcac(&local_80);
    local_80 = CONCAT71(local_80._1_7_,(char)*(undefined4 *)(param_1 + 0x154));
    local_58 = &local_98;
  }
  local_a8 = 0;
  uStack_a0 = 0;
  local_b8 = 0;
  local_b0 = (undefined8 *)0x0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  FUN__text__006ebdac(&local_b8);
  FUN__text__006ebda4(&local_d8);
  plVar4 = *(long **)(param_1 + 0x28);
  local_d8 = CONCAT44(local_d8._4_4_,0xb01);
  local_b8 = CONCAT71(local_b8._1_7_,1);
  local_b8 = CONCAT44(0x1307,(undefined4)local_b8);
  if (plVar4 != (long *)0x0) {
    local_b0 = &local_d8;
    local_40 = &local_b8;
    (**(code **)(*plVar4 + 0x20))(plVar4,param_2,&local_58,param_1 + 0x40);
  }
  return;
}


