/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0040a500; name: FUN_.text__0040a500
 */


void FUN__text__0040a500(ulong param_1)

{
  long lVar1;
  ulong uVar2;
  uint local_18;
  uint local_14;
  
  uVar2 = param_1 >> 0x20;
  local_18 = (uint)param_1;
  local_14 = (uint)(param_1 >> 0x20);
  lVar1 = DAT_00ae99f8;
  if (local_14 == 0 && local_18 == 0) {
    for (; (lVar1 != 0 && (*(char *)(lVar1 + 0x555) == '\0')); lVar1 = *(long *)(lVar1 + 0x20)) {
    }
  }
  else {
    if ((local_18 == 0) || (local_14 == 0)) {
      FUN__text__00408da0(&local_18,&local_14);
      uVar2 = (ulong)local_14;
      param_1 = (ulong)local_18;
    }
    if (DAT_00ae99f8 != 0) {
      lVar1 = DAT_00ae99f8;
      do {
        if (*(ulong *)(lVar1 + 0x28) == (param_1 & 0xffffffff | uVar2 << 0x20)) {
          return;
        }
        lVar1 = *(long *)(lVar1 + 0x20);
      } while (lVar1 != 0);
    }
  }
  return;
}


