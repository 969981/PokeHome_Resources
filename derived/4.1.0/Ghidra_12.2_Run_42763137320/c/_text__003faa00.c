/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003faa00; name: FUN_.text__003faa00
 */


void FUN__text__003faa00(long param_1,uint param_2,undefined4 param_3)

{
  uint uVar1;
  
  uVar1 = FUN__text__003faa50();
  FUN__text__003faa50(param_1,param_2 & (uVar1 ^ 0xffffffff) & 1,param_3,param_1 + 0x278);
  return;
}


