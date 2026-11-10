/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0063a010; name: FUN_.text__0063a010
 */


int FUN__text__0063a010(long param_1,uint param_2)

{
  ushort *puVar1;
  ushort *puVar2;
  ushort *puVar3;
  ushort uVar4;
  int iVar5;
  ushort *puVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  
  if (param_2 < 2) {
    return 0;
  }
  uVar9 = (ulong)(param_2 >> 1);
  uVar7 = uVar9 & 3;
  if (uVar9 - 1 < 3) {
    lVar8 = 0;
    iVar5 = 0;
  }
  else {
    lVar8 = 0;
    iVar5 = 0;
    puVar6 = (ushort *)(param_1 + 4);
    do {
      puVar2 = puVar6 + -2;
      lVar8 = lVar8 + -4;
      puVar3 = puVar6 + -1;
      uVar4 = *puVar6;
      puVar1 = puVar6 + 1;
      puVar6 = puVar6 + 4;
      iVar5 = (uint)*puVar1 + (uint)uVar4 + (uint)*puVar3 + (uint)*puVar2 + iVar5;
    } while (-lVar8 != (uVar9 & 0x7ffffffc));
    lVar8 = -lVar8;
  }
  if ((param_2 >> 1 & 3) != 0) {
    puVar6 = (ushort *)(param_1 + lVar8 * 2);
    do {
      uVar7 = uVar7 - 1;
      iVar5 = (uint)*puVar6 + iVar5;
      puVar6 = puVar6 + 1;
    } while (uVar7 != 0);
  }
  return iVar5;
}


