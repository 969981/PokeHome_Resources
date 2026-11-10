/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0068de38; name: FUN_.text__0068de38
 */


bool FUN__text__0068de38(long param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  long lVar3;
  
  iVar1 = 0x2d;
  if (*(char *)(param_1 + 0x30) == '\0' || param_2 != 0x2011) {
    iVar1 = param_2;
  }
  lVar3 = FUN__text__0069128c(*(undefined8 *)(param_1 + 0x10),iVar1,*(undefined4 *)(param_1 + 0x18),
                              *(undefined2 *)(param_1 + 0x32));
  bVar2 = false;
  if (lVar3 != 0) {
    if ((*(byte *)(lVar3 + 0x38) & 0x42) != 0) {
      return false;
    }
    if ((*(byte *)(lVar3 + 0x38) & 0x35) != 0) {
      return true;
    }
    bVar2 = *(int *)(lVar3 + 0x3c) != 0;
  }
  return bVar2;
}


