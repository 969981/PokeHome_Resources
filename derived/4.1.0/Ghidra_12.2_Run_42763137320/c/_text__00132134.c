/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00132134; name: FUN_.text__00132134
 */


bool FUN__text__00132134(long param_1)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  
  iVar3 = FUN__text__003c4854(*(undefined8 *)(param_1 + 0x640));
  if (*(long *)(param_1 + 0x650) == 0) {
    bVar2 = true;
    lVar4 = *(long *)(param_1 + 0x670);
  }
  else {
    bVar2 = *(char *)(*(long *)(param_1 + 0x650) + 0x58) == '\0';
    lVar4 = *(long *)(param_1 + 0x670);
  }
  if (lVar4 == 0) {
    bVar1 = false;
    if (iVar3 == 6) {
      bVar1 = bVar2;
    }
    return bVar1;
  }
  bVar1 = false;
  if (iVar3 == 6) {
    bVar1 = bVar2;
  }
  return (bool)(bVar1 & *(char *)(lVar4 + 0x50) == '\0');
}


