/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0042742c; name: FUN_.text__0042742c
 */


undefined8 FUN__text__0042742c(long param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  long lVar5;
  undefined8 uVar6;
  undefined7 local_88;
  undefined4 uStack_81;
  undefined1 uStack_7d;
  undefined4 local_7c;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  uint local_54;
  undefined2 local_50;
  long local_48;
  undefined1 auStack_40 [4];
  undefined4 local_3c;
  undefined4 uStack_38;
  
  lVar5 = (**(code **)(param_1 + 0xb0))(param_2);
  *(long *)(param_1 + 0xb8) = lVar5;
  if (lVar5 == 0) {
    return 0x34;
  }
  lVar5 = *(long *)(param_1 + 0x18);
  local_58 = *(undefined4 *)(lVar5 + 0xa4);
  local_50 = *(undefined2 *)(lVar5 + 0x310);
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  local_70 = 0;
  local_88 = 0;
  uStack_81 = 0;
  uStack_7d = 0;
  local_7c = 0;
  local_54 = *(uint *)(lVar5 + 0x313) >> 0x1c & 7;
  local_48 = param_1;
  (**(code **)(**(long **)(param_1 + 0x40) + 0x28))(*(long **)(param_1 + 0x40),(long)&local_70 + 4);
  uVar6 = (**(code **)(**(long **)(param_1 + 0xb8) + 0x10))
                    (*(long **)(param_1 + 0xb8),param_2,&local_88,&local_58);
  if ((int)uVar6 == 1) {
    if (local_78._4_4_ == 0) {
      return 7;
    }
    uVar1 = *(int *)(param_2 + 0x10) + *(int *)(param_2 + 0x14);
    if (uVar1 < (uint)local_68) {
      uVar6 = 7;
    }
    else {
      uVar6 = 7;
      if (((local_68._4_4_ <= uVar1) && (local_70._4_4_ != 0.0)) && ((int)local_78 != 0)) {
        lVar5 = *(long *)(param_1 + 0x18);
        *(ulong *)(lVar5 + 0x2b0) = CONCAT17((undefined1)uStack_81,local_88);
        *(undefined4 *)(lVar5 + 0x2b7) = uStack_81;
        if (*(int *)(param_2 + 0x1c) == 0) {
          *(int *)(param_2 + 0x1c) = local_78._4_4_ + -1;
        }
        (**(code **)(**(long **)(param_1 + 0x40) + 0x30))
                  (*(long **)(param_1 + 0x40),(long)&local_70 + 4);
        (**(code **)(**(long **)(param_1 + 0x40) + 0x38))
                  (*(long **)(param_1 + 0x40),local_70 & 0xffffffff);
        iVar2 = *(int *)(param_2 + 0x10);
        iVar3 = *(int *)(param_2 + 0x14);
        *(undefined2 *)(param_1 + 0x80) = local_50;
        *(int *)(param_1 + 0x74) = iVar2 + iVar3;
        *(uint *)(param_1 + 0x78) = (uint)local_68;
        *(uint *)(param_1 + 0x7c) = local_68._4_4_;
        (**(code **)(**(long **)(param_1 + 0x40) + 0x28))(*(long **)(param_1 + 0x40),auStack_40);
        bVar4 = *(short *)(param_1 + 0x80) != 1;
        local_3c = 0;
        if (bVar4) {
          local_3c = *(undefined4 *)(param_1 + 0x78);
        }
        uStack_38 = 0;
        if (bVar4) {
          uStack_38 = *(undefined4 *)(param_1 + 0x7c);
        }
        (**(code **)(**(long **)(param_1 + 0x40) + 0x30))(*(long **)(param_1 + 0x40),auStack_40);
        FUN__text__004de1d0(param_1 + 0x24,param_2,&local_88,local_50);
        *(undefined4 *)(param_1 + 0xd0) = *(undefined4 *)(param_2 + 0x14);
        *(byte *)(param_1 + 0xdc) = *(byte *)(param_1 + 0xdc) & 0xf8 | (byte)local_7c & 7;
        *(ushort *)(param_1 + 0xd4) = uStack_60._4_2_;
        if ((uStack_60._4_2_ >> 4 & 1) != 0) {
          *(undefined4 *)(param_1 + 0xd8) = 2;
          return 1;
        }
        if ((uStack_60 & 0x100000000) == 0) {
          *(undefined4 *)(param_1 + 0xd8) = 0;
          return 1;
        }
        *(undefined4 *)(param_1 + 0xd8) = 1;
        return 1;
      }
    }
  }
  return uVar6;
}


