/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004626a0; name: FUN_.text__004626a0
 */


uint * FUN__text__004626a0(long *param_1,uint *param_2,undefined1 *param_3)

{
  undefined8 *__src;
  int iVar1;
  uint uVar2;
  bool bVar3;
  ulong uVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  
  uVar6 = *(uint *)(param_1 + 1);
  if (uVar6 == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = 0;
    do {
      iVar1 = uVar7 + (uVar6 >> 1);
      puVar5 = (uint *)(*param_1 + (long)iVar1 * 0x10);
      bVar3 = *param_2 <= *puVar5;
      if (((*puVar5 == *param_2) && (bVar3 = param_2[1] <= puVar5[1], puVar5[1] == param_2[1])) &&
         (bVar3 = param_2[2] <= puVar5[2], puVar5[2] == param_2[2])) {
        *param_3 = 1;
        return (uint *)(*param_1 + (long)iVar1 * 0x10);
      }
      uVar2 = uVar6 - !bVar3;
      if (!bVar3 != 0) {
        uVar7 = iVar1 + 1;
      }
      uVar6 = uVar2 >> 1;
    } while (1 < uVar2);
  }
  *param_3 = 0;
  uVar6 = *(uint *)(param_1 + 1);
  uVar2 = *(uint *)((long)param_1 + 0xc);
  lVar8 = *param_1;
  if (lVar8 == 0) {
    if (uVar2 > uVar6) {
      *(uint *)(param_1 + 1) = uVar6 + 1;
      return (uint *)0x0;
    }
    iVar1 = uVar2 + (uVar2 >> 1);
    if (uVar2 == 0) {
      iVar1 = 1;
    }
    uVar4 = FUN__text__004628a0(param_1,iVar1);
    if (((uVar4 & 1) == 0) || (*(uint *)((long)param_1 + 0xc) <= uVar6)) {
      return (uint *)0x0;
    }
    uVar6 = *(uint *)(param_1 + 1);
    *(uint *)(param_1 + 1) = uVar6 + 1;
    if (*param_1 == 0) {
      return (uint *)0x0;
    }
    puVar5 = (uint *)(*param_1 + (ulong)uVar6 * 0x10);
    puVar5[0] = 0;
    puVar5[1] = 0;
    puVar5[2] = 0;
  }
  else {
    if (uVar2 <= uVar6) {
      iVar1 = uVar2 + (uVar2 >> 1);
      if (uVar2 == 0) {
        iVar1 = 1;
      }
      uVar4 = FUN__text__004628a0(param_1,iVar1);
      if ((uVar4 & 1) == 0) {
        return (uint *)0x0;
      }
      if (*(uint *)((long)param_1 + 0xc) <= uVar6) {
        return (uint *)0x0;
      }
      uVar6 = *(uint *)(param_1 + 1);
      lVar8 = *param_1;
    }
    __src = (undefined8 *)(lVar8 + (ulong)uVar7 * 0x10);
    if (uVar7 <= uVar6 && uVar6 - uVar7 != 0) {
      memmove(__src + 2,__src,(ulong)((uVar6 - uVar7) * 0x10));
    }
    if (lVar8 != 0) {
      *__src = 0;
      *(undefined4 *)(__src + 1) = 0;
    }
    *(int *)(param_1 + 1) = (int)param_1[1] + 1;
    if (*param_1 == 0) {
      return (uint *)0x0;
    }
    puVar5 = (uint *)(*param_1 + (ulong)uVar7 * 0x10);
  }
  *puVar5 = *param_2;
  puVar5[1] = param_2[1];
  puVar5[2] = param_2[2];
  return puVar5;
}


