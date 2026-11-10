/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00576360; name: FUN_.text__00576360
 */


undefined8 FUN__text__00576360(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long *plVar14;
  ulong uVar15;
  undefined8 uVar16;
  float fVar17;
  float fVar18;
  
  lVar11 = *(long *)(param_1 + 0x158);
  iVar7 = *(int *)(lVar11 + 0x74);
  if (((*(int *)(param_1 + 0x1d4) != iVar7) ||
      (*(float *)(param_1 + 0x1d0) != *(float *)(lVar11 + 0x70))) ||
     (*(float *)(param_1 + 0x1cc) != *(float *)(lVar11 + 0x6c))) {
    plVar14 = *(long **)(param_1 + 0x160);
    lVar11 = *(long *)(param_1 + 0x140);
    if (lVar11 != 0) {
      if (*(int *)(param_1 + 0x128) != 0) {
        uVar15 = 0;
        lVar11 = 0x90;
        do {
          FUN__text__0057d574(*(long *)(param_1 + 0x140) + lVar11 + -0x90,plVar14);
          FUN__text__0057c7bc(*(long *)(param_1 + 0x140) + lVar11,plVar14);
          uVar15 = uVar15 + 1;
          lVar11 = lVar11 + 0xa8;
        } while (uVar15 < *(uint *)(param_1 + 0x128));
        lVar11 = *(long *)(param_1 + 0x140);
      }
      (**(code **)(*plVar14 + 0x18))(plVar14,lVar11);
      plVar14 = *(long **)(param_1 + 0x160);
      *(undefined8 *)(param_1 + 0x140) = 0;
      iVar7 = *(int *)(*(long *)(param_1 + 0x158) + 0x74);
    }
    *(int *)(param_1 + 0x128) = iVar7;
    iVar7 = FUN__text__005754a0(param_1,plVar14);
    if (iVar7 != 1) {
      return 1;
    }
    if ((*(long *)(param_1 + 0x140) != 0) && (*(int *)(param_1 + 0x128) != 0)) {
      uVar15 = 0;
      lVar11 = 0x90;
      do {
        FUN__text__0057d5b8(*(long *)(param_1 + 0x140) + lVar11 + -0x90);
        FUN__text__0057c7fc(*(long *)(param_1 + 0x140) + lVar11);
        uVar15 = uVar15 + 1;
        lVar11 = lVar11 + 0xa8;
      } while (uVar15 < *(uint *)(param_1 + 0x128));
    }
  }
  lVar11 = *(long *)(param_1 + 0x158);
  if (*(char *)(param_1 + 0x1f9) != *(char *)(lVar11 + 0x99)) {
    lVar11 = param_1 + 0xe8;
    FUN__text__0057c7bc(lVar11,*(undefined8 *)(param_1 + 0x160));
    lVar1 = param_1 + 0x100;
    FUN__text__0057c7bc(lVar1,*(undefined8 *)(param_1 + 0x160));
    lVar2 = param_1 + 0xb8;
    FUN__text__0057c7bc(lVar2,*(undefined8 *)(param_1 + 0x160));
    if ((*(char *)(param_1 + 0x138) != '\0') && (*(long *)(param_1 + 0x150) != 0)) {
      plVar14 = *(long **)(param_1 + 0x160);
      FUN__text__0057cdf4(*(long *)(param_1 + 0x150),plVar14);
      if (*(long *)(param_1 + 0x150) != 0) {
        (**(code **)(*plVar14 + 0x18))(plVar14);
      }
      *(undefined8 *)(param_1 + 0x150) = 0;
    }
    lVar10 = *(long *)(param_1 + 0x158);
    if ((*(char *)(lVar10 + 0x98) != '\0') &&
       ((((*(int *)(lVar10 + 0x80) != 0 || (*(int *)(lVar10 + 0x88) != 0)) ||
         (*(int *)(lVar10 + 0x90) != 0)) && (*(long *)(param_1 + 0x148) != 0)))) {
      (**(code **)(**(long **)(param_1 + 0x160) + 0x18))();
      lVar10 = *(long *)(param_1 + 0x158);
      *(undefined8 *)(param_1 + 0x148) = 0;
    }
    cVar4 = *(char *)(lVar10 + 0x99);
    *(char *)(param_1 + 0x138) = cVar4 << 1;
    uVar5 = *(uint *)(param_2 + 8);
    if ((uVar5 & 0xfffff000) == 0x8000) {
      *(undefined1 *)(param_1 + 0x138) = 0;
    }
    else if (cVar4 != '\0') {
      fVar17 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 0x130));
      iVar7 = (int)(*(float *)(lVar10 + 0x68) * 0.001 * fVar17);
      if (iVar7 != 0) {
        uVar16 = *(undefined8 *)(param_1 + 0x160);
        uVar6 = uVar5 >> 8 & 0xf;
        if ((uVar6 == 2) || ((uVar6 == 1 && ((uVar5 & 0x210000) != 0)))) {
          iVar8 = FUN__text__0057c744(lVar11,uVar16,iVar7);
          if (iVar8 != 1) {
            return 1;
          }
          iVar7 = FUN__text__0057c744(lVar1,uVar16,iVar7);
          if (iVar7 != 1) {
            return 1;
          }
        }
      }
    }
    FUN__text__0057c7fc(lVar11);
    FUN__text__0057c7fc(lVar1);
    if (*(char *)(param_1 + 0x138) != '\0') {
      lVar11 = *(long *)(param_1 + 0x158);
      uVar16 = *(undefined8 *)(param_1 + 0x160);
      fVar17 = exp2f(*(float *)(lVar11 + 100) * 0.01);
      lVar11 = (ulong)*(uint *)(lVar11 + 0x5c) * 0x28;
      fVar17 = (float)NEON_fminnm(**(float **)(lVar11 + 0x892bb0) * fVar17,
                                  **(float **)(lVar11 + 0x892bc0) * fVar17);
      fVar18 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 0x130));
      if (((int)(fVar17 * fVar18 * 0.001) != 0) &&
         (iVar7 = FUN__text__0057c744(lVar2,uVar16), iVar7 != 1)) {
        return 1;
      }
    }
    FUN__text__0057c7fc(lVar2);
    if (*(char *)(param_1 + 0x138) != '\0') {
      plVar14 = *(long **)(param_1 + 0x160);
      uVar5 = *(uint *)(*(long *)(param_1 + 0x158) + 0x5c);
      puVar9 = (undefined4 *)(**(code **)(*plVar14 + 0x10))(plVar14,800,0x715356,0x1b0);
      if (puVar9 == (undefined4 *)0x0) goto LAB__text__00576c18;
      *puVar9 = 0;
      memset(puVar9 + 2,0,0x314);
      *(undefined4 **)(param_1 + 0x150) = puVar9;
      lVar11 = (ulong)uVar5 * 0x28;
      iVar7 = FUN__text__0057cb70(*(undefined4 *)(*(long *)(param_1 + 0x158) + 100),puVar9,plVar14,
                                  *(undefined8 *)(lVar11 + 0x892bb0),
                                  *(undefined8 *)(lVar11 + 0x892bc0),
                                  *(undefined4 *)(lVar11 + 0x892ba8),
                                  *(undefined4 *)(lVar11 + 0x892bb8),
                                  *(undefined4 *)(param_1 + 0x130));
      if (iVar7 != 1) {
        return 1;
      }
    }
    if (*(long *)(param_1 + 0x150) != 0) {
      FUN__text__0057ce34();
    }
    lVar11 = *(long *)(param_1 + 0x158);
    if ((*(char *)(lVar11 + 0x98) != '\0') &&
       (((*(int *)(lVar11 + 0x80) != 0 || (*(int *)(lVar11 + 0x88) != 0)) ||
        (*(int *)(lVar11 + 0x90) != 0)))) {
      iVar7 = FUN__text__00575330(param_1);
      if (iVar7 != 1) {
        return 1;
      }
      lVar11 = *(long *)(param_1 + 0x158);
      if ((*(char *)(lVar11 + 0x98) != '\0') && (*(char *)(param_1 + 0x134) != '\0')) {
        lVar11 = 0;
        uVar15 = 0;
        do {
          uVar15 = uVar15 + 1;
          puVar3 = (undefined8 *)(*(long *)(param_1 + 0x148) + lVar11);
          lVar11 = lVar11 + 0xa0;
          *puVar3 = 0;
          puVar3[1] = 0;
        } while (uVar15 < *(byte *)(param_1 + 0x134));
        lVar11 = *(long *)(param_1 + 0x158);
      }
    }
  }
  if (*(float *)(param_1 + 0x1c8) != *(float *)(lVar11 + 0x68)) {
    lVar11 = param_1 + 0xe8;
    FUN__text__0057c7bc(lVar11,*(undefined8 *)(param_1 + 0x160));
    lVar1 = param_1 + 0x100;
    FUN__text__0057c7bc(lVar1,*(undefined8 *)(param_1 + 0x160));
    if (*(char *)(param_1 + 0x138) != '\0') {
      fVar17 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 0x130));
      iVar7 = (int)(*(float *)(*(long *)(param_1 + 0x158) + 0x68) * 0.001 * fVar17);
      if (iVar7 != 0) {
        uVar5 = *(uint *)(param_2 + 8) >> 8 & 0xf;
        uVar16 = *(undefined8 *)(param_1 + 0x160);
        if ((uVar5 == 2) || ((uVar5 == 1 && ((*(uint *)(param_2 + 8) & 0x210000) != 0)))) {
          iVar8 = FUN__text__0057c744(lVar11,uVar16,iVar7);
          if (iVar8 != 1) {
            return 1;
          }
          iVar7 = FUN__text__0057c744(lVar1,uVar16,iVar7);
          if (iVar7 != 1) {
            return 1;
          }
        }
      }
    }
    FUN__text__0057c7fc(lVar11);
    FUN__text__0057c7fc(lVar1);
    lVar11 = *(long *)(param_1 + 0x158);
  }
  if (*(float *)(param_1 + 0x1c0) != *(float *)(lVar11 + 0x60)) {
    lVar11 = param_1 + 0xd0;
    FUN__text__0057c7bc(lVar11,*(undefined8 *)(param_1 + 0x160));
    fVar17 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 0x130));
    if (((int)(*(float *)(*(long *)(param_1 + 0x158) + 0x60) * 0.001 * fVar17) != 0) &&
       (iVar7 = FUN__text__0057c744(lVar11,*(undefined8 *)(param_1 + 0x160)), iVar7 != 1)) {
      return 1;
    }
    FUN__text__0057c7fc(lVar11);
    lVar11 = *(long *)(param_1 + 0x158);
    fVar17 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 0x130));
    *(int *)(param_1 + 0x120) =
         (int)((*(float *)(lVar11 + 8) + *(float *)(lVar11 + 0x60) * 0.001) * fVar17);
  }
  if ((*(int *)(param_1 + 0x1bc) != *(int *)(lVar11 + 0x5c)) ||
     (*(float *)(param_1 + 0x1c4) != *(float *)(lVar11 + 100))) {
    lVar11 = param_1 + 0xb8;
    FUN__text__0057c7bc(lVar11,*(undefined8 *)(param_1 + 0x160));
    if (*(char *)(param_1 + 0x138) != '\0') {
      lVar1 = *(long *)(param_1 + 0x158);
      uVar16 = *(undefined8 *)(param_1 + 0x160);
      fVar17 = exp2f(*(float *)(lVar1 + 100) * 0.01);
      lVar1 = (ulong)*(uint *)(lVar1 + 0x5c) * 0x28;
      fVar17 = (float)NEON_fminnm(**(float **)(lVar1 + 0x892bb0) * fVar17,
                                  **(float **)(lVar1 + 0x892bc0) * fVar17);
      fVar18 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 0x130));
      if (((int)(fVar17 * fVar18 * 0.001) != 0) &&
         (iVar7 = FUN__text__0057c744(lVar11,uVar16), iVar7 != 1)) {
        return 1;
      }
    }
    FUN__text__0057c7fc(lVar11);
    if (*(char *)(param_1 + 0x138) != '\0') {
      plVar14 = *(long **)(param_1 + 0x160);
      if (*(long *)(param_1 + 0x150) != 0) {
        FUN__text__0057cdf4(*(long *)(param_1 + 0x150),plVar14);
        if (*(long *)(param_1 + 0x150) != 0) {
          (**(code **)(*plVar14 + 0x18))(plVar14);
        }
        *(undefined8 *)(param_1 + 0x150) = 0;
        if (*(char *)(param_1 + 0x138) == '\0') goto LAB__text__0057679c;
        plVar14 = *(long **)(param_1 + 0x160);
      }
      uVar5 = *(uint *)(*(long *)(param_1 + 0x158) + 0x5c);
      puVar9 = (undefined4 *)(**(code **)(*plVar14 + 0x10))(plVar14,800,0x715356,0x1b0);
      if (puVar9 == (undefined4 *)0x0) {
LAB__text__00576c18:
        *(undefined8 *)(param_1 + 0x150) = 0;
        return 1;
      }
      *puVar9 = 0;
      memset(puVar9 + 2,0,0x314);
      *(undefined4 **)(param_1 + 0x150) = puVar9;
      lVar11 = (ulong)uVar5 * 0x28;
      iVar7 = FUN__text__0057cb70(*(undefined4 *)(*(long *)(param_1 + 0x158) + 100),puVar9,plVar14,
                                  *(undefined8 *)(lVar11 + 0x892bb0),
                                  *(undefined8 *)(lVar11 + 0x892bc0),
                                  *(undefined4 *)(lVar11 + 0x892ba8),
                                  *(undefined4 *)(lVar11 + 0x892bb8),
                                  *(undefined4 *)(param_1 + 0x130));
      if (iVar7 != 1) {
        return 1;
      }
    }
LAB__text__0057679c:
    if (*(long *)(param_1 + 0x150) != 0) {
      FUN__text__0057ce34();
    }
  }
  lVar11 = *(long *)(param_1 + 0x158);
  if (((*(char *)(param_1 + 0x1f8) == *(char *)(lVar11 + 0x98)) &&
      (iVar7 = *(int *)(param_1 + 0x1e0), iVar7 == *(int *)(lVar11 + 0x80))) &&
     (*(int *)(param_1 + 0x1e8) == *(int *)(lVar11 + 0x88))) {
    if ((*(char *)(param_1 + 0x1f8) != '\0') &&
       (*(int *)(param_1 + 0x1f0) != *(int *)(lVar11 + 0x90))) {
LAB__text__005768cc:
      if ((iVar7 != 0) || ((*(int *)(lVar11 + 0x88) != 0 || (*(int *)(lVar11 + 0x90) != 0)))) {
        if (*(long *)(param_1 + 0x148) != 0) {
          (**(code **)(**(long **)(param_1 + 0x160) + 0x18))();
          *(undefined8 *)(param_1 + 0x148) = 0;
        }
        iVar7 = FUN__text__00575330(param_1);
        if (iVar7 != 1) {
          return 1;
        }
        lVar11 = *(long *)(param_1 + 0x158);
        if ((*(char *)(lVar11 + 0x98) != '\0') && (*(char *)(param_1 + 0x134) != '\0')) {
          lVar11 = 0;
          uVar15 = 0;
          do {
            uVar15 = uVar15 + 1;
            puVar3 = (undefined8 *)(*(long *)(param_1 + 0x148) + lVar11);
            lVar11 = lVar11 + 0xa0;
            *puVar3 = 0;
            puVar3[1] = 0;
          } while (uVar15 < *(byte *)(param_1 + 0x134));
          lVar11 = *(long *)(param_1 + 0x158);
        }
      }
    }
  }
  else if (*(char *)(lVar11 + 0x98) != '\0') {
    iVar7 = *(int *)(lVar11 + 0x80);
    goto LAB__text__005768cc;
  }
  if (*(int *)(param_1 + 0x1e4) == *(int *)(lVar11 + 0x84)) {
    if (*(int *)(param_1 + 0x1ec) != *(int *)(lVar11 + 0x8c)) goto LAB__text__00576c54;
LAB__text__00576974:
    if (*(int *)(param_1 + 500) == *(int *)(lVar11 + 0x94)) goto LAB__text__00576990;
  }
  else {
    FUN__text__00575d58(param_1);
    lVar11 = *(long *)(param_1 + 0x158);
    if (*(int *)(param_1 + 0x1ec) == *(int *)(lVar11 + 0x8c)) goto LAB__text__00576974;
LAB__text__00576c54:
    FUN__text__00575e3c(param_1);
    lVar11 = *(long *)(param_1 + 0x158);
    if (*(int *)(param_1 + 500) == *(int *)(lVar11 + 0x94)) goto LAB__text__00576990;
  }
  FUN__text__00575f20(param_1);
  lVar11 = *(long *)(param_1 + 0x158);
LAB__text__00576990:
  uVar16 = *(undefined8 *)(lVar11 + 0x5c);
  uVar12 = *(undefined8 *)(lVar11 + 100);
  uVar13 = *(undefined8 *)(lVar11 + 0x74);
  *(undefined8 *)(param_1 + 0x1cc) = *(undefined8 *)(lVar11 + 0x6c);
  *(undefined8 *)(param_1 + 0x1d4) = uVar13;
  *(undefined8 *)(param_1 + 0x1bc) = uVar16;
  *(undefined8 *)(param_1 + 0x1c4) = uVar12;
  uVar16 = *(undefined8 *)(lVar11 + 0x7c);
  uVar12 = *(undefined8 *)(lVar11 + 0x84);
  uVar13 = *(undefined8 *)(lVar11 + 0x94);
  *(undefined8 *)(param_1 + 0x1ec) = *(undefined8 *)(lVar11 + 0x8c);
  *(undefined8 *)(param_1 + 500) = uVar13;
  *(undefined8 *)(param_1 + 0x1dc) = uVar16;
  *(undefined8 *)(param_1 + 0x1e4) = uVar12;
  *(undefined1 *)(lVar11 + 0x9a) = 0;
  return 0;
}


