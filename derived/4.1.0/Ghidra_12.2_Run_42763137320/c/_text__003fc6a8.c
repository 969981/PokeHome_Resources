/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003fc6a8; name: FUN_.text__003fc6a8
 */


void FUN__text__003fc6a8(long *param_1)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  ulong uVar5;
  
  if (((int)param_1[0x12] == 0) &&
     (uVar5 = (**(code **)(*param_1 + 0xf0))(param_1),
     *(ulong *)param_1[4] <= uVar5 && *(char *)((long)param_1 + 0x69) != '\0')) {
    bVar3 = false;
    *(undefined1 *)((long)param_1 + 0x67) = 1;
  }
  else {
    *(undefined1 *)((long)param_1 + 0x67) = 0;
    bVar3 = *(char *)((long)param_1 + 0xc2) != '\0' && (char)param_1[0xd] == '\0';
  }
  *(bool *)((long)param_1 + 0x6c) = bVar3;
  nn::os::LockMutex((MutexType *)(param_1 + 5));
  cVar2 = *(char *)((long)param_1 + 0x6c);
  nn::os::UnlockMutex((MutexType *)(param_1 + 5));
  if (((cVar2 == '\0') ||
      (uVar1 = *(uint *)(param_1 + 0x13), uVar4 = (**(code **)(*param_1 + 0x48))(param_1),
      uVar4 <= uVar1)) &&
     (((char)param_1[0xd] == '\0' ||
      (uVar5 = (**(code **)(*param_1 + 0x10))(param_1), (uVar5 & 1) == 0)))) {
    if (*(char *)((long)param_1 + 0x6a) != '\0') {
      *(undefined1 *)((long)param_1 + 0x6a) = 0;
      FUN__text__003fe090(param_1[10]);
      return;
    }
  }
  else if (*(char *)((long)param_1 + 0x6a) == '\0') {
    *(undefined1 *)((long)param_1 + 0x6a) = 1;
    FUN__text__003fe044(param_1[10]);
    return;
  }
  return;
}


