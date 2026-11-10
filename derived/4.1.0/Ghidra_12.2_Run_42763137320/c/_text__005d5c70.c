/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005d5c70; name: FUN_.text__005d5c70
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__005d5c70(long param_1)

{
  undefined8 uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 local_70;
  long local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  lVar3 = FUN__text__006ebc54(*(undefined8 *)(param_1 + 0x58));
  *(long *)(param_1 + 0x78) = lVar3;
  lVar4 = *(long *)(lVar3 + 0x30);
  local_60 = 0;
  uStack_58 = 0;
  local_70 = CONCAT44(local_70._4_4_,0x21);
  iVar2 = nn::util::BinaryBlockHeader::GetBlockSize();
  local_70 = CONCAT44(iVar2 + -0x10,(undefined4)local_70);
  local_68 = lVar4 + 0x10;
  FUN__text__006ee680(*(undefined8 *)(lVar3 + 0x40),_DAT_008a0448,&local_70);
  *(undefined8 *)(lVar3 + 0x48) = *(undefined8 *)(lVar3 + 0x40);
  *(undefined8 *)(lVar3 + 0x50) = 0;
  uVar1 = _DAT_008a0448;
  lVar3 = *(long *)(param_1 + 0x78);
  if (0 < *(int *)(*(long *)(lVar3 + 0x38) + 4)) {
    lVar4 = 0;
    do {
      lVar5 = *(long *)(*(long *)(lVar3 + 0x28) + lVar4 * 8);
      lVar3 = *(long *)(lVar5 + 0x68);
      FUN__text__006f5944(*(undefined8 *)(lVar5 + 0x80),uVar1,lVar5 + 0x10,
                          *(undefined8 *)(lVar3 + 0x28),
                          (*(long *)(lVar3 + 0x30) - *(long *)(lVar3 + 0x10)) +
                          **(long **)(lVar5 + 0x70) + -0x10,*(undefined4 *)(lVar5 + 0x50));
      local_40 = 0;
      uStack_38 = 0;
      local_50 = 0;
      uStack_48 = 0;
      local_60 = 0;
      uStack_58 = 0;
      local_70 = 0;
      local_68 = 0;
      FUN__text__006ebe70(&local_70);
      local_70 = CONCAT71(local_70._1_7_,*(undefined1 *)(lVar5 + 0x5c));
      local_70 = CONCAT44(*(undefined4 *)(lVar5 + 0x1c),(undefined4)local_70);
      local_68 = CONCAT44(local_68._4_4_,*(undefined4 *)(lVar5 + 0x58));
      local_40 = *(undefined8 *)(lVar5 + 0x80);
      local_50 = CONCAT44(*(undefined4 *)(lVar5 + 0x30),(undefined4)local_50);
      local_60._0_4_ = CONCAT22(*(undefined2 *)(lVar5 + 0x16),(undefined2)local_60);
      FUN__text__006f5a88(*(undefined8 *)(lVar5 + 0x88),uVar1,&local_70);
      lVar3 = *(long *)(param_1 + 0x78);
      lVar4 = lVar4 + 1;
    } while (lVar4 < *(int *)(*(long *)(lVar3 + 0x38) + 4));
  }
  return;
}


