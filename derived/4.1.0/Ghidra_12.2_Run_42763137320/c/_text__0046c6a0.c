/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0046c6a0; name: FUN_.text__0046c6a0
 */


void FUN__text__0046c6a0(void)

{
  uint uVar1;
  long *plVar2;
  ulong uVar3;
  long *plVar4;
  
  if (DAT_00aea708 == 0) {
    return;
  }
  plVar4 = (long *)*DAT_00aea700;
  if (plVar4 == (long *)0x0) {
    uVar3 = 0;
    do {
      if (DAT_00aea708 - 1 == uVar3) {
        return;
      }
      plVar4 = (long *)DAT_00aea700[uVar3 + 1];
      uVar3 = uVar3 + 1;
    } while (plVar4 == (long *)0x0);
  }
  else {
    uVar3 = 0;
  }
  do {
    do {
      for (plVar2 = (long *)plVar4[2]; plVar2 != (long *)0x0; plVar2 = (long *)plVar2[9]) {
        (**(code **)(*plVar2 + 0x48))(plVar2);
      }
      plVar4 = (long *)*plVar4;
    } while (plVar4 != (long *)0x0);
    uVar1 = DAT_00aea708;
    if (DAT_00aea708 <= (int)uVar3 + 1U) {
      uVar1 = (int)uVar3 + 1;
    }
    do {
      if (uVar1 - 1 == (int)uVar3) {
        return;
      }
      uVar3 = (ulong)((int)uVar3 + 1);
      plVar4 = (long *)DAT_00aea700[uVar3];
    } while (plVar4 == (long *)0x0);
  } while( true );
}


