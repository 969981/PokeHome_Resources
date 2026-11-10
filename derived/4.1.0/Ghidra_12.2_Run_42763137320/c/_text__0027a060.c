/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0027a060; name: FUN_.text__0027a060
 */


void FUN__text__0027a060(long param_1,long param_2)

{
  undefined4 *puVar1;
  long lVar2;
  short *psVar3;
  byte bVar4;
  char cVar5;
  short sVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  uint uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  int iVar14;
  ulong uVar15;
  long lVar16;
  ushort *puVar17;
  
  uVar9 = 0;
  uVar15 = 0;
  lVar12 = *(long *)(*(long *)(param_2 + 8) + 400);
  uVar11 = *(ulong *)(*(long *)(param_2 + 8) + 0x180) / 0x18;
  do {
    lVar16 = param_1 + uVar9 * 0x10;
    iVar14 = (int)uVar15;
    lVar13 = (long)iVar14;
    puVar1 = (undefined4 *)(lVar16 + 0x7b238);
    *puVar1 = 0;
    *(long *)(lVar16 + 0x7b240) = lVar12 + (long)iVar14 * 0x18;
    if (lVar13 < (long)uVar11) {
      lVar16 = 0;
      puVar17 = (ushort *)(lVar12 + (long)iVar14 * 0x18);
      do {
        if (uVar9 != *puVar17) {
          uVar15 = lVar13 + lVar16;
          break;
        }
        lVar16 = lVar16 + 1;
        uVar15 = lVar13 + lVar16;
        *puVar1 = (int)lVar16;
        puVar17 = puVar17 + 0xc;
      } while ((long)uVar15 < (long)uVar11);
      uVar15 = uVar15 & 0xffffffff;
    }
    uVar9 = uVar9 + 1;
  } while (uVar9 != 3000);
  lVar12 = 0;
  do {
    lVar16 = param_1 + lVar12 * 0x10;
    if (*(uint *)(lVar16 + 0x7b238) != 0) {
      lVar13 = 0;
      lVar2 = lVar16 + 0x86db8;
      uVar9 = 0;
      do {
        psVar3 = (short *)(*(long *)(lVar16 + 0x7b240) + lVar13);
        bVar4 = *(byte *)(psVar3 + 1);
        uVar8 = (uint)bVar4;
        if (*psVar3 == 0x365) {
          uVar8 = (uint)bVar4 * 0x25 >> 8;
          uVar8 = uVar8 + ((bVar4 - uVar8 & 0xfe) >> 1) >> 2;
        }
        bVar4 = *(byte *)((long)psVar3 + 3);
        sVar6 = psVar3[2];
        cVar5 = *(char *)((long)psVar3 + 5);
        uVar7 = FUN__text__00325c10(*psVar3,uVar8);
        uVar8 = 0x8001;
        if (cVar5 != '\0') {
          uVar8 = 0x8081;
        }
        uVar15 = uVar9 >> 6 & 0x3ff;
        if ((uVar8 & uVar7) == 0) {
LAB__text__0027a180:
          uVar11 = 1L << (uVar9 & 0x3f);
LAB__text__0027a184:
          uVar11 = *(ulong *)(lVar2 + uVar15 * 8) & (uVar11 ^ 0xffffffffffffffff);
        }
        else {
          if (bVar4 < 4) {
                    /* WARNING: Could not emulate address calculation at 0x0027a218 */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)(&UNK__text__0027a224 + (ulong)*(byte *)((ulong)bVar4 + 0x72d3b8) * 4))();
            return;
          }
          uVar8 = 0;
          if (cVar5 != '\0') {
            uVar8 = 0x80;
          }
          if ((uVar8 & uVar7) == 0) goto LAB__text__0027a180;
          if ((char)sVar6 != '\0') {
            uVar8 = 0x10;
            if (bVar4 != 1) {
              uVar8 = 0x58;
            }
            uVar10 = 8;
            if (bVar4 != 0) {
              uVar10 = uVar8;
            }
            if (cVar5 != '\0') {
              if ((uVar7 >> 8 & 1) == 0) goto LAB__text__0027a180;
              uVar10 = uVar10 | 0x80;
            }
            if ((uVar10 & uVar7) == 0) goto LAB__text__0027a180;
          }
          uVar11 = 1L << (uVar9 & 0x3f);
          if ((cVar5 != '\0') && ((uVar7 >> 7 & 1) == 0)) goto LAB__text__0027a184;
          uVar11 = *(ulong *)(lVar2 + uVar15 * 8) | uVar11;
        }
        *(ulong *)(lVar2 + uVar15 * 8) = uVar11;
        uVar9 = uVar9 + 1;
        lVar13 = lVar13 + 0x18;
      } while (uVar9 < *(uint *)(lVar16 + 0x7b238));
    }
    lVar12 = lVar12 + 1;
    if (lVar12 == 3000) {
      return;
    }
  } while( true );
}


