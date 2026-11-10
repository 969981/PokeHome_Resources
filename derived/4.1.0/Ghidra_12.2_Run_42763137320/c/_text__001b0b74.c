/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001b0b74; name: FUN_.text__001b0b74
 */


void FUN__text__001b0b74(long param_1,undefined1 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *(undefined1 *)(param_1 + 0x438) = param_2;
  uVar1 = *param_3;
  uVar2 = param_3[1];
  *(undefined4 *)(param_1 + 0x44c) = *(undefined4 *)(param_3 + 2);
  *(undefined8 *)(param_1 + 0x43c) = uVar1;
  *(undefined8 *)(param_1 + 0x444) = uVar2;
  FUN__text__001b0b90();
  return;
}


