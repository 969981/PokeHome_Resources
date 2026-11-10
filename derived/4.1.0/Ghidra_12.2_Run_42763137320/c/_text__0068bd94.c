/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0068bd94; name: FUN_.text__0068bd94
 */


void FUN__text__0068bd94(byte *param_1,int param_2)

{
  undefined8 uVar1;
  
  if (-1 < *(int *)(param_1 + 0x2c)) {
    return;
  }
  *(int *)(param_1 + 0x2c) = param_2;
  if (*(long *)(param_1 + 8) != 0) {
    uVar1 = FUN__text__006ec5f4(*(long *)(param_1 + 8) + (long)param_2 * 0x48);
    *(undefined8 *)(param_1 + 0x38) = uVar1;
  }
  if ((*param_1 & 1) == 0) {
    param_1[0x40] = 0;
    param_1[0x41] = 0;
    param_1[0x42] = 0;
    param_1[0x43] = 0;
    param_1[0x44] = 0;
    param_1[0x45] = 0;
    param_1[0x46] = 0;
    param_1[0x47] = 0;
    param_1[0x48] = 0;
    param_1[0x49] = 0;
    param_1[0x4a] = 0;
    param_1[0x4b] = 0;
    param_1[0x4c] = 0;
    param_1[0x4d] = 0;
    param_1[0x4e] = 0;
    param_1[0x4f] = 0;
    return;
  }
  **(undefined8 **)(param_1 + 0x40) = 0;
  **(undefined8 **)(param_1 + 0x48) = 0;
  return;
}


