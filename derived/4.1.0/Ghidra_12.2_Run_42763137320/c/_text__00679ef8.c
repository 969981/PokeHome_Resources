/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00679ef8; name: FUN_.text__00679ef8
 */


undefined8 FUN__text__00679ef8(long param_1,undefined4 param_2,undefined4 param_3,char *param_4)

{
  size_t sVar1;
  undefined8 uVar2;
  
  if ((*(byte *)(param_1 + 0x9ab) & 1) != 0) {
    return 0;
  }
  *(undefined4 *)(param_1 + 0x280) = 0xf;
  if (param_4 == (char *)0x0) {
    sVar1 = 0;
  }
  else {
    sVar1 = strlen(param_4);
  }
  uVar2 = FUN__text__0067f8cc(param_1,param_2,param_3,param_4,sVar1,1);
  if ((int)uVar2 == 0) {
    *(byte *)(param_1 + 0x9ab) = *(byte *)(param_1 + 0x9ab) | 1;
  }
  return uVar2;
}


