/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0038dc60; name: FUN_.text__0038dc60
 */


void * FUN__text__0038dc60(void *param_1,uint param_2,short *param_3)

{
  short sVar1;
  short sVar2;
  ushort uVar3;
  uint uVar4;
  void *pvVar5;
  undefined8 uVar6;
  int extraout_w1;
  size_t sVar7;
  undefined8 *puVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  size_t sVar13;
  short *psVar14;
  short *psVar15;
  short *psVar16;
  short *psVar17;
  short *psVar18;
  undefined8 *local_90;
  undefined8 *local_88;
  undefined8 *local_80;
  long *local_78;
  undefined8 local_70;
  undefined4 local_68;
  
  psVar14 = (short *)((long)param_1 + 0x80a0);
  if (param_2 == 2) {
    psVar14 = (short *)((long)param_1 + 0x8140);
  }
  else if (param_2 == 1) {
    psVar14 = (short *)((long)param_1 + 0x80f0);
  }
  else if (param_2 != 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl();
  }
  local_78 = *(long **)((long)param_1 + 8);
  local_90 = (undefined8 *)0x0;
  local_88 = (undefined8 *)0x0;
  local_70 = 0;
  local_68 = 0;
  local_80 = (undefined8 *)0x0;
  psVar15 = param_3;
  if (*psVar14 == 0) {
    pvVar5 = param_1;
    if (psVar14[8] != 0) goto LAB__text__0038dd08;
LAB__text__0038dd58:
    uVar4 = (uint)psVar15;
    if (psVar14[0x10] != 0) goto LAB__text__0038dd64;
LAB__text__0038dde0:
    sVar1 = psVar14[0x18];
joined_r0x0038dde8:
    if (sVar1 != 0) goto LAB__text__0038ddec;
LAB__text__0038de6c:
    sVar1 = psVar14[0x20];
joined_r0x0038def8:
    if (sVar1 != 0) goto LAB__text__0038de7c;
LAB__text__0038defc:
    uVar9 = (long)local_88 - (long)local_90;
    puVar8 = local_90;
  }
  else {
    pvVar5 = (void *)FUN__text__003919d0(&local_90,psVar14);
    if (psVar14[8] == 0) goto LAB__text__0038dd58;
LAB__text__0038dd08:
    uVar4 = (uint)psVar15;
    if (local_88 != local_80) {
      uVar9 = tpidr_el0;
      uVar9 = uVar9 & 0xffffffffffffe000;
      if (*(long *)(uVar9 + 0x98) == 0x10) goto LAB__text__0038e5a4;
      *(long **)(uVar9 + *(long *)(uVar9 + 0x98) * 8 + 0x18) = local_78;
      *(long *)(uVar9 + 0x98) = *(long *)(uVar9 + 0x98) + 1;
      uVar6 = *(undefined8 *)(psVar14 + 0xc);
      *local_88 = *(undefined8 *)(psVar14 + 8);
      local_88[1] = uVar6;
      *(long *)(uVar9 + 0x98) = *(long *)(uVar9 + 0x98) + -1;
      local_88 = local_88 + 2;
      goto LAB__text__0038dd58;
    }
    pvVar5 = (void *)FUN__text__003919d0(&local_90,psVar14 + 8);
    if (psVar14[0x10] == 0) goto LAB__text__0038dde0;
LAB__text__0038dd64:
    if (local_88 != local_80) {
      uVar9 = tpidr_el0;
      uVar9 = uVar9 & 0xffffffffffffe000;
      if (*(long *)(uVar9 + 0x98) == 0x10) goto LAB__text__0038e5a4;
      *(long **)(uVar9 + *(long *)(uVar9 + 0x98) * 8 + 0x18) = local_78;
      *(long *)(uVar9 + 0x98) = *(long *)(uVar9 + 0x98) + 1;
      uVar6 = *(undefined8 *)(psVar14 + 0x14);
      *local_88 = *(undefined8 *)(psVar14 + 0x10);
      local_88[1] = uVar6;
      *(long *)(uVar9 + 0x98) = *(long *)(uVar9 + 0x98) + -1;
      sVar1 = psVar14[0x18];
      local_88 = local_88 + 2;
      goto joined_r0x0038dde8;
    }
    pvVar5 = (void *)FUN__text__003919d0(&local_90,psVar14 + 0x10);
    if (psVar14[0x18] == 0) goto LAB__text__0038de6c;
LAB__text__0038ddec:
    if (local_88 == local_80) {
      pvVar5 = (void *)FUN__text__003919d0(&local_90,psVar14 + 0x18);
      sVar1 = psVar14[0x20];
      goto joined_r0x0038def8;
    }
    uVar9 = tpidr_el0;
    uVar9 = uVar9 & 0xffffffffffffe000;
    if (*(long *)(uVar9 + 0x98) == 0x10) goto LAB__text__0038e5a4;
    *(long **)(uVar9 + *(long *)(uVar9 + 0x98) * 8 + 0x18) = local_78;
    *(long *)(uVar9 + 0x98) = *(long *)(uVar9 + 0x98) + 1;
    uVar6 = *(undefined8 *)(psVar14 + 0x1c);
    puVar8 = local_88 + 2;
    *local_88 = *(undefined8 *)(psVar14 + 0x18);
    local_88[1] = uVar6;
    *(long *)(uVar9 + 0x98) = *(long *)(uVar9 + 0x98) + -1;
    local_88 = puVar8;
    if (psVar14[0x20] == 0) goto LAB__text__0038defc;
LAB__text__0038de7c:
    if (local_88 == local_80) {
      pvVar5 = (void *)FUN__text__003919d0(&local_90,psVar14 + 0x20);
      uVar9 = (long)local_88 - (long)local_90;
      puVar8 = local_90;
    }
    else {
      uVar9 = tpidr_el0;
      uVar9 = uVar9 & 0xffffffffffffe000;
      if (*(long *)(uVar9 + 0x98) == 0x10) goto LAB__text__0038e5a4;
      *(long **)(uVar9 + *(long *)(uVar9 + 0x98) * 8 + 0x18) = local_78;
      *(long *)(uVar9 + 0x98) = *(long *)(uVar9 + 0x98) + 1;
      uVar6 = *(undefined8 *)(psVar14 + 0x24);
      *local_88 = *(undefined8 *)(psVar14 + 0x20);
      local_88[1] = uVar6;
      *(long *)(uVar9 + 0x98) = *(long *)(uVar9 + 0x98) + -1;
      uVar9 = (long)(local_88 + 2) - (long)local_90;
      local_88 = local_88 + 2;
      puVar8 = local_90;
    }
  }
  local_90 = puVar8;
  if (uVar9 != 0) {
    uVar10 = (long)uVar9 >> 4;
    lVar11 = 0;
    uVar12 = uVar10;
    if (uVar10 < 2) {
      uVar12 = 1;
    }
    do {
      if (uVar10 == 0) goto LAB__text__0038e5a8;
      if ((*(short *)((long)puVar8 + lVar11) == *param_3) &&
         (pvVar5 = (void *)((long)puVar8 + lVar11), *(char *)((long)pvVar5 + 4) == (char)param_3[2])
         ) {
        sVar13 = (uVar9 - lVar11) - 0x10;
        if ((undefined8 *)((long)pvVar5 + 0x10) != local_88) {
          sVar7 = sVar13;
          pvVar5 = memmove(pvVar5,(undefined8 *)((long)pvVar5 + 0x10),sVar13);
          uVar4 = (uint)sVar7;
        }
        local_88 = (undefined8 *)((long)puVar8 + lVar11 + sVar13);
        if (local_88 == local_80) {
          pvVar5 = (void *)FUN__text__003919d0(&local_90,param_3);
        }
        else {
          uVar9 = tpidr_el0;
          uVar9 = uVar9 & 0xffffffffffffe000;
          if (*(long *)(uVar9 + 0x98) == 0x10) goto LAB__text__0038e5a4;
          *(long **)(uVar9 + *(long *)(uVar9 + 0x98) * 8 + 0x18) = local_78;
          *(long *)(uVar9 + 0x98) = *(long *)(uVar9 + 0x98) + 1;
          uVar6 = *(undefined8 *)(param_3 + 4);
          *local_88 = *(undefined8 *)param_3;
          local_88[1] = uVar6;
          local_88 = (undefined8 *)((long)puVar8 + lVar11 + ((long)sVar13 >> 4) * 0x10 + 0x10);
          *(long *)(uVar9 + 0x98) = *(long *)(uVar9 + 0x98) + -1;
        }
        goto LAB__text__0038e0dc;
      }
      uVar10 = uVar10 - 1;
      lVar11 = lVar11 + 0x10;
      uVar12 = uVar12 - 1;
    } while (uVar12 != 0);
  }
  if (uVar9 < 0x50) {
    if (local_88 != local_80) {
      uVar9 = tpidr_el0;
      uVar9 = uVar9 & 0xffffffffffffe000;
      lVar11 = *(long *)(uVar9 + 0x98);
      goto joined_r0x0038e06c;
    }
    pvVar5 = (void *)FUN__text__003919d0(&local_90,param_3);
  }
  else {
    sVar13 = (long)local_88 - (long)(puVar8 + 2);
    if (sVar13 != 0) {
      sVar7 = sVar13;
      pvVar5 = memmove(puVar8,puVar8 + 2,sVar13);
      uVar4 = (uint)sVar7;
    }
    local_88 = (undefined8 *)((long)puVar8 + sVar13);
    if (local_88 == local_80) {
      pvVar5 = (void *)FUN__text__003919d0(&local_90,param_3);
    }
    else {
      uVar9 = tpidr_el0;
      uVar9 = uVar9 & 0xffffffffffffe000;
      lVar11 = *(long *)(uVar9 + 0x98);
joined_r0x0038e06c:
      if (lVar11 == 0x10) goto LAB__text__0038e5a4;
      *(long **)(uVar9 + lVar11 * 8 + 0x18) = local_78;
      *(long *)(uVar9 + 0x98) = *(long *)(uVar9 + 0x98) + 1;
      uVar6 = *(undefined8 *)(param_3 + 4);
      *local_88 = *(undefined8 *)param_3;
      local_88[1] = uVar6;
      *(long *)(uVar9 + 0x98) = *(long *)(uVar9 + 0x98) + -1;
      local_88 = local_88 + 2;
    }
  }
LAB__text__0038e0dc:
  psVar18 = psVar14 + 0x20;
  psVar17 = psVar14 + 0x18;
  psVar16 = psVar14 + 0x10;
  psVar15 = psVar14 + 8;
  psVar14[0] = 0;
  psVar14[1] = 0;
  psVar14[2] = 0;
  psVar14[3] = 0;
  psVar14[4] = 0;
  psVar14[5] = 0;
  psVar14[6] = 0;
  psVar14[7] = 0;
  uVar9 = (long)local_88 - (long)local_90;
  lVar11 = uVar9 * 0x10000000;
  if (0xffffffff < lVar11) {
    if (local_88 == local_90) goto LAB__text__0038e5a8;
    uVar6 = local_90[1];
    *(undefined8 *)psVar14 = *local_90;
    *(undefined8 *)(psVar14 + 4) = uVar6;
  }
  psVar15[0] = 0;
  psVar15[1] = 0;
  psVar15[2] = 0;
  psVar15[3] = 0;
  psVar14[0xc] = 0;
  psVar14[0xd] = 0;
  psVar14[0xe] = 0;
  psVar14[0xf] = 0;
  if (0x1ffffffff < lVar11) {
    if (uVar9 < 0x11) goto LAB__text__0038e5a8;
    uVar6 = local_90[3];
    *(undefined8 *)psVar15 = local_90[2];
    *(undefined8 *)(psVar14 + 0xc) = uVar6;
  }
  psVar16[0] = 0;
  psVar16[1] = 0;
  psVar16[2] = 0;
  psVar16[3] = 0;
  psVar14[0x14] = 0;
  psVar14[0x15] = 0;
  psVar14[0x16] = 0;
  psVar14[0x17] = 0;
  if (0x2ffffffff < lVar11) {
    if (uVar9 < 0x21) goto LAB__text__0038e5a8;
    uVar6 = local_90[5];
    *(undefined8 *)psVar16 = local_90[4];
    *(undefined8 *)(psVar14 + 0x14) = uVar6;
  }
  psVar17[0] = 0;
  psVar17[1] = 0;
  psVar17[2] = 0;
  psVar17[3] = 0;
  psVar14[0x1c] = 0;
  psVar14[0x1d] = 0;
  psVar14[0x1e] = 0;
  psVar14[0x1f] = 0;
  if (0x3ffffffff < lVar11) {
    if (uVar9 < 0x31) goto LAB__text__0038e5a8;
    uVar6 = local_90[7];
    *(undefined8 *)psVar17 = local_90[6];
    *(undefined8 *)(psVar14 + 0x1c) = uVar6;
  }
  psVar18[0] = 0;
  psVar18[1] = 0;
  psVar18[2] = 0;
  psVar18[3] = 0;
  psVar14[0x24] = 0;
  psVar14[0x25] = 0;
  psVar14[0x26] = 0;
  psVar14[0x27] = 0;
  if (lVar11 < 0x500000000) {
    if (local_90 != (undefined8 *)0x0) goto LAB__text__0038e198;
  }
  else {
    if (uVar9 < 0x41) goto LAB__text__0038e5a8;
    uVar6 = local_90[9];
    *(undefined8 *)psVar18 = local_90[8];
    *(undefined8 *)(psVar14 + 0x24) = uVar6;
LAB__text__0038e198:
    local_88 = local_90;
    lVar11 = (long)local_80 - (long)local_90;
    pvVar5 = (void *)(**(code **)(*local_78 + 0x18))(local_78,local_90,lVar11,2);
    uVar4 = (uint)lVar11;
  }
  if (1 < param_2) {
    return pvVar5;
  }
  sVar1 = *param_3;
  psVar14 = (short *)((long)param_1 + 0x8140);
  sVar2 = *psVar14;
  if (sVar2 == sVar1) {
    lVar11 = 0;
    local_78 = *(long **)((long)param_1 + 8);
joined_r0x0038e244:
    if (sVar2 != 0) goto LAB__text__0038e274;
LAB__text__0038e2bc:
    local_68 = 0;
    local_70 = 0;
    local_80 = (undefined8 *)0x0;
    local_88 = (undefined8 *)0x0;
    local_90 = (undefined8 *)0x0;
    if (*(short *)((long)param_1 + 0x8150) != 0) goto LAB__text__0038e2cc;
LAB__text__0038e31c:
    sVar1 = *(short *)((long)param_1 + 0x8160);
  }
  else {
    if (*(short *)((long)param_1 + 0x8150) == sVar1) {
      lVar11 = 1;
      local_78 = *(long **)((long)param_1 + 8);
      goto joined_r0x0038e244;
    }
    if (*(short *)((long)param_1 + 0x8160) == sVar1) {
      lVar11 = 2;
      local_78 = *(long **)((long)param_1 + 8);
      goto joined_r0x0038e244;
    }
    if (*(short *)((long)param_1 + 0x8170) == sVar1) {
      lVar11 = 3;
      local_78 = *(long **)((long)param_1 + 8);
    }
    else {
      if (*(short *)((long)param_1 + 0x8180) != sVar1) {
        return pvVar5;
      }
      lVar11 = 4;
      local_78 = *(long **)((long)param_1 + 8);
    }
    if (sVar2 == 0) goto LAB__text__0038e2bc;
LAB__text__0038e274:
    local_68 = 0;
    local_70 = 0;
    local_80 = (undefined8 *)0x0;
    local_88 = (undefined8 *)0x0;
    local_90 = (undefined8 *)0x0;
    pvVar5 = (void *)FUN__text__003919d0(&local_90,psVar14);
    if (*(short *)((long)param_1 + 0x8150) == 0) goto LAB__text__0038e31c;
LAB__text__0038e2cc:
    if (local_88 != local_80) {
      uVar9 = tpidr_el0;
      uVar9 = uVar9 & 0xffffffffffffe000;
      if (*(long *)(uVar9 + 0x98) == 0x10) goto LAB__text__0038e5a4;
      *(long **)(uVar9 + *(long *)(uVar9 + 0x98) * 8 + 0x18) = local_78;
      *(long *)(uVar9 + 0x98) = *(long *)(uVar9 + 0x98) + 1;
      uVar6 = *(undefined8 *)((long)param_1 + 0x8158);
      *local_88 = *(undefined8 *)((long)param_1 + 0x8150);
      local_88[1] = uVar6;
      *(long *)(uVar9 + 0x98) = *(long *)(uVar9 + 0x98) + -1;
      local_88 = local_88 + 2;
      goto LAB__text__0038e31c;
    }
    pvVar5 = (void *)FUN__text__003919d0(&local_90,(undefined8 *)((long)param_1 + 0x8150));
    sVar1 = *(short *)((long)param_1 + 0x8160);
  }
  if (sVar1 != 0) {
    if (local_88 == local_80) {
      pvVar5 = (void *)FUN__text__003919d0(&local_90,(undefined8 *)((long)param_1 + 0x8160));
    }
    else {
      uVar9 = tpidr_el0;
      uVar9 = uVar9 & 0xffffffffffffe000;
      if (*(long *)(uVar9 + 0x98) == 0x10) goto LAB__text__0038e5a4;
      *(long **)(uVar9 + *(long *)(uVar9 + 0x98) * 8 + 0x18) = local_78;
      *(long *)(uVar9 + 0x98) = *(long *)(uVar9 + 0x98) + 1;
      uVar6 = *(undefined8 *)((long)param_1 + 0x8168);
      *local_88 = *(undefined8 *)((long)param_1 + 0x8160);
      local_88[1] = uVar6;
      *(long *)(uVar9 + 0x98) = *(long *)(uVar9 + 0x98) + -1;
      local_88 = local_88 + 2;
    }
  }
  psVar15 = (short *)((long)param_1 + 0x8170);
  if (*psVar15 == 0) {
LAB__text__0038e408:
    sVar1 = *(short *)((long)param_1 + 0x8180);
  }
  else {
    if (local_88 != local_80) {
      uVar9 = tpidr_el0;
      uVar9 = uVar9 & 0xffffffffffffe000;
      if (*(long *)(uVar9 + 0x98) == 0x10) goto LAB__text__0038e5a4;
      *(long **)(uVar9 + *(long *)(uVar9 + 0x98) * 8 + 0x18) = local_78;
      *(long *)(uVar9 + 0x98) = *(long *)(uVar9 + 0x98) + 1;
      uVar6 = *(undefined8 *)((long)param_1 + 0x8178);
      *local_88 = *(undefined8 *)psVar15;
      local_88[1] = uVar6;
      *(long *)(uVar9 + 0x98) = *(long *)(uVar9 + 0x98) + -1;
      local_88 = local_88 + 2;
      goto LAB__text__0038e408;
    }
    pvVar5 = (void *)FUN__text__003919d0(&local_90,psVar15);
    sVar1 = *(short *)((long)param_1 + 0x8180);
  }
  if (sVar1 != 0) {
    if (local_88 == local_80) {
      pvVar5 = (void *)FUN__text__003919d0(&local_90,(undefined8 *)((long)param_1 + 0x8180));
    }
    else {
      uVar9 = tpidr_el0;
      uVar9 = uVar9 & 0xffffffffffffe000;
      if (*(long *)(uVar9 + 0x98) == 0x10) {
LAB__text__0038e5a4:
                    /* WARNING: Subroutine does not return */
        FUN__text__00102c10();
      }
      *(long **)(uVar9 + *(long *)(uVar9 + 0x98) * 8 + 0x18) = local_78;
      *(long *)(uVar9 + 0x98) = *(long *)(uVar9 + 0x98) + 1;
      uVar6 = *(undefined8 *)((long)param_1 + 0x8188);
      *local_88 = *(undefined8 *)((long)param_1 + 0x8180);
      local_88[1] = uVar6;
      *(long *)(uVar9 + 0x98) = *(long *)(uVar9 + 0x98) + -1;
      local_88 = local_88 + 2;
    }
  }
  puVar8 = local_90 + lVar11 * 2;
  sVar13 = (long)local_88 - (long)(puVar8 + 2);
  if (sVar13 != 0) {
    sVar7 = sVar13;
    pvVar5 = memmove(puVar8,puVar8 + 2,sVar13);
    uVar4 = (uint)sVar7;
  }
  local_88 = (undefined8 *)((long)puVar8 + sVar13);
  uVar9 = (long)local_88 - (long)local_90;
  psVar14[0] = 0;
  psVar14[1] = 0;
  psVar14[2] = 0;
  psVar14[3] = 0;
  *(undefined8 *)((long)param_1 + 0x8148) = 0;
  lVar11 = uVar9 * 0x10000000;
  if (0xffffffff < lVar11) {
    if (local_88 == local_90) goto LAB__text__0038e5a8;
    uVar6 = local_90[1];
    *(undefined8 *)psVar14 = *local_90;
    *(undefined8 *)((long)param_1 + 0x8148) = uVar6;
  }
  *(undefined8 *)((long)param_1 + 0x8150) = 0;
  *(undefined8 *)((long)param_1 + 0x8158) = 0;
  if (0x1ffffffff < lVar11) {
    if (uVar9 < 0x11) goto LAB__text__0038e5a8;
    uVar6 = local_90[3];
    *(undefined8 *)((long)param_1 + 0x8150) = local_90[2];
    *(undefined8 *)((long)param_1 + 0x8158) = uVar6;
  }
  *(undefined8 *)((long)param_1 + 0x8160) = 0;
  *(undefined8 *)((long)param_1 + 0x8168) = 0;
  if (0x2ffffffff < lVar11) {
    if (uVar9 < 0x21) goto LAB__text__0038e5a8;
    uVar6 = local_90[5];
    *(undefined8 *)((long)param_1 + 0x8160) = local_90[4];
    *(undefined8 *)((long)param_1 + 0x8168) = uVar6;
  }
  psVar15[0] = 0;
  psVar15[1] = 0;
  psVar15[2] = 0;
  psVar15[3] = 0;
  *(undefined8 *)((long)param_1 + 0x8178) = 0;
  if (0x3ffffffff < lVar11) {
    if (uVar9 < 0x31) goto LAB__text__0038e5a8;
    uVar6 = local_90[7];
    *(undefined8 *)psVar15 = local_90[6];
    *(undefined8 *)((long)param_1 + 0x8178) = uVar6;
  }
  *(undefined8 *)((long)param_1 + 0x8180) = 0;
  *(undefined8 *)((long)param_1 + 0x8188) = 0;
  if (lVar11 < 0x500000000) {
    if (local_90 == (undefined8 *)0x0) {
      return pvVar5;
    }
  }
  else {
    if (uVar9 < 0x41) {
LAB__text__0038e5a8:
      FUN__text__00391b58(&local_90);
      uVar4 = uVar4 & 0xffff;
      if (extraout_w1 == 0) {
        uVar6 = FUN__text__005fdad0(uVar4);
        uVar3 = FUN__text__00600400(uVar6,0);
        pvVar5 = (void *)(ulong)uVar3;
        if (uVar3 == 0) {
          uVar6 = FUN__text__005fdad0(uVar4);
          uVar3 = FUN__text__00600400(uVar6,1);
          pvVar5 = (void *)(ulong)uVar3;
          if (uVar3 == 0) {
            uVar6 = FUN__text__005fdad0(uVar4);
            uVar3 = FUN__text__00600400(uVar6,2);
            pvVar5 = (void *)(ulong)uVar3;
            if (uVar3 == 0) {
              uVar6 = FUN__text__005fdad0(uVar4);
              uVar3 = FUN__text__00600400(uVar6,3);
              pvVar5 = (void *)(ulong)uVar3;
              if (uVar3 == 0) {
                uVar6 = FUN__text__005fdad0(uVar4);
                uVar3 = FUN__text__00600400(uVar6,4);
                pvVar5 = (void *)(ulong)uVar3;
                if (uVar3 == 0) {
                  uVar6 = FUN__text__005fdad0(uVar4);
                  uVar3 = FUN__text__00600400(uVar6,5);
                  pvVar5 = (void *)(ulong)uVar3;
                  if (uVar3 == 0) {
                    uVar6 = FUN__text__005fdad0(uVar4);
                    uVar3 = FUN__text__00600400(uVar6,6);
                    pvVar5 = (void *)(ulong)uVar3;
                    if (uVar3 == 0) {
                      uVar6 = FUN__text__005fdad0(uVar4);
                      uVar3 = FUN__text__00600400(uVar6,7);
                      pvVar5 = (void *)(ulong)uVar3;
                      if (uVar3 == 0) {
                        uVar6 = FUN__text__005fdad0(uVar4);
                        uVar3 = FUN__text__00600400(uVar6,8);
                        pvVar5 = (void *)(ulong)uVar3;
                        if (uVar3 == 0) {
                          uVar6 = FUN__text__005fdad0(uVar4);
                          uVar3 = FUN__text__00600400(uVar6,9);
                          pvVar5 = (void *)(ulong)uVar3;
                          if (uVar3 == 0) {
                            uVar6 = FUN__text__005fdad0(uVar4);
                            uVar3 = FUN__text__00600400(uVar6,10);
                            pvVar5 = (void *)(ulong)uVar3;
                            if (uVar3 == 0) {
                              uVar6 = FUN__text__005fdad0(uVar4);
                              uVar3 = FUN__text__00600400(uVar6,0xb);
                              pvVar5 = (void *)(ulong)uVar3;
                              if (uVar3 == 0) {
                                uVar6 = FUN__text__005fdad0(uVar4);
                                uVar3 = FUN__text__00600400(uVar6,0xc);
                                pvVar5 = (void *)(ulong)uVar3;
                                if (uVar3 == 0) {
                                  uVar6 = FUN__text__005fdad0(uVar4);
                                  uVar3 = FUN__text__00600400(uVar6,0xd);
                                  pvVar5 = (void *)(ulong)uVar3;
                                  if (uVar3 == 0) {
                                    uVar6 = FUN__text__005fdad0(uVar4);
                                    uVar3 = FUN__text__00600400(uVar6,0xe);
                                    pvVar5 = (void *)(ulong)uVar3;
                                    if (uVar3 == 0) {
                                      uVar6 = FUN__text__005fdad0(uVar4);
                                      uVar3 = FUN__text__00600400(uVar6,0xf);
                                      pvVar5 = (void *)(ulong)uVar3;
                                      if (uVar3 == 0) {
                                        uVar6 = FUN__text__005fdad0(uVar4);
                                        uVar3 = FUN__text__00600400(uVar6,0x10);
                                        pvVar5 = (void *)(ulong)uVar3;
                                        if (uVar3 == 0) {
                                          uVar6 = FUN__text__005fdad0(uVar4);
                                          uVar3 = FUN__text__00600400(uVar6,0x11);
                                          pvVar5 = (void *)(ulong)uVar3;
                                          if (uVar3 == 0) {
                                            uVar6 = FUN__text__005fdad0(uVar4);
                                            uVar3 = FUN__text__00600400(uVar6,0x12);
                                            pvVar5 = (void *)(ulong)uVar3;
                                            if (uVar3 == 0) {
                                              uVar6 = FUN__text__005fdad0(uVar4);
                                              uVar3 = FUN__text__00600400(uVar6,0x13);
                                              pvVar5 = (void *)(ulong)uVar3;
                                              if (uVar3 == 0) {
                                                uVar6 = FUN__text__005fdad0(uVar4);
                                                uVar3 = FUN__text__00600400(uVar6,0x14);
                                                pvVar5 = (void *)(ulong)uVar3;
                                                if (uVar3 == 0) {
                                                  uVar6 = FUN__text__005fdad0(uVar4);
                                                  uVar3 = FUN__text__00600400(uVar6,0x15);
                                                  pvVar5 = (void *)(ulong)uVar3;
                                                  if (uVar3 == 0) {
                                                    uVar6 = FUN__text__005fdad0(uVar4);
                                                    uVar3 = FUN__text__00600400(uVar6,0x16);
                                                    pvVar5 = (void *)(ulong)uVar3;
                                                    if (uVar3 == 0) {
                                                      uVar6 = FUN__text__005fdad0(uVar4);
                                                      uVar3 = FUN__text__00600400(uVar6,0x17);
                                                      pvVar5 = (void *)(ulong)uVar3;
                                                      if (uVar3 == 0) {
                                                        uVar6 = FUN__text__005fdad0(uVar4);
                                                        uVar3 = FUN__text__00600400(uVar6,0x18);
                                                        pvVar5 = (void *)(ulong)uVar3;
                                                        if (uVar3 == 0) {
                                                          uVar6 = FUN__text__005fdad0(uVar4);
                                                          uVar3 = FUN__text__00600400(uVar6,0x19);
                                                          pvVar5 = (void *)(ulong)uVar3;
                                                          if (uVar3 == 0) {
                                                            uVar6 = FUN__text__005fdad0(uVar4);
                                                            uVar3 = FUN__text__00600400(uVar6,0x1a);
                                                            pvVar5 = (void *)(ulong)uVar3;
                                                            if (uVar3 == 0) {
                                                              uVar6 = FUN__text__005fdad0(uVar4);
                                                              uVar3 = FUN__text__00600400(uVar6,0x1b
                                                                                         );
                                                              pvVar5 = (void *)(ulong)uVar3;
                                                              if (uVar3 == 0) {
                                                                uVar6 = FUN__text__005fdad0(uVar4);
                                                                uVar3 = FUN__text__00600400(uVar6,
                                                  0x1c);
                                                  pvVar5 = (void *)(ulong)uVar3;
                                                  if (uVar3 == 0) {
                                                    uVar6 = FUN__text__005fdad0(uVar4);
                                                    uVar3 = FUN__text__00600400(uVar6,0x1d);
                                                    pvVar5 = (void *)(ulong)uVar3;
                                                    if (uVar3 == 0) {
                                                      uVar6 = FUN__text__005fdad0(uVar4);
                                                      uVar3 = FUN__text__00600400(uVar6,0x1e);
                                                      pvVar5 = (void *)(ulong)uVar3;
                                                      if (uVar3 == 0) {
                                                        uVar6 = FUN__text__005fdad0(uVar4);
                                                        uVar4 = FUN__text__00600400(uVar6,0x1f);
                                                        return (void *)(ulong)(uVar4 & 0xffff);
                                                      }
                                                    }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      else if (extraout_w1 == 1) {
        uVar6 = FUN__text__005fdad0(uVar4);
        uVar3 = FUN__text__006004e0(uVar6,0);
        pvVar5 = (void *)(ulong)uVar3;
        if (uVar3 == 0) {
          uVar6 = FUN__text__005fdad0(uVar4);
          uVar3 = FUN__text__006004e0(uVar6,1);
          pvVar5 = (void *)(ulong)uVar3;
          if (uVar3 == 0) {
            uVar6 = FUN__text__005fdad0(uVar4);
            uVar3 = FUN__text__006004e0(uVar6,2);
            pvVar5 = (void *)(ulong)uVar3;
            if (uVar3 == 0) {
              uVar6 = FUN__text__005fdad0(uVar4);
              uVar3 = FUN__text__006004e0(uVar6,3);
              pvVar5 = (void *)(ulong)uVar3;
              if (uVar3 == 0) {
                uVar6 = FUN__text__005fdad0(uVar4);
                uVar3 = FUN__text__006004e0(uVar6,4);
                pvVar5 = (void *)(ulong)uVar3;
                if (uVar3 == 0) {
                  uVar6 = FUN__text__005fdad0(uVar4);
                  uVar3 = FUN__text__006004e0(uVar6,5);
                  pvVar5 = (void *)(ulong)uVar3;
                  if (uVar3 == 0) {
                    uVar6 = FUN__text__005fdad0(uVar4);
                    uVar3 = FUN__text__006004e0(uVar6,6);
                    pvVar5 = (void *)(ulong)uVar3;
                    if (uVar3 == 0) {
                      uVar6 = FUN__text__005fdad0(uVar4);
                      uVar3 = FUN__text__006004e0(uVar6,7);
                      pvVar5 = (void *)(ulong)uVar3;
                      if (uVar3 == 0) {
                        uVar6 = FUN__text__005fdad0(uVar4);
                        uVar3 = FUN__text__006004e0(uVar6,8);
                        pvVar5 = (void *)(ulong)uVar3;
                        if (uVar3 == 0) {
                          uVar6 = FUN__text__005fdad0(uVar4);
                          uVar3 = FUN__text__006004e0(uVar6,9);
                          pvVar5 = (void *)(ulong)uVar3;
                          if (uVar3 == 0) {
                            uVar6 = FUN__text__005fdad0(uVar4);
                            uVar3 = FUN__text__006004e0(uVar6,10);
                            pvVar5 = (void *)(ulong)uVar3;
                            if (uVar3 == 0) {
                              uVar6 = FUN__text__005fdad0(uVar4);
                              uVar3 = FUN__text__006004e0(uVar6,0xb);
                              pvVar5 = (void *)(ulong)uVar3;
                              if (uVar3 == 0) {
                                uVar6 = FUN__text__005fdad0(uVar4);
                                uVar3 = FUN__text__006004e0(uVar6,0xc);
                                pvVar5 = (void *)(ulong)uVar3;
                                if (uVar3 == 0) {
                                  uVar6 = FUN__text__005fdad0(uVar4);
                                  uVar3 = FUN__text__006004e0(uVar6,0xd);
                                  pvVar5 = (void *)(ulong)uVar3;
                                  if (uVar3 == 0) {
                                    uVar6 = FUN__text__005fdad0(uVar4);
                                    uVar3 = FUN__text__006004e0(uVar6,0xe);
                                    pvVar5 = (void *)(ulong)uVar3;
                                    if (uVar3 == 0) {
                                      uVar6 = FUN__text__005fdad0(uVar4);
                                      uVar3 = FUN__text__006004e0(uVar6,0xf);
                                      pvVar5 = (void *)(ulong)uVar3;
                                      if (uVar3 == 0) {
                                        uVar6 = FUN__text__005fdad0(uVar4);
                                        uVar3 = FUN__text__006004e0(uVar6,0x10);
                                        pvVar5 = (void *)(ulong)uVar3;
                                        if (uVar3 == 0) {
                                          uVar6 = FUN__text__005fdad0(uVar4);
                                          uVar3 = FUN__text__006004e0(uVar6,0x11);
                                          pvVar5 = (void *)(ulong)uVar3;
                                          if (uVar3 == 0) {
                                            uVar6 = FUN__text__005fdad0(uVar4);
                                            uVar3 = FUN__text__006004e0(uVar6,0x12);
                                            pvVar5 = (void *)(ulong)uVar3;
                                            if (uVar3 == 0) {
                                              uVar6 = FUN__text__005fdad0(uVar4);
                                              uVar3 = FUN__text__006004e0(uVar6,0x13);
                                              pvVar5 = (void *)(ulong)uVar3;
                                              if (uVar3 == 0) {
                                                uVar6 = FUN__text__005fdad0(uVar4);
                                                uVar3 = FUN__text__006004e0(uVar6,0x14);
                                                pvVar5 = (void *)(ulong)uVar3;
                                                if (uVar3 == 0) {
                                                  uVar6 = FUN__text__005fdad0(uVar4);
                                                  uVar3 = FUN__text__006004e0(uVar6,0x15);
                                                  pvVar5 = (void *)(ulong)uVar3;
                                                  if (uVar3 == 0) {
                                                    uVar6 = FUN__text__005fdad0(uVar4);
                                                    uVar3 = FUN__text__006004e0(uVar6,0x16);
                                                    pvVar5 = (void *)(ulong)uVar3;
                                                    if (uVar3 == 0) {
                                                      uVar6 = FUN__text__005fdad0(uVar4);
                                                      uVar3 = FUN__text__006004e0(uVar6,0x17);
                                                      pvVar5 = (void *)(ulong)uVar3;
                                                      if (uVar3 == 0) {
                                                        uVar6 = FUN__text__005fdad0(uVar4);
                                                        uVar3 = FUN__text__006004e0(uVar6,0x18);
                                                        pvVar5 = (void *)(ulong)uVar3;
                                                        if (uVar3 == 0) {
                                                          uVar6 = FUN__text__005fdad0(uVar4);
                                                          uVar3 = FUN__text__006004e0(uVar6,0x19);
                                                          pvVar5 = (void *)(ulong)uVar3;
                                                          if (uVar3 == 0) {
                                                            uVar6 = FUN__text__005fdad0(uVar4);
                                                            uVar3 = FUN__text__006004e0(uVar6,0x1a);
                                                            pvVar5 = (void *)(ulong)uVar3;
                                                            if (uVar3 == 0) {
                                                              uVar6 = FUN__text__005fdad0(uVar4);
                                                              uVar3 = FUN__text__006004e0(uVar6,0x1b
                                                                                         );
                                                              pvVar5 = (void *)(ulong)uVar3;
                                                              if (uVar3 == 0) {
                                                                uVar6 = FUN__text__005fdad0(uVar4);
                                                                uVar3 = FUN__text__006004e0(uVar6,
                                                  0x1c);
                                                  pvVar5 = (void *)(ulong)uVar3;
                                                  if (uVar3 == 0) {
                                                    uVar6 = FUN__text__005fdad0(uVar4);
                                                    uVar3 = FUN__text__006004e0(uVar6,0x1d);
                                                    pvVar5 = (void *)(ulong)uVar3;
                                                    if (uVar3 == 0) {
                                                      uVar6 = FUN__text__005fdad0(uVar4);
                                                      uVar3 = FUN__text__006004e0(uVar6,0x1e);
                                                      pvVar5 = (void *)(ulong)uVar3;
                                                      if (uVar3 == 0) {
                                                        uVar6 = FUN__text__005fdad0(uVar4);
                                                        uVar4 = FUN__text__006004e0(uVar6,0x1f);
                                                        return (void *)(ulong)(uVar4 & 0xffff);
                                                      }
                                                    }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      else {
        if (extraout_w1 != 2) {
          FUN__text__005fdad0(uVar4);
          FUN__text__005fdad0(uVar4);
          FUN__text__005fdad0(uVar4);
          FUN__text__005fdad0(uVar4);
          FUN__text__005fdad0(uVar4);
          FUN__text__005fdad0(uVar4);
          FUN__text__005fdad0(uVar4);
          FUN__text__005fdad0(uVar4);
          FUN__text__005fdad0(uVar4);
          FUN__text__005fdad0(uVar4);
          FUN__text__005fdad0(uVar4);
          FUN__text__005fdad0(uVar4);
          FUN__text__005fdad0(uVar4);
          FUN__text__005fdad0(uVar4);
          FUN__text__005fdad0(uVar4);
          FUN__text__005fdad0(uVar4);
          FUN__text__005fdad0(uVar4);
          FUN__text__005fdad0(uVar4);
          FUN__text__005fdad0(uVar4);
          FUN__text__005fdad0(uVar4);
          FUN__text__005fdad0(uVar4);
          FUN__text__005fdad0(uVar4);
          FUN__text__005fdad0(uVar4);
          FUN__text__005fdad0(uVar4);
          FUN__text__005fdad0(uVar4);
          FUN__text__005fdad0(uVar4);
          FUN__text__005fdad0(uVar4);
          FUN__text__005fdad0(uVar4);
          FUN__text__005fdad0(uVar4);
          FUN__text__005fdad0(uVar4);
          FUN__text__005fdad0(uVar4);
          FUN__text__005fdad0(uVar4);
          return (void *)0x0;
        }
        uVar6 = FUN__text__005fdad0(uVar4);
        uVar3 = FUN__text__006005c0(uVar6,0);
        pvVar5 = (void *)(ulong)uVar3;
        if (uVar3 == 0) {
          uVar6 = FUN__text__005fdad0(uVar4);
          uVar3 = FUN__text__006005c0(uVar6,1);
          pvVar5 = (void *)(ulong)uVar3;
          if (uVar3 == 0) {
            uVar6 = FUN__text__005fdad0(uVar4);
            uVar3 = FUN__text__006005c0(uVar6,2);
            pvVar5 = (void *)(ulong)uVar3;
            if (uVar3 == 0) {
              uVar6 = FUN__text__005fdad0(uVar4);
              uVar3 = FUN__text__006005c0(uVar6,3);
              pvVar5 = (void *)(ulong)uVar3;
              if (uVar3 == 0) {
                uVar6 = FUN__text__005fdad0(uVar4);
                uVar3 = FUN__text__006005c0(uVar6,4);
                pvVar5 = (void *)(ulong)uVar3;
                if (uVar3 == 0) {
                  uVar6 = FUN__text__005fdad0(uVar4);
                  uVar3 = FUN__text__006005c0(uVar6,5);
                  pvVar5 = (void *)(ulong)uVar3;
                  if (uVar3 == 0) {
                    uVar6 = FUN__text__005fdad0(uVar4);
                    uVar3 = FUN__text__006005c0(uVar6,6);
                    pvVar5 = (void *)(ulong)uVar3;
                    if (uVar3 == 0) {
                      uVar6 = FUN__text__005fdad0(uVar4);
                      uVar3 = FUN__text__006005c0(uVar6,7);
                      pvVar5 = (void *)(ulong)uVar3;
                      if (uVar3 == 0) {
                        uVar6 = FUN__text__005fdad0(uVar4);
                        uVar3 = FUN__text__006005c0(uVar6,8);
                        pvVar5 = (void *)(ulong)uVar3;
                        if (uVar3 == 0) {
                          uVar6 = FUN__text__005fdad0(uVar4);
                          uVar3 = FUN__text__006005c0(uVar6,9);
                          pvVar5 = (void *)(ulong)uVar3;
                          if (uVar3 == 0) {
                            uVar6 = FUN__text__005fdad0(uVar4);
                            uVar3 = FUN__text__006005c0(uVar6,10);
                            pvVar5 = (void *)(ulong)uVar3;
                            if (uVar3 == 0) {
                              uVar6 = FUN__text__005fdad0(uVar4);
                              uVar3 = FUN__text__006005c0(uVar6,0xb);
                              pvVar5 = (void *)(ulong)uVar3;
                              if (uVar3 == 0) {
                                uVar6 = FUN__text__005fdad0(uVar4);
                                uVar3 = FUN__text__006005c0(uVar6,0xc);
                                pvVar5 = (void *)(ulong)uVar3;
                                if (uVar3 == 0) {
                                  uVar6 = FUN__text__005fdad0(uVar4);
                                  uVar3 = FUN__text__006005c0(uVar6,0xd);
                                  pvVar5 = (void *)(ulong)uVar3;
                                  if (uVar3 == 0) {
                                    uVar6 = FUN__text__005fdad0(uVar4);
                                    uVar3 = FUN__text__006005c0(uVar6,0xe);
                                    pvVar5 = (void *)(ulong)uVar3;
                                    if (uVar3 == 0) {
                                      uVar6 = FUN__text__005fdad0(uVar4);
                                      uVar3 = FUN__text__006005c0(uVar6,0xf);
                                      pvVar5 = (void *)(ulong)uVar3;
                                      if (uVar3 == 0) {
                                        uVar6 = FUN__text__005fdad0(uVar4);
                                        uVar3 = FUN__text__006005c0(uVar6,0x10);
                                        pvVar5 = (void *)(ulong)uVar3;
                                        if (uVar3 == 0) {
                                          uVar6 = FUN__text__005fdad0(uVar4);
                                          uVar3 = FUN__text__006005c0(uVar6,0x11);
                                          pvVar5 = (void *)(ulong)uVar3;
                                          if (uVar3 == 0) {
                                            uVar6 = FUN__text__005fdad0(uVar4);
                                            uVar3 = FUN__text__006005c0(uVar6,0x12);
                                            pvVar5 = (void *)(ulong)uVar3;
                                            if (uVar3 == 0) {
                                              uVar6 = FUN__text__005fdad0(uVar4);
                                              uVar3 = FUN__text__006005c0(uVar6,0x13);
                                              pvVar5 = (void *)(ulong)uVar3;
                                              if (uVar3 == 0) {
                                                uVar6 = FUN__text__005fdad0(uVar4);
                                                uVar3 = FUN__text__006005c0(uVar6,0x14);
                                                pvVar5 = (void *)(ulong)uVar3;
                                                if (uVar3 == 0) {
                                                  uVar6 = FUN__text__005fdad0(uVar4);
                                                  uVar3 = FUN__text__006005c0(uVar6,0x15);
                                                  pvVar5 = (void *)(ulong)uVar3;
                                                  if (uVar3 == 0) {
                                                    uVar6 = FUN__text__005fdad0(uVar4);
                                                    uVar3 = FUN__text__006005c0(uVar6,0x16);
                                                    pvVar5 = (void *)(ulong)uVar3;
                                                    if (uVar3 == 0) {
                                                      uVar6 = FUN__text__005fdad0(uVar4);
                                                      uVar3 = FUN__text__006005c0(uVar6,0x17);
                                                      pvVar5 = (void *)(ulong)uVar3;
                                                      if (uVar3 == 0) {
                                                        uVar6 = FUN__text__005fdad0(uVar4);
                                                        uVar3 = FUN__text__006005c0(uVar6,0x18);
                                                        pvVar5 = (void *)(ulong)uVar3;
                                                        if (uVar3 == 0) {
                                                          uVar6 = FUN__text__005fdad0(uVar4);
                                                          uVar3 = FUN__text__006005c0(uVar6,0x19);
                                                          pvVar5 = (void *)(ulong)uVar3;
                                                          if (uVar3 == 0) {
                                                            uVar6 = FUN__text__005fdad0(uVar4);
                                                            uVar3 = FUN__text__006005c0(uVar6,0x1a);
                                                            pvVar5 = (void *)(ulong)uVar3;
                                                            if (uVar3 == 0) {
                                                              uVar6 = FUN__text__005fdad0(uVar4);
                                                              uVar3 = FUN__text__006005c0(uVar6,0x1b
                                                                                         );
                                                              pvVar5 = (void *)(ulong)uVar3;
                                                              if (uVar3 == 0) {
                                                                uVar6 = FUN__text__005fdad0(uVar4);
                                                                uVar3 = FUN__text__006005c0(uVar6,
                                                  0x1c);
                                                  pvVar5 = (void *)(ulong)uVar3;
                                                  if (uVar3 == 0) {
                                                    uVar6 = FUN__text__005fdad0(uVar4);
                                                    uVar3 = FUN__text__006005c0(uVar6,0x1d);
                                                    pvVar5 = (void *)(ulong)uVar3;
                                                    if (uVar3 == 0) {
                                                      uVar6 = FUN__text__005fdad0(uVar4);
                                                      uVar3 = FUN__text__006005c0(uVar6,0x1e);
                                                      pvVar5 = (void *)(ulong)uVar3;
                                                      if (uVar3 == 0) {
                                                        uVar6 = FUN__text__005fdad0(uVar4);
                                                        uVar4 = FUN__text__006005c0(uVar6,0x1f);
                                                        return (void *)(ulong)(uVar4 & 0xffff);
                                                      }
                                                    }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      return pvVar5;
    }
    uVar6 = local_90[9];
    *(undefined8 *)((long)param_1 + 0x8180) = local_90[8];
    *(undefined8 *)((long)param_1 + 0x8188) = uVar6;
  }
  local_88 = local_90;
  pvVar5 = (void *)(**(code **)(*local_78 + 0x18))
                             (local_78,local_90,(long)local_80 - (long)local_90,2);
  return pvVar5;
}


