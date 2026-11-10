/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00335274; name: FUN_.text__00335274
 */


void FUN__text__00335274(long param_1)

{
  long lVar1;
  
  if ((*(long *)(param_1 + 0x68) != 0) &&
     (lVar1 = *(long *)(param_1 + 0x70),
     *(int *)(*(long *)(param_1 + 0x68) + 0x54) != 0 && lVar1 != 0)) {
    FUN__text__0064dd40(lVar1);
    FUN__text__0064db88(lVar1,6);
    if (*(code **)(lVar1 + 0x2a0) != (code *)0x0) {
      (**(code **)(lVar1 + 0x2a0))(lVar1 + 0x2c0);
    }
    if (*(code **)(lVar1 + 0x1a0) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x003352d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar1 + 0x1a0))(lVar1 + 0x1c0);
      return;
    }
  }
  return;
}


