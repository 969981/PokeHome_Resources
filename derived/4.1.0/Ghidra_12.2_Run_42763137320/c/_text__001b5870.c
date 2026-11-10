/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001b5870; name: FUN_.text__001b5870
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__001b5870(long param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 uVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  char cVar35;
  undefined2 uVar36;
  code *pcVar37;
  uint uVar38;
  int iVar39;
  ulong uVar40;
  undefined8 uVar41;
  long lVar42;
  uint uVar43;
  undefined4 uVar44;
  long lVar45;
  long lVar46;
  long lVar47;
  void *pvVar48;
  long lVar49;
  long lVar50;
  undefined1 auStack_190 [24];
  long local_178;
  undefined8 local_170;
  code *local_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined1 auStack_d8 [52];
  undefined8 local_a4;
  undefined8 uStack_9c;
  undefined4 local_94;
  undefined8 local_90;
  ulong local_88;
  undefined8 local_80;
  undefined4 local_78;
  
  if (*(char *)(param_1 + 0x5b69) == '\0') {
    return;
  }
  lVar49 = *(long *)(param_1 + 8);
  lVar47 = *(long *)(lVar49 + 0x2d0);
  if (lVar47 != 0) {
    (**(code **)(*(long *)(lVar47 + 0x48) + 0x10))();
  }
  lVar45 = *(long *)(param_1 + 0x18);
  if (lVar45 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl();
  }
  lVar50 = *(long *)(lVar45 + 0x250);
  if (lVar50 != 0) {
    (**(code **)(*(long *)(lVar50 + 0x48) + 0x10))();
  }
  lVar42 = *(long *)(param_1 + 0x38);
  lVar46 = *(long *)(lVar42 + 0x128);
  lVar42 = *(long *)(lVar42 + (ulong)(*(int *)(lVar42 + 0x1b0) != *(int *)(lVar46 + 0x24) &&
                                     *(int *)(lVar42 + 0x1b4) == *(int *)(lVar46 + 0x24)) * 0x20 +
                    0x68);
  if (*(char *)(lVar46 + 0x90) == '\0') {
    local_88 = *(ulong *)(lVar46 + 0x74);
    local_80 = *(undefined8 *)(lVar46 + 0x7c);
    local_78 = *(undefined4 *)(lVar46 + 0x84);
  }
  else {
    local_88 = CONCAT44(*(undefined4 *)(lVar46 + 0x94),(undefined4)local_88) & 0xffffffffffffff00;
    local_80 = *(undefined8 *)(lVar46 + 0x98);
    local_78 = *(undefined4 *)(lVar46 + 0xa0);
  }
  local_90 = *(undefined8 *)(lVar46 + 0x88);
  FUN__text__00191328(&local_a4,&local_88,&local_90);
  iVar39 = *(int *)(param_1 + 0x5b6c);
  if (iVar39 == 0) {
    lVar45 = 0;
    lVar49 = lVar49 + 0x110;
    pvVar48 = (void *)(lVar42 + 0x42d0);
    do {
      uVar44 = (undefined4)lVar45;
      local_170 = lVar45 << 0x20;
      uVar40 = FUN__text__001a56dc(lVar46,&local_170);
      if ((uVar40 & 1) == 0) {
        local_170 = CONCAT44(uVar44,1);
        uVar40 = FUN__text__001a56dc(lVar46,&local_170);
        if ((uVar40 & 1) != 0) goto LAB__text__001b5f3c;
LAB__text__001b5e98:
        local_170 = CONCAT44(uVar44,2);
        uVar40 = FUN__text__001a56dc(lVar46,&local_170);
        if ((uVar40 & 1) != 0) goto LAB__text__001b5eac;
LAB__text__001b5f6c:
        local_170 = CONCAT44(uVar44,3);
        uVar40 = FUN__text__001a56dc(lVar46,&local_170);
        if ((uVar40 & 1) != 0) goto LAB__text__001b5f80;
LAB__text__001b5edc:
        local_170 = CONCAT44(uVar44,4);
        uVar40 = FUN__text__001a56dc(lVar46,&local_170);
        if ((uVar40 & 1) != 0) goto LAB__text__001b5ef0;
LAB__text__001b5fb0:
        local_170 = CONCAT44(uVar44,5);
        uVar40 = FUN__text__001a56dc(lVar46,&local_170);
      }
      else {
        memcpy(&local_170,pvVar48,200);
        FUN__text__0012c378(lVar49,auStack_d8);
        local_170 = CONCAT44(uVar44,1);
        uVar40 = FUN__text__001a56dc(lVar46,&local_170);
        if ((uVar40 & 1) == 0) goto LAB__text__001b5e98;
LAB__text__001b5f3c:
        memcpy(&local_170,(void *)((long)pvVar48 + 1000),200);
        FUN__text__0012c378(lVar49,auStack_d8);
        local_170 = CONCAT44(uVar44,2);
        uVar40 = FUN__text__001a56dc(lVar46,&local_170);
        if ((uVar40 & 1) == 0) goto LAB__text__001b5f6c;
LAB__text__001b5eac:
        memcpy(&local_170,(void *)((long)pvVar48 + 2000),200);
        FUN__text__0012c378(lVar49,auStack_d8);
        local_170 = CONCAT44(uVar44,3);
        uVar40 = FUN__text__001a56dc(lVar46,&local_170);
        if ((uVar40 & 1) == 0) goto LAB__text__001b5edc;
LAB__text__001b5f80:
        memcpy(&local_170,(void *)((long)pvVar48 + 3000),200);
        FUN__text__0012c378(lVar49,auStack_d8);
        local_170 = CONCAT44(uVar44,4);
        uVar40 = FUN__text__001a56dc(lVar46,&local_170);
        if ((uVar40 & 1) == 0) goto LAB__text__001b5fb0;
LAB__text__001b5ef0:
        memcpy(&local_170,(void *)((long)pvVar48 + 4000),200);
        FUN__text__0012c378(lVar49,auStack_d8);
        local_170 = CONCAT44(uVar44,5);
        uVar40 = FUN__text__001a56dc(lVar46,&local_170);
      }
      if ((uVar40 & 1) != 0) {
        memcpy(&local_170,(void *)((long)pvVar48 + 5000),200);
        FUN__text__0012c378(lVar49,auStack_d8);
      }
      lVar45 = lVar45 + 1;
      pvVar48 = (void *)((long)pvVar48 + 200);
    } while (lVar45 != 5);
    lVar49 = *_DAT_0089f598;
    FUN__text__005e927c(auStack_190,_DAT_008a0610);
    uVar41 = FUN__text__003eec14(lVar49);
    local_100 = 0;
    uStack_f8 = 0;
    local_110 = 0;
    uStack_108 = 0;
    local_120 = 0;
    uStack_118 = 0;
    local_130 = 0;
    uStack_128 = 0;
    local_140 = 0;
    uStack_138 = 0;
    local_150 = 0;
    uStack_148 = 0;
    local_160 = 0;
    uStack_158 = 0;
    local_170 = 0;
    local_168 = (code *)0x0;
    iVar39 = FUN__text__003ef560(lVar49,auStack_190,uVar41,0);
    if ((iVar39 != 0) &&
       (FUN__text__0015e5bc(*(undefined8 *)(lVar49 + 0x210),auStack_190,iVar39,uVar41,0,&local_170,0
                           ), pcVar37 = local_168, local_168 != (code *)0x0)) {
      local_160 = 0;
      uStack_158 = 0;
      local_170 = 0;
      local_168 = (code *)0x0;
      (*pcVar37)(&local_150);
    }
    if (local_178 != 0) {
      (**(code **)(*(long *)(local_178 + 0x48) + 0x18))();
    }
    iVar39 = *(int *)(param_1 + 0x5b6c);
  }
  else {
    if (iVar39 != 2) {
      if (iVar39 == 1) {
        lVar45 = 0;
        pvVar48 = (void *)(lVar42 + 0x42d0);
        uVar43 = 1;
        do {
          uVar44 = (undefined4)lVar45;
          local_170 = lVar45 << 0x20;
          uVar40 = FUN__text__001a56dc(lVar46,&local_170);
          if ((uVar40 & 1) == 0) {
            local_170 = CONCAT44(uVar44,1);
            uVar40 = FUN__text__001a56dc(lVar46,&local_170);
            if ((uVar40 & 1) != 0) goto LAB__text__001b5a18;
LAB__text__001b5a5c:
            local_170 = CONCAT44(uVar44,2);
            uVar40 = FUN__text__001a56dc(lVar46,&local_170);
            if ((uVar40 & 1) != 0) goto LAB__text__001b5a74;
LAB__text__001b5b20:
            local_170 = CONCAT44(uVar44,3);
            uVar40 = FUN__text__001a56dc(lVar46,&local_170);
joined_r0x001b5b30:
            if ((uVar40 & 1) == 0) goto LAB__text__001b5ab0;
LAB__text__001b5b34:
            memcpy(&local_170,(void *)((long)pvVar48 + 3000),200);
            if (*(long *)(lVar49 + 0x2d0) == 0) {
              local_170 = CONCAT44(uVar44,4);
              uVar40 = FUN__text__001a56dc(lVar46,&local_170);
              goto joined_r0x001b5bc8;
            }
            uVar38 = FUN__text__003c7ec0(*(long *)(lVar49 + 0x2d0),auStack_d8);
            uVar43 = uVar38 & uVar43;
            local_170 = CONCAT44(uVar44,4);
            uVar40 = FUN__text__001a56dc(lVar46,&local_170);
            if ((uVar40 & 1) == 0) goto LAB__text__001b5bd0;
LAB__text__001b5ac4:
            memcpy(&local_170,(void *)((long)pvVar48 + 4000),200);
            if (*(long *)(lVar49 + 0x2d0) == 0) {
              local_170 = CONCAT44(uVar44,5);
              uVar40 = FUN__text__001a56dc(lVar46,&local_170);
            }
            else {
              uVar38 = FUN__text__003c7ec0(*(long *)(lVar49 + 0x2d0),auStack_d8);
              uVar43 = uVar38 & uVar43;
              local_170 = CONCAT44(uVar44,5);
              uVar40 = FUN__text__001a56dc(lVar46,&local_170);
            }
          }
          else {
            memcpy(&local_170,pvVar48,200);
            if (*(long *)(lVar49 + 0x2d0) == 0) {
              uVar38 = 1;
            }
            else {
              uVar38 = FUN__text__003c7ec0(*(long *)(lVar49 + 0x2d0),auStack_d8);
            }
            uVar43 = uVar38 & uVar43;
            local_170 = CONCAT44(uVar44,1);
            uVar40 = FUN__text__001a56dc(lVar46,&local_170);
            if ((uVar40 & 1) == 0) goto LAB__text__001b5a5c;
LAB__text__001b5a18:
            memcpy(&local_170,(void *)((long)pvVar48 + 1000),200);
            if (*(long *)(lVar49 + 0x2d0) == 0) {
              uVar38 = 1;
            }
            else {
              uVar38 = FUN__text__003c7ec0(*(long *)(lVar49 + 0x2d0),auStack_d8);
            }
            uVar43 = uVar38 & uVar43;
            local_170 = CONCAT44(uVar44,2);
            uVar40 = FUN__text__001a56dc(lVar46,&local_170);
            if ((uVar40 & 1) == 0) goto LAB__text__001b5b20;
LAB__text__001b5a74:
            memcpy(&local_170,(void *)((long)pvVar48 + 2000),200);
            if (*(long *)(lVar49 + 0x2d0) == 0) {
              local_170 = CONCAT44(uVar44,3);
              uVar40 = FUN__text__001a56dc(lVar46,&local_170);
              goto joined_r0x001b5b30;
            }
            uVar38 = FUN__text__003c7ec0(*(long *)(lVar49 + 0x2d0),auStack_d8);
            uVar43 = uVar38 & uVar43;
            local_170 = CONCAT44(uVar44,3);
            uVar40 = FUN__text__001a56dc(lVar46,&local_170);
            if ((uVar40 & 1) != 0) goto LAB__text__001b5b34;
LAB__text__001b5ab0:
            local_170 = CONCAT44(uVar44,4);
            uVar40 = FUN__text__001a56dc(lVar46,&local_170);
joined_r0x001b5bc8:
            if ((uVar40 & 1) != 0) goto LAB__text__001b5ac4;
LAB__text__001b5bd0:
            local_170 = CONCAT44(uVar44,5);
            uVar40 = FUN__text__001a56dc(lVar46,&local_170);
          }
          if ((uVar40 & 1) != 0) {
            memcpy(&local_170,(void *)((long)pvVar48 + 5000),200);
            if (*(long *)(lVar49 + 0x2d0) == 0) {
              uVar38 = 1;
            }
            else {
              uVar38 = FUN__text__003c7ec0(*(long *)(lVar49 + 0x2d0),auStack_d8);
            }
            uVar43 = uVar38 & uVar43;
          }
          lVar45 = lVar45 + 1;
          pvVar48 = (void *)((long)pvVar48 + 200);
        } while (lVar45 != 5);
        if (uVar43 != 0) {
          *(int *)(param_1 + 0x5b6c) = *(int *)(param_1 + 0x5b6c) + 1;
        }
      }
      goto LAB__text__001b60c8;
    }
    if ((*(char *)(*(long *)(lVar45 + 8) + 0x2a4) == '\0') &&
       (uVar40 = FUN__text__001a8720(lVar46), (uVar40 & 1) != 0)) {
      *(undefined1 *)(param_1 + 0x5b15) = 1;
    }
    FUN__text__001a0844(*(undefined8 *)(param_1 + 0x38));
    FUN__text__001beac4(param_1);
    FUN__text__001a7024(lVar46);
    FUN__text__001a193c(*(undefined8 *)(param_1 + 0x38));
    FUN__text__001a19a0(*(undefined8 *)(param_1 + 0x38));
    uVar4 = *(undefined1 *)(lVar46 + 0x19b);
    bVar5 = *(byte *)(lVar46 + 0x1ad);
    bVar6 = *(byte *)(lVar46 + 0x1ae);
    bVar7 = *(byte *)(lVar46 + 0x1b0);
    bVar8 = *(byte *)(lVar46 + 0x1b1);
    uVar36 = *(undefined2 *)(lVar46 + 0x199);
    bVar9 = *(byte *)(lVar46 + 0x1b6);
    bVar10 = *(byte *)(lVar46 + 0x1bb);
    bVar11 = *(byte *)(lVar46 + 0x1ac);
    local_170 = CONCAT62(CONCAT51(local_170._3_5_,uVar4),uVar36);
    bVar12 = *(byte *)(lVar46 + 0x1b3);
    bVar13 = *(byte *)(lVar46 + 0x1c0);
    bVar14 = *(byte *)(lVar46 + 0x1af);
    bVar15 = *(byte *)(lVar46 + 0x1b2);
    *(undefined8 *)(lVar46 + 0x1ac) = 0;
    bVar16 = *(byte *)(lVar46 + 0x1b5);
    bVar17 = *(byte *)(lVar46 + 0x1b7);
    bVar18 = *(byte *)(lVar46 + 0x1b8);
    bVar19 = *(byte *)(lVar46 + 0x1b9);
    bVar20 = *(byte *)(lVar46 + 0x1ba);
    bVar21 = *(byte *)(lVar46 + 0x1bd);
    bVar22 = *(byte *)(lVar46 + 0x1be);
    bVar23 = *(byte *)(lVar46 + 0x1bf);
    bVar24 = *(byte *)(lVar46 + 0x1c1);
    bVar25 = *(byte *)(lVar46 + 0x1c2);
    bVar26 = *(byte *)(lVar46 + 0x1c3);
    bVar27 = *(byte *)(lVar46 + 0x1c4);
    bVar28 = *(byte *)(lVar46 + 0x1c5);
    bVar29 = *(byte *)(lVar46 + 0x1c6);
    bVar30 = *(byte *)(lVar46 + 0x1c7);
    bVar31 = *(byte *)(lVar46 + 0x1c8);
    bVar32 = *(byte *)(lVar46 + 0x1c9);
    *(undefined8 *)(lVar46 + 0x1c2) = 0;
    bVar33 = *(byte *)(lVar46 + 0x1bc);
    *(undefined8 *)(lVar46 + 0x1bc) = 0;
    bVar34 = *(byte *)(lVar46 + 0x1b4);
    *(undefined8 *)(lVar46 + 0x1b4) = 0;
    cVar35 = *(char *)(lVar46 + 0x198);
    iVar39 = *(int *)(lVar46 + 0x19c);
    iVar1 = *(int *)(lVar46 + 0x1a0);
    iVar2 = *(int *)(lVar46 + 0x1a4);
    iVar3 = *(int *)(lVar46 + 0x1a8);
    if (((((uint)bVar14 + (uint)bVar6 + (uint)bVar7 + (uint)bVar15 + (uint)bVar12 + (uint)bVar34 +
           (uint)bVar16 + (uint)bVar17 + (uint)bVar18 + (uint)bVar19 +
           (uint)bVar20 + (uint)bVar33 + (uint)bVar21 + (uint)bVar22 +
           (uint)bVar23 + (uint)bVar24 + (uint)bVar25 + (uint)bVar26 + (uint)bVar27 + (uint)bVar29 +
           ((uint)bVar5 + (uint)bVar8 + (uint)bVar11 + (uint)bVar9 + (uint)bVar10 + (uint)bVar13 +
            (uint)bVar28 & 0xff) + (uint)bVar30 + (uint)bVar31 + (uint)bVar32 != 0) &&
         (cVar35 == *(char *)(param_1 + 0x5a58))) && (iVar39 == *(int *)(param_1 + 0x5a5c))) &&
       (((iVar1 == *(int *)(param_1 + 0x5a60) && (iVar2 == *(int *)(param_1 + 0x5a64))) &&
        (iVar3 == *(int *)(param_1 + 0x5a68))))) {
      *(byte *)(param_1 + 0x5b3c) = bVar34;
      *(int *)(param_1 + 0x5b24) = iVar39;
      *(int *)(param_1 + 0x5b28) = iVar1;
      *(int *)(param_1 + 0x5b2c) = iVar2;
      *(int *)(param_1 + 0x5b30) = iVar3;
      *(char *)(param_1 + 0x5b20) = cVar35;
      *(undefined4 *)(param_1 + 0x5b1c) = 0;
      *(byte *)(param_1 + 0x5b34) = bVar11;
      *(byte *)(param_1 + 0x5b3e) = bVar9;
      *(undefined2 *)(param_1 + 0x5b21) = uVar36;
      *(byte *)(param_1 + 0x5b3b) = bVar12;
      *(byte *)(param_1 + 0x5b3d) = bVar16;
      *(byte *)(param_1 + 0x5b3f) = bVar17;
      *(byte *)(param_1 + 0x5b40) = bVar18;
      *(byte *)(param_1 + 0x5b41) = bVar19;
      *(byte *)(param_1 + 0x5b42) = bVar20;
      *(byte *)(param_1 + 0x5b35) = bVar5;
      *(byte *)(param_1 + 0x5b43) = bVar10;
      *(undefined1 *)(param_1 + 0x5b23) = uVar4;
      *(undefined1 *)(param_1 + 0x5b19) = 1;
      *(byte *)(param_1 + 0x5b44) = bVar33;
      *(byte *)(param_1 + 0x5b45) = bVar21;
      *(byte *)(param_1 + 0x5b46) = bVar22;
      *(byte *)(param_1 + 0x5b47) = bVar23;
      *(byte *)(param_1 + 0x5b48) = bVar13;
      *(byte *)(param_1 + 0x5b36) = bVar6;
      *(byte *)(param_1 + 0x5b51) = bVar32;
      *(byte *)(param_1 + 0x5b49) = bVar24;
      *(byte *)(param_1 + 0x5b4a) = bVar25;
      *(byte *)(param_1 + 0x5b4b) = bVar26;
      *(byte *)(param_1 + 0x5b4c) = bVar27;
      *(byte *)(param_1 + 0x5b4d) = bVar28;
      *(byte *)(param_1 + 0x5b4e) = bVar29;
      *(byte *)(param_1 + 0x5b4f) = bVar30;
      *(byte *)(param_1 + 0x5b37) = bVar14;
      *(byte *)(param_1 + 0x5b50) = bVar31;
      *(byte *)(param_1 + 0x5b38) = bVar7;
      *(byte *)(param_1 + 0x5b39) = bVar8;
      *(byte *)(param_1 + 0x5b3a) = bVar15;
      *(undefined8 *)(param_1 + 0x5b54) = local_a4;
      *(undefined8 *)(param_1 + 0x5b5c) = uStack_9c;
      *(undefined4 *)(param_1 + 0x5b64) = local_94;
    }
    FUN__text__001be9b0(param_1);
    FUN__text__001bc4a0(*(undefined8 *)(*(long *)(param_1 + 0x38) + 0x68),0,0,0);
    FUN__text__001bc4a0(*(undefined8 *)(*(long *)(param_1 + 0x38) + 0x88),0,0,0);
    FUN__text__001be228(param_1,&local_a4);
    iVar39 = *(int *)(param_1 + 0x5b6c);
    *(undefined1 *)(param_1 + 0x5b69) = 0;
  }
  *(int *)(param_1 + 0x5b6c) = iVar39 + 1;
LAB__text__001b60c8:
  if (lVar50 != 0) {
    (**(code **)(*(long *)(lVar50 + 0x48) + 0x18))((long *)(lVar50 + 0x48));
  }
  if (lVar47 != 0) {
    (**(code **)(*(long *)(lVar47 + 0x48) + 0x18))((long *)(lVar47 + 0x48));
  }
  return;
}


