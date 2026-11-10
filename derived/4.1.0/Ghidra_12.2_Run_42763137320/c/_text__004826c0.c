/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004826c0; name: FUN_.text__004826c0
 */


void FUN__text__004826c0(int param_1,long param_2,void *param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  int iVar7;
  ulong uVar8;
  float *pfVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  float fVar14;
  
  iVar7 = param_1 + 2;
  uVar3 = *(uint *)((long)param_1 * 4 + 0x73b734);
  uVar12 = (ulong)uVar3;
  uVar4 = iVar7 * iVar7;
  lVar11 = (&DAT_00aea8c0)[param_1];
  if (lVar11 == 0) {
    lVar11 = FUN__text__00400f80(0,(ulong)(uVar3 * uVar4) << 2);
    if (lVar11 == 0) {
      if (iVar7 == 0) {
        return;
      }
      memset(param_3,0,(ulong)uVar4 << 2);
      return;
    }
    lVar13 = *(long *)((long)param_1 * 8 + 0x889b98);
    lVar5 = 0;
    uVar6 = uVar12;
    do {
      puVar2 = (undefined4 *)(lVar13 + lVar5 * 4);
      FUN__text__00481ed0(*puVar2,puVar2[1],puVar2[2],param_1 + 1,uVar3,lVar11 + lVar5);
      uVar6 = uVar6 - 1;
      lVar5 = lVar5 + 4;
    } while (uVar6 != 0);
    (&DAT_00aea8c0)[param_1] = lVar11;
  }
  if (iVar7 != 0) {
    lVar5 = 0;
    uVar6 = 0;
    if (uVar3 < 2) {
      uVar3 = 1;
    }
    if (uVar4 < 2) {
      uVar4 = 1;
    }
    do {
      if (uVar3 < 4) {
        uVar8 = 0;
        fVar14 = 0.0;
      }
      else {
        fVar14 = 0.0;
        uVar8 = 0;
        pfVar9 = (float *)(param_2 + 8);
        do {
          uVar1 = (int)lVar5 + (int)uVar8;
          uVar8 = uVar8 + 4;
          fVar14 = fVar14 + *(float *)(lVar11 + (ulong)uVar1 * 4) * pfVar9[-2] +
                   *(float *)(lVar11 + (ulong)(uVar1 + 1) * 4) * pfVar9[-1] +
                   *(float *)(lVar11 + (ulong)(uVar1 + 2) * 4) * *pfVar9 +
                   *(float *)(lVar11 + (ulong)(uVar1 + 3) * 4) * pfVar9[1];
          pfVar9 = pfVar9 + 4;
        } while (((ulong)uVar3 & 0xfffffffc) != uVar8);
      }
      if ((uVar3 & 3) != 0) {
        uVar10 = (ulong)uVar3 & 3;
        do {
          iVar7 = (int)uVar8;
          lVar13 = uVar8 * 4;
          uVar8 = uVar8 + 1;
          uVar10 = uVar10 - 1;
          fVar14 = fVar14 + *(float *)(lVar11 + (ulong)(uint)((int)lVar5 + iVar7) * 4) *
                            *(float *)(param_2 + lVar13);
        } while (uVar10 != 0);
      }
      *(float *)((long)param_3 + uVar6 * 4) = fVar14;
      uVar6 = uVar6 + 1;
      lVar5 = lVar5 + uVar12;
    } while (uVar6 != uVar4);
  }
  return;
}


