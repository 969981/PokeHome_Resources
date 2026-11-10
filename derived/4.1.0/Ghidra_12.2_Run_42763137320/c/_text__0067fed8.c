/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0067fed8; name: FUN_.text__0067fed8
 */


int FUN__text__0067fed8(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  
  iVar2 = FUN__text__0067ff28();
  if (iVar2 == 0) {
    lVar3 = FUN__text__00680914(param_1,1);
    lVar1 = 0;
    if (*(int *)(lVar3 + 0xdc) != 5) {
      lVar1 = lVar3;
    }
    *(ushort *)(lVar1 + 0xe2) = *(ushort *)(lVar1 + 0xe2) | 0x400;
  }
  return iVar2;
}


