/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004f66c0; name: FUN_.text__004f66c0
 */


void FUN__text__004f66c0(undefined4 param_1,long param_2,long param_3,undefined4 param_4,
                        undefined4 param_5,undefined4 param_6)

{
  long *plVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  
  lVar6 = *(long *)(param_2 + 0x108);
  if (*(long *)(lVar6 + 0x18) == 0) {
    return;
  }
  uVar2 = *(uint *)(param_2 + 0x100);
  if (uVar2 == 0) {
    lVar4 = 0;
  }
  else {
    if (uVar2 == 1) {
      uVar5 = 0;
      lVar4 = 0;
    }
    else {
      uVar5 = 0;
      lVar4 = 0;
      do {
        plVar1 = (long *)(param_2 + uVar5 * 8);
        uVar5 = uVar5 + 2;
        lVar4 = *(long *)(*(long *)(plVar1[1] + 8) + 0x68) +
                *(long *)(*(long *)(*plVar1 + 8) + 0x68) + lVar4;
      } while (((ulong)uVar2 & 0xfffffffe) != uVar5);
    }
    if ((uVar2 & 1) != 0) {
      lVar4 = *(long *)(*(long *)(*(long *)(param_2 + uVar5 * 8) + 8) + 0x68) + lVar4;
    }
  }
  uVar3 = FUN__text__004f52d4(param_2 + 0x108,param_3 - lVar4);
  FUN__text__004ea0f0(param_1,lVar6,uVar3,param_4,param_5,param_6);
  return;
}


