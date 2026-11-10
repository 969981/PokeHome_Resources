/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003b0700; name: FUN_.text__003b0700
 */


uint FUN__text__003b0700(long param_1)

{
  uint uVar1;
  
  uVar1 = FUN__text__003b9238(*(undefined8 *)(param_1 + 0x748));
  if ((uVar1 & 1) == 0) {
    FUN__text__003a1648(param_1,0);
    *(undefined1 *)(param_1 + 0x85) = 1;
    FUN__text__003adcc0(param_1,*(undefined4 *)(*(long *)(param_1 + 0x800) + 0x14),
                        (int)*(float *)(*(long *)(param_1 + 0x748) + 0x1d4));
  }
  return (uVar1 ^ 0xffffffff) & 1;
}


