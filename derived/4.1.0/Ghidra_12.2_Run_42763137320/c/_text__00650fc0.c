/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00650fc0; name: FUN_.text__00650fc0
 */


undefined8 FUN__text__00650fc0(long *param_1,long param_2)

{
  size_t sVar1;
  undefined8 uVar2;
  char acStack_a0 [128];
  
  if (*(long *)(*param_1 + 0xe8) != 0) {
    FUN__text__00667a44(*param_1,5,2);
  }
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    memset(acStack_a0,0,0x80);
    FUN__text__00651040(param_1,acStack_a0);
    sVar1 = strlen(acStack_a0);
    uVar2 = FUN__text__00654034(param_2,acStack_a0,sVar1);
  }
  return uVar2;
}


