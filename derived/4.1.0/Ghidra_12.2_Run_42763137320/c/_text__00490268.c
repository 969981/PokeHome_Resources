/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00490268; name: FUN_.text__00490268
 */


void FUN__text__00490268(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined1 uStack_1;
  
  iVar1 = FUN__text__0048f990(param_2);
  if ((iVar1 != 0) && (lVar2 = FUN__text__00491720(param_1 + 0x20,iVar1,&uStack_1), lVar2 != 0)) {
    *(int *)(lVar2 + 4) = *(int *)(lVar2 + 4) + 1;
    *(int *)(param_1 + 0xa8) = *(int *)(param_1 + 0xa8) + 1;
  }
  return;
}


