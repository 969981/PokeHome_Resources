/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004f41e0; name: FUN_.text__004f41e0
 */


undefined8 FUN__text__004f41e0(long param_1,uint param_2,uint param_3)

{
  undefined8 uVar1;
  
  if ((uint)(*(int *)(*(long *)(param_1 + 0x128) + (ulong)*(uint *)(param_1 + 0x130) * 0x10 + -0xc)
            - *(int *)(*(long *)(param_1 + 0x128) + 4)) < param_2) {
    return 2;
  }
  if (param_3 < 8) {
                    /* WARNING: Could not emulate address calculation at 0x004f4244 */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)(&UNK__text__004f4264 + (ulong)*(byte *)((ulong)param_3 + 0x73e332) * 4))();
    return uVar1;
  }
  return 2;
}


