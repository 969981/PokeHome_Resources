/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005cf660; name: FUN_.text__005cf660
 */


void FUN__text__005cf660(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN__text__006f31b8(param_1 + 0x58,&DAT_00b0d830);
  FUN__text__006ee594(param_2);
  FUN__text__006ee5f0(param_2,*(undefined4 *)(param_1 + 0xe0),param_1 + 0x58);
  FUN__text__006ee624(param_2,param_1 + 0xd0,*(undefined4 *)(param_1 + 0xe0));
  FUN__text__006ee5a0(param_2);
  *(undefined8 *)(param_1 + 0xd8) = param_4;
  return;
}


