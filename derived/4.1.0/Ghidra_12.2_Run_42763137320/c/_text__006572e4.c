/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006572e4; name: FUN_.text__006572e4
 */


undefined8
FUN__text__006572e4(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6)

{
  if (param_1 == 0) {
    return 0x2b;
  }
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
  if (param_3 != 0) {
    *(long *)(param_1 + 0x28) = param_3;
    *(undefined8 *)(param_1 + 0x30) = param_4;
    *(undefined8 *)(param_1 + 0x78) = param_2;
    *(undefined4 *)(param_1 + 0x18) = 3;
    *(undefined8 *)(param_1 + 0x38) = param_5;
    *(undefined8 *)(param_1 + 0x40) = param_6;
  }
  return 0;
}


