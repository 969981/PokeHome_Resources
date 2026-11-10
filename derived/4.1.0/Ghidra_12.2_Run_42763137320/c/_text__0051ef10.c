/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0051ef10; name: FUN_.text__0051ef10
 */


void FUN__text__0051ef10(long param_1,long param_2,long param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puVar9;
  ulong uVar10;
  uint uVar11;
  float fVar12;
  
  uVar11 = **(uint **)(param_3 + 0x168);
  uVar3 = *(uint *)(param_1 + 0x80);
  if (uVar3 != 0) {
    uVar2 = 0;
    if (uVar3 != 0) {
      uVar2 = uVar11 / uVar3;
    }
    for (puVar9 = *(undefined8 **)(*(long *)(param_1 + 0x78) + (ulong)(uVar11 - uVar2 * uVar3) * 8);
        puVar9 != (undefined8 *)0x0; puVar9 = (undefined8 *)puVar9[2]) {
      if (*(uint *)(puVar9 + 3) == uVar11) goto LAB__text__0051f000;
    }
  }
  puVar9 = (undefined8 *)FUN__text__00400f80(10,0x20);
  if (puVar9 == (undefined8 *)0x0) goto LAB__text__0051f030;
  puVar9[1] = 0;
  puVar9[2] = 0;
  *puVar9 = 0;
  *(uint *)(puVar9 + 3) = uVar11;
  uVar3 = *(uint *)(param_1 + 0x80);
  if ((uVar3 == 0) ||
     (fVar12 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 0x88)), 0.9 < fVar12 / (float)uVar3)) {
    FUN__text__00520000((long *)(param_1 + 0x78));
    uVar3 = *(uint *)(param_1 + 0x80);
    if (uVar3 != 0) {
      uVar11 = *(uint *)(puVar9 + 3);
      goto LAB__text__0051efd4;
    }
  }
  else {
LAB__text__0051efd4:
    uVar2 = 0;
    if (uVar3 != 0) {
      uVar2 = uVar11 / uVar3;
    }
    lVar7 = (ulong)(uVar11 - uVar2 * uVar3) * 8;
    puVar9[2] = *(undefined8 *)(*(long *)(param_1 + 0x78) + lVar7);
    *(undefined8 **)(*(long *)(param_1 + 0x78) + lVar7) = puVar9;
    *(int *)(param_1 + 0x88) = *(int *)(param_1 + 0x88) + 1;
  }
LAB__text__0051f000:
  FUN__text__0051f1c0(puVar9,param_3);
  FUN__text__0051f1c0(puVar9,param_3 + 0x58);
  FUN__text__0051f1c0(puVar9,param_3 + 0xb0);
  FUN__text__0051f1c0(puVar9,param_3 + 0x108);
LAB__text__0051f030:
  plVar8 = *(long **)(param_1 + 0x90);
  uVar11 = *(uint *)(param_1 + 0x98);
  uVar10 = (ulong)uVar11;
  plVar5 = plVar8;
  if (uVar11 == 0) {
LAB__text__0051f06c:
    if (plVar5 != plVar8 + uVar10) {
      return;
    }
  }
  else {
    lVar7 = uVar10 << 3;
    do {
      if (*plVar5 == param_2) goto LAB__text__0051f06c;
      plVar5 = plVar5 + 1;
      lVar7 = lVar7 + -8;
    } while (lVar7 != 0);
  }
  uVar3 = *(uint *)(param_1 + 0x9c);
  if (uVar11 < uVar3) {
    *(uint *)(param_1 + 0x98) = uVar11 + 1;
    if (plVar8 != (long *)0x0) {
      plVar8[uVar10] = param_2;
      return;
    }
  }
  else {
    iVar1 = uVar3 + (uVar3 >> 1);
    if (uVar3 == 0) {
      iVar1 = 1;
    }
    uVar3 = iVar1 + uVar3;
    if (plVar8 == (long *)0x0) {
      lVar7 = FUN__text__00400f80(9,(ulong)uVar3 << 3);
      if (lVar7 == 0) {
        return;
      }
      lVar4 = *(long *)(param_1 + 0x90);
      if ((lVar4 != 0) && (lVar4 != lVar7)) {
        if (uVar11 != 0) {
          if (uVar11 == 1) {
            uVar6 = 0;
          }
          else {
            uVar6 = 0;
            do {
              lVar4 = uVar6 * 8;
              uVar6 = uVar6 + 2;
              *(undefined8 *)(lVar7 + lVar4) = *(undefined8 *)(*(long *)(param_1 + 0x90) + lVar4);
              ((undefined8 *)(lVar7 + lVar4))[1] =
                   *(undefined8 *)(*(long *)(param_1 + 0x90) + lVar4 + 8);
            } while ((uVar10 & 0xfffffffe) != uVar6);
          }
          if ((uVar11 & 1) != 0) {
            *(undefined8 *)(lVar7 + uVar6 * 8) =
                 *(undefined8 *)(*(long *)(param_1 + 0x90) + uVar6 * 8);
          }
          lVar4 = *(long *)(param_1 + 0x90);
        }
        FUN__text__00400fc0(9,lVar4);
      }
    }
    else {
      lVar7 = FUN__text__00400fa0(9,plVar8);
      if (lVar7 == 0) {
        return;
      }
    }
    *(long *)(param_1 + 0x90) = lVar7;
    *(uint *)(param_1 + 0x9c) = uVar3;
    if (uVar11 < uVar3) {
      uVar11 = *(uint *)(param_1 + 0x98);
      *(uint *)(param_1 + 0x98) = uVar11 + 1;
      *(long *)(lVar7 + (ulong)uVar11 * 8) = param_2;
      return;
    }
  }
  return;
}


