/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004cdb24; name: FUN_.text__004cdb24
 */


void FUN__text__004cdb24(long param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = param_2 >> 3 & 0x1fff;
  *(byte *)(*(long *)(param_1 + 0x30) + uVar1) =
       *(byte *)(*(long *)(param_1 + 0x30) + uVar1) & ((byte)(1 << (param_2 & 7)) ^ 0xff);
  return;
}


