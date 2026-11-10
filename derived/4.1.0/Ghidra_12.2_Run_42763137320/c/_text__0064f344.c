/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0064f344; name: FUN_.text__0064f344
 */


void FUN__text__0064f344(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  
  plVar2 = (long *)param_1[4];
  if (plVar2 != (long *)0x0) {
    plVar3 = plVar2 + 3;
    nnosLockMutex(*plVar3);
    lVar1 = plVar2[4];
    *(undefined4 *)(plVar2 + 4) = 1;
    nnosUnlockMutex(*plVar3);
    if ((int)lVar1 == 0) {
      FUN__text__00686fa0();
    }
    else {
      if (*plVar2 != 0) {
        FUN__text__00686fa4(plVar2);
      }
      FUN__text__0064f920(plVar3);
      FUN__text__006783e4(param_1[4]);
    }
  }
  param_1[4] = 0;
  FUN__text__006783e4(*param_1);
  *param_1 = 0;
  return;
}


