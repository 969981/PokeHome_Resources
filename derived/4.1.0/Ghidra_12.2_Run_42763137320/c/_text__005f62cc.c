/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005f62cc; name: FUN_.text__005f62cc
 */


undefined8 FUN__text__005f62cc(long *param_1,ulong param_2)

{
  ulong uVar1;
  uint uVar2;
  int iVar3;
  char cVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  char cVar8;
  
  cVar4 = FUN__text__005f7e10(param_2);
  uVar2 = (uint)cVar4;
  param_2 = (uint)~(-1 << (ulong)(uVar2 & 0x1f)) & param_2;
  cVar8 = (char)(param_2 << ((ulong)(5 - uVar2) & 0x3f));
  if (4 < (int)uVar2) {
    cVar8 = (char)(param_2 >> ((ulong)(uVar2 - 5) & 0x3f));
  }
  uVar2 = -1 << (ulong)((int)cVar8 + 1U & 0x1f) & *(uint *)(param_1[2] + (long)cVar4 * 4);
  if (0x1f < (int)cVar8 + 1U || uVar2 == 0) {
    uVar5 = param_1[3] & -1L << ((ulong)((int)cVar4 + 1) & 0x3f);
    if (uVar5 == 0) {
      return 0;
    }
    cVar4 = FUN__text__005f7ea0(uVar5);
    uVar2 = *(uint *)(param_1[2] + (long)cVar4 * 4);
  }
  uVar5 = FUN__text__005f7ea0(uVar2);
  cVar4 = cVar4 + ((char)uVar5 >> 5);
  iVar3 = (int)cVar4;
  lVar7 = (long)cVar4 + -3;
  if ((uint)lVar7 < 5) {
    lVar7 = *(long *)(lVar7 * 8 + 0x757d90);
  }
  else {
    lVar7 = -0x81;
  }
  uVar1 = (ulong)(((uint)uVar5 & 0x1f) >> (ulong)(8U - iVar3 & 0x1f));
  if (7 < iVar3) {
    uVar1 = uVar5 & 0x1f;
  }
  uVar5 = (uVar1 | (long)(iVar3 + -3) << 5) + lVar7;
  if (uVar5 < (ulong)param_1[4] && *param_1 != 0) {
    uVar6 = FUN__text__005f5c8c(*param_1 + uVar5 * 0x20);
    return uVar6;
  }
  return 0;
}


