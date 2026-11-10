/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0068588c; name: FUN_.text__0068588c
 */


void FUN__text__0068588c(undefined8 *param_1)

{
  if (param_1[2] == 0) {
    return;
  }
  *(undefined8 *)*param_1 = ((undefined8 *)*param_1)[param_1[2] + -1];
  **(undefined8 **)*param_1 = 0;
  param_1[2] = param_1[2] + -1;
  FUN__text__006858c8(param_1,0);
  return;
}


