/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006843b4; name: FUN_.text__006843b4
 */


void FUN__text__006843b4(uint *param_1,long param_2)

{
  uint uVar1;
  
  uVar1 = FUN__text__006799c4(param_2);
  *param_1 = uVar1 & 0xffff;
  uVar1 = FUN__text__006799cc(param_2 + 2);
  param_1[1] = uVar1;
  return;
}


