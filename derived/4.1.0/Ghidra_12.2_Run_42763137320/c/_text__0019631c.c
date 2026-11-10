/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0019631c; name: FUN_.text__0019631c
 */


bool FUN__text__0019631c(char *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  if (*param_1 == '\0') {
    *param_1 = '\x01';
    uVar1 = *param_2;
    *(undefined8 *)(param_1 + 0xc) = param_2[1];
    *(undefined8 *)(param_1 + 4) = uVar1;
    return true;
  }
  return *param_1 == '\0';
}


