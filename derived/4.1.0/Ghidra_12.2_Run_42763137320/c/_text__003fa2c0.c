/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003fa2c0; name: FUN_.text__003fa2c0
 */


long * FUN__text__003fa2c0(long param_1)

{
  long *plVar1;
  long *plVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  uint uVar6;
  uint uVar7;
  long *plVar8;
  bool bVar9;
  long *plVar10;
  long *plVar11;
  int iVar12;
  
  if (*(long **)(param_1 + 0x280) == (long *)0x0) {
    iVar12 = 0;
    plVar10 = (long *)0x0;
    goto LAB__text__003fa4f4;
  }
  iVar12 = 0;
  bVar9 = false;
  plVar1 = (long *)(param_1 + 0x280);
  plVar10 = *(long **)(param_1 + 0x280);
  plVar8 = (long *)0x0;
  do {
    while ((plVar11 = plVar10, (char)plVar11[0xd] == '\0' ||
           (uVar5 = (**(code **)(*plVar11 + 0x10))(plVar11), (uVar5 & 1) == 0))) {
      iVar3 = (**(code **)(*plVar11 + 0x50))(plVar11);
      iVar12 = iVar3 + iVar12;
      plVar10 = (long *)plVar11[2];
      plVar8 = plVar11;
      if ((long *)plVar11[2] == (long *)0x0) goto LAB__text__003fa380;
    }
    plVar10 = (long *)plVar11[2];
    plVar2 = plVar1;
    if ((long *)*plVar1 != plVar11) {
      plVar2 = plVar8 + 2;
    }
    *plVar2 = (long)plVar10;
    (**(code **)*plVar11)(plVar11);
    FUN__text__00400fc0(7,plVar11);
    bVar9 = true;
  } while (plVar10 != (long *)0x0);
LAB__text__003fa380:
  plVar8 = (long *)*plVar1;
  if (plVar8 != (long *)0x0) {
    plVar10 = (long *)0x0;
    if (bVar9) {
      do {
        (**(code **)(*plVar8 + 0x58))(plVar8);
        if ((*(char *)((long)plVar8 + 0x6a) != '\0') &&
           ((plVar10 == (long *)0x0 ||
            (*(char *)((long)plVar10 + 100) < *(char *)((long)plVar8 + 100))))) {
          plVar10 = plVar8;
        }
        plVar8 = (long *)plVar8[2];
      } while (plVar8 != (long *)0x0);
    }
    else {
      do {
        if ((*(char *)((long)plVar8 + 0x6a) != '\0') &&
           ((plVar10 == (long *)0x0 ||
            (*(char *)((long)plVar10 + 100) < *(char *)((long)plVar8 + 100))))) {
          plVar10 = plVar8;
        }
        plVar8 = (long *)plVar8[2];
      } while (plVar8 != (long *)0x0);
    }
    if (plVar10 == (long *)0x0) goto LAB__text__003fa4f4;
    iVar3 = (**(code **)(*plVar10 + 0x48))(plVar10);
    iVar4 = (**(code **)(*plVar10 + 0x50))(plVar10);
    iVar3 = iVar3 - iVar4;
    if ((uint)(iVar3 + iVar12) <= *(uint *)(param_1 + 0x624)) goto LAB__text__003fa4f4;
    do {
      plVar8 = (long *)*plVar1;
      if (plVar8 == (long *)0x0) {
LAB__text__003fa4cc:
        uVar6 = *(uint *)(param_1 + 0x624);
        uVar7 = iVar12 + iVar3;
        break;
      }
      plVar11 = (long *)0x0;
      do {
        iVar4 = (**(code **)(*plVar8 + 0x50))(plVar8);
        if (((iVar4 != 0) && (*(char *)((long)plVar8 + 100) < *(char *)((long)plVar10 + 100))) &&
           ((plVar11 == (long *)0x0 ||
            (*(char *)((long)plVar8 + 100) < *(char *)((long)plVar11 + 100))))) {
          plVar11 = plVar8;
        }
        plVar8 = (long *)plVar8[2];
      } while (plVar8 != (long *)0x0);
      if (plVar11 == (long *)0x0) goto LAB__text__003fa4cc;
      iVar4 = (**(code **)(*plVar11 + 0x60))(plVar11,iVar3);
      uVar6 = *(uint *)(param_1 + 0x624);
      iVar12 = iVar12 - iVar4;
      uVar7 = iVar12 + iVar3;
    } while (uVar6 < uVar7);
    if (uVar7 <= uVar6) goto LAB__text__003fa4f4;
    (**(code **)(*plVar10 + 0x60))(plVar10,0);
  }
  plVar10 = (long *)0x0;
LAB__text__003fa4f4:
  *(int *)(param_1 + 0x628) = iVar12;
  return plVar10;
}


