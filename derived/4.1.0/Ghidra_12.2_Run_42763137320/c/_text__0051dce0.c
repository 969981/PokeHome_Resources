/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0051dce0; name: FUN_.text__0051dce0
 */


long FUN__text__0051dce0(long *param_1,uint param_2)

{
  int iVar1;
  undefined8 *puVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  uint uVar8;
  long *plVar9;
  long *plVar10;
  
  uVar8 = *(uint *)(param_1 + 1);
  uVar3 = *(uint *)((long)param_1 + 0xc);
  if (uVar3 <= uVar8) {
    iVar1 = uVar3 + (uVar3 >> 1);
    if (uVar3 == 0) {
      iVar1 = 1;
    }
    uVar4 = FUN__text__0051de40(param_1,iVar1);
    if ((uVar4 & 1) == 0) {
      return 0;
    }
    if (*(uint *)((long)param_1 + 0xc) <= uVar8) {
      return 0;
    }
    uVar8 = *(uint *)(param_1 + 1);
  }
  *(uint *)(param_1 + 1) = uVar8 + 1;
  plVar7 = (long *)(*param_1 + (ulong)uVar8 * 0x20);
  lVar5 = 0;
  if (*param_1 != 0) {
    *plVar7 = 0;
    plVar7[1] = 0;
    plVar7[2] = 0;
    plVar7[3] = -1;
    lVar5 = *param_1;
  }
  uVar4 = (ulong)param_2;
  plVar10 = (long *)(lVar5 + uVar4 * 0x20);
  if (plVar10 < plVar7) {
    plVar9 = plVar7 + -4;
    if (*plVar7 != 0) {
      *(undefined4 *)(plVar7 + 1) = 0;
      FUN__text__00400fc0(0xb);
    }
    *plVar7 = plVar7[-4];
    *(int *)(plVar7 + 1) = (int)plVar7[-3];
    *(undefined4 *)((long)plVar7 + 0xc) = *(undefined4 *)((long)plVar7 + -0x14);
    *plVar9 = 0;
    plVar7[-3] = 0;
    plVar7[2] = plVar7[-2];
    plVar7[3] = plVar7[-1];
    lVar5 = *param_1;
    plVar10 = (long *)(lVar5 + uVar4 * 0x20);
    if (plVar10 < plVar9) {
      do {
        plVar7 = plVar9 + -4;
        lVar5 = *plVar7;
        *plVar7 = 0;
        *plVar9 = lVar5;
        lVar5 = plVar9[-3];
        plVar9[-3] = 0;
        *(int *)(plVar9 + 1) = (int)lVar5;
        *(undefined4 *)((long)plVar9 + 0xc) = *(undefined4 *)((long)plVar9 + -0x14);
        plVar9[2] = plVar9[-2];
        plVar9[3] = plVar9[-1];
        lVar5 = *param_1;
        plVar10 = (long *)(lVar5 + uVar4 * 0x20);
        plVar9 = plVar7;
      } while (plVar10 < plVar7);
    }
  }
  if (*plVar10 != 0) {
    *(undefined4 *)(plVar10 + 1) = 0;
    FUN__text__00400fc0(0xb);
    *plVar10 = 0;
    *(undefined4 *)((long)plVar10 + 0xc) = 0;
    lVar5 = *param_1;
  }
  lVar6 = 0;
  if (lVar5 != 0) {
    puVar2 = (undefined8 *)(lVar5 + uVar4 * 0x20);
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0xffffffffffffffff;
    lVar6 = *param_1;
  }
  return lVar6 + uVar4 * 0x20;
}


