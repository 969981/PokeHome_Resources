/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0042c860; name: FUN_.text__0042c860
 */


void FUN__text__0042c860(long *param_1,long *param_2)

{
  int *piVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  char cVar5;
  bool bVar6;
  long lVar7;
  long lVar8;
  
  lVar7 = param_2[0x11];
  param_2[0x11] = 0;
  (**(code **)(*param_1 + 0x28))();
  param_1[10] = param_2[10];
  lVar8 = param_2[0xb];
  param_1[0xb] = lVar8;
  if ((int)param_1[9] == 0) {
    lVar2 = param_2[3];
    param_1[2] = param_2[2];
    param_1[3] = lVar2;
    lVar2 = param_2[4];
    lVar3 = param_2[5];
    lVar4 = param_2[7];
    param_1[6] = param_2[6];
    param_1[7] = lVar4;
    param_1[4] = lVar2;
    param_1[5] = lVar3;
  }
  if (lVar8 != 0) {
    nn::os::LockMutex((MutexType *)(lVar8 + 0x70));
    if (*(long *)(lVar8 + 0x90) == 0) {
      *(long **)(lVar8 + 0x90) = param_1;
      param_1[0xe] = 0;
    }
    else {
      param_1[0xe] = *(long *)(lVar8 + 0x90);
      *(long **)(lVar8 + 0x90) = param_1;
    }
    nn::os::UnlockMutex((MutexType *)(lVar8 + 0x70));
    piVar1 = (int *)(lVar8 + 0x14);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = *piVar1 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  param_2[10] = 0;
  (**(code **)(*param_2 + 0x28))(param_2);
  param_1[0x11] = lVar7;
  return;
}


