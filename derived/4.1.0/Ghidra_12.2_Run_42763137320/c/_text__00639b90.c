/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00639b90; name: FUN_.text__00639b90
 */


undefined8 FUN__text__00639b90(undefined8 param_1)

{
  uint uVar1;
  undefined8 uVar2;
  
  if ((short)param_1 < 0x100) {
    return param_1;
  }
  uVar1 = ((uint)param_1 & 0xffff) - 0x100;
  if (uVar1 < 6) {
                    /* WARNING: Could not emulate address calculation at 0x00639bd0 */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*(code *)(&UNK__text__00639bdc + (ulong)*(byte *)((ulong)uVar1 + 0x75aed8) * 4))();
    return uVar2;
  }
  return 0x80;
}


