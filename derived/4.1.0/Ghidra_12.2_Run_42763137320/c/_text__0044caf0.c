/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0044caf0; name: FUN_.text__0044caf0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0044caf0(long *param_1)

{
  long lVar1;
  long lVar2;
  int *piVar3;
  int *piVar4;
  long lVar5;
  int iVar6;
  int *piVar7;
  undefined8 *puVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  
  *(undefined4 *)(param_1 + 0x1b) = 0;
  puVar8 = _DAT_008a4768;
  piVar7 = _DAT_008a3828;
  plVar11 = param_1;
  if ((char)param_1[0x1c] == '\0') {
    plVar11 = (long *)*_DAT_008a4768;
    if (plVar11 == (long *)0x0) {
      lVar2 = _DAT_008a3f88 + 0x10;
      do {
        if (plVar11 == (long *)0x0) {
          plVar11 = (long *)FUN__text__00400f80(4,0xf0);
          if (plVar11 != (long *)0x0) {
            plVar11[1] = 0;
            plVar11[2] = 0;
            piVar4 = *(int **)(piVar7 + 2);
            lVar1 = *(long *)(piVar7 + 4);
            iVar6 = *piVar7;
            plVar11[3] = (long)piVar4;
            *(long **)(piVar7 + 2) = plVar11;
            piVar3 = piVar7;
            if (lVar1 != 0) {
              piVar3 = piVar4;
            }
            *(long **)(piVar3 + 4) = plVar11;
            *(undefined2 *)(plVar11 + 0x1c) = 0x101;
            plVar11[8] = 0;
            plVar11[9] = 0;
            plVar11[0xc] = 0;
            plVar11[0xd] = 0;
            *piVar7 = iVar6 + 1;
            *plVar11 = lVar2;
            plVar11[0x12] = 0;
            plVar11[0x13] = 0;
            plVar11[0x16] = 0;
            plVar11[0x17] = 0;
            plVar11[0x1a] = 0;
            plVar11[0x1b] = 0;
          }
          *puVar8 = plVar11;
        }
      } while ((char)plVar11[0x1c] == '\0');
    }
    else if ((char)plVar11[0x1c] == '\0') {
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
  }
  plVar9 = param_1 + 0x18;
  FUN__text__0044d750(plVar9,plVar11 + 10);
  plVar11 = param_1;
  if (*(char *)((long)param_1 + 0xe1) == '\0') {
    plVar11 = (long *)*puVar8;
    if (plVar11 == (long *)0x0) {
      lVar2 = _DAT_008a3f88 + 0x10;
      do {
        if (plVar11 == (long *)0x0) {
          plVar11 = (long *)FUN__text__00400f80(4,0xf0);
          if (plVar11 != (long *)0x0) {
            plVar11[1] = 0;
            plVar11[2] = 0;
            piVar4 = *(int **)(piVar7 + 2);
            lVar1 = *(long *)(piVar7 + 4);
            iVar6 = *piVar7;
            plVar11[3] = (long)piVar4;
            *(long **)(piVar7 + 2) = plVar11;
            piVar3 = piVar7;
            if (lVar1 != 0) {
              piVar3 = piVar4;
            }
            *(long **)(piVar3 + 4) = plVar11;
            *(undefined2 *)(plVar11 + 0x1c) = 0x101;
            plVar11[8] = 0;
            plVar11[9] = 0;
            plVar11[0xc] = 0;
            plVar11[0xd] = 0;
            *piVar7 = iVar6 + 1;
            *plVar11 = lVar2;
            plVar11[0x12] = 0;
            plVar11[0x13] = 0;
            plVar11[0x16] = 0;
            plVar11[0x17] = 0;
            plVar11[0x1a] = 0;
            plVar11[0x1b] = 0;
          }
          *puVar8 = plVar11;
        }
      } while (*(char *)((long)plVar11 + 0xe1) == '\0');
    }
    else if (*(char *)((long)plVar11 + 0xe1) == '\0') {
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
  }
  FUN__text__0044d750(plVar9,plVar11 + 0x14);
  FUN__text__0044d8e0(plVar9);
  lVar2 = _DAT_008a3f88;
  plVar11 = *(long **)(piVar7 + 4);
  if ((long *)*puVar8 == param_1 && plVar11 != (long *)0x0) {
    lVar1 = _DAT_008a3f88 + 0x10;
    do {
      if (plVar11 != param_1) {
        if (*(char *)((long)plVar11 + 0xe1) == '\0') {
          *(undefined4 *)(plVar11 + 0x1b) = 0;
          plVar9 = plVar11;
          if ((char)plVar11[0x1c] == '\0') goto LAB__text__0044cc04;
        }
        else {
          if ((char)plVar11[0x1c] != '\0') goto LAB__text__0044cbdc;
          *(undefined4 *)(plVar11 + 0x1b) = 0;
LAB__text__0044cc04:
          plVar9 = (long *)*puVar8;
          if (plVar9 == (long *)0x0) {
            do {
              if (plVar9 == (long *)0x0) {
                plVar9 = (long *)FUN__text__00400f80(4,0xf0);
                if (plVar9 != (long *)0x0) {
                  plVar9[1] = 0;
                  plVar9[2] = 0;
                  piVar4 = *(int **)(piVar7 + 2);
                  lVar5 = *(long *)(piVar7 + 4);
                  iVar6 = *piVar7;
                  plVar9[3] = (long)piVar4;
                  *(long **)(piVar7 + 2) = plVar9;
                  piVar3 = piVar7;
                  if (lVar5 != 0) {
                    piVar3 = piVar4;
                  }
                  *(long **)(piVar3 + 4) = plVar9;
                  *(undefined2 *)(plVar9 + 0x1c) = 0x101;
                  plVar9[8] = 0;
                  plVar9[9] = 0;
                  plVar9[0xc] = 0;
                  plVar9[0xd] = 0;
                  *piVar7 = iVar6 + 1;
                  *plVar9 = lVar1;
                  plVar9[0x12] = 0;
                  plVar9[0x13] = 0;
                  plVar9[0x16] = 0;
                  plVar9[0x17] = 0;
                  plVar9[0x1a] = 0;
                  plVar9[0x1b] = 0;
                }
                *puVar8 = plVar9;
              }
            } while ((char)plVar9[0x1c] == '\0');
          }
          else if ((char)plVar9[0x1c] == '\0') {
            do {
                    /* WARNING: Do nothing block with infinite loop */
            } while( true );
          }
        }
        plVar10 = plVar11 + 0x18;
        FUN__text__0044d750(plVar10,plVar9 + 10);
        plVar9 = plVar11;
        if (*(char *)((long)plVar11 + 0xe1) == '\0') {
          plVar9 = (long *)*puVar8;
          if (plVar9 == (long *)0x0) {
            do {
              if (plVar9 == (long *)0x0) {
                plVar9 = (long *)FUN__text__00400f80(4,0xf0);
                if (plVar9 != (long *)0x0) {
                  iVar6 = *piVar7;
                  plVar9[1] = 0;
                  plVar9[2] = 0;
                  *piVar7 = iVar6 + 1;
                  piVar4 = *(int **)(piVar7 + 2);
                  lVar5 = *(long *)(piVar7 + 4);
                  *(long **)(piVar7 + 2) = plVar9;
                  plVar9[3] = (long)piVar4;
                  piVar3 = piVar7;
                  if (lVar5 != 0) {
                    piVar3 = piVar4;
                  }
                  *(long **)(piVar3 + 4) = plVar9;
                  *plVar9 = lVar2 + 0x10;
                  plVar9[8] = 0;
                  plVar9[9] = 0;
                  *(undefined2 *)(plVar9 + 0x1c) = 0x101;
                  plVar9[0xc] = 0;
                  plVar9[0xd] = 0;
                  plVar9[0x12] = 0;
                  plVar9[0x13] = 0;
                  plVar9[0x16] = 0;
                  plVar9[0x17] = 0;
                  plVar9[0x1a] = 0;
                  plVar9[0x1b] = 0;
                }
                *puVar8 = plVar9;
              }
            } while (*(char *)((long)plVar9 + 0xe1) == '\0');
          }
          else if (*(char *)((long)plVar9 + 0xe1) == '\0') {
            do {
                    /* WARNING: Do nothing block with infinite loop */
            } while( true );
          }
        }
        FUN__text__0044d750(plVar10,plVar9 + 0x14);
        FUN__text__0044d8e0(plVar10);
      }
LAB__text__0044cbdc:
      plVar11 = (long *)plVar11[2];
    } while (plVar11 != (long *)0x0);
  }
  return;
}


