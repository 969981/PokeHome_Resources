/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005f3410; name: FUN_.text__005f3410
 */


void FUN__text__005f3410(short *param_1)

{
  ushort *puVar1;
  uint uVar2;
  
  uVar2 = 0;
  do {
    while (*param_1 == 0x10) {
      puVar1 = (ushort *)(param_1 + 1);
      param_1 = param_1 + (ulong)*puVar1 + 2;
      uVar2 = (int)((ulong)*puVar1 + 2) + uVar2;
      if (0x7ff < uVar2) {
        return;
      }
    }
    if (*param_1 == 0) {
      return;
    }
    param_1 = param_1 + 1;
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0x800);
  return;
}


