/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004ae7a0; name: FUN_.text__004ae7a0
 */


undefined8 FUN__text__004ae7a0(long param_1,uint param_2,uint *param_3)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int *piVar8;
  ulong uVar9;
  int local_54;
  long local_38;
  
  if (param_2 == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = 0;
    uVar7 = param_2;
    do {
      puVar4 = (uint *)(param_1 + (ulong)*(uint *)(param_1 + 0x20) * 4 + 0x18);
      uVar5 = *puVar4;
      if (uVar5 == 0) {
        if (*(long **)(param_1 + 0x40) == (long *)0x0) break;
        iVar2 = (**(code **)(**(long **)(param_1 + 0x40) + 0x70))();
        if (iVar2 == 4) {
LAB__text__004ae938:
          uVar3 = 0x38;
          goto LAB__text__004ae918;
        }
        uVar9 = (ulong)(*(int *)(param_1 + 0x20) == 0);
        piVar8 = (int *)(param_1 + uVar9 * 4 + 0x18);
        if (*piVar8 == 0) {
          iVar2 = (**(code **)(**(long **)(param_1 + 0x40) + 0x50))
                            (*(long **)(param_1 + 0x40),uVar7,1,&local_38);
          if (iVar2 != 1) goto LAB__text__004ae938;
          if (local_38 == 0) {
            uVar5 = *(uint *)(param_1 + 0x30);
            local_54 = 0;
            uVar1 = 0;
            if (uVar5 != 0) {
              uVar1 = *(uint *)(param_1 + 0x24) / uVar5;
            }
            iVar2 = (**(code **)(**(long **)(param_1 + 0x40) + 0x38))
                              ((float)(uVar1 * uVar5) / *(float *)(param_1 + 0x48),
                               *(long **)(param_1 + 0x40),*(undefined8 *)(param_1 + uVar9 * 8),
                               uVar1 * uVar5,0,*(undefined1 *)(param_1 + 0x4c),&local_54);
            if (iVar2 != 1) goto LAB__text__004ae938;
            if (local_54 != 0) {
              *piVar8 = local_54;
            }
          }
          else {
            uVar6 = uVar6 + (int)local_38;
            uVar7 = uVar7 - (int)local_38;
          }
        }
        else {
          *(uint *)(param_1 + 0x20) = (uint)(*(int *)(param_1 + 0x20) == 0);
          *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_1 + uVar9 * 8);
        }
      }
      else {
        uVar1 = uVar5;
        if (uVar7 <= uVar5) {
          uVar1 = uVar7;
        }
        if (*(long *)(param_1 + 0x50) == 0) {
          *(ulong *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + (ulong)uVar1;
        }
        else {
          *(ulong *)(param_1 + 0x50) = *(long *)(param_1 + 0x50) + (ulong)uVar1;
          uVar5 = *puVar4;
        }
        uVar6 = uVar1 + uVar6;
        *puVar4 = uVar5 - uVar1;
        uVar7 = uVar7 - uVar1;
      }
    } while (uVar6 < param_2);
  }
  uVar3 = 1;
LAB__text__004ae918:
  *param_3 = uVar6;
  return uVar3;
}


