/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005c4bc8; name: FUN_.text__005c4bc8
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__005c4bc8(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  byte bVar5;
  long lVar6;
  undefined2 uVar7;
  code *pcVar8;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined1 *local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_70 = 0;
  FUN__text__005c50f8(&local_70,*(undefined8 *)(param_1 + 0x10));
  if (*(long *)(param_1 + 0x8a8) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x8a8) + 0x48) + 0x18))();
  }
  lVar6 = local_70;
  *(ulong *)(param_1 + 0x8a8) = local_70;
  if (local_70 != 0) {
    pcVar8 = *(code **)(local_70 + 0x2b8);
    if (pcVar8 != (code *)0x0) {
      *(undefined8 *)(local_70 + 0x2c0) = 0;
      *(undefined8 *)(local_70 + 0x2c8) = 0;
      *(undefined8 *)(local_70 + 0x2b0) = 0;
      *(undefined8 *)(local_70 + 0x2b8) = 0;
      (*pcVar8)(local_70 + 0x2d0);
    }
    uVar4 = _DAT_008a58a0;
    uVar3 = _DAT_008a5898;
    uVar2 = _DAT_008a5890;
    *(undefined8 *)(lVar6 + 0x2d0) = _DAT_008a5888;
    *(undefined8 *)(lVar6 + 0x2b0) = uVar2;
    *(undefined8 *)(lVar6 + 0x2b8) = uVar3;
    *(undefined8 *)(lVar6 + 0x2c0) = uVar4;
    *(undefined8 *)(lVar6 + 0x2c8) = _DAT_008a58a8;
  }
  local_40 = 0;
  uStack_38 = 0;
  local_50 = 0;
  uStack_48 = 0;
  local_60 = 0;
  local_58 = (undefined1 *)0x0;
  local_70 = 0;
  uStack_68 = 0;
  FUN__text__006ebccc(&local_70);
  uVar2 = _DAT_008a0448;
  local_70._0_6_ = CONCAT24(local_70._4_2_ & 0xfff0 | 10,0x3010002);
  FUN__text__006f4424(*(long *)(param_1 + 0x8a8) + 0x278,_DAT_008a0448,&local_70);
  FUN__text__006ebccc(&local_70);
  local_70._0_6_ = CONCAT24(local_70._4_2_ & 0xfff0 | 10,0x3020002);
  FUN__text__006f4424(*(long *)(param_1 + 0x8a8) + 0x248,uVar2,&local_70);
  FUN__text__006ebccc(&local_70);
  local_70._0_6_ = CONCAT24(local_70._4_2_ & 0xfff0 | 10,0x3000002);
  FUN__text__006f4424(*(long *)(param_1 + 0x8a8) + 0x218,uVar2,&local_70);
  FUN__text__006ebccc(&local_70);
  local_70._0_6_ = CONCAT24(local_70._4_2_ & 0xfff0 | 10,0x2000001);
  FUN__text__006f4424(*(long *)(param_1 + 0x8a8) + 0x1e8,uVar2,&local_70);
  local_40 = 0;
  uStack_38 = 0;
  local_50 = 0;
  uStack_48 = 0;
  local_60 = 0;
  local_58 = (undefined1 *)0x0;
  local_70 = 0;
  uStack_68 = 0;
  FUN__text__006ebd70(&local_70);
  local_70 = local_70 & 0xfffffffcffffffff;
  FUN__text__006f483c(*(long *)(param_1 + 0x8a8) + 0x178,uVar2,&local_70);
  FUN__text__006ebd70(&local_70);
  local_70 = local_70 & 0xfffffffcffffffff | 0x100000000;
  FUN__text__006f483c(*(long *)(param_1 + 0x8a8) + 0x194,uVar2,&local_70);
  FUN__text__006ebd70(&local_70);
  uVar1 = local_70;
  uVar7 = local_70._4_2_;
  local_70 = CONCAT71(local_70._1_7_,7);
  uVar3 = local_70;
  local_70._6_2_ = SUB82(uVar1,6);
  local_70._0_4_ = (undefined4)uVar3;
  local_70 = CONCAT26(local_70._6_2_,CONCAT24(uVar7,(undefined4)local_70)) | 0x300000000;
  FUN__text__006f483c(*(long *)(param_1 + 0x8a8) + 0x1b0,uVar2,&local_70);
  FUN__text__006ebd70(&local_70);
  local_70 = local_70 | 0x300000000;
  FUN__text__006f483c(*(long *)(param_1 + 0x8a8) + 0x1cc,uVar2,&local_70);
  local_50 = 0;
  uStack_48 = 0;
  local_60 = 0;
  local_58 = (undefined1 *)0x0;
  local_70 = 0;
  uStack_68 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_90 = 0;
  uStack_88 = 0;
  FUN__text__006ebd10(&local_90);
  local_90 = local_90 & 0xfffffffffffffffe;
  FUN__text__006ebd38(&local_70);
  local_70._0_1_ = 1;
  local_58 = (undefined1 *)&local_90;
  FUN__text__005c5000(param_1,0,&local_70);
  FUN__text__006ebd10(&local_90);
  bVar5 = (byte)local_90;
  local_90 = CONCAT17(7,(undefined7)local_90);
  uVar1 = local_90 >> 0x18;
  local_90._0_1_ = bVar5 | 1;
  local_90._0_3_ = CONCAT21(0x706,(byte)local_90);
  local_90 = CONCAT53((int5)uVar1,(undefined3)local_90) & 0xffffffff00ffffff;
  FUN__text__006ebd38(&local_70);
  local_70._0_1_ = 1;
  local_58 = (undefined1 *)&local_90;
  FUN__text__005c5000(param_1,1,&local_70);
  FUN__text__006ebd10(&local_90);
  bVar5 = (byte)local_90;
  local_90 = CONCAT17(7,(undefined7)local_90);
  uVar1 = local_90 >> 0x18;
  local_90._0_1_ = bVar5 | 1;
  local_90._0_3_ = CONCAT21(0x101,(byte)local_90);
  local_90 = CONCAT53((int5)uVar1,(undefined3)local_90) & 0xffffffff00ffffff;
  FUN__text__006ebd38(&local_70);
  local_70._0_1_ = 1;
  local_58 = (undefined1 *)&local_90;
  FUN__text__005c5000(param_1,2,&local_70);
  FUN__text__006ebd10(&local_90);
  bVar5 = (byte)local_90;
  local_90 = CONCAT17(7,(undefined7)local_90);
  uVar1 = local_90 >> 0x18;
  local_90._0_1_ = bVar5 | 1;
  local_90._0_3_ = CONCAT21(0x200,(byte)local_90);
  local_90 = CONCAT53((int5)uVar1,(undefined3)local_90) & 0xffffffff00ffffff;
  FUN__text__006ebd38(&local_70);
  local_70 = CONCAT71(local_70._1_7_,1);
  local_58 = (undefined1 *)&local_90;
  FUN__text__005c5000(param_1,3,&local_70);
  return;
}


