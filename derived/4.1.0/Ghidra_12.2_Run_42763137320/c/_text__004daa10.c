/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004daa10; name: FUN_.text__004daa10
 */


void FUN__text__004daa10(long param_1,int param_2)

{
  if (param_2 != 2) {
    if (*(long *)(param_1 + 0x80) != 0) {
      (**(code **)(**(long **)(param_1 + 8) + 0x18))();
    }
    *(undefined8 *)(param_1 + 0x80) = 0;
    *(undefined8 *)(param_1 + 0x8c) = 0x2b;
    *(undefined8 *)(param_1 + 0x94) = 0;
    *(undefined8 *)(param_1 + 0x9c) = 0x3f800000ffffffff;
    *(undefined8 *)(param_1 + 0xa4) = 0x1ffffffff;
    FUN__text__0041b438(param_1 + 0x10);
    if (param_2 == 0) {
      *(undefined1 *)(param_1 + 0xf0) = 0;
      goto LAB__text__004daa94;
    }
  }
  if (*(char *)(param_1 + 0xf0) != '\0') {
    return;
  }
LAB__text__004daa94:
                    /* WARNING: Could not recover jumptable at 0x004daaac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 8) + 0x28))(*(long **)(param_1 + 8),param_2);
  return;
}


