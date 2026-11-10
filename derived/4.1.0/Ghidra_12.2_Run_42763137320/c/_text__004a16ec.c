/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004a16ec; name: FUN_.text__004a16ec
 */


uint FUN__text__004a16ec(long param_1)

{
  uint uVar1;
  long *plVar2;
  
  plVar2 = (long *)(param_1 + -0x28);
  uVar1 = (**(code **)(*plVar2 + 0x128))(plVar2,1);
  FUN__text__00464fac(plVar2);
  return uVar1 & 1;
}


