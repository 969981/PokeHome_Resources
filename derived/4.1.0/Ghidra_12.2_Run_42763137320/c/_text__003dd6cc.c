/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003dd6cc; name: FUN_.text__003dd6cc
 */


void FUN__text__003dd6cc(long *param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  uint *puVar5;
  ulong *puVar6;
  long *plVar7;
  void *pvVar8;
  long *plVar9;
  
  puVar5 = (uint *)*param_1;
  if (puVar5 != (uint *)0x0) {
    if ((*puVar5 & 1) == 0) {
      if (((*puVar5 >> 1 & 1) == 0) && (*(long **)(puVar5 + 2) != (long *)0x0)) {
        (**(code **)(**(long **)(puVar5 + 2) + 8))();
      }
    }
    else {
      plVar7 = *(long **)(puVar5 + 2);
      if (plVar7 != (long *)0x0) {
        if (*plVar7 != 0) {
          lVar4 = plVar7[1];
          if ((lVar4 != plVar7[2]) && (uVar3 = FUN__text__003d6a10(), (uVar3 & 1) != 0)) {
            plVar9 = (long *)*plVar7;
            lVar4 = (lVar4 - (long)plVar7) + -0x18;
            if (lVar4 < 0) {
              if (*(int *)((long)plVar9 + 0x3c) == 0) {
                *(undefined4 *)((long)plVar9 + 0x3c) = 0x16;
              }
            }
            else {
              puVar6 = (ulong *)(plVar9 + 2);
              uVar1 = *puVar6;
              uVar2 = plVar9[3];
              uVar3 = uVar1 + lVar4;
              if (uVar2 < uVar3) {
                *puVar6 = 0;
                plVar9[3] = 0;
                plVar9[1] = plVar9[1] + uVar2;
                lVar4 = (**(code **)(*plVar9 + 0x20))(plVar9,(lVar4 - uVar2) + uVar1);
                plVar9[1] = plVar9[1] + lVar4;
              }
              else {
                *puVar6 = uVar3;
              }
            }
          }
        }
        operator_delete(plVar7);
      }
    }
    pvVar8 = (void *)*param_1;
    if (*(void **)((long)pvVar8 + 0x10) != (void *)0x0) {
      operator_delete__(*(void **)((long)pvVar8 + 0x10));
      pvVar8 = (void *)*param_1;
      if (pvVar8 == (void *)0x0) goto LAB__text__003dd7d0;
    }
    (**(code **)(*(long *)((long)pvVar8 + 0x60) + 0x18))();
    operator_delete(pvVar8);
  }
LAB__text__003dd7d0:
  if ((void *)param_1[3] == (void *)0x0) {
    return;
  }
  operator_delete__((void *)param_1[3]);
  return;
}


