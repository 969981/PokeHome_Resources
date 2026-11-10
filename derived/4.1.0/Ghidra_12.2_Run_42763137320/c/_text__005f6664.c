/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005f6664; name: FUN_.text__005f6664
 */


void FUN__text__005f6664(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  uint uVar2;
  int iVar3;
  char cVar4;
  ulong uVar5;
  long lVar6;
  
  uVar5 = FUN__text__005f598c(param_2);
  if (uVar5 != 0) {
    FUN__text__005f5c28(param_2);
    cVar4 = FUN__text__005f7e10(uVar5);
    uVar2 = (uint)cVar4;
    uVar5 = uVar5 & (uint)~(-1 << (ulong)(uVar2 & 0x1f));
    uVar1 = uVar5 << ((ulong)(5 - uVar2) & 0x3f);
    if (4 < (int)uVar2) {
      uVar1 = uVar5 >> ((ulong)(uVar2 - 5) & 0x3f);
    }
    cVar4 = cVar4 + ((char)uVar1 >> 5);
    iVar3 = (int)cVar4;
    lVar6 = (long)cVar4 + -3;
    if ((uint)lVar6 < 5) {
      lVar6 = *(long *)(lVar6 * 8 + 0x757d90);
    }
    else {
      lVar6 = -0x81;
    }
    uVar5 = (ulong)(((uint)uVar1 & 0x1f) >> (ulong)(8U - iVar3 & 0x1f));
    if (7 < iVar3) {
      uVar5 = uVar1 & 0x1f;
    }
    uVar5 = (uVar5 | (long)(iVar3 + -3) << 5) + lVar6;
    if (((ulong)param_1[4] <= uVar5 || *param_1 == 0) ||
       (lVar6 = FUN__text__005f5c8c(*param_1 + uVar5 * 0x20), lVar6 == 0)) {
      uVar5 = -(ulong)(uVar2 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar2 << 2;
      *(uint *)(param_1[2] + uVar5) =
           *(uint *)(param_1[2] + uVar5) & (1 << (ulong)((uint)uVar1 & 0x1f) ^ 0xffffffffU);
      if (*(int *)(param_1[2] + uVar5) == 0) {
        param_1[3] = param_1[3] & (1L << ((long)(int)uVar2 & 0x3fU) ^ 0xffffffffffffffffU);
        return;
      }
    }
  }
  return;
}


