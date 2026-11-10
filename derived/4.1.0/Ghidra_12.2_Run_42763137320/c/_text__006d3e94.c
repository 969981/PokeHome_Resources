/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006d3e94; name: FUN_.text__006d3e94
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__006d3e94(long *param_1)

{
  FUN__text__0069d5ac();
  *param_1 = _DAT_008a6b00 + 0x10;
  FUN__text__006d3448(param_1 + 4);
  *(undefined1 *)(param_1 + 0x2b) = 0;
  param_1[0x2a] = 0;
  param_1[0x2e] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  FUN__text__006f5ccc(param_1 + 0x2f);
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  *(byte *)(param_1 + 0x2b) = *(byte *)(param_1 + 0x2b) & 0xfc | 1;
  return;
}


