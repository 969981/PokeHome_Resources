/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0053d870; name: FUN_.text__0053d870
 */


void FUN__text__0053d870(long param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  ulong uVar7;
  float fVar8;
  
  uVar1 = *(uint *)(param_1 + 0x38);
  if (uVar1 == 0) {
LAB__text__0053d8f4:
    FUN__text__0053db20(param_1 + 0x28);
    uVar1 = *(uint *)(param_1 + 0x38);
    if (uVar1 != 0) {
      uVar2 = 0;
      if (uVar1 != 0) {
        uVar2 = param_2 / uVar1;
      }
      lVar4 = *(long *)(param_1 + 0x30);
      uVar7 = (ulong)(param_2 - uVar2 * uVar1);
LAB__text__0053d910:
      plVar6 = (long *)(lVar4 + uVar7 * 8);
      while (plVar6 = (long *)*plVar6, plVar6 != (long *)0x0) {
        if (*(uint *)(plVar6 + 1) == param_2) {
          *(undefined4 *)((long)plVar6 + 0xc) = 1;
          return;
        }
      }
      puVar3 = (undefined8 *)FUN__text__00400f80(0xb,0x10);
      if (puVar3 != (undefined8 *)0x0) {
        uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x30) + uVar7 * 8);
        *(uint *)(puVar3 + 1) = param_2;
        *puVar3 = uVar5;
        *(undefined8 **)(*(long *)(param_1 + 0x30) + uVar7 * 8) = puVar3;
        *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
        *(undefined4 *)((long)puVar3 + 0xc) = 1;
        return;
      }
    }
  }
  else {
    uVar2 = 0;
    if (uVar1 != 0) {
      uVar2 = param_2 / uVar1;
    }
    uVar7 = (ulong)(param_2 - uVar2 * uVar1);
    lVar4 = *(long *)(param_1 + 0x30);
    plVar6 = (long *)(lVar4 + uVar7 * 8);
    do {
      plVar6 = (long *)*plVar6;
      if (plVar6 == (long *)0x0) {
        fVar8 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 0x40));
        if (0.9 < fVar8 / (float)uVar1) goto LAB__text__0053d8f4;
        goto LAB__text__0053d910;
      }
    } while (*(uint *)(plVar6 + 1) != param_2);
    *(int *)((long)plVar6 + 0xc) = *(int *)((long)plVar6 + 0xc) + 1;
  }
  return;
}


