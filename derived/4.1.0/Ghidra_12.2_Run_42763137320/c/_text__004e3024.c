/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004e3024; name: FUN_.text__004e3024
 */


void FUN__text__004e3024(long *param_1)

{
  undefined8 *puVar1;
  
  if ((char)param_1[1] == '\0') {
    (**(code **)(*param_1 + 0x70))(param_1);
    puVar1 = (undefined8 *)(*param_1 + 0x80);
  }
  else {
    puVar1 = (undefined8 *)(*param_1 + 0x78);
  }
  (*(code *)*puVar1)(param_1);
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}


