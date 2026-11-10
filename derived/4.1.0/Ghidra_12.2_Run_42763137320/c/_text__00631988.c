/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00631988; name: FUN_.text__00631988
 */


void FUN__text__00631988(long param_1,uint param_2)

{
  uint uVar1;
  
  if ((int)param_2 < 6) {
    uVar1 = FUN__text__00622cc0(*(undefined8 *)(param_1 + 0x2f0));
    FUN__text__00622b30(*(undefined8 *)(param_1 + 0x2f0),
                        uVar1 & (1 << (ulong)(param_2 & 0x1f) ^ 0xffffffffU));
    FUN__text__006316f4(param_1,1);
    return;
  }
  return;
}


