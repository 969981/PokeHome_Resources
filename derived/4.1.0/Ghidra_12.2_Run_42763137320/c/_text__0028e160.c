/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0028e160; name: FUN_.text__0028e160
 */


void FUN__text__0028e160(float param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  float fVar12;
  int local_70;
  uint uStack_6c;
  long local_68;
  
  uVar7 = *(ulong *)(*(long *)(param_2 + 0xb0) + 0xe8);
  iVar6 = (int)uVar7;
  if (iVar6 != 0) {
    uVar3 = *(uint *)(param_2 + 0xa0);
    uVar8 = 0;
    do {
      local_70 = (int)uVar8;
      uStack_6c = local_70 - (iVar6 - 1U >> 1);
      fVar12 = *(float *)(param_2 + 0xa4);
      fVar10 = *(float *)(param_2 + 0x204);
      for (fVar9 = fVar12 + param_1 + *(float *)(param_2 + 0xac) * (float)(int)uStack_6c;
          fVar9 < fVar12 - fVar10 * 0.5; fVar9 = fVar9 + fVar10) {
        uStack_6c = uStack_6c + iVar6;
      }
      for (; fVar12 + fVar10 * 0.5 <= fVar9; fVar9 = fVar9 - fVar10) {
        uStack_6c = uStack_6c - iVar6;
      }
      uVar11 = *(undefined4 *)(param_2 + 0xa8);
      uVar4 = *(uint *)(*(long *)(param_2 + 0xb8) + uVar8 * 4);
      plVar1 = (long *)(*(long *)(*(long *)(param_2 + 0xb0) + 0xe0) + uVar8 * 0x20);
      lVar2 = *plVar1;
      local_68 = plVar1[1];
      *(float *)(lVar2 + 0x30) = fVar9;
      *(undefined4 *)(lVar2 + 0x34) = uVar11;
      *(byte *)(lVar2 + 0x58) = *(byte *)(lVar2 + 0x58) | 0x10;
      iVar5 = uStack_6c - uVar3;
      do {
        uStack_6c = uVar3 + uStack_6c;
        iVar5 = iVar5 + uVar3;
      } while (iVar5 < 0);
      do {
        uStack_6c = uStack_6c - uVar3;
      } while (uVar3 <= uStack_6c);
      *(uint *)(*(long *)(param_2 + 0xb8) + uVar8 * 4) = uStack_6c;
      if ((uVar4 != uStack_6c) && (*(code **)(param_2 + 0xf0) != (code *)0x0)) {
        (**(code **)(param_2 + 0xf0))(param_2 + 0x110,&local_68,&uStack_6c,&local_70);
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 != (uVar7 & 0xffffffff));
  }
  *(float *)(param_2 + 0x1f8) = param_1;
  return;
}


