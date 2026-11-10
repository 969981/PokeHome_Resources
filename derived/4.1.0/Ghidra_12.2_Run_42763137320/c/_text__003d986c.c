/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003d986c; name: FUN_.text__003d986c
 */


undefined8 FUN__text__003d986c(long *param_1,undefined8 param_2)

{
  uint *puVar1;
  uint uVar2;
  ulong uVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  
  lVar8 = *param_1;
  if (lVar8 == 0) {
    return 0x16;
  }
  if (*(long *)(lVar8 + 8) != 0) {
    return 0x72;
  }
  uVar2 = *(uint *)(lVar8 + 0x14);
  uVar3 = (ulong)uVar2;
  puVar1 = (uint *)(lVar8 + 0x10);
  if ((*(long **)(lVar8 + 0x20) == (long *)0x0) || (lVar6 = **(long **)(lVar8 + 0x20), lVar6 == 0))
  {
    uVar4 = *puVar1;
    if (uVar4 <= uVar3) goto LAB__text__003d9908;
LAB__text__003d98e8:
    iVar5 = uVar2 - uVar4;
    if (uVar4 <= uVar2) {
LAB__text__003d9924:
      uVar3 = (ulong)(uint)(iVar5 - *(int *)((0x1c - LZCOUNT(iVar5 + 0x10)) * 4 + 0x734874));
      plVar7 = (long *)(*(long *)(lVar8 + 0x20) + (0x1b - LZCOUNT(iVar5 + 0x10)) * 8 + 8);
      goto LAB__text__003d9958;
    }
  }
  else {
    uVar4 = *puVar1;
    if (uVar3 < (ulong)*(uint *)(lVar6 * 4 + 0x734878) + (ulong)uVar4) goto LAB__text__003d98e8;
LAB__text__003d9908:
    uVar3 = FUN__text__003dceb0(puVar1,0,puVar1);
    if ((uVar3 & 1) == 0) {
      return 0xc;
    }
    uVar2 = *(uint *)(lVar8 + 0x14);
    uVar3 = (ulong)uVar2;
    iVar5 = uVar2 - *(uint *)(lVar8 + 0x10);
    if (*(uint *)(lVar8 + 0x10) <= uVar2) goto LAB__text__003d9924;
  }
  plVar7 = (long *)(lVar8 + 0x18);
LAB__text__003d9958:
  *(undefined8 *)(*plVar7 + uVar3 * 8) = 0;
  *(int *)(lVar8 + 0x14) = *(int *)(lVar8 + 0x14) + 1;
  *(undefined8 *)(*param_1 + 8) = param_2;
  return 0;
}


