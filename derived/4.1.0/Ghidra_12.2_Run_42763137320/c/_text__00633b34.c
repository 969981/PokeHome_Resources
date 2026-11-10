/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00633b34; name: FUN_.text__00633b34
 */


uint FUN__text__00633b34(long param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = FUN__text__00613c00(*(undefined8 *)(param_1 + 0x2f0));
  uVar2 = FUN__text__0060fba0(*(undefined8 *)(param_1 + 0x2f0));
  if (param_2 == 2) {
    return (uVar1 | uVar2) & 1;
  }
  if (param_2 != 1) {
    if (param_2 != 0) {
      return 0;
    }
    uVar2 = uVar1 & (uVar2 ^ 1);
  }
  return uVar2 & 1;
}


