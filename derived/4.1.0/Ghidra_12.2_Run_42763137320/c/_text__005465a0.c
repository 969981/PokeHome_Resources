/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005465a0; name: FUN_.text__005465a0
 */


void FUN__text__005465a0(undefined8 param_1,int param_2,int param_3,long param_4)

{
  double *pdVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int *piVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  
  lVar7 = param_4 + (long)param_2 * 0x40;
  *(int *)(param_4 + (long)param_2 * 4) = param_3;
  piVar5 = (int *)(param_4 + (long)param_3 * 4 + 0x4c);
  lVar6 = param_4 + (long)param_3 * 0x30;
  pdVar1 = (double *)(lVar6 + 0x58);
  if (*piVar5 == 0) {
    uVar2 = *(undefined8 *)(lVar7 + 0xd8);
    uVar3 = *(undefined8 *)(lVar7 + 0xe8);
    uVar4 = *(undefined8 *)(lVar7 + 0xf0);
    *(undefined8 *)(lVar6 + 0x70) = *(undefined8 *)(lVar7 + 0xe0);
    *(undefined8 *)(lVar6 + 0x78) = uVar3;
    *(undefined8 *)(lVar6 + 0x80) = uVar4;
    dVar10 = *(double *)(lVar7 + 200);
    uVar3 = *(undefined8 *)(lVar7 + 0xd0);
    *(undefined8 *)(lVar6 + 0x68) = uVar2;
    dVar12 = *(double *)(lVar6 + 0x68);
    *pdVar1 = dVar10;
    *(undefined8 *)(lVar6 + 0x60) = uVar3;
    lVar7 = param_4 + (long)param_3 * 0x30;
    dVar13 = *(double *)(lVar7 + 0x80);
    dVar14 = *(double *)(lVar7 + 0x70);
    dVar10 = *(double *)(lVar7 + 0x78);
    dVar11 = *pdVar1;
    dVar9 = *(double *)(lVar6 + 0x60);
  }
  else {
    lVar8 = param_4 + (long)param_3 * 0x30;
    dVar11 = (double)NEON_fminnm(*(double *)(lVar7 + 200),*pdVar1);
    dVar9 = (double)NEON_fminnm(*(undefined8 *)(lVar7 + 0xd0),*(undefined8 *)(lVar6 + 0x60));
    dVar14 = *(double *)(lVar7 + 0xe0);
    dVar12 = (double)NEON_fminnm(*(undefined8 *)(lVar7 + 0xd8),*(undefined8 *)(lVar6 + 0x68));
    dVar16 = *(double *)(lVar8 + 0x78);
    dVar13 = *(double *)(lVar7 + 0xf0);
    dVar15 = *(double *)(lVar8 + 0x80);
    dVar10 = *(double *)(lVar7 + 0xe8);
    if (*(double *)(lVar7 + 0xe8) <= dVar16) {
      dVar10 = dVar16;
    }
    *pdVar1 = dVar11;
    *(double *)(lVar6 + 0x60) = dVar9;
    if (dVar13 <= dVar15) {
      dVar13 = dVar15;
    }
    *(double *)(lVar6 + 0x68) = dVar12;
    *(double *)(lVar6 + 0x70) = dVar14;
    *(double *)(lVar6 + 0x78) = dVar10;
    *(double *)(lVar6 + 0x80) = dVar13;
  }
  dVar11 = (dVar14 - dVar11) * 0.5;
  dVar10 = (dVar10 - dVar9) * 0.5;
  dVar13 = (dVar13 - dVar12) * 0.5;
  dVar10 = dVar11 * dVar11 + dVar10 * dVar10 + dVar13 * dVar13;
  *(double *)(param_4 + (long)param_3 * 8 + 0xb8) = dVar10 * 4.188790204786391 * SQRT(dVar10);
  *piVar5 = *piVar5 + 1;
  return;
}


