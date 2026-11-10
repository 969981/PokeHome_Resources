/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0049d620; name: FUN_.text__0049d620
 */


ulong * FUN__text__0049d620(long *param_1,ulong param_2,undefined1 *param_3)

{
  uint uVar1;
  void *__src;
  bool bVar2;
  ulong *puVar3;
  uint uVar4;
  ulong uVar5;
  uint uVar6;
  long lVar7;
  
  uVar4 = *(uint *)(param_1 + 1);
  if (uVar4 == 0) {
    uVar6 = 0;
    *param_3 = 0;
    uVar4 = *(uint *)(param_1 + 1);
    lVar7 = *param_1;
    bVar2 = *(uint *)((long)param_1 + 0xc) <= uVar4;
  }
  else {
    uVar6 = 0;
    do {
      uVar1 = uVar6 + (uVar4 >> 1);
      uVar5 = *(ulong *)(*param_1 +
                        (-(ulong)(uVar1 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar1 << 4));
      if (uVar5 == param_2) {
        *param_3 = 1;
        return (ulong *)(*param_1 + (long)(int)uVar1 * 0x10);
      }
      if (uVar5 < param_2) {
        uVar6 = uVar1 + 1;
      }
      uVar1 = uVar4 - (uVar5 < param_2);
      uVar4 = uVar1 >> 1;
    } while (1 < uVar1);
    *param_3 = 0;
    uVar4 = *(uint *)(param_1 + 1);
    lVar7 = *param_1;
    bVar2 = *(uint *)((long)param_1 + 0xc) <= uVar4;
  }
  if (lVar7 == 0) {
    if (!bVar2) {
      *(uint *)(param_1 + 1) = uVar4 + 1;
      return (ulong *)0x0;
    }
    uVar5 = FUN__text__0049d7d0(param_1);
    if ((uVar5 & 1) == 0) {
      return (ulong *)0x0;
    }
    if (*(uint *)((long)param_1 + 0xc) <= uVar4) {
      return (ulong *)0x0;
    }
    uVar4 = *(uint *)(param_1 + 1);
    *(uint *)(param_1 + 1) = uVar4 + 1;
    if (*param_1 == 0) {
      return (ulong *)0x0;
    }
    puVar3 = (ulong *)(*param_1 + (ulong)uVar4 * 0x10);
    *(undefined4 *)(puVar3 + 1) = 0;
  }
  else {
    if (bVar2) {
      uVar5 = FUN__text__0049d7d0(param_1);
      if ((uVar5 & 1) == 0) {
        return (ulong *)0x0;
      }
      if (*(uint *)((long)param_1 + 0xc) <= uVar4) {
        return (ulong *)0x0;
      }
      uVar4 = *(uint *)(param_1 + 1);
      lVar7 = *param_1;
    }
    __src = (void *)(lVar7 + (ulong)uVar6 * 0x10);
    if (uVar6 <= uVar4 && uVar4 - uVar6 != 0) {
      memmove((void *)((long)__src + 0x10),__src,(ulong)((uVar4 - uVar6) * 0x10));
    }
    if (lVar7 != 0) {
      *(undefined4 *)((long)__src + 8) = 0;
    }
    *(int *)(param_1 + 1) = (int)param_1[1] + 1;
    if (*param_1 == 0) {
      return (ulong *)0x0;
    }
    puVar3 = (ulong *)(*param_1 + (ulong)uVar6 * 0x10);
  }
  *puVar3 = param_2;
  return puVar3;
}


