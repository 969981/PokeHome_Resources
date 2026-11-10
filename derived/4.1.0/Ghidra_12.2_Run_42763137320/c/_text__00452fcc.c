/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00452fcc; name: FUN_.text__00452fcc
 */


void FUN__text__00452fcc(undefined8 param_1,uint param_2,undefined8 param_3,long *param_4,
                        long param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined2 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  long alStack_170 [2];
  undefined1 auStack_160 [8];
  undefined8 local_158;
  long local_150;
  undefined8 local_148;
  long local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  long local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  long local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  long local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  long local_e0;
  long local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  long local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  long local_a8;
  undefined8 local_a0;
  long local_98;
  undefined8 uStack_90;
  long local_88;
  undefined8 uStack_80;
  undefined1 *local_78;
  undefined8 uStack_70;
  
  if (param_2 == 0) {
    FUN__text__00413d04();
    return;
  }
  local_a0 = 0;
  local_b0 = 0;
  local_b8 = 0;
  local_c8 = 0;
  uVar1 = *(undefined2 *)(*param_4 + 0x10);
  *(undefined2 *)(param_5 + 0x12) = *(undefined2 *)(param_5 + 0x10);
  local_d0 = 0;
  uVar8 = (ulong)param_2 * 2 + 0xf & 0x3fffffff0;
  local_78 = auStack_160 + -uVar8;
  uStack_70 = 0;
  local_88 = (long)local_78 - uVar8;
  uStack_80 = 0;
  local_98 = local_88 - uVar8;
  uStack_90 = 0;
  local_a8 = local_98 - uVar8;
  local_c0 = local_a8 - uVar8;
  lVar9 = local_c0 - uVar8;
  local_148 = param_1;
  local_d8 = lVar9;
  FUN__text__00451f50(param_3,param_2,&local_78,&local_88,&local_a8,&local_98,&local_d8,&local_c0);
  uVar3 = uStack_80;
  lVar2 = local_88;
  local_158 = uStack_80;
  local_150 = local_88;
  local_e0 = param_5;
  *(undefined8 *)(lVar9 + -0x10) = param_8;
  FUN__text__00453270(lVar2,uVar3,param_3,uVar1,param_4,&local_e0,param_6,param_7);
  uVar5 = uStack_90;
  lVar4 = local_98;
  *(undefined8 *)(lVar9 + -0x10) = param_8;
  FUN__text__00453c90(lVar4,uVar5,param_3,uVar1,param_4,&local_e0,param_6,param_7);
  local_f8 = local_c0;
  uStack_f0 = local_b8;
  local_e8 = CONCAT44(uStack_ac,local_b0);
  FUN__text__00453f00(&local_f8,param_3,uVar1,param_4,&local_e0,param_6,param_7,param_8);
  uVar3 = local_a0;
  lVar2 = local_a8;
  *(undefined8 *)(lVar9 + -0x10) = param_8;
  FUN__text__00454400(lVar2,uVar3,param_3,uVar1,param_4,&local_e0,param_6,param_7);
  local_110 = local_d8;
  uStack_108 = local_d0;
  local_100 = CONCAT44(uStack_c4,local_c8);
  FUN__text__004549f0(&local_110,param_3,uVar1,param_4,&local_e0,param_6,param_7,param_8);
  uVar7 = uStack_70;
  puVar6 = local_78;
  *(undefined8 *)(lVar9 + -0x10) = param_8;
  FUN__text__00455490(puVar6,uVar7,param_3,uVar1,param_4,&local_e0,param_6,param_7);
  local_128 = local_d8;
  uStack_120 = local_d0;
  local_130 = CONCAT44(uStack_ac,local_b0);
  local_118 = CONCAT44(uStack_c4,local_c8);
  local_140 = local_c0;
  uStack_138 = local_b8;
  *(undefined8 *)(lVar9 + -8) = local_158;
  *(long *)(lVar9 + -0x10) = local_150;
  FUN__text__004525e0(param_3,lVar2,uVar3,lVar4,uVar5,&local_128,&local_140);
  FUN__text__00413d04(local_148);
  return;
}


