/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006a4cb0; name: FUN_.text__006a4cb0
 */


void FUN__text__006a4cb0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                        long *param_5,char *param_6)

{
  int iVar1;
  uint *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  char local_a8 [72];
  
  if (*(int *)(param_1 + 0x60) == 0) {
LAB__text__006a4d28:
    lVar6 = 0;
  }
  else {
    plVar7 = (long *)(param_1 + 0x58);
    do {
      lVar5 = *plVar7;
      if (lVar5 == param_1 + 0x50) goto LAB__text__006a4d28;
      lVar6 = *(long *)(lVar5 + -8);
      plVar7 = (long *)(lVar5 + 8);
      iVar1 = strcmp(param_6,*(char **)(lVar6 + 0x10));
    } while (iVar1 != 0);
  }
  puVar2 = (uint *)FUN__text__006c19c0(*(undefined8 *)(param_1 + 0x20),param_6);
  local_a8[0x38] = '\0';
  local_a8[0x39] = '\0';
  local_a8[0x3a] = '\0';
  local_a8[0x3b] = '\0';
  local_a8[0x3c] = '\0';
  local_a8[0x3d] = '\0';
  local_a8[0x3e] = '\0';
  local_a8[0x3f] = '\0';
  local_a8[0x40] = '\0';
  local_a8[0x41] = '\0';
  local_a8[0x42] = '\0';
  local_a8[0x43] = '\0';
  local_a8[0x44] = '\0';
  local_a8[0x45] = '\0';
  local_a8[0x46] = '\0';
  local_a8[0x47] = '\0';
  local_a8[0x28] = '\0';
  local_a8[0x29] = '\0';
  local_a8[0x2a] = '\0';
  local_a8[0x2b] = '\0';
  local_a8[0x2c] = '\0';
  local_a8[0x2d] = '\0';
  local_a8[0x2e] = '\0';
  local_a8[0x2f] = '\0';
  local_a8[0x30] = '\0';
  local_a8[0x31] = '\0';
  local_a8[0x32] = '\0';
  local_a8[0x33] = '\0';
  local_a8[0x34] = '\0';
  local_a8[0x35] = '\0';
  local_a8[0x36] = '\0';
  local_a8[0x37] = '\0';
  local_a8[0x18] = '\0';
  local_a8[0x19] = '\0';
  local_a8[0x1a] = '\0';
  local_a8[0x1b] = '\0';
  local_a8[0x1c] = '\0';
  local_a8[0x1d] = '\0';
  local_a8[0x1e] = '\0';
  local_a8[0x1f] = '\0';
  local_a8[0x20] = '\0';
  local_a8[0x21] = '\0';
  local_a8[0x22] = '\0';
  local_a8[0x23] = '\0';
  local_a8[0x24] = '\0';
  local_a8[0x25] = '\0';
  local_a8[0x26] = '\0';
  local_a8[0x27] = '\0';
  lVar5 = *(long *)(param_1 + 0x20) + (ulong)*puVar2 + 0xc;
  local_a8[8] = '\0';
  local_a8[9] = '\0';
  local_a8[10] = '\0';
  local_a8[0xb] = '\0';
  local_a8[0xc] = '\0';
  local_a8[0xd] = '\0';
  local_a8[0xe] = '\0';
  local_a8[0xf] = '\0';
  local_a8[0x10] = '\0';
  local_a8[0x11] = '\0';
  local_a8[0x12] = '\0';
  local_a8[0x13] = '\0';
  local_a8[0x14] = '\0';
  local_a8[0x15] = '\0';
  local_a8[0x16] = '\0';
  local_a8[0x17] = '\0';
  local_a8[0] = '\0';
  local_a8[1] = '\0';
  local_a8[2] = '\0';
  local_a8[3] = '\0';
  local_a8[4] = '\0';
  local_a8[5] = '\0';
  local_a8[6] = '\0';
  local_a8[7] = '\0';
  nn::util::SNPrintf(local_a8,0x48,(char *)0x71d698,lVar5);
  uVar3 = (**(code **)(*param_5 + 0x50))(param_5,0x626e7667,local_a8);
  uVar4 = nn::util::BinaryFileHeader::IsRelocated();
  if ((uVar4 & 1) == 0) {
    nn::util::BinaryFileHeader::GetRelocationTable();
    nn::util::RelocationTable::Relocate();
  }
  FUN__text__006d42b8(lVar6,param_2,param_3,param_5,param_4,puVar2,lVar5,uVar3);
  return;
}


