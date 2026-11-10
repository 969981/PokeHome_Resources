/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003dd37c; name: FUN_.text__003dd37c
 */


undefined8 FUN__text__003dd37c(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar1 = *(int *)(param_3 + 0x10) - 1;
  if (uVar1 < 0x11) {
                    /* WARNING: Could not emulate address calculation at 0x003dd3a0 */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*(code *)(&UNK__text__003dd3bc + (ulong)*(byte *)((ulong)uVar1 + 0x73ab0c) * 4))
                      (param_1,2);
    return uVar2;
  }
  return 0xb;
}


