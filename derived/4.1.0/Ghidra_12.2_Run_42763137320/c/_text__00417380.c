/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00417380; name: FUN_.text__00417380
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00417380(long param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  long lVar4;
  uint uVar5;
  int *piVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long *plVar9;
  uint uVar10;
  long lVar11;
  int iVar12;
  ulong uVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  long local_50;
  undefined8 local_48;
  
  lVar11 = *(long *)(param_1 + 8);
  if (lVar11 != 0) {
    if ((*(byte *)(lVar11 + 0x170) >> 3 & 1) != 0) {
      plVar9 = (long *)FUN__text__0044a4e4();
      puVar7 = _DAT_008a4768;
      piVar6 = _DAT_008a3828;
      if ((char)plVar9[0x1c] == '\0') {
        plVar9 = (long *)*_DAT_008a4768;
        if (plVar9 == (long *)0x0) {
          lVar11 = _DAT_008a3f88 + 0x10;
          do {
            if (plVar9 == (long *)0x0) {
              plVar9 = (long *)FUN__text__00400f80(4,0xf0);
              if (plVar9 != (long *)0x0) {
                plVar9[1] = 0;
                plVar9[2] = 0;
                piVar3 = *(int **)(piVar6 + 2);
                lVar4 = *(long *)(piVar6 + 4);
                iVar12 = *piVar6;
                plVar9[3] = (long)piVar3;
                *(long **)(piVar6 + 2) = plVar9;
                piVar2 = piVar6;
                if (lVar4 != 0) {
                  piVar2 = piVar3;
                }
                *(long **)(piVar2 + 4) = plVar9;
                *(undefined2 *)(plVar9 + 0x1c) = 0x101;
                plVar9[8] = 0;
                plVar9[9] = 0;
                plVar9[0xc] = 0;
                plVar9[0xd] = 0;
                *piVar6 = iVar12 + 1;
                *plVar9 = lVar11;
                plVar9[0x12] = 0;
                plVar9[0x13] = 0;
                plVar9[0x16] = 0;
                plVar9[0x17] = 0;
                plVar9[0x1a] = 0;
                plVar9[0x1b] = 0;
              }
              *puVar7 = plVar9;
            }
          } while ((char)plVar9[0x1c] == '\0');
        }
        else if ((char)plVar9[0x1c] == '\0') {
          do {
                    /* WARNING: Do nothing block with infinite loop */
          } while( true );
        }
      }
      uVar8 = *(ulong *)(param_1 + 0x30);
      auVar15._8_8_ = 0;
      auVar15._0_8_ = uVar8;
joined_r0x00417418:
      if (uVar8 == 0) {
        return;
      }
      do {
        local_48 = auVar15._8_8_;
        local_50 = auVar15._0_8_;
        if (*(int *)(local_50 + 0x194) == 0) {
          uVar10 = *(uint *)(plVar9 + 0xd);
          if (uVar10 == 0) goto LAB__text__00417478;
          uVar8 = *(ulong *)(local_50 + 0x170);
          iVar12 = 0;
          while( true ) {
            iVar1 = iVar12 + (uVar10 >> 1);
            uVar13 = *(ulong *)(plVar9[0xc] + (long)iVar1 * 8);
            if (uVar13 == uVar8) break;
            if (uVar13 < uVar8) {
              iVar12 = iVar1 + 1;
            }
            uVar5 = uVar10 - (uVar13 < uVar8);
            uVar10 = uVar5 >> 1;
            if (uVar5 < 2) goto LAB__text__00417478;
          }
        }
        auVar15._8_8_ = local_50;
        auVar15._0_8_ = *(long *)(local_50 + 0x20);
        if (*(long *)(local_50 + 0x20) == 0) {
          return;
        }
      } while( true );
    }
    lVar11 = *(long *)(*(long *)(lVar11 + 8) + 0x58);
    uVar8 = *(ulong *)(param_1 + 0x30);
    auVar14._8_8_ = 0;
    auVar14._0_8_ = uVar8;
    while (uVar8 != 0) {
      while( true ) {
        local_48 = auVar14._8_8_;
        local_50 = auVar14._0_8_;
        if ((*(int *)(local_50 + 0x194) == 0) && (*(long *)(local_50 + 0x170) != lVar11)) break;
        auVar14._8_8_ = local_50;
        auVar14._0_8_ = *(long *)(local_50 + 0x20);
        if (*(long *)(local_50 + 0x20) == 0) {
          return;
        }
      }
      auVar14 = FUN__text__00458f70(param_1,&local_50);
      uVar8 = auVar14._0_8_;
    }
  }
  return;
LAB__text__00417478:
  auVar15 = FUN__text__00458f70(param_1,&local_50);
  uVar8 = auVar15._0_8_;
  goto joined_r0x00417418;
}


