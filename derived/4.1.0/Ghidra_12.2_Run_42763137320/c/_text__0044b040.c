/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0044b040; name: FUN_.text__0044b040
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0044b040(long param_1)

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
  ulong *puVar11;
  ulong uVar12;
  ulong uVar13;
  ulong local_50 [2];
  ulong *local_40;
  undefined8 local_38;
  
  puVar5 = _DAT_008a4480;
  uVar2 = *(uint *)(param_1 + 0x18);
  iVar10 = 0;
  puVar8 = *(ulong **)(param_1 + 0x10);
  uVar3 = (uint)_DAT_008a4480[3];
  puVar6 = (ulong *)_DAT_008a4480[2];
  if (uVar3 != 0 && uVar2 != 0) {
    puVar9 = puVar6;
    puVar7 = puVar8;
    do {
      uVar12 = *puVar9;
      puVar11 = puVar7 + 1;
      puVar1 = puVar9 + 1;
      uVar13 = *puVar7;
      puVar4 = puVar11;
      if (uVar12 < uVar13) {
        puVar9 = puVar1;
        puVar4 = puVar7;
      }
      puVar7 = puVar4;
      if (uVar12 == uVar13) {
        iVar10 = iVar10 + 1;
        puVar7 = puVar11;
        puVar9 = puVar1;
      }
    } while ((puVar9 != puVar6 + uVar3) && (puVar7 != puVar8 + uVar2));
  }
  iVar10 = (uVar2 + uVar3) - iVar10;
  local_40 = (ulong *)0x0;
  local_38 = 0;
  if (iVar10 != 0) {
    uVar12 = FUN__text__0040b2e0(local_50,iVar10);
    if ((uVar12 & 1) == 0) {
      return;
    }
    puVar6 = (ulong *)puVar5[2];
    puVar8 = *(ulong **)(param_1 + 0x10);
  }
  puVar7 = local_40;
  puVar9 = puVar8;
  puVar11 = puVar6;
  do {
    if (puVar9 == puVar8 + *(uint *)(param_1 + 0x18)) {
      if (puVar11 == puVar6 + (uint)puVar5[3]) {
        local_38._0_4_ = iVar10;
        if ((puVar6 != (ulong *)0x0) && (*(undefined4 *)(puVar5 + 3) = 0, puVar6 != puVar5)) {
          FUN__text__00400fc0(4);
        }
        if (local_40 == local_50) {
          *puVar5 = local_50[0];
          local_40 = puVar5;
        }
        puVar5[2] = (ulong)local_40;
        *(int *)(puVar5 + 3) = (int)local_38;
        *(undefined4 *)((long)puVar5 + 0x1c) = local_38._4_4_;
        return;
      }
      uVar12 = *puVar11;
LAB__text__0044b17c:
      *puVar7 = uVar12;
      puVar11 = puVar11 + 1;
    }
    else {
      uVar13 = *puVar9;
      if ((puVar11 == puVar6 + (uint)puVar5[3]) || (uVar12 = *puVar11, uVar13 < uVar12)) {
        *puVar7 = uVar13;
      }
      else {
        if (uVar12 < uVar13) goto LAB__text__0044b17c;
        puVar11 = puVar11 + 1;
        *puVar7 = uVar12;
      }
      puVar9 = puVar9 + 1;
    }
    puVar8 = *(ulong **)(param_1 + 0x10);
    puVar7 = puVar7 + 1;
    puVar6 = (ulong *)puVar5[2];
  } while( true );
}


