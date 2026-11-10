/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004aab88; name: FUN_.text__004aab88
 */


undefined8 FUN__text__004aab88(long param_1,long param_2)

{
  undefined8 uVar1;
  
  if ((*(long *)(param_2 + 0x20) == 0) ||
     (uVar1 = FUN__text__004adf98(param_1 + 0xf8,*(undefined8 *)(param_2 + 0x28)), (int)uVar1 == 1))
  {
    FUN__text__004a278c(param_1,param_2);
    if (*(char *)(param_2 + 0x18) != '\0') {
      FUN__text__00400fc0(0,*(undefined8 *)(param_2 + 0x10));
    }
    uVar1 = 1;
    *(undefined8 *)(param_2 + 0x10) = 0;
    *(undefined1 *)(param_2 + 0x18) = 0;
  }
  return uVar1;
}


