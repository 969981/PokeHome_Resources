/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00656d18; name: FUN_.text__00656d18
 */


void FUN__text__00656d18(long param_1)

{
  if (*(code **)(param_1 + 0x38) != (code *)0x0) {
    (**(code **)(param_1 + 0x38))(*(undefined8 *)(param_1 + 0x40));
  }
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(long *)(param_1 + 0x40) = param_1;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  FUN__text__0066bd88(*(undefined8 *)(param_1 + 0x50));
  if ((*(byte *)(param_1 + 0x80) & 1) != 0) {
    FUN__text__0066bd88(*(undefined8 *)(param_1 + 0x58));
  }
  FUN__text__006783e4(*(undefined8 *)(param_1 + 0x60));
  *(undefined8 *)(param_1 + 0x60) = 0;
  FUN__text__006783e4(*(undefined8 *)(param_1 + 0x70));
  *(undefined8 *)(param_1 + 0x70) = 0;
  FUN__text__006783e4(*(undefined8 *)(param_1 + 0x68));
  memset((void *)(param_1 + 8),0,0x1b8);
  return;
}


