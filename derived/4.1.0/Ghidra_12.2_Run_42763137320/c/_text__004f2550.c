/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004f2550; name: FUN_.text__004f2550
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN__text__004f2550(long *param_1,long *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  byte bVar3;
  byte bVar4;
  char cVar5;
  ulong uVar6;
  int iVar7;
  long lVar8;
  double *pdVar9;
  uint *puVar10;
  long lVar11;
  long *plVar12;
  uint uVar13;
  double dVar14;
  double dVar15;
  float fVar16;
  double dVar17;
  
  lVar8 = *param_2;
  *param_2 = lVar8 + 4;
  bVar3 = *(byte *)(lVar8 + 4);
  *param_2 = lVar8 + 5;
  *(byte *)((long)param_1 + 0x11c) =
       bVar3 & 8 | bVar3 >> 1 & 3 | *(byte *)((long)param_1 + 0x11c) & 0xf4;
  uVar6 = FUN__text__004684a0();
  if ((int)uVar6 != 1) {
    return uVar6;
  }
  pdVar9 = (double *)((uint *)*param_2 + 1);
  uVar13 = *(uint *)*param_2;
  *param_2 = (long)pdVar9;
  if (uVar13 != 0) {
    iVar7 = uVar13 - *(uint *)((long)param_1 + 0x104);
    if ((*(uint *)((long)param_1 + 0x104) <= uVar13 && iVar7 != 0) &&
       (uVar6 = FUN__text__00463130(param_1 + 0x1e,iVar7), (uVar6 & 1) == 0)) {
      return 0x34;
    }
    do {
      uVar2 = *(undefined4 *)*param_2;
      *param_2 = (long)((undefined4 *)*param_2 + 1);
      uVar6 = (**(code **)(*param_1 + 0x50))(param_1,uVar2);
      iVar7 = (int)uVar6;
      if (iVar7 != 0xf && iVar7 != 1) {
        return uVar6;
      }
      uVar13 = uVar13 - 1;
    } while (uVar13 != 0);
    if (iVar7 != 1) {
      return uVar6;
    }
    pdVar9 = (double *)*param_2;
  }
  dVar14 = *pdVar9;
  *param_2 = (long)(pdVar9 + 1);
  dVar15 = pdVar9[1];
  *param_2 = (long)(pdVar9 + 2);
  fVar16 = *(float *)(pdVar9 + 2);
  *param_2 = (long)((long)pdVar9 + 0x14);
  bVar3 = *(byte *)((long)pdVar9 + 0x14);
  *param_2 = (long)pdVar9 + 0x15;
  bVar4 = *(byte *)((long)pdVar9 + 0x15);
  *param_2 = (long)pdVar9 + 0x16;
  cVar5 = *(char *)((long)pdVar9 + 0x16);
  puVar10 = (uint *)((long)pdVar9 + 0x17);
  *param_2 = (long)puVar10;
  if (cVar5 != '\0') {
    *(float *)(param_1 + 0x21) = fVar16;
    *(byte *)((long)param_1 + 0x11c) = *(byte *)((long)param_1 + 0x11c) | 4;
    dVar17 = (double)NEON_ucvtf((ulong)_DAT_008ab030);
    iVar7 = (int)((dVar17 * 240.0) / ((double)bVar4 * (double)fVar16));
    *(int *)((long)param_1 + 0x10c) = iVar7;
    *(uint *)(param_1 + 0x22) = iVar7 * (uint)bVar3;
    *(int *)((long)param_1 + 0x114) = (int)(dVar17 * 0.001 * dVar14);
    *(int *)(param_1 + 0x23) = (int)(dVar17 * 0.001 * dVar15);
    puVar10 = (uint *)*param_2;
  }
  uVar13 = *puVar10;
  *param_2 = (long)(puVar10 + 1);
  if (uVar13 != 0) {
    lVar8 = FUN__text__00400f80(0,(ulong)uVar13 * 0x18);
    if (lVar8 == 0) {
      return 2;
    }
    lVar11 = 0;
    do {
      uVar2 = *(undefined4 *)*param_2;
      *param_2 = (long)((undefined4 *)*param_2 + 1);
      puVar1 = (undefined4 *)(lVar8 + lVar11);
      lVar11 = lVar11 + 0x18;
      *puVar1 = uVar2;
      uVar2 = *(undefined4 *)*param_2;
      *param_2 = (long)((undefined4 *)*param_2 + 1);
      puVar1[1] = uVar2;
      uVar2 = *(undefined4 *)*param_2;
      *param_2 = (long)((undefined4 *)*param_2 + 1);
      puVar1[2] = uVar2;
      uVar2 = *(undefined4 *)*param_2;
      *param_2 = (long)((undefined4 *)*param_2 + 1);
      puVar1[3] = uVar2;
      uVar2 = *(undefined4 *)*param_2;
      *param_2 = (long)((undefined4 *)*param_2 + 1);
      puVar1[4] = uVar2;
      uVar2 = *(undefined4 *)*param_2;
      *param_2 = (long)((undefined4 *)*param_2 + 1);
      puVar1[5] = uVar2;
    } while ((ulong)uVar13 * 0x18 != lVar11);
    uVar6 = FUN__text__004f2840(param_1,lVar8,uVar13);
    FUN__text__00400fc0(0,lVar8);
    return uVar6 & 0xffffffff;
  }
  plVar12 = (long *)param_1[0x24];
  if (plVar12 == (long *)0x0) {
    return 1;
  }
  if (*plVar12 != 0) {
    *(undefined4 *)(plVar12 + 1) = 0;
    FUN__text__00400fc0(2);
    *plVar12 = 0;
    *(undefined4 *)((long)plVar12 + 0xc) = 0;
    plVar12 = (long *)param_1[0x24];
    if (plVar12 == (long *)0x0) goto LAB__text__004f27f4;
  }
  FUN__text__00400fc0(2,plVar12);
LAB__text__004f27f4:
  param_1[0x24] = 0;
  return 1;
}


