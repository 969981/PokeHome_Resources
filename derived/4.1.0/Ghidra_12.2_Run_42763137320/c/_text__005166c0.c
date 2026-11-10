/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005166c0; name: FUN_.text__005166c0
 */


void FUN__text__005166c0(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  fVar1 = *param_2;
  fVar2 = *param_1;
  fVar7 = param_1[3];
  fVar13 = param_1[4];
  fVar16 = param_1[5];
  fVar14 = param_1[6];
  fVar9 = param_1[7];
  fVar10 = param_1[8];
  fVar12 = param_1[9];
  fVar11 = param_1[10];
  if (fVar2 < fVar1) {
    *param_2 = fVar2;
    fVar3 = param_2[1];
    fVar1 = param_1[1];
    if (fVar3 <= param_1[1]) goto LAB__text__005166f0;
LAB__text__00516840:
    fVar3 = fVar1;
    param_2[1] = fVar3;
    fVar4 = param_2[2];
    fVar1 = param_1[2];
    if (fVar4 <= param_1[2]) goto LAB__text__00516700;
LAB__text__00516858:
    fVar4 = fVar1;
    param_2[2] = fVar4;
    fVar5 = param_2[3];
    fVar1 = *param_1;
    if (*param_1 <= fVar5) goto LAB__text__00516710;
LAB__text__00516870:
    fVar5 = fVar1;
    param_2[3] = fVar5;
    fVar6 = param_2[4];
    fVar1 = param_1[1];
    if (param_1[1] <= fVar6) goto LAB__text__00516720;
LAB__text__00516888:
    fVar6 = fVar1;
    param_2[4] = fVar6;
    fVar8 = param_2[5];
    fVar1 = param_1[2];
    if (fVar1 <= fVar8) goto LAB__text__00516738;
LAB__text__005168a8:
    fVar8 = fVar1;
    param_2[5] = fVar8;
    fVar1 = param_1[2];
    fVar17 = *param_1 + fVar7 * fVar14;
    fVar15 = param_1[1] + fVar13 * fVar14;
    if (fVar2 <= fVar17) goto LAB__text__00516750;
LAB__text__005168cc:
    fVar2 = fVar17;
    *param_2 = fVar2;
    fVar1 = fVar1 + fVar16 * fVar14;
    fVar17 = fVar2;
    if (fVar3 <= fVar15) goto LAB__text__0051675c;
LAB__text__005168e0:
    fVar3 = fVar15;
    param_2[1] = fVar3;
    fVar15 = fVar3;
    if (fVar4 <= fVar1) goto LAB__text__00516764;
LAB__text__005168f0:
    fVar4 = fVar1;
    param_2[2] = fVar4;
    fVar1 = fVar4;
    if (fVar17 <= fVar5) goto LAB__text__0051676c;
LAB__text__00516900:
    fVar5 = fVar17;
    param_2[3] = fVar5;
    if (fVar15 <= fVar6) goto LAB__text__00516774;
LAB__text__00516910:
    fVar6 = fVar15;
    param_2[4] = fVar6;
    if (fVar8 < fVar1) goto LAB__text__00516788;
  }
  else {
    fVar3 = param_2[1];
    fVar2 = fVar1;
    fVar1 = param_1[1];
    if (param_1[1] < fVar3) goto LAB__text__00516840;
LAB__text__005166f0:
    fVar4 = param_2[2];
    fVar1 = param_1[2];
    if (param_1[2] < fVar4) goto LAB__text__00516858;
LAB__text__00516700:
    fVar5 = param_2[3];
    fVar1 = *param_1;
    if (fVar5 < *param_1) goto LAB__text__00516870;
LAB__text__00516710:
    fVar6 = param_2[4];
    fVar1 = param_1[1];
    if (fVar6 < param_1[1]) goto LAB__text__00516888;
LAB__text__00516720:
    fVar8 = param_2[5];
    fVar1 = param_1[2];
    if (fVar8 < fVar1) goto LAB__text__005168a8;
LAB__text__00516738:
    fVar17 = *param_1 + fVar7 * fVar14;
    fVar15 = param_1[1] + fVar13 * fVar14;
    if (fVar17 < fVar2) goto LAB__text__005168cc;
LAB__text__00516750:
    fVar1 = fVar1 + fVar16 * fVar14;
    if (fVar15 < fVar3) goto LAB__text__005168e0;
LAB__text__0051675c:
    if (fVar1 < fVar4) goto LAB__text__005168f0;
LAB__text__00516764:
    if (fVar5 < fVar17) goto LAB__text__00516900;
LAB__text__0051676c:
    if (fVar6 < fVar15) goto LAB__text__00516910;
LAB__text__00516774:
    if (fVar8 < fVar1) {
LAB__text__00516788:
      fVar8 = fVar1;
      param_2[5] = fVar8;
    }
  }
  fVar9 = fVar9 * fVar11;
  fVar10 = fVar10 * fVar11;
  fVar12 = fVar12 * fVar11;
  fVar11 = param_1[2];
  fVar1 = fVar9 + fVar7 * fVar14 + *param_1;
  fVar16 = fVar12 + fVar16 * fVar14;
  fVar7 = fVar10 + fVar13 * fVar14 + param_1[1];
  if (fVar1 < fVar2) {
    *param_2 = fVar1;
    fVar2 = fVar1;
    if (fVar3 <= fVar7) goto LAB__text__005167c0;
LAB__text__00516944:
    param_2[1] = fVar7;
    fVar3 = fVar7;
    if (fVar4 <= fVar16 + fVar11) goto LAB__text__005167c8;
LAB__text__00516954:
    fVar4 = fVar16 + fVar11;
    param_2[2] = fVar4;
    if (fVar1 <= fVar5) goto LAB__text__005167d0;
LAB__text__00516964:
    param_2[3] = fVar1;
    if (fVar7 <= fVar6) goto LAB__text__005167d8;
LAB__text__00516974:
    param_2[4] = fVar7;
    if (fVar16 + fVar11 <= fVar8) goto LAB__text__005167e0;
LAB__text__00516984:
    fVar8 = fVar16 + fVar11;
    param_2[5] = fVar8;
    fVar10 = param_1[1] + fVar10;
    fVar11 = param_1[2];
    fVar9 = *param_1 + fVar9;
    if (fVar2 <= fVar9) goto LAB__text__005167f8;
LAB__text__005169a4:
    *param_2 = fVar9;
    fVar11 = fVar11 + fVar12;
    if (fVar3 <= fVar10) goto LAB__text__00516804;
LAB__text__005169b4:
    param_2[1] = fVar10;
    if (fVar4 <= fVar11) goto LAB__text__0051680c;
LAB__text__005169c0:
    param_2[2] = fVar11;
    if (fVar9 <= fVar1) goto LAB__text__00516814;
LAB__text__005169cc:
    param_2[3] = fVar9;
    if (fVar7 < fVar10) {
LAB__text__005169d8:
      param_2[4] = fVar10;
      if (fVar11 <= fVar8) {
        return;
      }
      goto LAB__text__005169e4;
    }
  }
  else {
    if (fVar7 < fVar3) goto LAB__text__00516944;
LAB__text__005167c0:
    if (fVar16 + fVar11 < fVar4) goto LAB__text__00516954;
LAB__text__005167c8:
    if (fVar5 < fVar1) goto LAB__text__00516964;
LAB__text__005167d0:
    fVar1 = fVar5;
    if (fVar6 < fVar7) goto LAB__text__00516974;
LAB__text__005167d8:
    fVar7 = fVar6;
    if (fVar8 < fVar16 + fVar11) goto LAB__text__00516984;
LAB__text__005167e0:
    fVar10 = param_1[1] + fVar10;
    fVar11 = param_1[2];
    fVar9 = *param_1 + fVar9;
    if (fVar9 < fVar2) goto LAB__text__005169a4;
LAB__text__005167f8:
    fVar11 = fVar11 + fVar12;
    if (fVar10 < fVar3) goto LAB__text__005169b4;
LAB__text__00516804:
    if (fVar11 < fVar4) goto LAB__text__005169c0;
LAB__text__0051680c:
    if (fVar1 < fVar9) goto LAB__text__005169cc;
LAB__text__00516814:
    if (fVar7 < fVar10) goto LAB__text__005169d8;
  }
  if (fVar11 <= fVar8) {
    return;
  }
LAB__text__005169e4:
  param_2[5] = fVar11;
  return;
}


