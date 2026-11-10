/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00493ca0; name: FUN_.text__00493ca0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN__text__00493ca0(long param_1,long param_2,undefined8 param_3,undefined8 *param_4,float *param_5,
                   long param_6,uint param_7,long *param_8)

{
  int iVar1;
  byte bVar2;
  undefined2 uVar3;
  long *plVar4;
  uint uVar5;
  long *plVar6;
  undefined8 *puVar7;
  byte *pbVar8;
  float *pfVar9;
  ulong uVar10;
  uint uVar11;
  byte *pbVar12;
  long lVar13;
  undefined4 uVar14;
  float fVar15;
  ulong local_70 [2];
  
  uVar5 = (uint)*(ushort *)(param_2 + 0xc2);
  if ((*(ushort *)(param_2 + 0xc2) >> 9 & 1) == 0) {
    if (((*(uint *)(param_1 + 0x98) & 0x1f000) == 0) && (*(long *)(param_1 + 0x78) != 0)) {
      uVar11 = 0;
    }
    else {
      uVar3 = FUN__text__0046697c(param_1,*param_4);
      uVar5 = (uint)*(ushort *)(param_2 + 0xc2);
      uVar11 = 0x200;
      *(undefined2 *)(param_2 + 0xc0) = uVar3;
    }
    uVar5 = uVar5 & 0xfffffdff | uVar11;
    *(short *)(param_2 + 0xc2) = (short)uVar5;
  }
  if (((uVar5 >> 6 & 1) == 0) &&
     (((*(byte *)(param_1 + 0xe9) >> 4 & 1) != 0 || (*(long *)(param_1 + 0x78) == 0)))) {
    uVar5 = uVar5 & 0xffffff9f | *(byte *)(param_1 + 0xe9) & 0x20 | 0x40;
    *(short *)(param_2 + 0xc2) = (short)uVar5;
  }
  if ((((*(ulong *)(param_2 + 0x90) >> 0x21 & 1) != 0) && ((uVar5 >> 7 & 1) == 0)) &&
     (((*(byte *)(param_1 + 0x9a) >> 4 & 1) != 0 || (*(long *)(param_1 + 0x78) == 0)))) {
    *(ulong *)(param_2 + 0x90) = *(ulong *)(param_2 + 0x90) & 0xfffffffdffffffff;
    if ((*(long *)(param_1 + 0x58) == 0) ||
       ((*(byte *)(*(long *)(param_1 + 0x58) + 4) >> 5 & 1) == 0)) {
      pbVar8 = *(byte **)(param_1 + 0x90);
      if (pbVar8 == (byte *)0x0) {
        uVar14 = 0x41400000;
      }
      else {
        bVar2 = *pbVar8;
        uVar11 = (uint)bVar2;
        if (bVar2 < 2) {
          uVar11 = 1;
        }
        uVar10 = (ulong)uVar11;
        pbVar12 = pbVar8 + ((ulong)bVar2 & 0xfc);
        uVar14 = 0x41400000;
        do {
          pbVar12 = pbVar12 + 4;
          pbVar8 = pbVar8 + 1;
          if (*pbVar8 == 0x21) {
            uVar14 = *(undefined4 *)pbVar12;
            break;
          }
          uVar10 = uVar10 - 1;
        } while (uVar10 != 0);
      }
      *(undefined4 *)(param_2 + 0x38) = uVar14;
    }
    else {
      uVar14 = FUN__text__00419e90(*_DAT_008a45f0,param_1 + 0x48,0x25,param_4);
      uVar5 = (uint)*(ushort *)(param_2 + 0xc2);
      *(undefined4 *)(param_2 + 0x38) = uVar14;
    }
    uVar5 = uVar5 & 0xfffffe00 | uVar5 & 0x7f | (*(byte *)(param_1 + 0xe9) >> 6 & 1) << 8 | 0x80;
    *(short *)(param_2 + 0xc2) = (short)uVar5;
  }
  if (((uVar5 >> 2 & 1) == 0) &&
     (((*(ulong *)(param_1 + 0x98) & 0x7f83c00000) != 0 || (*(long *)(param_1 + 0x78) == 0)))) {
    *(undefined8 *)(param_2 + 0x18) = 0;
    *(undefined8 *)(param_2 + 0x20) = 0;
    *(undefined8 *)(param_2 + 0x3c) = 0;
    *(undefined8 *)(param_2 + 0x44) = 0;
    *(undefined8 *)(param_2 + 0x4c) = 0;
    *(undefined8 *)(param_2 + 0x54) = 0;
    if (*(long *)(param_1 + 0x88) == 0) {
      if ((*(ulong *)(param_1 + 0x98) & 0x7f83c00000) != 0) {
        *(undefined8 *)(param_2 + 0x84) = 0;
        *(undefined8 *)(param_2 + 0x7c) = 0;
      }
    }
    else {
      *(ulong *)(param_2 + 0x90) = *(ulong *)(param_2 + 0x90) | 0xf000000000780000;
      *(ulong *)(param_2 + 0x98) = *(ulong *)(param_2 + 0x98) | 0xf;
      *(undefined4 *)(param_2 + 0x7c) = **(undefined4 **)(param_1 + 0x88);
      *(undefined4 *)(param_2 + 0x80) = *(undefined4 *)(*(long *)(param_1 + 0x88) + 4);
      *(undefined4 *)(param_2 + 0x84) = *(undefined4 *)(*(long *)(param_1 + 0x88) + 8);
      *(undefined4 *)(param_2 + 0x88) = *(undefined4 *)(*(long *)(param_1 + 0x88) + 0xc);
    }
    uVar5 = uVar5 | 4;
    *(short *)(param_2 + 0xc2) = (short)uVar5;
  }
  if (((uVar5 >> 1 & 1) == 0) &&
     (((*(ulong *)(param_1 + 0x98) & 0x18000200000) != 0 || (*(long *)(param_1 + 0x78) == 0)))) {
    *(undefined4 *)(param_2 + 0x28) = 0;
    *(ushort *)(param_2 + 0xc2) = (ushort)uVar5 | 2;
    uVar5 = uVar5 & 0xfffffffe | 2 | *(uint *)(param_1 + 0xd2) >> 0x12 & 1;
    *(short *)(param_2 + 0xc2) = (short)uVar5;
    *(ulong *)(param_2 + 0x90) = *(ulong *)(param_2 + 0x90) | 0x800000;
    *(ulong *)(param_2 + 0x98) = *(ulong *)(param_2 + 0x98) | 0x30;
  }
  lVar13 = _DAT_008a4a70;
  if (((uVar5 >> 3 & 1) != 0) || (*(long *)(param_1 + 0x80) == 0)) goto LAB__text__00494068;
  if ((param_7 & 1) == 0) {
    *(undefined4 *)(param_2 + (ulong)*(uint *)(_DAT_008a4a70 + 0x60) * 4) = 0;
    local_70[0] = 0;
    local_70[1] = 0;
    if ((DAT_00ae9aa8 == 1) && ((*(byte *)(param_2 + 0xa3) & 1) != 0)) {
      uVar10 = 0x1000000;
      local_70[0] = 0x1000000;
      *(undefined4 *)(param_2 + (ulong)*(uint *)(lVar13 + 0x68) * 4) = 0;
    }
    else {
      uVar10 = 0;
      *(undefined4 *)(param_2 + (ulong)*(uint *)(lVar13 + 0x68) * 4) = 0;
    }
    if ((DAT_00ae9aa8 == 1) && ((*(byte *)(param_2 + 0xa3) >> 2 & 1) != 0)) {
      uVar10 = uVar10 | 0x4000000;
      local_70[0] = uVar10;
    }
    *(undefined4 *)(param_2 + (ulong)*(uint *)(lVar13 + 100) * 4) = 0;
    if ((DAT_00ae9aa8 == 1) && ((*(byte *)(param_2 + 0xa3) >> 1 & 1) != 0)) {
      local_70[0] = uVar10 | 0x2000000;
      uVar5 = *(uint *)(param_2 + 0x70);
joined_r0x00493fb8:
      if (uVar5 != 0) {
        pbVar12 = *(byte **)(param_2 + 0x68);
        pbVar8 = pbVar12;
        do {
          while ((*(ulong *)((long)local_70 + ((ulong)(*pbVar8 >> 3) & 0x18)) >>
                  ((ulong)*pbVar8 & 0x3f) & 1) != 0) {
            uVar5 = uVar5 - 1;
            if (pbVar8 < pbVar12 + (ulong)uVar5 * 0x10) {
              memmove(pbVar8,pbVar8 + 0x10,
                      (ulong)(uint)((int)(pbVar12 + (ulong)uVar5 * 0x10) - (int)pbVar8) & 0xfffffff0
                     );
              uVar5 = *(int *)(param_2 + 0x70) - 1;
              pbVar12 = *(byte **)(param_2 + 0x68);
            }
            *(uint *)(param_2 + 0x70) = uVar5;
            if (pbVar8 == pbVar12 + (ulong)uVar5 * 0x10) goto LAB__text__00494050;
          }
          pbVar8 = pbVar8 + 0x10;
        } while (pbVar8 != pbVar12 + (ulong)uVar5 * 0x10);
      }
    }
    else if (uVar10 != 0) {
      uVar5 = *(uint *)(param_2 + 0x70);
      goto joined_r0x00493fb8;
    }
LAB__text__00494050:
    uVar5 = (uint)*(ushort *)(param_2 + 0xc2);
  }
  uVar5 = uVar5 | 8;
  *(short *)(param_2 + 0xc2) = (short)uVar5;
  *(ulong *)(param_2 + 0x90) = *(ulong *)(param_2 + 0x90) | 0x7000000;
LAB__text__00494068:
  if (((uVar5 >> 4 & 1) == 0) &&
     (((*(byte *)(param_1 + 0x9b) >> 6 & 1) != 0 || (*(long *)(param_1 + 0x78) == 0)))) {
    *(undefined4 *)(param_2 + 100) = 0;
    *(ushort *)(param_2 + 0xc2) = (ushort)uVar5 | 0x10;
    *(undefined4 *)(param_2 + 0x8c) = *(undefined4 *)(param_1 + 0xa0);
    *(ulong *)(param_2 + 0x98) = *(ulong *)(param_2 + 0x98) | 0x100;
  }
  FUN__text__00466110(param_1,param_2,param_4);
  FUN__text__004668c0(param_1,param_2,param_3,param_4);
  *(ulong *)(param_2 + 0x90) = *(ulong *)(param_2 + 0x90) & 0xffffffff807ffff;
  *(ulong *)(param_2 + 0x98) = *(ulong *)(param_2 + 0x98) & 0xfffffffffffffec0;
  if ((param_5 != (float *)0x0) && (pbVar8 = *(byte **)(param_1 + 0xd8), pbVar8 != (byte *)0x0)) {
    bVar2 = *pbVar8;
    uVar10 = 0;
    uVar5 = (uint)bVar2;
    if (bVar2 < 2) {
      uVar5 = 1;
    }
    pfVar9 = (float *)(pbVar8 + ((ulong)bVar2 & 0xfc) + 4);
    do {
      if (pbVar8[uVar10 + 1] == 0) {
        fVar15 = pfVar9[1] - *pfVar9;
        if (fVar15 == 0.0) {
          *param_5 = *pfVar9 + 0.0 + *param_5;
          pbVar8 = *(byte **)(param_1 + 0xd8);
        }
        else {
          lVar13 = *_DAT_008a45e8 * 0x5851f42d4c957f2d + 1;
          *_DAT_008a45e8 = lVar13;
          *param_5 = fVar15 * 4.656613e-10 * (float)(uint)((ulong)lVar13 >> 0x21) + *pfVar9 +
                     *param_5;
          pbVar8 = *(byte **)(param_1 + 0xd8);
        }
        if (pbVar8 == (byte *)0x0) goto joined_r0x00494540;
        break;
      }
      uVar10 = uVar10 + 1;
      pfVar9 = pfVar9 + 2;
    } while (uVar5 != uVar10);
    bVar2 = *pbVar8;
    uVar10 = 0;
    uVar5 = (uint)bVar2;
    if (bVar2 < 2) {
      uVar5 = 1;
    }
    pfVar9 = (float *)(pbVar8 + ((ulong)bVar2 & 0xfc) + 4);
    do {
      if (pbVar8[uVar10 + 1] == 6) {
        fVar15 = pfVar9[1] - *pfVar9;
        if (fVar15 == 0.0) {
          param_5[1] = *pfVar9 + 0.0 + param_5[1];
          pbVar8 = *(byte **)(param_1 + 0xd8);
        }
        else {
          lVar13 = *_DAT_008a45e8 * 0x5851f42d4c957f2d + 1;
          *_DAT_008a45e8 = lVar13;
          param_5[1] = fVar15 * 4.656613e-10 * (float)(uint)((ulong)lVar13 >> 0x21) + *pfVar9 +
                       param_5[1];
          pbVar8 = *(byte **)(param_1 + 0xd8);
        }
        if (pbVar8 == (byte *)0x0) goto joined_r0x00494540;
        break;
      }
      uVar10 = uVar10 + 1;
      pfVar9 = pfVar9 + 2;
    } while (uVar5 != uVar10);
    bVar2 = *pbVar8;
    uVar10 = 0;
    uVar5 = (uint)bVar2;
    if (bVar2 < 2) {
      uVar5 = 1;
    }
    pfVar9 = (float *)(pbVar8 + ((ulong)bVar2 & 0xfc) + 4);
    do {
      if (pbVar8[uVar10 + 1] == 2) {
        fVar15 = pfVar9[1] - *pfVar9;
        if (fVar15 == 0.0) {
          param_5[2] = *pfVar9 + 0.0 + param_5[2];
          pbVar8 = *(byte **)(param_1 + 0xd8);
        }
        else {
          lVar13 = *_DAT_008a45e8 * 0x5851f42d4c957f2d + 1;
          *_DAT_008a45e8 = lVar13;
          param_5[2] = fVar15 * 4.656613e-10 * (float)(uint)((ulong)lVar13 >> 0x21) + *pfVar9 +
                       param_5[2];
          pbVar8 = *(byte **)(param_1 + 0xd8);
        }
        if (pbVar8 == (byte *)0x0) goto joined_r0x00494540;
        break;
      }
      uVar10 = uVar10 + 1;
      pfVar9 = pfVar9 + 2;
    } while (uVar5 != uVar10);
    bVar2 = *pbVar8;
    uVar10 = 0;
    uVar5 = (uint)bVar2;
    if (bVar2 < 2) {
      uVar5 = 1;
    }
    pfVar9 = (float *)(pbVar8 + ((ulong)bVar2 & 0xfc) + 4);
    do {
      if (pbVar8[uVar10 + 1] == 3) {
        fVar15 = pfVar9[1] - *pfVar9;
        if (fVar15 == 0.0) {
          param_5[3] = *pfVar9 + 0.0 + param_5[3];
          pbVar8 = *(byte **)(param_1 + 0xd8);
        }
        else {
          lVar13 = *_DAT_008a45e8 * 0x5851f42d4c957f2d + 1;
          *_DAT_008a45e8 = lVar13;
          param_5[3] = fVar15 * 4.656613e-10 * (float)(uint)((ulong)lVar13 >> 0x21) + *pfVar9 +
                       param_5[3];
          pbVar8 = *(byte **)(param_1 + 0xd8);
        }
        if (pbVar8 == (byte *)0x0) goto joined_r0x00494540;
        break;
      }
      uVar10 = uVar10 + 1;
      pfVar9 = pfVar9 + 2;
    } while (uVar5 != uVar10);
    bVar2 = *pbVar8;
    uVar5 = (uint)bVar2;
    if (bVar2 < 2) {
      uVar5 = 1;
    }
    uVar10 = (ulong)uVar5;
    pfVar9 = (float *)(pbVar8 + ((ulong)bVar2 & 0xfc) + 4);
    do {
      pbVar8 = pbVar8 + 1;
      if (*pbVar8 == 4) {
        fVar15 = pfVar9[1] - *pfVar9;
        if (fVar15 == 0.0) {
          param_5[4] = *pfVar9 + 0.0 + param_5[4];
        }
        else {
          lVar13 = *_DAT_008a45e8 * 0x5851f42d4c957f2d + 1;
          *_DAT_008a45e8 = lVar13;
          param_5[4] = fVar15 * 4.656613e-10 * (float)(uint)((ulong)lVar13 >> 0x21) + *pfVar9 +
                       param_5[4];
        }
        break;
      }
      pfVar9 = pfVar9 + 2;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
joined_r0x00494540:
  if (((param_6 != 0) && (*(long *)(param_1 + 0x58) != 0)) &&
     (*(char *)(*(long *)(param_1 + 0x58) + 0x20) != '\0')) {
    uVar5 = *(uint *)(param_6 + 0x148);
    uVar11 = *(uint *)(param_6 + 0x14c);
    if (uVar11 <= uVar5) {
      iVar1 = uVar11 + (uVar11 >> 1);
      if (uVar11 == 0) {
        iVar1 = 1;
      }
      uVar10 = FUN__text__00462e00(param_6,iVar1);
      if ((uVar10 & 1) == 0) {
        return 0x34;
      }
      if (*(uint *)(param_6 + 0x14c) <= uVar5) {
        return 0x34;
      }
      uVar5 = *(uint *)(param_6 + 0x148);
    }
    *(uint *)(param_6 + 0x148) = uVar5 + 1;
    if (*(long *)(param_6 + 0x140) == 0) {
      return 0x34;
    }
    plVar4 = (long *)(*(long *)(param_6 + 0x140) + (ulong)uVar5 * 0x28);
    *(undefined4 *)(plVar4 + 2) = 0;
    plVar4[3] = 0;
    plVar4[4] = 0;
    *plVar4 = param_1;
    plVar4[1] = param_1 + 8;
    FUN__text__0046d390(param_1 + 0x48);
  }
  plVar4 = *(long **)(param_1 + 0x78);
  if (((param_7 & 1) == 0) || (plVar6 = *(long **)(param_1 + 0x80), plVar6 == (long *)0x0)) {
    if (plVar4 != (long *)0x0 && plVar4 != param_8) {
      (**(code **)(*plVar4 + 0x158))
                (plVar4,param_2,param_3,param_4,param_5,param_6,param_7 & 1,param_8);
    }
  }
  else {
    if (plVar4 != (long *)0x0 && plVar4 != param_8) {
      (**(code **)(*plVar4 + 0x158))(plVar4,param_2,param_3,param_4,param_5,param_6,0,param_8);
      plVar6 = *(long **)(param_1 + 0x80);
    }
    (**(code **)(*plVar6 + 0x158))(plVar6,param_2,param_3,param_4,param_5,param_6,0,param_8);
  }
  puVar7 = *(undefined8 **)(param_1 + 0xe0);
  if ((puVar7 != (undefined8 *)0x0) && (*(uint *)(puVar7 + 1) != 0)) {
    lVar13 = (ulong)*(uint *)(puVar7 + 1) << 3;
    puVar7 = (undefined8 *)*puVar7;
    do {
      FUN__text__00497860(*puVar7,param_1,param_2,param_3,param_4,param_6);
      lVar13 = lVar13 + -8;
      puVar7 = puVar7 + 1;
    } while (lVar13 != 0);
  }
  return 1;
}


