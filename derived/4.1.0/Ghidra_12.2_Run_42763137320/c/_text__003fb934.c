/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003fb934; name: FUN_.text__003fb934
 */


void FUN__text__003fb934(long param_1,long param_2,ulong param_3)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  
  if ((((param_3 & 1) == 0) || (*(char *)(param_1 + 0x68) != '\0')) ||
     (*(int *)(param_1 + 0xa8) == 4)) {
    lVar3 = *(long *)(param_1 + 0x50);
  }
  else {
    *(undefined1 *)(param_1 + 0x67) = 0;
    *(undefined1 *)(param_1 + 0xac) = 1;
    uVar5 = *(int *)(*(long *)(param_2 + 8) + 0x18) - *(int *)(param_2 + 0x10);
    lVar3 = *(long *)(param_1 + 0x50);
    uVar1 = *(uint *)(lVar3 + 0x618);
    if (uVar1 < uVar5) {
      *(undefined1 *)(param_1 + 0xac) = 0;
      uVar5 = uVar1;
    }
    if ((*(char *)(param_1 + 0x66) == '\0') &&
       (**(long **)(param_1 + 0x20) - (**(long **)(param_2 + 8) + (ulong)*(uint *)(param_2 + 0x10))
        <= (ulong)uVar5)) {
      *(undefined1 *)(param_1 + 0x67) = 1;
      *(undefined1 *)(param_1 + 0xac) = 1;
      *(int *)(param_1 + 0x90) =
           *(int *)(param_1 + 0x90) +
           ((int)**(long **)(param_1 + 0x20) -
           (**(int **)(param_2 + 8) + (*(int **)(param_2 + 8))[6]));
    }
  }
  nn::os::LockMutex((MutexType *)(lVar3 + 0x1e8));
  lVar4 = *(long *)(param_1 + 0x50);
  lVar2 = *(long *)(param_2 + 8);
  *(undefined8 *)(param_2 + 8) = 0;
  if (lVar2 != 0) {
    FUN__text__003ff304(lVar4 + 0x2a8,param_1 + 0x78);
  }
  FUN__text__00400fc0(7,param_2);
  nn::os::UnlockMutex((MutexType *)(lVar3 + 0x1e8));
  return;
}


