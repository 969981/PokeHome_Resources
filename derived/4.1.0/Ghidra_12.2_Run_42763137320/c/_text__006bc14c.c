/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006bc14c; name: FUN_.text__006bc14c
 */


void FUN__text__006bc14c(ushort *param_1,long param_2)

{
  ushort uVar1;
  
  uVar1 = *param_1;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  if (param_2 != 0) {
    *(long *)(param_1 + 4) = param_2;
    uVar1 = uVar1 & 0xff00 | 0x90;
  }
  *param_1 = uVar1 & 0xe0ff;
  return;
}


