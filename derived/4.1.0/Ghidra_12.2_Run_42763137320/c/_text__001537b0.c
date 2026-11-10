/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001537b0; name: FUN_.text__001537b0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__001537b0(int *param_1,uint param_2)

{
  long *plVar1;
  
  plVar1 = _DAT_0089f5b8;
  if ((param_2 & 1) == 0) {
    if (param_1[0xb] != 4) {
      param_1[0xb] = 4;
      if (*param_1 == 3) {
        *(undefined4 *)(DAT_008e1680 + 0x85a0) = 0x3a83126f;
        return;
      }
      if (*param_1 == 2) {
        *(undefined4 *)(*_DAT_0089f5b8 + 0x85a0) = 0x3f4ccccd;
        return;
      }
      *(undefined4 *)(*_DAT_0089f5b8 + 0x85a0) = 0x3f800000;
      param_1[10] = 0;
      *(undefined8 *)((long)param_1 + 0x1d) = 0;
      param_1[4] = 0;
      param_1[5] = 0;
      param_1[6] = 0;
      param_1[7] = 0;
    }
  }
  else if (param_1[0xb] != 3) {
    param_1[0xb] = 3;
    *(undefined4 *)(*plVar1 + 0x85a0) = 0x3a83126f;
    return;
  }
  return;
}


