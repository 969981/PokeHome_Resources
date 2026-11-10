/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0048dff0; name: FUN_.text__0048dff0
 */


void FUN__text__0048dff0(long *param_1,uint param_2,long param_3)

{
  uint uVar1;
  long *plVar2;
  long *plVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  
  nn::os::LockMutex((MutexType *)(param_1 + 3));
  uVar4 = *(uint *)(param_1 + 1);
  if (uVar4 != 0) {
    uVar1 = 0;
    if (uVar4 != 0) {
      uVar1 = param_2 / uVar4;
    }
    for (lVar6 = *(long *)(*param_1 + (ulong)(param_2 - uVar1 * uVar4) * 8); lVar6 != 0;
        lVar6 = *(long *)(lVar6 + 0x68)) {
      if (*(uint *)(lVar6 + 0x4c) == param_2) {
        plVar3 = *(long **)(lVar6 + 0x10);
        uVar4 = *(uint *)(lVar6 + 0x18);
        plVar2 = plVar3;
        if (uVar4 == 0) goto LAB__text__0048e0a0;
        lVar5 = (ulong)uVar4 << 3;
        goto LAB__text__0048e080;
      }
    }
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 3));
  return;
LAB__text__0048e0a0:
  if (plVar2 != plVar3 + uVar4) {
    uVar4 = uVar4 - 1;
    if (plVar2 < plVar3 + uVar4) {
      memmove(plVar2,plVar2 + 1,(ulong)(uint)((int)(plVar3 + uVar4) - (int)plVar2) & 0xfffffff8);
      uVar4 = *(int *)(lVar6 + 0x18) - 1;
    }
    *(uint *)(lVar6 + 0x18) = uVar4;
  }
  goto LAB__text__0048e0d8;
  while( true ) {
    plVar2 = plVar2 + 1;
    lVar5 = lVar5 + -8;
    if (lVar5 == 0) break;
LAB__text__0048e080:
    if (*plVar2 == param_3) goto LAB__text__0048e0a0;
  }
LAB__text__0048e0d8:
  FUN__text__0048d040(param_1,param_2,lVar6);
  return;
}


