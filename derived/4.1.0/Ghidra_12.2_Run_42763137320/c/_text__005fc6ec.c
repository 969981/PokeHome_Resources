/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005fc6ec; name: FUN_.text__005fc6ec
 */


uint FUN__text__005fc6ec(long param_1,long param_2)

{
  uint uVar1;
  undefined1 auStack_2c6 [662];
  
  memset(auStack_2c6,0,0x296);
  uVar1 = FUN__text__00604c10(auStack_2c6,param_2,param_2 + 0x148);
  if ((uVar1 & 1) != 0) {
    FUN__text__006311bc(param_1,auStack_2c6,1);
    *(undefined1 *)(param_1 + 0x54) = 7;
    FUN__text__0063321c(param_1);
  }
  return uVar1 & 1;
}


