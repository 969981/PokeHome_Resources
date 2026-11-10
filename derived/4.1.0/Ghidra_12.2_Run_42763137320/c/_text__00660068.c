/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00660068; name: FUN_.text__00660068
 */


undefined4 FUN__text__00660068(undefined8 *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  char *__s;
  size_t sVar2;
  undefined8 *puVar3;
  undefined1 auStack_f0 [128];
  
  puVar3 = (undefined8 *)*param_1;
  __s = (char *)FUN__text__00659bb0(param_2,auStack_f0 + 0x80);
  if (__s == (char *)0x0) {
    FUN__text__006783e4(*puVar3);
    FUN__text__006783e4(puVar3);
    *param_1 = 0;
    uVar1 = 0x1b;
  }
  else {
    sVar2 = strlen(__s);
    uVar1 = FUN__text__00660138(param_1,__s,sVar2);
    FUN__text__006783e4(__s);
  }
  return uVar1;
}


