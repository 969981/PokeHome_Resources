/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003f2bcc; name: FUN_.text__003f2bcc
 */


bool FUN__text__003f2bcc(long param_1,long param_2,ulong param_3)

{
  int iVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 0x60);
  if ((param_3 & 1) == 0) {
    iVar1 = (**(code **)(*plVar2 + 0x110))(plVar2,*(undefined8 *)(param_2 + 8),0);
    return iVar1 == 1;
  }
  iVar1 = (**(code **)(*plVar2 + 0x118))(plVar2,*(undefined8 *)(param_2 + 8),0);
  return iVar1 == 1;
}


