/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0044d750; name: FUN_.text__0044d750
 */


void FUN__text__0044d750(ulong *param_1,long param_2)

{
  ulong *puVar1;
  uint uVar2;
  uint uVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong *puVar7;
  ulong *puVar8;
  ulong *puVar9;
  int iVar10;
  ulong uVar11;
  ulong uVar12;
  ulong local_50 [2];
  ulong *local_40;
  undefined8 local_38;
  
  uVar2 = (uint)param_1[3];
  uVar3 = *(uint *)(param_2 + 0x18);
  iVar10 = 0;
  puVar6 = (ulong *)param_1[2];
  puVar8 = *(ulong **)(param_2 + 0x10);
  if (uVar2 != 0 && uVar3 != 0) {
    puVar9 = puVar6;
    puVar7 = puVar8;
    do {
      uVar11 = *puVar9;
      puVar5 = puVar7 + 1;
      puVar1 = puVar9 + 1;
      uVar12 = *puVar7;
      puVar4 = puVar5;
      if (uVar11 < uVar12) {
        puVar9 = puVar1;
        puVar4 = puVar7;
      }
      puVar7 = puVar4;
      if (uVar11 == uVar12) {
        iVar10 = iVar10 + 1;
        puVar7 = puVar5;
        puVar9 = puVar1;
      }
    } while ((puVar9 != puVar6 + uVar2) && (puVar7 != puVar8 + uVar3));
  }
  iVar10 = (uVar3 + uVar2) - iVar10;
  local_40 = (ulong *)0x0;
  local_38 = 0;
  if (iVar10 != 0) {
    uVar11 = FUN__text__0040b2e0(local_50,iVar10);
    if ((uVar11 & 1) == 0) {
      return;
    }
    puVar6 = (ulong *)param_1[2];
    puVar8 = *(ulong **)(param_2 + 0x10);
  }
  puVar7 = local_40;
  puVar9 = puVar8;
  do {
    puVar5 = (ulong *)param_1[2];
    if (puVar9 == puVar8 + *(uint *)(param_2 + 0x18)) {
      if (puVar6 == puVar5 + (uint)param_1[3]) {
        local_38._0_4_ = iVar10;
        if ((puVar5 != (ulong *)0x0) && (*(undefined4 *)(param_1 + 3) = 0, puVar5 != param_1)) {
          FUN__text__00400fc0(4);
        }
        if (local_40 == local_50) {
          *param_1 = local_50[0];
          local_40 = param_1;
        }
        param_1[2] = (ulong)local_40;
        *(int *)(param_1 + 3) = (int)local_38;
        *(undefined4 *)((long)param_1 + 0x1c) = local_38._4_4_;
        return;
      }
      uVar11 = *puVar6;
LAB__text__0044d87c:
      *puVar7 = uVar11;
      puVar6 = puVar6 + 1;
    }
    else {
      if ((puVar6 == puVar5 + (uint)param_1[3]) || (uVar11 = *puVar6, *puVar9 < uVar11)) {
        *puVar7 = *puVar9;
      }
      else {
        if (uVar11 < *puVar9) goto LAB__text__0044d87c;
        puVar6 = puVar6 + 1;
        *puVar7 = uVar11;
      }
      puVar9 = puVar9 + 1;
    }
    puVar8 = *(ulong **)(param_2 + 0x10);
    puVar7 = puVar7 + 1;
  } while( true );
}


