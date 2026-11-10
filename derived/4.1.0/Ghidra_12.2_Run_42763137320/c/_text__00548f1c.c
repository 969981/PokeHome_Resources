/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00548f1c; name: FUN_.text__00548f1c
 */


void FUN__text__00548f1c(long param_1,long param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x50);
  if (*(char *)(lVar3 + 0x1d) != '\0') {
    iVar2 = FUN__text__005493c0(param_1 + 8,*(undefined8 *)(param_1 + 0x58),lVar3 + 8,
                                *(undefined4 *)(param_2 + 8));
    if (iVar2 != 1) {
      return;
    }
    FUN__text__00549570(param_1 + 8);
    *(undefined1 *)(*(long *)(param_1 + 0x50) + 0x1d) = 0;
    lVar3 = *(long *)(param_1 + 0x50);
  }
  if (*(char *)(lVar3 + 0x15) != '\0') {
    FUN__text__00549674(*(undefined4 *)(lVar3 + 8),param_1 + 8,*(undefined1 *)(lVar3 + 0x14));
    *(undefined1 *)(*(long *)(param_1 + 0x50) + 0x15) = 0;
    lVar3 = *(long *)(param_1 + 0x50);
  }
  lVar1 = 0;
  if (lVar3 != 0) {
    lVar1 = lVar3 + 8;
  }
  FUN__text__00549700(param_1 + 8,param_2,lVar1);
  return;
}


