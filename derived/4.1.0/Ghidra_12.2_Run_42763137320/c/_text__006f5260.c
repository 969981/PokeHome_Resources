/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006f5260; name: FUN_.text__006f5260
 */


void FUN__text__006f5260(long param_1,undefined8 param_2,byte *param_3,undefined8 param_4,
                        long param_5)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined8 uStack_c8;
  undefined8 local_c0;
  long local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  local_70 = 0;
  uStack_68 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  FUN__text__006ec340(&local_a0,param_3);
  lVar1 = FUN__text__006f5764(param_2,&local_a0);
  lVar2 = FUN__text__006f57e0(param_2,&local_a0);
  uStack_c8 = 0x100000000;
  _local_d0 = CONCAT44(*(undefined4 *)(param_3 + 4),1);
  local_b0 = 0;
  uStack_a8 = 0;
  local_c0 = 0;
  local_b8 = 0;
  if (*param_3 != 0) {
    uVar6 = 0;
    lVar4 = param_1 + 0x198;
    lVar5 = param_1 + 0x4f8;
    do {
      uVar3 = lVar1 + -1 + param_5 & -lVar1;
      FUN__text__006f5944(lVar4,param_2,&local_a0,param_4,uVar3,lVar2);
      local_b8 = lVar4;
      FUN__text__006f5be8(lVar5,param_2,&local_d0);
      uVar6 = uVar6 + 1;
      param_5 = uVar3 + lVar2;
      lVar4 = lVar4 + 0xd8;
      lVar5 = lVar5 + 0x48;
    } while (uVar6 < *param_3);
  }
  *(undefined4 *)(param_1 + 0x194) = 0;
  return;
}


