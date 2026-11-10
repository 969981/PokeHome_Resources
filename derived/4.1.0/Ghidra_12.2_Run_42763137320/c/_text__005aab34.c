/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005aab34; name: FUN_.text__005aab34
 */


undefined8 FUN__text__005aab34(long param_1,ulong param_2,uint param_3)

{
  long lVar1;
  
  if (param_2 < 2) {
    lVar1 = *(long *)(param_1 + param_2 * 0x20 + 0x10);
    if (lVar1 == 0) {
      return 0;
    }
    if (param_3 < 2) {
      return *(undefined8 *)(lVar1 + (ulong)param_3 * 8);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN__text__0011a180(0x717b65);
}


