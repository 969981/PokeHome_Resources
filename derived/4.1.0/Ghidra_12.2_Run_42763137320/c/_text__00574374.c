/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00574374; name: FUN_.text__00574374
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00574374(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  *param_1 = _DAT_008a3b98 + 0x10;
  lVar1 = *(long *)(param_2 + 0x40);
  lVar3 = *(long *)(param_2 + 0x48);
  lVar9 = *(long *)(param_2 + 0x50);
  *(undefined4 *)(param_1 + 0xb) = *(undefined4 *)(param_2 + 0x58);
  lVar2 = *(long *)(param_2 + 8);
  lVar12 = *(long *)(param_2 + 0x18);
  param_1[2] = *(long *)(param_2 + 0x10);
  param_1[3] = lVar12;
  param_1[1] = lVar2;
  lVar2 = *(long *)(param_2 + 0x20);
  lVar4 = *(long *)(param_2 + 0x28);
  lVar12 = *(long *)(param_2 + 0x30);
  lVar5 = *(long *)(param_2 + 0x38);
  *(undefined1 *)(param_1 + 0xb) = 1;
  param_1[9] = lVar3;
  param_1[10] = lVar9;
  param_1[4] = lVar2;
  param_1[7] = lVar5;
  param_1[8] = lVar1;
  param_1[5] = lVar4;
  param_1[6] = lVar12;
  uVar7 = *(undefined8 *)(param_2 + 0x7c);
  uVar8 = *(undefined8 *)(param_2 + 0x84);
  uVar10 = *(undefined8 *)(param_2 + 0x8c);
  *(undefined8 *)((long)param_1 + 0x94) = *(undefined8 *)(param_2 + 0x94);
  uVar6 = *(undefined8 *)(param_2 + 0x5c);
  uVar11 = *(undefined8 *)(param_2 + 100);
  uVar13 = *(undefined8 *)(param_2 + 0x6c);
  uVar14 = *(undefined8 *)(param_2 + 0x74);
  *(undefined8 *)((long)param_1 + 0x8c) = uVar10;
  *(undefined8 *)((long)param_1 + 0x84) = uVar8;
  *(undefined8 *)((long)param_1 + 0x7c) = uVar7;
  *(undefined1 *)((long)param_1 + 0x9a) = 1;
  *(undefined8 *)((long)param_1 + 0x74) = uVar14;
  *(undefined8 *)((long)param_1 + 0x6c) = uVar13;
  *(undefined8 *)((long)param_1 + 100) = uVar11;
  *(undefined8 *)((long)param_1 + 0x5c) = uVar6;
  uVar6 = *(undefined8 *)(param_2 + 0x9c);
  *(undefined8 *)((long)param_1 + 0xa4) = *(undefined8 *)(param_2 + 0xa4);
  *(undefined8 *)((long)param_1 + 0x9c) = uVar6;
  uVar6 = *(undefined8 *)(param_2 + 0xac);
  uVar7 = *(undefined8 *)(param_2 + 0xb4);
  uVar8 = *(undefined8 *)(param_2 + 0xbc);
  *(undefined4 *)((long)param_1 + 0xc4) = *(undefined4 *)(param_2 + 0xc4);
  *(undefined8 *)((long)param_1 + 0xbc) = uVar8;
  *(undefined8 *)((long)param_1 + 0xb4) = uVar7;
  *(undefined8 *)((long)param_1 + 0xac) = uVar6;
  return;
}


