/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00407d7c; name: FUN_.text__00407d7c
 */


undefined8 FUN__text__00407d7c(long param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *param_3 = *(undefined4 *)(param_1 + 0x30);
  uVar1 = *(undefined4 *)(param_1 + 0x2c);
  if (*(char *)(param_1 + 0x557) != '\0') {
    uVar1 = 0;
  }
  *param_2 = uVar1;
  return 1;
}


