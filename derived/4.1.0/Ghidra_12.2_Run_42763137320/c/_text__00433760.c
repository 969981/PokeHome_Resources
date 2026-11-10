/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00433760; name: FUN_.text__00433760
 */


undefined4 * FUN__text__00433760(long *param_1,ulong param_2,undefined1 *param_3)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  undefined4 *puVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  uint uVar8;
  long lVar9;
  
  uVar5 = *(uint *)(param_1 + 1);
  if (uVar5 == 0) {
    uVar8 = 0;
    *param_3 = 0;
    uVar5 = *(uint *)(param_1 + 1);
    lVar9 = *param_1;
    bVar3 = *(uint *)((long)param_1 + 0xc) <= uVar5;
  }
  else {
    uVar8 = 0;
    uVar6 = param_2 & 0xffffffffff;
    do {
      iVar1 = uVar8 + (uVar5 >> 1);
      uVar7 = *(ulong *)(*param_1 + (long)iVar1 * 8) & 0xffffffffff;
      if (uVar7 == uVar6) {
        *param_3 = 1;
        return (undefined4 *)(*param_1 + (long)iVar1 * 8);
      }
      if (uVar7 < uVar6) {
        uVar8 = iVar1 + 1;
      }
      uVar2 = uVar5 - (uVar7 < uVar6);
      uVar5 = uVar2 >> 1;
    } while (1 < uVar2);
    *param_3 = 0;
    uVar5 = *(uint *)(param_1 + 1);
    lVar9 = *param_1;
    bVar3 = *(uint *)((long)param_1 + 0xc) <= uVar5;
  }
  if (lVar9 == 0) {
    if (!bVar3) {
      *(uint *)(param_1 + 1) = uVar5 + 1;
      return (undefined4 *)0x0;
    }
    uVar6 = FUN__text__00433a90(param_1);
    if ((uVar6 & 1) == 0) {
      return (undefined4 *)0x0;
    }
    if (*(uint *)((long)param_1 + 0xc) <= uVar5) {
      return (undefined4 *)0x0;
    }
    uVar5 = *(uint *)(param_1 + 1);
    *(uint *)(param_1 + 1) = uVar5 + 1;
    if (*param_1 == 0) {
      return (undefined4 *)0x0;
    }
    puVar4 = (undefined4 *)(*param_1 + (ulong)uVar5 * 8);
    *puVar4 = 0;
    *(undefined1 *)(puVar4 + 1) = 8;
  }
  else {
    if (bVar3) {
      uVar6 = FUN__text__00433a90(param_1);
      if ((uVar6 & 1) == 0) {
        return (undefined4 *)0x0;
      }
      if (*(uint *)((long)param_1 + 0xc) <= uVar5) {
        return (undefined4 *)0x0;
      }
      uVar5 = *(uint *)(param_1 + 1);
      lVar9 = *param_1;
    }
    puVar4 = (undefined4 *)(lVar9 + (ulong)uVar8 * 8);
    if (uVar8 <= uVar5 && uVar5 - uVar8 != 0) {
      memmove(puVar4 + 2,puVar4,(ulong)((uVar5 - uVar8) * 8));
    }
    if (lVar9 != 0) {
      *puVar4 = 0;
      *(undefined1 *)(puVar4 + 1) = 8;
    }
    *(int *)(param_1 + 1) = (int)param_1[1] + 1;
    if (*param_1 == 0) {
      return (undefined4 *)0x0;
    }
    puVar4 = (undefined4 *)(*param_1 + (ulong)uVar8 * 8);
  }
  *puVar4 = (int)param_2;
  *(char *)(puVar4 + 1) = (char)(param_2 >> 0x20);
  return puVar4;
}


