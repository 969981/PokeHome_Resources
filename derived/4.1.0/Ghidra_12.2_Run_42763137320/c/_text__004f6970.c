/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004f6970; name: FUN_.text__004f6970
 */


long FUN__text__004f6970(long param_1,uint param_2)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar2 = *(uint *)(param_1 + 0x100);
  if (uVar2 <= param_2) {
    return 0;
  }
  uVar4 = (ulong)param_2;
  uVar5 = uVar2 - uVar4;
  if (~uVar4 + (ulong)uVar2 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = 0;
    uVar6 = uVar5 & 0xfffffffffffffffe;
    do {
      plVar1 = (long *)(param_1 + uVar4 * 8);
      uVar4 = uVar4 + 2;
      uVar6 = uVar6 - 2;
      lVar3 = *(long *)(*(long *)(plVar1[1] + 8) + 0x68) +
              *(long *)(*(long *)(*plVar1 + 8) + 0x68) + lVar3;
    } while (uVar6 != 0);
  }
  if ((uVar5 & 1) == 0) {
    return lVar3;
  }
  return *(long *)(*(long *)(*(long *)(param_1 + uVar4 * 8) + 8) + 0x68) + lVar3;
}


