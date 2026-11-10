/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00680740; name: FUN_.text__00680740
 */


undefined8 FUN__text__00680740(long *param_1,code *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long *plVar2;
  ulong uVar3;
  
  if ((int)param_1[3] == 0) {
    return 0;
  }
  uVar3 = 0;
  do {
    plVar2 = (long *)(*param_1 + uVar3 * 8);
    while (plVar2 = (long *)*plVar2, plVar2 != (long *)0x0) {
      uVar1 = (*param_2)(plVar2,param_3);
      if ((int)uVar1 != 0) {
        return uVar1;
      }
    }
    uVar3 = uVar3 + 1;
  } while (uVar3 < *(uint *)(param_1 + 3));
  return 0;
}


