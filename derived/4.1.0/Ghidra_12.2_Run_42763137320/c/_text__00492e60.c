/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00492e60; name: FUN_.text__00492e60
 */


undefined8 * FUN__text__00492e60(long *param_1,undefined1 param_2,undefined8 param_3,byte param_4)

{
  int iVar1;
  undefined1 *puVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  byte bVar8;
  ulong uVar9;
  long lVar10;
  uint uVar11;
  ulong uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  long lVar15;
  long lVar16;
  undefined1 uStack_41;
  
  lVar15 = *param_1;
  uVar11 = *(uint *)(param_1 + 8);
  if (uVar11 < *(uint *)(lVar15 + 0x28)) {
    do {
      lVar16 = *(long *)(lVar15 + 0x20) + (ulong)uVar11 * 0x88;
      bVar8 = *(byte *)(*(long *)(lVar15 + 0x30) + (ulong)uVar11);
      FUN__text__004934f0(param_1 + 2,*(undefined8 *)(lVar16 + 0x70),&uStack_41);
      if (*(char *)((long)param_1 + 0x4c) != '\0') {
        if (*(float *)(lVar16 + 0x30) < *(float *)((long)param_1 + 0xc)) {
          *(int *)(param_1 + 1) = (int)param_1[8];
          *(undefined4 *)((long)param_1 + 0xc) = *(undefined4 *)(lVar16 + 0x30);
        }
        if (((bVar8 & 5) != 0) && (*(float *)(lVar16 + 0x50) < *(float *)((long)param_1 + 0x44))) {
          *(float *)((long)param_1 + 0x44) = *(float *)(lVar16 + 0x50);
        }
        if ((bVar8 >> 1 & 1) != 0) {
          *(undefined4 *)(param_1 + 9) = *(undefined4 *)(lVar16 + 0x54);
        }
      }
      uVar11 = (int)param_1[8] + 1;
      lVar15 = *param_1;
      *(uint *)(param_1 + 8) = uVar11;
    } while (uVar11 < *(uint *)(lVar15 + 0x28));
  }
  *(byte *)((long)param_1 + 0x4c) = param_4 & 1;
  uVar11 = *(uint *)(lVar15 + 0x28);
  uVar3 = *(uint *)(lVar15 + 0x2c);
  if (uVar3 <= uVar11) {
    iVar1 = uVar3 + (uVar3 >> 1);
    if (uVar3 == 0) {
      iVar1 = 1;
    }
    uVar9 = FUN__text__00451a80(lVar15 + 0x20,iVar1);
    if ((uVar9 & 1) == 0) {
      return (undefined8 *)0x0;
    }
    if (*(uint *)(lVar15 + 0x2c) <= uVar11) {
      return (undefined8 *)0x0;
    }
    uVar11 = *(uint *)(lVar15 + 0x28);
  }
  *(uint *)(lVar15 + 0x28) = uVar11 + 1;
  if (*(long *)(lVar15 + 0x20) == 0) {
    return (undefined8 *)0x0;
  }
  puVar14 = (undefined8 *)(*(long *)(lVar15 + 0x20) + (ulong)uVar11 * 0x88);
  puVar14[6] = 0;
  puVar14[7] = 0x3f80000000000000;
  puVar14[10] = 0;
  *(undefined4 *)(puVar14 + 0xb) = 0;
  *(undefined4 *)(puVar14 + 0x10) = 0;
  puVar14[8] = 0x3f8000003f800000;
  puVar14[9] = 0;
  *(undefined8 *)((long)puVar14 + 0x5c) = 0x3f80000042c80000;
  *(undefined8 *)((long)puVar14 + 100) = 0xffffffff;
  puVar14[0xe] = 0;
  puVar14[0xf] = 0x3f800000;
  lVar16 = *param_1;
  uVar3 = *(uint *)(lVar16 + 0x38);
  uVar9 = (ulong)uVar3;
  uVar11 = *(uint *)(lVar16 + 0x3c);
  lVar15 = *(long *)(lVar16 + 0x30);
  if (uVar3 < uVar11) {
    *(uint *)(lVar16 + 0x38) = uVar3 + 1;
    if (lVar15 == 0) goto LAB__text__0049312c;
LAB__text__004930d4:
    puVar13 = (undefined8 *)
              (*(long *)(*param_1 + 0x20) + (ulong)(*(int *)(*param_1 + 0x28) - 2) * 0x88);
    uVar4 = puVar13[1];
    *puVar14 = *puVar13;
    puVar14[1] = uVar4;
    uVar4 = puVar13[2];
    uVar5 = puVar13[3];
    uVar6 = puVar13[5];
    puVar14[4] = puVar13[4];
    puVar14[5] = uVar6;
    puVar14[2] = uVar4;
    puVar14[3] = uVar5;
    uVar4 = puVar13[6];
    uVar5 = puVar13[7];
    uVar6 = puVar13[9];
    puVar14[8] = puVar13[8];
    puVar14[9] = uVar6;
    puVar14[6] = uVar4;
    puVar14[7] = uVar5;
    uVar4 = puVar13[10];
    uVar6 = puVar13[0xb];
    uVar5 = puVar13[0xc];
    uVar7 = puVar13[0xd];
    puVar14[0xe] = param_3;
    puVar14[0xc] = uVar5;
    puVar14[0xd] = uVar7;
    puVar14[10] = uVar4;
    puVar14[0xb] = uVar6;
    *(undefined1 *)(lVar15 + uVar9) = param_2;
  }
  else {
    iVar1 = uVar11 + (uVar11 >> 1);
    if (uVar11 == 0) {
      iVar1 = 1;
    }
    uVar11 = iVar1 + uVar11;
    if (lVar15 == 0) {
      lVar15 = FUN__text__00400f80(0,uVar11);
      if (lVar15 != 0) {
        lVar10 = *(long *)(lVar16 + 0x30);
        if ((lVar10 != 0) && (lVar10 != lVar15)) {
          if (uVar3 != 0) {
            if (uVar3 == 1) {
              uVar12 = 0;
            }
            else {
              uVar12 = 0;
              do {
                puVar2 = (undefined1 *)(lVar15 + uVar12);
                *puVar2 = *(undefined1 *)(*(long *)(lVar16 + 0x30) + uVar12);
                lVar10 = *(long *)(lVar16 + 0x30) + uVar12;
                uVar12 = uVar12 + 2;
                puVar2[1] = *(undefined1 *)(lVar10 + 1);
              } while ((uVar9 & 0xfffffffe) != uVar12);
            }
            if ((uVar3 & 1) != 0) {
              *(undefined1 *)(lVar15 + uVar12) = *(undefined1 *)(*(long *)(lVar16 + 0x30) + uVar12);
            }
            lVar10 = *(long *)(lVar16 + 0x30);
          }
          FUN__text__00400fc0(0,lVar10);
        }
        goto LAB__text__004930b8;
      }
    }
    else {
      lVar15 = FUN__text__00400fa0(0,lVar15,uVar11);
      if (lVar15 != 0) {
LAB__text__004930b8:
        *(long *)(lVar16 + 0x30) = lVar15;
        *(uint *)(lVar16 + 0x3c) = uVar11;
        if (uVar3 < uVar11) {
          uVar9 = (ulong)*(uint *)(lVar16 + 0x38);
          *(uint *)(lVar16 + 0x38) = *(uint *)(lVar16 + 0x38) + 1;
          goto LAB__text__004930d4;
        }
      }
    }
LAB__text__0049312c:
    puVar14 = (undefined8 *)0x0;
    *(int *)(*param_1 + 0x28) = *(int *)(*param_1 + 0x28) + -1;
  }
  return puVar14;
}


