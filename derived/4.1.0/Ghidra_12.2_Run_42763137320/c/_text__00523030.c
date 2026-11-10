/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00523030; name: FUN_.text__00523030
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN__text__00523030(long param_1,undefined8 param_2,undefined4 param_3,long param_4)

{
  long *plVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  undefined8 *puVar15;
  undefined1 auStack_90 [16];
  undefined1 *local_80;
  ulong local_78;
  undefined1 uStack_61;
  
  puVar15 = _DAT_008a45e0;
  plVar14 = (long *)(param_1 + 0x70);
  lVar8 = *plVar14;
  if (lVar8 != 0) {
    iVar7 = *(int *)(lVar8 + 0x60);
    *(int *)(lVar8 + 0x60) = iVar7 + 1;
    if (iVar7 == 1 && *(char *)(lVar8 + 100) != '\0') {
      FUN__text__004473d0();
    }
    return (undefined8 *)*plVar14;
  }
  puVar9 = (undefined8 *)FUN__text__00447b80(*_DAT_008a45e0);
  if (puVar9 == (undefined8 *)0x0) {
    FUN__text__00447c10(*puVar15,param_2,0);
    FUN__text__00448180(*puVar15,param_2,0,0,2,3);
    puVar9 = (undefined8 *)FUN__text__00447b80(*puVar15,param_2);
    if (puVar9 == (undefined8 *)0x0) {
      return (undefined8 *)0x0;
    }
  }
  uVar10 = FUN__text__00449940(*puVar15,param_4);
  if ((uVar10 & 1) != 0) {
    plVar11 = (long *)puVar9[2];
    if (plVar11 == (long *)0x0) {
      plVar11 = (long *)FUN__text__00400f80(4,0xf0);
      piVar2 = _DAT_008a3828;
      if (plVar11 != (long *)0x0) {
        plVar11[1] = 0;
        plVar11[2] = 0;
        piVar4 = *(int **)(piVar2 + 2);
        lVar8 = *(long *)(piVar2 + 4);
        *(long **)(piVar2 + 2) = plVar11;
        plVar11[3] = (long)piVar4;
        piVar3 = piVar2;
        if (lVar8 != 0) {
          piVar3 = piVar4;
        }
        *(long **)(piVar3 + 4) = plVar11;
        *piVar2 = *piVar2 + 1;
        lVar8 = _DAT_008a3f88;
        plVar11[8] = 0;
        plVar11[9] = 0;
        *(undefined2 *)(plVar11 + 0x1c) = 0;
        plVar11[0xc] = 0;
        plVar11[0xd] = 0;
        plVar11[0x12] = 0;
        plVar11[0x13] = 0;
        *plVar11 = lVar8 + 0x10;
        plVar11[0x16] = 0;
        plVar11[0x17] = 0;
        plVar11[0x1a] = 0;
        plVar11[0x1b] = 0;
        puVar9[2] = plVar11;
        plVar11[1] = (long)puVar9;
        iVar7 = (**(code **)(*plVar11 + 0x10))(plVar11,puVar9[0xb]);
        if (iVar7 == 1) goto LAB__text__00523120;
        (**(code **)*plVar11)(plVar11);
        FUN__text__00400fc0(4,plVar11);
        puVar9[2] = 0;
      }
    }
    else {
LAB__text__00523120:
      puVar15 = _DAT_008a4768;
      piVar2 = _DAT_008a3828;
      if ((char)plVar11[0x1c] == '\0') {
        plVar11 = (long *)*_DAT_008a4768;
        if (plVar11 == (long *)0x0) {
          lVar8 = _DAT_008a3f88 + 0x10;
          do {
            if (plVar11 == (long *)0x0) {
              plVar11 = (long *)FUN__text__00400f80(4,0xf0);
              if (plVar11 != (long *)0x0) {
                plVar11[1] = 0;
                plVar11[2] = 0;
                piVar4 = *(int **)(piVar2 + 2);
                lVar5 = *(long *)(piVar2 + 4);
                iVar7 = *piVar2;
                plVar11[3] = (long)piVar4;
                *(long **)(piVar2 + 2) = plVar11;
                piVar3 = piVar2;
                if (lVar5 != 0) {
                  piVar3 = piVar4;
                }
                *(long **)(piVar3 + 4) = plVar11;
                plVar11[8] = 0;
                plVar11[9] = 0;
                *(undefined2 *)(plVar11 + 0x1c) = 0x101;
                plVar11[0xc] = 0;
                plVar11[0xd] = 0;
                *piVar2 = iVar7 + 1;
                *plVar11 = lVar8;
                plVar11[0x12] = 0;
                plVar11[0x13] = 0;
                plVar11[0x16] = 0;
                plVar11[0x17] = 0;
                plVar11[0x1a] = 0;
                plVar11[0x1b] = 0;
              }
              *puVar15 = plVar11;
            }
          } while ((char)plVar11[0x1c] == '\0');
        }
        else if ((char)plVar11[0x1c] == '\0') {
          do {
                    /* WARNING: Do nothing block with infinite loop */
          } while( true );
        }
      }
      puVar15 = _DAT_008a45e0;
      if (((int)plVar11[0xd] != 1) || (*(long *)plVar11[0xc] != param_4)) {
        local_80 = (undefined1 *)0x0;
        local_78 = 0;
        FUN__text__0044b8a0(auStack_90,param_4,&uStack_61);
        FUN__text__004483c0(*puVar15,puVar9[0xb],auStack_90,0);
        if ((local_80 != (undefined1 *)0x0) &&
           (local_78 = local_78 & 0xffffffff00000000, local_80 != auStack_90)) {
          FUN__text__00400fc0(4);
        }
      }
    }
  }
  plVar11 = (long *)puVar9[10];
  if ((plVar11 == (long *)0x0) &&
     (plVar11 = (long *)FUN__text__00400f80(4,0x30), plVar11 != (long *)0x0)) {
    plVar11[1] = 0;
    plVar11[2] = 0;
    *plVar11 = 0;
    piVar4 = _DAT_008a3f98;
    piVar3 = *(int **)(_DAT_008a3f98 + 2);
    lVar8 = *(long *)(_DAT_008a3f98 + 4);
    *(long **)(_DAT_008a3f98 + 2) = plVar11;
    plVar11[4] = 0;
    plVar11[5] = 0;
    plVar11[3] = (long)piVar3;
    piVar2 = piVar4;
    if (lVar8 != 0) {
      piVar2 = piVar3;
    }
    *(long **)(piVar2 + 4) = plVar11;
    *piVar4 = *piVar4 + 1;
    lVar8 = _DAT_008a4c10;
    plVar11[4] = 0;
    *(undefined4 *)(plVar11 + 5) = 0;
    *(undefined1 *)((long)plVar11 + 0x2c) = 0;
    *plVar11 = lVar8 + 0x10;
    puVar9[10] = plVar11;
    plVar11[1] = (long)puVar9;
    iVar7 = (**(code **)(*plVar11 + 0x10))(plVar11,puVar9[0xb]);
    if (iVar7 != 1) {
      (**(code **)*plVar11)(plVar11);
      FUN__text__00400fc0(4,plVar11);
      plVar11 = (long *)0x0;
      puVar9[10] = 0;
    }
  }
  plVar12 = (long *)puVar9[4];
  if ((plVar12 == (long *)0x0) &&
     (plVar12 = (long *)FUN__text__00400f80(4,0xa0), plVar12 != (long *)0x0)) {
    FUN__text__0047d448(plVar12);
    puVar9[4] = plVar12;
    plVar12[1] = (long)puVar9;
    iVar7 = (**(code **)(*plVar12 + 0x10))(plVar12,puVar9[0xb]);
    if (iVar7 != 1) {
      (**(code **)*plVar12)(plVar12);
      FUN__text__00400fc0(4,plVar12);
      plVar12 = (long *)0x0;
      puVar9[4] = 0;
    }
  }
  plVar13 = (long *)puVar9[3];
  if (plVar13 == (long *)0x0) {
    plVar13 = (long *)FUN__text__00400f80(4,0x50);
    if (plVar13 == (long *)0x0) goto LAB__text__0052347c;
    plVar13[1] = 0;
    plVar13[2] = 0;
    *plVar13 = 0;
    plVar13[5] = 0;
    plVar13[8] = 0;
    plVar13[9] = 0;
    plVar13[6] = 0;
    plVar13[7] = 0;
    piVar4 = _DAT_008a3fa0;
    piVar3 = *(int **)(_DAT_008a3fa0 + 2);
    lVar8 = *(long *)(_DAT_008a3fa0 + 4);
    plVar13[3] = (long)piVar3;
    plVar13[4] = 0;
    piVar2 = piVar4;
    if (lVar8 != 0) {
      piVar2 = piVar3;
    }
    *(long **)(piVar4 + 2) = plVar13;
    *(long **)(piVar2 + 4) = plVar13;
    *piVar4 = *piVar4 + 1;
    lVar8 = _DAT_008a4d38;
    plVar13[4] = 0;
    plVar13[5] = 0;
    plVar13[6] = 0;
    plVar13[7] = 0;
    plVar13[8] = 0;
    *(undefined2 *)(plVar13 + 9) = 0;
    *plVar13 = lVar8 + 0x10;
    *(undefined1 *)((long)plVar13 + 0x4a) = 1;
    puVar9[3] = plVar13;
    plVar13[1] = (long)puVar9;
    iVar7 = (**(code **)(*plVar13 + 0x10))(plVar13,puVar9[0xb]);
    if (iVar7 != 1) {
      (**(code **)*plVar13)(plVar13);
      FUN__text__00400fc0(4,plVar13);
      puVar9[3] = 0;
      goto LAB__text__0052347c;
    }
  }
  if ((plVar11 != (long *)0x0) && (plVar12 != (long *)0x0)) {
    if (puVar9[8] != 0) {
      FUN__text__004471a8();
    }
    *(undefined4 *)(plVar11 + 5) = param_3;
    plVar1 = (long *)0x0;
    if (param_1 != 0) {
      plVar1 = plVar14;
    }
    FUN__text__0049158c(plVar11,plVar1);
    FUN__text__004932ac(plVar13,_DAT_008a3f90);
    *(undefined1 *)((long)plVar12 + 0x94) = 0;
    return puVar9;
  }
LAB__text__0052347c:
  FUN__text__00447940(*puVar15,param_2);
  iVar7 = *(int *)(puVar9 + 0xc);
  iVar6 = iVar7 + -1;
  *(int *)(puVar9 + 0xc) = iVar6;
  if (iVar6 != 0) {
    if (iVar6 != 1) {
      return (undefined8 *)0x0;
    }
    if (iVar7 == 0 && *(char *)((long)puVar9 + 100) != '\0') {
      return (undefined8 *)0x0;
    }
    if (*(char *)((long)puVar9 + 100) == '\0') {
      return (undefined8 *)0x0;
    }
  }
  FUN__text__004473f0(puVar9);
  if (*(int *)(puVar9 + 0xc) == 0) {
    (**(code **)*puVar9)(puVar9);
    FUN__text__00400fc0(4,puVar9);
  }
  return (undefined8 *)0x0;
}


