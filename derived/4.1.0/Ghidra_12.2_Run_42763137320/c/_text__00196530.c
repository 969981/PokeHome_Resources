/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00196530; name: FUN_.text__00196530
 */


void FUN__text__00196530(void *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  
  plVar5 = (long *)((long)param_1 + 0x3d0);
  do {
    plVar4 = plVar5 + -4;
    lVar3 = *plVar4;
    *plVar4 = 0;
    if (lVar3 != 0) {
      lVar6 = 0x3c0;
      do {
        lVar1 = lVar3 + lVar6;
        lVar2 = *(long *)(lVar1 + 0x10);
        *(undefined8 *)(lVar1 + 0x10) = 0;
        if (lVar2 != 0) {
          (**(code **)(**(long **)(lVar1 + 0x18) + 0x18))
                    (*(long **)(lVar1 + 0x18),lVar2,*(undefined8 *)(lVar1 + 0x20),
                     *(undefined8 *)(lVar1 + 0x28));
        }
        lVar6 = lVar6 + -0x20;
      } while (lVar6 != 0);
      if (*(long *)(lVar3 + 0x20) != 0) {
        (**(code **)(*(long *)(*(long *)(lVar3 + 0x20) + 0x48) + 0x18))();
        *(undefined8 *)(lVar3 + 0x20) = 0;
      }
      (**(code **)(*(long *)plVar5[-3] + 0x18))((long *)plVar5[-3],lVar3,plVar5[-2],plVar5[-1]);
    }
    plVar5 = plVar4;
  } while (plVar4 != (long *)((long)param_1 + 0x10));
  operator_delete(param_1);
  return;
}


