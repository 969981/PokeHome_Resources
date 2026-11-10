/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005f5cb0; name: FUN_.text__005f5cb0
 */


long FUN__text__005f5cb0(long *param_1,long param_2,ulong param_3)

{
  uint uVar1;
  long lVar2;
  void *pvVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  
  iVar5 = FUN__text__005f7e10(param_3);
  uVar1 = (int)(char)iVar5 + 1;
  iVar4 = (int)(char)uVar1;
  if ((uint)((long)iVar4 + -3) < 5) {
    lVar6 = *(long *)(((long)iVar4 + -3) * 8 + 0x757d90);
    lVar2 = lVar6 + (long)(iVar4 + -3) * 0x20;
  }
  else {
    lVar6 = -0x81;
    lVar2 = (long)(iVar4 + -3) * 0x20 + -0x81;
  }
  if (lVar2 != 0) {
    lVar8 = (-((ulong)(iVar5 + 1U >> 7) & 1) & 0xfffffffffffc0000 |
            ((ulong)(iVar5 + 1U) & 0xff) << 10) + lVar6 * 0x20 + -0xc00;
    lVar6 = param_2;
    do {
      FUN__text__005f5904(lVar6);
      lVar6 = lVar6 + 0x20;
      lVar8 = lVar8 + -0x20;
    } while (lVar8 != 0);
  }
  uVar7 = (ulong)(int)uVar1;
  *param_1 = param_2;
  lVar6 = 0x18;
  if (param_3 < 0x11) {
    lVar6 = 0x28;
  }
  pvVar3 = (void *)(param_2 + lVar2 * 0x20);
  param_1[2] = (long)pvVar3;
  lVar8 = ((-(uVar7 & 1) & 2 - (uVar7 & 1)) + uVar7) * 4;
  lVar6 = lVar8 + lVar6 + lVar2 * 0x20;
  memset(pvVar3,0,-(ulong)(uVar1 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar1 << 2);
  pvVar3 = (void *)((long)pvVar3 + lVar8);
  param_1[5] = uVar7;
  param_1[3] = 0;
  param_1[4] = lVar2;
  FUN__text__005f5918(pvVar3,param_3 - lVar6,1,1);
  param_1[1] = (long)pvVar3;
  FUN__text__005f5df8(param_1,pvVar3);
  return lVar6;
}


