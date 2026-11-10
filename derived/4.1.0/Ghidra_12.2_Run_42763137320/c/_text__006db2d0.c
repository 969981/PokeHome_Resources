/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006db2d0; name: FUN_.text__006db2d0
 */


undefined8 FUN__text__006db2d0(long *param_1)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  float *pfVar6;
  long lVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  float fVar11;
  undefined4 uVar12;
  float fVar13;
  
  lVar4 = *param_1;
  if ((*(char *)(*(long *)(lVar4 + 0xa0) + 0x752) == '\0') &&
     (puVar3 = (undefined8 *)(**(code **)(*(long *)(lVar4 + 0x828) + 0x10))(lVar4 + 0x828,0x40,0x80)
     , puVar3 != (undefined8 *)0x0)) {
    puVar3[6] = 0;
    puVar3[7] = 0;
    puVar3[4] = 0;
    puVar3[5] = 0;
    puVar3[2] = 0;
    puVar3[3] = 0;
    *puVar3 = 0;
    puVar3[1] = 0;
    *(undefined8 **)(*param_1 + 0x418) = puVar3;
    fVar11 = *(float *)(*(long *)(*param_1 + 0xa0) + 0x800);
    lVar4 = *(long *)(*(long *)(*param_1 + 0x238) + 0x2b8);
    fVar13 = fVar11;
    if (lVar4 != 0) {
      uVar1 = *(uint *)(lVar4 + 4);
      if (0 < (int)uVar1) {
        if (uVar1 == 1) {
          uVar5 = 0;
        }
        else {
          uVar5 = 0;
          pfVar6 = (float *)(lVar4 + 0x1c);
          do {
            uVar5 = uVar5 + 2;
            fVar13 = pfVar6[-4];
            if (pfVar6[-4] <= fVar11) {
              fVar13 = fVar11;
            }
            fVar11 = *pfVar6;
            if (*pfVar6 <= fVar13) {
              fVar11 = fVar13;
            }
            pfVar6 = pfVar6 + 8;
          } while (((ulong)uVar1 & 0xfffffffe) != uVar5);
        }
        fVar13 = fVar11;
        if (((uVar1 & 1) != 0) &&
           (fVar13 = *(float *)(lVar4 + uVar5 * 0x10 + 0xc), fVar13 <= fVar11)) {
          fVar13 = fVar11;
        }
      }
    }
    *(int *)(puVar3 + 6) = (int)fVar13;
    lVar4 = *(long *)(*(long *)(*param_1 + 0x238) + 0x2c0);
    fVar11 = (float)*(int *)(*(long *)(*param_1 + 0xa0) + 0x8b8);
    fVar13 = fVar11;
    if (lVar4 != 0) {
      uVar1 = *(uint *)(lVar4 + 4);
      if (0 < (int)uVar1) {
        if (uVar1 == 1) {
          uVar5 = 0;
        }
        else {
          uVar5 = 0;
          pfVar6 = (float *)(lVar4 + 0x1c);
          do {
            uVar5 = uVar5 + 2;
            fVar13 = pfVar6[-4];
            if (pfVar6[-4] <= fVar11) {
              fVar13 = fVar11;
            }
            fVar11 = *pfVar6;
            if (*pfVar6 <= fVar13) {
              fVar11 = fVar13;
            }
            pfVar6 = pfVar6 + 8;
          } while (((ulong)uVar1 & 0xfffffffe) != uVar5);
        }
        fVar13 = fVar11;
        if (((uVar1 & 1) != 0) &&
           (fVar13 = *(float *)(lVar4 + uVar5 * 0x10 + 0xc), fVar13 <= fVar11)) {
          fVar13 = fVar11;
        }
      }
    }
    *(int *)((long)puVar3 + 0x34) = (int)fVar13;
    *(undefined4 *)(puVar3 + 7) = 0;
    lVar4 = *(long *)(*(long *)(*param_1 + 0x238) + 0x338);
    *(undefined4 *)puVar3 = *(undefined4 *)(lVar4 + 0x1c);
    uVar12 = *(undefined4 *)(lVar4 + 0x20);
    puVar3[1] = 0;
    *(undefined4 *)((long)puVar3 + 4) = uVar12;
    uVar5 = FUN__text__006d7b48(*param_1,4,0x60);
    lVar4 = DAT_00c5fc20;
    if ((uVar5 & 1) != 0) {
      lVar7 = *param_1;
      lVar9 = *(long *)(lVar7 + 0x418);
      lVar10 = *(long *)(*(long *)(lVar7 + 0x238) + 0x338);
      iVar8 = (int)*(float *)(lVar10 + 0x14);
      iVar2 = FUN__text__006dd230(lVar7,iVar8);
      iVar2 = *(int *)(lVar7 + 0x230) + iVar2;
      *(int *)(lVar9 + 0x28) = iVar2;
      iVar8 = (iVar8 + (iVar8 + -1) * (int)*(float *)(lVar10 + 0x10)) * 2;
      *(int *)(lVar9 + 0x20) = iVar8;
      iVar8 = iVar8 * iVar2;
      iVar2 = *(int *)(lVar4 + 0x18);
      *(undefined1 *)(lVar9 + 0x10) = 0;
      *(int *)(lVar9 + 0x24) = iVar8 * iVar2;
      if (iVar8 != 0) {
        uVar5 = FUN__text__006d7b8c(lVar7,*(undefined4 *)(lVar4 + 0x18),(long)iVar8 * 0x50);
        if ((uVar5 & 1) != 0) {
          *(undefined1 *)(lVar9 + 0x10) = 1;
          return 1;
        }
        if (*(char *)(lVar9 + 0x10) != '\0') {
          return 1;
        }
      }
      FUN__text__006d84a0(*param_1,0x10000);
      FUN__text__006d84b0(0x712243,0x38);
    }
  }
  return 0;
}


