/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005fc7ec; name: FUN_.text__005fc7ec
 */


void FUN__text__005fc7ec(long *param_1,undefined4 param_2)

{
  undefined1 auStack_2c6 [662];
  
  memset(auStack_2c6,0,0x296);
  FUN__text__00631194(*param_1,auStack_2c6);
  FUN__text__00604e94(auStack_2c6,param_2);
  FUN__text__006311bc(*param_1,auStack_2c6,1);
  *(char *)(*param_1 + 0x54) = (char)param_2;
  FUN__text__00635ea0(*param_1);
  return;
}


