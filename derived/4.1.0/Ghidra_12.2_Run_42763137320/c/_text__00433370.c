/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00433370; name: FUN_.text__00433370
 */


undefined8 * FUN__text__00433370(long *param_1,uint5 *param_2,undefined1 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  uint uVar3;
  bool bVar4;
  undefined8 *puVar5;
  uint uVar6;
  undefined8 uVar7;
  uint5 *puVar8;
  ulong uVar9;
  undefined4 *__src;
  uint uVar10;
  long lVar11;
  
  uVar6 = *(uint *)(param_1 + 1);
  if (uVar6 == 0) {
    uVar10 = 0;
    *param_3 = 0;
    uVar6 = *(uint *)(param_1 + 1);
    uVar3 = *(uint *)((long)param_1 + 0xc);
    lVar11 = *param_1;
    bVar4 = uVar3 <= uVar6;
  }
  else {
    uVar10 = 0;
    do {
      iVar1 = uVar10 + (uVar6 >> 1);
      puVar8 = (uint5 *)(*param_1 + (long)iVar1 * 0x18);
      uVar3 = (uint)puVar8[1];
      if (uVar3 == (uint)param_2[1]) {
        *param_3 = 1;
        return (undefined8 *)(*param_1 + (long)iVar1 * 0x18);
      }
      uVar9 = (ulong)*puVar8;
      bVar4 = uVar3 < (uint)param_2[1];
      if (uVar9 != *param_2) {
        bVar4 = uVar9 < *param_2;
      }
      uVar3 = uVar6 - bVar4;
      if (bVar4 != 0) {
        uVar10 = iVar1 + 1;
      }
      uVar6 = uVar3 >> 1;
    } while (1 < uVar3);
    *param_3 = 0;
    uVar6 = *(uint *)(param_1 + 1);
    uVar3 = *(uint *)((long)param_1 + 0xc);
    lVar11 = *param_1;
    bVar4 = uVar3 <= uVar6;
  }
  if (lVar11 == 0) {
    if (!bVar4) {
      *(uint *)(param_1 + 1) = uVar6 + 1;
      return (undefined8 *)0x0;
    }
    iVar1 = uVar3 + (uVar3 >> 1);
    if (uVar3 == 0) {
      iVar1 = 1;
    }
    uVar9 = FUN__text__00433280(param_1,iVar1);
    if ((uVar9 & 1) == 0) {
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
    puVar5 = (undefined8 *)(*param_1 + (ulong)uVar6 * 0x18);
    *(undefined4 *)puVar5 = 0;
    *(undefined1 *)((long)puVar5 + 4) = 8;
    *(undefined4 *)(puVar5 + 1) = 0;
    puVar5[2] = 0;
  }
  else {
    if (bVar4) {
      iVar1 = uVar3 + (uVar3 >> 1);
      if (uVar3 == 0) {
        iVar1 = 1;
      }
      uVar9 = FUN__text__00433280(param_1,iVar1);
      if ((uVar9 & 1) == 0) {
        return (undefined8 *)0x0;
      }
      if (*(uint *)((long)param_1 + 0xc) <= uVar6) {
        return (undefined8 *)0x0;
      }
      uVar6 = *(uint *)(param_1 + 1);
      lVar11 = *param_1;
    }
    __src = (undefined4 *)(lVar11 + (ulong)uVar10 * 0x18);
    if (uVar10 <= uVar6 && uVar6 - uVar10 != 0) {
      memmove(__src + 6,__src,(ulong)((uVar6 - uVar10) * 0x18));
    }
    if (lVar11 != 0) {
      *__src = 0;
      *(undefined1 *)(__src + 1) = 8;
      lVar11 = lVar11 + (ulong)uVar10 * 0x18;
      *(undefined4 *)(lVar11 + 8) = 0;
      *(undefined8 *)(lVar11 + 0x10) = 0;
    }
    *(int *)(param_1 + 1) = (int)param_1[1] + 1;
    if (*param_1 == 0) {
      return (undefined8 *)0x0;
    }
    puVar5 = (undefined8 *)(*param_1 + (ulong)uVar10 * 0x18);
  }
  uVar2 = *(undefined8 *)param_2;
  uVar7 = *(undefined8 *)(param_2 + 2);
  puVar5[1] = *(undefined8 *)(param_2 + 1);
  puVar5[2] = uVar7;
  *puVar5 = uVar2;
  return puVar5;
}


