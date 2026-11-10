/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00415ee0; name: FUN_.text__00415ee0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00415ee0(long param_1)

{
  int *piVar1;
  int *piVar2;
  long lVar3;
  int iVar4;
  bool bVar5;
  int *piVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  undefined8 *puVar12;
  undefined8 *puVar11;
  long local_b0;
  long local_a8;
  long local_a0;
  long local_98;
  long local_90;
  long local_88;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  undefined1 uStack_31;
  
  plVar8 = &local_b0;
  lVar10 = 0;
  if (*(long *)(param_1 + 8) != 0) {
    lVar10 = *(long *)(param_1 + 8) + -0x18;
  }
  lVar7 = FUN__text__00478e58(lVar10 + 0x18);
  if (lVar7 == 0) {
    lVar7 = FUN__text__00409f50();
    if (lVar7 == 0) {
      return;
    }
    FUN__text__0045cc44(auStack_80,0,*(undefined8 *)(lVar10 + 0x20));
    FUN__text__0045cc84(&local_b0,auStack_80);
    for (lVar10 = *(long *)(param_1 + 0x30); lVar10 != 0; lVar10 = *(long *)(lVar10 + 0x20)) {
      plVar9 = (long *)FUN__text__0045c1d8(lVar10);
      if (((*plVar9 == local_b0) && (plVar9[1] == local_a8)) && (plVar9[2] == local_a0)) {
        if ((*(byte *)(*(long *)(lVar10 + 0x158) + 0x1bc) >> 4 & 1) == 0) goto LAB__text__00416058;
        bVar5 = false;
        goto LAB__text__00416018;
      }
    }
    bVar5 = true;
LAB__text__00416018:
    FUN__text__0045cc84(auStack_68,&local_b0);
    lVar10 = FUN__text__004164a0(auStack_68,&uStack_31);
    FUN__text__0045cca8(auStack_68);
    if ((bVar5) && (lVar10 != 0)) {
      FUN__text__0045b1a0(param_1,lVar10,0);
    }
  }
  else {
    if ((*(byte *)(lVar10 + 0x188) >> 3 & 1) != 0) {
      plVar8 = (long *)FUN__text__0044a4e4(*(undefined8 *)(lVar10 + 0x20));
      puVar11 = _DAT_008a4768;
      piVar6 = _DAT_008a3828;
      if ((char)plVar8[0x1c] == '\0') {
        plVar8 = (long *)*_DAT_008a4768;
        if (plVar8 == (long *)0x0) {
          lVar10 = _DAT_008a3f88 + 0x10;
          do {
            if (plVar8 == (long *)0x0) {
              plVar8 = (long *)FUN__text__00400f80(4,0xf0);
              if (plVar8 != (long *)0x0) {
                plVar8[1] = 0;
                plVar8[2] = 0;
                piVar2 = *(int **)(piVar6 + 2);
                lVar3 = *(long *)(piVar6 + 4);
                iVar4 = *piVar6;
                plVar8[3] = (long)piVar2;
                *(long **)(piVar6 + 2) = plVar8;
                piVar1 = piVar6;
                if (lVar3 != 0) {
                  piVar1 = piVar2;
                }
                *(long **)(piVar1 + 4) = plVar8;
                *(undefined2 *)(plVar8 + 0x1c) = 0x101;
                plVar8[8] = 0;
                plVar8[9] = 0;
                plVar8[0xc] = 0;
                plVar8[0xd] = 0;
                *piVar6 = iVar4 + 1;
                *plVar8 = lVar10;
                plVar8[0x12] = 0;
                plVar8[0x13] = 0;
                plVar8[0x16] = 0;
                plVar8[0x17] = 0;
                plVar8[0x1a] = 0;
                plVar8[0x1b] = 0;
              }
              *puVar11 = plVar8;
            }
          } while ((char)plVar8[0x1c] == '\0');
        }
        else if ((char)plVar8[0x1c] == '\0') {
          do {
                    /* WARNING: Do nothing block with infinite loop */
          } while( true );
        }
      }
      if ((int)plVar8[0xd] == 0) {
        return;
      }
      puVar11 = (undefined8 *)plVar8[0xc];
      do {
        puVar12 = puVar11 + 1;
        FUN__text__00415b40(lVar7,*puVar11,param_1,0);
        puVar11 = puVar12;
      } while (puVar12 != (undefined8 *)(plVar8[0xc] + (ulong)*(uint *)(plVar8 + 0xd) * 8));
      return;
    }
    FUN__text__0045cc44(auStack_80,lVar7,*(undefined8 *)(lVar10 + 0x20));
    FUN__text__0045cc84(&local_98,auStack_80);
    for (lVar10 = *(long *)(param_1 + 0x30); lVar10 != 0; lVar10 = *(long *)(lVar10 + 0x20)) {
      plVar8 = (long *)FUN__text__0045c1d8(lVar10);
      if (((*plVar8 == local_98) && (plVar8[1] == local_90)) && (plVar8[2] == local_88)) {
        if ((*(byte *)(*(long *)(lVar10 + 0x158) + 0x1bc) >> 4 & 1) == 0) goto LAB__text__00415f8c;
        bVar5 = false;
        goto LAB__text__00415f50;
      }
    }
    bVar5 = true;
LAB__text__00415f50:
    FUN__text__0045cc84(auStack_68,&local_98);
    lVar10 = FUN__text__004164a0(auStack_68,&uStack_31);
    FUN__text__0045cca8(auStack_68);
    if ((bVar5) && (lVar10 != 0)) {
      FUN__text__0045b1a0(param_1,lVar10,0);
    }
LAB__text__00415f8c:
    plVar8 = &local_98;
  }
LAB__text__00416058:
  FUN__text__0045cca8(plVar8);
  FUN__text__0045cca8(auStack_80);
  return;
}


