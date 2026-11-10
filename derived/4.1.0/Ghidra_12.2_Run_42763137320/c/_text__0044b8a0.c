/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0044b8a0; name: FUN_.text__0044b8a0
 */


ulong * FUN__text__0044b8a0(long param_1,ulong param_2,undefined1 *param_3)

{
  void *__src;
  ulong *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  uint uVar6;
  ulong uVar7;
  
  uVar6 = *(uint *)(param_1 + 0x18);
  if (uVar6 == 0) {
    uVar4 = 0;
    *param_3 = 0;
    lVar5 = *(long *)(param_1 + 0x10);
  }
  else {
    uVar4 = 0;
    do {
      iVar2 = uVar4 + (uVar6 >> 1);
      uVar7 = *(ulong *)(*(long *)(param_1 + 0x10) + (long)iVar2 * 8);
      if (uVar7 == param_2) {
        *param_3 = 1;
        return (ulong *)(*(long *)(param_1 + 0x10) + (long)iVar2 * 8);
      }
      if (uVar7 < param_2) {
        uVar4 = iVar2 + 1;
      }
      uVar3 = uVar6 - (uVar7 < param_2);
      uVar6 = uVar3 >> 1;
    } while (1 < uVar3);
    *param_3 = 0;
    lVar5 = *(long *)(param_1 + 0x10);
  }
  if (lVar5 == 0) {
    uVar6 = *(uint *)(param_1 + 0x18);
    uVar4 = *(uint *)(param_1 + 0x1c);
    if (uVar6 < uVar4) {
      lVar5 = 0;
    }
    else {
      iVar2 = uVar4 + (uVar4 >> 1);
      if (uVar4 == 0) {
        iVar2 = 1;
      }
      uVar7 = FUN__text__0040b2e0(param_1,iVar2);
      if ((uVar7 & 1) == 0) {
        return (ulong *)0x0;
      }
      if (*(uint *)(param_1 + 0x1c) <= uVar6) {
        return (ulong *)0x0;
      }
      uVar6 = *(uint *)(param_1 + 0x18);
      lVar5 = *(long *)(param_1 + 0x10);
    }
    puVar1 = (ulong *)(lVar5 + (ulong)uVar6 * 8);
    *(uint *)(param_1 + 0x18) = uVar6 + 1;
  }
  else {
    uVar6 = *(uint *)(param_1 + 0x18);
    uVar3 = *(uint *)(param_1 + 0x1c);
    if (uVar3 <= uVar6) {
      iVar2 = uVar3 + (uVar3 >> 1);
      if (uVar3 == 0) {
        iVar2 = 1;
      }
      uVar7 = FUN__text__0040b2e0(param_1,iVar2);
      if ((uVar7 & 1) == 0) {
        return (ulong *)0x0;
      }
      if (*(uint *)(param_1 + 0x1c) <= uVar6) {
        return (ulong *)0x0;
      }
      uVar6 = *(uint *)(param_1 + 0x18);
    }
    if (uVar6 < uVar4 || uVar6 - uVar4 == 0) {
      *(uint *)(param_1 + 0x18) = uVar6 + 1;
      puVar1 = (ulong *)(*(long *)(param_1 + 0x10) + (ulong)uVar4 * 8);
    }
    else {
      __src = (void *)(*(long *)(param_1 + 0x10) + (ulong)uVar4 * 8);
      memmove((void *)((long)__src + 8),__src,(ulong)((uVar6 - uVar4) * 8));
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
      puVar1 = (ulong *)(*(long *)(param_1 + 0x10) + (ulong)uVar4 * 8);
    }
  }
  if (puVar1 == (ulong *)0x0) {
    return (ulong *)0x0;
  }
  *puVar1 = param_2;
  return puVar1;
}


