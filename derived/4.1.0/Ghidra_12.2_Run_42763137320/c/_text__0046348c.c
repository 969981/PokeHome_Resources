/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0046348c; name: FUN_.text__0046348c
 */


undefined8 FUN__text__0046348c(long param_1,long param_2)

{
  int iVar1;
  long *plVar2;
  undefined1 uStack_31;
  
  iVar1 = *(int *)(param_1 + 8);
  plVar2 = (long *)FUN__text__0046b2d0(param_1,*(undefined8 *)(param_2 + 0x318),
                                       *(undefined4 *)(param_2 + 800),&uStack_31);
  if (plVar2 == (long *)0x0) {
    return 2;
  }
  if (iVar1 == 0) {
    FUN__text__00472874(param_1);
  }
  *plVar2 = param_2;
  *(short *)(param_1 + 0x28) = *(short *)(param_1 + 0x28) + 1;
  return 1;
}


