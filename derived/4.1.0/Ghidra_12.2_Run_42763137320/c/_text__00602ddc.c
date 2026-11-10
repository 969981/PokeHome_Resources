/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00602ddc; name: FUN_.text__00602ddc
 */


undefined4 FUN__text__00602ddc(ulong param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(0x700050403020100 >> ((param_1 & 7) << 3));
  if ((param_1 & 0xf8) != 0) {
    uVar1 = 0;
  }
  return uVar1;
}


