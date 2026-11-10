/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0069d730; name: FUN_.text__0069d730
 */


void FUN__text__0069d730(byte *param_1,uint param_2)

{
  undefined8 *puVar1;
  
  if ((int)(uint)*param_1 < (int)param_2) {
    if (*(long *)(param_1 + 8) != 0) {
      FUN__text__006a0f24();
      param_1[8] = 0;
      param_1[9] = 0;
      param_1[10] = 0;
      param_1[0xb] = 0;
      param_1[0xc] = 0;
      param_1[0xd] = 0;
      param_1[0xe] = 0;
      param_1[0xf] = 0;
      param_1[0] = 0;
      param_1[1] = 0;
    }
    puVar1 = (undefined8 *)FUN__text__006a0f04((ulong)param_2 << 5);
    *puVar1 = 0;
    *(undefined8 **)(param_1 + 8) = puVar1;
    *param_1 = (byte)param_2;
  }
  return;
}


