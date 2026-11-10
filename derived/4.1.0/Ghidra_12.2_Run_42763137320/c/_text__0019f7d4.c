/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0019f7d4; name: FUN_.text__0019f7d4
 */


bool FUN__text__0019f7d4(long param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  
  if (*(char *)(*(long *)(param_1 + 0x68) + 0x20) == '\0') {
    bVar2 = false;
    lVar3 = *(long *)(param_1 + 0x88);
    cVar1 = *(char *)(lVar3 + 0x20);
  }
  else {
    bVar2 = *(char *)(*(long *)(param_1 + 0x68) + 0x5b69) != '\0';
    lVar3 = *(long *)(param_1 + 0x88);
    cVar1 = *(char *)(lVar3 + 0x20);
  }
  if ((cVar1 != '\0') && (*(char *)(lVar3 + 0x5b69) != '\0')) {
    bVar2 = true;
  }
  if ((*(char *)(*(long *)(param_1 + 0xa8) + 0x20) != '\0') &&
     (*(char *)(*(long *)(param_1 + 0xa8) + 0x588c) != '\0')) {
    bVar2 = true;
  }
  if ((*(char *)(*(long *)(param_1 + 200) + 0x20) != '\0') &&
     (*(char *)(*(long *)(param_1 + 200) + 0x588c) != '\0')) {
    bVar2 = true;
  }
  return bVar2;
}


