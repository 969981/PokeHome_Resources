/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00463510; name: FUN_.text__00463510
 */


void FUN__text__00463510(long *param_1,long param_2)

{
  int iVar1;
  void *__dest;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  long lVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  long lVar10;
  float fVar11;
  
  uVar7 = *(uint *)(param_1 + 1);
  if (uVar7 == 0) {
    FUN__text__004728b0(param_1);
    return;
  }
  fVar11 = *(float *)(param_2 + 0x318);
  uVar2 = *(uint *)(param_2 + 0x31c);
  uVar3 = *(uint *)(param_2 + 800);
  lVar6 = *param_1;
  if (*(char *)((long)param_1 + 0x12) == '\0') {
    iVar8 = 0;
    uVar9 = uVar7;
    do {
      iVar1 = iVar8 + (uVar9 >> 1);
      lVar10 = *(long *)(lVar6 + (long)iVar1 * 8);
      if (*(float *)(lVar10 + 0x318) == fVar11) {
        uVar4 = *(uint *)(lVar10 + 800);
        if (*(uint *)(lVar10 + 0x31c) == uVar2 && uVar4 == uVar3) goto LAB__text__00463630;
        bVar5 = uVar2 < *(uint *)(lVar10 + 0x31c);
        if (uVar4 != uVar3) {
          bVar5 = uVar3 < uVar4;
        }
      }
      else {
        bVar5 = fVar11 < *(float *)(lVar10 + 0x318);
      }
      uVar4 = uVar9 - bVar5;
      if (bVar5 != 0) {
        iVar8 = iVar1 + 1;
      }
      uVar9 = uVar4 >> 1;
    } while (1 < uVar4);
  }
  else {
    iVar8 = 0;
    uVar9 = uVar7;
    do {
      iVar1 = iVar8 + (uVar9 >> 1);
      lVar10 = *(long *)(lVar6 + (long)iVar1 * 8);
      if (*(float *)(lVar10 + 0x318) == fVar11) {
        uVar4 = *(uint *)(lVar10 + 800);
        if (*(uint *)(lVar10 + 0x31c) == uVar2 && uVar4 == uVar3) {
LAB__text__00463630:
          uVar7 = uVar7 - 1;
          if ((long)iVar1 < (long)(ulong)uVar7) {
            __dest = (void *)(lVar6 + (long)iVar1 * 8);
            memmove(__dest,(void *)((long)__dest + 8),
                    (ulong)(((int)lVar6 + uVar7 * 8) - (int)__dest) & 0xfffffff8);
            uVar7 = (int)param_1[1] - 1;
          }
          *(uint *)(param_1 + 1) = uVar7;
          if (uVar7 == 0) {
            FUN__text__004728b0(param_1);
          }
          *(short *)(param_1 + 5) = (short)param_1[5] + -1;
          return;
        }
        bVar5 = *(uint *)(lVar10 + 0x31c) < uVar2;
        if (uVar4 != uVar3) {
          bVar5 = uVar4 < uVar3;
        }
      }
      else {
        bVar5 = fVar11 < *(float *)(lVar10 + 0x318);
      }
      uVar4 = uVar9 - bVar5;
      if (bVar5 != 0) {
        iVar8 = iVar1 + 1;
      }
      uVar9 = uVar4 >> 1;
    } while (1 < uVar4);
  }
  return;
}


