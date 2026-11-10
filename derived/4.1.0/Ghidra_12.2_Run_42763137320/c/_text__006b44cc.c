/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006b44cc; name: FUN_.text__006b44cc
 */


undefined8 FUN__text__006b44cc(long param_1)

{
  long lVar1;
  uint uVar2;
  
  if ((*(byte *)(param_1 + 0x62) >> 1 & 1) == 0) {
    return 0;
  }
  lVar1 = *(long *)(param_1 + 0xa8) + 0xc;
  uVar2 = *(uint *)(*(long *)(param_1 + 0xa8) + 0x10);
  return *(undefined8 *)
          (lVar1 + (ulong)(*(int *)(lVar1 + (ulong)uVar2 + 4 +
                                            (ulong)*(byte *)(lVar1 + (ulong)(*(int *)(lVar1 + (ulong
                                                  )uVar2 + 4) + uVar2) + 0xc) * 4) + uVar2) + 8);
}


