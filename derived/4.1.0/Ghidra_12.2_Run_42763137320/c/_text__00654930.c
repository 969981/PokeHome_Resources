/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00654930; name: FUN_.text__00654930
 */


void FUN__text__00654930(byte *param_1,undefined4 param_2,undefined1 *param_3)

{
  int iVar1;
  size_t sVar2;
  
  sVar2 = strlen((char *)param_1);
  if (0xfe < sVar2) {
    sVar2 = 0xff;
  }
  for (; sVar2 != 0; sVar2 = sVar2 - 1) {
    iVar1 = tolower((uint)*param_1);
    *param_3 = (char)iVar1;
    param_3 = param_3 + 1;
    param_1 = param_1 + 1;
  }
  FUN__text__006599c0(param_3,7,0x711fbf,param_2);
  return;
}


