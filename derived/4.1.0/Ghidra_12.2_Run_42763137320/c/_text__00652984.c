/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00652984; name: FUN_.text__00652984
 */


ulong FUN__text__00652984(char *param_1,char *param_2)

{
  size_t sVar1;
  size_t sVar2;
  ulong uVar3;
  
  sVar1 = strlen(param_1);
  sVar2 = strlen(param_2);
  if (sVar2 < sVar1) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN__text__0066c234(param_1,param_2 + (sVar2 - sVar1));
    if ((int)uVar3 != 0) {
      if (sVar2 == sVar1) {
        uVar3 = 1;
      }
      else {
        uVar3 = (ulong)((param_2 + (sVar2 - sVar1))[-1] == '.');
      }
    }
  }
  return uVar3;
}


