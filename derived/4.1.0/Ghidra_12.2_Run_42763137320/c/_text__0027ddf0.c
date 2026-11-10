/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0027ddf0; name: FUN_.text__0027ddf0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN__text__0027ddf0(long param_1)

{
  byte bVar1;
  short sVar2;
  undefined1 *puVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  undefined2 uVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  long *plVar17;
  long *plVar18;
  ulong uVar19;
  long lVar20;
  long *plVar21;
  long lVar22;
  short *psVar23;
  long lVar24;
  code *pcVar25;
  undefined8 *puVar26;
  undefined8 *puVar27;
  ulong uVar28;
  undefined8 uVar29;
  ulong uVar30;
  byte *pbVar31;
  long alStack_150 [12];
  undefined1 *local_f0;
  code *local_e8;
  code *local_e0;
  undefined1 *local_d8;
  long alStack_d0 [13];
  long local_68;
  
  if (*(long *)(param_1 + 0xb8) == 0) {
    bVar7 = 1;
    lVar22 = *(long *)(param_1 + 0xad8);
    bVar1 = 1;
    if (lVar22 != 0) goto LAB__text__0027de28;
    bVar4 = false;
  }
  else {
    bVar7 = FUN__text__001155b0();
    lVar22 = *(long *)(param_1 + 0xad8);
    bVar4 = false;
    bVar1 = bVar7;
    if (lVar22 != 0) {
LAB__text__0027de28:
      bVar7 = bVar1;
      bVar4 = *(char *)(lVar22 + 0x170) != '\0';
    }
  }
  bVar5 = false;
  if (*(long *)(param_1 + 0xbe8) != 0) {
    bVar5 = *(char *)(*(long *)(param_1 + 0xbe8) + 0x170) != '\0';
  }
  bVar6 = false;
  if (*(long *)(param_1 + 0xcf8) != 0) {
    bVar6 = *(char *)(*(long *)(param_1 + 0xcf8) + 0x170) != '\0';
  }
  bVar8 = FUN__text__003d012c(*(undefined8 *)(param_1 + 0xe00));
  bVar9 = FUN__text__003d567c(*(undefined8 *)(param_1 + 0xe08));
  bVar10 = FUN__text__003d567c(*(undefined8 *)(param_1 + 0xe10));
  bVar11 = FUN__text__003d567c(*(undefined8 *)(param_1 + 0xe18));
  bVar12 = FUN__text__003d567c(*(undefined8 *)(param_1 + 0xe20));
  iVar14 = FUN__text__003d0e08(*(undefined8 *)(param_1 + 0xe28));
  iVar15 = FUN__text__003d0e08(*(undefined8 *)(param_1 + 0xe30));
  bVar1 = 0;
  if (iVar15 == 1) {
    bVar1 = bVar7 & bVar4 & bVar5 & bVar6 & bVar8 & bVar9 & bVar10 & bVar11 & bVar12 & iVar14 == 1;
  }
  if (bVar1 != 1) {
LAB__text__0027df5c:
    if (*(char *)(*(long *)(param_1 + 0x5c8) + 0xc0) == '\0') {
      return 0;
    }
    return bVar1;
  }
  (**(code **)(**(long **)(param_1 + 0x348) + 0x10))(&local_f0);
  puVar3 = local_f0;
  if (local_f0 == (undefined1 *)0x0) goto LAB__text__0027effc;
  puVar27 = *(undefined8 **)(local_f0 + 0x60);
  if (puVar27 != (undefined8 *)0x0) {
    plVar17 = (long *)(**(code **)*puVar27)(puVar27);
    plVar18 = (long *)FUN__text__00280688();
    if (plVar18 != plVar17) {
      do {
        plVar17 = (long *)*plVar17;
      } while (plVar17 != plVar18 && plVar17 != (long *)0x0);
      if (plVar17 == (long *)0x0) {
        plVar17 = (long *)(puVar3 + 0x48);
        (**(code **)(*plVar17 + 0x18))(plVar17);
        goto LAB__text__0027effc;
      }
    }
    puVar27 = puVar27 + -10;
  }
  plVar17 = (long *)(puVar3 + 0x48);
  (**(code **)(*plVar17 + 0x18))(plVar17);
  if (puVar27 == (undefined8 *)0x0) goto LAB__text__0027effc;
  if (puVar27[0x1252c] != 0) goto LAB__text__0027df5c;
  (**(code **)(**(long **)(param_1 + 0x348) + 0x10))(&local_f0);
  puVar3 = local_f0;
  if (local_f0 == (undefined1 *)0x0) goto LAB__text__0027effc;
  puVar27 = *(undefined8 **)(local_f0 + 0x60);
  if (puVar27 != (undefined8 *)0x0) {
    plVar17 = (long *)(**(code **)*puVar27)(puVar27);
    plVar18 = (long *)FUN__text__00280688();
    if (plVar18 != plVar17) {
      do {
        plVar17 = (long *)*plVar17;
      } while (plVar17 != plVar18 && plVar17 != (long *)0x0);
      if (plVar17 == (long *)0x0) {
        plVar17 = (long *)(puVar3 + 0x48);
        (**(code **)(*plVar17 + 0x18))(plVar17);
        goto LAB__text__0027effc;
      }
    }
    puVar27 = puVar27 + -10;
  }
  plVar17 = (long *)(puVar3 + 0x48);
  (**(code **)(*plVar17 + 0x18))(plVar17);
  if (puVar27 == (undefined8 *)0x0) goto LAB__text__0027effc;
  psVar23 = (short *)(puVar27 + 0x2b);
  lVar22 = 4;
  *psVar23 = 1;
  do {
    sVar2 = (short)lVar22;
    psVar23[0x24] = sVar2;
    psVar23[0xc] = sVar2 + -2;
    lVar22 = lVar22 + 4;
    psVar23[0x18] = sVar2 + -1;
    psVar23 = psVar23 + 0x30;
    *psVar23 = (short)lVar22 + -3;
  } while (lVar22 != 0x404);
  lVar22 = 0x7b4;
  *(undefined2 *)(puVar27 + 0xc2e) = 0;
  *(undefined2 *)(puVar27 + 0xc31) = 0;
  *(undefined2 *)(puVar27 + 0xc34) = 0;
  puVar27 = puVar27 + 0xc37;
  do {
    lVar22 = lVar22 + -4;
    *(undefined2 *)puVar27 = 0;
    *(undefined2 *)(puVar27 + 3) = 0;
    *(undefined2 *)(puVar27 + 6) = 0;
    *(undefined2 *)(puVar27 + 9) = 0;
    puVar27 = puVar27 + 0xc;
  } while (lVar22 != 0);
  (**(code **)(**(long **)(param_1 + 0x348) + 0x10))(&local_f0);
  puVar3 = local_f0;
  if (local_f0 == (undefined1 *)0x0) goto LAB__text__0027effc;
  puVar27 = *(undefined8 **)(local_f0 + 0x60);
  if (puVar27 == (undefined8 *)0x0) {
LAB__text__0027e100:
    plVar17 = (long *)(puVar3 + 0x48);
    (**(code **)(*plVar17 + 0x18))(plVar17);
    goto LAB__text__0027effc;
  }
  plVar17 = (long *)(**(code **)*puVar27)(puVar27);
  plVar18 = (long *)FUN__text__00280688();
  if (plVar18 != plVar17) {
    do {
      plVar17 = (long *)*plVar17;
    } while (plVar17 != plVar18 && plVar17 != (long *)0x0);
    if (plVar17 == (long *)0x0) goto LAB__text__0027e100;
  }
  plVar17 = (long *)(puVar3 + 0x48);
  (**(code **)(*plVar17 + 0x18))(plVar17);
  if (puVar27 + -10 == (undefined8 *)0x0) goto LAB__text__0027effc;
  lVar22 = *(long *)(param_1 + 0xe00);
  if (lVar22 != 0) {
    (**(code **)(*(long *)(lVar22 + 0x3b8) + 0x10))(lVar22 + 0x3b8);
  }
  uVar16 = FUN__text__003d02d0(lVar22);
  if (uVar16 == 0) {
    uVar30 = 0;
LAB__text__0027e19c:
    puVar26 = puVar27 + -10 + uVar30 * 3 + 0x2353;
    do {
      uVar30 = uVar30 + 1;
      *(undefined2 *)puVar26 = 0;
      puVar26 = puVar26 + 3;
    } while ((int)uVar30 != 3000);
  }
  else {
    uVar28 = 0;
    uVar30 = (ulong)uVar16;
    puVar26 = puVar27 + 0x2349;
    do {
      uVar13 = FUN__text__003d02b0(lVar22,uVar28 & 0xffffffff);
      uVar28 = uVar28 + 1;
      *(undefined2 *)puVar26 = uVar13;
      puVar26 = puVar26 + 3;
    } while (uVar30 != uVar28);
    if (uVar16 < 3000) goto LAB__text__0027e19c;
  }
  plVar17 = (long *)(lVar22 + 0x3b8);
  (**(code **)(*(long *)(lVar22 + 0x3b8) + 0x10))(plVar17);
  lVar24 = puVar27[0xf63c];
  puVar27[0xf63c] = lVar22;
  if (lVar24 != 0) {
    (**(code **)(*(long *)(lVar24 + 0x3b8) + 0x18))(lVar24 + 0x3b8);
  }
  (**(code **)(*plVar17 + 0x18))(plVar17);
  (**(code **)(**(long **)(param_1 + 0x348) + 0x10))(&local_f0);
  puVar3 = local_f0;
  if (local_f0 == (undefined1 *)0x0) goto LAB__text__0027effc;
  puVar27 = *(undefined8 **)(local_f0 + 0x60);
  if (puVar27 == (undefined8 *)0x0) {
LAB__text__0027e274:
    plVar17 = (long *)(puVar3 + 0x48);
    (**(code **)(*plVar17 + 0x18))(plVar17);
    goto LAB__text__0027effc;
  }
  plVar17 = (long *)(**(code **)*puVar27)(puVar27);
  plVar18 = (long *)FUN__text__00280688();
  if (plVar18 != plVar17) {
    do {
      plVar17 = (long *)*plVar17;
    } while (plVar17 != plVar18 && plVar17 != (long *)0x0);
    if (plVar17 == (long *)0x0) goto LAB__text__0027e274;
  }
  plVar17 = (long *)(puVar3 + 0x48);
  (**(code **)(*plVar17 + 0x18))(plVar17);
  if (puVar27 + -10 == (undefined8 *)0x0) goto LAB__text__0027effc;
  lVar22 = *(long *)(param_1 + 0xe08);
  if (lVar22 != 0) {
    (**(code **)(*(long *)(lVar22 + 0x48) + 0x10))();
  }
  uVar16 = FUN__text__003d57a4(lVar22);
  uVar30 = (ulong)uVar16;
  if (uVar16 == 0) {
LAB__text__0027e30c:
    puVar27 = puVar27 + -10 + uVar30 * 3 + 0x467b;
    do {
      uVar30 = uVar30 + 1;
      *(undefined2 *)puVar27 = 0;
      puVar27 = puVar27 + 3;
    } while ((int)uVar30 != 3000);
  }
  else {
    uVar28 = 0;
    pbVar31 = (byte *)(puVar27 + 0x4673);
    do {
      uVar19 = FUN__text__003d5754(lVar22,uVar28);
      *(short *)(pbVar31 + -0x10) = (short)uVar19;
      uVar28 = uVar28 + 1;
      *pbVar31 = (byte)(uVar19 >> 0x30) & 1;
      *(long *)(pbVar31 + -8) = 1L << (uVar19 >> 0x20 & 0x3f);
      pbVar31 = pbVar31 + 0x18;
    } while (uVar30 != uVar28);
    if (uVar16 < 3000) goto LAB__text__0027e30c;
  }
  (**(code **)(*(long *)(lVar22 + 0x48) + 0x18))((long *)(lVar22 + 0x48));
  (**(code **)(**(long **)(param_1 + 0x348) + 0x10))(&local_f0);
  puVar3 = local_f0;
  if (local_f0 == (undefined1 *)0x0) goto LAB__text__0027effc;
  puVar27 = *(undefined8 **)(local_f0 + 0x60);
  if (puVar27 == (undefined8 *)0x0) {
LAB__text__0027e3b4:
    plVar17 = (long *)(puVar3 + 0x48);
    (**(code **)(*plVar17 + 0x18))(plVar17);
    goto LAB__text__0027effc;
  }
  plVar17 = (long *)(**(code **)*puVar27)(puVar27);
  plVar18 = (long *)FUN__text__00280688();
  if (plVar18 != plVar17) {
    do {
      plVar17 = (long *)*plVar17;
    } while (plVar17 != plVar18 && plVar17 != (long *)0x0);
    if (plVar17 == (long *)0x0) goto LAB__text__0027e3b4;
  }
  plVar17 = (long *)(puVar3 + 0x48);
  (**(code **)(*plVar17 + 0x18))(plVar17);
  if (puVar27 + -10 == (undefined8 *)0x0) goto LAB__text__0027effc;
  lVar22 = *(long *)(param_1 + 0xe10);
  if (lVar22 != 0) {
    (**(code **)(*(long *)(lVar22 + 0x48) + 0x10))();
  }
  uVar16 = FUN__text__003d57a4(lVar22);
  uVar30 = (ulong)uVar16;
  if (uVar16 == 0) {
LAB__text__0027e44c:
    puVar27 = puVar27 + -10 + uVar30 * 3 + 0x69a3;
    do {
      uVar30 = uVar30 + 1;
      *(undefined2 *)puVar27 = 0;
      puVar27 = puVar27 + 3;
    } while ((int)uVar30 != 3000);
  }
  else {
    uVar28 = 0;
    pbVar31 = (byte *)(puVar27 + 0x699b);
    do {
      uVar19 = FUN__text__003d5754(lVar22,uVar28);
      *(short *)(pbVar31 + -0x10) = (short)uVar19;
      uVar28 = uVar28 + 1;
      *pbVar31 = (byte)(uVar19 >> 0x30) & 1;
      *(long *)(pbVar31 + -8) = 1L << (uVar19 >> 0x20 & 0x3f);
      pbVar31 = pbVar31 + 0x18;
    } while (uVar30 != uVar28);
    if (uVar16 < 3000) goto LAB__text__0027e44c;
  }
  (**(code **)(*(long *)(lVar22 + 0x48) + 0x18))((long *)(lVar22 + 0x48));
  (**(code **)(**(long **)(param_1 + 0x348) + 0x10))(&local_f0);
  puVar3 = local_f0;
  if (local_f0 == (undefined1 *)0x0) goto LAB__text__0027effc;
  puVar27 = *(undefined8 **)(local_f0 + 0x60);
  if (puVar27 == (undefined8 *)0x0) {
LAB__text__0027e4f4:
    plVar17 = (long *)(puVar3 + 0x48);
    (**(code **)(*plVar17 + 0x18))(plVar17);
    goto LAB__text__0027effc;
  }
  plVar17 = (long *)(**(code **)*puVar27)(puVar27);
  plVar18 = (long *)FUN__text__00280688();
  if (plVar18 != plVar17) {
    do {
      plVar17 = (long *)*plVar17;
    } while (plVar17 != plVar18 && plVar17 != (long *)0x0);
    if (plVar17 == (long *)0x0) goto LAB__text__0027e4f4;
  }
  plVar17 = (long *)(puVar3 + 0x48);
  (**(code **)(*plVar17 + 0x18))(plVar17);
  if (puVar27 + -10 == (undefined8 *)0x0) goto LAB__text__0027effc;
  lVar22 = *(long *)(param_1 + 0xe18);
  if (lVar22 != 0) {
    (**(code **)(*(long *)(lVar22 + 0x48) + 0x10))();
  }
  uVar16 = FUN__text__003d57a4(lVar22);
  uVar30 = (ulong)uVar16;
  if (uVar16 == 0) {
LAB__text__0027e58c:
    puVar27 = puVar27 + -10 + uVar30 * 3 + 0x8ccb;
    do {
      uVar30 = uVar30 + 1;
      *(undefined2 *)puVar27 = 0;
      puVar27 = puVar27 + 3;
    } while ((int)uVar30 != 3000);
  }
  else {
    uVar28 = 0;
    pbVar31 = (byte *)(puVar27 + 0x8cc3);
    do {
      uVar19 = FUN__text__003d5754(lVar22,uVar28);
      *(short *)(pbVar31 + -0x10) = (short)uVar19;
      uVar28 = uVar28 + 1;
      *pbVar31 = (byte)(uVar19 >> 0x30) & 1;
      *(long *)(pbVar31 + -8) = 1L << (uVar19 >> 0x20 & 0x3f);
      pbVar31 = pbVar31 + 0x18;
    } while (uVar30 != uVar28);
    if (uVar16 < 3000) goto LAB__text__0027e58c;
  }
  (**(code **)(*(long *)(lVar22 + 0x48) + 0x18))((long *)(lVar22 + 0x48));
  (**(code **)(**(long **)(param_1 + 0x348) + 0x10))(&local_f0);
  puVar3 = local_f0;
  if (local_f0 == (undefined1 *)0x0) goto LAB__text__0027effc;
  puVar27 = *(undefined8 **)(local_f0 + 0x60);
  if (puVar27 == (undefined8 *)0x0) {
LAB__text__0027e634:
    plVar17 = (long *)(puVar3 + 0x48);
    (**(code **)(*plVar17 + 0x18))(plVar17);
    goto LAB__text__0027effc;
  }
  plVar17 = (long *)(**(code **)*puVar27)(puVar27);
  plVar18 = (long *)FUN__text__00280688();
  if (plVar18 != plVar17) {
    do {
      plVar17 = (long *)*plVar17;
    } while (plVar17 != plVar18 && plVar17 != (long *)0x0);
    if (plVar17 == (long *)0x0) goto LAB__text__0027e634;
  }
  plVar17 = (long *)(puVar3 + 0x48);
  (**(code **)(*plVar17 + 0x18))(plVar17);
  if (puVar27 + -10 == (undefined8 *)0x0) goto LAB__text__0027effc;
  lVar22 = *(long *)(param_1 + 0xe20);
  if (lVar22 != 0) {
    (**(code **)(*(long *)(lVar22 + 0x48) + 0x10))();
  }
  uVar16 = FUN__text__003d57a4(lVar22);
  uVar30 = (ulong)uVar16;
  if (uVar16 == 0) {
LAB__text__0027e6cc:
    puVar27 = puVar27 + -10 + uVar30 * 3 + 0xaff3;
    do {
      uVar30 = uVar30 + 1;
      *(undefined2 *)puVar27 = 0;
      puVar27 = puVar27 + 3;
    } while ((int)uVar30 != 3000);
  }
  else {
    uVar28 = 0;
    pbVar31 = (byte *)(puVar27 + 0xafeb);
    do {
      uVar19 = FUN__text__003d5754(lVar22,uVar28);
      *(short *)(pbVar31 + -0x10) = (short)uVar19;
      uVar28 = uVar28 + 1;
      *pbVar31 = (byte)(uVar19 >> 0x30) & 1;
      *(long *)(pbVar31 + -8) = 1L << (uVar19 >> 0x20 & 0x3f);
      pbVar31 = pbVar31 + 0x18;
    } while (uVar30 != uVar28);
    if (uVar16 < 3000) goto LAB__text__0027e6cc;
  }
  (**(code **)(*(long *)(lVar22 + 0x48) + 0x18))((long *)(lVar22 + 0x48));
  (**(code **)(**(long **)(param_1 + 0x348) + 0x10))(&local_f0);
  puVar3 = local_f0;
  if (local_f0 != (undefined1 *)0x0) {
    puVar27 = *(undefined8 **)(local_f0 + 0x60);
    if (puVar27 != (undefined8 *)0x0) {
      plVar17 = (long *)(**(code **)*puVar27)(puVar27);
      plVar18 = (long *)FUN__text__00280688();
      if (plVar18 != plVar17) {
        do {
          plVar17 = (long *)*plVar17;
        } while (plVar17 != plVar18 && plVar17 != (long *)0x0);
        if (plVar17 == (long *)0x0) {
          plVar17 = (long *)(puVar3 + 0x48);
          (**(code **)(*plVar17 + 0x18))(plVar17);
          goto LAB__text__0027effc;
        }
      }
      puVar27 = puVar27 + -10;
    }
    plVar17 = (long *)(puVar3 + 0x48);
    (**(code **)(*plVar17 + 0x18))(plVar17);
    if (puVar27 != (undefined8 *)0x0) {
      FUN__text__0027a060(puVar27,param_1 + 0xad0);
      (**(code **)(**(long **)(param_1 + 0x348) + 0x10))(&local_f0);
      puVar3 = local_f0;
      if (local_f0 != (undefined1 *)0x0) {
        puVar27 = *(undefined8 **)(local_f0 + 0x60);
        if (puVar27 != (undefined8 *)0x0) {
          plVar17 = (long *)(**(code **)*puVar27)(puVar27);
          plVar18 = (long *)FUN__text__00280688();
          if (plVar18 != plVar17) {
            do {
              plVar17 = (long *)*plVar17;
            } while (plVar17 != plVar18 && plVar17 != (long *)0x0);
            if (plVar17 == (long *)0x0) {
              plVar17 = (long *)(puVar3 + 0x48);
              (**(code **)(*plVar17 + 0x18))(plVar17);
              goto LAB__text__0027effc;
            }
          }
          puVar27 = puVar27 + -10;
        }
        plVar17 = (long *)(puVar3 + 0x48);
        (**(code **)(*plVar17 + 0x18))(plVar17);
        if (puVar27 != (undefined8 *)0x0) {
          puVar27[0x12527] = *(undefined8 *)(*(long *)(param_1 + 0xbe8) + 400);
          *(int *)(puVar27 + 0x12528) = (int)(*(ulong *)(*(long *)(param_1 + 0xbe8) + 0x180) >> 3);
          (**(code **)(**(long **)(param_1 + 0x348) + 0x10))(&local_f0);
          puVar3 = local_f0;
          if (local_f0 != (undefined1 *)0x0) {
            puVar27 = *(undefined8 **)(local_f0 + 0x60);
            if (puVar27 != (undefined8 *)0x0) {
              plVar17 = (long *)(**(code **)*puVar27)(puVar27);
              plVar18 = (long *)FUN__text__00280688();
              if (plVar18 != plVar17) {
                do {
                  plVar17 = (long *)*plVar17;
                } while (plVar17 != plVar18 && plVar17 != (long *)0x0);
                if (plVar17 == (long *)0x0) {
                  plVar17 = (long *)(puVar3 + 0x48);
                  (**(code **)(*plVar17 + 0x18))(plVar17);
                  goto LAB__text__0027effc;
                }
              }
              puVar27 = puVar27 + -10;
            }
            plVar17 = (long *)(puVar3 + 0x48);
            (**(code **)(*plVar17 + 0x18))(plVar17);
            if (puVar27 != (undefined8 *)0x0) {
              puVar27[0x12529] = *(undefined8 *)(*(long *)(param_1 + 0xcf8) + 400);
              plVar17 = _DAT_0089f4f0;
              *(int *)(puVar27 + 0x1252a) =
                   (int)(*(ulong *)(*(long *)(param_1 + 0xcf8) + 0x180) >> 3);
              lVar22 = *(long *)(*plVar17 + 0x80);
              if (lVar22 != 0) {
                (**(code **)(*(long *)(lVar22 + 0x48) + 0x10))();
              }
              uVar29 = *(undefined8 *)(*(long *)(lVar22 + 0x508) + 400);
              (**(code **)(**(long **)(param_1 + 0x348) + 0x10))(&local_f0);
              puVar3 = local_f0;
              if (local_f0 != (undefined1 *)0x0) {
                puVar27 = *(undefined8 **)(local_f0 + 0x60);
                if (puVar27 != (undefined8 *)0x0) {
                  plVar17 = (long *)(**(code **)*puVar27)(puVar27);
                  plVar18 = (long *)FUN__text__00280688();
                  if (plVar18 != plVar17) {
                    do {
                      plVar17 = (long *)*plVar17;
                    } while (plVar17 != plVar18 && plVar17 != (long *)0x0);
                    if (plVar17 == (long *)0x0) {
                      plVar17 = (long *)(puVar3 + 0x48);
                      (**(code **)(*plVar17 + 0x18))(plVar17);
                      goto LAB__text__0027effc;
                    }
                  }
                  puVar27 = puVar27 + -10;
                }
                plVar17 = (long *)(puVar3 + 0x48);
                (**(code **)(*plVar17 + 0x18))(plVar17);
                if (puVar27 != (undefined8 *)0x0) {
                  puVar27[0x1252c] = uVar29;
                  if (lVar22 != 0) {
                    (**(code **)(*(long *)(lVar22 + 0x48) + 0x18))((long *)(lVar22 + 0x48));
                  }
                  FUN__text__003d0e80(*(undefined8 *)(param_1 + 0xe28));
                  FUN__text__003d0e80(*(undefined8 *)(param_1 + 0xe30));
                  lVar22 = *(long *)(param_1 + 0x5c8);
                  local_f0 = *(undefined1 **)(lVar22 + 0x58);
                  if (local_f0 != (undefined1 *)0x0) {
                    (**(code **)(*(long *)(local_f0 + 0x48) + 0x10))();
                  }
                  FUN__text__002808a8(&local_68,lVar22,&local_f0,0,0x7167d4);
                  if (local_f0 != (undefined1 *)0x0) {
                    (**(code **)(*(long *)(local_f0 + 0x48) + 0x18))();
                  }
                  lVar22 = local_68;
                  (**(code **)(**(long **)(param_1 + 0x348) + 0x10))(&local_f0);
                  puVar3 = local_f0;
                  if (local_f0 != (undefined1 *)0x0) {
                    puVar27 = *(undefined8 **)(local_f0 + 0x60);
                    if (puVar27 != (undefined8 *)0x0) {
                      plVar17 = (long *)(**(code **)*puVar27)(puVar27);
                      plVar18 = (long *)FUN__text__00280688();
                      if (plVar18 != plVar17) {
                        do {
                          plVar17 = (long *)*plVar17;
                        } while (plVar17 != plVar18 && plVar17 != (long *)0x0);
                        if (plVar17 == (long *)0x0) {
                          plVar17 = (long *)(puVar3 + 0x48);
                          (**(code **)(*plVar17 + 0x18))(plVar17);
                          goto LAB__text__0027effc;
                        }
                      }
                      puVar27 = puVar27 + -10;
                    }
                    plVar17 = (long *)(puVar3 + 0x48);
                    (**(code **)(*plVar17 + 0x18))(plVar17);
                    lVar24 = local_68;
                    if (puVar27 != (undefined8 *)0x0) {
                      *(undefined8 **)(lVar22 + 0x640) = puVar27;
                      lVar22 = *(long *)(param_1 + 0xe30);
                      if (lVar22 != 0) {
                        plVar17 = (long *)(lVar22 + 0x48);
                        (**(code **)(*plVar17 + 0x10))(plVar17);
                        (**(code **)(*plVar17 + 0x10))(plVar17);
                      }
                      lVar20 = *(long *)(lVar24 + 0x9e8);
                      *(long *)(lVar24 + 0x9e8) = lVar22;
                      if (lVar20 != 0) {
                        (**(code **)(*(long *)(lVar20 + 0x48) + 0x18))();
                      }
                      if (lVar22 != 0) {
                        (**(code **)(*(long *)(lVar22 + 0x48) + 0x18))((long *)(lVar22 + 0x48));
                      }
                      FUN__text__00130104(0x71e39f,0x710dca,*(undefined8 *)(param_1 + 0x5c8));
                      if (local_68 != 0) {
                        (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
                      }
                      lVar22 = *(long *)(param_1 + 0x5c8);
                      local_f0 = *(undefined1 **)(lVar22 + 0x58);
                      if (local_f0 != (undefined1 *)0x0) {
                        (**(code **)(*(long *)(local_f0 + 0x48) + 0x10))();
                      }
                      FUN__text__00280b88(&local_68,lVar22,&local_f0,0,0x715c42);
                      if (local_f0 != (undefined1 *)0x0) {
                        (**(code **)(*(long *)(local_f0 + 0x48) + 0x18))();
                      }
                      FUN__text__00282b60(local_68);
                      lVar22 = local_68;
                      (**(code **)(**(long **)(param_1 + 0x348) + 0x10))(&local_f0);
                      puVar3 = local_f0;
                      if (local_f0 != (undefined1 *)0x0) {
                        puVar27 = *(undefined8 **)(local_f0 + 0x60);
                        if (puVar27 != (undefined8 *)0x0) {
                          plVar17 = (long *)(**(code **)*puVar27)(puVar27);
                          plVar18 = (long *)FUN__text__00280688();
                          if (plVar18 != plVar17) {
                            do {
                              plVar17 = (long *)*plVar17;
                            } while (plVar17 != plVar18 && plVar17 != (long *)0x0);
                            if (plVar17 == (long *)0x0) {
                              plVar17 = (long *)(puVar3 + 0x48);
                              (**(code **)(*plVar17 + 0x18))(plVar17);
                              goto LAB__text__0027effc;
                            }
                          }
                          puVar27 = puVar27 + -10;
                        }
                        plVar17 = (long *)(puVar3 + 0x48);
                        (**(code **)(*plVar17 + 0x18))(plVar17);
                        lVar24 = local_68;
                        if (puVar27 != (undefined8 *)0x0) {
                          *(undefined8 **)(lVar22 + 0x640) = puVar27;
                          local_f0 = &LAB__text__00280f9c;
                          local_e8 = FUN__text__00280fa8;
                          pcVar25 = *(code **)(local_68 + 0x898);
                          puVar27 = (undefined8 *)(local_68 + 0x890);
                          local_e0 = FUN__text__00280fac;
                          local_d8 = &LAB__text__00280fb8;
                          alStack_150[0] = param_1;
                          alStack_d0[0] = param_1;
                          if (pcVar25 != (code *)0x0) {
                            *(undefined8 *)(local_68 + 0x8a0) = 0;
                            *(undefined8 *)(local_68 + 0x8a8) = 0;
                            *puVar27 = 0;
                            *(undefined8 *)(local_68 + 0x898) = 0;
                            (*pcVar25)(local_68 + 0x8b0);
                          }
                          FUN__text__00280fac(alStack_150,lVar24 + 0x8b0);
                          *puVar27 = &LAB__text__00280f9c;
                          *(code **)(lVar24 + 0x898) = FUN__text__00280fa8;
                          *(code **)(lVar24 + 0x8a0) = FUN__text__00280fac;
                          *(undefined1 **)(lVar24 + 0x8a8) = &LAB__text__00280fb8;
                          FUN__text__00280fa8(alStack_150);
                          pcVar25 = local_e8;
                          if (local_e8 != (code *)0x0) {
                            local_e0 = (code *)0x0;
                            local_d8 = (undefined1 *)0x0;
                            local_f0 = (undefined1 *)0x0;
                            local_e8 = (code *)0x0;
                            (*pcVar25)(alStack_d0);
                          }
                          plVar17 = _DAT_008a1590;
                          FUN__text__00137978(0x70eeac,*(undefined8 *)(param_1 + 0x5c8),
                                              *(undefined8 *)(*_DAT_008a1590 + 0x28),0);
                          if (local_68 != 0) {
                            (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
                          }
                          lVar22 = *(long *)(param_1 + 0x5c8);
                          local_f0 = *(undefined1 **)(lVar22 + 0x58);
                          if (local_f0 != (undefined1 *)0x0) {
                            (**(code **)(*(long *)(local_f0 + 0x48) + 0x10))();
                          }
                          FUN__text__00280fc4(&local_68,lVar22,&local_f0,0,0x710f63);
                          if (local_f0 != (undefined1 *)0x0) {
                            (**(code **)(*(long *)(local_f0 + 0x48) + 0x18))();
                          }
                          lVar22 = local_68;
                          (**(code **)(**(long **)(param_1 + 0x348) + 0x10))(&local_f0);
                          puVar3 = local_f0;
                          if (local_f0 != (undefined1 *)0x0) {
                            puVar27 = *(undefined8 **)(local_f0 + 0x60);
                            if (puVar27 != (undefined8 *)0x0) {
                              plVar18 = (long *)(**(code **)*puVar27)(puVar27);
                              plVar21 = (long *)FUN__text__00280688();
                              if (plVar21 != plVar18) {
                                do {
                                  plVar18 = (long *)*plVar18;
                                } while (plVar18 != plVar21 && plVar18 != (long *)0x0);
                                if (plVar18 == (long *)0x0) {
                                  plVar17 = (long *)(puVar3 + 0x48);
                                  (**(code **)(*plVar17 + 0x18))(plVar17);
                                  goto LAB__text__0027effc;
                                }
                              }
                              puVar27 = puVar27 + -10;
                            }
                            plVar18 = (long *)(puVar3 + 0x48);
                            (**(code **)(*plVar18 + 0x18))(plVar18);
                            lVar24 = local_68;
                            if (puVar27 != (undefined8 *)0x0) {
                              *(undefined8 **)(lVar22 + 0x640) = puVar27;
                              lVar22 = *(long *)(param_1 + 0xe28);
                              if (lVar22 != 0) {
                                plVar18 = (long *)(lVar22 + 0x48);
                                (**(code **)(*plVar18 + 0x10))(plVar18);
                                (**(code **)(*plVar18 + 0x10))(plVar18);
                              }
                              lVar20 = *(long *)(lVar24 + 0x1550);
                              *(long *)(lVar24 + 0x1550) = lVar22;
                              if (lVar20 != 0) {
                                (**(code **)(*(long *)(lVar20 + 0x48) + 0x18))();
                              }
                              if (lVar22 != 0) {
                                (**(code **)(*(long *)(lVar22 + 0x48) + 0x18))
                                          ((long *)(lVar22 + 0x48));
                              }
                              FUN__text__00137978(0x71ced0,*(undefined8 *)(param_1 + 0x5c8),
                                                  *(undefined8 *)(*plVar17 + 0x48),1);
                              FUN__text__00137978(0x70b982,*(undefined8 *)(param_1 + 0x5c8),
                                                  *(undefined8 *)(*plVar17 + 0x68),0);
                              FUN__text__00137978(0x70f92d,*(undefined8 *)(param_1 + 0x5c8),
                                                  *(undefined8 *)(*plVar17 + 0x88),0);
                              if (local_68 != 0) {
                                (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
                              }
                              lVar22 = *(long *)(param_1 + 0x5c8);
                              local_f0 = *(undefined1 **)(lVar22 + 0x58);
                              if (local_f0 != (undefined1 *)0x0) {
                                (**(code **)(*(long *)(local_f0 + 0x48) + 0x10))();
                              }
                              FUN__text__00281390(&local_68,lVar22,&local_f0,0,0x71a107);
                              if (local_f0 != (undefined1 *)0x0) {
                                (**(code **)(*(long *)(local_f0 + 0x48) + 0x18))();
                              }
                              lVar22 = local_68;
                              (**(code **)(**(long **)(param_1 + 0x348) + 0x10))(&local_f0);
                              puVar3 = local_f0;
                              if (local_f0 != (undefined1 *)0x0) {
                                puVar27 = *(undefined8 **)(local_f0 + 0x60);
                                if (puVar27 != (undefined8 *)0x0) {
                                  plVar17 = (long *)(**(code **)*puVar27)(puVar27);
                                  plVar18 = (long *)FUN__text__00280688();
                                  if (plVar18 != plVar17) {
                                    do {
                                      plVar17 = (long *)*plVar17;
                                    } while (plVar17 != plVar18 && plVar17 != (long *)0x0);
                                    if (plVar17 == (long *)0x0) {
                                      plVar17 = (long *)(puVar3 + 0x48);
                                      (**(code **)(*plVar17 + 0x18))(plVar17);
                                      goto LAB__text__0027effc;
                                    }
                                  }
                                  puVar27 = puVar27 + -10;
                                }
                                plVar17 = (long *)(puVar3 + 0x48);
                                (**(code **)(*plVar17 + 0x18))(plVar17);
                                if (puVar27 != (undefined8 *)0x0) {
                                  *(undefined8 **)(lVar22 + 0x640) = puVar27;
                                  if (local_68 != 0) {
                                    (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
                                  }
                                  FUN__text__00136338(0x7167dd,*(undefined8 *)(param_1 + 0x5c8),
                                                      0x70db6c);
                                  return 0;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB__text__0027effc:
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl();
}


