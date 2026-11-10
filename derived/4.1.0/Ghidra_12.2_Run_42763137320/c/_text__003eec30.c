/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003eec30; name: FUN_.text__003eec30
 */


void FUN__text__003eec30(long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  long *plVar5;
  long *plVar6;
  
  FUN__text__003f2e08(*(undefined8 *)(param_1 + 0x1f0),0xffffffffffffffff);
  FUN__text__003eee20(param_1);
  FUN__text__003ef370(param_1);
  lVar2 = *(long *)(param_1 + 0x210);
  *(undefined1 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x1e8) = 0;
  *(undefined8 *)(param_1 + 0x210) = 0;
  if (lVar2 != 0) {
    FUN__text__003f02e0(param_1 + 0x218);
  }
  lVar2 = *(long *)(param_1 + 0x230);
  *(undefined8 *)(param_1 + 0x230) = 0;
  if (lVar2 != 0) {
    nn::os::FinalizeMutex((MutexType *)(lVar2 + 0x60));
    if (*(long **)(lVar2 + 0x30) != (long *)0x0) {
      plVar5 = *(long **)(lVar2 + 0x30);
      do {
        plVar6 = (long *)*plVar5;
        FUN__text__003ef660((undefined8 *)(lVar2 + 0x38),plVar5 + 2);
        plVar1 = *(long **)(lVar2 + 0x38);
        (**(code **)(*plVar1 + 0x18))(plVar1,plVar5,0x90,8);
        plVar5 = plVar6;
      } while (plVar6 != (long *)0x0);
    }
    lVar3 = *(long *)(lVar2 + 8);
    *(undefined8 *)(lVar2 + 8) = 0;
    if (lVar3 != 0) {
      (**(code **)(**(long **)(lVar2 + 0x18) + 0x18))
                (*(long **)(lVar2 + 0x18),lVar3,*(long *)(lVar2 + 0x10) << 3,8);
    }
    (**(code **)(**(long **)(param_1 + 0x238) + 0x18))
              (*(long **)(param_1 + 0x238),lVar2,*(undefined8 *)(param_1 + 0x240),
               *(undefined8 *)(param_1 + 0x248));
  }
  plVar5 = *(long **)(param_1 + 0x250);
  *(undefined8 *)(param_1 + 0x250) = 0;
  if (plVar5 != (long *)0x0) {
    nn::os::FinalizeMutex((MutexType *)(plVar5 + 0xc));
    plVar1 = (long *)plVar5[5];
    while (plVar1 != (long *)0x0) {
      lVar2 = *plVar1;
      pcVar4 = (code *)plVar1[5];
      if (pcVar4 != (code *)0x0) {
        plVar1[6] = 0;
        plVar1[7] = 0;
        plVar1[4] = 0;
        plVar1[5] = 0;
        (*pcVar4)(plVar1 + 8);
      }
      (**(code **)(*(long *)plVar5[6] + 0x18))((long *)plVar5[6],plVar1,0xb0,0x10);
      plVar1 = (long *)lVar2;
    }
    lVar2 = *plVar5;
    *plVar5 = 0;
    if (lVar2 != 0) {
      (**(code **)(*(long *)plVar5[2] + 0x18))((long *)plVar5[2],lVar2,plVar5[1] << 3,0x10);
    }
    (**(code **)(**(long **)(param_1 + 600) + 0x18))
              (*(long **)(param_1 + 600),plVar5,*(undefined8 *)(param_1 + 0x260),
               *(undefined8 *)(param_1 + 0x268));
  }
  FUN__text__003f2e8c(*(undefined8 *)(param_1 + 0x1f0));
  FUN__text__003f29b4(*(undefined8 *)(param_1 + 0x1f0));
  lVar2 = *(long *)(param_1 + 0x1f0);
  *(undefined8 *)(param_1 + 0x1f0) = 0;
  if (lVar2 != 0) {
    FUN__text__003f22b8(lVar2);
    (**(code **)(**(long **)(param_1 + 0x1f8) + 0x18))
              (*(long **)(param_1 + 0x1f8),lVar2,*(undefined8 *)(param_1 + 0x200),
               *(undefined8 *)(param_1 + 0x208));
  }
  *(undefined8 *)(param_1 + 0x50) = 0;
  return;
}


