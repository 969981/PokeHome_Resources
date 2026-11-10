/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004ecc9c; name: FUN_.text__004ecc9c
 */


void FUN__text__004ecc9c(long param_1)

{
  long lVar1;
  long lVar2;
  
  *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
  FUN__text__004ed850(param_1 + 0x60);
  lVar2 = *(long *)(param_1 + 0x80);
  if (lVar2 != 0) {
    *(undefined8 *)(*(long *)(lVar2 + 0x18) + 0x80) = 0;
    lVar1 = *(long *)(lVar2 + 0x18);
    *(undefined8 *)(lVar2 + 0x18) = 0;
    if (lVar1 != 0) {
      FUN__text__004eb980();
    }
  }
  FUN__text__004ebd1c(param_1);
  FUN__text__004eb980(param_1);
  return;
}


