/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006ec340; name: FUN_.text__006ec340
 */


void FUN__text__006ec340(long param_1,long param_2)

{
  *(undefined1 *)(param_1 + 1) = 2;
  *(undefined8 *)(param_1 + 2) = 0x1000100000000;
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(param_1 + 0x10) = 0x480;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0xc);
  *(undefined8 *)(param_1 + 0x1c) = 0x100000001;
  return;
}


