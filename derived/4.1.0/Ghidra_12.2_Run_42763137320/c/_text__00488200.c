/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00488200; name: FUN_.text__00488200
 */


undefined8
FUN__text__00488200(float param_1,undefined8 *param_2,uint param_3,undefined1 (*param_4) [16])

{
  float *pfVar1;
  MutexType *pMVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  float *pfVar6;
  float *pfVar7;
  int iVar8;
  undefined8 uVar9;
  ulong uVar10;
  uint *puVar11;
  float *pfVar12;
  uint *puVar13;
  long lVar14;
  undefined1 (*pauVar15) [16];
  undefined1 (*pauVar16) [16];
  float fVar17;
  undefined1 auVar18 [16];
  float fVar19;
  float fVar20;
  float fVar21;
  
  if ((param_3 & 0xff9c0000) != 0) {
    return 2;
  }
  uVar3 = param_3 + ((int)(param_3 << 0x10) >> 0x1f);
  uVar4 = uVar3 & 0xff;
  if (6 < uVar4 - 1) {
    return 2;
  }
  iVar8 = FUN__text__004884b0(param_2,param_3);
  if (iVar8 == 1) {
    if ((param_3 & 0xff) != 0) {
      memset(param_4,0,((ulong)param_3 & 0xff) << 2);
    }
    if (((param_3 & 0xffff7000) == 0x3000) && (*(char *)(param_2 + 6) == '\x01')) {
      fVar17 = sinf(param_1);
      uVar10 = 1;
      fVar17 = fVar17 * (fVar17 * -0.20710677 + 0.5) + 0.70710677;
      fVar17 = fVar17 * fVar17;
      fVar20 = 1.0 - fVar17;
      if (1.0 < fVar17) {
        fVar20 = 0.0;
      }
      *(float *)*param_4 = *(float *)*param_4 + fVar20;
    }
    else {
      pMVar2 = (MutexType *)(param_2 + 7);
      uVar3 = param_3 & 0xffff7f00 | uVar3 & 0xff;
      nn::os::LockMutex(pMVar2);
      puVar11 = (uint *)*param_2;
      uVar5 = *(uint *)(param_2 + 1);
      puVar13 = puVar11;
      if (uVar5 == 0) {
LAB__text__00488344:
        if (puVar13 == puVar11 + (ulong)uVar5 * 4) goto LAB__text__00488368;
        lVar14 = *(long *)(puVar13 + 2);
        nn::os::UnlockMutex(pMVar2);
      }
      else {
        lVar14 = (ulong)uVar5 << 4;
        do {
          if (*puVar13 == uVar3) goto LAB__text__00488344;
          puVar13 = puVar13 + 4;
          lVar14 = lVar14 + -0x10;
        } while (lVar14 != 0);
LAB__text__00488368:
        lVar14 = FUN__text__004896b0(param_2,uVar3);
        nn::os::UnlockMutex(pMVar2);
      }
      if (lVar14 == 0) goto LAB__text__00488360;
      uVar3 = uVar4 + 2;
      if (3 < uVar4) {
        uVar3 = uVar4;
      }
      fVar17 = sinf(param_1);
      fVar20 = cosf(param_1);
      pfVar12 = (float *)(lVar14 + 8);
      uVar10 = 1;
      puVar13 = (uint *)((ulong)(uVar4 - 1) * 0x20 + 0x73b770);
      do {
        puVar11 = puVar13;
        pfVar1 = pfVar12 + -2;
        pfVar6 = pfVar12 + -1;
        fVar21 = *pfVar12;
        pfVar7 = pfVar12 + 1;
        if (uVar3 <= uVar10) break;
        pfVar12 = pfVar12 + 4;
        uVar10 = uVar10 + 1;
        puVar13 = puVar11 + 1;
      } while (fVar21 * fVar17 < -(*pfVar7 * fVar20) || *pfVar1 * fVar17 < -(*pfVar6 * fVar20));
      uVar10 = (ulong)(*puVar11 >> 0xe) & 0x3fffc;
      fVar19 = *pfVar1 * fVar17 + 1.1920929e-07 + *pfVar6 * fVar20;
      fVar17 = fVar21 * fVar17 + 1.1920929e-07 + *pfVar7 * fVar20;
      fVar19 = fVar19 * fVar19;
      fVar17 = fVar17 * fVar17;
      fVar20 = 1.0 / (fVar17 + fVar19);
      fVar17 = fVar20 * fVar17;
      *(float *)(*param_4 + uVar10) = *(float *)(*param_4 + uVar10) + fVar19 * fVar20;
      uVar10 = (ulong)*(ushort *)((long)puVar11 + 6);
    }
    *(float *)(*param_4 + uVar10 * 4) = *(float *)(*param_4 + uVar10 * 4) + fVar17;
    uVar3 = (param_3 & 0xff) + 3 & 0x1fc;
    if (uVar3 != 0) {
      pauVar15 = param_4;
      do {
        auVar18 = NEON_frsqrte(*pauVar15,4);
        auVar18 = NEON_frecpe(auVar18,4);
        pauVar16 = pauVar15 + 1;
        *(long *)(*pauVar15 + 8) = auVar18._8_8_;
        *(long *)*pauVar15 = auVar18._0_8_;
        pauVar15 = pauVar16;
      } while (pauVar16 < (undefined1 (*) [16])(*param_4 + (ulong)uVar3 * 4));
    }
    uVar9 = 1;
  }
  else {
LAB__text__00488360:
    uVar9 = 2;
  }
  return uVar9;
}


