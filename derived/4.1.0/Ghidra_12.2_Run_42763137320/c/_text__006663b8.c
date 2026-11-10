/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006663b8; name: FUN_.text__006663b8
 */


void FUN__text__006663b8(long param_1,long param_2)

{
  uint uVar1;
  
  if (param_2 < 0) {
    *(undefined8 *)(param_1 + 0xf88) = 0;
    uVar1 = *(uint *)(param_1 + 0xfac) & 0xffffffdf;
  }
  else {
    *(long *)(param_1 + 0xf88) = param_2;
    uVar1 = *(uint *)(param_1 + 0xfac) | 0x20;
  }
  *(uint *)(param_1 + 0xfac) = uVar1;
  return;
}


