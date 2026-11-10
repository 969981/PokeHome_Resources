/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0068d088; name: FUN_.text__0068d088
 */


void FUN__text__0068d088(long *param_1,undefined8 param_2)

{
  uint uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 local_80;
  long local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  if (*(char *)((long)param_1 + 0x41) == '\0') {
    if (*(char *)((long)param_1 + 0x104) == '\0') {
      lVar8 = param_1[3] + (ulong)*(uint *)(param_1[4] + 0xc);
      uVar5 = (**(code **)(*param_1 + 0x128))(param_1);
      uVar1 = *(uint *)(lVar8 + 0x14);
      lVar10 = param_1[3];
      uVar2 = *(undefined2 *)(lVar8 + 0x12);
      uVar3 = *(undefined2 *)(lVar8 + 0x10);
      uVar4 = *(undefined2 *)(lVar8 + 10);
    }
    else {
      lVar8 = param_1[3] + (ulong)*(uint *)(param_1[4] + 0x10);
      uVar5 = (**(code **)(*param_1 + 0x128))(param_1);
      uVar1 = *(uint *)(lVar8 + 0x18);
      lVar10 = param_1[3];
      uVar2 = *(undefined2 *)(lVar8 + 0x16);
      uVar3 = *(undefined2 *)(lVar8 + 0x14);
      uVar4 = *(undefined2 *)(lVar8 + 0xe);
    }
    lVar8 = 0;
    if (uVar1 != 0) {
      lVar8 = lVar10 + (ulong)uVar1;
    }
    FUN__text__0068d4cc(param_1 + 5,lVar8,uVar4,uVar3,uVar2,uVar5,1);
    uVar1 = *(ushort *)((long)param_1 + 0x3c) & 0x3fff;
    if ((uVar1 < 0x14) &&
       ((7 < uVar1 || ((1 << (ulong)(*(ushort *)((long)param_1 + 0x3c) & 0x1f) & 0xc2U) == 0)))) {
      lVar9 = param_1[2];
      lVar11 = param_1[6];
      lVar8 = param_1[0xd];
      lVar10 = param_1[0xe];
      lVar7 = FUN__text__006ebc54(param_1[6]);
      if (*(long *)(lVar7 + 0x48) != 0) {
        param_1[10] = **(long **)(lVar7 + 0x28);
        return;
      }
      if (lVar8 == 0) {
        lVar8 = *(long *)(lVar7 + 0x30);
        local_80 = CONCAT44(local_80._4_4_,0x21);
        local_70 = 0;
        uStack_68 = 0;
        iVar6 = nn::util::BinaryBlockHeader::GetBlockSize();
        local_80 = CONCAT44(iVar6 + -0x10,(undefined4)local_80);
        local_78 = lVar8 + 0x10;
        FUN__text__006ee680(*(undefined8 *)(lVar7 + 0x40),param_2,&local_80);
        lVar8 = *(long *)(lVar7 + 0x40);
        lVar10 = 0;
      }
      else {
        lVar10 = *(long *)(lVar7 + 0x30) + (((lVar11 - lVar9) + lVar10) - lVar7) + 0x10;
      }
      *(long *)(lVar7 + 0x48) = lVar8;
      *(long *)(lVar7 + 0x50) = lVar10;
      lVar10 = **(long **)(lVar7 + 0x28);
      param_1[10] = lVar10;
      lVar8 = *(long *)(lVar10 + 0x68);
      FUN__text__006f5944(*(undefined8 *)(lVar10 + 0x80),param_2,lVar10 + 0x10,
                          *(undefined8 *)(lVar8 + 0x28),
                          (*(long *)(lVar8 + 0x30) - *(long *)(lVar8 + 0x10)) +
                          **(long **)(lVar10 + 0x70) + -0x10,*(undefined4 *)(lVar10 + 0x50));
      local_50 = 0;
      uStack_48 = 0;
      local_60 = 0;
      uStack_58 = 0;
      local_70 = 0;
      uStack_68 = 0;
      local_80 = 0;
      local_78 = 0;
      FUN__text__006ebe70(&local_80);
      local_80 = CONCAT71(local_80._1_7_,*(undefined1 *)(lVar10 + 0x5c));
      local_80 = CONCAT44(*(undefined4 *)(lVar10 + 0x1c),(undefined4)local_80);
      local_78 = CONCAT44(local_78._4_4_,*(undefined4 *)(lVar10 + 0x58));
      local_50 = *(undefined8 *)(lVar10 + 0x80);
      local_60 = CONCAT44(*(undefined4 *)(lVar10 + 0x30),(undefined4)local_60);
      local_70._0_4_ = CONCAT22(*(undefined2 *)(lVar10 + 0x16),(undefined2)local_70);
      FUN__text__006f5a88(*(undefined8 *)(lVar10 + 0x88),param_2,&local_80);
      return;
    }
  }
  return;
}


