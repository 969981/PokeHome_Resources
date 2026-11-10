/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00417e70; name: FUN_.text__00417e70
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00417e70(long param_1)

{
  byte bVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  uint uVar5;
  byte *pbVar6;
  float *pfVar7;
  long lVar8;
  uint uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float local_84;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 local_70;
  undefined1 local_68;
  undefined1 local_60;
  undefined8 local_58;
  float local_48;
  undefined1 uStack_41;
  
  lVar8 = *(long *)(param_1 + 0x68);
  uVar3 = FUN__text__0045cdec((long *)(param_1 + 0x68));
  fVar14 = *(float *)(param_1 + 0x14);
  uVar4 = FUN__text__004185c0(lVar8,&local_48,&local_84);
  if ((uVar4 & 1) == 0) {
    fVar10 = *(float *)(param_1 + 0x1d4);
  }
  else {
    *(float *)(param_1 + 0x1d0) = local_48;
    fVar10 = 1.0 - 1.0 / local_84;
    *(float *)(param_1 + 0x1d4) = fVar10;
  }
  fVar11 = _DAT_0073b1fc;
  local_68 = 0xff;
  local_60 = 0xff;
  local_80 = 0;
  fVar12 = *(float *)(param_1 + 0x1c0) - (fVar14 + local_48);
  local_78 = 0;
  local_70 = 0;
  local_58 = 0;
  fVar10 = fVar12 * fVar10;
  if (fVar12 <= 0.0) {
    fVar10 = -0.0;
  }
  if ((*(ulong **)(lVar8 + 0x58) == (ulong *)0x0) ||
     ((**(ulong **)(lVar8 + 0x58) >> ((ulong)_DAT_0073b324 & 0x3f) & 1) == 0)) {
    pbVar6 = *(byte **)(lVar8 + 0x90);
    if (pbVar6 != (byte *)0x0) {
      bVar1 = *pbVar6;
      uVar5 = (uint)bVar1;
      if (bVar1 < 2) {
        uVar5 = 1;
      }
      uVar4 = (ulong)uVar5;
      pfVar7 = (float *)(pbVar6 + ((ulong)bVar1 & 0xfc));
      do {
        pfVar7 = pfVar7 + 1;
        pbVar6 = pbVar6 + 1;
        if (*pbVar6 == 0x1d) {
          fVar11 = *pfVar7;
          bVar1 = *(byte *)(lVar8 + 0x19c);
          *(byte *)(lVar8 + 0x19c) = bVar1 & 0xef;
          goto joined_r0x00418290;
        }
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
    bVar1 = *(byte *)(lVar8 + 0x19c);
    uVar5 = (uint)bVar1;
    *(byte *)(lVar8 + 0x19c) = bVar1 & 0xef;
    uVar9 = uVar5;
    if ((bVar1 >> 4 & 1) == 0) goto LAB__text__00418008;
LAB__text__00417f64:
    if (fVar11 <= 0.0) {
      fVar11 = 0.0;
      *(undefined4 *)(param_1 + 0x1cc) = 0;
      goto joined_r0x00418010;
    }
    fVar12 = (float)NEON_ucvtf(_DAT_008ab030);
    fVar11 = expf((float)(int)-(uint)_DAT_008ab03c / (fVar11 * fVar12));
    *(float *)(param_1 + 0x1cc) = fVar11;
    if ((uVar9 >> 3 & 1) == 0) goto LAB__text__00418014;
LAB__text__00418184:
    fVar10 = fVar10 + local_48;
    fVar12 = *(float *)(param_1 + 0x1c4);
    if (fVar12 <= fVar10) {
      *(float *)(param_1 + 0x1c4) = fVar10;
      *(byte *)(param_1 + 0x1bc) = *(byte *)(param_1 + 0x1bc) & 0xfd | (fVar12 < fVar10) << 1;
    }
    else {
      fVar11 = (fVar12 - fVar10) * fVar11;
      fVar10 = fVar11 + fVar10;
      *(float *)(param_1 + 0x1c4) = fVar10;
      if (0.5 <= fVar11) {
        bVar1 = *(byte *)(param_1 + 0x1bc) | 2;
        goto LAB__text__004181cc;
      }
    }
    local_80 = CONCAT44(local_80._4_4_,fVar10);
    *(float *)(param_1 + 0x1c8) = fVar10 + fVar14;
    iVar2 = FUN__text__00461bf0(lVar8);
  }
  else {
    fVar11 = (float)FUN__text__00419e90(*_DAT_008a45f0,lVar8 + 0x48,(ulong)_DAT_0073b324,&local_80);
    bVar1 = *(byte *)(lVar8 + 0x19c);
    *(byte *)(lVar8 + 0x19c) = bVar1 & 0xef;
joined_r0x00418290:
    uVar5 = (uint)bVar1;
    uVar9 = (uint)bVar1;
    if ((bVar1 >> 4 & 1) != 0) goto LAB__text__00417f64;
LAB__text__00418008:
    fVar11 = *(float *)(param_1 + 0x1cc);
    uVar9 = uVar5;
joined_r0x00418010:
    if ((uVar9 >> 3 & 1) != 0) goto LAB__text__00418184;
LAB__text__00418014:
    fVar10 = fVar10 + local_48;
    fVar12 = 0.0;
    if ((-37.0 <= fVar10 * 0.05) && (fVar10 * 0.05 <= 37.0)) {
      uVar5 = (uint)(fVar10 * 1393317.6 + 1.0653532e+09);
      fVar12 = (float)(uVar5 & 0x7fffff | 0x3f800000);
      fVar12 = (fVar12 * (fVar12 * 0.32518977 + 0.020805772) + 0.65304345) *
               (float)(uVar5 & 0xff800000);
    }
    fVar13 = *(float *)(param_1 + 0x1c4);
    if (fVar12 < fVar13) {
      fVar12 = fVar12 + fVar11 * (fVar13 - fVar12);
      *(float *)(param_1 + 0x1c4) = fVar12;
      fVar11 = (float)((uint)fVar12 & 0x7fffff | 0x3f800000);
      fVar13 = fVar11 + 1.0;
      fVar11 = ((float)((uint)fVar12 >> 0x17 & 0xff) * 0.30103 + -38.230812 +
               (fVar11 * 1.1581186 * fVar11 * fVar11 + -1.1581186) / (fVar13 * fVar13 * fVar13)) *
               20.0;
      if (0.5 <= fVar11 - fVar10) {
        *(byte *)(param_1 + 0x1bc) = *(byte *)(param_1 + 0x1bc) | 2;
      }
      local_80 = CONCAT44(local_80._4_4_,fVar11);
      *(float *)(param_1 + 0x1c8) = fVar11 + fVar14;
      iVar2 = FUN__text__00461bf0(lVar8);
      goto joined_r0x00418218;
    }
    *(float *)(param_1 + 0x1c4) = fVar12;
    bVar1 = *(byte *)(param_1 + 0x1bc) & 0xfd | (fVar13 < fVar12) << 1;
LAB__text__004181cc:
    *(byte *)(param_1 + 0x1bc) = bVar1;
    local_80 = CONCAT44(local_80._4_4_,fVar10);
    *(float *)(param_1 + 0x1c8) = fVar10 + fVar14;
    iVar2 = FUN__text__00461bf0(lVar8);
  }
joined_r0x00418218:
  if (iVar2 != 0) {
    FUN__text__00461c40(lVar8,&local_80);
    lVar8 = FUN__text__0041a580(_DAT_008a4d78,iVar2,uVar3,&uStack_41);
    if ((lVar8 != 0) && (*(float *)(lVar8 + 0x10) < (float)local_80)) {
      *(float *)(lVar8 + 0x10) = (float)local_80;
    }
  }
  *(undefined4 *)(param_1 + 0x1c0) = 0xc5800000;
  return;
}


