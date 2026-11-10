/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004af1ac; name: FUN_.text__004af1ac
 */


undefined8 FUN__text__004af1ac(uint *param_1,uint param_2)

{
  long lVar1;
  
  *param_1 = param_2;
  lVar1 = FUN__text__00400f80(5,(ulong)param_2 << 4);
  *(long *)(param_1 + 2) = lVar1;
  if (lVar1 == 0) {
    *param_1 = 0;
    return 0x34;
  }
  return 1;
}


