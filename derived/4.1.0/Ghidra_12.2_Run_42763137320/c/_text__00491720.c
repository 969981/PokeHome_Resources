/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00491720; name: FUN_.text__00491720
 */


uint * FUN__text__00491720(long *param_1,uint param_2,undefined1 *param_3)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  ulong uVar4;
  uint *puVar5;
  uint uVar6;
  undefined8 *__src;
  uint uVar7;
  long lVar8;
  
  uVar6 = *(uint *)(param_1 + 1);
  if (uVar6 == 0) {
    uVar7 = 0;
    *param_3 = 0;
    uVar6 = *(uint *)(param_1 + 1);
    lVar8 = *param_1;
    bVar3 = *(uint *)((long)param_1 + 0xc) <= uVar6;
  }
  else {
    uVar7 = 0;
    do {
      iVar1 = uVar7 + (uVar6 >> 1);
      uVar2 = *(uint *)(*param_1 + (long)iVar1 * 0xc);
      if (uVar2 == param_2) {
        *param_3 = 1;
        return (uint *)(*param_1 + (long)iVar1 * 0xc);
      }
      if (uVar2 < param_2) {
        uVar7 = iVar1 + 1;
      }
      uVar2 = uVar6 - (uVar2 < param_2);
      uVar6 = uVar2 >> 1;
    } while (1 < uVar2);
    *param_3 = 0;
    uVar6 = *(uint *)(param_1 + 1);
    lVar8 = *param_1;
    bVar3 = *(uint *)((long)param_1 + 0xc) <= uVar6;
  }
  if (lVar8 == 0) {
    if (!bVar3) {
      *(uint *)(param_1 + 1) = uVar6 + 1;
      return (uint *)0x0;
    }
    uVar4 = FUN__text__004918f0(param_1);
    if ((uVar4 & 1) == 0) {
      return (uint *)0x0;
    }
    if (*(uint *)((long)param_1 + 0xc) <= uVar6) {
      return (uint *)0x0;
    }
    uVar6 = *(uint *)(param_1 + 1);
    *(uint *)(param_1 + 1) = uVar6 + 1;
    if (*param_1 == 0) {
      return (uint *)0x0;
    }
    puVar5 = (uint *)(*param_1 + (ulong)uVar6 * 0xc);
    *(undefined1 *)(puVar5 + 2) = 0;
    puVar5[0] = 0;
    puVar5[1] = 0;
  }
  else {
    if (bVar3) {
      uVar4 = FUN__text__004918f0(param_1);
      if ((uVar4 & 1) == 0) {
        return (uint *)0x0;
      }
      if (*(uint *)((long)param_1 + 0xc) <= uVar6) {
        return (uint *)0x0;
      }
      uVar6 = *(uint *)(param_1 + 1);
      lVar8 = *param_1;
    }
    __src = (undefined8 *)(lVar8 + (ulong)uVar7 * 0xc);
    if (uVar7 <= uVar6 && uVar6 - uVar7 != 0) {
      memmove((void *)((long)__src + 0xc),__src,(ulong)((uVar6 - uVar7) * 0xc));
    }
    if (lVar8 != 0) {
      *(undefined1 *)(__src + 1) = 0;
      *__src = 0;
    }
    *(int *)(param_1 + 1) = (int)param_1[1] + 1;
    if (*param_1 == 0) {
      return (uint *)0x0;
    }
    puVar5 = (uint *)(*param_1 + (ulong)uVar7 * 0xc);
  }
  *puVar5 = param_2;
  return puVar5;
}


