/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003e0558; name: FUN_.text__003e0558
 */


int FUN__text__003e0558(long *param_1)

{
  long *plVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  
  if (param_1[2] != param_1[1]) {
    uVar6 = FUN__text__003d6a10(*param_1);
    if ((uVar6 & 1) == 0) {
      return *(int *)(*param_1 + 0x3c);
    }
    plVar3 = (long *)*param_1;
    lVar7 = (param_1[1] - (long)param_1) + -0x18;
    if (-1 < lVar7) {
      puVar8 = (ulong *)(plVar3 + 2);
      uVar4 = *puVar8;
      uVar5 = plVar3[3];
      uVar6 = uVar4 + lVar7;
      if (uVar5 < uVar6) {
        *puVar8 = 0;
        plVar3[3] = 0;
        plVar3[1] = plVar3[1] + uVar5;
        lVar7 = (**(code **)(*plVar3 + 0x20))(plVar3,(lVar7 - uVar5) + uVar4);
        plVar3[1] = plVar3[1] + lVar7;
        uVar6 = FUN__text__003d6864(*param_1,0xe8);
        lVar7 = *param_1;
      }
      else {
        *puVar8 = uVar6;
        uVar6 = FUN__text__003d6864(*param_1,0xe8);
        lVar7 = *param_1;
      }
      goto joined_r0x003e05e4;
    }
    if (*(int *)((long)plVar3 + 0x3c) == 0) {
      *(undefined4 *)((long)plVar3 + 0x3c) = 0x16;
    }
  }
  uVar6 = FUN__text__003d6864(*param_1,0xe8);
  lVar7 = *param_1;
joined_r0x003e05e4:
  if ((uVar6 & 1) == 0) {
    return *(int *)(lVar7 + 0x3c);
  }
  plVar3 = param_1 + 3;
  if (*(long *)(lVar7 + 0x10) + 0xe8U <= *(ulong *)(lVar7 + 0x18)) {
    plVar1 = (long *)(*(long *)(lVar7 + 0x28) + *(long *)(lVar7 + 0x10));
    lVar13 = plVar1[5];
    lVar12 = plVar1[4];
    lVar10 = plVar1[1];
    lVar9 = *plVar1;
    lVar11 = plVar1[2];
    param_1[6] = plVar1[3];
    param_1[5] = lVar11;
    param_1[8] = lVar13;
    param_1[7] = lVar12;
    param_1[4] = lVar10;
    *plVar3 = lVar9;
    lVar9 = plVar1[6];
    lVar11 = plVar1[9];
    lVar10 = plVar1[8];
    lVar13 = plVar1[0xb];
    lVar12 = plVar1[10];
    lVar15 = plVar1[0xd];
    lVar14 = plVar1[0xc];
    param_1[10] = plVar1[7];
    param_1[9] = lVar9;
    param_1[0xc] = lVar11;
    param_1[0xb] = lVar10;
    param_1[0xe] = lVar13;
    param_1[0xd] = lVar12;
    param_1[0x10] = lVar15;
    param_1[0xf] = lVar14;
    lVar9 = plVar1[0xe];
    lVar11 = plVar1[0x11];
    lVar10 = plVar1[0x10];
    lVar13 = plVar1[0x13];
    lVar12 = plVar1[0x12];
    lVar15 = plVar1[0x15];
    lVar14 = plVar1[0x14];
    param_1[0x12] = plVar1[0xf];
    param_1[0x11] = lVar9;
    param_1[0x14] = lVar11;
    param_1[0x13] = lVar10;
    param_1[0x16] = lVar13;
    param_1[0x15] = lVar12;
    param_1[0x18] = lVar15;
    param_1[0x17] = lVar14;
    lVar14 = plVar1[0x1b];
    lVar13 = plVar1[0x1a];
    lVar10 = plVar1[0x17];
    lVar9 = plVar1[0x16];
    lVar12 = plVar1[0x19];
    lVar11 = plVar1[0x18];
    param_1[0x1f] = plVar1[0x1c];
    param_1[0x1c] = lVar12;
    param_1[0x1b] = lVar11;
    param_1[0x1e] = lVar14;
    param_1[0x1d] = lVar13;
    param_1[0x1a] = lVar10;
    param_1[0x19] = lVar9;
    *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + 0xe8;
    param_1[1] = (long)plVar3;
    param_1[2] = (long)(param_1 + 0x20);
    return 0;
  }
  lVar7 = FUN__text__003d65e0(lVar7,plVar3,0xe8);
  if (lVar7 != 0) {
    param_1[1] = (long)plVar3;
    param_1[2] = (long)plVar3 + lVar7;
    return 0;
  }
  param_1[1] = (long)plVar3;
  param_1[2] = (long)plVar3;
  iVar2 = 0x3d;
  if (*(int *)(*param_1 + 0x3c) != 0) {
    iVar2 = *(int *)(*param_1 + 0x3c);
  }
  return iVar2;
}


