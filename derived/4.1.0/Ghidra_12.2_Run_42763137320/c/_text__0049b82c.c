/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0049b82c; name: FUN_.text__0049b82c
 */


uint FUN__text__0049b82c(undefined8 param_1)

{
  uint uVar1;
  
  uVar1 = FUN__text__00469760();
  if ((uVar1 & 1) != 0) {
    FUN__text__00464fac(param_1);
  }
  return uVar1 & 1;
}


