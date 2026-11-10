/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0065f724; name: FUN_.text__0065f724
 */


ushort FUN__text__0065f724(long *param_1)

{
  int iVar1;
  ushort uVar2;
  long lVar3;
  
  uVar2 = 0;
  lVar3 = *param_1;
  if (((*(byte *)(lVar3 + 0xf42) & 1) != 0) && (iVar1 = *(int *)(lVar3 + 0x180), 399 < iVar1)) {
    if (iVar1 == 0x197) {
      if ((*(byte *)((long)param_1 + 0x3fd) & 1) == 0) {
        return 1;
      }
    }
    else if ((iVar1 != 0x191) || (-1 < *(char *)((long)param_1 + 0x3fc))) {
      return 1;
    }
    uVar2 = *(ushort *)(lVar3 + 0x15a4) >> 5 & 1;
  }
  return uVar2;
}


