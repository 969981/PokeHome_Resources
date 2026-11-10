/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00451690; name: FUN_.text__00451690
 */


undefined8 FUN__text__00451690(long param_1,long param_2)

{
  long *plVar1;
  ulong uVar2;
  
  plVar1 = *(long **)(param_1 + 0xe0);
  if (((plVar1 != (long *)0x0) && (plVar1[3] == param_2)) &&
     (uVar2 = (**(code **)(*plVar1 + 0xc0))(), (uVar2 & 1) != 0)) {
    return 1;
  }
  plVar1 = *(long **)(param_1 + 0xe8);
  if (((plVar1 == (long *)0x0) || (plVar1[3] != param_2)) ||
     (uVar2 = (**(code **)(*plVar1 + 0xc0))(), (uVar2 & 1) == 0)) {
    return 0;
  }
  return 1;
}


