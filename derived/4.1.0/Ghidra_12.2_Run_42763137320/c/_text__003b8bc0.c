/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003b8bc0; name: FUN_.text__003b8bc0
 */


void FUN__text__003b8bc0(undefined8 *param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  *(undefined1 *)(param_1 + 1) = 1;
  *param_1 = uVar1;
  *(undefined4 *)((long)param_1 + 0xc) = 0xffffffff;
  *(undefined4 *)(param_1 + 2) = param_3;
  return;
}


