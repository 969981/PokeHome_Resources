/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00494e70; name: FUN_.text__00494e70
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN__text__00494e70(long param_1,byte *param_2,undefined4 param_3,char *param_4,undefined8 param_5,
                   undefined4 param_6)

{
  byte bVar1;
  long lVar2;
  undefined8 uVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  uint uVar8;
  byte *pbVar9;
  uint *puVar10;
  int iVar11;
  byte *pbVar12;
  byte *pbVar13;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 local_70;
  byte local_68;
  byte local_60;
  undefined8 local_58;
  int local_38;
  int local_34;
  
  lVar2 = _DAT_008a4ac0;
  pbVar9 = *(byte **)(param_1 + 0x90);
  if (pbVar9 != (byte *)0x0) {
    bVar1 = *pbVar9;
    uVar4 = (uint)bVar1;
    if (bVar1 < 2) {
      uVar4 = 1;
    }
    uVar7 = (ulong)uVar4;
    puVar10 = (uint *)(pbVar9 + ((ulong)bVar1 & 0xfc));
    do {
      puVar10 = puVar10 + 1;
      pbVar9 = pbVar9 + 1;
      if (*pbVar9 == 0x35) {
        local_68 = param_2[1];
        uVar4 = *puVar10 >> (ulong)(local_68 & 0x1f);
        goto joined_r0x00495008;
      }
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  local_68 = param_2[1];
  uVar4 = *(uint *)(_DAT_008a4ac0 + 0xd4) >> (ulong)(local_68 & 0x1f);
joined_r0x00495008:
  if ((uVar4 & 1) == 0) {
    uVar3 = 0x52;
  }
  else {
    if (*param_4 != '\0') {
      if ((*(long *)(param_1 + 0x78) != 0) &&
         (uVar3 = FUN__text__00494e70(*(long *)(param_1 + 0x78),param_2,param_3,param_4,param_5,
                                      param_6), (int)uVar3 != 1)) {
        return uVar3;
      }
      *param_4 = '\0';
      local_68 = param_2[1];
    }
    local_60 = 0xff;
    if ((*param_2 - 0x80 < 0x21) && ((1L << ((ulong)(*param_2 - 0x80) & 0x3f) & 0x100010001U) != 0))
    {
      local_60 = param_2[4];
    }
    local_58 = 0;
    local_34 = 0;
    local_80 = param_5;
    local_78 = param_6;
    local_70 = param_3;
    FUN__text__00495180(param_1,&local_34,0x2f,&local_80);
    uVar4 = local_34 + (uint)param_2[4];
    pbVar9 = *(byte **)(param_1 + 0x90);
    if (0x7e < (int)uVar4) {
      uVar4 = 0x7f;
    }
    uVar4 = uVar4 & ((int)uVar4 >> 0x1f ^ 0xffffffffU);
    iVar5 = *(int *)(lVar2 + 0xc4);
    if (pbVar9 == (byte *)0x0) {
      iVar11 = *(int *)(lVar2 + 200);
    }
    else {
      bVar1 = *pbVar9;
      uVar8 = (uint)bVar1;
      if (bVar1 < 2) {
        uVar8 = 1;
      }
      uVar6 = (ulong)uVar8;
      pbVar13 = pbVar9 + ((ulong)bVar1 & 0xfc);
      uVar7 = uVar6;
      pbVar12 = pbVar9;
      do {
        pbVar13 = pbVar13 + 4;
        pbVar12 = pbVar12 + 1;
        if (*pbVar12 == 0x31) {
          iVar5 = *(int *)pbVar13;
          break;
        }
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
      pbVar13 = pbVar9 + ((ulong)bVar1 & 0xfc);
      iVar11 = *(int *)(lVar2 + 200);
      do {
        pbVar13 = pbVar13 + 4;
        pbVar9 = pbVar9 + 1;
        if (*pbVar9 == 0x32) {
          iVar11 = *(int *)pbVar13;
          break;
        }
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
    }
    uVar3 = 0x52;
    if (((int)uVar4 <= iVar11) && (uVar3 = 0x52, iVar5 <= (int)uVar4)) {
      local_38 = 0;
      FUN__text__00495180(param_1,&local_38,0x30,&local_80);
      local_38 = local_38 + (uint)param_2[5];
      pbVar9 = *(byte **)(param_1 + 0x90);
      if (0x7e < local_38) {
        local_38 = 0x7f;
      }
      iVar5 = *(int *)(lVar2 + 0xcc);
      if (local_38 < 2) {
        local_38 = 1;
      }
      if (pbVar9 == (byte *)0x0) {
        iVar11 = *(int *)(lVar2 + 0xd0);
      }
      else {
        bVar1 = *pbVar9;
        uVar8 = (uint)bVar1;
        if (bVar1 < 2) {
          uVar8 = 1;
        }
        uVar6 = (ulong)uVar8;
        pbVar13 = pbVar9 + ((ulong)bVar1 & 0xfc);
        uVar7 = uVar6;
        pbVar12 = pbVar9;
        do {
          pbVar13 = pbVar13 + 4;
          pbVar12 = pbVar12 + 1;
          if (*pbVar12 == 0x33) {
            iVar5 = *(int *)pbVar13;
            break;
          }
          uVar7 = uVar7 - 1;
        } while (uVar7 != 0);
        pbVar13 = pbVar9 + ((ulong)bVar1 & 0xfc);
        iVar11 = *(int *)(lVar2 + 0xd0);
        do {
          pbVar13 = pbVar13 + 4;
          pbVar9 = pbVar9 + 1;
          if (*pbVar9 == 0x34) {
            iVar11 = *(int *)pbVar13;
            break;
          }
          uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
      }
      uVar3 = 0x52;
      if ((local_38 <= iVar11) && (iVar5 <= local_38)) {
        uVar3 = 1;
        param_2[4] = (byte)uVar4;
        param_2[5] = (byte)local_38;
      }
    }
  }
  return uVar3;
}


