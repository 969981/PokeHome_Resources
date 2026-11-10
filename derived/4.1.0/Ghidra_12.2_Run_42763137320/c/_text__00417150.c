/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00417150; name: FUN_.text__00417150
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00417150(void)

{
  int *piVar1;
  undefined1 *puVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined8 *puVar10;
  
  puVar2 = _DAT_008a4da0;
  if (DAT_00aea270 != 0) {
    if (DAT_00aea228 != 0) {
      puVar7 = DAT_00aea220;
      do {
        while (plVar9 = (long *)*puVar7, DAT_00aea270 != 1) {
LAB__text__00417220:
          if (plVar9 != (long *)0x0) {
LAB__text__00417224:
            if (plVar9[6] == 0) {
              if (plVar9[0xd] == 0) {
                if (plVar9[0xe] != 0) goto LAB__text__004172dc;
              }
              else if (*(long *)(plVar9[0xd] + 0x80) == 0) {
LAB__text__004172dc:
                lVar5 = FUN__text__0040a740();
                if ((lVar5 != 0) &&
                   ((*(long **)(lVar5 + 0x548) == plVar9 ||
                    (*(long **)(lVar5 + 0x548) == (long *)0x0)))) {
                  FUN__text__00406c04();
                }
              }
            }
            FUN__text__004d3fb0(plVar9);
            FUN__text__00400fc0(5,plVar9);
          }
          uVar4 = DAT_00aea228 - 1;
          if (puVar7 < DAT_00aea220 + uVar4) {
            memmove(puVar7,puVar7 + 1,
                    (ulong)(uint)((int)(DAT_00aea220 + uVar4) - (int)puVar7) & 0xfffffff8);
            uVar4 = DAT_00aea228 - 1;
          }
          DAT_00aea228 = uVar4;
          *puVar2 = 1;
          if (puVar7 == DAT_00aea220 + uVar4) goto LAB__text__00417318;
        }
        FUN__text__00417380(plVar9);
        lVar5 = plVar9[6];
        if (lVar5 != 0) {
          iVar6 = 0;
          do {
            piVar1 = (int *)(lVar5 + 0x194);
            lVar5 = *(long *)(lVar5 + 0x20);
            if (*piVar1 == 0) {
              iVar6 = iVar6 + 1;
            }
          } while (lVar5 != 0);
          if (iVar6 != 0) goto LAB__text__004171f8;
          goto LAB__text__00417220;
        }
        if (((plVar9[0xd] != 0) && (*(long *)(plVar9[0xd] + 0x80) != 0)) ||
           (lVar5 = FUN__text__0040a740(), lVar5 == 0)) goto LAB__text__00417224;
        uVar4 = *(uint *)(lVar5 + 0x60);
        if ((uVar4 & 0xf00) != 0x300) {
          uVar3 = (**(code **)(*plVar9 + 0x70))(plVar9);
          if (uVar4 == uVar3) goto LAB__text__004171f8;
          goto LAB__text__00417224;
        }
        if (uVar4 != *(uint *)(plVar9 + 0x2c)) goto LAB__text__00417224;
LAB__text__004171f8:
        puVar7 = puVar7 + 1;
        *(byte *)((long)plVar9 + 0x1bc) = *(byte *)((long)plVar9 + 0x1bc) | 0x10;
      } while (puVar7 != DAT_00aea220 + DAT_00aea228);
    }
LAB__text__00417318:
    if (DAT_00aea238 != 0) {
      puVar7 = DAT_00aea230;
      do {
        puVar10 = puVar7 + 1;
        uVar8 = *puVar7;
        FUN__text__00417380(uVar8);
        FUN__text__00415ee0(uVar8);
        puVar7 = puVar10;
      } while (puVar10 != DAT_00aea230 + DAT_00aea238);
    }
    DAT_00aea270 = 0;
  }
  return;
}


