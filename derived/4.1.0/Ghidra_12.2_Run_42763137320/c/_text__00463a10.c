/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00463a10; name: FUN_.text__00463a10
 */


/* WARNING: Removing unreachable block (ram,0x00463afc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00463a10(undefined8 *param_1)

{
  long *plVar1;
  uint uVar2;
  ushort uVar3;
  undefined4 uVar4;
  uint uVar5;
  long lVar6;
  byte bVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  byte bVar11;
  long *plVar12;
  
  uVar3 = *(ushort *)(param_1 + 2);
  if (uVar3 != 0) {
    uVar2 = *(uint *)(param_1 + 1);
    if (uVar3 <= uVar2 && uVar2 != uVar3) {
      plVar12 = (long *)*param_1;
      lVar6 = (ulong)uVar2 * 8;
      uVar5 = 0;
      plVar1 = plVar12 + uVar2;
      do {
        lVar6 = lVar6 + -8;
        lVar8 = *plVar12;
        if (((*(uint *)(lVar8 + 0x313) & 0x2010000) == 0) &&
           ((*(ushort *)(lVar8 + 0x220) & 0x300) == 0)) {
          lVar9 = *(long *)(lVar8 + 0x2a8);
          if (lVar9 == 0) {
LAB__text__00463b0c:
            if ((*(uint *)(lVar8 + 0x313) & 0x78) != 0) goto LAB__text__00463b20;
          }
          else {
            lVar10 = *(long *)(lVar9 + 0x30);
            if (lVar10 == 0) {
              if ((*(byte *)(lVar9 + 0x58) >> 1 & 1) != 0) {
                bVar7 = 1;
LAB__text__00463b08:
                if (bVar7 == 0) goto LAB__text__00463b14;
              }
              goto LAB__text__00463b0c;
            }
            bVar7 = 1;
            bVar11 = 1;
            do {
              while (bVar7 == 0) {
                bVar7 = 0;
                if (bVar11 != 0) goto LAB__text__00463a94;
LAB__text__00463acc:
                bVar11 = 0;
                lVar10 = *(long *)(lVar10 + 0x20);
                if (lVar10 == 0) goto LAB__text__00463ad8;
              }
              bVar7 = *(byte *)(lVar10 + 0x198) >> 1 & 1;
              if (bVar11 == 0) goto LAB__text__00463acc;
LAB__text__00463a94:
              bVar11 = *(byte *)(lVar10 + 0x198) & 1;
              lVar10 = *(long *)(lVar10 + 0x20);
            } while (lVar10 != 0);
LAB__text__00463ad8:
            if ((*(byte *)(lVar9 + 0x58) >> 1 & 1) == 0) {
              if (bVar11 != 0) goto LAB__text__00463b0c;
            }
            else if (bVar11 == 1) goto LAB__text__00463b08;
          }
LAB__text__00463b14:
          uVar5 = uVar5 + 1;
        }
LAB__text__00463b20:
        plVar12 = plVar12 + 1;
      } while ((plVar12 != plVar1) && (uVar5 < uVar3));
      if (plVar12 != plVar1) {
        uVar4 = 1;
        if (param_1 == _DAT_008a4ce8) {
          uVar4 = 2;
        }
        do {
          lVar8 = *plVar12;
          if ((*(ushort *)(lVar8 + 0x315) & 0x201) == 0) {
            if (*(char *)((long)param_1 + 0x13) == '\0') {
              FUN__text__00476d04(lVar8,uVar4);
            }
            else {
              FUN__text__00476f24(lVar8,uVar4);
            }
          }
          plVar12 = plVar12 + 1;
          lVar6 = lVar6 + -8;
        } while (lVar6 != 0);
      }
    }
  }
  return;
}


