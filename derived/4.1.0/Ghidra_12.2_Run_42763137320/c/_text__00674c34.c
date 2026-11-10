/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00674c34; name: FUN_.text__00674c34
 */


undefined8 FUN__text__00674c34(char *param_1)

{
  char *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = getenv(param_1);
  if ((pcVar1 == (char *)0x0) || (*pcVar1 == '\0')) {
    return 0;
  }
  uVar2 = FUN__text__00678404();
  return uVar2;
}


