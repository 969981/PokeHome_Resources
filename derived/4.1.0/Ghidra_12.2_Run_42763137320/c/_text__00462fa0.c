/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00462fa0; name: FUN_.text__00462fa0
 */


long FUN__text__00462fa0(long param_1,uint param_2,undefined1 *param_3)

{
  void *__src;
  uint uVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  
  uVar7 = *(uint *)(param_1 + 0x10);
  if (uVar7 == 0) {
    uVar6 = 0;
    *param_3 = 0;
    lVar5 = *(long *)(param_1 + 8);
  }
  else {
    uVar6 = 0;
    do {
      uVar1 = uVar6 + (uVar7 >> 1);
      uVar3 = *(uint *)(*(long *)(*(long *)(param_1 + 8) + (long)(int)uVar1 * 8) + 0x20);
      if (uVar3 == param_2) {
        *param_3 = 1;
        lVar5 = *(long *)(param_1 + 8);
        uVar6 = uVar1;
        goto joined_r0x0046309c;
      }
      if (uVar3 < param_2) {
        uVar6 = uVar1 + 1;
      }
      uVar1 = uVar7 - (uVar3 < param_2);
      uVar7 = uVar1 >> 1;
    } while (1 < uVar1);
    *param_3 = 0;
    lVar5 = *(long *)(param_1 + 8);
  }
joined_r0x0046309c:
  if (lVar5 == 0) {
    uVar7 = *(uint *)(param_1 + 0x10);
    uVar6 = *(uint *)(param_1 + 0x14);
    if (uVar7 < uVar6) {
      lVar5 = 0;
    }
    else {
      iVar2 = uVar6 + (uVar6 >> 1);
      if (uVar6 == 0) {
        iVar2 = 1;
      }
      uVar4 = FUN__text__00463130(param_1,iVar2);
      if ((uVar4 & 1) == 0) {
        return 0;
      }
      if (*(uint *)(param_1 + 0x14) <= uVar7) {
        return 0;
      }
      uVar7 = *(uint *)(param_1 + 0x10);
      lVar5 = *(long *)(param_1 + 8);
    }
    *(uint *)(param_1 + 0x10) = uVar7 + 1;
    return lVar5 + (ulong)uVar7 * 8;
  }
  uVar7 = *(uint *)(param_1 + 0x10);
  uVar1 = *(uint *)(param_1 + 0x14);
  if (uVar1 <= uVar7) {
    iVar2 = uVar1 + (uVar1 >> 1);
    if (uVar1 == 0) {
      iVar2 = 1;
    }
    uVar4 = FUN__text__00463130(param_1,iVar2);
    if ((uVar4 & 1) == 0) {
      return 0;
    }
    if (*(uint *)(param_1 + 0x14) <= uVar7) {
      return 0;
    }
    uVar7 = *(uint *)(param_1 + 0x10);
  }
  if (uVar6 <= uVar7 && uVar7 - uVar6 != 0) {
    __src = (void *)(*(long *)(param_1 + 8) + (ulong)uVar6 * 8);
    memmove((void *)((long)__src + 8),__src,(ulong)((uVar7 - uVar6) * 8));
    uVar7 = *(uint *)(param_1 + 0x10);
  }
  *(uint *)(param_1 + 0x10) = uVar7 + 1;
  return *(long *)(param_1 + 8) + (ulong)uVar6 * 8;
}


