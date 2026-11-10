/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0044db10; name: FUN_.text__0044db10
 */


ulong * FUN__text__0044db10(long param_1,ulong param_2,uint param_3,undefined1 *param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ulong *puVar6;
  ulong uVar7;
  undefined8 *__src;
  uint uVar8;
  long lVar9;
  
  uVar5 = *(uint *)(param_1 + 0x28);
  if (uVar5 == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = 0;
    do {
      iVar1 = (uVar5 >> 1) + uVar8;
      puVar6 = (ulong *)(*(long *)(param_1 + 0x20) + (long)iVar1 * 0x18);
      uVar7 = *puVar6;
      uVar2 = (uint)puVar6[1];
      if (uVar7 == param_2 && uVar2 == param_3) {
        *param_4 = 1;
        return (ulong *)(*(long *)(param_1 + 0x20) + (long)iVar1 * 0x18);
      }
      if ((uVar7 < param_2) ||
         (uVar4 = uVar5, uVar3 = uVar5 >> 1, uVar7 == param_2 && uVar2 < param_3)) {
        uVar4 = uVar5 - 1;
        uVar8 = iVar1 + 1;
        uVar3 = uVar4 >> 1;
      }
      uVar5 = uVar3;
    } while (1 < uVar4);
  }
  *param_4 = 0;
  lVar9 = *(long *)(param_1 + 0x20);
  if (lVar9 == 0) {
    uVar5 = *(uint *)(param_1 + 0x28);
    uVar8 = *(uint *)(param_1 + 0x2c);
    if (uVar5 < uVar8) {
      *(uint *)(param_1 + 0x28) = uVar5 + 1;
      return (ulong *)0x0;
    }
    iVar1 = uVar8 + (uVar8 >> 1);
    if (uVar8 == 0) {
      iVar1 = 1;
    }
    uVar7 = FUN__text__0044d9c0(param_1,iVar1);
    if ((uVar7 & 1) == 0) {
      return (ulong *)0x0;
    }
    if (*(uint *)(param_1 + 0x2c) <= uVar5) {
      return (ulong *)0x0;
    }
    uVar5 = *(uint *)(param_1 + 0x28);
    *(uint *)(param_1 + 0x28) = uVar5 + 1;
    if (*(long *)(param_1 + 0x20) == 0) {
      return (ulong *)0x0;
    }
    puVar6 = (ulong *)(*(long *)(param_1 + 0x20) + (ulong)uVar5 * 0x18);
    *puVar6 = 0xffffffffffffffff;
    *(undefined4 *)(puVar6 + 1) = 0;
    *(undefined4 *)(puVar6 + 2) = 0x3f800000;
  }
  else {
    uVar5 = *(uint *)(param_1 + 0x28);
    uVar2 = *(uint *)(param_1 + 0x2c);
    if (uVar2 <= uVar5) {
      iVar1 = uVar2 + (uVar2 >> 1);
      if (uVar2 == 0) {
        iVar1 = 1;
      }
      uVar7 = FUN__text__0044d9c0(param_1,iVar1);
      if ((uVar7 & 1) == 0) {
        return (ulong *)0x0;
      }
      if (*(uint *)(param_1 + 0x2c) <= uVar5) {
        return (ulong *)0x0;
      }
      uVar5 = *(uint *)(param_1 + 0x28);
      lVar9 = *(long *)(param_1 + 0x20);
    }
    __src = (undefined8 *)(lVar9 + (ulong)uVar8 * 0x18);
    if (uVar8 <= uVar5 && uVar5 - uVar8 != 0) {
      memmove(__src + 3,__src,(ulong)((uVar5 - uVar8) * 0x18));
    }
    if (lVar9 != 0) {
      *(undefined4 *)(__src + 1) = 0;
      *__src = 0xffffffffffffffff;
      *(undefined4 *)(lVar9 + (ulong)uVar8 * 0x18 + 0x10) = 0x3f800000;
    }
    *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
    if (*(long *)(param_1 + 0x20) == 0) {
      return (ulong *)0x0;
    }
    puVar6 = (ulong *)(*(long *)(param_1 + 0x20) + (ulong)uVar8 * 0x18);
  }
  *puVar6 = param_2;
  *(uint *)(puVar6 + 1) = param_3;
  return puVar6;
}


