/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00602a10; name: FUN_.text__00602a10
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN__text__00602a10(ulong param_1)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  
  uVar2 = (uint)param_1;
  if (0xfb < (int)uVar2) {
    if (0x182 < uVar2) {
      return 0;
    }
    lVar3 = 0;
    uVar1 = _DAT_00759044;
    while (uVar1 != uVar2) {
      if (lVar3 == 0x86) {
        return 0;
      }
      if (*(uint *)(lVar3 * 4 + 0x759048) == uVar2) {
        lVar3 = lVar3 + 1;
        break;
      }
      lVar3 = lVar3 + 2;
      uVar1 = *(uint *)(&DAT_00759044 + lVar3 * 4);
    }
    param_1 = (ulong)((int)lVar3 + 0x115);
  }
  return param_1;
}


