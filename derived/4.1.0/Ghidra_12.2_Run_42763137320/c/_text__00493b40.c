/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00493b40; name: FUN_.text__00493b40
 */


void FUN__text__00493b40(long param_1,byte param_2,undefined8 param_3,int param_4,int param_5)

{
  long lVar1;
  byte bVar2;
  undefined1 *puVar3;
  byte *pbVar4;
  byte *pbVar5;
  uint uVar6;
  ulong uVar7;
  long *plVar8;
  size_t __n;
  
  FUN__text__00467ad0();
  if (param_5 == 0 && param_4 == 0) {
    pbVar4 = *(byte **)(param_1 + 0xd8);
    if (pbVar4 != (byte *)0x0) {
      uVar7 = 0;
      uVar6 = (uint)*pbVar4;
      if (*pbVar4 < 2) {
        uVar6 = 1;
      }
      do {
        if (pbVar4[uVar7 + 1] == param_2) goto LAB__text__00493bd4;
        uVar7 = uVar7 + 1;
      } while (uVar6 != uVar7);
    }
  }
  else {
    pbVar4 = *(byte **)(param_1 + 0xd8);
    if (pbVar4 == (byte *)0x0) {
      __n = 0;
    }
    else {
LAB__text__00493bd4:
      bVar2 = *pbVar4;
      __n = (size_t)bVar2;
      uVar6 = (uint)bVar2;
      if (bVar2 < 2) {
        uVar6 = 1;
      }
      uVar7 = (ulong)uVar6;
      pbVar5 = pbVar4 + (__n & 0xfc) + 4;
      do {
        pbVar4 = pbVar4 + 1;
        if (*pbVar4 == param_2) goto LAB__text__00493c80;
        pbVar5 = pbVar5 + 8;
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
    }
    plVar8 = (long *)(param_1 + 0xd8);
    lVar1 = __n + 1;
    uVar6 = ((uint)lVar1 & 0x1fc) + 4;
    puVar3 = (undefined1 *)FUN__text__00400f80(2,uVar6 + (uint)lVar1 * 8);
    if (puVar3 != (undefined1 *)0x0) {
      if (*plVar8 != 0) {
        memcpy(puVar3 + 1,(void *)(*plVar8 + 1),__n);
        memcpy(puVar3 + uVar6,(void *)(*plVar8 + (ulong)(((uint)__n & 0xfc) + 4)),__n << 3);
        FUN__text__00400fc0(2,*plVar8);
      }
      puVar3[lVar1] = param_2;
      pbVar5 = puVar3 + __n * 8 + (ulong)uVar6;
      *puVar3 = (char)lVar1;
      *plVar8 = (long)puVar3;
LAB__text__00493c80:
      *(int *)pbVar5 = param_4;
      *(int *)(pbVar5 + 4) = param_5;
    }
  }
  return;
}


