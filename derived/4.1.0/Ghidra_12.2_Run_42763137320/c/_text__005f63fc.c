/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005f63fc; name: FUN_.text__005f63fc
 */


undefined8 FUN__text__005f63fc(long *param_1)

{
  ulong uVar1;
  int iVar2;
  char cVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  
  cVar3 = FUN__text__005f7e10(param_1[3]);
  if (cVar3 != -1) {
    uVar4 = FUN__text__005f7e10(*(undefined4 *)(param_1[2] + (long)cVar3 * 4));
    cVar3 = cVar3 + ((char)uVar4 >> 5);
    iVar2 = (int)cVar3;
    lVar6 = (long)cVar3 + -3;
    if ((uint)lVar6 < 5) {
      lVar6 = *(long *)(lVar6 * 8 + 0x757d90);
    }
    else {
      lVar6 = -0x81;
    }
    uVar1 = (ulong)(((uint)uVar4 & 0x1f) >> (ulong)(8U - iVar2 & 0x1f));
    if (7 < iVar2) {
      uVar1 = uVar4 & 0x1f;
    }
    uVar4 = (uVar1 | (long)(iVar2 + -3) << 5) + lVar6;
    if (uVar4 < (ulong)param_1[4] && *param_1 != 0) {
      uVar5 = FUN__text__005f5c8c(*param_1 + uVar4 * 0x20);
      return uVar5;
    }
  }
  return 0;
}


