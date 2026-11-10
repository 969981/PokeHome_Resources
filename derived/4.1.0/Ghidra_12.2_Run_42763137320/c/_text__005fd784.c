/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005fd784; name: FUN_.text__005fd784
 */


long FUN__text__005fd784(long param_1,ushort param_2)

{
  long lVar1;
  uint uVar2;
  
  lVar1 = *(long *)(param_1 + 0x160);
  if (((lVar1 == 0) || (*(ushort *)(lVar1 + 2) <= param_2)) ||
     (uVar2 = (uint)*(ushort *)(lVar1 + (ulong)param_2 * 2 + 0x44), *(ushort *)(lVar1 + 4) <= uVar2)
     ) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl();
  }
  return lVar1 + (ulong)*(uint *)(lVar1 + 0x40) + (ulong)uVar2 * 0x30;
}


