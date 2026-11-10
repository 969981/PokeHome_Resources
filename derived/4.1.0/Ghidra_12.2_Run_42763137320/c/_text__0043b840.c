/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0043b840; name: FUN_.text__0043b840
 */


ulong * FUN__text__0043b840(long *param_1,ulong param_2,undefined1 *param_3)

{
  uint uVar1;
  int iVar2;
  undefined8 *__src;
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
    uVar1 = *(uint *)((long)param_1 + 0xc);
    lVar8 = *param_1;
    bVar3 = uVar1 <= uVar5;
  }
  else {
    uVar7 = 0;
    do {
      uVar1 = uVar7 + (uVar5 >> 1);
      uVar6 = *(ulong *)(*param_1 +
                        (-(ulong)(uVar1 >> 0x1f) & 0xffffffe000000000 | (ulong)uVar1 << 5));
      if (uVar6 == param_2) {
        *param_3 = 1;
        return (ulong *)(*param_1 + (long)(int)uVar1 * 0x20);
      }
      if (uVar6 < param_2) {
        uVar7 = uVar1 + 1;
      }
      uVar1 = uVar5 - (uVar6 < param_2);
      uVar5 = uVar1 >> 1;
    } while (1 < uVar1);
    *param_3 = 0;
    uVar5 = *(uint *)(param_1 + 1);
    uVar1 = *(uint *)((long)param_1 + 0xc);
    lVar8 = *param_1;
    bVar3 = uVar1 <= uVar5;
  }
  if (lVar8 == 0) {
    if (!bVar3) {
      *(uint *)(param_1 + 1) = uVar5 + 1;
      return (ulong *)0x0;
    }
    iVar2 = uVar1 + (uVar1 >> 1);
    if (uVar1 == 0) {
      iVar2 = 1;
    }
    uVar6 = FUN__text__0043bb90(param_1,iVar2);
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
    puVar4 = (ulong *)(*param_1 + (ulong)uVar5 * 0x20);
    *puVar4 = 0;
    *(undefined1 *)((long)puVar4 + 10) = 0;
    puVar4[2] = 0;
    puVar4[3] = 0;
  }
  else {
    if (bVar3) {
      iVar2 = uVar1 + (uVar1 >> 1);
      if (uVar1 == 0) {
        iVar2 = 1;
      }
      uVar6 = FUN__text__0043bb90(param_1,iVar2);
      if ((uVar6 & 1) == 0) {
        return (ulong *)0x0;
      }
      if (*(uint *)((long)param_1 + 0xc) <= uVar5) {
        return (ulong *)0x0;
      }
      uVar5 = *(uint *)(param_1 + 1);
      lVar8 = *param_1;
    }
    __src = (undefined8 *)(lVar8 + (ulong)uVar7 * 0x20);
    if (uVar7 <= uVar5 && uVar5 - uVar7 != 0) {
      memmove(__src + 4,__src,(ulong)((uVar5 - uVar7) * 0x20));
    }
    if (lVar8 != 0) {
      *__src = 0;
      *(undefined1 *)((long)__src + 10) = 0;
      __src[2] = 0;
      __src[3] = 0;
    }
    *(int *)(param_1 + 1) = (int)param_1[1] + 1;
    if (*param_1 == 0) {
      return (ulong *)0x0;
    }
    puVar4 = (ulong *)(*param_1 + (ulong)uVar7 * 0x20);
  }
  *puVar4 = param_2;
  return puVar4;
}


