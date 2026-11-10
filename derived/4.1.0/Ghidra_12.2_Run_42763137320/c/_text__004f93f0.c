/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004f93f0; name: FUN_.text__004f93f0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__004f93f0(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = _DAT_008a50a8 + 0x2e0;
  lVar2 = _DAT_008a50a8 + 0x2f8;
  lVar3 = _DAT_008a50a8 + 0x338;
  lVar4 = _DAT_008a50a8 + 0x3d0;
  *param_1 = _DAT_008a50a8 + 0x10;
  param_1[1] = lVar1;
  param_1[2] = lVar2;
  param_1[5] = lVar3;
  param_1[0x27] = lVar4;
  if (param_1[0x2e] != 0) {
    FUN__text__00400fc0(2);
    param_1[0x2e] = 0;
  }
  if (param_1[0x2f] != 0) {
    FUN__text__00400fc0(2);
    param_1[0x2f] = 0;
  }
  FUN__text__004cc198(param_1 + 0x2a);
  FUN__text__004f6fac(param_1);
  return;
}


