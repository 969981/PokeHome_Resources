/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0047bad4; name: FUN_.text__0047bad4
 */


long FUN__text__0047bad4(long *param_1)

{
  uint uVar1;
  long lVar2;
  
  if (*(uint *)(param_1 + 1) < *(uint *)(param_1 + 2)) {
    lVar2 = FUN__text__00400f80(0,0x98);
    if (lVar2 == 0) {
      return 0;
    }
    FUN__text__0047c474(lVar2);
    uVar1 = *(uint *)(param_1 + 1);
    if (uVar1 < *(uint *)((long)param_1 + 0xc)) {
      *(uint *)(param_1 + 1) = uVar1 + 1;
      if (*param_1 != 0) {
        *(long *)(*param_1 + (ulong)uVar1 * 8) = lVar2;
        return lVar2;
      }
    }
    FUN__text__0047c4a8(lVar2);
    FUN__text__00400fc0(0,lVar2);
  }
  return 0;
}


