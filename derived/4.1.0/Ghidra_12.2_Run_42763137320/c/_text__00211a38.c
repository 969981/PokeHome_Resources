/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00211a38; name: FUN_.text__00211a38
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00211a38(long *param_1)

{
  long lVar1;
  
  lVar1 = _DAT_008a1248;
  param_1[-10] = _DAT_008a1248 + 0x10;
  param_1[-1] = lVar1 + 0x80;
  *param_1 = lVar1 + 0xc0;
  if (param_1[9] != 0) {
    (**(code **)(*(long *)(param_1[9] + 0x48) + 0x18))();
    param_1[9] = 0;
  }
  if (param_1[8] != 0) {
    (**(code **)(*(long *)(param_1[8] + 0x48) + 0x18))();
    param_1[8] = 0;
  }
  if (param_1[7] != 0) {
    (**(code **)(*(long *)(param_1[7] + 0x48) + 0x18))();
    param_1[7] = 0;
  }
  if (param_1[6] != 0) {
    (**(code **)(*(long *)(param_1[6] + 0x48) + 0x18))();
    param_1[6] = 0;
  }
  FUN__text__001256f4(param_1 + -10);
  return;
}


