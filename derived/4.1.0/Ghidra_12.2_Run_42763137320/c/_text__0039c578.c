/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0039c578; name: FUN_.text__0039c578
 */


undefined8 FUN__text__0039c578(long param_1,long *param_2,uint param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  code *pcVar6;
  undefined8 uVar7;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x1b0));
  if (*(long *)(param_1 + 400) != 0) {
    plVar5 = (long *)FUN__text__003a0754();
    if (*plVar5 == *param_2) {
      FUN__text__003a0758(*(undefined8 *)(param_1 + 400));
      uVar7 = 1;
      if ((param_3 & 1) != 0) {
        *(undefined1 *)(param_1 + 0x500) = 1;
        lVar1 = *param_2;
        lVar3 = param_2[1];
        lVar2 = param_2[2];
        lVar4 = param_2[3];
        if (lVar4 != 0) {
          plVar5 = (long *)(lVar4 + 0x48);
          (**(code **)(*plVar5 + 0x10))(plVar5);
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
        pcVar6 = *(code **)(param_1 + 0x5b8);
        if (pcVar6 != (code *)0x0) {
          *(undefined8 *)(param_1 + 0x5c0) = 0;
          *(undefined8 *)(param_1 + 0x5c8) = 0;
          *(undefined8 *)(param_1 + 0x5b0) = 0;
          *(undefined8 *)(param_1 + 0x5b8) = 0;
          (*pcVar6)(param_1 + 0x5d0);
        }
        *(long *)(param_1 + 0x5d0) = param_1;
        *(long *)(param_1 + 0x5d8) = lVar1;
        *(long *)(param_1 + 0x5e0) = lVar3;
        *(long *)(param_1 + 0x5e8) = lVar2;
        *(long *)(param_1 + 0x5f0) = lVar4;
        if (lVar4 == 0) {
          *(code **)(param_1 + 0x5b0) = FUN__text__0039f060;
          *(code **)(param_1 + 0x5b8) = FUN__text__0039f130;
          *(undefined1 **)(param_1 + 0x5c0) = &LAB__text__0039f164;
          *(undefined1 **)(param_1 + 0x5c8) = &LAB__text__0039f1a0;
          nn::oe::EnterExitRequestHandlingSection();
        }
        else {
          plVar5 = (long *)(lVar4 + 0x48);
          (**(code **)(*plVar5 + 0x10))(plVar5);
          *(code **)(param_1 + 0x5b0) = FUN__text__0039f060;
          *(code **)(param_1 + 0x5b8) = FUN__text__0039f130;
          *(undefined1 **)(param_1 + 0x5c0) = &LAB__text__0039f164;
          *(undefined1 **)(param_1 + 0x5c8) = &LAB__text__0039f1a0;
          nn::oe::EnterExitRequestHandlingSection();
          (**(code **)(*plVar5 + 0x18))(plVar5);
          (**(code **)(*plVar5 + 0x18))(plVar5);
        }
        uVar7 = 1;
      }
      goto LAB__text__0039c6a8;
    }
  }
  uVar7 = 0;
LAB__text__0039c6a8:
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x1b0));
  return uVar7;
}


