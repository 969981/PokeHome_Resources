/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0067b230; name: FUN_.text__0067b230
 */


long FUN__text__0067b230(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x108);
  if (lVar1 == 0) {
    lVar1 = *(long *)(param_1 + 0x120);
    if (lVar1 == 0) {
      if (((ulong)*(uint *)(param_1 + 0x96c) <= *(ulong *)(param_1 + 0x8e8)) ||
         (lVar1 = *(long *)(param_1 + 0x138), lVar1 == 0)) {
        if (*(int *)(param_1 + 0x94c) < 1) {
          return 0;
        }
        lVar1 = FUN__text__00686404(param_1 + 0x20);
        return lVar1;
      }
      param_1 = param_1 + 0x138;
    }
    else {
      param_1 = param_1 + 0x120;
    }
  }
  else {
    param_1 = param_1 + 0x108;
  }
  FUN__text__00683c84(param_1);
  *(undefined1 *)(lVar1 + 0x90) = 0;
  return lVar1;
}


