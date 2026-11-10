/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00581e28; name: FUN_.text__00581e28
 */


void FUN__text__00581e28(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  *(undefined1 *)(param_1 + 3) = 0;
  *param_1 = 0x893368;
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  param_1[1] = *(undefined8 *)(param_2 + 8);
  param_1[2] = uVar1;
  *(undefined1 *)(param_1 + 3) = 0xff;
  return;
}


