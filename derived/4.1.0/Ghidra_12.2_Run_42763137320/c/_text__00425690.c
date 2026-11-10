/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00425690; name: FUN_.text__00425690
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN__text__00425690(long *param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  uint *puVar8;
  code *pcVar9;
  uint *puVar10;
  long lVar11;
  int *piVar12;
  int *piVar13;
  uint uVar14;
  ulong uVar15;
  long local_68;
  long lStack_60;
  long local_58;
  
  puVar7 = _DAT_008a47c0;
  puVar6 = _DAT_008a47a8;
  if (param_1 != (long *)0x0) {
    lVar1 = _DAT_008a4670 + 0x10;
    do {
      if (*(byte *)(param_1 + 1) == 1) {
        uVar14 = *(uint *)(puVar6 + 1);
        uVar15 = (ulong)uVar14;
        uVar5 = (int)param_1[2] * 0x10000 + *(int *)((long)param_1 + 0xc) * 0x10 | 1;
        puVar8 = (uint *)*puVar6;
        puVar10 = puVar8;
        if (uVar14 == 0) {
LAB__text__00425780:
          if (puVar10 != puVar8 + uVar15 * 10) goto LAB__text__004257f4;
        }
        else {
          lVar11 = uVar15 * 0x28;
          do {
            if (*puVar10 == uVar5) goto LAB__text__00425780;
            puVar10 = puVar10 + 10;
            lVar11 = lVar11 + -0x28;
          } while (lVar11 != 0);
        }
        if ((param_1[10] != 0) && (param_1[0xb] != 0)) {
          puVar10 = puVar8;
          if (uVar14 == 0) {
LAB__text__00425814:
            if (puVar10 == puVar8 + uVar15 * 10) goto LAB__text__00425824;
          }
          else {
            lVar11 = uVar15 * 0x28;
            do {
              if (*puVar10 == uVar5) goto LAB__text__00425814;
              puVar10 = puVar10 + 10;
              lVar11 = lVar11 + -0x28;
            } while (lVar11 != 0);
LAB__text__00425824:
            if (*(uint *)((long)puVar6 + 0xc) <= uVar14) {
              uVar15 = FUN__text__00425f70(puVar6);
              if (((uVar15 & 1) == 0) || (*(uint *)((long)puVar6 + 0xc) <= uVar14))
              goto LAB__text__004256e0;
              uVar14 = *(uint *)(puVar6 + 1);
              puVar8 = (uint *)*puVar6;
            }
            *(uint *)(puVar6 + 1) = uVar14 + 1;
            if (puVar8 == (uint *)0x0) goto LAB__text__004256e0;
            puVar10 = puVar8 + (ulong)uVar14 * 10;
            *puVar10 = uVar5;
          }
          lVar11 = param_1[10];
          lVar3 = param_1[0xb];
          lVar4 = param_1[0xd];
          *(long *)(puVar10 + 6) = param_1[0xc];
          *(long *)(puVar10 + 8) = lVar4;
          *(long *)(puVar10 + 2) = lVar11;
          *(long *)(puVar10 + 4) = lVar3;
          pcVar9 = (code *)param_1[7];
          goto joined_r0x004257f8;
        }
      }
      else {
        iVar2 = (*(byte *)(param_1 + 1) & 0xf | *(int *)((long)param_1 + 0xc) << 4) +
                (int)param_1[2] * 0x10000;
        piVar12 = (int *)*puVar7;
        uVar14 = *(uint *)(puVar7 + 1);
        piVar13 = piVar12;
        if (uVar14 == 0) {
LAB__text__004257d0:
          if (piVar13 == piVar12 + (ulong)uVar14 * 8) goto LAB__text__004257dc;
        }
        else {
          lVar11 = (ulong)uVar14 << 5;
          do {
            if (*piVar13 == iVar2) goto LAB__text__004257d0;
            piVar13 = piVar13 + 8;
            lVar11 = lVar11 + -0x20;
          } while (lVar11 != 0);
LAB__text__004257dc:
          local_68 = param_1[3];
          lStack_60 = param_1[4];
          local_58 = param_1[9];
          lVar11 = FUN__text__004259d0(puVar7,iVar2,&local_68);
          if (lVar11 == 0) goto LAB__text__004256e0;
        }
LAB__text__004257f4:
        pcVar9 = (code *)param_1[7];
joined_r0x004257f8:
        if (pcVar9 != (code *)0x0) {
          local_68 = lVar1;
          (*pcVar9)(&local_68,1,param_1[8]);
        }
      }
LAB__text__004256e0:
      param_1 = (long *)*param_1;
    } while (param_1 != (long *)0x0);
  }
  return 1;
}


