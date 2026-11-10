/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0046be40; name: FUN_.text__0046be40
 */


undefined8 FUN__text__0046be40(long param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  ulong uVar8;
  float fVar9;
  
  uVar1 = *(uint *)(param_2 + 0x50);
  uVar2 = *(uint *)(param_1 + 0x10);
  if (uVar2 == 0) {
LAB__text__0046bebc:
    FUN__text__0046c930(param_1);
    uVar2 = *(uint *)(param_1 + 0x10);
    if (uVar2 == 0) {
      return 0;
    }
    uVar3 = 0;
    if (uVar2 != 0) {
      uVar3 = uVar1 / uVar2;
    }
    lVar5 = *(long *)(param_1 + 8);
    uVar8 = (ulong)(uVar1 - uVar3 * uVar2);
LAB__text__0046bed8:
    plVar7 = (long *)(lVar5 + uVar8 * 8);
    do {
      plVar7 = (long *)*plVar7;
      if (plVar7 == (long *)0x0) {
        puVar4 = (undefined8 *)FUN__text__00400f80(0,0x18);
        if (puVar4 == (undefined8 *)0x0) {
          return 0;
        }
        uVar6 = *(undefined8 *)(*(long *)(param_1 + 8) + uVar8 * 8);
        *(uint *)(puVar4 + 1) = uVar1;
        *puVar4 = uVar6;
        plVar7 = puVar4 + 2;
        *plVar7 = 0;
        *(undefined8 **)(*(long *)(param_1 + 8) + uVar8 * 8) = puVar4;
        *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
        lVar5 = *plVar7;
        goto joined_r0x0046bf5c;
      }
    } while (*(uint *)(plVar7 + 1) != uVar1);
    plVar7 = plVar7 + 2;
    lVar5 = *plVar7;
  }
  else {
    uVar3 = 0;
    if (uVar2 != 0) {
      uVar3 = uVar1 / uVar2;
    }
    uVar8 = (ulong)(uVar1 - uVar3 * uVar2);
    lVar5 = *(long *)(param_1 + 8);
    plVar7 = (long *)(lVar5 + uVar8 * 8);
    do {
      plVar7 = (long *)*plVar7;
      if (plVar7 == (long *)0x0) {
        fVar9 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 0x18));
        if (fVar9 / (float)uVar2 <= 0.9) goto LAB__text__0046bed8;
        goto LAB__text__0046bebc;
      }
    } while (*(uint *)(plVar7 + 1) != uVar1);
    plVar7 = plVar7 + 2;
    lVar5 = *plVar7;
  }
joined_r0x0046bf5c:
  if (lVar5 == 0) {
    *plVar7 = param_2;
    *(undefined8 *)(param_2 + 0x48) = 0;
    return 1;
  }
  *(long *)(param_2 + 0x48) = lVar5;
  *plVar7 = param_2;
  return 1;
}


