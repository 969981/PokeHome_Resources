/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00425d40; name: FUN_.text__00425d40
 */


undefined8 FUN__text__00425d40(undefined8 param_1,int param_2,int param_3)

{
  undefined8 uVar1;
  int *piVar2;
  long lVar3;
  
  piVar2 = DAT_00aea5d8;
  if (DAT_00aea5e0 == 0) {
LAB__text__00425d80:
    if (piVar2 != DAT_00aea5d8 + (ulong)DAT_00aea5e0 * 10) {
      lVar3 = 8;
      if (param_2 != 1) {
        lVar3 = 0x10;
      }
                    /* WARNING: Could not recover jumptable at 0x00425da4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (**(code **)((long)piVar2 + lVar3))();
      return uVar1;
    }
  }
  else {
    lVar3 = (ulong)DAT_00aea5e0 * 0x28;
    do {
      if (*piVar2 == param_3) goto LAB__text__00425d80;
      piVar2 = piVar2 + 10;
      lVar3 = lVar3 + -0x28;
    } while (lVar3 != 0);
  }
  return 0;
}


