/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00662dac; name: FUN_.text__00662dac
 */


void FUN__text__00662dac(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 0xef8);
  while (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + 8);
    FUN__text__00662d40(param_1,uVar2);
    if (*(long *)(param_1 + 0xee8) != 0) {
      FUN__text__00662c6c(*(long *)(param_1 + 0xee8),uVar2,0);
    }
    lVar1 = *(long *)(param_1 + 0xef8);
  }
  if (*(long *)(param_1 + 0xee8) == 0) {
    return;
  }
  FUN__text__00662d40(*(long *)(param_1 + 0xee8),param_1);
  return;
}


