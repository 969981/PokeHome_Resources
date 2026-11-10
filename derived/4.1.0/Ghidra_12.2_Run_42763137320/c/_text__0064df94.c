/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0064df94; name: FUN_.text__0064df94
 */


/* WARNING: Removing unreachable block (ram,0x0064e08c) */
/* WARNING: Removing unreachable block (ram,0x0064e0a0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0064df94(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  long lVar12;
  
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  uVar7 = tpidr_el0;
  uVar7 = uVar7 & 0xffffffffffffe000;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  *param_1 = 0x8677a8;
  uVar6 = 0;
  if (uVar7 != 0) {
    if (*(long *)(uVar7 + 0x98) == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = *(undefined8 *)(uVar7 + *(long *)(uVar7 + 0x98) * 8 + 0x10);
    }
  }
  param_1[0xb] = 0;
  param_1[0xe] = uVar6;
  *_DAT_008a6558 = 1;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0x14] = 0;
  *param_1 = 0x899c88;
  param_1[1] = uVar6;
  param_1[9] = 0x899cb8;
  param_1[10] = 0;
  param_1[0xf] = 0x7ffffffffffffff;
  puVar2 = param_1 + 0x16;
  *puVar2 = param_1[0xe];
  param_1[0x17] = param_1[0xf];
  plVar4 = (long *)param_1[0x14];
  if (plVar4 == (long *)0x0) {
    param_1[0x1c] = 0;
    param_1[0x1f] = 0;
    param_1[0x20] = 0;
    param_1[0x1e] = 0;
  }
  else if (plVar4 == param_1 + 0x10) {
    param_1[0x1c] = param_1 + 0x18;
    (**(code **)(*(long *)param_1[0x14] + 0x18))();
    param_1[0x1f] = 0;
    param_1[0x20] = 0;
    param_1[0x1e] = 0;
  }
  else {
    uVar6 = (**(code **)(*plVar4 + 0x10))();
    param_1[0x1c] = uVar6;
    param_1[0x1f] = 0;
    param_1[0x20] = 0;
    param_1[0x1e] = 0;
  }
  if ((ulong)param_1[0x17] < 5) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  puVar5 = (undefined8 *)(**(code **)(*(long *)*puVar2 + 0x10))((long *)*puVar2,0xa0,8);
  puVar3 = (undefined8 *)param_1[0x1e];
  lVar12 = param_1[0x1f];
  if (lVar12 != 0) {
    uVar7 = tpidr_el0;
    uVar7 = uVar7 & 0xffffffffffffe000;
    lVar9 = *(long *)(uVar7 + 0x98);
    puVar11 = puVar3;
    puVar8 = puVar5;
    do {
      if (lVar9 == 0x10) {
                    /* WARNING: Subroutine does not return */
        FUN__text__00102c10();
      }
      *(undefined8 *)((uVar7 | 0x18) + lVar9 * 8) = *puVar2;
      *(long *)(uVar7 + 0x98) = *(long *)(uVar7 + 0x98) + 1;
      uVar6 = *puVar11;
      *puVar11 = 0;
      *puVar8 = uVar6;
      puVar1 = puVar11 + 1;
      uVar6 = puVar11[2];
      uVar10 = puVar11[3];
      puVar11 = puVar11 + 4;
      puVar8[1] = *puVar1;
      puVar8[2] = uVar6;
      puVar8[3] = uVar10;
      puVar8 = puVar8 + 4;
      lVar9 = *(long *)(uVar7 + 0x98) + -1;
      *(long *)(uVar7 + 0x98) = lVar9;
    } while (puVar11 != puVar3 + lVar12 * 4);
  }
  if (puVar3 != (undefined8 *)0x0) {
    for (lVar12 = param_1[0x1f]; lVar12 != 0; lVar12 = lVar12 + -1) {
      puVar11 = (undefined8 *)*puVar3;
      *puVar3 = 0;
      if (puVar11 != (undefined8 *)0x0) {
        (**(code **)*puVar11)(puVar11);
        (**(code **)(*(long *)puVar3[1] + 0x18))((long *)puVar3[1],puVar11,puVar3[2],puVar3[3]);
      }
      puVar3 = puVar3 + 4;
    }
    (**(code **)(*(long *)*puVar2 + 0x18))((long *)*puVar2,param_1[0x1e],param_1[0x20] << 5,8);
  }
  param_1[0x1e] = puVar5;
  param_1[0x20] = 5;
  return;
}


