/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006782c0; name: FUN_.text__006782c0
 */


void FUN__text__006782c0(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    if (*(code **)(param_1 + 0x10) != (code *)0x0) {
      (**(code **)(param_1 + 0x10))(*(undefined8 *)(param_1 + 0xe));
      *(undefined8 *)(param_1 + 0xe) = 0;
      *(undefined8 *)(param_1 + 0x10) = 0;
    }
    FUN__text__00656c1c(param_1 + 6,0);
    FUN__text__006783e4(*(undefined8 *)(param_1 + 2));
    *(undefined8 *)(param_1 + 2) = 0;
    FUN__text__006783e4(*(undefined8 *)(param_1 + 4));
    *(undefined8 *)(param_1 + 4) = 0;
    *(undefined8 *)(param_1 + 0x12) = 0;
    *param_1 = 1;
  }
  return;
}


