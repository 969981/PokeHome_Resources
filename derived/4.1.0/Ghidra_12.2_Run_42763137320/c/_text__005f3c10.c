/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005f3c10; name: FUN_.text__005f3c10
 */


long FUN__text__005f3c10(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = 0;
  if (((param_1 != 0) && (param_2 != 0)) &&
     (lVar1 = FUN__text__005f3840(param_1,param_2), lVar1 != 0)) {
    lVar1 = lVar1 - (ulong)(lVar1 == param_2);
    *(undefined2 *)(param_1 + lVar1 * 2) = 0;
  }
  return lVar1;
}


