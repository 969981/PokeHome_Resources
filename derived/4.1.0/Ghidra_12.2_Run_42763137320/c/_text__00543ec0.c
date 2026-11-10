/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00543ec0; name: FUN_.text__00543ec0
 */


void FUN__text__00543ec0(double *param_1,float param_2,float param_3,float param_4,float param_5,
                        float param_6,float param_7)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  float fStack0000000000000000;
  float fStack0000000000000004;
  float in_stack_00000008;
  double in_stack_00000010;
  double in_stack_00000018;
  double in_stack_00000020;
  float fStack0000000000000028;
  float fStack000000000000002c;
  float in_stack_00000030;
  
  dVar18 = (double)(fStack0000000000000028 * param_2);
  dVar17 = (double)(fStack0000000000000028 * param_3);
  dVar16 = (double)(fStack0000000000000028 * param_4);
  *param_1 = 1.79769313486232e+308;
  param_1[1] = 1.79769313486232e+308;
  dVar15 = in_stack_00000010 - dVar18;
  dVar12 = (double)(fStack000000000000002c * param_5);
  dVar14 = in_stack_00000018 - dVar17;
  dVar11 = (double)(fStack000000000000002c * param_6);
  dVar9 = (double)(fStack000000000000002c * param_7);
  dVar13 = in_stack_00000020 - dVar16;
  param_1[2] = 1.79769313486232e+308;
  param_1[3] = -1.79769313486232e+308;
  param_1[4] = -1.79769313486232e+308;
  param_1[5] = -1.79769313486232e+308;
  dVar10 = dVar15 - dVar12;
  dVar3 = (double)(in_stack_00000030 * fStack0000000000000000);
  dVar21 = dVar14 - dVar11;
  dVar2 = (double)(in_stack_00000030 * fStack0000000000000004);
  dVar1 = (double)(in_stack_00000030 * in_stack_00000008);
  dVar19 = dVar13 - dVar9;
  dVar7 = dVar10 - dVar3;
  dVar23 = dVar21 - dVar2;
  if (dVar7 < 1.79769313486232e+308) {
    *param_1 = dVar7;
    dVar4 = dVar7;
    if (1.79769313486232e+308 <= dVar23) goto LAB__text__00543f74;
LAB__text__0054419c:
    param_1[1] = dVar23;
    dVar5 = dVar23;
    if (1.79769313486232e+308 <= dVar19 - dVar1) goto LAB__text__00543f80;
LAB__text__005441b0:
    dVar6 = dVar19 - dVar1;
    param_1[2] = dVar6;
    if (dVar7 <= -1.79769313486232e+308) goto LAB__text__00543f90;
LAB__text__005441c8:
    param_1[3] = dVar7;
    if (dVar23 <= -1.79769313486232e+308) goto LAB__text__00543f9c;
LAB__text__005441dc:
    param_1[4] = dVar23;
    if (dVar19 - dVar1 <= -1.79769313486232e+308) goto LAB__text__00543fac;
LAB__text__005441f4:
    dVar8 = dVar19 - dVar1;
    param_1[5] = dVar8;
    if (dVar4 <= dVar10 + dVar3) goto LAB__text__00543fb8;
LAB__text__00544208:
    dVar4 = dVar10 + dVar3;
    *param_1 = dVar4;
    if (dVar5 <= dVar21 + dVar2) goto LAB__text__00543fc4;
LAB__text__0054421c:
    dVar5 = dVar21 + dVar2;
    param_1[1] = dVar5;
    if (dVar6 <= dVar19 + dVar1) goto LAB__text__00543fcc;
LAB__text__0054422c:
    dVar6 = dVar19 + dVar1;
    param_1[2] = dVar6;
    if (dVar10 + dVar3 <= dVar7) goto LAB__text__00543fd8;
LAB__text__00544240:
    dVar7 = dVar10 + dVar3;
    param_1[3] = dVar7;
    dVar10 = (in_stack_00000010 + dVar18) - dVar12;
    if (dVar21 + dVar2 <= dVar23) goto LAB__text__00543fe8;
LAB__text__00544258:
    dVar23 = dVar21 + dVar2;
    param_1[4] = dVar23;
    dVar21 = (in_stack_00000018 + dVar17) - dVar11;
    dVar22 = dVar10 + dVar3;
    if (dVar19 + dVar1 <= dVar8) goto LAB__text__00543ffc;
LAB__text__00544274:
    dVar8 = dVar19 + dVar1;
    param_1[5] = dVar8;
    dVar19 = (in_stack_00000020 + dVar16) - dVar9;
    dVar20 = dVar21 + dVar2;
    if (dVar4 <= dVar22) goto LAB__text__0054400c;
LAB__text__0054428c:
    dVar4 = dVar22;
    *param_1 = dVar4;
    dVar24 = dVar19 + dVar1;
    dVar22 = dVar4;
    if (dVar5 <= dVar20) goto LAB__text__00544018;
LAB__text__005442a0:
    dVar5 = dVar20;
    param_1[1] = dVar5;
    dVar20 = dVar5;
    if (dVar6 <= dVar24) goto LAB__text__00544020;
LAB__text__005442b0:
    dVar6 = dVar24;
    param_1[2] = dVar6;
    dVar24 = dVar6;
    if (dVar22 <= dVar7) goto LAB__text__00544028;
LAB__text__005442c0:
    dVar7 = dVar22;
    param_1[3] = dVar7;
    if (dVar20 <= dVar23) goto LAB__text__00544030;
LAB__text__005442d0:
    dVar23 = dVar20;
    param_1[4] = dVar23;
    dVar10 = dVar10 - dVar3;
    if (dVar24 <= dVar8) goto LAB__text__0054403c;
LAB__text__005442e4:
    dVar8 = dVar24;
    param_1[5] = dVar8;
    dVar21 = dVar21 - dVar2;
    if (dVar4 <= dVar10) goto LAB__text__00544048;
LAB__text__005442f8:
    dVar4 = dVar10;
    *param_1 = dVar4;
    dVar19 = dVar19 - dVar1;
    dVar10 = dVar4;
    if (dVar5 <= dVar21) goto LAB__text__00544054;
LAB__text__0054430c:
    dVar5 = dVar21;
    param_1[1] = dVar5;
    dVar21 = dVar5;
    if (dVar6 <= dVar19) goto LAB__text__0054405c;
LAB__text__0054431c:
    dVar6 = dVar19;
    param_1[2] = dVar6;
    dVar19 = dVar6;
    if (dVar10 <= dVar7) goto LAB__text__00544064;
LAB__text__0054432c:
    dVar7 = dVar10;
    param_1[3] = dVar7;
    if (dVar21 <= dVar23) goto LAB__text__00544070;
LAB__text__00544340:
    dVar23 = dVar21;
    param_1[4] = dVar23;
    dVar10 = (dVar15 + dVar12) - dVar3;
    if (dVar19 <= dVar8) goto LAB__text__00544080;
LAB__text__00544358:
    dVar8 = dVar19;
    param_1[5] = dVar8;
    dVar19 = (dVar14 + dVar11) - dVar2;
    if (dVar4 <= dVar10) goto LAB__text__00544090;
LAB__text__00544370:
    dVar4 = dVar10;
    *param_1 = dVar4;
    dVar21 = (dVar13 + dVar9) - dVar1;
    dVar10 = dVar4;
    if (dVar5 <= dVar19) goto LAB__text__0054409c;
LAB__text__00544384:
    dVar5 = dVar19;
    param_1[1] = dVar5;
    dVar19 = dVar5;
    if (dVar6 <= dVar21) goto LAB__text__005440a4;
LAB__text__00544394:
    dVar6 = dVar21;
    param_1[2] = dVar6;
    dVar21 = dVar6;
    if (dVar10 <= dVar7) goto LAB__text__005440ac;
LAB__text__005443a4:
    dVar7 = dVar10;
    param_1[3] = dVar7;
    if (dVar19 <= dVar23) goto LAB__text__005440b4;
LAB__text__005443b4:
    dVar23 = dVar19;
    param_1[4] = dVar23;
    dVar10 = dVar15 + dVar12 + dVar3;
    if (dVar21 <= dVar8) goto LAB__text__005440c0;
LAB__text__005443c8:
    dVar8 = dVar21;
    param_1[5] = dVar8;
    dVar14 = dVar14 + dVar11 + dVar2;
    if (dVar4 <= dVar10) goto LAB__text__005440cc;
LAB__text__005443dc:
    dVar4 = dVar10;
    *param_1 = dVar4;
    dVar13 = dVar13 + dVar9 + dVar1;
    dVar10 = dVar4;
    if (dVar5 <= dVar14) goto LAB__text__005440d8;
LAB__text__005443f0:
    dVar5 = dVar14;
    param_1[1] = dVar5;
    dVar14 = dVar5;
    if (dVar6 <= dVar13) goto LAB__text__005440e0;
LAB__text__00544400:
    dVar6 = dVar13;
    param_1[2] = dVar6;
    dVar13 = dVar6;
    if (dVar10 <= dVar7) goto LAB__text__005440e8;
LAB__text__00544410:
    dVar7 = dVar10;
    param_1[3] = dVar7;
    dVar12 = in_stack_00000010 + dVar18 + dVar12;
    if (dVar14 <= dVar23) goto LAB__text__005440f4;
LAB__text__00544424:
    dVar23 = dVar14;
    param_1[4] = dVar23;
    dVar11 = in_stack_00000018 + dVar17 + dVar11;
    dVar10 = dVar12 + dVar3;
    if (dVar13 <= dVar8) goto LAB__text__00544104;
LAB__text__0054443c:
    dVar8 = dVar13;
    param_1[5] = dVar8;
    dVar9 = in_stack_00000020 + dVar16 + dVar9;
    dVar13 = dVar11 + dVar2;
    if (dVar4 <= dVar10) goto LAB__text__00544114;
LAB__text__00544454:
    dVar4 = dVar10;
    *param_1 = dVar4;
    dVar14 = dVar9 + dVar1;
    dVar10 = dVar4;
    if (dVar5 <= dVar13) goto LAB__text__00544120;
LAB__text__00544468:
    dVar5 = dVar13;
    param_1[1] = dVar5;
    dVar13 = dVar5;
    if (dVar6 <= dVar14) goto LAB__text__00544128;
LAB__text__00544478:
    dVar6 = dVar14;
    param_1[2] = dVar6;
    dVar14 = dVar6;
    if (dVar10 <= dVar7) goto LAB__text__00544130;
LAB__text__00544488:
    dVar7 = dVar10;
    param_1[3] = dVar7;
    if (dVar13 <= dVar23) goto LAB__text__00544138;
LAB__text__00544498:
    dVar23 = dVar13;
    param_1[4] = dVar23;
    dVar12 = dVar12 - dVar3;
    if (dVar14 <= dVar8) goto LAB__text__00544144;
LAB__text__005444ac:
    dVar8 = dVar14;
    param_1[5] = dVar8;
    dVar11 = dVar11 - dVar2;
    if (dVar4 <= dVar12) goto LAB__text__00544150;
LAB__text__005444c0:
    *param_1 = dVar12;
    dVar9 = dVar9 - dVar1;
    if (dVar5 <= dVar11) goto LAB__text__0054415c;
LAB__text__005444d0:
    param_1[1] = dVar11;
    if (dVar6 <= dVar9) goto LAB__text__00544164;
LAB__text__005444dc:
    param_1[2] = dVar9;
    if (dVar12 <= dVar7) goto LAB__text__0054416c;
LAB__text__005444e8:
    param_1[3] = dVar12;
    if (dVar23 < dVar11) {
LAB__text__005444f4:
      param_1[4] = dVar11;
      if (dVar9 <= dVar8) {
        return;
      }
      goto LAB__text__00544500;
    }
  }
  else {
    dVar4 = 1.79769313486232e+308;
    if (dVar23 < 1.79769313486232e+308) goto LAB__text__0054419c;
LAB__text__00543f74:
    dVar5 = 1.79769313486232e+308;
    if (dVar19 - dVar1 < 1.79769313486232e+308) goto LAB__text__005441b0;
LAB__text__00543f80:
    dVar6 = 1.79769313486232e+308;
    if (-1.79769313486232e+308 < dVar7) goto LAB__text__005441c8;
LAB__text__00543f90:
    dVar7 = -1.79769313486232e+308;
    if (-1.79769313486232e+308 < dVar23) goto LAB__text__005441dc;
LAB__text__00543f9c:
    dVar23 = -1.79769313486232e+308;
    if (-1.79769313486232e+308 < dVar19 - dVar1) goto LAB__text__005441f4;
LAB__text__00543fac:
    dVar8 = -1.79769313486232e+308;
    if (dVar10 + dVar3 < dVar4) goto LAB__text__00544208;
LAB__text__00543fb8:
    if (dVar21 + dVar2 < dVar5) goto LAB__text__0054421c;
LAB__text__00543fc4:
    if (dVar19 + dVar1 < dVar6) goto LAB__text__0054422c;
LAB__text__00543fcc:
    if (dVar7 < dVar10 + dVar3) goto LAB__text__00544240;
LAB__text__00543fd8:
    dVar10 = (in_stack_00000010 + dVar18) - dVar12;
    if (dVar23 < dVar21 + dVar2) goto LAB__text__00544258;
LAB__text__00543fe8:
    dVar21 = (in_stack_00000018 + dVar17) - dVar11;
    dVar22 = dVar10 + dVar3;
    if (dVar8 < dVar19 + dVar1) goto LAB__text__00544274;
LAB__text__00543ffc:
    dVar19 = (in_stack_00000020 + dVar16) - dVar9;
    dVar20 = dVar21 + dVar2;
    if (dVar22 < dVar4) goto LAB__text__0054428c;
LAB__text__0054400c:
    dVar24 = dVar19 + dVar1;
    if (dVar20 < dVar5) goto LAB__text__005442a0;
LAB__text__00544018:
    if (dVar24 < dVar6) goto LAB__text__005442b0;
LAB__text__00544020:
    if (dVar7 < dVar22) goto LAB__text__005442c0;
LAB__text__00544028:
    if (dVar23 < dVar20) goto LAB__text__005442d0;
LAB__text__00544030:
    dVar10 = dVar10 - dVar3;
    if (dVar8 < dVar24) goto LAB__text__005442e4;
LAB__text__0054403c:
    dVar21 = dVar21 - dVar2;
    if (dVar10 < dVar4) goto LAB__text__005442f8;
LAB__text__00544048:
    dVar19 = dVar19 - dVar1;
    if (dVar21 < dVar5) goto LAB__text__0054430c;
LAB__text__00544054:
    if (dVar19 < dVar6) goto LAB__text__0054431c;
LAB__text__0054405c:
    if (dVar7 < dVar10) goto LAB__text__0054432c;
LAB__text__00544064:
    if (dVar23 < dVar21) goto LAB__text__00544340;
LAB__text__00544070:
    dVar10 = (dVar15 + dVar12) - dVar3;
    if (dVar8 < dVar19) goto LAB__text__00544358;
LAB__text__00544080:
    dVar19 = (dVar14 + dVar11) - dVar2;
    if (dVar10 < dVar4) goto LAB__text__00544370;
LAB__text__00544090:
    dVar21 = (dVar13 + dVar9) - dVar1;
    if (dVar19 < dVar5) goto LAB__text__00544384;
LAB__text__0054409c:
    if (dVar21 < dVar6) goto LAB__text__00544394;
LAB__text__005440a4:
    if (dVar7 < dVar10) goto LAB__text__005443a4;
LAB__text__005440ac:
    if (dVar23 < dVar19) goto LAB__text__005443b4;
LAB__text__005440b4:
    dVar10 = dVar15 + dVar12 + dVar3;
    if (dVar8 < dVar21) goto LAB__text__005443c8;
LAB__text__005440c0:
    dVar14 = dVar14 + dVar11 + dVar2;
    if (dVar10 < dVar4) goto LAB__text__005443dc;
LAB__text__005440cc:
    dVar13 = dVar13 + dVar9 + dVar1;
    if (dVar14 < dVar5) goto LAB__text__005443f0;
LAB__text__005440d8:
    if (dVar13 < dVar6) goto LAB__text__00544400;
LAB__text__005440e0:
    if (dVar7 < dVar10) goto LAB__text__00544410;
LAB__text__005440e8:
    dVar12 = in_stack_00000010 + dVar18 + dVar12;
    if (dVar23 < dVar14) goto LAB__text__00544424;
LAB__text__005440f4:
    dVar11 = in_stack_00000018 + dVar17 + dVar11;
    dVar10 = dVar12 + dVar3;
    if (dVar8 < dVar13) goto LAB__text__0054443c;
LAB__text__00544104:
    dVar9 = in_stack_00000020 + dVar16 + dVar9;
    dVar13 = dVar11 + dVar2;
    if (dVar10 < dVar4) goto LAB__text__00544454;
LAB__text__00544114:
    dVar14 = dVar9 + dVar1;
    if (dVar13 < dVar5) goto LAB__text__00544468;
LAB__text__00544120:
    if (dVar14 < dVar6) goto LAB__text__00544478;
LAB__text__00544128:
    if (dVar7 < dVar10) goto LAB__text__00544488;
LAB__text__00544130:
    if (dVar23 < dVar13) goto LAB__text__00544498;
LAB__text__00544138:
    dVar12 = dVar12 - dVar3;
    if (dVar8 < dVar14) goto LAB__text__005444ac;
LAB__text__00544144:
    dVar11 = dVar11 - dVar2;
    if (dVar12 < dVar4) goto LAB__text__005444c0;
LAB__text__00544150:
    dVar9 = dVar9 - dVar1;
    if (dVar11 < dVar5) goto LAB__text__005444d0;
LAB__text__0054415c:
    if (dVar9 < dVar6) goto LAB__text__005444dc;
LAB__text__00544164:
    if (dVar7 < dVar12) goto LAB__text__005444e8;
LAB__text__0054416c:
    if (dVar23 < dVar11) goto LAB__text__005444f4;
  }
  if (dVar9 <= dVar8) {
    return;
  }
LAB__text__00544500:
  param_1[5] = dVar9;
  return;
}


