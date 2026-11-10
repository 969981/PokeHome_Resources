/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00601980; name: FUN_.text__00601980
 */


undefined8 FUN__text__00601980(long param_1,int param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  
  if (*(char *)(param_1 + 0x28) == '\0') {
    return 0;
  }
  lVar2 = 0;
  uVar3 = 0;
  do {
    iVar1 = FUN__text__0060172c(*(long *)(param_1 + 8) + lVar2);
    if (iVar1 == param_2) {
      FUN__text__006016f4(*(long *)(param_1 + 8) + lVar2,param_3);
      return 1;
    }
    uVar3 = uVar3 + 1;
    lVar2 = lVar2 + 0x1a0;
  } while (uVar3 < *(byte *)(param_1 + 0x28));
  return 0;
}


