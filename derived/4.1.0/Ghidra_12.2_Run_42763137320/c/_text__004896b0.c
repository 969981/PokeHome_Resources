/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004896b0; name: FUN_.text__004896b0
 */


long FUN__text__004896b0(undefined8 *param_1,uint param_2)

{
  long *plVar1;
  long lVar2;
  uint *puVar3;
  uint *puVar4;
  uint uVar5;
  
  if (param_1[0x10] == 0) {
    return 0;
  }
  plVar1 = (long *)FUN__text__004899a0(param_1,param_2);
  if (plVar1 != (long *)0x0) {
    *plVar1 = 0;
    if ((param_2 & 0xff9c0000) == 0) {
      FUN__text__00481180(param_2,param_1[0x10],plVar1);
      lVar2 = *plVar1;
    }
    else {
      FUN__text__004814f0(*(undefined4 *)(param_1 + 0x11),param_2,param_1[0x10],plVar1);
      lVar2 = *plVar1;
    }
    if (lVar2 != 0) {
      return lVar2;
    }
  }
  puVar4 = (uint *)*param_1;
  uVar5 = *(uint *)(param_1 + 1);
  puVar3 = puVar4;
  if (uVar5 == 0) {
LAB__text__00489770:
    if (puVar3 != puVar4 + (ulong)uVar5 * 4) {
      uVar5 = uVar5 - 1;
      if (puVar3 < puVar4 + (ulong)uVar5 * 4) {
        memmove(puVar3,puVar3 + 4,
                (ulong)(uint)((int)(puVar4 + (ulong)uVar5 * 4) - (int)puVar3) & 0xfffffff0);
        uVar5 = *(int *)(param_1 + 1) - 1;
      }
      *(uint *)(param_1 + 1) = uVar5;
      return 0;
    }
  }
  else {
    lVar2 = (ulong)uVar5 << 4;
    do {
      if (*puVar3 == param_2) goto LAB__text__00489770;
      puVar3 = puVar3 + 4;
      lVar2 = lVar2 + -0x10;
    } while (lVar2 != 0);
  }
  return 0;
}


