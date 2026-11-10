/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00602dbc; name: FUN_.text__00602dbc
 */


undefined4 FUN__text__00602dbc(char param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = 0x39;
  if (param_1 != '\x05') {
    uVar2 = 0;
  }
  uVar1 = 0x38;
  if (param_1 != '\x04') {
    uVar1 = uVar2;
  }
  return uVar1;
}


