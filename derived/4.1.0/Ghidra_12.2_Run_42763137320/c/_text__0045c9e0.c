/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0045c9e0; name: FUN_.text__0045c9e0
 */


long FUN__text__0045c9e0(long param_1,ulong param_2,undefined1 *param_3)

{
  void *__src;
  uint uVar1;
  int iVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  
  uVar5 = *(uint *)(param_1 + 0x18);
  if (uVar5 == 0) {
    uVar4 = 0;
    *param_3 = 0;
    lVar3 = *(long *)(param_1 + 0x10);
  }
  else {
    uVar4 = 0;
    do {
      uVar1 = uVar4 + (uVar5 >> 1);
      uVar6 = *(ulong *)(*(long *)(param_1 + 0x10) + (long)(int)uVar1 * 8);
      if (uVar6 == param_2) {
        *param_3 = 1;
        lVar3 = *(long *)(param_1 + 0x10);
        uVar4 = uVar1;
        goto joined_r0x0045cad8;
      }
      if (uVar6 < param_2) {
        uVar4 = uVar1 + 1;
      }
      uVar1 = uVar5 - (uVar6 < param_2);
      uVar5 = uVar1 >> 1;
    } while (1 < uVar1);
    *param_3 = 0;
    lVar3 = *(long *)(param_1 + 0x10);
  }
joined_r0x0045cad8:
  if (lVar3 == 0) {
    uVar5 = *(uint *)(param_1 + 0x18);
    uVar4 = *(uint *)(param_1 + 0x1c);
    if (uVar5 < uVar4) {
      lVar3 = 0;
    }
    else {
      iVar2 = uVar4 + (uVar4 >> 1);
      if (uVar4 == 0) {
        iVar2 = 1;
      }
      uVar6 = FUN__text__0040b2e0(param_1,iVar2);
      if ((uVar6 & 1) == 0) {
        return 0;
      }
      if (*(uint *)(param_1 + 0x1c) <= uVar5) {
        return 0;
      }
      uVar5 = *(uint *)(param_1 + 0x18);
      lVar3 = *(long *)(param_1 + 0x10);
    }
    *(uint *)(param_1 + 0x18) = uVar5 + 1;
    return lVar3 + (ulong)uVar5 * 8;
  }
  uVar5 = *(uint *)(param_1 + 0x18);
  uVar1 = *(uint *)(param_1 + 0x1c);
  if (uVar1 <= uVar5) {
    iVar2 = uVar1 + (uVar1 >> 1);
    if (uVar1 == 0) {
      iVar2 = 1;
    }
    uVar6 = FUN__text__0040b2e0(param_1,iVar2);
    if ((uVar6 & 1) == 0) {
      return 0;
    }
    if (*(uint *)(param_1 + 0x1c) <= uVar5) {
      return 0;
    }
    uVar5 = *(uint *)(param_1 + 0x18);
  }
  if (uVar4 <= uVar5 && uVar5 - uVar4 != 0) {
    __src = (void *)(*(long *)(param_1 + 0x10) + (ulong)uVar4 * 8);
    memmove((void *)((long)__src + 8),__src,(ulong)((uVar5 - uVar4) * 8));
    uVar5 = *(uint *)(param_1 + 0x18);
  }
  *(uint *)(param_1 + 0x18) = uVar5 + 1;
  return *(long *)(param_1 + 0x10) + (ulong)uVar4 * 8;
}


