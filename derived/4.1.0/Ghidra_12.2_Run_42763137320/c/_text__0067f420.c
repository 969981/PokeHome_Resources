/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0067f420; name: FUN_.text__0067f420
 */


void FUN__text__0067f420(long param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  
  lVar1 = param_1 + 0x1a0;
  iVar2 = FUN__text__006841d8(lVar1,*(undefined8 *)(param_1 + 0x218));
  if (iVar2 != 0) {
    FUN__text__00679ef8(param_1,*(undefined4 *)(param_1 + 0x93c),1,0x71ece3);
    return;
  }
  lVar3 = FUN__text__00680914(param_1,*(undefined4 *)(param_1 + 0x1a8));
  if ((lVar3 == 0) || ((*(byte *)(lVar3 + 0xe4) >> 1 & 1) != 0)) {
LAB__text__0067f49c:
    *(undefined4 *)(param_1 + 0x1d8) = 0;
    FUN__text__0067c1c8(param_1,lVar1);
    return;
  }
  iVar2 = *(int *)(lVar3 + 0xdc);
  if (iVar2 == 1) {
    if ((*(uint *)(param_1 + 0x1a8) != 0) &&
       (((*(uint *)(param_1 + 0x1a8) ^ (uint)(*(char *)(param_1 + 0x9aa) == '\0')) & 1) == 0)) {
      *(undefined4 *)(param_1 + 0x1d8) = 1;
      FUN__text__0067c3a0(param_1,lVar1);
      return;
    }
  }
  else {
    if (iVar2 == 4) {
      *(undefined4 *)(param_1 + 0x1d8) = 2;
      FUN__text__0067c424(param_1,lVar1);
      return;
    }
    if (iVar2 == 5) goto LAB__text__0067f49c;
  }
  *(undefined4 *)(param_1 + 0x1d8) = 3;
  FUN__text__0067c564(param_1,lVar1);
  return;
}


