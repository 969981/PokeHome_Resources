/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001b1b44; name: FUN_.text__001b1b44
 */


void FUN__text__001b1b44(long param_1,undefined1 param_2)

{
  long lVar1;
  
  *(undefined1 *)(param_1 + 0x20) = param_2;
  lVar1 = *(long *)(*(long *)(param_1 + 8) + 0x2d0);
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    FUN__text__003c7c60(lVar1,(long *)(param_1 + 0x28),*(undefined1 *)(param_1 + 0x20));
  }
  if (lVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x001b1ba4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))((long *)(lVar1 + 0x48));
  return;
}


