/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003a1590; name: FUN_.text__003a1590
 */


void FUN__text__003a1590(long *param_1)

{
  long *plVar1;
  long *plVar2;
  
  if ((char)param_1[0x10] != '\0') {
    return;
  }
  plVar2 = param_1;
  do {
    plVar1 = plVar2;
    plVar2 = (long *)plVar1[0xd];
  } while (plVar2 != (long *)0x0);
  FUN__text__003a19b0(plVar1,0);
  (**(code **)(*param_1 + 0xa0))(param_1,1);
  for (plVar2 = (long *)param_1[0xd]; plVar2 != (long *)0x0; plVar2 = (long *)plVar2[0xd]) {
    (**(code **)(*plVar2 + 0xa8))(plVar2,1,param_1);
  }
  *(undefined1 *)(param_1 + 0x10) = 1;
  return;
}


