/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004df670; name: FUN_.text__004df670
 */


void FUN__text__004df670(long *param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  
  if (*(uint *)(param_1 + 1) != 0) {
    uVar1 = 0;
    lVar3 = (ulong)*(uint *)(param_1 + 1) * 0xc0;
    lVar2 = *param_1 + 0x98;
    do {
      if (*(int *)(lVar2 + 0x18) == 3) {
        uVar4 = -(uVar1 >> 0x1f) & 0xfffffff800000000 | uVar1 << 3;
        uVar1 = (ulong)((int)uVar1 + 1);
        *(long *)(*(long *)(param_2 + 8) + uVar4) = lVar2;
        *(long *)(*(long *)(param_2 + 0x10) + uVar4) = lVar2 + -0x98;
      }
      lVar2 = lVar2 + 0xc0;
      lVar3 = lVar3 + -0xc0;
    } while (lVar3 != 0);
  }
  return;
}


