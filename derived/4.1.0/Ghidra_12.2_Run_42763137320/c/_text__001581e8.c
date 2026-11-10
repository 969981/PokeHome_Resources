/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001581e8; name: FUN_.text__001581e8
 */


byte * FUN__text__001581e8(long param_1,uint param_2,uint param_3)

{
  byte *pbVar1;
  
  pbVar1 = *(byte **)(*(long *)(param_1 + (ulong)*(uint *)(param_1 + 0xc08) * 0x110 + 0x58) + 400);
  if (*pbVar1 < param_2) {
    return (byte *)0x72461e;
  }
  if (pbVar1[1] < param_3) {
    return (byte *)0x72461e;
  }
  return pbVar1 + (ulong)pbVar1[(ulong)param_3 + (ulong)(uint)pbVar1[1] * (ulong)param_2 +
                                (ulong)*pbVar1 * 2 + 2] +
                  (ulong)*(ushort *)(pbVar1 + (ulong)param_2 * 2 + 2);
}


