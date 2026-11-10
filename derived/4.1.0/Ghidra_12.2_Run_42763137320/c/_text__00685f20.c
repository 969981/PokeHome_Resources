/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00685f20; name: FUN_.text__00685f20
 */


undefined8 FUN__text__00685f20(undefined8 param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  
  if (*(char *)(param_3 + 0xe6) == '\0') {
    return 0;
  }
  FUN__text__0068596c(param_2 + 0x18,param_3 + 0x10);
  *(undefined1 *)(param_3 + 0xe6) = 0;
  uVar1 = FUN__text__00685f68(param_1,param_3);
  return uVar1;
}


