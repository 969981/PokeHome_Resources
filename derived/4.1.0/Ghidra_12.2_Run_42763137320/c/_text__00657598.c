/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00657598; name: FUN_.text__00657598
 */


undefined8 FUN__text__00657598(long param_1,long param_2)

{
  long lVar1;
  
  if (param_1 == 0) {
    return 0x2b;
  }
  FUN__text__006783e4(*(undefined8 *)(param_1 + 0x68));
  *(undefined8 *)(param_1 + 0x68) = 0;
  if (param_2 != 0) {
    lVar1 = FUN__text__00678404(param_2);
    *(long *)(param_1 + 0x68) = lVar1;
    if (lVar1 == 0) {
      return 0x1b;
    }
  }
  return 0;
}


