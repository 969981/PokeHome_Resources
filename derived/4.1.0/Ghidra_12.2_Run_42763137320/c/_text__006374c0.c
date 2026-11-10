/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006374c0; name: FUN_.text__006374c0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__006374c0(long *param_1)

{
  long lVar1;
  uint uVar2;
  
  FUN__text__00630b2c();
  lVar1 = _DAT_008a62f8 + 0x48;
  *param_1 = _DAT_008a62f8 + 0x10;
  param_1[9] = lVar1;
  uVar2 = FUN__text__00632ee0(param_1);
  FUN__text__0060f154(param_1[0x5e]);
  FUN__text__006316f4(param_1,1);
  FUN__text__00630fcc(param_1);
  FUN__text__006331e0(param_1,uVar2 & 1);
  return;
}


