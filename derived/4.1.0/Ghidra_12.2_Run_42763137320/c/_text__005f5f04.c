/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005f5f04; name: FUN_.text__005f5f04
 */


undefined8 FUN__text__005f5f04(long *param_1,ulong param_2,long param_3,ulong param_4)

{
  ulong uVar1;
  long lVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  char cVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  
  cVar6 = FUN__text__005f7e10(param_2);
  uVar4 = (uint)cVar6;
  uVar8 = (uint)~(-1 << (ulong)(uVar4 & 0x1f)) & param_2;
  uVar1 = uVar8 << ((ulong)(5 - uVar4) & 0x3f);
  if (4 < (int)uVar4) {
    uVar1 = uVar8 >> ((ulong)(uVar4 - 5) & 0x3f);
  }
  cVar3 = cVar6 + ((char)uVar1 >> 5);
  iVar5 = (int)cVar3;
  lVar9 = (long)cVar3 + -3;
  if ((uint)lVar9 < 5) {
    lVar9 = *(long *)(lVar9 * 8 + 0x757d90);
  }
  else {
    lVar9 = -0x81;
  }
  uVar8 = (ulong)(((uint)uVar1 & 0x1f) >> (ulong)(8U - iVar5 & 0x1f));
  if (7 < iVar5) {
    uVar8 = uVar1 & 0x1f;
  }
  uVar8 = (uVar8 | (long)(iVar5 + -3) << 5) + lVar9;
  if (((ulong)param_1[4] <= uVar8 || *param_1 == 0) ||
     (lVar9 = FUN__text__005f5c8c(*param_1 + uVar8 * 0x20), lVar9 == 0)) {
    return 0;
  }
  uVar8 = FUN__text__005f598c();
  if (uVar8 < param_2) {
    uVar4 = (uint)uVar1 + 1;
    cVar6 = cVar6 + ((char)uVar4 >> 5);
    iVar5 = (int)cVar6;
    lVar9 = (long)cVar6 + -3;
    if ((uint)lVar9 < 5) {
      lVar9 = *(long *)(lVar9 * 8 + 0x757d90);
    }
    else {
      lVar9 = -0x81;
    }
    uVar1 = (ulong)((uVar4 & 0x1f) >> (ulong)(8U - iVar5 & 0x1f));
    if (7 < iVar5) {
      uVar1 = (ulong)uVar4 & 0x1f;
    }
    uVar1 = (uVar1 | (long)(iVar5 + -3) << 5) + lVar9;
    if ((ulong)param_1[4] <= uVar1) {
      return 0;
    }
    if (*param_1 == 0) {
      return 0;
    }
    lVar9 = FUN__text__005f5c8c(*param_1 + uVar1 * 0x20);
    if (lVar9 == 0) {
      return 0;
    }
  }
  lVar2 = param_3;
  if ((param_4 & 1) == 0) {
    lVar2 = 0;
  }
  uVar7 = FUN__text__005f60bc(param_1,lVar9,param_2 - lVar2,param_3);
  return uVar7;
}


