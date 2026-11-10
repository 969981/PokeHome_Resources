/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006331e0; name: FUN_.text__006331e0
 */


uint FUN__text__006331e0(long param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = FUN__text__0060f30c(*(undefined8 *)(param_1 + 0x2f0));
  if ((uVar1 & param_2 & 1) != 0) {
    FUN__text__0060f5b0(*(undefined8 *)(param_1 + 0x2f0));
  }
  return uVar1 & param_2 & 1;
}


