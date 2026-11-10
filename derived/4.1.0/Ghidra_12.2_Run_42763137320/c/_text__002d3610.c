/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002d3610; name: FUN_.text__002d3610
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 FUN__text__002d3610(undefined8 *param_1)

{
  uint *puVar1;
  ushort uVar2;
  ushort uVar3;
  long lVar4;
  int *piVar5;
  undefined2 uVar6;
  ushort *puVar7;
  int *piVar8;
  int *piVar9;
  ulong uVar10;
  ushort *puVar11;
  
  piVar5 = (int *)FUN__text__002d389c();
  if (piVar5 == (int *)0x0) {
    return 0;
  }
  piVar8 = (int *)*param_1;
  if (piVar8 == (int *)0x0) {
    return 0;
  }
  puVar7 = (ushort *)((long)piVar5 - (long)*piVar5);
  uVar2 = *puVar7;
  if (uVar2 < 7) {
    piVar9 = (int *)0x0;
    puVar11 = (ushort *)-(long)iRam0000000000000000;
    uVar3 = *puVar11;
  }
  else {
    piVar9 = (int *)0x0;
    if ((ulong)puVar7[3] != 0) {
      puVar1 = (uint *)((long)piVar5 + (ulong)puVar7[3]);
      piVar9 = (int *)((long)puVar1 + (ulong)*puVar1);
    }
    puVar11 = (ushort *)((long)piVar9 - (long)*piVar9);
    uVar3 = *puVar11;
  }
  lVar4 = _DAT_008aacc0;
  if ((4 < uVar3) && ((ulong)puVar11[2] != 0)) {
    lVar4 = *(long *)(&DAT_008aacc0 +
                     ((long)*(char *)((long)piVar9 + (ulong)puVar11[2]) & 0xffffffffU) * 8);
  }
  if (lVar4 != 2) {
    if (uVar2 < 0xd) {
      return 0;
    }
    if ((ulong)puVar7[6] == 0) {
      return 0;
    }
    return *(undefined2 *)((long)piVar5 + (ulong)puVar7[6]);
  }
  if (uVar2 < 0xb) {
    uVar10 = 0;
LAB__text__002d3748:
    uVar6 = 0;
    puVar7 = (ushort *)((long)piVar8 - (long)*piVar8);
    if ((uint)*puVar7 <= (uint)uVar10) {
      return 0;
    }
  }
  else {
    uVar10 = 0;
    if ((ulong)puVar7[5] != 0) {
      uVar10 = (ulong)*(ushort *)((long)piVar5 + (ulong)puVar7[5]);
    }
    if (uVar2 < 0xd) {
      uVar6 = 0;
      puVar7 = (ushort *)((long)piVar8 - (long)*piVar8);
      uVar2 = *puVar7;
    }
    else {
      if ((ulong)puVar7[6] == 0) goto LAB__text__002d3748;
      uVar6 = *(undefined2 *)((long)piVar5 + (ulong)puVar7[6]);
      puVar7 = (ushort *)((long)piVar8 - (long)*piVar8);
      uVar2 = *puVar7;
    }
    if ((uint)uVar2 <= (uint)uVar10) {
      return uVar6;
    }
  }
  if ((ulong)*(ushort *)((long)puVar7 + uVar10) == 0) {
    return uVar6;
  }
  return *(undefined2 *)((long)piVar8 + (ulong)*(ushort *)((long)puVar7 + uVar10));
}


