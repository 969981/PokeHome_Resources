/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0052a714; name: FUN_.text__0052a714
 */


bool FUN__text__0052a714(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  lVar1 = FUN__text__0052a750(param_1 + 0x18);
  if (lVar1 != 0) {
    *(undefined1 *)(param_3 + 0x28) = 1;
    *(long *)(lVar1 + 8) = param_3;
  }
  return lVar1 != 0;
}


