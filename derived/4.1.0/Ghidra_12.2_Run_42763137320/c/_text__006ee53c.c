/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006ee53c; name: FUN_.text__006ee53c
 */


void FUN__text__006ee53c(undefined1 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1[1] == '\x01') {
    puVar1 = &DAT_00c60238;
  }
  else {
    if (param_1[1] != '\x02') goto LAB__text__006ee580;
    puVar1 = &DAT_00c60278;
  }
  (*(code *)*puVar1)(*(undefined8 *)(param_1 + 0x10));
LAB__text__006ee580:
  *(undefined8 *)(param_1 + 0x10) = 0;
  *param_1 = 0;
  return;
}


