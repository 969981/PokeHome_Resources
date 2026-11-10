/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003e9254; name: FUN_.text__003e9254
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__003e9254(long param_1)

{
  uint7 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined2 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
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
  
  local_40 = 0;
  uStack_38 = 0;
  local_50 = 0;
  uStack_48 = 0;
  local_60 = 0;
  local_58 = (undefined1 *)0x0;
  local_70 = 0;
  uStack_68 = 0;
  FUN__text__006ebd70(&local_70);
  uVar5 = _DAT_008a0448;
  local_70 = local_70 & 0xfffffffcffffffff;
  FUN__text__006f483c(*(long *)(param_1 + 0x2c8) + 0xa0,_DAT_008a0448,&local_70);
  local_40 = 0;
  uStack_38 = 0;
  local_50 = 0;
  uStack_48 = 0;
  local_60 = 0;
  local_58 = (undefined1 *)0x0;
  local_70 = 0;
  uStack_68 = 0;
  FUN__text__006ebccc(&local_70);
  uVar6 = local_70;
  uVar4 = local_70._4_2_;
  local_70._0_3_ = (uint3)(ushort)local_70;
  uVar3 = local_70;
  local_70._6_2_ = SUB82(uVar6,6);
  local_70._0_4_ = (undefined4)uVar3;
  local_70 = CONCAT26(local_70._6_2_,CONCAT24(uVar4,(undefined4)local_70)) | 0xc00000000;
  FUN__text__006f4424(*(long *)(param_1 + 0x2c8) + 0xbc,uVar5,&local_70);
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
  FUN__text__006ebd38(&local_70);
  FUN__text__006ebd10(&local_90);
  uVar2 = (undefined1)local_90;
  uVar1 = (uint7)local_90;
  local_90 = CONCAT17(7,uVar1 & 0xffffff00000000);
  local_90 = CONCAT53(local_90._3_5_,0x70600);
  local_90 = CONCAT71(local_90._1_7_,uVar2) | 1;
  local_70 = CONCAT71(local_70._1_7_,1);
  local_58 = (undefined1 *)&local_90;
  uVar5 = FUN__text__006f45d8(&local_70);
  plVar8 = *(long **)(param_1 + 8);
  uVar6 = (**(code **)(*plVar8 + 0x10))(plVar8,uVar5,8);
  lVar9 = *(long *)(param_1 + 0x2c8);
  lVar7 = *(long *)(lVar9 + 0x58);
  *(undefined8 *)(lVar9 + 0x58) = uVar6;
  if (lVar7 != 0) {
    (**(code **)(**(long **)(lVar9 + 0x60) + 0x18))
              (*(long **)(lVar9 + 0x60),lVar7,*(undefined8 *)(lVar9 + 0x68),
               *(undefined8 *)(lVar9 + 0x70));
  }
  *(long **)(lVar9 + 0x60) = plVar8;
  *(undefined8 *)(lVar9 + 0x68) = uVar5;
  *(undefined8 *)(lVar9 + 0x70) = 8;
  FUN__text__006f45f8(*(long *)(param_1 + 0x2c8) + 0x78,
                      *(undefined8 *)(*(long *)(param_1 + 0x2c8) + 0x58),uVar5);
  FUN__text__006f4610(*(long *)(param_1 + 0x2c8) + 0x78,_DAT_008a0448,&local_70);
  return;
}


