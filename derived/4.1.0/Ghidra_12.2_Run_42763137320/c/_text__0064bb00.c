/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0064bb00; name: FUN_.text__0064bb00
 */


undefined4 FUN__text__0064bb00(undefined8 *param_1)

{
  int iVar1;
  undefined4 local_1c;
  undefined8 local_18;
  
  local_1c = 0;
  if (param_1[0x12] != 0) {
    if (*(int *)(param_1 + 1) == 0x23) {
      local_18 = 0;
      iVar1 = FUN__text__0064ef64(*param_1,&DAT__text__00200039,&local_18);
    }
    else {
      if (*(int *)(param_1 + 1) != 0x3c) {
        return 0;
      }
      local_18 = 0;
      iVar1 = FUN__text__0064ef64(*param_1,0x20000d,&local_18);
    }
    if (iVar1 == 0) {
      nn::ssl::GetSslResultFromValue((Result *)&local_1c,(char *)&local_18,8);
      return local_1c;
    }
  }
  return local_1c;
}


