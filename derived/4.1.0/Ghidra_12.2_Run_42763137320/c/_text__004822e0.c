/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004822e0; name: FUN_.text__004822e0
 */


void FUN__text__004822e0(int param_1,long param_2,uint param_3,long param_4)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  int iVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined4 *puVar12;
  float fVar13;
  
  if (param_3 != 0) {
    uVar11 = (ulong)param_3;
    lVar6 = param_4;
    puVar12 = (undefined4 *)(param_2 + 8);
    uVar9 = uVar11;
    do {
      FUN__text__00481ed0(puVar12[-2],puVar12[-1],*puVar12,param_1 + 1,param_3,lVar6);
      lVar6 = lVar6 + 4;
      uVar9 = uVar9 - 1;
      puVar12 = puVar12 + 4;
    } while (uVar9 != 0);
    param_1 = param_1 + 2;
    if ((param_1 != 0) && (param_3 != 0)) {
      uVar2 = param_1 * param_1;
      lVar6 = 0;
      uVar7 = 0;
      iVar8 = 1;
      if (uVar2 < 2) {
        uVar2 = 1;
      }
      do {
        fVar13 = *(float *)((ulong)(iVar8 - 1) * 4 + 0x73b71c);
        fVar13 = fVar13 * fVar13;
        if (param_3 < 4) {
          uVar9 = 0;
        }
        else {
          uVar9 = 0;
          do {
            uVar1 = (int)lVar6 + (int)uVar9;
            uVar9 = uVar9 + 4;
            lVar3 = (ulong)(uVar1 + 1) * 4;
            *(float *)(param_4 + (ulong)uVar1 * 4) = fVar13 * *(float *)(param_4 + (ulong)uVar1 * 4)
            ;
            lVar4 = (ulong)(uVar1 + 2) * 4;
            lVar5 = (ulong)(uVar1 + 3) * 4;
            *(float *)(param_4 + lVar3) = fVar13 * *(float *)(param_4 + lVar3);
            *(float *)(param_4 + lVar4) = fVar13 * *(float *)(param_4 + lVar4);
            *(float *)(param_4 + lVar5) = fVar13 * *(float *)(param_4 + lVar5);
          } while ((uVar11 & 0xfffffffc) != uVar9);
        }
        if ((param_3 & 3) != 0) {
          uVar1 = (int)lVar6 + (int)uVar9;
          uVar9 = uVar11 & 3;
          do {
            uVar10 = (ulong)uVar1;
            uVar1 = uVar1 + 1;
            uVar9 = uVar9 - 1;
            *(float *)(param_4 + uVar10 * 4) = fVar13 * *(float *)(param_4 + uVar10 * 4);
          } while (uVar9 != 0);
        }
        uVar7 = uVar7 + 1;
        lVar6 = lVar6 + uVar11;
        uVar1 = 0;
        if (iVar8 * iVar8 != 0) {
          uVar1 = uVar7 / (uint)(iVar8 * iVar8);
        }
        iVar8 = uVar1 + iVar8;
      } while (uVar7 != uVar2);
    }
  }
  return;
}


