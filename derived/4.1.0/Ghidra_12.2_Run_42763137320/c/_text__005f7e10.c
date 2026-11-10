/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005f7e10; name: FUN_.text__005f7e10
 */


int FUN__text__005f7e10(ulong param_1)

{
  ulong uVar1;
  long lVar2;
  
  if (param_1 == 0) {
    return 0xff;
  }
  param_1 = param_1 | param_1 >> 1;
  param_1 = param_1 | param_1 >> 2;
  param_1 = param_1 | param_1 >> 4;
  param_1 = param_1 | param_1 >> 8;
  param_1 = param_1 | param_1 >> 0x10;
  param_1 = param_1 | param_1 >> 0x20;
  uVar1 = (param_1 >> 1 & 0x5555555555555555) + (param_1 & 0x5555555555555555);
  uVar1 = (uVar1 >> 2 & 0x3333333333333333) + (uVar1 & 0x3333333333333333);
  uVar1 = (uVar1 >> 4 & 0x707070707070707) + (uVar1 & 0x707070707070707);
  uVar1 = (uVar1 >> 8 & 0xf000f000f000f) + (uVar1 & 0xf000f000f000f);
  lVar2 = (uVar1 >> 0x10 & 0x1f0000001f) + (uVar1 & 0x1f0000001f);
  return (int)((ulong)lVar2 >> 0x20) + (int)lVar2 + -1;
}


