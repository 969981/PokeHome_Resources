/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00473390; name: FUN_.text__00473390
 */


void FUN__text__00473390(void)

{
  undefined8 *puVar1;
  int iVar2;
  ushort uVar3;
  int iVar4;
  long lVar5;
  uint uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  bool bVar11;
  
  if (DAT_00aea810 != (undefined8 *)0x0) {
    puVar10 = (undefined8 *)0x0;
    puVar8 = DAT_00aea810;
    do {
      iVar2 = *(int *)(puVar8 + 2);
      bVar11 = false;
      puVar1 = puVar8;
      puVar9 = puVar10;
      do {
        puVar7 = puVar1;
        if (iVar2 != *(int *)(puVar7 + 2)) break;
        if (((*(ushort *)((long)puVar7 + 0x14) & 0x1fe) == 0) &&
           ((lVar5 = puVar7[1], (*(byte *)(lVar5 + 0x314) >> 4 & 1) == 0 ||
            (*(int *)(lVar5 + 0x380) != -1)))) {
          if (*(long *)(lVar5 + 0x2a8) == 0) {
LAB__text__004734e0:
            puVar10 = &DAT_00aea810;
            if (DAT_00aea810 != puVar7) {
              puVar10 = puVar9;
            }
            *puVar10 = *puVar7;
            if (DAT_00aea818 == puVar7) {
              DAT_00aea818 = puVar9;
            }
            if ((puVar7 < DAT_00aea828) || (DAT_00aea828 + (ulong)DAT_00aea830 * 3 <= puVar7)) {
              FUN__text__00400fc0(5,puVar7);
              DAT_00aea834 = DAT_00aea834 + -1;
              puVar10 = (undefined8 *)0x0;
              puVar8 = DAT_00aea810;
            }
            else {
              *puVar7 = DAT_00aea820;
              DAT_00aea834 = DAT_00aea834 + -1;
              puVar10 = (undefined8 *)0x0;
              puVar8 = DAT_00aea810;
              DAT_00aea820 = puVar7;
            }
            goto joined_r0x004735a0;
          }
          iVar4 = FUN__text__00416370();
          if (iVar4 == 0x3f) {
            bVar11 = true;
          }
          else {
            if (iVar4 == 2) goto LAB__text__004734e0;
            *(ushort *)((long)puVar7 + 0x14) = *(ushort *)((long)puVar7 + 0x14) | 0x100;
          }
        }
        puVar1 = (undefined8 *)*puVar7;
        puVar9 = puVar7;
      } while ((undefined8 *)*puVar7 != (undefined8 *)0x0);
      if (bVar11) {
        do {
          puVar10 = puVar8;
          puVar8 = (undefined8 *)*puVar10;
          if (puVar8 == (undefined8 *)0x0) {
            return;
          }
        } while (iVar2 == *(int *)(puVar8 + 2));
      }
      else {
        uVar3 = *(ushort *)((long)puVar8 + 0x14);
        uVar6 = (uint)uVar3;
        if ((uVar3 >> 8 & 1) == 0) {
          if ((uVar3 & 0xfe) == 0) {
joined_r0x0047354c:
            if ((uVar3 >> 8 & 1) == 0) goto LAB__text__004733cc;
LAB__text__00473550:
            if ((uVar6 & 0xff) < 6) {
                    /* WARNING: Could not emulate address calculation at 0x00473568 */
                    /* WARNING: Treating indirect jump as call */
              (*(code *)(&UNK__text__00473574 +
                        (ulong)*(byte *)((ulong)(uVar6 & 0xff) + 0x73b512) * 4))();
              return;
            }
          }
          else {
            lVar5 = FUN__text__00415a40(puVar8 + 1);
            if (lVar5 != 0) {
              uVar3 = *(ushort *)((long)puVar8 + 0x14);
              uVar6 = (uint)uVar3;
              goto joined_r0x0047354c;
            }
          }
          puVar9 = (undefined8 *)*puVar8;
          puVar1 = &DAT_00aea810;
          if (DAT_00aea810 != puVar8) {
            puVar1 = puVar10;
          }
          *puVar1 = puVar9;
          if (DAT_00aea818 == puVar8) {
            DAT_00aea818 = puVar10;
            if (DAT_00aea828 <= puVar8) goto LAB__text__00473620;
LAB__text__00473640:
            FUN__text__00400fc0(5,puVar8);
          }
          else {
            if (puVar8 < DAT_00aea828) goto LAB__text__00473640;
LAB__text__00473620:
            if (DAT_00aea828 + (ulong)DAT_00aea830 * 3 <= puVar8) goto LAB__text__00473640;
            *puVar8 = DAT_00aea820;
            DAT_00aea820 = puVar8;
          }
          DAT_00aea834 = DAT_00aea834 + -1;
          puVar8 = puVar9;
        }
        else {
          if ((uVar3 >> 8 & 1) != 0) goto LAB__text__00473550;
LAB__text__004733cc:
          puVar10 = puVar8;
          puVar8 = (undefined8 *)*puVar8;
        }
      }
joined_r0x004735a0:
    } while (puVar8 != (undefined8 *)0x0);
  }
  return;
}


