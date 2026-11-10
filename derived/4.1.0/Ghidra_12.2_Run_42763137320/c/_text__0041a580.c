/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0041a580; name: FUN_.text__0041a580
 */


undefined8 * FUN__text__0041a580(long *param_1,undefined8 param_2,ulong param_3,undefined1 *param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined8 *puVar4;
  void *__src;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  ulong uVar8;
  uint uVar9;
  uint uVar10;
  long lVar11;
  
  uVar6 = *(uint *)(param_1 + 1);
  if (uVar6 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = 0;
    do {
      iVar1 = (uVar6 >> 1) + uVar10;
      puVar7 = (uint *)(*param_1 + (long)iVar1 * 0x18);
      uVar2 = *puVar7;
      uVar8 = *(ulong *)(puVar7 + 2);
      uVar9 = (uint)param_2;
      if (uVar2 == uVar9 && uVar8 == param_3) {
        *param_4 = 1;
        return (undefined8 *)(*param_1 + (long)iVar1 * 0x18);
      }
      if ((uVar2 < uVar9) || (uVar5 = uVar6, uVar3 = uVar6 >> 1, uVar2 == uVar9 && uVar8 < param_3))
      {
        uVar5 = uVar6 - 1;
        uVar10 = iVar1 + 1;
        uVar3 = uVar5 >> 1;
      }
      uVar6 = uVar3;
    } while (1 < uVar5);
  }
  *param_4 = 0;
  lVar11 = *param_1;
  if (lVar11 == 0) {
    uVar6 = *(uint *)(param_1 + 1);
    if (uVar6 < *(uint *)((long)param_1 + 0xc)) {
      *(uint *)(param_1 + 1) = uVar6 + 1;
      return (undefined8 *)0x0;
    }
    uVar8 = FUN__text__0041a790(param_1);
    if ((uVar8 & 1) == 0) {
      return (undefined8 *)0x0;
    }
    if (*(uint *)((long)param_1 + 0xc) <= uVar6) {
      return (undefined8 *)0x0;
    }
    uVar6 = *(uint *)(param_1 + 1);
    *(uint *)(param_1 + 1) = uVar6 + 1;
    if (*param_1 == 0) {
      return (undefined8 *)0x0;
    }
    puVar4 = (undefined8 *)(*param_1 + (ulong)uVar6 * 0x18);
    *(undefined4 *)(puVar4 + 2) = 0xff7fffff;
  }
  else {
    uVar6 = *(uint *)(param_1 + 1);
    if (*(uint *)((long)param_1 + 0xc) <= uVar6) {
      uVar8 = FUN__text__0041a790(param_1);
      if ((uVar8 & 1) == 0) {
        return (undefined8 *)0x0;
      }
      if (*(uint *)((long)param_1 + 0xc) <= uVar6) {
        return (undefined8 *)0x0;
      }
      uVar6 = *(uint *)(param_1 + 1);
      lVar11 = *param_1;
    }
    if (uVar10 <= uVar6 && uVar6 - uVar10 != 0) {
      __src = (void *)(lVar11 + (ulong)uVar10 * 0x18);
      memmove((void *)((long)__src + 0x18),__src,(ulong)((uVar6 - uVar10) * 0x18));
    }
    if (lVar11 != 0) {
      *(undefined4 *)(lVar11 + (ulong)uVar10 * 0x18 + 0x10) = 0xff7fffff;
    }
    *(int *)(param_1 + 1) = (int)param_1[1] + 1;
    if (*param_1 == 0) {
      return (undefined8 *)0x0;
    }
    puVar4 = (undefined8 *)(*param_1 + (ulong)uVar10 * 0x18);
  }
  *puVar4 = param_2;
  puVar4[1] = param_3;
  return puVar4;
}


