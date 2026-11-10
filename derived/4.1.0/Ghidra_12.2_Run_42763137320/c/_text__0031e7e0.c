/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0031e7e0; name: FUN_.text__0031e7e0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16]
FUN__text__0031e7e0(uint *param_1,ulong param_2,uint *param_3,ulong param_4,undefined8 *param_5)

{
  byte bVar1;
  uint *puVar2;
  long lVar3;
  int iVar4;
  ulong uVar5;
  byte *pbVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  uint uVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  byte *pbVar14;
  byte *pbVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  uint *local_80;
  ulong local_78;
  uint *local_70;
  long lStack_68;
  
  lVar3 = _DAT_008a2a58;
  if (param_2 == param_4) goto LAB__text__0031ea7c;
  uVar5 = (ulong)*param_1;
  local_80 = param_1;
  local_78 = param_2;
  if (param_2 < uVar5) {
    uVar7 = 0;
    uVar10 = *param_3;
    lVar9 = *(long *)(param_1 + 2);
    uVar8 = param_2;
    if (param_4 - 1 < (ulong)uVar10) goto LAB__text__0031e8ec;
LAB__text__0031e854:
    iVar4 = ((int)param_4 + -1) - uVar10;
    lVar13 = LZCOUNT(iVar4 + 0x10);
    uVar11 = 0x1c - lVar13;
    uVar12 = (ulong)(uint)(iVar4 - *(int *)(_DAT_008a2a58 + uVar11 * 4));
    pbVar15 = (byte *)(lVar9 + uVar8 * 0x20);
    puVar2 = (uint *)(*(long *)(param_3 + 4) + (0x1b - lVar13) * 8);
    if (uVar7 == uVar11) goto LAB__text__0031e904;
LAB__text__0031e890:
    if (uVar7 == 0) {
      lVar9 = *(long *)(param_1 + 2);
    }
    else {
      uVar5 = 8L << (uVar7 & 0x3f);
      lVar9 = *(long *)(*(long *)(param_1 + 4) + uVar7 * 8);
    }
    pbVar6 = (byte *)(lVar9 + uVar5 * 0x20);
    lVar9 = 0;
  }
  else {
    iVar4 = (int)param_2 - *param_1;
    lVar9 = LZCOUNT(iVar4 + 0x10);
    uVar7 = 0x1c - lVar9;
    uVar8 = (ulong)(uint)(iVar4 - *(int *)(_DAT_008a2a58 + uVar7 * 4));
    uVar10 = *param_3;
    lVar9 = *(long *)(*(long *)(param_1 + 4) + (0x1b - lVar9) * 8 + 8);
    if ((ulong)uVar10 <= param_4 - 1) goto LAB__text__0031e854;
LAB__text__0031e8ec:
    uVar12 = param_4 - 1;
    pbVar15 = (byte *)(lVar9 + uVar8 * 0x20);
    puVar2 = param_3;
    if (uVar7 != 0) goto LAB__text__0031e890;
LAB__text__0031e904:
    lVar9 = 0;
    pbVar6 = (byte *)(*(long *)(puVar2 + 2) + uVar12 * 0x20 + 0x20);
  }
LAB__text__0031e938:
  while( true ) {
    pbVar14 = pbVar15;
    if (pbVar14 != pbVar6) goto code_r0x0031e948;
    local_70 = param_3;
    lStack_68 = param_4 - 1;
    auVar16 = FUN__text__0031da3c(&local_70);
    uVar10 = *local_80;
    lVar13 = 0;
    if (uVar10 <= local_78) {
      lVar13 = 0x1c - LZCOUNT(((int)local_78 - uVar10) + 0x10);
    }
    if (lVar13 == auVar16._0_8_) break;
    local_78 = (ulong)*(uint *)(lVar3 + lVar13 * 4 + 4) + (ulong)uVar10;
    auVar17 = FUN__text__0031da3c(&local_80);
    pbVar14 = auVar17._8_8_;
    lVar13 = auVar17._0_8_;
    if (lVar13 == auVar16._0_8_) {
      pbVar6 = (byte *)(auVar16._8_8_ + 0x20);
    }
    else if (lVar13 == 0) {
      pbVar6 = (byte *)(*(long *)(local_80 + 2) + (ulong)*local_80 * 0x20);
    }
    else {
      pbVar6 = (byte *)(*(long *)(*(long *)(local_80 + 4) + (lVar13 - 1U) * 8 + 8) +
                       (0x10L << (lVar13 - 1U & 0x3f)) * 0x20);
    }
    if (pbVar6 == pbVar14) break;
    pbVar15 = pbVar6;
    if (pbVar14 != pbVar6) goto LAB__text__0031e950;
  }
  param_2 = param_4;
  param_1 = param_3;
LAB__text__0031ea7c:
  auVar16._8_8_ = param_2;
  auVar16._0_8_ = param_1;
  return auVar16;
code_r0x0031e948:
  pbVar15 = pbVar6;
  if (pbVar14 != pbVar6) {
LAB__text__0031e950:
    lVar9 = -lVar9;
    do {
      bVar1 = *pbVar14;
      if ((bVar1 & 0x7f) == 6) {
        uVar10 = (uint)pbVar14[1];
        if (bVar1 != 0x86) {
          uVar10 = *(uint *)(pbVar14 + 4);
        }
        if (param_5[1] == (ulong)uVar10) {
          pbVar15 = *(byte **)(pbVar14 + 8);
          if (bVar1 != 6) {
            pbVar15 = pbVar14 + 2;
          }
          iVar4 = memcmp((void *)*param_5,pbVar15,param_5[1]);
          if (iVar4 == 0) {
            param_2 = param_2 - lVar9;
            goto LAB__text__0031ea7c;
          }
        }
      }
      pbVar14 = pbVar14 + 0x20;
      lVar9 = lVar9 + -1;
    } while (pbVar14 != pbVar6);
    lVar9 = -lVar9;
    pbVar15 = pbVar6;
  }
  goto LAB__text__0031e938;
}


