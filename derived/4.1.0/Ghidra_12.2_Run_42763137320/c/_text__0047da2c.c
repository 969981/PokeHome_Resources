/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0047da2c; name: FUN_.text__0047da2c
 */


undefined1  [16] FUN__text__0047da2c(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  
  uVar2 = *(ulong *)(param_1 + 0x78);
  if ((*(long *)(param_1 + 0x98) != 0) &&
     (lVar1 = *(long *)(*(long *)(param_1 + 0x98) + 8), *(short *)(lVar1 + 0x38) != 0)) {
    uVar2 = *(ulong *)(*(long *)(lVar1 + 0x20) + 0x18);
  }
  auVar3._8_8_ = 0;
  auVar3._0_8_ = uVar2;
  return auVar3;
}


