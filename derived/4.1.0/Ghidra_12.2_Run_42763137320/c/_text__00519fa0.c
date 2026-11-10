/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00519fa0; name: FUN_.text__00519fa0
 */


float * FUN__text__00519fa0(float param_1,long *param_2)

{
  float *pfVar1;
  int iVar2;
  undefined8 *puVar3;
  uint uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long lVar9;
  uint uVar10;
  ulong uVar11;
  
  uVar10 = *(uint *)(param_2 + 1);
  uVar11 = (ulong)uVar10;
  uVar4 = *(uint *)((long)param_2 + 0xc);
  lVar9 = *param_2;
  if (uVar10 < uVar4) {
    *(uint *)(param_2 + 1) = uVar10 + 1;
    if (lVar9 == 0) {
      return (float *)0x0;
    }
    if (uVar10 == 0) {
      uVar10 = 0;
      goto LAB__text__0051a12c;
    }
  }
  else {
    iVar2 = uVar4 + (uVar4 >> 1);
    if (uVar4 == 0) {
      iVar2 = 1;
    }
    uVar4 = iVar2 + uVar4;
    if (lVar9 == 0) {
      lVar9 = FUN__text__00400f80(9,(ulong)uVar4 << 4);
      if (lVar9 == 0) {
        return (float *)0x0;
      }
      lVar6 = *param_2;
      if ((lVar6 != 0) && (lVar6 != lVar9)) {
        if (uVar10 != 0) {
          if (uVar10 == 1) {
            uVar7 = 0;
          }
          else {
            uVar7 = 0;
            lVar6 = 0x10;
            puVar8 = (undefined8 *)(lVar9 + 0x10);
            do {
              uVar7 = uVar7 + 2;
              uVar5 = *(undefined8 *)(*param_2 + lVar6 + -8);
              puVar8[-2] = *(undefined8 *)(*param_2 + lVar6 + -0x10);
              puVar8[-1] = uVar5;
              puVar3 = (undefined8 *)(*param_2 + lVar6);
              lVar6 = lVar6 + 0x20;
              uVar5 = puVar3[1];
              *puVar8 = *puVar3;
              puVar8[1] = uVar5;
              puVar8 = puVar8 + 4;
            } while ((uVar11 & 0xfffffffe) != uVar7);
          }
          if ((uVar10 & 1) != 0) {
            puVar8 = (undefined8 *)(lVar9 + uVar7 * 0x10);
            puVar3 = (undefined8 *)(*param_2 + uVar7 * 0x10);
            uVar5 = puVar3[1];
            *puVar8 = *puVar3;
            puVar8[1] = uVar5;
          }
          lVar6 = *param_2;
        }
        FUN__text__00400fc0(9,lVar6);
      }
    }
    else {
      lVar9 = FUN__text__00400fa0(9,lVar9);
      if (lVar9 == 0) {
        return (float *)0x0;
      }
    }
    *param_2 = lVar9;
    *(uint *)((long)param_2 + 0xc) = uVar4;
    if (uVar4 <= uVar10) {
      return (float *)0x0;
    }
    uVar4 = *(uint *)(param_2 + 1);
    uVar11 = (ulong)uVar4;
    *(uint *)(param_2 + 1) = uVar4 + 1;
    uVar10 = 0;
    if (uVar4 == 0) goto LAB__text__0051a12c;
  }
  do {
    lVar9 = *param_2;
    uVar10 = (uint)uVar11;
    uVar4 = uVar10 - 1 >> 1;
    pfVar1 = (float *)(lVar9 + (ulong)uVar4 * 0x10);
    if (*pfVar1 <= param_1) goto LAB__text__0051a12c;
    uVar5 = *(undefined8 *)(pfVar1 + 2);
    puVar8 = (undefined8 *)(lVar9 + (long)(int)uVar10 * 0x10);
    uVar11 = (ulong)uVar4;
    *puVar8 = *(undefined8 *)pfVar1;
    puVar8[1] = uVar5;
  } while (1 < uVar10 - 1);
  lVar9 = *param_2;
  uVar10 = uVar4;
LAB__text__0051a12c:
  pfVar1 = (float *)(lVar9 + (long)(int)uVar10 * 0x10);
  *pfVar1 = param_1;
  return pfVar1;
}


