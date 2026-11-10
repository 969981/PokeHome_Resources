/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00662d40; name: FUN_.text__00662d40
 */


void FUN__text__00662d40(long param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  plVar1 = (long *)0x0;
  plVar3 = (long *)(param_1 + 0xef8);
  do {
    plVar2 = plVar1;
    plVar3 = (long *)*plVar3;
    if (plVar3 == (long *)0x0) goto LAB__text__00662d90;
    plVar1 = plVar3;
  } while (plVar3[1] != param_2);
  plVar1 = (long *)(param_1 + 0xef8);
  if (plVar2 != (long *)0x0) {
    plVar1 = plVar2;
  }
  *plVar1 = *plVar3;
  FUN__text__006783e4();
LAB__text__00662d90:
  *(undefined8 *)(param_2 + 0xee8) = 0;
  *(ulong *)(param_2 + 0xf40) = *(ulong *)(param_2 + 0xf40) & 0xffefffffffffffff;
  return;
}


