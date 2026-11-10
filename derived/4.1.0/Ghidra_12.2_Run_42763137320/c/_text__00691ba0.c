/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00691ba0; name: FUN_.text__00691ba0
 */


void FUN__text__00691ba0(long *param_1,uint param_2,long param_3,uint param_4)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    uVar2 = param_3 << 0x30 | (ulong)(param_4 & 0xffff) << 0x20 | (ulong)param_2;
    do {
      while (*(ulong *)(lVar1 + 0x30) <= uVar2) {
        if (uVar2 <= *(ulong *)(lVar1 + 0x30)) {
          return;
        }
        lVar1 = *(long *)(lVar1 + 0x28);
        if (lVar1 == 0) {
          return;
        }
      }
      lVar1 = *(long *)(lVar1 + 0x20);
    } while (lVar1 != 0);
  }
  return;
}


