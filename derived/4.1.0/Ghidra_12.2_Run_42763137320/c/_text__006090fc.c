/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006090fc; name: FUN_.text__006090fc
 */


uint FUN__text__006090fc(uint param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = param_1 & 0xffff;
  if (uVar1 == 0) {
    param_1 = 0x292;
  }
  uVar2 = 0;
  if (uVar1 != 0xffff) {
    uVar2 = param_1;
  }
  return uVar2;
}


