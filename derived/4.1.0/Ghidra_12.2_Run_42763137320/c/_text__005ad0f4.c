/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005ad0f4; name: FUN_.text__005ad0f4
 */


void FUN__text__005ad0f4(long *param_1,long param_2,long param_3)

{
  long lVar1;
  
  lVar1 = FUN__text__005b2900(param_2 + 0x68);
  if (lVar1 == 0) {
    FUN__text__005b3700(param_2 + 0x68);
  }
  *param_1 = lVar1;
  param_1[1] = param_2;
  (**(code **)(*(long *)(param_2 + 0x48) + 0x10))((long *)(param_2 + 0x48));
  param_1[2] = *(long *)(lVar1 + 0x30);
  param_1[3] = param_3;
  return;
}


