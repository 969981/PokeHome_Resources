/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002d63d0; name: FUN_.text__002d63d0
 */


void FUN__text__002d63d0(long param_1,uint param_2,uint param_3)

{
  ushort uVar1;
  ushort uVar2;
  
  uVar2 = (ushort)(1 << (ulong)(param_2 & 0x1f));
  uVar1 = *(ushort *)(param_1 + 48000) | uVar2;
  if ((param_3 & 1) == 0) {
    uVar1 = *(ushort *)(param_1 + 48000) & (uVar2 ^ 0xffff);
  }
  *(ushort *)(param_1 + 48000) = uVar1;
  return;
}


