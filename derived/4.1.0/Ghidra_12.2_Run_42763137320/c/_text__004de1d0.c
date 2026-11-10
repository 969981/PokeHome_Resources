/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004de1d0; name: FUN_.text__004de1d0
 */


void FUN__text__004de1d0(undefined4 *param_1,long param_2,long param_3,undefined2 param_4)

{
  undefined4 uVar1;
  
  *param_1 = *(undefined4 *)(param_3 + 0x10);
  param_1[1] = 0;
  param_1[2] = *(undefined4 *)(param_3 + 0x14);
  param_1[3] = *(undefined4 *)(param_2 + 0x18);
  uVar1 = *(undefined4 *)(param_2 + 0x1c);
  *(undefined2 *)(param_1 + 5) = param_4;
  param_1[4] = uVar1;
  return;
}


