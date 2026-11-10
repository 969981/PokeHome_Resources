/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00466580; name: FUN_.text__00466580
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00466580(long param_1,long param_2,undefined8 param_3,long *param_4,long param_5)

{
  undefined4 uVar1;
  uint uVar2;
  byte bVar3;
  ulong uVar4;
  byte *pbVar5;
  byte *pbVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  ulong unaff_x23;
  byte *pbVar11;
  float *pfVar12;
  uint uVar13;
  ulong uVar14;
  ulong uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  uint local_80 [3];
  char local_74 [4];
  
  uVar2 = *(uint *)(param_1 + 0xd2);
  pbVar5 = *(byte **)(param_2 + 0x18);
  if (pbVar5 == (byte *)0x0) {
    pbVar11 = (byte *)0x0;
    pfVar12 = (float *)0x0;
  }
  else {
    pbVar11 = pbVar5 + 1;
    pfVar12 = (float *)(pbVar5 + ((ulong)*pbVar5 & 0xf8) + 8);
  }
  uVar1 = *(undefined4 *)(param_1 + 0x20);
  lVar10 = _DAT_008a4a70;
  do {
    pbVar6 = (byte *)0x0;
    if (pbVar5 != (byte *)0x0) {
      pbVar6 = pbVar5 + (ulong)*pbVar5 + 1;
    }
    if (pbVar11 == pbVar6) {
      return;
    }
    bVar3 = *pbVar11;
    if (bVar3 == 0xb) {
      if (*pfVar12 != 1.0) {
        uVar13 = *(uint *)(param_4 + 1);
        unaff_x23 = unaff_x23 & 0xffffffffffffff00 | (ulong)(*(long *)(param_1 + 0xc0) == param_2) |
                    0x3c;
        plVar7 = (long *)*param_4;
        plVar8 = plVar7;
        if (uVar13 == 0) {
LAB__text__004666e8:
          if (plVar8 != plVar7 + (ulong)uVar13 * 3) {
            *(float *)(plVar8 + 2) = *pfVar12;
            goto LAB__text__00466640;
          }
        }
        else {
          lVar9 = (ulong)uVar13 * 0x18;
          do {
            if ((*plVar8 == param_1) &&
               ((*(long *)(param_1 + 0xc0) == param_2) != ((*(byte *)(plVar8 + 1) & 1) == 0)))
            goto LAB__text__004666e8;
            plVar8 = plVar8 + 3;
            lVar9 = lVar9 + -0x18;
          } while (lVar9 != 0);
        }
        if (*(uint *)((long)param_4 + 0xc) <= uVar13) {
          uVar4 = FUN__text__00462990(param_4);
          if (((uVar4 & 1) == 0) || (*(uint *)((long)param_4 + 0xc) <= uVar13))
          goto LAB__text__00466640;
          uVar13 = *(uint *)(param_4 + 1);
          plVar7 = (long *)*param_4;
        }
        *(uint *)(param_4 + 1) = uVar13 + 1;
        if (plVar7 != (long *)0x0) {
          plVar7 = plVar7 + (ulong)uVar13 * 3;
          *plVar7 = param_1;
          plVar7[1] = unaff_x23;
          *(float *)(plVar7 + 2) = *pfVar12;
        }
      }
    }
    else {
      uVar15 = (ulong)(bVar3 >> 6);
      uVar4 = 1L << ((ulong)bVar3 & 0x3f);
      if (((*(ulong *)(param_5 + 0x90 + uVar15 * 8) & uVar4) != 0) &&
         (uVar13 = *(uint *)(lVar10 + (ulong)(uint)bVar3 * 4), uVar14 = (ulong)uVar13,
         uVar13 != 0x1a)) {
        fVar18 = *pfVar12;
        if ((*_DAT_008a45a8 == 1) && ((*(ulong *)(param_5 + 0xa0 + uVar15 * 8) & uVar4) != 0)) {
          if (fVar18 != 0.0) {
            local_74[0] = '\0';
            local_80[0] = uVar2 >> 1 & 0x10000 | (uint)bVar3 | 0x100;
            local_80[1] = 0;
            local_80[2] = uVar1;
            lVar9 = FUN__text__004626a0(param_5 + 0x68,local_80,local_74);
            lVar10 = _DAT_008a4a70;
            if (lVar9 == 0) {
              fVar18 = 0.0;
              fVar16 = 0.0;
              uVar15 = *(ulong *)(param_5 + 0xb0 + uVar15 * 8);
            }
            else {
              if (local_74[0] == '\0') {
                fVar16 = 0.0;
              }
              else {
                fVar16 = *(float *)(lVar9 + 0xc);
              }
              fVar18 = fVar16 + fVar18;
              *(float *)(lVar9 + 0xc) = fVar18;
              uVar15 = *(ulong *)(param_5 + 0xb0 + uVar15 * 8);
            }
            if (((uVar15 & uVar4) != 0) ||
               ((fVar17 = *(float *)(param_5 + uVar14 * 4), fVar16 == fVar17 && (fVar18 < fVar17))))
            {
              *(ushort *)(param_5 + 0xc2) = *(ushort *)(param_5 + 0xc2) | 0x400;
            }
            else if (fVar17 < fVar18) {
              *(float *)(param_5 + uVar14 * 4) = fVar18;
            }
          }
        }
        else {
          *(float *)(param_5 + uVar14 * 4) = *(float *)(param_5 + uVar14 * 4) + fVar18;
        }
      }
    }
LAB__text__00466640:
    pbVar5 = *(byte **)(param_2 + 0x18);
    pbVar11 = pbVar11 + 1;
    pfVar12 = pfVar12 + 4;
  } while( true );
}


