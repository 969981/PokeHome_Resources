/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00561d80; name: FUN_.text__00561d80
 */


undefined8 FUN__text__00561d80(long param_1,int param_2,long param_3)

{
  uint uVar1;
  undefined8 uVar2;
  
  if (param_3 == 0) {
    return 0x1f;
  }
  uVar1 = (uint)(short)param_2;
  if (uVar1 < 0x14) {
                    /* WARNING: Could not emulate address calculation at 0x00561db4 */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*(code *)(&UNK__text__00561dc0 + (ulong)*(byte *)((ulong)uVar1 + 0x73e400) * 4))();
    return uVar2;
  }
  param_2 = param_2 + (uVar1 >> 0x1c & 7);
  param_1 = param_1 + (ulong)(uint)(param_2 * 0x10000 >> 0x13);
  *(byte *)(param_1 + 8) =
       *(byte *)(param_1 + 8) |
       (byte)(1 << (ulong)(uVar1 - ((int)(short)param_2 & 0xfffffff8U) & 0x1f));
  return 1;
}


