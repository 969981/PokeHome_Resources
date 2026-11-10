/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00558510; name: FUN_.text__00558510
 */


void FUN__text__00558510(long param_1,uint param_2)

{
  long lVar1;
  ulong uVar2;
  
  if ((*(long *)(param_1 + 0x50) != 0) &&
     (FUN__text__00556960(param_1,*(undefined4 *)(param_1 + 0x28)), *(int *)(param_1 + 0x20) != 0))
  {
    lVar1 = 0;
    uVar2 = 0;
    do {
      FUN__text__0054fa64(*(long *)(param_1 + 0x50) + lVar1,*(undefined4 *)(param_1 + 0x28),
                          param_2 & 1);
      uVar2 = uVar2 + 1;
      lVar1 = lVar1 + 0xb0;
    } while (uVar2 < *(uint *)(param_1 + 0x20));
  }
  return;
}


