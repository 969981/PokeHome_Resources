/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004f6600; name: FUN_.text__004f6600
 */


void FUN__text__004f6600(long param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  
  uVar2 = *(uint *)(param_1 + 0x100);
  if (uVar2 == 0) {
    lVar5 = 0;
  }
  else {
    if (uVar2 == 1) {
      uVar4 = 0;
      lVar5 = 0;
    }
    else {
      uVar4 = 0;
      lVar5 = 0;
      do {
        plVar1 = (long *)(param_1 + uVar4 * 8);
        uVar4 = uVar4 + 2;
        lVar5 = *(long *)(*(long *)(plVar1[1] + 8) + 0x68) +
                *(long *)(*(long *)(*plVar1 + 8) + 0x68) + lVar5;
      } while (((ulong)uVar2 & 0xfffffffe) != uVar4);
    }
    if ((uVar2 & 1) != 0) {
      lVar5 = *(long *)(*(long *)(*(long *)(param_1 + uVar4 * 8) + 8) + 0x68) + lVar5;
    }
  }
  lVar3 = FUN__text__004f52bc((undefined8 *)(param_1 + 0x108));
  FUN__text__004ea010(*(undefined8 *)(param_1 + 0x108),param_2,(param_3 - lVar5) - lVar3);
  return;
}


