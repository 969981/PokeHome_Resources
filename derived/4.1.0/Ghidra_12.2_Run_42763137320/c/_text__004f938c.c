/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004f938c; name: FUN_.text__004f938c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__004f938c(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  FUN__text__004f6f64();
  *(undefined4 *)(param_1 + 0x29) = 0;
  lVar3 = _DAT_008a50a8;
  lVar1 = _DAT_008a50a8 + 0x2e0;
  lVar2 = _DAT_008a50a8 + 0x2f8;
  *param_1 = _DAT_008a50a8 + 0x10;
  param_1[1] = lVar1;
  param_1[2] = lVar2;
  param_1[5] = lVar3 + 0x338;
  param_1[0x27] = lVar3 + 0x3d0;
  param_1[0x28] = 0;
  FUN__text__004cc180(param_1 + 0x2a);
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  *(undefined1 *)(param_1 + 0x2d) = 1;
  return;
}


