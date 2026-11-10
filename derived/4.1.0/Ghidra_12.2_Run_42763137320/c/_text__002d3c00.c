/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002d3c00; name: FUN_.text__002d3c00
 */


void FUN__text__002d3c00(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  if (((param_2[0x27] == 0) || (*(char *)(param_2[0x27] + 0x170) != '\0')) &&
     ((param_2[5] == 0 || (*(char *)(param_2[5] + 0x170) != '\0')))) {
    uVar1 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = uVar1;
    param_1[2] = param_2[2];
    return;
  }
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  return;
}


