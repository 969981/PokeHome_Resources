/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00447104; name: FUN_.text__00447104
 */


int FUN__text__00447104(undefined8 *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)((long)param_1 + 0x4c) + -1;
  *(int *)((long)param_1 + 0x4c) = iVar1;
  if (iVar1 == 0) {
    (**(code **)*param_1)();
    FUN__text__00400fc0(0,param_1);
    return 0;
  }
  return iVar1;
}


