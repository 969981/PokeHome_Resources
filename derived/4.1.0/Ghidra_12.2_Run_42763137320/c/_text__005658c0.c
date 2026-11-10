/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005658c0; name: FUN_.text__005658c0
 */


undefined8 FUN__text__005658c0(long param_1,short param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  
  if ((uint)(int)param_2 < 8) {
                    /* WARNING: Could not emulate address calculation at 0x005658e8 */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)(&UNK__text__005658f4 +
                      (ulong)*(byte *)((ulong)(uint)(int)param_2 + 0x73e42c) * 4))();
    return uVar1;
  }
  *(undefined4 *)(param_1 + (long)param_2 * 4 + 8) = *param_3;
  *(undefined1 *)(param_1 + 0x68) = 1;
  return 1;
}


