/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00164f60; name: FUN_.text__00164f60
 */


undefined8 FUN__text__00164f60(undefined8 param_1,uint param_2,undefined4 param_3)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN__text__001650f4(param_1,param_3);
  if (param_2 < 7) {
                    /* WARNING: Could not emulate address calculation at 0x00164fac */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*(code *)(&UNK__text__00164fbc + (ulong)*(byte *)((ulong)param_2 + 0x7252b0) * 4))
                      (uVar1 & 3);
    return uVar2;
  }
  return 0;
}


