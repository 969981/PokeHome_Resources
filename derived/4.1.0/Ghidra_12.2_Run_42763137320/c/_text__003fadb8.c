/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003fadb8; name: FUN_.text__003fadb8
 */


int FUN__text__003fadb8(long *param_1)

{
  int iVar1;
  
  if (param_1[3] == 0 || (char)param_1[0xd] != '\0') {
    iVar1 = 1;
  }
  else {
    iVar1 = FUN__text__003f5d60(param_1[3],param_1[4]);
    if (iVar1 == 1) {
      (**(code **)(*param_1 + 0x20))(param_1);
    }
    if (param_1[3] != 0) {
      FUN__text__003f5cac();
      param_1[3] = 0;
      return iVar1;
    }
  }
  return iVar1;
}


