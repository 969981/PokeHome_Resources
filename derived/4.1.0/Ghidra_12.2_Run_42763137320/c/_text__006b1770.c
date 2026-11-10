/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006b1770; name: FUN_.text__006b1770
 */


void FUN__text__006b1770(long param_1,undefined8 param_2,uint param_3)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  
  lVar2 = nn::util::BinaryFileHeader::GetFirstBlock();
  uVar1 = *(uint *)(lVar2 + 0x1c);
  if (0 < (int)uVar1) {
    uVar6 = 0;
    if ((param_3 & 1) == 0) {
      do {
        uVar3 = FUN__text__006f4a90(*(long *)(param_1 + 0x10) + uVar6 * 0x20);
        FUN__text__006f4e04(*(long *)(param_1 + 0x10) + uVar6 * 0x20,param_2);
        FUN__text__006a0f24(uVar3);
        lVar2 = nn::util::BinaryFileHeader::GetFirstBlock();
        lVar2 = *(long *)(lVar2 + 0x20) + uVar6 * 0x40;
        uVar4 = FUN__text__006c1720(*(undefined8 *)
                                     (lVar2 + *(long *)(((ulong)*(uint *)(param_1 + 8) & 7) * 8 +
                                                       0x8b4560)));
        if ((uVar4 & 1) != 0) {
          FUN__text__006f3ea4(*(undefined8 *)
                               (*(long *)(lVar2 + *(long *)(((ulong)*(uint *)(param_1 + 8) & 7) * 8
                                                           + 0x8b4560)) + 0x68),param_2);
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 != uVar1);
    }
    else {
      do {
        uVar3 = FUN__text__006f4a90(*(long *)(param_1 + 0x10) + uVar6);
        FUN__text__006f4e04(*(long *)(param_1 + 0x10) + uVar6,param_2);
        FUN__text__006a0f24(uVar3);
        uVar6 = uVar6 + 0x20;
      } while ((ulong)uVar1 * 0x20 != uVar6);
    }
  }
  if ((param_3 & 1) == 0) {
    uVar3 = nn::util::BinaryFileHeader::GetFirstBlock();
    uVar6 = FUN__text__006c16f0();
    if ((uVar6 & 1) != 0) {
      FUN__text__006f3138(uVar3,param_2);
    }
    uVar6 = nn::util::BinaryFileHeader::IsRelocated();
    if ((uVar6 & 1) != 0) {
      nn::util::BinaryFileHeader::GetRelocationTable();
      nn::util::RelocationTable::Unrelocate();
    }
  }
  lVar5 = *(long *)(param_1 + 0x10);
  lVar2 = nn::util::BinaryFileHeader::GetFirstBlock();
  if (lVar5 != 0) {
    uVar6 = (ulong)*(uint *)(lVar2 + 0x1c);
    if (0 < (int)*(uint *)(lVar2 + 0x1c)) {
      lVar2 = lVar5;
      do {
        FUN__text__006f4a80(lVar2);
        uVar6 = uVar6 - 1;
        lVar2 = lVar2 + 0x20;
      } while (uVar6 != 0);
    }
    FUN__text__006a0f24(lVar5);
  }
  FUN__text__006a0f24(*(undefined8 *)(param_1 + 0x18));
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN__text__006a0f24();
  }
  FUN__text__006a0f24(*(undefined8 *)(param_1 + 0x28));
  FUN__text__006a0f24(*(undefined8 *)(param_1 + 0x30));
  return;
}


