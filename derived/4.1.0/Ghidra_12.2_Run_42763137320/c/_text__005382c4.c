/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005382c4; name: FUN_.text__005382c4
 */


undefined8
FUN__text__005382c4(undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,
                   undefined8 *param_4,int param_5,double *param_6,undefined8 param_7,
                   undefined8 param_8,undefined4 param_9,double *param_10,float *param_11,
                   undefined8 param_12,undefined8 param_13,long param_14)

{
  long *plVar1;
  int iVar2;
  double *pdVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  bool bVar8;
  bool bVar9;
  int iVar10;
  ulong uVar11;
  undefined8 *puVar12;
  long lVar13;
  uint uVar14;
  long lVar15;
  float fVar16;
  float fVar17;
  double dVar18;
  float fVar19;
  double dVar20;
  double dVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  double dVar26;
  float fVar27;
  double dVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  double local_148;
  double dStack_140;
  double local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined4 local_120;
  undefined8 local_118;
  long local_110;
  ulong local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  long local_e8;
  ulong local_e0;
  undefined4 local_d8;
  long local_d0;
  ulong local_c8;
  undefined4 local_c0;
  undefined8 local_b4;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 uStack_98;
  undefined4 local_94;
  double local_90;
  double dStack_88;
  double local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  
  if (*(uint *)(param_14 + 0x40) < 7) {
    pdVar3 = param_6;
    if (param_5 == 3) {
      pdVar3 = param_10;
    }
    local_90 = *pdVar3;
    dStack_88 = pdVar3[1];
    local_80 = pdVar3[2];
    local_78 = param_7;
    uStack_70 = param_8;
    uStack_98 = param_2;
    local_94 = param_3;
    local_9c = FUN__text__0051da68(&local_78,&local_90);
    local_148 = local_90 + (double)*param_11;
    dVar18 = dStack_88 + (double)param_11[1];
    dVar20 = (double)param_11[2];
    local_138 = local_80 + dVar20;
    dStack_140 = dVar18;
    local_a8 = FUN__text__0051da68(&local_78,&local_148);
    uStack_a4 = SUB84(dVar18,0);
    local_a0 = SUB84(dVar20,0);
    local_b4 = 0;
    local_ac = 0;
    uVar11 = FUN__text__005170c0(local_78,&local_9c,&local_a8,&local_b4);
    if ((uVar11 & 1) == 0) {
      return 0;
    }
    uVar14 = *(uint *)(param_14 + 0x40);
    uVar4 = *(uint *)(param_14 + 0x44);
    plVar1 = (long *)(param_14 + 0x38);
    if (param_5 == 3) {
      if (uVar4 <= uVar14) {
        iVar10 = uVar4 + (uVar4 >> 1);
        if (uVar4 == 0) {
          iVar10 = 1;
        }
        uVar11 = FUN__text__0051bfc0(plVar1,iVar10);
        if ((uVar11 & 1) == 0) {
          return 0;
        }
        if (*(uint *)(param_14 + 0x44) <= uVar14) {
          return 0;
        }
        uVar14 = *(uint *)(param_14 + 0x40);
      }
      puVar12 = (undefined8 *)*plVar1;
      if (uVar14 != 0) {
        memmove(puVar12 + 5,puVar12,(ulong)(uVar14 * 0x28));
      }
      if (puVar12 != (undefined8 *)0x0) {
        *puVar12 = 0;
        *(undefined4 *)(puVar12 + 1) = 0;
        puVar12[2] = 0;
        puVar12[3] = 0;
      }
      *(int *)(param_14 + 0x40) = *(int *)(param_14 + 0x40) + 1;
      puVar12 = *(undefined8 **)(param_14 + 0x38);
      if (puVar12 == (undefined8 *)0x0) {
        return 0;
      }
    }
    else {
      if (uVar4 <= uVar14) {
        iVar10 = uVar4 + (uVar4 >> 1);
        if (uVar4 == 0) {
          iVar10 = 1;
        }
        uVar11 = FUN__text__0051bfc0(plVar1,iVar10);
        if ((uVar11 & 1) == 0) {
          return 0;
        }
        if (*(uint *)(param_14 + 0x44) <= uVar14) {
          return 0;
        }
        uVar14 = *(uint *)(param_14 + 0x40);
      }
      *(uint *)(param_14 + 0x40) = uVar14 + 1;
      if (*(long *)(param_14 + 0x38) == 0) {
        return 0;
      }
      puVar12 = (undefined8 *)(*(long *)(param_14 + 0x38) + (ulong)uVar14 * 0x28);
      *puVar12 = 0;
      *(undefined4 *)(puVar12 + 1) = 0;
      puVar12[2] = 0;
      puVar12[3] = 0;
    }
    puVar12[2] = 0;
    puVar12[3] = local_78;
    puVar12[4] = uStack_70;
    *(undefined4 *)(puVar12 + 1) = local_ac;
    *(undefined4 *)((long)puVar12 + 0xc) = param_9;
    *puVar12 = local_b4;
    iVar10 = FUN__text__005374d0(param_4,param_6,param_10,param_14,param_13,0,0,0);
    bVar9 = iVar10 == 0;
    if ((param_5 == 3) && (iVar10 != 0)) {
      local_f8 = *param_4;
      local_e8 = 0;
      local_e0 = 0;
      local_d8 = 0;
      local_c0 = 0;
      local_d0 = 0;
      local_c8 = 0;
      uStack_f0 = 0;
      local_138 = 0.0;
      uStack_130 = 0;
      local_148 = 4.43996638039178e-317;
      dStack_140 = 0.0;
      local_128 = 0;
      local_120 = 0;
      local_118 = 0;
      local_110 = 0;
      local_108 = 0;
      uStack_100 = 0;
      if ((*(uint *)(param_14 + 0x40) < 8) &&
         (uVar11 = FUN__text__00517420(*(undefined4 *)(param_6 + 6),&local_f8,&local_90,local_78,
                                       uStack_70,param_12,&local_148,8 - *(uint *)(param_14 + 0x40))
         , (uVar11 & 1) != 0)) {
        if (-1 < (int)((int)local_108 - 1U)) {
          lVar15 = (ulong)((int)local_108 - 1U) * 0x28;
          iVar10 = (int)local_108;
          do {
            uVar14 = *(uint *)(param_14 + 0x40);
            uVar4 = *(uint *)(param_14 + 0x44);
            if (uVar4 <= uVar14) {
              iVar2 = uVar4 + (uVar4 >> 1);
              if (uVar4 == 0) {
                iVar2 = 1;
              }
              uVar11 = FUN__text__0051bfc0(plVar1,iVar2);
              bVar8 = false;
              if ((uVar11 & 1) == 0) {
                bVar9 = false;
                goto joined_r0x005387e4;
              }
              bVar9 = false;
              if (*(uint *)(param_14 + 0x44) <= uVar14) goto joined_r0x005387e4;
              uVar14 = *(uint *)(param_14 + 0x40);
            }
            lVar13 = *plVar1;
            if (1 < uVar14) {
              memmove((void *)(lVar13 + 0x50),(void *)(lVar13 + 0x28),(ulong)(uVar14 * 0x28 - 0x28))
              ;
            }
            if (lVar13 != 0) {
              *(undefined8 *)(lVar13 + 0x28) = 0;
              *(undefined4 *)(lVar13 + 0x30) = 0;
              *(undefined8 *)(lVar13 + 0x38) = 0;
              *(undefined8 *)(lVar13 + 0x40) = 0;
            }
            iVar10 = iVar10 + -1;
            puVar12 = (undefined8 *)(local_110 + lVar15);
            lVar15 = lVar15 + -0x28;
            *(int *)(param_14 + 0x40) = *(int *)(param_14 + 0x40) + 1;
            lVar13 = *(long *)(param_14 + 0x38);
            uVar6 = puVar12[4];
            uVar5 = puVar12[1];
            uVar7 = puVar12[2];
            *(undefined8 *)(lVar13 + 0x40) = puVar12[3];
            *(undefined8 *)(lVar13 + 0x48) = uVar6;
            *(undefined8 *)(lVar13 + 0x30) = uVar5;
            *(undefined8 *)(lVar13 + 0x38) = uVar7;
            *(undefined8 *)(lVar13 + 0x28) = *puVar12;
          } while (0 < iVar10);
        }
        iVar10 = FUN__text__005374d0(param_4,param_6,param_10,param_14,param_13,0,0,0);
        bVar9 = iVar10 == 0;
      }
      else {
        bVar9 = false;
      }
      bVar8 = true;
joined_r0x005387e4:
      local_148 = 4.43996638039178e-317;
      if (local_110 != 0) {
        local_148 = 4.43996638039178e-317;
        local_108 = local_108 & 0xffffffff00000000;
        FUN__text__00400fc0(0xb);
      }
      if (local_d0 != 0) {
        local_c8 = local_c8 & 0xffffffff00000000;
        FUN__text__00400fc0(9);
        local_d0 = 0;
        local_c8 = local_c8 & 0xffffffff;
      }
      if (local_e8 != 0) {
        local_e0 = local_e0 & 0xffffffff00000000;
        FUN__text__00400fc0(0xb);
      }
      if (!bVar8) {
        return 0;
      }
    }
    if (bVar9) {
      lVar15 = *(long *)(param_14 + 0x38) + (ulong)*(uint *)(param_14 + 0x40) * 0x28;
      lVar13 = *(long *)(lVar15 + -8);
      fVar29 = *(float *)(lVar13 + 0x18);
      fVar30 = *(float *)(lVar13 + 0x1c);
      fVar17 = *(float *)(lVar13 + 0x3c) * *(float *)(lVar15 + -0x24);
      fVar16 = *(float *)(lVar13 + 0x38) * *(float *)(lVar15 + -0x28);
      fVar19 = *(float *)(lVar13 + 0x40) * *(float *)(lVar15 + -0x20);
      fVar24 = *(float *)(lVar13 + 0x10);
      fVar22 = *(float *)(lVar13 + 0x14);
      fVar27 = fVar22 * fVar16 + fVar17 * fVar29 + fVar19 * fVar30;
      fVar25 = fVar24 * fVar24 - (fVar22 * fVar22 + fVar29 * fVar29 + fVar30 * fVar30);
      fVar23 = (fVar29 * fVar19 - fVar30 * fVar17) * fVar24 + fVar22 * fVar27;
      fVar31 = (fVar30 * fVar16 - fVar19 * fVar22) * fVar24 + fVar29 * fVar27;
      fVar22 = (fVar22 * fVar17 - fVar29 * fVar16) * fVar24 + fVar30 * fVar27;
      dVar18 = *(double *)(lVar13 + 0x20) + (double)(fVar23 + fVar23 + fVar16 * fVar25);
      dVar20 = *(double *)(lVar13 + 0x28) + (double)(fVar31 + fVar31 + fVar17 * fVar25);
      dVar21 = *(double *)(lVar13 + 0x30) + (double)(fVar22 + fVar22 + fVar19 * fVar25);
      *(double *)(param_14 + 0x18) = dVar21;
      *(double *)(param_14 + 8) = dVar18;
      *(double *)(param_14 + 0x10) = dVar20;
      dVar28 = param_6[2];
      dVar26 = param_6[1];
      *(float *)(param_14 + 0x20) = (float)(*param_6 - dVar18);
      *(float *)(param_14 + 0x24) = (float)(dVar26 - dVar20);
      *(float *)(param_14 + 0x28) = (float)(dVar28 - dVar21);
      return 1;
    }
  }
  return 0;
}


