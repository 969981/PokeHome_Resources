/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002fa3d8; name: FUN_.text__002fa3d8
 */


undefined8 FUN__text__002fa3d8(long param_1,long *param_2,uint param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  code *pcVar6;
  undefined8 uVar7;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x1c8));
  if (*(long *)(param_1 + 0x1a8) != 0) {
    plVar5 = (long *)FUN__text__002ff034();
    if (*plVar5 == *param_2) {
      FUN__text__002ff038(*(undefined8 *)(param_1 + 0x1a8));
      uVar7 = 1;
      if ((param_3 & 1) != 0) {
        *(undefined1 *)(param_1 + 0x520) = 1;
        lVar1 = *param_2;
        lVar3 = param_2[1];
        lVar2 = param_2[2];
        lVar4 = param_2[3];
        if (lVar4 != 0) {
          plVar5 = (long *)(lVar4 + 0x48);
          (**(code **)(*plVar5 + 0x10))(plVar5);
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
        pcVar6 = *(code **)(param_1 + 0x5d8);
        if (pcVar6 != (code *)0x0) {
          *(undefined8 *)(param_1 + 0x5e0) = 0;
          *(undefined8 *)(param_1 + 0x5e8) = 0;
          *(undefined8 *)(param_1 + 0x5d0) = 0;
          *(undefined8 *)(param_1 + 0x5d8) = 0;
          (*pcVar6)(param_1 + 0x5f0);
        }
        *(long *)(param_1 + 0x5f0) = param_1;
        *(long *)(param_1 + 0x5f8) = lVar1;
        *(long *)(param_1 + 0x600) = lVar3;
        *(long *)(param_1 + 0x608) = lVar2;
        *(long *)(param_1 + 0x610) = lVar4;
        if (lVar4 == 0) {
          *(code **)(param_1 + 0x5d0) = FUN__text__002fce00;
          *(code **)(param_1 + 0x5d8) = FUN__text__002fced0;
          *(undefined1 **)(param_1 + 0x5e0) = &LAB__text__002fcf04;
          *(undefined1 **)(param_1 + 0x5e8) = &LAB__text__002fcf40;
          nn::oe::EnterExitRequestHandlingSection();
        }
        else {
          plVar5 = (long *)(lVar4 + 0x48);
          (**(code **)(*plVar5 + 0x10))(plVar5);
          *(code **)(param_1 + 0x5d0) = FUN__text__002fce00;
          *(code **)(param_1 + 0x5d8) = FUN__text__002fced0;
          *(undefined1 **)(param_1 + 0x5e0) = &LAB__text__002fcf04;
          *(undefined1 **)(param_1 + 0x5e8) = &LAB__text__002fcf40;
          nn::oe::EnterExitRequestHandlingSection();
          (**(code **)(*plVar5 + 0x18))(plVar5);
          (**(code **)(*plVar5 + 0x18))(plVar5);
        }
        uVar7 = 1;
      }
      goto LAB__text__002fa508;
    }
  }
  uVar7 = 0;
LAB__text__002fa508:
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x1c8));
  return uVar7;
}


