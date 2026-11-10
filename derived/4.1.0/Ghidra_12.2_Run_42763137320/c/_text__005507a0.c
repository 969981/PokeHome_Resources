/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005507a0; name: FUN_.text__005507a0
 */


undefined8 FUN__text__005507a0(int param_1,uint param_2)

{
  ulong uVar1;
  uint uVar2;
  undefined8 uVar3;
  ulong uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  ulong uVar8;
  int iVar9;
  undefined1 auStack_60 [40];
  uint local_38;
  uint local_34;
  int iStack_30;
  
  uVar4 = (ulong)param_2;
  if (param_1 == 1) {
    uVar2 = param_2 >> 1;
    uVar4 = (ulong)uVar2;
    if (uVar2 * -0x55555555 < 0x55555556) {
      iVar5 = 1;
      iVar6 = 1;
      uVar8 = uVar4;
      do {
        iVar5 = iVar5 + 1;
        uVar4 = uVar8 / 3;
        iVar6 = iVar6 * 3;
        uVar1 = uVar8 / 3;
        uVar8 = uVar4;
      } while ((uint)((int)uVar1 * -0x55555555) < 0x55555556);
    }
    else {
      iVar5 = 1;
      iVar6 = 1;
    }
    if ((uVar4 & 3) == 0) {
      iVar7 = 0;
      uVar8 = uVar4;
      do {
        uVar4 = uVar8 >> 2;
        iVar7 = iVar7 + 1;
        iVar6 = iVar6 << 2;
        uVar1 = uVar8 & 0xc;
        uVar8 = uVar4;
      } while (uVar1 == 0);
    }
    else {
      iVar7 = 0;
    }
    if ((uint)((int)uVar4 * -0x33333333) < 0x33333334) {
      iVar9 = 0;
      uVar8 = uVar4;
      do {
        iVar9 = iVar9 + 1;
        uVar4 = uVar8 / 5;
        iVar6 = iVar6 * 5;
        uVar1 = uVar8 / 5;
        uVar8 = uVar4;
      } while ((uint)((int)uVar1 * -0x33333333) < 0x33333334);
    }
    else {
      iVar9 = 0;
    }
    local_38 = iVar5 + iVar7 + iVar9;
    if (iVar6 << ((uVar4 & 1) == 0 && iVar7 != 0) != uVar2) {
      local_38 = local_38 + 1;
    }
  }
  else {
    if (param_2 * -0x55555555 < 0x55555556) {
      iVar5 = 0;
      iVar6 = 1;
      uVar8 = (ulong)param_2;
      do {
        iVar5 = iVar5 + 1;
        uVar4 = uVar8 / 3;
        iVar6 = iVar6 * 3;
        uVar1 = uVar8 / 3;
        uVar8 = uVar4;
      } while ((uint)((int)uVar1 * -0x55555555) < 0x55555556);
    }
    else {
      iVar5 = 0;
      iVar6 = 1;
    }
    if ((uVar4 & 3) == 0) {
      iVar7 = 0;
      uVar8 = uVar4;
      do {
        uVar4 = uVar8 >> 2;
        iVar7 = iVar7 + 1;
        iVar6 = iVar6 << 2;
        uVar1 = uVar8 & 0xc;
        uVar8 = uVar4;
      } while (uVar1 == 0);
    }
    else {
      iVar7 = 0;
    }
    if ((uint)((int)uVar4 * -0x33333333) < 0x33333334) {
      iVar9 = 0;
      uVar8 = uVar4;
      do {
        iVar9 = iVar9 + 1;
        uVar4 = uVar8 / 5;
        iVar6 = iVar6 * 5;
        uVar1 = uVar8 / 5;
        uVar8 = uVar4;
      } while ((uint)((int)uVar1 * -0x33333333) < 0x33333334);
    }
    else {
      iVar9 = 0;
    }
    local_38 = iVar7 + iVar5 + iVar9;
    if (iVar6 << ((uVar4 & 1) == 0 && iVar7 != 0) != param_2) {
      local_38 = local_38 + 1;
    }
  }
  if (local_38 == 0) {
    return 0;
  }
  uVar4 = (ulong)local_38;
  local_34 = param_2;
  iStack_30 = param_1;
  FUN__text__0054fac0(auStack_60 + -(uVar4 * 4 + 0xf & 0x7fffffff0));
  uVar3 = FUN__text__00550660(auStack_60,auStack_60 + -(uVar4 * 4 + 0xf & 0x7fffffff0));
  return uVar3;
}


