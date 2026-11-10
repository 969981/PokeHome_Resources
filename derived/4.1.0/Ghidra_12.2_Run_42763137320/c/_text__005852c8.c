/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005852c8; name: FUN_.text__005852c8
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__005852c8(long param_1)

{
  if (2 < *(int *)(param_1 + 0x10)) {
    FUN__text__00585f10(param_1 + 0x18);
  }
  if (*(long *)(param_1 + 0xa8) != 0) {
    FUN__text__00400fc0(5);
    *(undefined8 *)(param_1 + 0xa8) = 0;
  }
  if (*(char *)(param_1 + 0xda) != '\0') {
    if (*(long *)(param_1 + 0xb8) != 0) {
      FUN__text__00400fc0(5);
      *(undefined1 *)(param_1 + 0xda) = 0;
      *(long *)(param_1 + 0xb8) = 0;
      *(undefined8 *)(param_1 + 0xc0) = 0;
    }
  }
  if (*(long *)(param_1 + 200) != 0) {
    FUN__text__00400fc0(5);
    *(undefined8 *)(param_1 + 200) = 0;
    *(undefined4 *)(param_1 + 0xd0) = 0;
  }
  if (*(long *)(param_1 + 0x30) == 0) {
    return;
  }
  FUN__text__0058e5a0(_DAT_008a3eb8,param_1 + 8);
  return;
}


