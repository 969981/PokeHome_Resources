/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00684b44; name: FUN_.text__00684b44
 */


undefined8 FUN__text__00684b44(long param_1,long param_2)

{
  uint uVar1;
  undefined8 uVar2;
  
  if (param_2 != 0) {
    param_1 = param_1 + 4;
    do {
      uVar1 = *(int *)(param_1 + -4) - 2;
      if (uVar1 < 7) {
                    /* WARNING: Could not emulate address calculation at 0x00684b6c */
                    /* WARNING: Treating indirect jump as call */
        uVar2 = (*(code *)(&UNK__text__00684b78 + (ulong)*(byte *)((ulong)uVar1 + 0x7651c5) * 4))();
        return uVar2;
      }
      param_1 = param_1 + 8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return 1;
}


