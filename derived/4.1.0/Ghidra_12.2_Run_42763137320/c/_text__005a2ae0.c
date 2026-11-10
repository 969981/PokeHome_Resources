/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005a2ae0; name: FUN_.text__005a2ae0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__005a2ae0(long param_1)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  bool bVar5;
  int *piVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  long *plVar10;
  float *pfVar11;
  long lVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  long *plVar16;
  long *plVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined1 auStack_1c0 [8];
  undefined1 *local_1b8 [32];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  
  plVar16 = *(long **)(param_1 + 0x218);
  plVar17 = *(long **)(param_1 + 0x210);
  local_1b8[0] = auStack_1c0 + ((long)plVar16 - (long)plVar17) * -0x20;
  lVar13 = ((long)plVar16 - (long)plVar17) * 2;
  local_1b8[1] = local_1b8[0];
  local_1b8[2] = local_1b8[0] + lVar13;
  local_1b8[3] = local_1b8[2];
  local_1b8[4] = local_1b8[2] + lVar13;
  local_1b8[5] = local_1b8[4];
  local_1b8[6] = local_1b8[4] + lVar13;
  local_1b8[7] = local_1b8[6];
  local_1b8[8] = local_1b8[6] + lVar13;
  local_1b8[9] = local_1b8[8];
  local_1b8[10] = local_1b8[8] + lVar13;
  local_1b8[0xb] = local_1b8[10];
  local_1b8[0xc] = local_1b8[10] + lVar13;
  local_1b8[0xd] = local_1b8[0xc];
  local_1b8[0xe] = local_1b8[0xc] + lVar13;
  local_1b8[0xf] = local_1b8[0xe];
  local_1b8[0x10] = local_1b8[0xe] + lVar13;
  local_1b8[0x11] = local_1b8[0x10];
  local_1b8[0x12] = local_1b8[0x10] + lVar13;
  local_1b8[0x13] = local_1b8[0x12];
  local_1b8[0x14] = local_1b8[0x12] + lVar13;
  local_1b8[0x15] = local_1b8[0x14];
  local_1b8[0x16] = local_1b8[0x14] + lVar13;
  local_1b8[0x17] = local_1b8[0x16];
  local_1b8[0x18] = local_1b8[0x16] + lVar13;
  local_1b8[0x19] = local_1b8[0x18];
  local_1b8[0x1a] = local_1b8[0x18] + lVar13;
  local_1b8[0x1b] = local_1b8[0x1a];
  local_1b8[0x1c] = local_1b8[0x1a] + lVar13;
  local_1b8[0x1d] = local_1b8[0x1c];
  local_1b8[0x1e] = local_1b8[0x1c] + lVar13;
  local_1b8[0x1f] = local_1b8[0x1c] + lVar13;
  plVar10 = plVar16;
  if ((long)plVar16 - (long)plVar17 != 0) {
    lVar13 = 0;
    do {
      lVar12 = lVar13;
      if (*plVar17 == 0) {
LAB__text__005a2c78:
        if (plVar17 != plVar16) {
          plVar7 = plVar17 + 1;
          if (plVar7 != plVar16) goto LAB__text__005a2cb4;
          plVar10 = plVar17;
        }
        break;
      }
      puVar15 = *(undefined8 **)(*plVar17 + 0x60);
      if (puVar15 != (undefined8 *)0x0) {
        plVar7 = (long *)(**(code **)*puVar15)(puVar15);
        plVar8 = (long *)FUN__text__005a44a8();
        if (plVar8 != plVar7) {
          do {
            plVar7 = (long *)*plVar7;
          } while (plVar7 != plVar8 && plVar7 != (long *)0x0);
          if (plVar7 == (long *)0x0) goto LAB__text__005a2c54;
        }
        plVar7 = puVar15 + -10;
        uVar9 = (**(code **)(*plVar7 + 0x58))(plVar7);
        if ((uVar9 & 1) != 0) {
          lVar12 = lVar13 + 1;
          puVar14 = (undefined8 *)local_1b8[(long)*(int *)(puVar15 + 0xb) * 2 + 1];
          local_1b8[(long)*(int *)(puVar15 + 0xb) * 2 + 1] = (undefined1 *)(puVar14 + 2);
          *puVar14 = plVar7;
          puVar14[1] = lVar13;
          if (*(int *)(param_1 + 0x248) != 0) {
            (**(code **)(*plVar7 + 0x48))(plVar7);
          }
        }
      }
LAB__text__005a2c54:
      if ((*plVar17 == 0) || (*(int *)(*plVar17 + 0x54) == 0)) goto LAB__text__005a2c78;
      plVar17 = plVar17 + 1;
      lVar13 = lVar12;
    } while (plVar17 != plVar16);
  }
  goto LAB__text__005a2da4;
LAB__text__005a2cb4:
  do {
    if (*plVar7 != 0) {
      puVar15 = *(undefined8 **)(*plVar7 + 0x60);
      if (puVar15 == (undefined8 *)0x0) {
LAB__text__005a2d50:
        lVar13 = *plVar7;
      }
      else {
        plVar10 = (long *)(**(code **)*puVar15)(puVar15);
        plVar8 = (long *)FUN__text__005a44a8();
        if (plVar8 != plVar10) {
          do {
            plVar10 = (long *)*plVar10;
          } while (plVar10 != plVar8 && plVar10 != (long *)0x0);
          if (plVar10 == (long *)0x0) goto LAB__text__005a2d50;
        }
        plVar10 = puVar15 + -10;
        uVar9 = (**(code **)(*plVar10 + 0x58))(plVar10);
        if ((uVar9 & 1) != 0) {
          lVar13 = lVar12 + 1;
          puVar14 = (undefined8 *)local_1b8[(long)*(int *)(puVar15 + 0xb) * 2 + 1];
          local_1b8[(long)*(int *)(puVar15 + 0xb) * 2 + 1] = (undefined1 *)(puVar14 + 2);
          *puVar14 = plVar10;
          puVar14[1] = lVar12;
          lVar12 = lVar13;
          if (*(int *)(param_1 + 0x248) != 0) {
            (**(code **)(*plVar10 + 0x48))(plVar10);
            lVar13 = *plVar7;
            goto joined_r0x005a2d58;
          }
        }
        lVar13 = *plVar7;
      }
joined_r0x005a2d58:
      if ((lVar13 != 0) && (*(int *)(lVar13 + 0x54) != 0)) {
        if (*plVar17 != 0) {
          (**(code **)(*(long *)(*plVar17 + 0x48) + 0x18))();
          *plVar17 = 0;
        }
        lVar13 = *plVar7;
        *plVar7 = 0;
        *plVar17 = lVar13;
        plVar17 = plVar17 + 1;
      }
    }
    plVar7 = plVar7 + 1;
    plVar10 = plVar17;
  } while (plVar7 != plVar16);
LAB__text__005a2da4:
  plVar17 = *(long **)(param_1 + 0x218);
  if (plVar10 != plVar17) {
    if ((long *)((long)plVar10 + ((long)plVar17 - (long)plVar10)) != plVar17) {
      lVar13 = (long)plVar17 - (long)plVar10 >> 3;
      plVar16 = plVar10;
      do {
        if (*plVar16 != 0) {
          (**(code **)(*(long *)(*plVar16 + 0x48) + 0x18))();
          *plVar16 = 0;
        }
        lVar12 = plVar16[lVar13];
        plVar16[lVar13] = 0;
        plVar10 = plVar16 + 1;
        *plVar16 = lVar12;
        plVar16 = plVar10;
      } while (plVar10 + lVar13 != plVar17);
      plVar17 = *(long **)(param_1 + 0x218);
    }
    if (plVar17 != plVar10) {
      do {
        plVar16 = plVar17 + -1;
        if (*plVar16 != 0) {
          (**(code **)(*(long *)(*plVar16 + 0x48) + 0x18))();
          plVar17[-1] = 0;
        }
        plVar17 = plVar16;
      } while (plVar16 != plVar10);
    }
    *(long **)(param_1 + 0x218) = plVar10;
  }
  if (*(int *)(param_1 + 0x248) != 0) {
    lVar13 = 0;
    if (local_1b8[1] != local_1b8[0]) {
      lVar13 = LZCOUNT((long)local_1b8[1] - (long)local_1b8[0] >> 4) * -2 + 0x7e;
    }
    FUN__text__005a45a0(local_1b8[0],local_1b8[1],lVar13,1);
    lVar13 = 0;
    if (local_1b8[3] != local_1b8[2]) {
      lVar13 = LZCOUNT((long)local_1b8[3] - (long)local_1b8[2] >> 4) * -2 + 0x7e;
    }
    FUN__text__005a45a0(local_1b8[2],local_1b8[3],lVar13,1);
    lVar13 = 0;
    if (local_1b8[5] != local_1b8[4]) {
      lVar13 = LZCOUNT((long)local_1b8[5] - (long)local_1b8[4] >> 4) * -2 + 0x7e;
    }
    FUN__text__005a45a0(local_1b8[4],local_1b8[5],lVar13,1);
    lVar13 = 0;
    if (local_1b8[7] != local_1b8[6]) {
      lVar13 = LZCOUNT((long)local_1b8[7] - (long)local_1b8[6] >> 4) * -2 + 0x7e;
    }
    FUN__text__005a45a0(local_1b8[6],local_1b8[7],lVar13,1);
    lVar13 = 0;
    if (local_1b8[9] != local_1b8[8]) {
      lVar13 = LZCOUNT((long)local_1b8[9] - (long)local_1b8[8] >> 4) * -2 + 0x7e;
    }
    FUN__text__005a45a0(local_1b8[8],local_1b8[9],lVar13,1);
    lVar13 = 0;
    if (local_1b8[0xb] != local_1b8[10]) {
      lVar13 = LZCOUNT((long)local_1b8[0xb] - (long)local_1b8[10] >> 4) * -2 + 0x7e;
    }
    FUN__text__005a45a0(local_1b8[10],local_1b8[0xb],lVar13,1);
    lVar13 = 0;
    if (local_1b8[0xd] != local_1b8[0xc]) {
      lVar13 = LZCOUNT((long)local_1b8[0xd] - (long)local_1b8[0xc] >> 4) * -2 + 0x7e;
    }
    FUN__text__005a45a0(local_1b8[0xc],local_1b8[0xd],lVar13,1);
    lVar13 = 0;
    if (local_1b8[0xf] != local_1b8[0xe]) {
      lVar13 = LZCOUNT((long)local_1b8[0xf] - (long)local_1b8[0xe] >> 4) * -2 + 0x7e;
    }
    FUN__text__005a45a0(local_1b8[0xe],local_1b8[0xf],lVar13,1);
    lVar13 = 0;
    if (local_1b8[0x11] != local_1b8[0x10]) {
      lVar13 = LZCOUNT((long)local_1b8[0x11] - (long)local_1b8[0x10] >> 4) * -2 + 0x7e;
    }
    FUN__text__005a45a0(local_1b8[0x10],local_1b8[0x11],lVar13,1);
    lVar13 = 0;
    if (local_1b8[0x13] != local_1b8[0x12]) {
      lVar13 = LZCOUNT((long)local_1b8[0x13] - (long)local_1b8[0x12] >> 4) * -2 + 0x7e;
    }
    FUN__text__005a45a0(local_1b8[0x12],local_1b8[0x13],lVar13,1);
    lVar13 = 0;
    if (local_1b8[0x15] != local_1b8[0x14]) {
      lVar13 = LZCOUNT((long)local_1b8[0x15] - (long)local_1b8[0x14] >> 4) * -2 + 0x7e;
    }
    FUN__text__005a45a0(local_1b8[0x14],local_1b8[0x15],lVar13,1);
    lVar13 = 0;
    if (local_1b8[0x17] != local_1b8[0x16]) {
      lVar13 = LZCOUNT((long)local_1b8[0x17] - (long)local_1b8[0x16] >> 4) * -2 + 0x7e;
    }
    FUN__text__005a45a0(local_1b8[0x16],local_1b8[0x17],lVar13,1);
    lVar13 = 0;
    if (local_1b8[0x19] != local_1b8[0x18]) {
      lVar13 = LZCOUNT((long)local_1b8[0x19] - (long)local_1b8[0x18] >> 4) * -2 + 0x7e;
    }
    FUN__text__005a45a0(local_1b8[0x18],local_1b8[0x19],lVar13,1);
    lVar13 = 0;
    if (local_1b8[0x1b] != local_1b8[0x1a]) {
      lVar13 = LZCOUNT((long)local_1b8[0x1b] - (long)local_1b8[0x1a] >> 4) * -2 + 0x7e;
    }
    FUN__text__005a45a0(local_1b8[0x1a],local_1b8[0x1b],lVar13,1);
    lVar13 = 0;
    if (local_1b8[0x1d] != local_1b8[0x1c]) {
      lVar13 = LZCOUNT((long)local_1b8[0x1d] - (long)local_1b8[0x1c] >> 4) * -2 + 0x7e;
    }
    FUN__text__005a45a0(local_1b8[0x1c],local_1b8[0x1d],lVar13,1);
    lVar13 = 0;
    if (local_1b8[0x1f] != local_1b8[0x1e]) {
      lVar13 = LZCOUNT((long)local_1b8[0x1f] - (long)local_1b8[0x1e] >> 4) * -2 + 0x7e;
    }
    FUN__text__005a45a0(local_1b8[0x1e],local_1b8[0x1f],lVar13,1);
  }
  piVar6 = _DAT_008a0300;
  lVar13 = 0;
  bVar5 = false;
  do {
    lVar12 = *(long *)(param_1 + 0x68) + lVar13 * 0x10;
    fVar20 = *(float *)(lVar12 + 0x288);
    fVar19 = *(float *)(lVar12 + 0x28c);
    bVar2 = 0.0 < fVar20;
    bVar1 = 0.0 < fVar19;
    if (bVar1 && bVar2) {
      fVar22 = *(float *)(lVar12 + 0x280);
      fVar21 = *(float *)(lVar12 + 0x284);
      cVar3 = *(char *)(param_1 + 0x208);
joined_r0x005a3198:
      if (cVar3 != '\0') {
        fVar18 = *(float *)(DAT_008e1680 + 0x85a4);
        fVar20 = (float)(int)(fVar20 * fVar18);
        fVar19 = (float)(int)(fVar19 * fVar18);
        fVar22 = (float)(int)(fVar22 * fVar18);
        fVar21 = (float)(int)(fVar21 * fVar18);
      }
      iVar4 = *piVar6;
      local_98 = 0;
      uStack_90 = 0;
      lVar12 = *(long *)(*(long *)(param_1 + 0x60) + 0x58);
      local_a8 = 0;
      uStack_a0 = 0;
      local_b8 = 0;
      local_b0 = 0;
      FUN__text__006ebde4(&local_b8);
      local_b8 = CONCAT44(fVar21,fVar22);
      local_b0 = CONCAT44(fVar19,fVar20);
      FUN__text__006edf20(lVar12 + (long)iVar4 * 0x168,0,1,&local_b8);
    }
    else if (bVar5) {
      pfVar11 = (float *)FUN__text__005cbc88(param_1);
      fVar22 = *pfVar11;
      fVar21 = pfVar11[1];
      fVar20 = pfVar11[2];
      fVar19 = pfVar11[3];
      cVar3 = *(char *)(param_1 + 0x208);
      goto joined_r0x005a3198;
    }
    plVar10 = (long *)local_1b8[lVar13 * 2 + 1];
    for (plVar17 = (long *)local_1b8[lVar13 * 2]; plVar17 != plVar10; plVar17 = plVar17 + 2) {
      lVar12 = *(long *)(*plVar17 + 0x60);
      if (*(char *)(lVar12 + 0x108) != '\0' && *(char *)(lVar12 + 0x109) != '\0') {
        iVar4 = *piVar6;
        FUN__text__006ede40(*(long *)(*(long *)(param_1 + 0x60) + 0x58) + (long)iVar4 * 0x168,
                            *(long *)(lVar12 + 0x58) + (long)iVar4 * 0x168);
      }
    }
    lVar13 = lVar13 + 1;
    bVar5 = bVar1 && bVar2;
    if (lVar13 == 0x10) {
      return;
    }
  } while( true );
}


