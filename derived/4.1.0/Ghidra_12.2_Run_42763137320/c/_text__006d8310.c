/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006d8310; name: FUN_.text__006d8310
 */


void FUN__text__006d8310(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  *(undefined4 *)(param_1 + 4) = 0x101;
  *param_1 = param_2;
  *(undefined8 *)((long)param_1 + 0x24) = 0x417fd70a;
  uVar1 = FUN__text__006eab94(param_1 + 3);
  param_1[1] = uVar1;
  *(undefined4 *)(param_1 + 8) = 0x202;
  *(undefined8 *)((long)param_1 + 0x44) = 0x417fd70a;
  uVar1 = FUN__text__006eab94(param_1 + 7);
  param_1[2] = uVar1;
  return;
}


