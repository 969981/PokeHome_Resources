/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004f6530; name: FUN_.text__004f6530
 */


bool FUN__text__004f6530(long param_1,long param_2)

{
  long *plVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  
  if (*(long *)(*(long *)(param_1 + 0x108) + 0x18) == 0) {
    return false;
  }
  uVar2 = *(uint *)(param_1 + 0x100);
  if (uVar2 == 0) {
    lVar5 = 0;
  }
  else {
    if (uVar2 == 1) {
      uVar6 = 0;
      lVar5 = 0;
    }
    else {
      uVar6 = 0;
      lVar5 = 0;
      do {
        plVar1 = (long *)(param_1 + uVar6 * 8);
        uVar6 = uVar6 + 2;
        lVar5 = *(long *)(*(long *)(plVar1[1] + 8) + 0x68) +
                *(long *)(*(long *)(*plVar1 + 8) + 0x68) + lVar5;
      } while (((ulong)uVar2 & 0xfffffffe) != uVar6);
    }
    if ((uVar2 & 1) != 0) {
      lVar5 = *(long *)(*(long *)(*(long *)(param_1 + uVar6 * 8) + 8) + 0x68) + lVar5;
    }
  }
  iVar3 = FUN__text__004f52d4((long *)(param_1 + 0x108),param_2 - lVar5);
  iVar4 = FUN__text__004f4810(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x108) + 0x18) + 0x78));
  return iVar4 == iVar3;
}


