/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0049158c; name: FUN_.text__0049158c
 */


void FUN__text__0049158c(long param_1,undefined8 *param_2)

{
  if ((param_2 == (undefined8 *)0x0) && (*(undefined8 **)(param_1 + 0x20) != (undefined8 *)0x0)) {
    **(undefined8 **)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
    return;
  }
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = *(undefined8 *)(param_1 + 8);
  }
  *(undefined8 **)(param_1 + 0x20) = param_2;
  return;
}


