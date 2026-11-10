/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003c4164; name: FUN_.text__003c4164
 */


ulong FUN__text__003c4164(long param_1,ushort param_2)

{
  uint uVar1;
  ulong uVar2;
  ushort local_24 [2];
  
  if (*(code **)(param_1 + 0x220) == (code *)0x0) {
    uVar1 = 0;
    if (param_2 < 8) {
                    /* WARNING: Could not emulate address calculation at 0x003c41c4 */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*(code *)((ulong)*(byte *)((ulong)param_2 + 0x73a7bd) * 4 + 0x3c4190))();
      return uVar2;
    }
  }
  else {
    local_24[0] = param_2;
    uVar1 = (**(code **)(param_1 + 0x220))(param_1 + 0x240,local_24);
  }
  return (ulong)(uVar1 & 1);
}


