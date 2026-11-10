/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0069128c; name: FUN_.text__0069128c
 */


undefined8
FUN__text__0069128c(long param_1,undefined4 param_2,undefined4 param_3,undefined2 param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined4 local_14;
  
  local_14 = 0;
  uVar1 = FUN__text__00690390(param_1,&local_14,param_4,param_2);
  if ((uVar1 & 1) == 0) {
    return 0;
  }
  uVar2 = FUN__text__00691ba0(param_1 + 0x30,param_2,param_3,local_14);
  return uVar2;
}


