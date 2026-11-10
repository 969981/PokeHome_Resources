/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0050f0b8; name: FUN_.text__0050f0b8
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN__text__0050f0b8(long param_1,int param_2)

{
  long lVar1;
  ushort uVar2;
  
  uVar2 = *(ushort *)
           (*(long *)(param_1 + 8) +
            (ulong)(ushort)((uint)(param_2 - *(int *)(param_1 + 0x20)) >> 6) * 8 + 6);
  lVar1 = *(long *)(param_1 + 0x18) + (ulong)uVar2 * 0x10;
  if (*(ushort *)(param_1 + 0x74) <= uVar2) {
    lVar1 = _DAT_008a4050;
  }
  return lVar1;
}


