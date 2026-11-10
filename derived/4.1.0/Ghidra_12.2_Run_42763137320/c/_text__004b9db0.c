/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004b9db0; name: FUN_.text__004b9db0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN__text__004b9db0(long param_1,uint param_2,int param_3,int param_4,int param_5)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  byte bVar4;
  undefined1 *puVar5;
  ulong uVar6;
  byte *pbVar7;
  uint uVar8;
  ulong uVar9;
  byte *pbVar10;
  byte *pbVar11;
  long *plVar12;
  size_t sVar13;
  
  pbVar7 = *(byte **)(param_1 + 0x20);
  uVar2 = param_2 & 0xff;
  iVar3 = *(int *)(_DAT_008a4ac0 + (ulong)param_2 * 4);
  if (pbVar7 == (byte *)0x0) {
    if (iVar3 == param_3) goto LAB__text__004b9f04;
    sVar13 = 0;
  }
  else {
    bVar4 = *pbVar7;
    sVar13 = (size_t)bVar4;
    uVar8 = (uint)bVar4;
    if (bVar4 < 2) {
      uVar8 = 1;
    }
    uVar6 = (ulong)uVar8;
    pbVar11 = pbVar7 + (sVar13 & 0xfc);
    uVar9 = uVar6;
    pbVar10 = pbVar7;
    do {
      pbVar11 = pbVar11 + 4;
      pbVar10 = pbVar10 + 1;
      if (*pbVar10 == uVar2) {
        iVar3 = *(int *)pbVar11;
        break;
      }
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
    if (iVar3 == param_3) goto LAB__text__004b9f04;
    pbVar11 = pbVar7 + ((ulong)(uint)bVar4 & 0xfc);
    do {
      pbVar11 = pbVar11 + 4;
      pbVar7 = pbVar7 + 1;
      if (*pbVar7 == uVar2) goto LAB__text__004b9f00;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  lVar1 = sVar13 + 1;
  uVar8 = ((uint)lVar1 & 0x1fc) + 4;
  puVar5 = (undefined1 *)FUN__text__00400f80(1,uVar8 + (uint)lVar1 * 4);
  if (puVar5 == (undefined1 *)0x0) {
    return 2;
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    memcpy(puVar5 + 1,(void *)(*(long *)(param_1 + 0x20) + 1),sVar13);
    memcpy(puVar5 + uVar8,(void *)(*(long *)(param_1 + 0x20) + (ulong)(((uint)sVar13 & 0xfc) + 4)),
           sVar13 << 2);
    FUN__text__00400fc0(1,*(undefined8 *)(param_1 + 0x20));
  }
  puVar5[lVar1] = (char)param_2;
  pbVar11 = puVar5 + sVar13 * 4 + (ulong)uVar8;
  *puVar5 = (char)lVar1;
  *(undefined1 **)(param_1 + 0x20) = puVar5;
LAB__text__004b9f00:
  *(int *)pbVar11 = param_3;
LAB__text__004b9f04:
  pbVar7 = *(byte **)(param_1 + 0x28);
  if (param_5 == 0 && param_4 == 0) {
    if (pbVar7 != (byte *)0x0) {
      uVar8 = (uint)*pbVar7;
      if (*pbVar7 < 2) {
        uVar8 = 1;
      }
      uVar9 = (ulong)uVar8;
      pbVar11 = pbVar7;
      do {
        pbVar11 = pbVar11 + 1;
        if (*pbVar11 == uVar2) goto LAB__text__004b9f54;
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
    }
    return 1;
  }
  if (pbVar7 == (byte *)0x0) {
    sVar13 = 0;
  }
  else {
LAB__text__004b9f54:
    bVar4 = *pbVar7;
    sVar13 = (size_t)bVar4;
    uVar8 = (uint)bVar4;
    if (bVar4 < 2) {
      uVar8 = 1;
    }
    uVar9 = (ulong)uVar8;
    pbVar11 = pbVar7 + (sVar13 & 0xfc) + 4;
    do {
      pbVar7 = pbVar7 + 1;
      if (*pbVar7 == uVar2) goto LAB__text__004ba000;
      pbVar11 = pbVar11 + 8;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  plVar12 = (long *)(param_1 + 0x28);
  lVar1 = sVar13 + 1;
  uVar2 = ((uint)lVar1 & 0x1fc) + 4;
  puVar5 = (undefined1 *)FUN__text__00400f80(1,uVar2 + (uint)lVar1 * 8);
  if (puVar5 == (undefined1 *)0x0) {
    return 2;
  }
  if (*plVar12 != 0) {
    memcpy(puVar5 + 1,(void *)(*plVar12 + 1),sVar13);
    memcpy(puVar5 + uVar2,(void *)(*plVar12 + (ulong)(((uint)sVar13 & 0xfc) + 4)),sVar13 << 3);
    FUN__text__00400fc0(1,*plVar12);
  }
  puVar5[lVar1] = (char)param_2;
  pbVar11 = puVar5 + sVar13 * 8 + (ulong)uVar2;
  *puVar5 = (char)lVar1;
  *plVar12 = (long)puVar5;
LAB__text__004ba000:
  *(int *)pbVar11 = param_4;
  *(int *)(pbVar11 + 4) = param_5;
  return 1;
}


