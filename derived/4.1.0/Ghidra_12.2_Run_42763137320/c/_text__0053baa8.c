/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0053baa8; name: FUN_.text__0053baa8
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN__text__0053baa8(long *param_1,undefined8 param_2,long *param_3,long *param_4,
                          undefined8 param_5,undefined8 param_6,undefined4 param_7,
                          undefined8 *param_8)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  undefined4 uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  uint uVar9;
  uint *puVar10;
  long *plVar11;
  long *plVar12;
  
  uVar9 = *(uint *)(param_1 + 1);
  uVar2 = *(uint *)((long)param_1 + 0xc);
  if (uVar2 <= uVar9) {
    iVar1 = uVar2 + (uVar2 >> 1);
    if (uVar2 == 0) {
      iVar1 = 1;
    }
    uVar5 = FUN__text__0053d990(param_1,iVar1);
    if ((uVar5 & 1) == 0) {
      return (long *)0x0;
    }
    if (*(uint *)((long)param_1 + 0xc) <= uVar9) {
      return (long *)0x0;
    }
    uVar9 = *(uint *)(param_1 + 1);
  }
  *(uint *)(param_1 + 1) = uVar9 + 1;
  if (*param_1 == 0) {
    return (long *)0x0;
  }
  plVar11 = (long *)(*param_1 + (ulong)uVar9 * 0x50);
  plVar11[2] = 0;
  plVar11[3] = 0;
  lVar3 = _DAT_008a4288;
  plVar11[4] = 0;
  *(undefined4 *)(plVar11 + 5) = 0;
  plVar11[6] = 0;
  plVar11[9] = 0;
  *plVar11 = lVar3 + 0x10;
  plVar11[1] = 0;
  plVar12 = plVar11 + 7;
  *plVar12 = 0;
  puVar10 = (uint *)(plVar11 + 8);
  puVar10[0] = 0;
  puVar10[1] = 0;
  FUN__text__0053d740(plVar11,param_2);
  lVar3 = *param_3;
  lVar8 = param_3[2];
  plVar11[2] = param_3[1];
  plVar11[3] = lVar8;
  plVar11[1] = lVar3;
  uVar9 = *puVar10;
  lVar3 = param_4[1];
  plVar11[4] = *param_4;
  *(int *)(plVar11 + 5) = (int)lVar3;
  uVar2 = *(uint *)((long)plVar11 + 0x44);
  if (uVar2 <= uVar9) {
    iVar1 = uVar2 + (uVar2 >> 1);
    if (uVar2 == 0) {
      iVar1 = 1;
    }
    uVar5 = FUN__text__0051bfc0(plVar12,iVar1);
    if (((uVar5 & 1) == 0) || (*(uint *)((long)plVar11 + 0x44) <= uVar9)) goto LAB__text__0053bc14;
    uVar9 = *puVar10;
  }
  *puVar10 = uVar9 + 1;
  if (*plVar12 != 0) {
    puVar6 = (undefined8 *)(*plVar12 + (ulong)uVar9 * 0x28);
    *puVar6 = 0;
    puVar6[2] = 0;
    puVar6[3] = param_5;
    puVar6[4] = param_6;
    *(undefined4 *)(puVar6 + 1) = 0;
    *(undefined4 *)((long)puVar6 + 0xc) = param_7;
    uVar7 = *param_8;
    *(undefined4 *)(puVar6 + 1) = *(undefined4 *)(param_8 + 1);
    *puVar6 = uVar7;
  }
LAB__text__0053bc14:
  uVar4 = FUN__text__005426f0(plVar11);
  FUN__text__0053d870(param_1,uVar4);
  return plVar11;
}


