/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006eae14; name: FUN_.text__006eae14
 */


void FUN__text__006eae14(long param_1,undefined8 param_2,long *param_3)

{
  if (*(char *)(param_1 + 0x50) != '\0') {
    FUN__text__006ec5bc();
    FUN__text__006ee718(param_1 + 0x58,param_2);
    if (*(long *)(param_1 + 0x178) != 0) {
      (**(code **)(*param_3 + 0x18))(param_3);
      *(undefined8 *)(param_1 + 0x178) = 0;
    }
    *(undefined1 *)(param_1 + 0x50) = 0;
  }
  return;
}


