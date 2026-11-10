/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0046a2e0; name: FUN_.text__0046a2e0
 */


void FUN__text__0046a2e0(long param_1,uint param_2,long param_3)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  int *piVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  
  lVar2 = *(long *)(param_1 + 0x70);
  if (lVar2 == 0) {
    return;
  }
  *(short *)(lVar2 + 0xc0) = *(short *)(lVar2 + 0xc0) + -1;
  if ((param_2 & 1) != 0) {
    *(short *)(lVar2 + 0xc2) = *(short *)(lVar2 + 0xc2) + -1;
  }
  if ((param_3 != 0) && (*(uint *)(lVar2 + 0xb8) != 0)) {
    lVar5 = (ulong)*(uint *)(lVar2 + 0xb8) << 4;
    piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar4 + -2) == param_3) {
        iVar1 = *piVar4;
        *piVar4 = iVar1 + -1;
        if ((*(byte *)(lVar2 + 200) & 4) == 0 && iVar1 + -1 == 0) {
          plVar7 = *(long **)(lVar2 + 0xb0);
          uVar3 = *(uint *)(lVar2 + 0xb8);
          plVar6 = plVar7;
          if (uVar3 == 0) goto LAB__text__0046a390;
          lVar5 = (ulong)uVar3 << 4;
          goto LAB__text__0046a370;
        }
        break;
      }
      piVar4 = piVar4 + 4;
      lVar5 = lVar5 + -0x10;
    } while (lVar5 != 0);
  }
  goto LAB__text__0046a3c4;
LAB__text__0046a390:
  plVar7 = plVar7 + (ulong)uVar3 * 2;
  if (plVar6 != plVar7) {
    if (plVar6 < plVar7 + -2) {
      lVar5 = plVar7[-2];
      *(int *)(plVar6 + 1) = (int)plVar7[-1];
      *plVar6 = lVar5;
      uVar3 = *(uint *)(lVar2 + 0xb8);
    }
    *(uint *)(lVar2 + 0xb8) = uVar3 - 1;
  }
  goto LAB__text__0046a3c4;
  while( true ) {
    plVar6 = plVar6 + 2;
    lVar5 = lVar5 + -0x10;
    if (lVar5 == 0) break;
LAB__text__0046a370:
    if (*plVar6 == param_3) goto LAB__text__0046a390;
  }
LAB__text__0046a3c4:
  lVar2 = *(long *)(param_1 + 0x70);
  if ((((*(short *)(lVar2 + 0xc0) < 1 && *(short *)(lVar2 + 0xc4) < 1) &&
       (*(short *)(lVar2 + 0xa8) == 0)) && (*(short *)(lVar2 + 0xaa) == 0)) &&
     ((*(long *)(lVar2 + 0x10) == 0 && (*(int *)(lVar2 + 8) == 0)))) {
    FUN__text__00463eb0();
    return;
  }
  return;
}


