/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00196b90; name: FUN_.text__00196b90
 */


undefined1 FUN__text__00196b90(long *param_1)

{
  byte bVar1;
  bool bVar2;
  ushort uVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  
  if ((*param_1 != 0) && (uVar6 = FUN__text__00306588(), (uVar6 & 1) != 0)) {
    return 0;
  }
  lVar7 = FUN__text__00321ac0();
  uVar4 = FUN__text__003065f8(*param_1);
  uVar3 = FUN__text__00306600(*param_1);
  if (((int)uVar4 < 0x403) && (uVar3 < 0x1c)) {
    bVar1 = *(byte *)(lVar7 + (ulong)uVar4 * 0x1c + (ulong)uVar3 + 0x193abc);
    uVar4 = FUN__text__0030680c(*param_1);
    if (((bVar1 >> (ulong)(uVar4 & 0x1f) & 1) == 0) ||
       (uVar6 = FUN__text__00196c90(param_1), (uVar6 & 1) == 0)) {
      return 0;
    }
    iVar5 = FUN__text__003069b0(*param_1);
    lVar8 = 0;
    do {
      if (iVar5 == *(int *)(lVar7 + 0x19ab18 + lVar8)) {
        return 1;
      }
      bVar2 = lVar8 != 0x18c;
      lVar8 = lVar8 + 4;
    } while (bVar2);
  }
  return 0;
}


