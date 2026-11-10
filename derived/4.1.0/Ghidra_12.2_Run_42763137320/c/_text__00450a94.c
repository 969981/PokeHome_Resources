/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00450a94; name: FUN_.text__00450a94
 */


void FUN__text__00450a94(long param_1,uint param_2,uint param_3)

{
  if (*(long *)(param_1 + 0xa8) != 0 && (param_3 & 1) != 0) {
    *(ushort *)(*(long *)(param_1 + 0xa8) + 0xca) = (ushort)param_2 & 1;
  }
  if ((*(long *)(param_1 + 0xb0) != 0) && ((param_3 >> 1 & 1) != 0)) {
    *(ushort *)(*(long *)(param_1 + 0xb0) + 0xca) = (ushort)(param_2 >> 1) & 1;
  }
  if ((*(long *)(param_1 + 0xb8) != 0) && ((param_3 >> 2 & 1) != 0)) {
    *(ushort *)(*(long *)(param_1 + 0xb8) + 0xca) = (ushort)(param_2 >> 2) & 1;
  }
  if ((*(long *)(param_1 + 0xc0) != 0) && ((param_3 >> 3 & 1) != 0)) {
    *(ushort *)(*(long *)(param_1 + 0xc0) + 0xca) = (ushort)(param_2 >> 3) & 1;
  }
  return;
}


