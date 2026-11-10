/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004f6200; name: FUN_.text__004f6200
 */


long FUN__text__004f6200(long param_1)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  
  if (*(long *)(param_1 + 0x108) == 0) {
    return 0x7fffffffffffffff;
  }
  uVar2 = *(uint *)(param_1 + 0x100);
  if (uVar2 == 0) {
    lVar6 = 0;
  }
  else {
    if (uVar2 == 1) {
      uVar5 = 0;
      lVar6 = 0;
    }
    else {
      uVar5 = 0;
      lVar6 = 0;
      do {
        plVar1 = (long *)(param_1 + uVar5 * 8);
        uVar5 = uVar5 + 2;
        lVar6 = *(long *)(*(long *)(plVar1[1] + 8) + 0x68) +
                *(long *)(*(long *)(*plVar1 + 8) + 0x68) + lVar6;
      } while (((ulong)uVar2 & 0xfffffffe) != uVar5);
    }
    if ((uVar2 & 1) != 0) {
      lVar4 = *(long *)(*(long *)(*(long *)(param_1 + uVar5 * 8) + 8) + 0x68);
      lVar3 = FUN__text__004f52bc(param_1 + 0x108);
      return lVar3 + lVar4 + lVar6;
    }
  }
  lVar3 = FUN__text__004f52bc(param_1 + 0x108);
  return lVar3 + lVar6;
}


