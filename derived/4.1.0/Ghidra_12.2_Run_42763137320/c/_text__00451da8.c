/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00451da8; name: FUN_.text__00451da8
 */


void FUN__text__00451da8(undefined4 *param_1,undefined4 *param_2)

{
  undefined2 uVar1;
  undefined8 uVar2;
  
  FUN__text__00400fc0(6,*(undefined8 *)(param_1 + 8));
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_2 + 8) = 0;
  uVar1 = *(undefined2 *)(param_2 + 3);
  *(undefined8 *)(param_1 + 1) = *(undefined8 *)(param_2 + 1);
  *(undefined2 *)(param_1 + 3) = uVar1;
  uVar2 = *(undefined8 *)(param_2 + 4);
  *(undefined2 *)(param_1 + 6) = *(undefined2 *)(param_2 + 6);
  *(undefined8 *)(param_1 + 4) = uVar2;
  *param_1 = *param_2;
  return;
}


