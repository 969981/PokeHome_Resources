/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0044c6b0; name: FUN_.text__0044c6b0
 */


undefined8 FUN__text__0044c6b0(long param_1,long param_2)

{
  int iVar1;
  void *__dest;
  uint uVar2;
  uint uVar3;
  ulong *puVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  ulong *puVar8;
  ulong uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  ulong *__dest_00;
  ulong *puVar14;
  
  uVar5 = (ulong)*(uint *)(param_2 + 0x18);
  if (*(uint *)(param_2 + 0x18) == 0) {
    return 0;
  }
  uVar3 = *(uint *)(param_1 + 0x28);
  if (uVar3 == 0) {
    return 0;
  }
  puVar8 = *(ulong **)(param_2 + 0x10);
  uVar7 = 0;
  puVar14 = puVar8;
  uVar10 = uVar3;
LAB__text__0044c718:
  if (uVar10 != 0) {
    uVar9 = *puVar14;
    iVar11 = 0;
    puVar4 = *(ulong **)(param_1 + 0x20);
    uVar13 = uVar10;
    do {
      iVar1 = (uVar13 >> 1) + iVar11;
      __dest_00 = puVar4 + (long)iVar1 * 3;
      if (*__dest_00 == uVar9 && (int)__dest_00[1] == 0) {
        if ((((uVar9 == 0xffffffffffffffff) ||
             ((puVar4 <= __dest_00 + -3 && (__dest_00[-3] == uVar9)))) ||
            ((__dest_00 + 3 <= puVar4 + (ulong)uVar10 * 3 + -3 && (__dest_00[3] == uVar9)))) ||
           (uVar10 = *(uint *)(param_1 + 0x48), uVar10 == 0)) goto LAB__text__0044c800;
        lVar6 = *(long *)(param_1 + 0x40);
        iVar11 = 0;
        uVar13 = uVar10;
        goto LAB__text__0044c7d0;
      }
      uVar12 = uVar13;
      uVar2 = uVar13 >> 1;
      if (*__dest_00 < uVar9) {
        uVar12 = uVar13 - 1;
        iVar11 = iVar1 + 1;
        uVar2 = uVar12 >> 1;
      }
      uVar13 = uVar2;
    } while (1 < uVar12);
  }
  goto LAB__text__0044c708;
  while( true ) {
    if (uVar5 < uVar9) {
      iVar11 = iVar1 + 1;
    }
    uVar12 = uVar13 - (uVar5 < uVar9);
    uVar13 = uVar12 >> 1;
    if (uVar12 < 2) break;
LAB__text__0044c7d0:
    iVar1 = iVar11 + (uVar13 >> 1);
    uVar5 = *(ulong *)(lVar6 + (long)iVar1 * 8);
    if (uVar5 == uVar9) {
      uVar10 = uVar10 - 1;
      if ((long)iVar1 < (long)(ulong)uVar10) {
        __dest = (void *)(lVar6 + (long)iVar1 * 8);
        memmove(__dest,(void *)((long)__dest + 8),
                (ulong)(((int)lVar6 + uVar10 * 8) - (int)__dest) & 0xfffffff8);
        uVar10 = *(int *)(param_1 + 0x48) - 1;
        puVar4 = *(ulong **)(param_1 + 0x20);
        uVar3 = *(uint *)(param_1 + 0x28);
      }
      *(uint *)(param_1 + 0x48) = uVar10;
      uVar3 = uVar3 - 1;
      puVar4 = puVar4 + (ulong)uVar3 * 3;
      goto joined_r0x0044c870;
    }
  }
LAB__text__0044c800:
  uVar3 = uVar3 - 1;
  puVar4 = puVar4 + (ulong)uVar3 * 3;
joined_r0x0044c870:
  if (__dest_00 < puVar4) {
    memmove(__dest_00,__dest_00 + 3,(ulong)(uint)((int)puVar4 - (int)__dest_00));
    uVar3 = *(int *)(param_1 + 0x28) - 1;
  }
  *(uint *)(param_1 + 0x28) = uVar3;
  uVar7 = 1;
  puVar8 = *(ulong **)(param_2 + 0x10);
  uVar5 = (ulong)*(uint *)(param_2 + 0x18);
  uVar10 = uVar3;
LAB__text__0044c708:
  puVar14 = puVar14 + 1;
  if (puVar14 == puVar8 + uVar5) {
    return uVar7;
  }
  goto LAB__text__0044c718;
}


