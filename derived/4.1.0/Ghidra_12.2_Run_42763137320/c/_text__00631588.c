/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00631588; name: FUN_.text__00631588
 */


undefined8 FUN__text__00631588(long param_1,uint param_2)

{
  uint uVar1;
  undefined8 uVar2;
  
  if ((int)param_2 < 6) {
    uVar1 = FUN__text__00622cc0(*(undefined8 *)(param_1 + 0x2f0));
    if (((uVar1 & 0xff) >> (ulong)(param_2 & 0x1f) & 1) != 0) {
      return 0x1f;
    }
  }
  uVar2 = FUN__text__0063152c(param_1,param_2);
  return uVar2;
}


