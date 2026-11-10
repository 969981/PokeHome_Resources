/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00158b08; name: FUN_.text__00158b08
 */


undefined8 FUN__text__00158b08(undefined8 param_1,ushort *param_2)

{
  ushort uVar1;
  uint uVar2;
  
  uVar1 = *param_2;
  if ((uVar1 - 0x430 < 0x20) ||
     (uVar2 = uVar1 - 0xe3, uVar2 < 0x1c && (1 << (ulong)(uVar2 & 0x1f) & 0xc60a205U) != 0)) {
    *param_2 = uVar1 - 0x20;
    return 1;
  }
  return 0;
}


