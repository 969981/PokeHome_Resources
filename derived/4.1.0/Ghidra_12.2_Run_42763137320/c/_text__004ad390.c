/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004ad390; name: FUN_.text__004ad390
 */


long FUN__text__004ad390(long *param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  void *__src;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint uVar7;
  uint uVar8;
  long lVar9;
  uint uVar10;
  long lVar11;
  ulong uVar12;
  uint uVar13;
  undefined8 *puVar14;
  uint uVar15;
  
  uVar13 = *(uint *)(param_1 + 1);
  if (uVar13 == 0) {
    uVar8 = 0;
    *param_4 = 0;
    lVar11 = *param_1;
  }
  else {
    uVar8 = 0;
    do {
      uVar15 = uVar8 + (uVar13 >> 1);
      uVar7 = *(uint *)(*param_1 + (long)(int)uVar15 * 0x20 + 4);
      uVar10 = (uint)((ulong)param_2 >> 0x20);
      if (uVar7 == uVar10) {
        *param_4 = 1;
        lVar11 = *param_1;
        uVar8 = uVar15;
        goto joined_r0x004ad43c;
      }
      if (uVar7 < uVar10) {
        uVar8 = uVar15 + 1;
      }
      uVar15 = uVar13 - (uVar7 < uVar10);
      uVar13 = uVar15 >> 1;
    } while (1 < uVar15);
    *param_4 = 0;
    lVar11 = *param_1;
  }
joined_r0x004ad43c:
  if (lVar11 != 0) {
    uVar15 = *(uint *)(param_1 + 1);
    uVar13 = *(uint *)((long)param_1 + 0xc);
    lVar11 = *param_1;
    if (uVar13 <= uVar15) {
      iVar1 = uVar13 + (uVar13 >> 1);
      if (uVar13 == 0) {
        iVar1 = 1;
      }
      uVar13 = iVar1 + uVar13;
      if (lVar11 == 0) {
        lVar11 = FUN__text__00400f80(0,(ulong)uVar13 << 5);
        if (lVar11 == 0) {
          return 0;
        }
        lVar9 = *param_1;
        if ((lVar9 != 0) && (lVar9 != lVar11)) {
          if (uVar15 != 0) {
            if (uVar15 == 1) {
              uVar12 = 0;
            }
            else {
              uVar12 = 0;
              lVar9 = 0x20;
              puVar14 = (undefined8 *)(lVar11 + 0x20);
              do {
                uVar12 = uVar12 + 2;
                lVar2 = *param_1 + lVar9;
                uVar4 = *(undefined8 *)(lVar2 + -0x20);
                uVar5 = *(undefined8 *)(lVar2 + -0x18);
                uVar6 = *(undefined8 *)(lVar2 + -8);
                puVar14[-2] = *(undefined8 *)(lVar2 + -0x10);
                puVar14[-1] = uVar6;
                puVar14[-4] = uVar4;
                puVar14[-3] = uVar5;
                puVar3 = (undefined8 *)(*param_1 + lVar9);
                lVar9 = lVar9 + 0x40;
                uVar4 = *puVar3;
                uVar5 = puVar3[1];
                uVar6 = puVar3[3];
                puVar14[2] = puVar3[2];
                puVar14[3] = uVar6;
                *puVar14 = uVar4;
                puVar14[1] = uVar5;
                puVar14 = puVar14 + 8;
              } while (((ulong)uVar15 & 0xfffffffe) != uVar12);
            }
            if ((uVar15 & 1) != 0) {
              puVar14 = (undefined8 *)(*param_1 + uVar12 * 0x20);
              puVar3 = (undefined8 *)(lVar11 + uVar12 * 0x20);
              uVar4 = *puVar14;
              uVar5 = puVar14[1];
              uVar6 = puVar14[3];
              puVar3[2] = puVar14[2];
              puVar3[3] = uVar6;
              *puVar3 = uVar4;
              puVar3[1] = uVar5;
            }
            lVar9 = *param_1;
          }
          FUN__text__00400fc0(0,lVar9);
        }
      }
      else {
        lVar11 = FUN__text__00400fa0(0,lVar11);
        if (lVar11 == 0) {
          return 0;
        }
      }
      *param_1 = lVar11;
      *(uint *)((long)param_1 + 0xc) = uVar13;
      if (uVar13 <= uVar15) {
        return 0;
      }
      uVar15 = *(uint *)(param_1 + 1);
    }
    if (uVar8 <= uVar15 && uVar15 - uVar8 != 0) {
      __src = (void *)(lVar11 + (ulong)uVar8 * 0x20);
      memmove((void *)((long)__src + 0x20),__src,(ulong)((uVar15 - uVar8) * 0x20));
      uVar15 = *(uint *)(param_1 + 1);
      lVar11 = *param_1;
    }
    *(uint *)(param_1 + 1) = uVar15 + 1;
    return lVar11 + (ulong)uVar8 * 0x20;
  }
  uVar8 = *(uint *)(param_1 + 1);
  uVar13 = *(uint *)((long)param_1 + 0xc);
  if (uVar8 < uVar13) {
    lVar11 = 0;
  }
  else {
    iVar1 = uVar13 + (uVar13 >> 1);
    if (uVar13 == 0) {
      iVar1 = 1;
    }
    uVar13 = iVar1 + uVar13;
    lVar11 = FUN__text__00400f80(0,(ulong)uVar13 << 5);
    if (lVar11 == 0) {
      return 0;
    }
    lVar9 = *param_1;
    if ((lVar9 != 0) && (lVar9 != lVar11)) {
      if (uVar8 != 0) {
        if (uVar8 == 1) {
          uVar12 = 0;
        }
        else {
          uVar12 = 0;
          lVar9 = 0x20;
          puVar14 = (undefined8 *)(lVar11 + 0x20);
          do {
            uVar12 = uVar12 + 2;
            lVar2 = *param_1 + lVar9;
            uVar4 = *(undefined8 *)(lVar2 + -0x20);
            uVar5 = *(undefined8 *)(lVar2 + -0x18);
            uVar6 = *(undefined8 *)(lVar2 + -8);
            puVar14[-2] = *(undefined8 *)(lVar2 + -0x10);
            puVar14[-1] = uVar6;
            puVar14[-4] = uVar4;
            puVar14[-3] = uVar5;
            puVar3 = (undefined8 *)(*param_1 + lVar9);
            lVar9 = lVar9 + 0x40;
            uVar4 = *puVar3;
            uVar5 = puVar3[1];
            uVar6 = puVar3[3];
            puVar14[2] = puVar3[2];
            puVar14[3] = uVar6;
            *puVar14 = uVar4;
            puVar14[1] = uVar5;
            puVar14 = puVar14 + 8;
          } while (((ulong)uVar8 & 0xfffffffe) != uVar12);
        }
        if ((uVar8 & 1) != 0) {
          puVar14 = (undefined8 *)(*param_1 + uVar12 * 0x20);
          puVar3 = (undefined8 *)(lVar11 + uVar12 * 0x20);
          uVar4 = *puVar14;
          uVar5 = puVar14[1];
          uVar6 = puVar14[3];
          puVar3[2] = puVar14[2];
          puVar3[3] = uVar6;
          *puVar3 = uVar4;
          puVar3[1] = uVar5;
        }
        lVar9 = *param_1;
      }
      FUN__text__00400fc0(0,lVar9);
    }
    *param_1 = lVar11;
    *(uint *)((long)param_1 + 0xc) = uVar13;
    if (uVar13 <= uVar8) {
      return 0;
    }
    uVar8 = *(uint *)(param_1 + 1);
  }
  *(uint *)(param_1 + 1) = uVar8 + 1;
  return lVar11 + (ulong)uVar8 * 0x20;
}


