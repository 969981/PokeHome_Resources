/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0046a1b0; name: FUN_.text__0046a1b0
 */


undefined4 FUN__text__0046a1b0(long param_1,uint param_2,long param_3)

{
  ulong uVar1;
  undefined4 uVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  
  uVar1 = FUN__text__00464cf0();
  lVar7 = *(long *)(param_1 + 0x70);
  uVar2 = 1;
  if ((uVar1 & 1) == 0) {
    uVar2 = 2;
  }
  if (lVar7 == 0) {
    return uVar2;
  }
  *(short *)(lVar7 + 0xc0) = *(short *)(lVar7 + 0xc0) + 1;
  if ((param_2 & 1) != 0) {
    *(short *)(lVar7 + 0xc2) = *(short *)(lVar7 + 0xc2) + 1;
  }
  if (param_3 == 0) {
    return 1;
  }
  plVar3 = *(long **)(lVar7 + 0xb0);
  uVar6 = *(uint *)(lVar7 + 0xb8);
  plVar4 = plVar3;
  if (uVar6 == 0) {
LAB__text__0046a23c:
    if (plVar4 != plVar3 + (ulong)uVar6 * 2) {
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      return 1;
    }
  }
  else {
    lVar5 = (ulong)uVar6 << 4;
    do {
      if (*plVar4 == param_3) goto LAB__text__0046a23c;
      plVar4 = plVar4 + 2;
      lVar5 = lVar5 + -0x10;
    } while (lVar5 != 0);
  }
  if (*(uint *)(lVar7 + 0xbc) <= uVar6) {
    uVar1 = FUN__text__0046b1e0();
    if ((uVar1 & 1) == 0) {
      return 0x34;
    }
    if (*(uint *)(lVar7 + 0xbc) <= uVar6) {
      return 0x34;
    }
    uVar6 = *(uint *)(lVar7 + 0xb8);
    plVar3 = *(long **)(lVar7 + 0xb0);
  }
  *(uint *)(lVar7 + 0xb8) = uVar6 + 1;
  if (plVar3 == (long *)0x0) {
    return 0x34;
  }
  plVar3[(ulong)uVar6 * 2] = param_3;
  *(undefined4 *)(plVar3 + (ulong)uVar6 * 2 + 1) = 1;
  return 1;
}


