/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003f5bbc; name: FUN_.text__003f5bbc
 */


undefined8 * FUN__text__003f5bbc(char *param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  size_t __n;
  char *__dest;
  size_t sVar5;
  
  puVar4 = (undefined8 *)FUN__text__00400f80(7,0x38);
  if (puVar4 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar4 + 6) = param_3;
    if (param_2 == (undefined8 *)0x0) {
      *(byte *)((long)puVar4 + 0x34) = *(byte *)((long)puVar4 + 0x34) & 0xfc | 1;
    }
    else {
      *(byte *)((long)puVar4 + 0x34) = *(byte *)((long)puVar4 + 0x34) | 3;
      puVar4[1] = *param_2;
      uVar1 = param_2[1];
      uVar2 = param_2[2];
      uVar3 = param_2[4];
      puVar4[4] = param_2[3];
      puVar4[5] = uVar3;
      puVar4[2] = uVar1;
      puVar4[3] = uVar2;
    }
    __n = strlen(param_1);
    __dest = (char *)FUN__text__00400f80(7,__n + 1);
    *puVar4 = __dest;
    if (__dest == (char *)0x0) {
      FUN__text__00400fc0(7,puVar4);
      return (undefined8 *)0x0;
    }
    sVar5 = strlen(param_1);
    if (sVar5 + 1 <= __n) {
      __n = sVar5 + 1;
    }
    strncpy(__dest,param_1,__n);
    __dest[__n] = '\0';
  }
  return puVar4;
}


