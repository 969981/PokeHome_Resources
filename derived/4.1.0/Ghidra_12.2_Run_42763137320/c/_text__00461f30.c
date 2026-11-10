/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00461f30; name: FUN_.text__00461f30
 */


void FUN__text__00461f30(long param_1,int param_2)

{
  ulong uVar1;
  
  if (*(int *)(param_1 + 0x198) != param_2) {
    *(int *)(param_1 + 0x198) = param_2;
    if (*(int *)(param_1 + 0x108) != 0) {
      uVar1 = 0;
      do {
        FUN__text__00461f30(*(undefined8 *)(*(long *)(param_1 + 0x100) + uVar1 * 8),param_2);
        uVar1 = uVar1 + 1;
      } while (uVar1 < *(uint *)(param_1 + 0x108));
    }
  }
  if (*(long *)(param_1 + 0x80) == 0) {
    FUN__text__0041595c(1);
    return;
  }
  return;
}


