/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004723f0; name: FUN_.text__004723f0
 */


void FUN__text__004723f0(void)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  
  nn::os::LockMutex((MutexType *)&DAT_00aea770);
  plVar1 = DAT_00aea748;
  while (DAT_00aea748 = plVar1, DAT_00aea76c != 0) {
    FUN__text__00475ac0(*(undefined4 *)(plVar1 + 3),plVar1[1],*(undefined4 *)(plVar1 + 2),
                        *(undefined4 *)((long)plVar1 + 0x14));
    if (*(int *)(plVar1 + 2) == 4) {
      plVar5 = (long *)plVar1[1];
      plVar4 = (long *)&DAT_00aea728;
      plVar3 = (long *)0x0;
      do {
        plVar2 = plVar3;
        plVar3 = (long *)*plVar4;
        plVar4 = plVar3 + 0x48;
      } while (plVar3 != (long *)0x0 && plVar3 != plVar5);
      if (plVar3 != (long *)0x0) {
        plVar4 = (long *)&DAT_00aea728;
        if (DAT_00aea728 != plVar3) {
          plVar4 = plVar2 + 0x48;
        }
        *plVar4 = plVar3[0x48];
        if (DAT_00aea720 == plVar3) {
          DAT_00aea720 = plVar2;
        }
        DAT_00aea718 = DAT_00aea718 + -1;
        plVar5 = (long *)plVar1[1];
      }
      FUN__text__00472fc0(plVar5);
      (**(code **)(*plVar5 + 0x20))(plVar5,0);
      (**(code **)(*plVar5 + 8))(plVar5);
      FUN__text__00400fc0(0,plVar5);
    }
    plVar4 = DAT_00aea748;
    plVar1 = DAT_00aea748;
    if (DAT_00aea748 != (long *)0x0) {
      if (DAT_00aea750 == DAT_00aea748) {
        DAT_00aea750 = (long *)0x0;
      }
      if ((DAT_00aea748 < DAT_00aea760) || (DAT_00aea760 + (ulong)DAT_00aea768 * 4 <= DAT_00aea748))
      {
        DAT_00aea748 = (long *)*DAT_00aea748;
        FUN__text__00400fc0(0);
        DAT_00aea76c = DAT_00aea76c + -1;
        plVar1 = DAT_00aea748;
      }
      else {
        plVar1 = (long *)*DAT_00aea748;
        *DAT_00aea748 = (long)DAT_00aea758;
        DAT_00aea748 = plVar1;
        DAT_00aea76c = DAT_00aea76c + -1;
        plVar1 = DAT_00aea748;
        DAT_00aea758 = plVar4;
      }
    }
  }
  nn::os::UnlockMutex((MutexType *)&DAT_00aea770);
  return;
}


