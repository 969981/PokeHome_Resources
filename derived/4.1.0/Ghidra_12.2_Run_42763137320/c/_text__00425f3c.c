/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00425f3c; name: FUN_.text__00425f3c
 */


undefined4 FUN__text__00425f3c(undefined8 param_1,char param_2,char *param_3)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (*param_3 != param_2) {
    uVar1 = 10;
  }
  if (*(int *)(param_3 + 4) != 0x7e601) {
    uVar1 = 0x2c;
  }
  return uVar1;
}


