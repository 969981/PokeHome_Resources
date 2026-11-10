/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004486c0; name: FUN_.text__004486c0
 */


void FUN__text__004486c0(long param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  ulong *puVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong *puVar9;
  ulong *puVar10;
  ulong *puVar11;
  
  uVar4 = (ulong)*(uint *)(param_1 + 0x10);
  if (*(uint *)(param_1 + 0x10) != 0) {
    puVar5 = *(ulong **)(param_1 + 8);
    puVar9 = puVar5;
LAB__text__0044871c:
    do {
      uVar6 = *(uint *)(param_2 + 0x18);
      if (uVar6 != 0) {
        uVar7 = *puVar9;
        iVar3 = 0;
        do {
          iVar1 = iVar3 + (uVar6 >> 1);
          uVar8 = *(ulong *)(*(long *)(param_2 + 0x10) + (long)iVar1 * 8);
          if (uVar8 == uVar7) {
            puVar9 = puVar9 + 3;
            if (puVar9 == puVar5 + uVar4 * 3) {
              return;
            }
            goto LAB__text__0044871c;
          }
          if (uVar8 < uVar7) {
            iVar3 = iVar1 + 1;
          }
          uVar2 = uVar6 - (uVar8 < uVar7);
          uVar6 = uVar2 >> 1;
        } while (1 < uVar2);
      }
      if (puVar9[1] != 0) {
        *(undefined4 *)(puVar9 + 2) = 0;
        FUN__text__00400fc0(0);
        puVar9[1] = 0;
        *(undefined4 *)((long)puVar9 + 0x14) = 0;
        puVar5 = *(ulong **)(param_1 + 8);
        uVar4 = (ulong)*(uint *)(param_1 + 0x10);
      }
      iVar3 = (int)uVar4;
      if (puVar9 < puVar5 + uVar4 * 3 + -3) {
        puVar11 = puVar9;
        do {
          puVar10 = puVar11 + 3;
          *puVar11 = *puVar10;
          if (puVar11[1] != 0) {
            *(undefined4 *)(puVar11 + 2) = 0;
            FUN__text__00400fc0(0);
          }
          puVar11[1] = puVar11[4];
          *(int *)(puVar11 + 2) = (int)puVar11[5];
          *(undefined4 *)((long)puVar11 + 0x14) = *(undefined4 *)((long)puVar11 + 0x2c);
          puVar11[4] = 0;
          puVar11[5] = 0;
          puVar11 = puVar10;
        } while (puVar10 < puVar5 + uVar4 * 3 + -3);
        iVar3 = *(int *)(param_1 + 0x10);
        puVar5 = *(ulong **)(param_1 + 8);
      }
      uVar6 = iVar3 - 1;
      uVar4 = (ulong)uVar6;
      *(uint *)(param_1 + 0x10) = uVar6;
    } while (puVar9 != puVar5 + (ulong)uVar6 * 3);
  }
  return;
}


