/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00500ad0; name: FUN_.text__00500ad0
 */


void FUN__text__00500ad0(long param_1,long param_2)

{
  ushort *puVar1;
  undefined8 uVar2;
  uint uVar3;
  ulong uVar4;
  long *plVar5;
  ushort *puVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  uint uVar11;
  int iVar12;
  short sVar13;
  
  lVar10 = *(long *)(param_2 + 8);
  uVar3 = *(uint *)(lVar10 + 0x28);
  uVar4 = (ulong)uVar3;
  plVar9 = (long *)(lVar10 + 0x20);
  plVar5 = (long *)*plVar9;
  if (uVar3 == 0) {
    uVar11 = 0;
    lVar7 = *(long *)(*(long *)(param_1 + 0x18) + (ulong)*(uint *)(param_1 + 0x20) * 0x18 + -8);
  }
  else {
    uVar11 = 0;
    lVar7 = uVar4 << 3;
    do {
      if (*plVar5 == param_2) goto LAB__text__00500b24;
      uVar11 = uVar11 + 1;
      plVar5 = plVar5 + 1;
      lVar7 = lVar7 + -8;
    } while (lVar7 != 0);
    uVar11 = uVar3;
LAB__text__00500b24:
    lVar7 = *(long *)(*(long *)(param_1 + 0x18) + (ulong)*(uint *)(param_1 + 0x20) * 0x18 + -8);
  }
  if (lVar7 == 0) {
    return;
  }
  puVar6 = *(ushort **)(lVar7 + 0x18);
  uVar3 = *(uint *)(lVar7 + 0x20);
  puVar1 = puVar6;
  if (uVar3 == 0) {
LAB__text__00500ba4:
    if (puVar1 != puVar6 + uVar3) {
      uVar3 = uVar3 - 1;
      if (puVar1 < puVar6 + uVar3) {
        memmove(puVar1,puVar1 + 1,(ulong)(uint)((int)(puVar6 + uVar3) - (int)puVar1) & 0xfffffffe);
        uVar3 = *(int *)(lVar7 + 0x20) - 1;
      }
      *(uint *)(lVar7 + 0x20) = uVar3;
      uVar4 = (ulong)*(uint *)(lVar10 + 0x28);
    }
  }
  else {
    lVar8 = (ulong)uVar3 << 1;
    do {
      if ((uint)*puVar1 == (uVar11 & 0xffff)) goto LAB__text__00500ba4;
      puVar1 = puVar1 + 1;
      lVar8 = lVar8 + -2;
    } while (lVar8 != 0);
  }
  *(short *)(lVar7 + 0x12) = (short)uVar4;
  uVar2 = FUN__text__004cdac4(lVar7,*(undefined4 *)(lVar10 + 0x28));
  iVar12 = *(int *)(lVar7 + 8);
  sVar13 = *(short *)(lVar7 + 0x10);
  if (*(int *)(lVar7 + 0x20) != 0) {
    puVar1 = *(ushort **)(lVar7 + 0x18);
    do {
      puVar6 = puVar1 + 1;
      sVar13 = sVar13 + -1;
      iVar12 = iVar12 - *(int *)(*(long *)(*plVar9 + (ulong)*puVar1 * 8) + 0x1c);
      uVar2 = FUN__text__004cdb00(lVar7);
      puVar1 = puVar6;
    } while (puVar6 != (ushort *)(*(long *)(lVar7 + 0x18) + (ulong)*(uint *)(lVar7 + 0x20) * 2));
  }
  *(int *)(lVar7 + 0xc) = iVar12;
  *(short *)(lVar7 + 0x10) = sVar13;
  FUN__text__00500c70(uVar2,lVar10,uVar11,plVar9,lVar7);
  return;
}


