/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0044f4ec; name: FUN_.text__0044f4ec
 */


void FUN__text__0044f4ec(long param_1)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  
  if (*(int *)(param_1 + 0x110) == 0 && *(int *)(param_1 + 0x114) == 2) {
    lVar2 = *(long *)(param_1 + 8);
    if (lVar2 != 0) {
      *(undefined4 *)(lVar2 + 0x2f4) = 0;
      *(uint *)(lVar2 + 0x2fb) = *(uint *)(lVar2 + 0x2fb) & 0xfe3fffff;
      return;
    }
  }
  else if ((*(long *)(param_1 + 0xe0) != 0) &&
          ((*(byte *)(*(long *)(param_1 + 0xe0) + 0x20) & 1) != 0)) {
    plVar3 = (long *)(param_1 + 0x70);
    (**(code **)(*plVar3 + 0x18))(plVar3);
    FUN__text__004590a0(param_1);
    iVar1 = (**(code **)(*plVar3 + 0x38))(plVar3);
    if (iVar1 != 1) {
      if (*(long *)(param_1 + 0xe0) != 0) {
        FUN__text__004286a0();
      }
      *(undefined4 *)(param_1 + 0xf8) = 2;
      *(undefined4 *)(param_1 + 300) = 0x11;
    }
  }
  return;
}


