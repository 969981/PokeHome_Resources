/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0057e310; name: FUN_.text__0057e310
 */


undefined8 FUN__text__0057e310(uint param_1,uint *param_2,long *param_3,uint param_4)

{
  long lVar1;
  
  if (param_4 < 2) {
    param_4 = 1;
  }
  *param_2 = param_4;
  lVar1 = (**(code **)(*param_3 + 0x20))(param_3,(ulong)param_4 << 3,0x10,0x70c8d9,0x29);
  *(long *)(param_2 + 2) = lVar1;
  if (lVar1 == 0) {
    return 0x34;
  }
  param_2[4] = 0;
  param_2[5] = param_1;
  return 1;
}


