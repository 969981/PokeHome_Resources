/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00473680; name: FUN_.text__00473680
 */


/* WARNING: Type propagation algorithm not settling */

void FUN__text__00473680(uint param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  float fVar9;
  float fVar10;
  
  if (DAT_00aea800 != 0) {
    lVar8 = DAT_00aea800;
    lVar6 = 0;
    do {
      while( true ) {
        lVar5 = lVar8;
        lVar8 = 0;
        if (*(long *)(lVar5 + 8) != 0) {
          lVar8 = *(long *)(lVar5 + 8) + -0x18;
        }
        if (((*(uint *)(lVar8 + 0x313) >> 0xc & 1) == 0) || (*(int *)(lVar8 + 0x380) != -1)) break;
        if (DAT_00aea810 != (undefined8 *)0x0) {
          puVar7 = (undefined8 *)0x0;
          puVar3 = DAT_00aea810;
          do {
            while( true ) {
              puVar4 = puVar3;
              puVar3 = (undefined8 *)*puVar4;
              lVar8 = 0;
              if (puVar4[1] != 0) {
                lVar8 = puVar4[1] + 0x18;
              }
              if (lVar8 == *(long *)(lVar5 + 8)) break;
joined_r0x00473794:
              puVar7 = puVar4;
              if (puVar3 == (undefined8 *)0x0) goto LAB__text__004737e0;
            }
            puVar1 = &DAT_00aea810;
            if (DAT_00aea810 != puVar4) {
              puVar1 = puVar7;
            }
            *puVar1 = puVar3;
            if (DAT_00aea818 == puVar4) {
              DAT_00aea818 = puVar7;
              if (puVar4 < DAT_00aea828 || DAT_00aea828 + (ulong)DAT_00aea830 * 3 <= puVar4)
              goto LAB__text__0047377c;
            }
            else if (puVar4 < DAT_00aea828 || DAT_00aea828 + (ulong)DAT_00aea830 * 3 <= puVar4) {
LAB__text__0047377c:
              FUN__text__00400fc0(5);
              DAT_00aea834 = DAT_00aea834 + -1;
              puVar4 = puVar7;
              goto joined_r0x00473794;
            }
            *puVar4 = DAT_00aea820;
            DAT_00aea834 = DAT_00aea834 + -1;
            DAT_00aea820 = puVar4;
          } while (puVar3 != (undefined8 *)0x0);
        }
LAB__text__004737e0:
        lVar8 = *(long *)(lVar5 + 0x68);
        plVar2 = &DAT_00aea800;
        if (DAT_00aea800 != lVar5) {
          plVar2 = (long *)(lVar6 + 0x68);
        }
        *plVar2 = lVar8;
        if (DAT_00aea7f8 == lVar5) {
          DAT_00aea7f8 = lVar6;
          FUN__text__004061f0(lVar5,0);
        }
        else {
          FUN__text__004061f0(lVar5,0);
        }
        if (lVar8 == 0) {
          return;
        }
      }
      if (((*(uint *)(lVar8 + 0x313) >> 0xe & 1) == 0) && (-1 < *(int *)(lVar8 + 0x330))) {
        fVar9 = *(float *)(lVar8 + 700) * (float)param_1;
        fVar10 = 0.5;
        if (fVar9 <= 0.0) {
          fVar10 = -0.5;
        }
        *(int *)(lVar8 + 0x330) = *(int *)(lVar8 + 0x330) - (int)(fVar10 + fVar9);
      }
      lVar8 = *(long *)(lVar5 + 0x68);
      lVar6 = lVar5;
    } while (*(long *)(lVar5 + 0x68) != 0);
  }
  return;
}


