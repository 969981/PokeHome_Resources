/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00522a00; name: FUN_.text__00522a00
 */


ulong * FUN__text__00522a00(long *param_1,ulong param_2,undefined1 *param_3)

{
  undefined8 *__src;
  int iVar1;
  uint uVar2;
  bool bVar3;
  ulong *puVar4;
  uint uVar5;
  ulong uVar6;
  uint uVar7;
  long lVar8;
  
  uVar5 = *(uint *)(param_1 + 1);
  if (uVar5 == 0) {
    uVar7 = 0;
    *param_3 = 0;
    uVar5 = *(uint *)(param_1 + 1);
    lVar8 = *param_1;
    bVar3 = *(uint *)((long)param_1 + 0xc) <= uVar5;
  }
  else {
    uVar7 = 0;
    do {
      iVar1 = uVar7 + (uVar5 >> 1);
      uVar6 = *(ulong *)(*param_1 + (long)iVar1 * 8);
      if (uVar6 == param_2) {
        *param_3 = 1;
        return (ulong *)(*param_1 + (long)iVar1 * 8);
      }
      if (uVar6 < param_2) {
        uVar7 = iVar1 + 1;
      }
      uVar2 = uVar5 - (uVar6 < param_2);
      uVar5 = uVar2 >> 1;
    } while (1 < uVar2);
    *param_3 = 0;
    uVar5 = *(uint *)(param_1 + 1);
    lVar8 = *param_1;
    bVar3 = *(uint *)((long)param_1 + 0xc) <= uVar5;
  }
  if (lVar8 == 0) {
    if (!bVar3) {
      *(uint *)(param_1 + 1) = uVar5 + 1;
      return (ulong *)0x0;
    }
    uVar6 = FUN__text__00522bc0(param_1);
    if ((uVar6 & 1) == 0) {
      return (ulong *)0x0;
    }
    if (*(uint *)((long)param_1 + 0xc) <= uVar5) {
      return (ulong *)0x0;
    }
    uVar5 = *(uint *)(param_1 + 1);
    *(uint *)(param_1 + 1) = uVar5 + 1;
    if (*param_1 == 0) {
      return (ulong *)0x0;
    }
    puVar4 = (ulong *)(*param_1 + (ulong)uVar5 * 8);
    *puVar4 = 0xffffffffffffffff;
  }
  else {
    if (bVar3) {
      uVar6 = FUN__text__00522bc0(param_1);
      if ((uVar6 & 1) == 0) {
        return (ulong *)0x0;
      }
      if (*(uint *)((long)param_1 + 0xc) <= uVar5) {
        return (ulong *)0x0;
      }
      uVar5 = *(uint *)(param_1 + 1);
      lVar8 = *param_1;
    }
    __src = (undefined8 *)(lVar8 + (ulong)uVar7 * 8);
    if (uVar7 <= uVar5 && uVar5 - uVar7 != 0) {
      memmove(__src + 1,__src,(ulong)((uVar5 - uVar7) * 8));
    }
    if (lVar8 != 0) {
      *__src = 0xffffffffffffffff;
    }
    *(int *)(param_1 + 1) = (int)param_1[1] + 1;
    if (*param_1 == 0) {
      return (ulong *)0x0;
    }
    puVar4 = (ulong *)(*param_1 + (ulong)uVar7 * 8);
  }
  *puVar4 = param_2;
  return puVar4;
}


