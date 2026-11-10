/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004d5f50; name: FUN_.text__004d5f50
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__004d5f50(long param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  byte bVar4;
  char cVar5;
  bool bVar6;
  byte bVar7;
  undefined8 *puVar8;
  undefined4 uVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  float fVar20;
  long local_68;
  
  if ((*(byte *)(param_1 + 0x1ac) & 3) != 1) {
    uVar9 = 0xf;
    if ((*(byte *)(param_1 + 0x1ac) & 1) != 0) {
      uVar9 = 0;
    }
    FUN__text__004d46f0(param_1,uVar9);
  }
  if ((*(long *)(param_1 + 400) == 0) ||
     (plVar10 = *(long **)(*(long *)(param_1 + 400) + 0x88), plVar10 == (long *)0x0)) {
    bVar6 = false;
    iVar2 = *(int *)(param_1 + 0x1b0);
  }
  else {
    if (*(int *)(param_1 + 0x170) == 0) {
      do {
        uVar18 = DAT_00aea6a0 + 1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(0xaea6a0,0x10);
        if (bVar6) {
          cVar5 = ExclusiveMonitorsStatus();
          DAT_00aea6a0 = uVar18;
        }
      } while (cVar5 != '\0');
      lVar11 = FUN__text__004d234c(param_1,uVar18 & 0xffffffffffffff,
                                   *(undefined4 *)(param_1 + 0x160));
      if (lVar11 == 0) {
        return;
      }
      plVar10 = *(long **)(*(long *)(param_1 + 400) + 0x88);
    }
    (**(code **)(*plVar10 + 0x58))(plVar10,*(undefined8 *)(param_1 + 0x168));
    bVar6 = true;
    iVar2 = *(int *)(param_1 + 0x1b0);
  }
  local_68 = param_1 + 0x168;
  if (iVar2 == 1) {
    local_68 = param_1 + 0x168;
    FUN__text__004d74a0(param_1 + 0xa0,&local_68);
    FUN__text__004d74a0(param_1 + 0xd0,&local_68);
    FUN__text__004d74a0(param_1 + 0x100,&local_68);
    FUN__text__004d74a0(param_1 + 0x130,&local_68);
  }
  plVar10 = (long *)(param_1 + 0x168);
  if (*(short *)(param_1 + 0x1a8) == 0) {
    if ((*(char *)(param_1 + 0x157) == '\0') && (*(short *)(param_1 + 0x15c) == 0)) {
      lVar11 = 3;
    }
    else if ((*(char *)(param_1 + 0x127) == '\0') && (*(short *)(param_1 + 300) == 0)) {
      lVar11 = 2;
    }
    else if ((*(char *)(param_1 + 0xf7) == '\0') && (*(short *)(param_1 + 0xfc) == 0)) {
      lVar11 = 1;
    }
    else {
      if ((*(char *)(param_1 + 199) != '\0') || (*(short *)(param_1 + 0xcc) != 0))
      goto LAB__text__004d60e0;
      lVar11 = 0;
    }
    plVar10 = (long *)(param_1 + lVar11 * 0x30 + 0xb0);
  }
LAB__text__004d60e0:
  FUN__text__004d63a0(param_1,plVar10);
  if (bVar6) {
    plVar12 = *(long **)(*(long *)(param_1 + 400) + 0x88);
    (**(code **)(*plVar12 + 0x60))(plVar12,*plVar10);
  }
  bVar4 = *(byte *)(param_1 + 0x91) | *(byte *)(param_1 + 0x90) >> 2;
  lVar11 = *plVar10;
  uVar3 = *(uint *)(plVar10 + 1);
  if (uVar3 != 0) {
    bVar7 = bVar4 & 0x1f;
    uVar17 = (ulong)uVar3 * 0x30 - 0x30;
    uVar1 = ((uint)(uVar17 / 0x30) & 0x7ffffff) + 1;
    uVar18 = (ulong)uVar1 & 3;
    lVar15 = lVar11;
    if ((uVar1 & 3) != 0) {
      do {
        *(byte *)(lVar15 + 0x20) = bVar7;
        uVar18 = uVar18 - 1;
        *(undefined4 *)(lVar15 + 0x24) = *(undefined4 *)(lVar15 + 8);
        lVar15 = lVar15 + 0x30;
      } while (uVar18 != 0);
    }
    if (0x8f < uVar17) {
      do {
        *(byte *)(lVar15 + 0x20) = bVar7;
        *(byte *)(lVar15 + 0x50) = bVar7;
        *(byte *)(lVar15 + 0x80) = bVar7;
        *(byte *)(lVar15 + 0xb0) = bVar7;
        *(undefined4 *)(lVar15 + 0x24) = *(undefined4 *)(lVar15 + 8);
        *(undefined4 *)(lVar15 + 0x54) = *(undefined4 *)(lVar15 + 0x38);
        *(undefined4 *)(lVar15 + 0x84) = *(undefined4 *)(lVar15 + 0x68);
        *(undefined4 *)(lVar15 + 0xb4) = *(undefined4 *)(lVar15 + 0x98);
        lVar15 = lVar15 + 0xc0;
      } while (lVar15 != lVar11 + (ulong)uVar3 * 0x30);
    }
  }
  *(undefined4 *)(param_1 + 0x184) = 1;
  *(byte *)(param_1 + 0x180) = bVar4 & 0x10;
  uVar9 = FUN__text__0045cdd4(param_1 + 0x68);
  uVar13 = FUN__text__0045cdec(param_1 + 0x68);
  puVar8 = _DAT_008a4678;
  if (uVar3 == 0) {
    lVar15 = FUN__text__004d7000(param_1 + 0x180);
    if (lVar15 == 0) goto LAB__text__004d6320;
LAB__text__004d62f4:
    fVar20 = 0.0;
  }
  else {
    fVar20 = *(float *)(param_1 + 0x8c);
    lVar15 = lVar11 + 0x20;
    lVar19 = (ulong)uVar3 * 0x30;
    lVar16 = lVar19;
    do {
      bVar4 = *(byte *)(param_1 + 0x90);
      lVar14 = FUN__text__004d7000(lVar15);
      if ((lVar14 != 0) &&
         (FUN__text__004d70f0(*(float *)(*(long *)(lVar15 + -8) + 0x54) * fVar20,lVar15 + -0x20,
                              lVar14), (bVar4 & 0x7c) != 0)) {
        FUN__text__0048f080(*puVar8,uVar9,uVar13,lVar14,*(undefined4 *)(lVar14 + 0x20));
      }
      lVar15 = lVar15 + 0x30;
      lVar16 = lVar16 + -0x30;
    } while (lVar16 != 0);
    lVar15 = FUN__text__004d7000(param_1 + 0x180);
    if (lVar15 == 0) goto LAB__text__004d6320;
    if (uVar3 == 0) goto LAB__text__004d62f4;
    fVar20 = 0.0;
    lVar11 = lVar11 + 0x20;
    do {
      lVar16 = FUN__text__004d7000(lVar11);
      if (lVar16 != 0) {
        fVar20 = *(float *)(lVar16 + 0x18) + fVar20;
      }
      lVar11 = lVar11 + 0x30;
      lVar19 = lVar19 + -0x30;
    } while (lVar19 != 0);
  }
  *(float *)(lVar15 + 0x18) = fVar20;
  if ((*(byte *)(param_1 + 0x90) & 0x7c) != 0) {
    FUN__text__0048f080(*puVar8,uVar9,uVar13,lVar15,*(undefined4 *)(lVar15 + 0x20));
  }
LAB__text__004d6320:
  if (!bVar6) {
    return;
  }
  lVar11 = *plVar10;
  plVar10 = *(long **)(*(long *)(param_1 + 400) + 0x88);
  uVar13 = FUN__text__004d7000(lVar11 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x004d636c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar10 + 0x68))(plVar10,lVar11,uVar13);
  return;
}


