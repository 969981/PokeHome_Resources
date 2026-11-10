/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0047c040; name: FUN_.text__0047c040
 */


undefined8 FUN__text__0047c040(long *param_1,long param_2)

{
  uint uVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  
  plVar2 = (long *)*param_1;
  uVar1 = *(uint *)(param_1 + 1);
  plVar3 = plVar2;
  if (uVar1 != 0) {
    lVar4 = (ulong)uVar1 << 3;
    while (*plVar3 != param_2) {
      plVar3 = plVar3 + 1;
      lVar4 = lVar4 + -8;
      if (lVar4 == 0) {
        return 2;
      }
    }
  }
  if (plVar3 == plVar2 + uVar1 || plVar3 == (long *)0x0) {
    return 2;
  }
  if (*(short *)(param_2 + 0x40) == -1) {
    return 2;
  }
  *(short *)(param_2 + 0x40) = *(short *)(param_2 + 0x40) + 1;
  return 1;
}


