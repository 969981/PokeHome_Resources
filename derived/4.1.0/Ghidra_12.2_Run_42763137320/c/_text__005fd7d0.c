/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005fd7d0; name: FUN_.text__005fd7d0
 */


undefined2 FUN__text__005fd7d0(long param_1,int param_2)

{
  long lVar1;
  
  if (param_2 != 0) {
    lVar1 = *(long *)(param_1 + 0x160);
    if ((param_2 - 1U & 0xff) < (uint)*(byte *)(lVar1 + 0x15)) {
      return *(undefined2 *)
              (lVar1 + (ulong)*(ushort *)(lVar1 + 2) * 2 + (ulong)*(byte *)(lVar1 + 8) * 2 +
               (ulong)(byte)(param_2 - 1U) * 2 + 0x364);
    }
  }
  return 0;
}


