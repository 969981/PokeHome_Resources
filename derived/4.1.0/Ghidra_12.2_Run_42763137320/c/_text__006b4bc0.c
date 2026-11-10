/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006b4bc0; name: FUN_.text__006b4bc0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__006b4bc0(long *param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  byte bVar10;
  undefined8 uVar11;
  ulong *puVar12;
  long lVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  uint uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  undefined8 local_90;
  ulong uStack_88;
  ulong local_80;
  ulong uStack_78;
  ulong local_70;
  ulong uStack_68;
  undefined8 local_28;
  
  local_90 = 0;
  (**(code **)(*param_1 + 0x60))(param_1,&local_90);
  local_28 = 0;
  (**(code **)(*param_1 + 0x68))(param_1,&local_28);
  fVar8 = (float)local_28;
  fVar9 = local_28._4_4_;
  fVar6 = (float)local_90;
  fVar7 = local_90._4_4_;
  local_70 = 0;
  uStack_68 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_90 = 0;
  uStack_88 = 0;
  FUN__text__006c1910(&local_90,param_2);
  if ((*(byte *)(param_2 + 0x194) >> 3 & 1) != 0) {
    local_28 = 0;
    (**(code **)(*param_1 + 0x60))(param_1,&local_28);
    bVar10 = *(byte *)((long)param_1 + 0x5b) >> 2 & 3;
    if (bVar10 == 0) {
      fVar20 = 0.0;
    }
    else if (bVar10 == 2) {
      fVar20 = local_28._4_4_;
    }
    else {
      fVar20 = -local_28._4_4_;
    }
    fVar24 = (float)local_90 * 0.0;
    fVar25 = (float)(local_90 >> 0x20);
    fVar26 = fVar25 * 0.0;
    fVar27 = (float)uStack_88 * 0.0;
    fVar18 = (float)(uStack_88 >> 0x20);
    fVar28 = fVar18 * 0.0;
    fVar19 = (float)local_80;
    fVar21 = (float)(local_80 >> 0x20);
    fVar22 = (float)uStack_78;
    fVar23 = (float)(uStack_78 >> 0x20);
    fVar29 = (float)local_70;
    fVar30 = (float)(local_70 >> 0x20);
    fVar31 = (float)uStack_68;
    fVar32 = (float)(uStack_68 >> 0x20);
    local_90 = CONCAT44(fVar25 + fVar21 * 0.0 + fVar30 * 0.0 + 0.0,
                        (float)local_90 + fVar19 * 0.0 + fVar29 * 0.0 + 0.0);
    uStack_88 = CONCAT44(fVar18 + fVar23 * 0.0 + fVar32 * 0.0 + 0.0,
                         (float)uStack_88 + fVar22 * 0.0 + fVar31 * 0.0 + 0.0);
    local_80 = CONCAT44(fVar21 + fVar26 + fVar30 * 0.0 + 0.0,fVar19 + fVar24 + fVar29 * 0.0 + 0.0);
    uStack_78 = CONCAT44(fVar20 + fVar23 + fVar28 + fVar32 * 0.0,
                         fVar22 + fVar27 + fVar31 * 0.0 + 0.0);
    local_70 = CONCAT44(fVar30 + fVar26 + fVar21 * 0.0 + 0.0,fVar29 + fVar24 + fVar19 * 0.0 + 0.0);
    uStack_68 = CONCAT44(fVar32 + fVar28 + fVar23 * 0.0 + 0.0,fVar31 + fVar27 + fVar22 * 0.0 + 0.0);
  }
  bVar10 = (**(code **)(*param_1 + 0x50))(param_1);
  uVar5 = uRam0000000000724ae8;
  uVar4 = _DAT_00724ae0;
  uVar3 = uRam0000000000724938;
  uVar2 = _DAT_00724930;
  if (bVar10 != 0) {
    uVar17 = 0;
    fVar20 = 1.0 / ((fVar8 + fVar6) - fVar8);
    fVar25 = 1.0 / ((fVar9 - fVar7) - fVar9);
    do {
      uVar11 = (**(code **)(*param_1 + 0x58))(param_1,uVar17);
      puVar12 = (ulong *)FUN__text__006add38(uVar11,param_2);
      puVar12[1] = (ulong)(uint)-((fVar8 + fVar8 + fVar6) * fVar20) << 0x20;
      *puVar12 = (ulong)(uint)(fVar20 + fVar20);
      puVar12[3] = (ulong)(uint)-((fVar9 + (fVar9 - fVar7)) * fVar25) << 0x20;
      puVar12[2] = (ulong)(uint)(fVar25 + fVar25) << 0x20;
      puVar12[5] = uVar5;
      puVar12[4] = uVar4;
      puVar12[7] = uVar3;
      puVar12[6] = uVar2;
      puVar12[9] = uStack_88;
      puVar12[8] = local_90;
      puVar12[0xb] = uStack_78;
      puVar12[10] = local_80;
      puVar12[0xd] = uStack_68;
      puVar12[0xc] = local_70;
      if ((*(byte *)((long)param_1 + 0x62) >> 1 & 1) == 0) {
        bVar15 = 0;
        bVar14 = 0;
      }
      else {
        lVar13 = param_1[0x15] + 0xc;
        uVar1 = *(uint *)(param_1[0x15] + 0x10);
        lVar13 = *(long *)(lVar13 + (ulong)(*(int *)(lVar13 + (ulong)uVar1 + 4 +
                                                              (ulong)*(byte *)(lVar13 + (ulong)(*(
                                                  int *)(lVar13 + (ulong)uVar1 + 4) + uVar1) + 0xc)
                                                  * 4) + uVar1) + 8);
        bVar15 = 0;
        if (*(long *)(lVar13 + 0x58) != 0) {
          if ((*(byte *)(lVar13 + 0x228) >> 2 & 1) == 0) {
            bVar14 = *(byte *)(*(long *)(lVar13 + 0x58) + 8) >> 5 & 1;
          }
          else {
            bVar14 = 0;
          }
          bVar15 = 0;
          if (*(char *)(lVar13 + 0x98) == '\0') {
            bVar15 = bVar14;
          }
        }
        if (*(long *)(lVar13 + 8) == 0) {
          bVar14 = 0;
        }
        else {
          if ((*(byte *)(lVar13 + 0x228) >> 2 & 1) == 0) {
            bVar16 = *(byte *)(*(long *)(lVar13 + 8) + 4) >> 1 & 1;
          }
          else {
            bVar16 = 0;
          }
          bVar14 = 0;
          if (*(char *)(lVar13 + 0x54) == '\0') {
            bVar14 = bVar16;
          }
        }
      }
      if ((bVar15 != 0) || (bVar14 != 0)) {
        *(undefined4 *)((long)puVar12 + 0xdc) = 0x3b808081;
      }
      uVar17 = uVar17 + 1;
    } while (bVar10 != uVar17);
  }
  return;
}


