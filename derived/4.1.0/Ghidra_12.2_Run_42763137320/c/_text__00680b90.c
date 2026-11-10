/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00680b90; name: FUN_.text__00680b90
 */


int FUN__text__00680b90(long param_1)

{
  int iVar1;
  
  iVar1 = FUN__text__00680b30();
  if (iVar1 == 0) {
    *(undefined8 *)(param_1 + 200) = 0x1000;
    *(undefined8 *)(param_1 + 0xd0) = 0xffffffff;
    *(undefined8 *)(param_1 + 0xe0) = 0x100000000;
    *(undefined8 *)(param_1 + 0xa8) = 0;
    *(undefined8 *)(param_1 + 0xb0) = 0;
    FUN__text__006831ac(param_1 + 0x48);
    FUN__text__006831ac(param_1 + 0x70);
    *(undefined2 *)(param_1 + 0xe8) = 0;
    *(undefined8 *)(param_1 + 0xd8) = 0;
    *(undefined1 *)(param_1 + 0xea) = 0;
    *(undefined8 *)(param_1 + 0x98) = 0;
    *(undefined8 *)(param_1 + 0xa0) = 0;
    *(undefined8 *)(param_1 + 0xb8) = 0;
    *(undefined8 *)(param_1 + 0xc0) = 0;
  }
  return iVar1;
}


