/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0024aa5c; name: FUN_.text__0024aa5c
 */


uint FUN__text__0024aa5c(long param_1)

{
  uint uVar1;
  
  uVar1 = FUN__text__003276c0(*(undefined4 *)(param_1 + 0x80),*(undefined8 *)(param_1 + 0x88),
                              *(undefined8 *)(param_1 + 0x90),*(undefined4 *)(param_1 + 0x98));
  if ((uVar1 & 1) != 0) {
    FUN__text__00131ef8(*(undefined8 *)(param_1 + 0x78),1);
  }
  return uVar1 & 1;
}


