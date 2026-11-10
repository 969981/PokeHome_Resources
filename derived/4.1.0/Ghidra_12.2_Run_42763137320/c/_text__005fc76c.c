/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005fc76c; name: FUN_.text__005fc76c
 */


uint FUN__text__005fc76c(long param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  undefined1 auStack_2c6 [662];
  
  memset(auStack_2c6,0,0x296);
  uVar1 = FUN__text__00604c74(auStack_2c6,param_2,param_3);
  if ((uVar1 & 1) != 0) {
    FUN__text__006311bc(param_1,auStack_2c6,1);
    *(undefined1 *)(param_1 + 0x54) = 2;
    FUN__text__0063321c(param_1);
  }
  return uVar1 & 1;
}


