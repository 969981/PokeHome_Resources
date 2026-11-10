/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00666390; name: FUN_.text__00666390
 */


void FUN__text__00666390(long param_1,long param_2)

{
  uint uVar1;
  
  if (param_2 < 0) {
    *(undefined8 *)(param_1 + 0xf80) = 0;
    uVar1 = *(uint *)(param_1 + 0xfac) & 0xffffffbf;
  }
  else {
    *(long *)(param_1 + 0xf80) = param_2;
    uVar1 = *(uint *)(param_1 + 0xfac) | 0x40;
  }
  *(uint *)(param_1 + 0xfac) = uVar1;
  return;
}


