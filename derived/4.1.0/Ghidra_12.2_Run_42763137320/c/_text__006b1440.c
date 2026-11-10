/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006b1440; name: FUN_.text__006b1440
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__006b1440(long param_1,undefined8 param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
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
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  lVar3 = nn::util::BinaryFileHeader::GetFirstBlock();
  lVar2 = _DAT_008a5970;
  uVar1 = *(uint *)(lVar3 + 0x1c);
  if (0 < (int)uVar1) {
    uVar6 = 0;
    do {
      lVar3 = nn::util::BinaryFileHeader::GetFirstBlock();
      local_a8 = 0;
      local_70 = 0;
      uStack_68 = 0;
      uVar7 = *(undefined8 *)
               (*(long *)(*(long *)(lVar3 + 0x20) + uVar6 * 0x40 +
                         *(long *)(lVar2 + ((ulong)*(uint *)(param_1 + 8) & 7) * 8)) + 0x68);
      local_80 = 0;
      uStack_78 = 0;
      local_90 = 0;
      uStack_88 = 0;
      local_b8 = 0;
      uStack_b0 = 0;
      local_a0 = 0;
      uStack_98 = 0;
      local_c8 = 0;
      uStack_c0 = 0;
      local_d8 = 0;
      uStack_d0 = 0;
      local_e8 = 0;
      uStack_e0 = 0;
      local_f8 = 0;
      uStack_f0 = 0;
      local_108 = 0;
      uStack_100 = 0;
      local_118 = 0;
      uStack_110 = 0;
      FUN__text__006b1570(param_1,&local_90,&local_108,&local_118,uVar6 & 0xffffffff);
      uVar4 = FUN__text__006f49f0(&local_90);
      lVar3 = *(long *)(param_1 + 0x10);
      uVar5 = FUN__text__006a0ee8(uVar4,8);
      FUN__text__006f4a84(lVar3 + uVar6 * 0x20,uVar5,uVar4);
      FUN__text__006f4aa0(*(long *)(param_1 + 0x10) + uVar6 * 0x20,param_2,&local_90,uVar7);
      uVar6 = uVar6 + 1;
    } while (uVar6 != uVar1);
  }
  return;
}


