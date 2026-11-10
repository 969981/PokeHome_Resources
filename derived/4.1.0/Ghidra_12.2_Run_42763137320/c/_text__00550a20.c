/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00550a20; name: FUN_.text__00550a20
 */


void FUN__text__00550a20(long param_1,int param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  int iVar9;
  undefined1 *puVar10;
  undefined1 auStack_a0 [128];
  
  if ((param_2 != 1) || ((param_3 & 1) == 0)) {
    if (param_2 == 1) {
      uVar2 = param_3 >> 1;
      if (uVar2 * -0x55555555 < 0x55555556) {
        iVar4 = 1;
        iVar5 = 1;
        uVar8 = (ulong)uVar2;
        do {
          iVar4 = iVar4 + 1;
          uVar7 = uVar8 / 3;
          iVar5 = iVar5 * 3;
          uVar3 = uVar8 / 3;
          uVar8 = uVar7;
        } while ((uint)((int)uVar3 * -0x55555555) < 0x55555556);
      }
      else {
        iVar4 = 1;
        uVar7 = (ulong)uVar2;
        iVar5 = 1;
      }
      if ((uVar7 & 3) == 0) {
        iVar6 = 0;
        uVar8 = uVar7;
        do {
          uVar7 = uVar8 >> 2;
          iVar6 = iVar6 + 1;
          iVar5 = iVar5 << 2;
          uVar3 = uVar8 & 0xc;
          uVar8 = uVar7;
        } while (uVar3 == 0);
      }
      else {
        iVar6 = 0;
      }
      if ((uint)((int)uVar7 * -0x33333333) < 0x33333334) {
        iVar9 = 0;
        uVar8 = uVar7;
        do {
          iVar9 = iVar9 + 1;
          uVar7 = uVar8 / 5;
          iVar5 = iVar5 * 5;
          uVar3 = uVar8 / 5;
          uVar8 = uVar7;
        } while ((uint)((int)uVar3 * -0x33333333) < 0x33333334);
      }
      else {
        iVar9 = 0;
      }
      uVar1 = iVar4 + iVar6 + iVar9;
      if (iVar5 << ((uVar7 & 1) == 0 && iVar6 != 0) != uVar2) {
        uVar1 = uVar1 + 1;
      }
    }
    else {
      if (param_3 * -0x55555555 < 0x55555556) {
        iVar4 = 0;
        iVar5 = 1;
        uVar8 = (ulong)param_3;
        do {
          iVar4 = iVar4 + 1;
          uVar7 = uVar8 / 3;
          iVar5 = iVar5 * 3;
          uVar3 = uVar8 / 3;
          uVar8 = uVar7;
        } while ((uint)((int)uVar3 * -0x55555555) < 0x55555556);
      }
      else {
        iVar4 = 0;
        iVar5 = 1;
        uVar7 = (ulong)param_3;
      }
      if ((uVar7 & 3) == 0) {
        iVar6 = 0;
        uVar8 = uVar7;
        do {
          uVar7 = uVar8 >> 2;
          iVar6 = iVar6 + 1;
          iVar5 = iVar5 << 2;
          uVar3 = uVar8 & 0xc;
          uVar8 = uVar7;
        } while (uVar3 == 0);
      }
      else {
        iVar6 = 0;
      }
      if ((uint)((int)uVar7 * -0x33333333) < 0x33333334) {
        iVar9 = 0;
        uVar8 = uVar7;
        do {
          iVar9 = iVar9 + 1;
          uVar7 = uVar8 / 5;
          iVar5 = iVar5 * 5;
          uVar3 = uVar8 / 5;
          uVar8 = uVar7;
        } while ((uint)((int)uVar3 * -0x33333333) < 0x33333334);
      }
      else {
        iVar9 = 0;
      }
      uVar1 = iVar6 + iVar4 + iVar9;
      if (iVar5 << ((uVar7 & 1) == 0 && iVar6 != 0) != param_3) {
        uVar1 = uVar1 + 1;
      }
    }
    if (uVar1 != 0) {
      *(uint *)(param_1 + 0x28) = uVar1;
      *(uint *)(param_1 + 0x2c) = param_3;
      *(int *)(param_1 + 0x30) = param_2;
      puVar10 = auStack_a0 + (0x80 - ((ulong)uVar1 * 4 + 0xf & 0x7fffffff0));
      FUN__text__0054fac0(puVar10);
      FUN__text__00550660(param_1,puVar10);
      FUN__text__0054fd80(param_1,puVar10);
      FUN__text__005504a0(param_1,puVar10);
      return;
    }
  }
  return;
}


