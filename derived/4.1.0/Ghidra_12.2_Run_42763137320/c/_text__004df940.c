/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004df940; name: FUN_.text__004df940
 */


long * FUN__text__004df940(long *param_1,long param_2,long *param_3,long param_4)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  
  uVar2 = *(uint *)(param_2 + 8);
  bVar3 = true;
  bVar4 = false;
  if (*(char *)((long)param_3 + 0x4c) != '\0') {
    bVar3 = false;
    bVar4 = true;
    if (!NAN(*(float *)(param_3 + 9))) {
      bVar3 = *(float *)(param_3 + 9) < 1.0;
      bVar4 = false;
    }
  }
  uVar1 = uVar2 + ((int)(uVar2 << 0x10) >> 0x1f) & 0xff;
  if (((bVar3 == bVar4) && ((uVar2 & 0xf00) == 0x100)) &&
     (uVar6 = 0x100000000, (uVar2 & 0xff9c0000) == 0 && uVar1 != 0)) {
    if (*(uint *)(param_1 + 1) != 0) {
      plVar7 = (long *)*param_1;
      lVar8 = (ulong)*(uint *)(param_1 + 1) * 0xc0;
      do {
        if (*plVar7 == *param_3) goto LAB__text__004dfae4;
        plVar7 = plVar7 + 0x18;
        lVar8 = lVar8 + -0xc0;
      } while (lVar8 != 0);
    }
    if (*(uint *)(param_1 + 3) != 0) {
      plVar7 = (long *)param_1[2];
      lVar8 = (ulong)*(uint *)(param_1 + 3) * 0xc0;
      do {
        if (*plVar7 == *param_3) goto LAB__text__004dfae4;
        plVar7 = plVar7 + 0x18;
        lVar8 = lVar8 + -0xc0;
      } while (lVar8 != 0);
    }
  }
  else {
    if (*(uint *)(param_1 + 3) != 0) {
      plVar7 = (long *)param_1[2];
      lVar8 = (ulong)*(uint *)(param_1 + 3) * 0xc0;
      do {
        if (*plVar7 == *param_3) goto LAB__text__004dfae0;
        plVar7 = plVar7 + 0x18;
        lVar8 = lVar8 + -0xc0;
      } while (lVar8 != 0);
    }
    if (*(uint *)(param_1 + 1) != 0) {
      plVar7 = (long *)*param_1;
      lVar8 = (ulong)*(uint *)(param_1 + 1) * 0xc0;
      do {
        if (*plVar7 == *param_3) goto LAB__text__004dfae0;
        plVar7 = plVar7 + 0x18;
        lVar8 = lVar8 + -0xc0;
      } while (lVar8 != 0);
    }
    uVar6 = 0;
  }
  if (*(uint *)(param_3 + 0xd) != 0) {
    lVar8 = (ulong)*(uint *)(param_3 + 0xd) * 0x18;
    plVar7 = (long *)(param_3[0xc] + 8);
    do {
      if (((int)plVar7[-1] == 0x3840009) && (*plVar7 != 0)) {
        uVar6 = uVar6 & 0xffffffff00000000 | (ulong)*(uint *)(*plVar7 + 0xc);
      }
      plVar7 = plVar7 + 3;
      lVar8 = lVar8 + -0x18;
    } while (lVar8 != 0);
  }
  if ((*(char *)(param_4 + 0xc) == '\0') && ((uVar6 & 0xffffffff) == 2)) {
    uVar6 = uVar6 & 0xffffffff00000000 | 1;
  }
  plVar7 = (long *)0x0;
  iVar5 = (int)uVar6;
joined_r0x004dfaec:
  if (iVar5 != 0) {
    return plVar7;
  }
  if (((uVar6 & 0xff00000000) == 0) || (*(uint *)(param_4 + 8) < (int)param_1[4] + uVar1)) {
    return plVar7;
  }
  return plVar7;
LAB__text__004dfae0:
  uVar6 = 0;
LAB__text__004dfae4:
  iVar5 = (int)plVar7[0x16];
  goto joined_r0x004dfaec;
}


