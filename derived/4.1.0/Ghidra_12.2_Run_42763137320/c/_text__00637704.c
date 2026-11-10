/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00637704; name: FUN_.text__00637704
 */


uint FUN__text__00637704(long param_1,long param_2)

{
  uint uVar1;
  undefined1 auStack_2c6 [662];
  
  memset(auStack_2c6,0,0x296);
  uVar1 = FUN__text__00604a90(auStack_2c6,param_2,param_2 + 0x148);
  if ((uVar1 & 1) != 0) {
    FUN__text__006311bc(param_1,auStack_2c6,1);
    *(undefined1 *)(param_1 + 0x54) = 2;
  }
  return uVar1 & 1;
}


