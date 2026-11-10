/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0046b984; name: FUN_.text__0046b984
 */


undefined8 FUN__text__0046b984(long *param_1,undefined8 *param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  
  lVar7 = *param_1;
  uVar5 = *(uint *)(param_1 + 1);
  uVar3 = *(uint *)((long)param_1 + 0xc);
  if (lVar7 + (ulong)uVar5 * 0x10 == param_3) {
    uVar1 = *param_2;
    uVar2 = param_2[1];
    if (uVar3 <= uVar5) {
      iVar4 = uVar3 + (uVar3 >> 1);
      if (uVar3 == 0) {
        iVar4 = 1;
      }
      uVar8 = FUN__text__0046cc60(param_1,iVar4);
      if ((uVar8 & 1) == 0) {
        return 0;
      }
      if (*(uint *)((long)param_1 + 0xc) <= uVar5) {
        return 0;
      }
      uVar5 = *(uint *)(param_1 + 1);
      lVar7 = *param_1;
    }
    *(uint *)(param_1 + 1) = uVar5 + 1;
    if (lVar7 == 0) {
      return 0;
    }
    puVar6 = (undefined8 *)(lVar7 + (ulong)uVar5 * 0x10);
    *puVar6 = uVar1;
    puVar6[1] = uVar2;
    return 1;
  }
  if (uVar5 < uVar3) {
    uVar8 = param_3 - lVar7;
    puVar6 = (undefined8 *)(lVar7 + (uVar8 >> 4 & 0xffffffff) * 0x10);
    uVar3 = (uint)(uVar8 >> 4);
    iVar4 = uVar5 - uVar3;
    lVar9 = lVar7;
    if (uVar5 < uVar3 || iVar4 == 0) goto LAB__text__0046b9e8;
  }
  else {
    iVar4 = uVar3 + (uVar3 >> 1);
    if (uVar3 == 0) {
      iVar4 = 1;
    }
    uVar8 = FUN__text__0046cc60(param_1,iVar4);
    if ((uVar8 & 1) == 0) {
      return 0;
    }
    if (*(uint *)((long)param_1 + 0xc) <= uVar5) {
      return 0;
    }
    lVar9 = *param_1;
    uVar8 = param_3 - lVar7;
    puVar6 = (undefined8 *)(lVar9 + (uVar8 >> 4 & 0xffffffff) * 0x10);
    uVar5 = (uint)(uVar8 >> 4);
    iVar4 = *(uint *)(param_1 + 1) - uVar5;
    if (*(uint *)(param_1 + 1) < uVar5 || iVar4 == 0) goto LAB__text__0046b9e8;
  }
  memmove(puVar6 + 2,puVar6,(ulong)(uint)(iVar4 << 4));
LAB__text__0046b9e8:
  if (lVar9 != 0) {
    *puVar6 = 0;
    puVar6[1] = 0;
  }
  *(int *)(param_1 + 1) = (int)param_1[1] + 1;
  if (*param_1 == 0) {
    return 0;
  }
  puVar6 = (undefined8 *)(*param_1 + (uVar8 >> 4 & 0xffffffff) * 0x10);
  *puVar6 = *param_2;
  puVar6[1] = param_2[1];
  return 1;
}


