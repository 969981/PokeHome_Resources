/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003a85a0; name: FUN_.text__003a85a0
 */


undefined8 FUN__text__003a85a0(long param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0x408);
  iVar1 = *(int *)(lVar4 + 8);
  if (*(int *)(lVar4 + 0x1c) == 0) {
    iVar2 = *(int *)(lVar4 + 0xc);
    iVar3 = 0;
    if (iVar2 != 0) {
      iVar3 = iVar1 / iVar2;
    }
    return CONCAT44(iVar3,iVar1 - iVar3 * iVar2);
  }
  iVar2 = *(int *)(lVar4 + 0x10);
  iVar3 = 0;
  if (iVar2 != 0) {
    iVar3 = iVar1 / iVar2;
  }
  return CONCAT44(iVar1 - iVar3 * iVar2,iVar3);
}


