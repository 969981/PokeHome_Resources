/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005e4d10; name: FUN_.text__005e4d10
 */


void FUN__text__005e4d10(undefined8 *param_1)

{
  long lVar1;
  MultiWaitHolderType *pMVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  
  lVar3 = param_1[6];
  if (lVar3 == 0) {
    lVar5 = param_1[5];
    param_1[6] = 0;
  }
  else {
    uVar4 = 0;
    lVar5 = 0x40;
    do {
      lVar6 = param_1[5];
      pMVar2 = (MultiWaitHolderType *)(lVar6 + lVar5 + -0x40);
      lVar1 = nn::os::GetMultiWaitHolderUserData(pMVar2);
      if (lVar1 != 0) {
        nn::os::SetMultiWaitHolderUserData(pMVar2,0);
        nn::os::FinalizeMultiWaitHolder(pMVar2);
        lVar1 = *(long *)(lVar6 + lVar5);
        *(undefined8 *)(lVar6 + lVar5) = 0;
        if (lVar1 != 0) {
          (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
        }
      }
      if (*(long *)(lVar6 + lVar5) != 0) {
        (**(code **)(*(long *)(*(long *)(lVar6 + lVar5) + 0x48) + 0x18))();
        *(undefined8 *)(lVar6 + lVar5) = 0;
      }
      uVar4 = uVar4 + 1;
      lVar5 = lVar5 + 0x50;
    } while (uVar4 < (ulong)param_1[6]);
    lVar5 = param_1[5];
    param_1[6] = param_1[6] - lVar3;
  }
  if (lVar5 != 0) {
    (**(code **)(*(long *)*param_1 + 0x18))((long *)*param_1,lVar5,param_1[3] * 0x50,8);
    param_1[5] = 0;
  }
  if (*(char *)(param_1 + 4) != '\0') {
    *(undefined1 *)(param_1 + 4) = 0;
  }
  return;
}


