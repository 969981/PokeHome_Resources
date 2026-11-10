/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0019cd08; name: FUN_.text__0019cd08
 */


void FUN__text__0019cd08(long param_1,undefined8 *param_2,uint param_3)

{
  MutexType *pMVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  pMVar1 = (MutexType *)(param_1 + 0x458);
  nn::os::LockMutex(pMVar1);
  if ((param_3 & 1) == 0) {
    uVar4 = FUN__text__0019c518(param_1 + 0x388,param_2);
    if ((uVar4 & 1) == 0) {
      *(undefined8 *)(param_1 + 0x3f0) = *param_2;
      uVar2 = param_2[1];
      uVar6 = param_2[2];
      uVar5 = param_2[3];
      *(undefined8 *)(param_1 + 0x410) = param_2[4];
      *(undefined8 *)(param_1 + 0x408) = uVar5;
      *(undefined8 *)(param_1 + 0x400) = uVar6;
      *(undefined8 *)(param_1 + 0x3f8) = uVar2;
      uVar2 = param_2[5];
      uVar6 = param_2[6];
      uVar5 = param_2[7];
      *(undefined8 *)(param_1 + 0x430) = param_2[8];
      *(undefined8 *)(param_1 + 0x428) = uVar5;
      *(undefined8 *)(param_1 + 0x420) = uVar6;
      *(undefined8 *)(param_1 + 0x418) = uVar2;
      uVar2 = param_2[10];
      uVar5 = param_2[0xb];
      uVar3 = *(undefined4 *)(param_2 + 0xc);
      *(undefined8 *)(param_1 + 0x438) = param_2[9];
      *(undefined4 *)(param_1 + 0x450) = uVar3;
      *(undefined8 *)(param_1 + 0x448) = uVar5;
      *(undefined8 *)(param_1 + 0x440) = uVar2;
      *(undefined1 *)(param_1 + 0x454) = 1;
      nn::os::UnlockMutex(pMVar1);
      return;
    }
    if (*(char *)(param_1 + 0x454) != '\0') {
      if (*(char *)(param_1 + 0x455) == '\0') {
        *(undefined1 *)(param_1 + 0x454) = 0;
        nn::os::UnlockMutex(pMVar1);
        return;
      }
      *(undefined8 *)(param_1 + 0x3f0) = *param_2;
      uVar2 = param_2[1];
      uVar6 = param_2[2];
      uVar5 = param_2[3];
      *(undefined8 *)(param_1 + 0x410) = param_2[4];
      *(undefined8 *)(param_1 + 0x408) = uVar5;
      *(undefined8 *)(param_1 + 0x400) = uVar6;
      *(undefined8 *)(param_1 + 0x3f8) = uVar2;
      uVar2 = param_2[5];
      uVar6 = param_2[6];
      uVar5 = param_2[7];
      *(undefined8 *)(param_1 + 0x430) = param_2[8];
      *(undefined8 *)(param_1 + 0x428) = uVar5;
      *(undefined8 *)(param_1 + 0x420) = uVar6;
      *(undefined8 *)(param_1 + 0x418) = uVar2;
      uVar2 = param_2[9];
      uVar5 = param_2[10];
      uVar6 = param_2[0xb];
      *(undefined4 *)(param_1 + 0x450) = *(undefined4 *)(param_2 + 0xc);
      *(undefined8 *)(param_1 + 0x448) = uVar6;
      *(undefined8 *)(param_1 + 0x440) = uVar5;
      *(undefined8 *)(param_1 + 0x438) = uVar2;
      nn::os::UnlockMutex(pMVar1);
      return;
    }
  }
  else {
    *(undefined8 *)(param_1 + 0x3f0) = *param_2;
    uVar2 = param_2[1];
    uVar6 = param_2[2];
    uVar5 = param_2[3];
    *(undefined8 *)(param_1 + 0x410) = param_2[4];
    *(undefined8 *)(param_1 + 0x408) = uVar5;
    *(undefined8 *)(param_1 + 0x400) = uVar6;
    *(undefined8 *)(param_1 + 0x3f8) = uVar2;
    uVar2 = param_2[5];
    uVar6 = param_2[6];
    uVar5 = param_2[7];
    *(undefined8 *)(param_1 + 0x430) = param_2[8];
    *(undefined8 *)(param_1 + 0x428) = uVar5;
    *(undefined8 *)(param_1 + 0x420) = uVar6;
    *(undefined8 *)(param_1 + 0x418) = uVar2;
    uVar2 = param_2[10];
    uVar5 = param_2[0xb];
    uVar3 = *(undefined4 *)(param_2 + 0xc);
    *(undefined8 *)(param_1 + 0x438) = param_2[9];
    *(undefined4 *)(param_1 + 0x450) = uVar3;
    *(undefined8 *)(param_1 + 0x448) = uVar5;
    *(undefined8 *)(param_1 + 0x440) = uVar2;
    *(undefined2 *)(param_1 + 0x454) = 0x101;
  }
  nn::os::UnlockMutex(pMVar1);
  return;
}


