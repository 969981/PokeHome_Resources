/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004054d0; name: FUN_.text__004054d0
 */


void FUN__text__004054d0(int param_1,long param_2,undefined8 *param_3,undefined8 *param_4,
                        uint param_5)

{
  long *plVar1;
  ushort uVar2;
  ulong uVar3;
  undefined8 uVar4;
  uint uVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  uint *puVar10;
  long *plVar11;
  
  *(uint *)((long)param_4 + 0xc) = param_5;
  param_4[8] = param_2;
  plVar11 = param_4 + 0x10;
  lVar7 = (ulong)param_5 * 8 + (long)param_1 * 0x638;
  *(uint *)(param_4 + 5) = *(uint *)(param_4 + 5) & 0xfffffffb;
  puVar10 = (uint *)(&DAT_00ae89c0 + lVar7 + 0xa8);
  *(uint *)((long)param_4 + 0x24) = *puVar10;
  uVar2 = *(ushort *)(&DAT_00ae89c0 + lVar7 + 0xac);
  *param_4 = 0;
  *(undefined4 *)(param_4 + 4) = 0;
  *(uint *)(param_4 + 1) = (uint)uVar2;
  param_4[3] = 0;
  uVar2 = *(ushort *)(&DAT_00ae89c0 + lVar7 + 0xac);
  uVar5 = (uint)uVar2;
  puVar9 = param_3;
  if (1 < uVar2) {
    uVar3 = (ulong)*puVar10;
    uVar8 = *(ulong *)(&DAT_00ae8a28 + (long)param_1 * 0x638);
    plVar6 = (long *)((long)plVar11 + uVar3 * (uint)uVar2);
    puVar9 = (undefined8 *)((long)plVar11 + uVar3);
    *param_3 = puVar9;
    plVar1 = (long *)((long)param_4 + uVar8);
    if (plVar6 <= plVar1 || uVar8 >> 1 <= uVar3) {
      plVar1 = plVar6;
    }
    if (plVar1 <= (long *)((long)puVar9 + uVar3)) {
      *puVar9 = 0;
      *(undefined4 *)(param_4 + 2) = 2;
      if (*(uint *)(param_4 + 1) < 3) goto LAB__text__004055fc;
      goto LAB__text__004055bc;
    }
    uVar5 = 2;
    do {
      plVar6 = (long *)((long)plVar11 + uVar3);
      *plVar6 = (long)plVar11 + uVar3 * 2;
      uVar5 = uVar5 + 1;
      plVar11 = plVar6;
    } while ((long *)((long)plVar6 + uVar3 * 2) < plVar1);
    puVar9 = (undefined8 *)((long)plVar6 + uVar3);
  }
  *puVar9 = 0;
  *(uint *)(param_4 + 2) = uVar5;
  if (*(uint *)(param_4 + 1) <= uVar5) {
LAB__text__004055fc:
    lVar7 = param_2 + (ulong)param_5 * 8;
    puVar9 = (undefined8 *)(lVar7 + 0x2d20);
    lVar7 = *(long *)(lVar7 + 0x2d20);
    uVar4 = 0;
    if (lVar7 != 0) {
      *(undefined8 **)(lVar7 + 0x50) = param_4;
      uVar4 = *puVar9;
    }
    param_4[9] = uVar4;
    *puVar9 = param_4;
    *(long *)(param_2 + 0xce8) = *(long *)(param_2 + 0xce8) + 1;
    *(uint *)((long)param_4 + 0x14) = *(uint *)(param_4 + 1);
    return;
  }
LAB__text__004055bc:
  uVar4 = 0;
  if (param_3[1] != 0) {
    *(undefined8 **)(param_3[1] + 0x50) = param_4;
    uVar4 = param_3[1];
  }
  param_4[9] = uVar4;
  param_3[1] = param_4;
  *(undefined4 *)((long)param_4 + 0x14) = *(undefined4 *)(param_4 + 2);
  return;
}


