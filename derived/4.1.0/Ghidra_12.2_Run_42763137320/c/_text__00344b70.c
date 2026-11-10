/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00344b70; name: FUN_.text__00344b70
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN__text__00344b70(undefined8 param_1,void *param_2,undefined8 param_3)

{
  uint *puVar1;
  char *pcVar2;
  uint uVar3;
  uint uVar4;
  char cVar5;
  undefined8 uVar6;
  bool bVar7;
  int iVar8;
  ulong uVar9;
  size_t sVar10;
  char *extraout_x1;
  char *extraout_x1_00;
  char *extraout_x1_01;
  long lVar11;
  ulong uVar12;
  long lVar13;
  byte *pbVar14;
  ulong uVar15;
  uint *puVar16;
  undefined8 local_7640;
  undefined8 uStack_7638;
  undefined8 local_7630;
  undefined8 uStack_7628;
  undefined8 local_7620;
  undefined8 local_7618;
  undefined8 uStack_7610;
  undefined8 local_7608;
  int local_7600;
  undefined8 local_75f8;
  undefined8 uStack_75f0;
  undefined8 local_75e8;
  undefined8 uStack_75e0;
  byte *local_75d8;
  undefined8 local_75d0;
  undefined8 local_75c8;
  undefined8 uStack_75c0;
  undefined8 local_75b8;
  undefined8 uStack_75b0;
  undefined8 local_75a8;
  undefined8 uStack_75a0;
  undefined8 local_7598;
  undefined8 uStack_7590;
  undefined8 local_7588;
  undefined8 uStack_7580;
  undefined8 local_7578;
  undefined8 uStack_7570;
  undefined8 local_7568;
  undefined8 uStack_7560;
  undefined8 local_7558;
  undefined8 uStack_7550;
  undefined8 local_7548;
  undefined8 uStack_7540;
  undefined8 local_7538;
  undefined8 uStack_7530;
  undefined8 local_7528;
  undefined8 uStack_7520;
  undefined8 local_7518;
  undefined8 uStack_7510;
  byte *local_a0;
  undefined8 local_98;
  int local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  
  memset(param_2,0,0x71ec);
  memset(&local_75d0,0,30000);
  uVar9 = FUN__text__00345390(param_1,&local_75d0,0x71d059,param_3);
  if ((uVar9 & 1) == 0) {
    return false;
  }
  local_7620 = 1;
  local_7618 = 0;
  uStack_7610 = 0;
  local_7640 = 0x1e00000;
  uStack_7638 = 0x1e00000;
  local_7630 = 0x1e00000;
  uStack_7628 = 0x400;
  sVar10 = strlen((char *)&local_75d0);
  local_90 = 0;
  local_98 = 0;
  local_80 = 0;
  local_88 = 0xffffffff;
  local_78 = 0;
  local_70 = 0;
  iVar8 = FUN__text__003dd89c(&local_98,&local_7640);
  if (iVar8 == 0) {
    iVar8 = FUN__text__003ddea8(&local_98,&local_75d0,(long)&local_75d0 + sVar10);
    if (iVar8 != 0) {
      local_7608 = local_98;
      goto LAB__text__00344c7c;
    }
    FUN__text__003dd208(&local_a0,&local_98,0);
    local_7608 = local_98;
    local_98 = 0;
    local_7600 = local_90;
    local_75f8 = local_88;
    uStack_75f0 = local_80;
    local_80 = 0;
    local_75e8 = local_78;
    uStack_75e0 = local_70;
    local_75d8 = local_a0;
    FUN__text__003dd6cc(&local_98);
    if (local_7600 == 0) goto LAB__text__00344ca8;
LAB__text__00344e44:
    bVar7 = false;
    pbVar14 = local_75d8;
  }
  else {
    local_90 = 0xe;
    local_7608 = local_98;
LAB__text__00344c7c:
    local_98 = 0;
    local_75d8 = (byte *)0x0;
    local_75f8 = local_88;
    uStack_75f0 = local_80;
    local_80 = 0;
    local_75e8 = local_78;
    uStack_75e0 = local_70;
    local_7600 = local_90;
    FUN__text__003dd6cc(&local_98);
    if (local_7600 != 0) goto LAB__text__00344e44;
LAB__text__00344ca8:
    if ((*local_75d8 & 0x7f) != 7) goto LAB__text__00344e44;
    puVar16 = *(uint **)(local_75d8 + 1);
    uVar3 = puVar16[1];
    if (uVar3 == 0) {
      bVar7 = true;
      pbVar14 = local_75d8;
    }
    else {
      uVar9 = 0;
      do {
        uVar4 = *puVar16;
        uVar12 = uVar9;
        puVar1 = puVar16;
        if (uVar4 <= uVar9) {
          lVar11 = LZCOUNT(((int)uVar9 - uVar4) + 0x10);
          uVar12 = (ulong)(((int)uVar9 - uVar4) - *(int *)((0x1c - lVar11) * 4 + 0x734874));
          puVar1 = (uint *)(*(long *)(puVar16 + 4) + (0x1b - lVar11) * 8);
        }
        lVar11 = *(long *)(puVar1 + 2) + uVar12 * 0x10;
        iVar8 = FUN__text__0031e240(lVar11,0x71a1d3,3);
        if (iVar8 != 0) goto LAB__text__00344e44;
        uVar12 = *(ulong *)(extraout_x1 + 8);
        if ((((*extraout_x1 != '\x02') && (*extraout_x1 != '\x03')) || (uVar12 >> 0x20 != 0)) ||
           (iVar8 = FUN__text__0031e240(lVar11,0x70ba8d,3), iVar8 != 0)) goto LAB__text__00344e44;
        uVar15 = *(ulong *)(extraout_x1_00 + 8);
        if (((*extraout_x1_00 != '\x02') && (*extraout_x1_00 != '\x03')) ||
           ((uVar15 >> 0x20 != 0 || (iVar8 = FUN__text__0031e240(lVar11,0x718b13,3), iVar8 != 0))))
        goto LAB__text__00344e44;
        if (((*extraout_x1_01 != '\x02') && (*extraout_x1_01 != '\x03')) ||
           (*(ulong *)(extraout_x1_01 + 8) >> 0x20 != 0)) goto LAB__text__00344e44;
        uVar9 = uVar9 + 1;
        bVar7 = true;
        *(char *)((long)param_2 + uVar15 + uVar12 * 0x1c) = (char)*(ulong *)(extraout_x1_01 + 8);
        pbVar14 = local_75d8;
      } while (uVar3 != uVar9);
    }
  }
  local_75d8 = (byte *)0x0;
  if (pbVar14 != (byte *)0x0) {
    local_75d8 = (byte *)0x0;
    if (*pbVar14 - 6 < 5) {
      FUN__text__0031d370(pbVar14);
    }
    operator_delete(pbVar14);
  }
  FUN__text__003dd6cc(&local_7608);
  if (!bVar7) {
    return false;
  }
  local_75d0 = 0;
  local_7518 = 0;
  uStack_7510 = 0;
  local_7528 = 0;
  uStack_7520 = 0;
  local_7538 = 0;
  uStack_7530 = 0;
  local_7548 = 0;
  uStack_7540 = 0;
  local_7558 = 0;
  uStack_7550 = 0;
  local_7568 = 0;
  uStack_7560 = 0;
  local_7578 = 0;
  uStack_7570 = 0;
  local_7588 = 0;
  uStack_7580 = 0;
  local_7598 = 0;
  uStack_7590 = 0;
  local_75a8 = 0;
  uStack_75a0 = 0;
  local_75b8 = 0;
  uStack_75b0 = 0;
  local_75c8 = 0;
  uStack_75c0 = 0;
  uVar9 = FUN__text__003455b0(param_1,&local_75d0,0x70dc03,param_3);
  if ((uVar9 & 1) == 0) {
    return false;
  }
  local_7620 = 1;
  local_7618 = 0;
  uStack_7610 = 0;
  local_7640 = 0x1e00000;
  uStack_7638 = 0x1e00000;
  local_7630 = 0x1e00000;
  uStack_7628 = 0x400;
  sVar10 = strlen((char *)&local_75d0);
  local_90 = 0;
  local_98 = 0;
  local_80 = 0;
  local_88 = 0xffffffff;
  local_78 = 0;
  local_70 = 0;
  iVar8 = FUN__text__003dd89c(&local_98,&local_7640);
  uVar6 = local_98;
  if (iVar8 != 0) {
    local_90 = 0xe;
    local_7600 = 0xe;
    local_98 = 0;
    local_75d8 = (byte *)0x0;
    local_7608 = uVar6;
    local_75f8 = local_88;
    uStack_75f0 = local_80;
    local_80 = 0;
    local_75e8 = local_78;
    uStack_75e0 = local_70;
    FUN__text__003dd6cc(&local_98);
    local_75d8 = (byte *)0x0;
    FUN__text__003dd6cc(&local_7608);
    return false;
  }
  iVar8 = FUN__text__003ddea8(&local_98,&local_75d0,(long)&local_75d0 + sVar10);
  if (iVar8 == 0) {
    FUN__text__003dd208(&local_a0,&local_98,0);
    local_7608 = local_98;
    local_75d8 = local_a0;
    uStack_75f0 = local_80;
  }
  else {
    local_75d8 = (byte *)0x0;
    local_7608 = local_98;
    uStack_75f0 = local_80;
  }
  iVar8 = local_90;
  pbVar14 = local_75d8;
  local_98 = 0;
  local_80 = 0;
  local_75e8 = local_78;
  uStack_75e0 = local_70;
  local_7600 = local_90;
  local_75f8 = local_88;
  FUN__text__003dd6cc(&local_98);
  lVar11 = _DAT_008a2a58;
  if (iVar8 == 0) {
    bVar7 = (*pbVar14 & 0x7f) == 7;
    if (bVar7) {
      puVar16 = *(uint **)(pbVar14 + 1);
      uVar3 = puVar16[1];
      if (uVar3 != 0) {
        uVar9 = 0;
        bVar7 = true;
        do {
          uVar4 = *puVar16;
          uVar12 = uVar9;
          puVar1 = puVar16;
          if (uVar4 <= uVar9) {
            lVar13 = LZCOUNT(((int)uVar9 - uVar4) + 0x10);
            uVar12 = (ulong)(((int)uVar9 - uVar4) - *(int *)(lVar11 + (0x1c - lVar13) * 4));
            puVar1 = (uint *)(*(long *)(puVar16 + 4) + (0x1b - lVar13) * 8);
          }
          pcVar2 = (char *)(*(long *)(puVar1 + 2) + uVar12 * 0x10);
          cVar5 = *pcVar2;
          uVar12 = *(ulong *)(pcVar2 + 8);
          if (((cVar5 != '\x02') && (cVar5 != '\x03')) || (uVar12 >> 0x20 != 0))
          goto LAB__text__00345034;
          uVar9 = uVar9 + 1;
          *(undefined1 *)((long)param_2 + uVar12 + 0x7054) = 1;
        } while (uVar3 != uVar9);
        goto LAB__text__00345038;
      }
    }
LAB__text__00345114:
    local_75d8 = (byte *)0x0;
    if (*pbVar14 - 6 < 5) {
      FUN__text__0031d370(pbVar14);
    }
    operator_delete(pbVar14);
    FUN__text__003dd6cc(&local_7608);
  }
  else {
LAB__text__00345034:
    bVar7 = false;
LAB__text__00345038:
    local_75d8 = (byte *)0x0;
    if (pbVar14 != (byte *)0x0) goto LAB__text__00345114;
    FUN__text__003dd6cc(&local_7608);
  }
  if (!bVar7) {
    return false;
  }
  memset(&local_75d0,0,1000);
  uVar9 = FUN__text__003198b0(param_1,&local_75d0,0x716001,param_3);
  bVar7 = true;
  if ((uVar9 & 1) == 0) goto LAB__text__0034537c;
  local_7618 = 0;
  uStack_7610 = 0;
  local_7620 = 1;
  local_7640 = 0x1e00000;
  uStack_7638 = 0x1e00000;
  local_7630 = 0x1e00000;
  uStack_7628 = 0x400;
  sVar10 = strlen((char *)&local_75d0);
  local_90 = 0;
  local_98 = 0;
  local_80 = 0;
  local_88 = 0xffffffff;
  local_78 = 0;
  local_70 = 0;
  iVar8 = FUN__text__003dd89c(&local_98,&local_7640);
  uVar6 = local_98;
  if (iVar8 == 0) {
    iVar8 = FUN__text__003ddea8(&local_98,&local_75d0,(long)&local_75d0 + sVar10);
    if (iVar8 == 0) {
      FUN__text__003dd208(&local_a0,&local_98,0);
      local_7608 = local_98;
      pbVar14 = local_a0;
    }
    else {
      local_7608 = local_98;
      pbVar14 = (byte *)0x0;
    }
    iVar8 = local_90;
    local_7600 = local_90;
    local_75f8 = local_88;
    uStack_75f0 = local_80;
    local_75e8 = local_78;
    uStack_75e0 = local_70;
    local_98 = 0;
    local_80 = 0;
    FUN__text__003dd6cc(&local_98);
    lVar11 = _DAT_008a2a58;
    if (iVar8 == 0) {
      if ((*pbVar14 & 0x7f) == 7) {
        puVar16 = *(uint **)(pbVar14 + 1);
        uVar3 = puVar16[1];
        if (uVar3 != 0) {
          uVar9 = 0;
          do {
            uVar4 = *puVar16;
            uVar12 = uVar9;
            puVar1 = puVar16;
            if (uVar4 <= uVar9) {
              lVar13 = LZCOUNT(((int)uVar9 - uVar4) + 0x10);
              uVar12 = (ulong)(((int)uVar9 - uVar4) - *(int *)(lVar11 + (0x1c - lVar13) * 4));
              puVar1 = (uint *)(*(long *)(puVar16 + 4) + (0x1b - lVar13) * 8);
            }
            pcVar2 = (char *)(*(long *)(puVar1 + 2) + uVar12 * 0x10);
            cVar5 = *pcVar2;
            uVar12 = *(ulong *)(pcVar2 + 8);
            if (((cVar5 != '\x02') && (cVar5 != '\x03')) || (uVar12 >> 0x20 != 0))
            goto LAB__text__00345270;
            *(int *)((long)param_2 + uVar9 * 4 + 0x705c) = (int)uVar12;
            uVar9 = uVar9 + 1;
          } while (uVar3 != uVar9);
          bVar7 = false;
          goto joined_r0x0034533c;
        }
        bVar7 = false;
      }
      else {
        bVar7 = true;
      }
    }
    else {
LAB__text__00345270:
      bVar7 = true;
joined_r0x0034533c:
      local_75d8 = (byte *)0x0;
      if (pbVar14 == (byte *)0x0) goto LAB__text__00345374;
    }
    local_75d8 = (byte *)0x0;
    if (*pbVar14 - 6 < 5) {
      FUN__text__0031d370(pbVar14);
    }
    operator_delete(pbVar14);
  }
  else {
    local_90 = 0xe;
    local_7600 = 0xe;
    local_98 = 0;
    local_7608 = uVar6;
    local_75f8 = local_88;
    uStack_75f0 = local_80;
    local_80 = 0;
    local_75e8 = local_78;
    uStack_75e0 = local_70;
    FUN__text__003dd6cc(&local_98);
    local_75d8 = (byte *)0x0;
    bVar7 = true;
  }
LAB__text__00345374:
  FUN__text__003dd6cc(&local_7608);
LAB__text__0034537c:
  return !bVar7;
}


