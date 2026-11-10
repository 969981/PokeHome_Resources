/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00425ef0; name: FUN_.text__00425ef0
 */


int * FUN__text__00425ef0(int param_1)

{
  int *piVar1;
  int *piVar2;
  long lVar3;
  
  piVar2 = DAT_00aea5c8;
  if (DAT_00aea5d0 != 0) {
    lVar3 = (ulong)DAT_00aea5d0 << 5;
    do {
      if (*piVar2 == param_1) goto LAB__text__00425f2c;
      piVar2 = piVar2 + 8;
      lVar3 = lVar3 + -0x20;
    } while (lVar3 != 0);
    piVar2 = DAT_00aea5c8 + (ulong)DAT_00aea5d0 * 8;
  }
LAB__text__00425f2c:
  piVar1 = (int *)0x0;
  if (piVar2 != DAT_00aea5c8 + (ulong)DAT_00aea5d0 * 8) {
    piVar1 = piVar2 + 2;
  }
  return piVar1;
}


