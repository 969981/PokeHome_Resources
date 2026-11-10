/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004602b4; name: FUN_.text__004602b4
 */


uint FUN__text__004602b4(long param_1)

{
  uint uVar1;
  uint uVar2;
  long *plVar3;
  
  uVar1 = FUN__text__004697fc(param_1,1);
  plVar3 = *(long **)(param_1 + 0x80);
  if (plVar3 != (long *)0x0) {
    uVar2 = (**(code **)(*plVar3 + 0x128))(plVar3,1);
    uVar1 = uVar1 & uVar2;
  }
  return uVar1 & 1;
}


