/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004f6114; name: FUN_.text__004f6114
 */


void FUN__text__004f6114(long param_1,long *param_2,byte param_3)

{
  *(undefined4 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined4 *)(param_1 + 0x118) = 0;
  *(undefined2 *)(param_1 + 0x128) = 1;
  *(undefined1 *)(param_1 + 0x12a) = 0;
  *(byte *)(param_1 + 299) = param_3;
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  (**(code **)(*param_2 + 0xb8))(param_2,param_1,0);
  *(byte *)(param_1 + 0x12a) = param_3 ^ 1;
  return;
}


