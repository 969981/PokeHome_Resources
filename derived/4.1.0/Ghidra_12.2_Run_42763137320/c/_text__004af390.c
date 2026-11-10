/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004af390; name: FUN_.text__004af390
 */


void FUN__text__004af390(uint *param_1,long *param_2,long param_3,long param_4,uint param_5,
                        uint param_6)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  int iVar4;
  ushort uVar5;
  bool bVar6;
  bool bVar7;
  long lVar8;
  int *piVar9;
  uint uVar10;
  ulong uVar11;
  uint uVar12;
  uint *puVar13;
  undefined8 uVar14;
  uint uVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  
  lVar17 = *(long *)(param_1 + 2);
  if (((lVar17 != 0) && ((*(byte *)(param_3 + 8) >> 2 & 1) != 0)) && (*param_1 != 0)) {
    uVar11 = 0;
    uVar18 = 0;
    uVar16 = 0;
    puVar13 = (uint *)(lVar17 + 4);
    do {
      uVar12 = *puVar13;
      uVar15 = (uint)uVar16;
      bVar7 = uVar15 != 0;
      bVar6 = uVar12 < param_6 + param_5;
      if (param_5 <= uVar12 && bVar6) {
        uVar15 = uVar15 + 1;
      }
      uVar16 = (ulong)uVar15;
      uVar10 = (uint)uVar11;
      if ((param_5 > uVar12 || !bVar6) || bVar7) {
        uVar10 = (uint)uVar18;
      }
      uVar18 = (ulong)uVar10;
      uVar11 = uVar11 + 1;
      puVar13 = puVar13 + 4;
    } while (*param_1 != uVar11);
    if (uVar15 != 0) {
      uVar10 = *(uint *)(param_2 + 1);
      uVar5 = *(ushort *)(param_4 + 0x12);
      uVar3 = *(undefined4 *)(param_3 + 0x280);
      uVar12 = uVar10;
      if (*(int *)((long)param_2 + 0xc) - uVar10 < uVar15) {
        uVar1 = uVar15 + *(int *)((long)param_2 + 0xc) + 5;
        lVar8 = FUN__text__00400fa0(5,*param_2,(ulong)uVar1 << 5);
        if (lVar8 == 0) {
          return;
        }
        uVar12 = *(uint *)(param_2 + 1);
        *param_2 = lVar8;
        *(uint *)((long)param_2 + 0xc) = uVar1;
      }
      piVar9 = (int *)(lVar17 + uVar18 * 0x10 + 4);
      do {
        uVar16 = uVar16 - 1;
        uVar14 = *(undefined8 *)(piVar9 + 1);
        puVar2 = (undefined8 *)(*param_2 + (ulong)uVar12 * 0x20);
        *puVar2 = *(undefined8 *)(piVar9 + -1);
        puVar2[1] = uVar14;
        iVar4 = *piVar9;
        *(undefined1 *)(puVar2 + 3) = 0;
        *(int *)(puVar2 + 2) =
             (int)((float)(iVar4 - param_5) * (float)uVar5 * (1.0 / (float)param_6));
        *(undefined4 *)((long)puVar2 + 0x14) = uVar3;
        uVar12 = (int)param_2[1] + 1;
        *(uint *)(param_2 + 1) = uVar12;
        piVar9 = piVar9 + 4;
      } while (uVar16 != 0);
      if (*(int *)(param_4 + 0x18) == 0) {
        *(uint *)(param_4 + 0x14) = uVar10;
      }
      *(uint *)(param_4 + 0x18) = *(int *)(param_4 + 0x18) + uVar15;
    }
  }
  return;
}


