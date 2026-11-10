/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0016f4b0; name: FUN_.text__0016f4b0
 */


void FUN__text__0016f4b0(long param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar7;
  long *plVar6;
  long *plVar8;
  long *plVar9;
  long lVar10;
  
  lVar4 = *(long *)(param_1 + 0x150);
  *(undefined8 *)(param_1 + 0x150) = 0;
  if (lVar4 != 0) {
    lVar5 = 0;
    do {
      lVar10 = lVar4 + lVar5;
      lVar2 = *(long *)(lVar10 + 0x3b8);
      *(undefined8 *)(lVar10 + 0x3b8) = 0;
      if (lVar2 != 0) {
        (**(code **)(**(long **)(lVar10 + 0x3c0) + 0x18))
                  (*(long **)(lVar10 + 0x3c0),lVar2,*(undefined8 *)(lVar10 + 0x3c8),
                   *(undefined8 *)(lVar10 + 0x3d0));
      }
      bVar1 = lVar5 != -0x3a0;
      lVar5 = lVar5 + -0x20;
    } while (bVar1);
    if (*(long *)(lVar4 + 8) != 0) {
      (**(code **)(*(long *)(*(long *)(lVar4 + 8) + 0x48) + 0x18))();
      *(undefined8 *)(lVar4 + 8) = 0;
    }
    (**(code **)(**(long **)(param_1 + 0x158) + 0x18))
              (*(long **)(param_1 + 0x158),lVar4,*(undefined8 *)(param_1 + 0x160),
               *(undefined8 *)(param_1 + 0x168));
  }
  plVar6 = (long *)(param_1 + 0x150);
  do {
    plVar7 = plVar6 + -4;
    lVar4 = *plVar7;
    *plVar7 = 0;
    if (lVar4 != 0) {
      plVar9 = (long *)(lVar4 + 0x3d0);
      do {
        plVar8 = plVar9 + -4;
        lVar5 = *plVar8;
        *plVar8 = 0;
        if (lVar5 != 0) {
          lVar10 = 0x3c0;
          do {
            lVar2 = lVar5 + lVar10;
            lVar3 = *(long *)(lVar2 + 0x10);
            *(undefined8 *)(lVar2 + 0x10) = 0;
            if (lVar3 != 0) {
              (**(code **)(**(long **)(lVar2 + 0x18) + 0x18))
                        (*(long **)(lVar2 + 0x18),lVar3,*(undefined8 *)(lVar2 + 0x20),
                         *(undefined8 *)(lVar2 + 0x28));
            }
            lVar10 = lVar10 + -0x20;
          } while (lVar10 != 0);
          if (*(long *)(lVar5 + 0x20) != 0) {
            (**(code **)(*(long *)(*(long *)(lVar5 + 0x20) + 0x48) + 0x18))();
            *(undefined8 *)(lVar5 + 0x20) = 0;
          }
          (**(code **)(*(long *)plVar9[-3] + 0x18))((long *)plVar9[-3],lVar5,plVar9[-2],plVar9[-1]);
        }
        plVar9 = plVar8;
      } while (plVar8 != (long *)(lVar4 + 0x10));
      (**(code **)(*(long *)plVar6[-3] + 0x18))((long *)plVar6[-3],lVar4,plVar6[-2],plVar6[-1]);
    }
    plVar6 = plVar7;
  } while (plVar7 != (long *)(param_1 + 0x10));
  return;
}


