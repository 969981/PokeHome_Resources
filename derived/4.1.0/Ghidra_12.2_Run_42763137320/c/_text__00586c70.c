/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00586c70; name: FUN_.text__00586c70
 */


void FUN__text__00586c70(undefined1 *param_1,long param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  undefined1 uVar3;
  byte bVar4;
  undefined1 uVar5;
  uint uVar6;
  long lVar7;
  int iVar8;
  ulong uVar9;
  uint uVar10;
  undefined1 *puVar11;
  uint uVar12;
  uint uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  undefined1 *__src;
  undefined1 *puVar18;
  undefined1 auStack_d0 [128];
  
  uVar2 = param_3 & 0xffff;
  puVar18 = auStack_d0 + (0x80 - ((ulong)(uVar2 + 0xf) & 0x1fff0));
  if (uVar2 < 2) {
    __src = param_1;
  }
  else {
    uVar6 = 1;
    puVar11 = puVar18;
    __src = param_1;
    do {
      puVar18 = __src;
      __src = puVar11;
      uVar13 = 0;
      uVar9 = 0;
      uVar12 = uVar6;
      do {
        uVar1 = uVar13 + uVar6 * 2;
        if (uVar2 <= uVar1) {
          uVar1 = uVar2;
        }
        uVar10 = uVar12;
        if (uVar13 < uVar12) {
          if (uVar12 < uVar1) {
            do {
              uVar17 = (ulong)uVar13;
              bVar4 = puVar18[(int)uVar10];
              if (*(ushort *)(param_2 + (ulong)(byte)puVar18[uVar17] * 2) <
                  *(ushort *)(param_2 + (ulong)bVar4 * 2)) {
                uVar13 = uVar13 + 1;
                bVar4 = puVar18[uVar17];
              }
              else {
                uVar10 = uVar10 + 1;
              }
              __src[uVar9 & 0xffff] = bVar4;
              uVar9 = (ulong)((int)uVar9 + 1);
            } while ((int)uVar13 < (int)uVar12 && (int)uVar10 < (int)uVar1);
          }
          if ((int)uVar13 < (int)uVar12) goto LAB__text__00586d74;
        }
        else if (uVar13 < uVar12) {
LAB__text__00586d74:
          uVar15 = (ulong)(int)uVar13;
          uVar14 = (ulong)(uVar12 - uVar13) & 3;
          uVar17 = uVar15;
          if ((uVar12 - uVar13 & 3) == 0) {
            uVar14 = ~uVar15 + (long)(int)uVar12;
          }
          else {
            uVar16 = uVar9;
            do {
              puVar11 = puVar18 + uVar17;
              uVar17 = uVar17 + 1;
              uVar9 = (ulong)((int)uVar16 + 1);
              uVar14 = uVar14 - 1;
              __src[uVar16 & 0xffff] = *puVar11;
              uVar16 = uVar9;
            } while (uVar14 != 0);
            uVar14 = ~uVar15 + (long)(int)uVar12;
          }
          if (2 < uVar14) {
            lVar7 = (long)(int)uVar12 - uVar17;
            puVar11 = puVar18 + uVar17 + 3;
            do {
              lVar7 = lVar7 + -4;
              __src[uVar9 & 0xffff] = puVar11[-3];
              iVar8 = (int)uVar9;
              __src[(ulong)(iVar8 + 1) & 0xffff] = puVar11[-2];
              uVar3 = *puVar11;
              uVar5 = puVar11[-1];
              puVar11 = puVar11 + 4;
              __src[(ulong)(iVar8 + 3) & 0xffff] = uVar3;
              uVar9 = (ulong)(iVar8 + 4);
              __src[(ulong)(iVar8 + 2) & 0xffff] = uVar5;
            } while (lVar7 != 0);
          }
        }
        if ((int)uVar10 < (int)uVar1) {
          uVar15 = (ulong)(int)uVar10;
          uVar14 = (ulong)(uVar1 - uVar10) & 3;
          uVar17 = uVar15;
          if ((uVar1 - uVar10 & 3) != 0) {
            uVar16 = uVar9;
            do {
              puVar11 = puVar18 + uVar17;
              uVar17 = uVar17 + 1;
              uVar9 = (ulong)((int)uVar16 + 1);
              uVar14 = uVar14 - 1;
              __src[uVar16 & 0xffff] = *puVar11;
              uVar16 = uVar9;
            } while (uVar14 != 0);
          }
          if (2 < ~uVar15 + (ulong)uVar1) {
            lVar7 = uVar1 - uVar17;
            puVar11 = puVar18 + uVar17 + 3;
            do {
              lVar7 = lVar7 + -4;
              __src[uVar9 & 0xffff] = puVar11[-3];
              iVar8 = (int)uVar9;
              __src[(ulong)(iVar8 + 1) & 0xffff] = puVar11[-2];
              uVar3 = *puVar11;
              uVar5 = puVar11[-1];
              puVar11 = puVar11 + 4;
              __src[(ulong)(iVar8 + 3) & 0xffff] = uVar3;
              uVar9 = (ulong)(iVar8 + 4);
              __src[(ulong)(iVar8 + 2) & 0xffff] = uVar5;
            } while (lVar7 != 0);
          }
        }
        uVar13 = (uint)uVar9 & 0xffff;
        uVar12 = uVar6 + uVar13;
      } while (uVar12 < uVar2);
      if (uVar13 < (param_3 & 0xffff)) {
        memcpy(__src + (uVar9 & 0xffff),puVar18 + (uVar9 & 0xffff),
               ((ulong)(~(uint)uVar9 + param_3) & 0xffff) + 1);
      }
      uVar6 = uVar6 * 2 & 0xfffe;
      puVar11 = puVar18;
    } while (uVar6 < uVar2);
  }
  if ((puVar18 == param_1) && ((param_3 & 0xffff) != 0)) {
    memcpy(param_1,__src,(ulong)param_3 & 0xffff);
  }
  return;
}


