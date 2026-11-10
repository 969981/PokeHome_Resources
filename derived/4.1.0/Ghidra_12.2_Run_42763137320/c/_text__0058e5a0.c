/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0058e5a0; name: FUN_.text__0058e5a0
 */


void FUN__text__0058e5a0(long *param_1,long param_2)

{
  MutexType *pMVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  uint *puVar7;
  uint *puVar8;
  
  pMVar1 = (MutexType *)(param_1 + 3);
  nn::os::LockMutex(pMVar1);
  uVar3 = *(uint *)(param_1 + 1);
  if (uVar3 != 0) {
    uVar4 = *(uint *)(param_2 + 0x90);
    uVar5 = 0;
    if (uVar3 != 0) {
      uVar5 = uVar4 / uVar3;
    }
    uVar6 = (ulong)(uVar4 - uVar5 * uVar3);
    puVar8 = *(uint **)(*param_1 + uVar6 * 8);
    if (puVar8 != (uint *)0x0) {
      if (*puVar8 == uVar4) {
        puVar7 = (uint *)0x0;
      }
      else {
        do {
          puVar7 = puVar8;
          puVar8 = *(uint **)(puVar7 + 2);
          if (puVar8 == (uint *)0x0) goto LAB__text__0058e6ac;
        } while (*puVar8 != uVar4);
      }
      uVar3 = puVar8[0x1c];
      uVar4 = uVar3 - 1;
      puVar8[0x1c] = uVar4;
      if (uVar4 == 0 || (int)uVar3 < 1) {
        puVar2 = (uint *)(*param_1 + uVar6 * 8);
        if (puVar7 != (uint *)0x0) {
          puVar2 = puVar7 + 2;
        }
        *(undefined8 *)puVar2 = *(undefined8 *)(puVar8 + 2);
        *(int *)(param_1 + 2) = (int)param_1[2] + -1;
        FUN__text__0058e230(puVar8);
        if (*(long *)(puVar8 + 0x10) != 0) {
          FUN__text__00400fc0(5);
        }
        if (*(long *)(puVar8 + 0xc) != 0) {
          FUN__text__00400fc0(5);
        }
        if (*(long *)(puVar8 + 8) != 0) {
          FUN__text__00400fc0(5);
        }
        if (*(long *)(puVar8 + 4) != 0) {
          FUN__text__00400fc0(5);
        }
        FUN__text__00400fc0(5,puVar8);
      }
      if (((int)param_1[2] == 0) && (*param_1 != 0)) {
        *(undefined4 *)(param_1 + 1) = 0;
        FUN__text__00400fc0(0);
        *param_1 = 0;
        *(undefined4 *)((long)param_1 + 0xc) = 0;
        nn::os::UnlockMutex(pMVar1);
        return;
      }
    }
  }
LAB__text__0058e6ac:
  nn::os::UnlockMutex(pMVar1);
  return;
}


