/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006e0ba0; name: FUN_.text__006e0ba0
 */


void FUN__text__006e0ba0(undefined8 param_1,long param_2)

{
  long *plVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined8 uVar18;
  
  lVar11 = *(long *)(param_2 + 0x418);
  lVar12 = *(long *)(lVar11 + 0x18);
  if ((lVar12 == 0) || (*(char *)(lVar11 + 0x10) == '\0')) {
    return;
  }
  fVar15 = *(float *)(param_2 + 0x4c);
  lVar10 = *(long *)(*(long *)(param_2 + 0x238) + 0x338);
  lVar4 = FUN__text__006eb01c(param_2 + 0x7a8,*(undefined4 *)(lVar11 + 0x38));
  lVar14 = 0;
  lVar5 = lVar4;
  do {
    iVar2 = *(int *)(lVar12 + 0x7c);
    iVar3 = *(int *)(lVar11 + 0x20);
    iVar6 = *(int *)(lVar12 + 0x70);
    lVar13 = *(long *)(lVar12 + 0x68);
    if (0 < iVar6) {
      iVar7 = 0;
      lVar8 = *(long *)(lVar12 + 0x58);
      fVar16 = *(float *)(lVar10 + 0x34) + (1.0 - fVar15) * (1.0 - *(float *)(lVar10 + 0x34));
      do {
        iVar7 = iVar7 + 1;
        uVar18 = *(undefined8 *)(lVar10 + 0x38);
        lVar8 = *(long *)(lVar8 + 0x58);
        *(ulong *)(lVar8 + 0x18) =
             CONCAT44(((float)((ulong)*(undefined8 *)(lVar8 + 0x18) >> 0x20) + fVar15 * 0.0) *
                      fVar16,((float)*(undefined8 *)(lVar8 + 0x18) +
                             *(float *)(lVar10 + 0x40) * fVar15) * fVar16);
        *(ulong *)(lVar8 + 0x10) =
             CONCAT44(((float)((ulong)*(undefined8 *)(lVar8 + 0x10) >> 0x20) +
                      (float)((ulong)uVar18 >> 0x20) * fVar15) * fVar16,
                      ((float)*(undefined8 *)(lVar8 + 0x10) + (float)uVar18 * fVar15) * fVar16);
        iVar6 = *(int *)(lVar12 + 0x70);
      } while (iVar7 < iVar6);
      if (0 < iVar6) {
        puVar9 = *(undefined8 **)(lVar12 + 0x58);
        iVar7 = 0;
        do {
          puVar9 = (undefined8 *)puVar9[0xb];
          iVar7 = iVar7 + 1;
          puVar9[1] = CONCAT44((float)((ulong)puVar9[1] >> 0x20) +
                               (float)((ulong)puVar9[3] >> 0x20) * fVar15,
                               (float)puVar9[1] + (float)puVar9[3] * fVar15);
          *puVar9 = CONCAT44((float)((ulong)*puVar9 >> 0x20) +
                             (float)((ulong)puVar9[2] >> 0x20) * fVar15,
                             (float)*puVar9 + (float)puVar9[2] * fVar15);
          iVar6 = *(int *)(lVar12 + 0x70);
        } while (iVar7 < iVar6);
      }
    }
    iVar7 = iVar6 + -1;
    fVar16 = *(float *)(param_2 + 0x4c) + *(float *)(lVar12 + 0x80);
    fVar17 = *(float *)(lVar12 + 0x88);
    *(float *)(lVar12 + 0x80) = fVar16;
    *(float *)(lVar12 + 0x88) = fVar16;
    if (iVar7 == 0 || iVar6 < 1) {
      plVar1 = (long *)(lVar11 + 0x18);
      if (lVar14 != 0) {
        plVar1 = (long *)(lVar14 + 0x68);
      }
      *plVar1 = lVar13;
      lVar8 = DAT_00c5fc28;
      uVar18 = *(undefined8 *)(lVar12 + 0x50);
      fVar16 = *(float *)(*(long *)(*(long *)(param_2 + 0x238) + 0x338) + 0x18);
      *(int *)(param_2 + 0x838) = *(int *)(param_2 + 0x838) + -1;
      *(ulong *)(param_2 + 0x830) =
           *(long *)(param_2 + 0x830) - ((ulong)(uint)(int)fVar16 * 0x70 + 0xff & 0xffffffff00);
      lVar5 = FUN__text__006d84e0(uVar18,1);
      *(undefined8 *)(lVar12 + 0x50) = 0;
      *(undefined1 *)(lVar12 + 0x90) = 0;
      *(int *)(lVar8 + 0x2c) = *(int *)(lVar8 + 0x2c) + -1;
    }
    else {
      if (0.0 < (float)(int)fVar16 - (float)(int)fVar17) {
        *(int *)(lVar12 + 0x70) = iVar7;
        iVar6 = iVar7;
      }
      lVar8 = lVar4 + (long)(iVar3 * iVar2) * 0x50;
      lVar14 = lVar12;
      if (*(int *)(lVar10 + 0x28) == 0) {
        lVar5 = FUN__text__006e03d0(lVar5,lVar8,lVar12,param_2,lVar10);
      }
      else {
        lVar5 = FUN__text__006e0700((float)(*(int *)(lVar12 + 0x74) - iVar6) *
                                    (float)(*(int *)(lVar10 + 0x28) + 1),lVar5,lVar8,lVar12,param_2,
                                    lVar10);
      }
    }
    lVar12 = lVar13;
  } while (lVar13 != 0);
  FUN__text__006eb028(param_2 + 0x7a8);
  return;
}


