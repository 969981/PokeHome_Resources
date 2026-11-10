/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00259690; name: FUN_.text__00259690
 */


void FUN__text__00259690(long param_1,uint param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  int iVar11;
  bool bVar12;
  byte bVar13;
  char cVar14;
  char cVar15;
  byte bVar16;
  undefined2 uVar17;
  uint uVar18;
  uint uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  int iVar27;
  long lVar28;
  long lVar29;
  ulong uVar30;
  ulong uVar31;
  long lVar32;
  undefined8 uVar33;
  undefined8 *puVar34;
  ulong uVar35;
  long *plVar36;
  long lVar37;
  long lVar38;
  undefined8 uVar39;
  long lVar40;
  long lVar41;
  undefined8 uVar42;
  undefined8 *puVar43;
  long lVar44;
  ulong uVar45;
  long lVar46;
  long local_200 [30];
  long local_110;
  long local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8 [4];
  ulong local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  long local_78;
  undefined8 local_70 [2];
  
  lVar41 = *(long *)(param_1 + 0x2d0);
  uVar45 = (ulong)param_2;
  if (lVar41 != 0) {
    plVar36 = (long *)(lVar41 + 0x48);
    (**(code **)(*plVar36 + 0x10))(plVar36);
    (**(code **)(*plVar36 + 0x18))(plVar36);
  }
  lVar37 = *(long *)(param_1 + 0x640);
  if (lVar37 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl();
  }
  local_200[0] = *(long *)(param_1 + 0xfe0);
  if (local_200[0] != 0) {
    (**(code **)(*(long *)(local_200[0] + 0x48) + 0x10))();
  }
  FUN__text__0024efa0(lVar37,local_200,(undefined4 *)(param_1 + 0x1004),param_3);
  if (local_200[0] != 0) {
    (**(code **)(*(long *)(local_200[0] + 0x48) + 0x18))();
  }
  iVar11 = *(int *)(param_1 + 0x1004);
  local_78 = *(long *)(param_1 + 0xfe0);
  iVar27 = 3;
  if (iVar11 != 0) {
    iVar27 = iVar11;
  }
  *(int *)(param_1 + 0x1000) = iVar27;
  *(bool *)(param_1 + 0x1008) = iVar11 == 0;
  if (local_78 != 0) {
    (**(code **)(*(long *)(local_78 + 0x48) + 0x10))();
  }
  uVar42 = *(undefined8 *)(*(long *)(param_1 + 0x60) + 0xb0);
  local_200[2] = 0x1c;
  local_200[3] = 0;
  local_200[0] = -0x6b0f54948f1853c1;
  local_200[1] = 0x719f5d;
  FUN__text__00115650(&local_98,uVar42,local_200,0xb);
  lVar37 = *(long *)(local_98 + 0x60);
  if ((lVar37 == 0) || ((**(code **)(*(long *)(lVar37 + 0x48) + 0x10))(), local_98 != 0)) {
    (**(code **)(*(long *)(local_98 + 0x48) + 0x18))();
    local_98 = 0;
  }
  if (local_200[3] != 0) {
    (**(code **)(*(long *)(local_200[3] + 0x48) + 0x18))();
  }
  lVar38 = *(long *)(param_1 + 0x2d0);
  if (lVar38 != 0) {
    (**(code **)(*(long *)(lVar38 + 0x48) + 0x10))();
  }
  lVar46 = *(long *)(lVar38 + 0x2e0);
  if (lVar46 != 0) {
    (**(code **)(*(long *)(lVar46 + 0x48) + 0x10))();
  }
  (**(code **)(*(long *)(lVar38 + 0x48) + 0x18))((long *)(lVar38 + 0x48));
  bVar13 = FUN__text__00306a08(local_78,2);
  uVar18 = FUN__text__00306a08(local_78,1);
  if (param_2 == 0) {
    FUN__text__0025b7c8(param_1,param_3);
    FUN__text__002575d4(param_1);
    uVar39 = 0x72cc08;
    lVar38 = *(long *)(param_1 + 0x558);
  }
  else {
    uVar39 = 0x72cc10;
    lVar38 = *(long *)(param_1 + 0x558);
  }
  if (lVar38 != 0) {
    (**(code **)(*(long *)(lVar38 + 0x48) + 0x10))();
  }
  lVar28 = FUN__text__003c79c0(*(undefined8 *)(param_1 + 0x2d0),uVar39);
  *(byte *)(lVar28 + 0x58) = *(byte *)(lVar28 + 0x58) & 0xfe | ~bVar13 & 1;
  if ((bVar13 & 1) == 0) {
    local_200[0] = -0x4aa8adfcccb32f7;
    lVar28 = *(long *)(lVar41 + 0x2e8);
    if (lVar28 == 0) {
      FUN__text__005f2d98(lVar37,local_200,0);
    }
    else {
      plVar36 = (long *)(lVar28 + 0x48);
      (**(code **)(*plVar36 + 0x10))(plVar36);
      FUN__text__005f2d98(lVar37,local_200,lVar28);
      (**(code **)(*plVar36 + 0x18))(plVar36);
    }
    uVar20 = FUN__text__003065f8(local_78);
    FUN__text__00165904(lVar46,0,uVar20);
    FUN__text__003c8c20(lVar41,uVar39,0xb);
    plVar36 = (long *)0x72cc18;
    if (param_2 != 0) {
      plVar36 = (long *)&DAT_0072cc20;
    }
    lVar28 = FUN__text__003c79c0(*(undefined8 *)(param_1 + 0x2d0),plVar36);
    *(byte *)(lVar28 + 0x58) = *(byte *)(lVar28 + 0x58) | 1;
    uVar20 = FUN__text__0030673c(local_78);
    lVar28 = *plVar36;
    uVar39 = 0;
    if ((lVar28 != -0x340d631b7bddd9bb) && (lVar28 != 0)) {
      local_200[0] = lVar28;
      uVar39 = FUN__text__00155100(*(undefined8 *)(param_1 + 0x2d0),local_200);
    }
    FUN__text__003d3dac(lVar38,uVar20,0,uVar39,0,0);
    plVar36 = (long *)0x72cc28;
    if (param_2 != 0) {
      plVar36 = (long *)&DAT_0072cc30;
    }
    lVar28 = FUN__text__003c79c0(*(undefined8 *)(param_1 + 0x2d0),plVar36);
    cVar14 = FUN__text__0030673c(local_78);
    cVar15 = FUN__text__0030679c(local_78);
    if (cVar14 == cVar15) goto LAB__text__00259a84;
    *(byte *)(lVar28 + 0x58) = *(byte *)(lVar28 + 0x58) | 1;
    uVar20 = FUN__text__0030679c(local_78);
    lVar28 = *plVar36;
    uVar39 = 0;
    if ((lVar28 != -0x340d631b7bddd9bb) && (lVar28 != 0)) {
      local_200[0] = lVar28;
      uVar39 = FUN__text__00155100(*(undefined8 *)(param_1 + 0x2d0),local_200);
    }
    FUN__text__003d3dac(lVar38,uVar20,0,uVar39,0,0);
  }
  else {
    puVar1 = (undefined1 *)0x72cc18;
    if (param_2 != 0) {
      puVar1 = &DAT_0072cc20;
    }
    puVar2 = (undefined1 *)0x72cc28;
    if (param_2 != 0) {
      puVar2 = &DAT_0072cc30;
    }
    lVar28 = FUN__text__003c79c0(*(undefined8 *)(param_1 + 0x2d0),puVar1);
    *(byte *)(lVar28 + 0x58) = *(byte *)(lVar28 + 0x58) & 0xfe;
    lVar28 = FUN__text__003c79c0(*(undefined8 *)(param_1 + 0x2d0),puVar2);
LAB__text__00259a84:
    *(byte *)(lVar28 + 0x58) = *(byte *)(lVar28 + 0x58) & 0xfe;
  }
  bVar12 = param_2 != 0;
  local_200[0] = -0x94dd884e55554ab;
  if (bVar12) {
    local_200[0] = -0x781e1faf0a726d28;
  }
  local_200[1] = 0xf6b2267b1aaaa9a2;
  if (bVar12) {
    local_200[1] = 0x87e1e150f58d948b;
  }
  local_200[2] = 0xf6b2257b1aaaa7ef;
  if (bVar12) {
    local_200[2] = 0x87e1e250f58d963e;
  }
  local_200[3] = 0xf6b2247b1aaaa63c;
  if (bVar12) {
    local_200[3] = 0x87e1e350f58d97f1;
  }
  local_98 = 0xe603c93a00b8dedb;
  if (bVar12) {
    local_98 = 0x7a5e1f0d75555e62;
  }
  uStack_90 = 0x3dc341b0e5b96d70;
  if (bVar12) {
    uStack_90 = 0xd71e7d69f0a99365;
  }
  local_88 = 0x624d5b0f3537e179;
  if (bVar12) {
    local_88 = 0x7d119193f5608acc;
  }
  uStack_80 = 0xbfa2e3da6ee45886;
  if (bVar12) {
    uStack_80 = 0x2c36104c076964a7;
  }
  local_b8[0] = 0xb6ac06e4fc3f8287;
  if (bVar12) {
    local_b8[0] = 0x33460fa6c7f932c0;
  }
  local_b8[1] = 0x450e32b8cdaa8966;
  if (bVar12) {
    local_b8[1] = 0x30177969aa1a3a51;
  }
  local_b8[2] = 0x7d67b47967d62895;
  if (bVar12) {
    local_b8[2] = 0xda7b92f9d2a5d8d2;
  }
  local_b8[3] = 0x444eddb4dbb664d4;
  if (bVar12) {
    local_b8[3] = 0xe906337390c5513;
  }
  local_d8 = 0x1a9fb06465243916;
  if (bVar12) {
    local_d8 = 0x7a6142f90dfd2d;
  }
  uStack_d0 = 0x929db51c0dba150f;
  if (bVar12) {
    uStack_d0 = 0x94cc81edbf7374ac;
  }
  local_c8 = 0x7f54795e9d3b7330;
  if (bVar12) {
    local_c8 = 0x17bf0a4b04ef133b;
  }
  uStack_c0 = 0xe550ca041bb8df41;
  if (bVar12) {
    uStack_c0 = 0x676202e3deb542a2;
  }
  local_f8 = 0x521489ac8a475731;
  if (bVar12) {
    local_f8 = 0xc77d489e6000e13e;
  }
  uStack_f0 = 0x6cb01da094e78730;
  if (bVar12) {
    uStack_f0 = 0xc74340fc891e8c4f;
  }
  local_e8 = 0xe19ebd6a4b41e77b;
  if (bVar12) {
    local_e8 = 0x67679367bdf4c234;
  }
  uStack_e0 = 0xd2508192f763e2a;
  if (bVar12) {
    uStack_e0 = 0x7879b71b91f735f5;
  }
  lVar28 = param_1 + 0x110;
  lVar29 = FUN__text__00325bc0();
  iVar27 = *(int *)(lVar29 + 0x2c);
  if (iVar27 == 0) {
    uVar19 = FUN__text__0016af80(*(undefined4 *)(param_1 + 0x1000));
  }
  else {
    lVar29 = FUN__text__00325bc0();
    uVar19 = FUN__text__0016af80(*(undefined4 *)(lVar29 + 0x2c));
    lVar29 = FUN__text__00325bc0();
    uVar30 = FUN__text__0019513c(&local_78,*(undefined4 *)(lVar29 + 0x2c));
    if ((uVar30 & 1) == 0) {
      uVar19 = 0;
    }
  }
  uVar31 = FUN__text__0030672c(local_78);
  uVar35 = -(ulong)(param_2 >> 0x1f) & 0xffffffe000000000 | uVar45 << 5;
  lVar40 = uVar35 + 0x72bfa0;
  lVar29 = 0;
  uVar30 = 0;
  lVar44 = uVar35 + 0x72bfe0;
  do {
    lVar32 = FUN__text__003c79c0(*(undefined8 *)(param_1 + 0x2d0),(long)local_200 + lVar29);
    if ((bVar13 & 1) == 0 && uVar30 < (uVar31 & 0xff)) {
      *(byte *)(lVar32 + 0x58) = *(byte *)(lVar32 + 0x58) | 1;
      uVar20 = FUN__text__00306724(local_78,uVar30 & 0xffffffff);
      local_70[0] = 0xfb51ef203331b380;
      lVar32 = *(long *)(lVar41 + 0x2e8);
      if (lVar32 == 0) {
        FUN__text__005f2d98(lVar37,local_70,0);
      }
      else {
        plVar36 = (long *)(lVar32 + 0x48);
        (**(code **)(*plVar36 + 0x10))(plVar36);
        FUN__text__005f2d98(lVar37,local_70,lVar32);
        (**(code **)(*plVar36 + 0x18))(plVar36);
      }
      FUN__text__00166108(lVar46,0,uVar20);
      FUN__text__003c8c20(lVar41,(long)local_b8 + lVar29 + 0x20,0xb);
      uVar39 = *(undefined8 *)((long)local_b8 + lVar29);
      local_70[0] = uVar39;
      lVar32 = FUN__text__00155100(*(undefined8 *)(param_1 + 0x2d0),local_70);
      *(byte *)(lVar32 + 0x58) = *(byte *)(lVar32 + 0x58) | 1;
      uVar21 = FUN__text__0025c534(param_1,&local_78,uVar20);
      local_70[0] = uVar39;
      uVar39 = FUN__text__00155100(*(undefined8 *)(param_1 + 0x2d0),local_70);
      FUN__text__003d3dac(lVar38,uVar21,0,uVar39,0,0);
      if ((((uVar19 & 0xff) == 0) || (iVar27 == 0)) ||
         (*(int *)(*(long *)(param_1 + 0x640) + 0x70) == 1)) goto LAB__text__0025a090;
      uVar35 = FUN__text__00321bb0(uVar19,uVar20);
      local_70[0] = *(undefined8 *)(lVar40 + lVar29);
      local_100 = *(undefined8 *)(lVar44 + lVar29);
      puVar43 = local_70;
      puVar34 = &local_100;
      if ((uVar35 & 1) == 0) {
        puVar43 = &local_100;
        puVar34 = local_70;
      }
    }
    else {
      *(byte *)(lVar32 + 0x58) = *(byte *)(lVar32 + 0x58) & 0xfe;
LAB__text__0025a090:
      local_70[0] = *(undefined8 *)(lVar40 + lVar29);
      puVar43 = local_70;
      local_100 = *(undefined8 *)(lVar44 + lVar29);
      puVar34 = &local_100;
    }
    FUN__text__0012c898(lVar28,puVar34);
    FUN__text__0012c378(lVar28,puVar43);
    lVar32 = FUN__text__003c79c0(*(undefined8 *)(param_1 + 0x2d0),(long)local_b8 + lVar29 + -0x20);
    uVar35 = FUN__text__003279b0(*(undefined4 *)(param_1 + 0x1000));
    if ((uVar35 & 1) == 0) {
      bVar16 = 0;
    }
    else {
      uVar39 = FUN__text__00306bc4(local_78);
      uVar20 = FUN__text__00306724(local_78,uVar30 & 0xffffffff);
      bVar16 = FUN__text__00635280(uVar39,uVar20);
    }
    *(byte *)(lVar32 + 0x58) = *(byte *)(lVar32 + 0x58) & 0xfe | bVar16 & 1;
    lVar32 = FUN__text__003c79c0(*(undefined8 *)(param_1 + 0x2d0),(long)local_b8 + lVar29 + -0x40);
    uVar35 = FUN__text__003279d0(*(undefined4 *)(param_1 + 0x1000));
    if ((uVar35 & 1) == 0) {
      bVar16 = 0;
    }
    else {
      uVar39 = FUN__text__00306bc4(local_78);
      uVar20 = FUN__text__00306724(local_78,uVar30 & 0xffffffff);
      bVar16 = FUN__text__00635e38(uVar39,uVar20);
    }
    lVar29 = lVar29 + 8;
    uVar30 = uVar30 + 1;
    *(byte *)(lVar32 + 0x58) = *(byte *)(lVar32 + 0x58) & 0xfe | bVar16 & 1;
  } while (lVar29 != 0x20);
  bVar12 = param_2 != 0;
  local_200[0] = 0x352c94e44838dada;
  if (bVar12) {
    local_200[0] = -0x5dec877c0c1a3ec9;
  }
  local_200[1] = 0x80cc52f91da3ae1f;
  if (bVar12) {
    local_200[1] = 0x8da38ffea6afc952;
  }
  local_200[2] = 0x86ec5debf846bfc;
  if (bVar12) {
    local_200[2] = 0xaf08875b6615bc19;
  }
  local_200[3] = -0x1ba672f9a84011ff;
  if (bVar12) {
    local_200[3] = 0x4a5321a2e82261b4;
  }
  local_200[4] = 0xe9fc5bfa6045e236;
  if (bVar12) {
    local_200[4] = 0xb2cf4599b43b04b3;
  }
  uVar30 = 0x3d65c8c765ee9b54;
  if (bVar12) {
    uVar30 = 0xcba89be3bc8ed887;
  }
  uVar31 = 0x5747d180a9aeba49;
  if (bVar12) {
    uVar31 = 0x4dca667afe87fed6;
  }
  uVar35 = 0x9909a4614e2aaeae;
  if (bVar12) {
    uVar35 = 0x9ed0dc70efe4f691;
  }
  uVar3 = 0x5c5d0622d76803bb;
  if (bVar12) {
    uVar3 = 0xb9fc8e632e9453f8;
  }
  uVar4 = 0xafaa53d31a6ce401;
  if (bVar12) {
    uVar4 = 0x91fbf43bda734c84;
  }
  uVar5 = 0x6ca46cfffdb9309c;
  if (bVar12) {
    uVar5 = 0xe8f2d4c2756f2669;
  }
  uVar6 = 0xd1839ecab97fa143;
  if (bVar12) {
    uVar6 = 0x71dd2bac5745cb56;
  }
  uVar7 = 0x3941446450d039ae;
  if (bVar12) {
    uVar7 = 0xbe06d2eceb9fd18b;
  }
  uVar8 = 0x136093703cbea055;
  if (bVar12) {
    uVar8 = 0x48f763c5d304b378;
  }
  uVar9 = 0xab9f8fe1d455f6df;
  if (bVar12) {
    uVar9 = 0x685806525f3c7d5c;
  }
  uVar19 = FUN__text__00306afc(local_78);
  lVar29 = FUN__text__003c79c0(*(undefined8 *)(param_1 + 0x2d0),local_200);
  local_98 = uVar9;
  uVar39 = FUN__text__00155100(*(undefined8 *)(param_1 + 0x2d0),&local_98);
  local_98 = uVar4;
  uVar33 = FUN__text__00155100(*(undefined8 *)(param_1 + 0x2d0),&local_98);
  if (uVar19 == 0) {
    *(byte *)(lVar29 + 0x58) = *(byte *)(lVar29 + 0x58) & 0xfe;
  }
  else {
    *(byte *)(lVar29 + 0x58) = *(byte *)(lVar29 + 0x58) | 1;
    lVar29 = *(long *)(param_1 + 0x588);
    if (lVar29 != 0) {
      (**(code **)(*(long *)(lVar29 + 0x48) + 0x10))();
    }
    uVar20 = FUN__text__00306af0(local_78,0);
    FUN__text__003c61b8(lVar29,uVar20,uVar39,uVar33,0,0);
    (**(code **)(*(long *)(lVar29 + 0x48) + 0x18))((long *)(lVar29 + 0x48));
  }
  lVar29 = FUN__text__003c79c0(*(undefined8 *)(param_1 + 0x2d0),local_200 + 1);
  local_98 = uVar30;
  uVar39 = FUN__text__00155100(*(undefined8 *)(param_1 + 0x2d0),&local_98);
  local_98 = uVar5;
  uVar33 = FUN__text__00155100(*(undefined8 *)(param_1 + 0x2d0),&local_98);
  if (uVar19 < 2) {
    *(byte *)(lVar29 + 0x58) = *(byte *)(lVar29 + 0x58) & 0xfe;
  }
  else {
    *(byte *)(lVar29 + 0x58) = *(byte *)(lVar29 + 0x58) | 1;
    lVar29 = *(long *)(param_1 + 0x588);
    if (lVar29 != 0) {
      (**(code **)(*(long *)(lVar29 + 0x48) + 0x10))();
    }
    uVar20 = FUN__text__00306af0(local_78,1);
    FUN__text__003c61b8(lVar29,uVar20,uVar39,uVar33,0,0);
    (**(code **)(*(long *)(lVar29 + 0x48) + 0x18))((long *)(lVar29 + 0x48));
  }
  lVar29 = FUN__text__003c79c0(*(undefined8 *)(param_1 + 0x2d0),local_200 + 2);
  local_98 = uVar31;
  uVar39 = FUN__text__00155100(*(undefined8 *)(param_1 + 0x2d0),&local_98);
  local_98 = uVar6;
  uVar33 = FUN__text__00155100(*(undefined8 *)(param_1 + 0x2d0),&local_98);
  if (uVar19 < 3) {
    *(byte *)(lVar29 + 0x58) = *(byte *)(lVar29 + 0x58) & 0xfe;
  }
  else {
    *(byte *)(lVar29 + 0x58) = *(byte *)(lVar29 + 0x58) | 1;
    lVar29 = *(long *)(param_1 + 0x588);
    if (lVar29 != 0) {
      (**(code **)(*(long *)(lVar29 + 0x48) + 0x10))();
    }
    uVar20 = FUN__text__00306af0(local_78,2);
    FUN__text__003c61b8(lVar29,uVar20,uVar39,uVar33,0,0);
    (**(code **)(*(long *)(lVar29 + 0x48) + 0x18))((long *)(lVar29 + 0x48));
  }
  lVar29 = FUN__text__003c79c0(*(undefined8 *)(param_1 + 0x2d0),local_200 + 3);
  local_98 = uVar35;
  uVar39 = FUN__text__00155100(*(undefined8 *)(param_1 + 0x2d0),&local_98);
  local_98 = uVar7;
  uVar33 = FUN__text__00155100(*(undefined8 *)(param_1 + 0x2d0),&local_98);
  if (uVar19 < 4) {
    *(byte *)(lVar29 + 0x58) = *(byte *)(lVar29 + 0x58) & 0xfe;
  }
  else {
    *(byte *)(lVar29 + 0x58) = *(byte *)(lVar29 + 0x58) | 1;
    lVar29 = *(long *)(param_1 + 0x588);
    if (lVar29 != 0) {
      (**(code **)(*(long *)(lVar29 + 0x48) + 0x10))();
    }
    uVar20 = FUN__text__00306af0(local_78,3);
    FUN__text__003c61b8(lVar29,uVar20,uVar39,uVar33,0,0);
    (**(code **)(*(long *)(lVar29 + 0x48) + 0x18))((long *)(lVar29 + 0x48));
  }
  lVar29 = FUN__text__003c79c0(*(undefined8 *)(param_1 + 0x2d0),local_200 + 4);
  local_98 = uVar3;
  uVar39 = FUN__text__00155100(*(undefined8 *)(param_1 + 0x2d0),&local_98);
  local_98 = uVar8;
  uVar33 = FUN__text__00155100(*(undefined8 *)(param_1 + 0x2d0),&local_98);
  if (uVar19 < 5) {
    *(byte *)(lVar29 + 0x58) = *(byte *)(lVar29 + 0x58) & 0xfe;
    if ((bVar13 & 1) == 0) goto LAB__text__0025a738;
LAB__text__0025a7a4:
    uVar39 = 0x72cc38;
    if (param_2 != 0) {
      uVar39 = 0x72cc40;
    }
    if (lVar37 != 0) {
      (**(code **)(*(long *)(lVar37 + 0x48) + 0x10))();
    }
    local_200[0] = 0x47cad2038879eee;
    lVar29 = *(long *)(*(long *)(param_1 + 0x2d0) + 0x2e8);
    if (lVar29 != 0) {
      (**(code **)(*(long *)(lVar29 + 0x48) + 0x10))();
    }
    FUN__text__005f2d98(lVar37,local_200,lVar29);
    uVar33 = FUN__text__005f3244(lVar29);
    FUN__text__0012c9f0(lVar28,uVar39,uVar33,0xb);
    (**(code **)(*(long *)(lVar29 + 0x48) + 0x18))((long *)(lVar29 + 0x48));
    if (lVar37 == 0) {
      if ((bVar13 & 1) != 0) {
        uVar42 = 0x72cc48;
        if (param_2 != 0) {
          uVar42 = 0x72cc50;
        }
        lVar41 = *(long *)(*(long *)(param_1 + 0x2d0) + 0x2e8);
        goto joined_r0x0025a9f0;
      }
    }
    else {
      (**(code **)(*(long *)(lVar37 + 0x48) + 0x18))();
      if ((bVar13 & 1) != 0) {
        uVar42 = 0x72cc48;
        if (param_2 != 0) {
          uVar42 = 0x72cc50;
        }
        (**(code **)(*(long *)(lVar37 + 0x48) + 0x10))();
        lVar41 = *(long *)(*(long *)(param_1 + 0x2d0) + 0x2e8);
joined_r0x0025a9f0:
        local_200[0] = 0x47cad2038879eee;
        if (lVar41 != 0) {
          local_200[0] = 0x47cad2038879eee;
          (**(code **)(*(long *)(lVar41 + 0x48) + 0x10))();
        }
        FUN__text__005f2d98(lVar37,local_200,lVar41);
        uVar39 = FUN__text__005f3244(lVar41);
        FUN__text__0012c9f0(lVar28,uVar42,uVar39,0xb);
        (**(code **)(*(long *)(lVar41 + 0x48) + 0x18))((long *)(lVar41 + 0x48));
        if (lVar37 == 0) {
          uVar42 = 0x72cc58;
          if (param_2 != 0) {
            uVar42 = 0x72cc60;
          }
          lVar41 = *(long *)(*(long *)(param_1 + 0x2d0) + 0x2e8);
        }
        else {
          plVar36 = (long *)(lVar37 + 0x48);
          (**(code **)(*plVar36 + 0x18))(plVar36);
          uVar42 = 0x72cc58;
          if (param_2 != 0) {
            uVar42 = 0x72cc60;
          }
          (**(code **)(*plVar36 + 0x10))(plVar36);
          lVar41 = *(long *)(*(long *)(param_1 + 0x2d0) + 0x2e8);
        }
        local_200[0] = 0x47cad2038879eee;
        if (lVar41 != 0) {
          local_200[0] = 0x47cad2038879eee;
          (**(code **)(*(long *)(lVar41 + 0x48) + 0x10))();
        }
        FUN__text__005f2d98(lVar37,local_200,lVar41);
        uVar39 = FUN__text__005f3244(lVar41);
        FUN__text__0012c9f0(lVar28,uVar42,uVar39,0xb);
        (**(code **)(*(long *)(lVar41 + 0x48) + 0x18))((long *)(lVar41 + 0x48));
        if (lVar37 == 0) {
          uVar42 = 0x72cc68;
          if (param_2 != 0) {
            uVar42 = 0x72cc70;
          }
        }
        else {
          plVar36 = (long *)(lVar37 + 0x48);
          (**(code **)(*plVar36 + 0x18))(plVar36);
          uVar42 = 0x72cc68;
          if (param_2 != 0) {
            uVar42 = 0x72cc70;
          }
          (**(code **)(*plVar36 + 0x10))(plVar36);
        }
        local_200[0] = 0x491342038992d5d;
        lVar41 = *(long *)(*(long *)(param_1 + 0x2d0) + 0x2e8);
        if (lVar41 != 0) {
          (**(code **)(*(long *)(lVar41 + 0x48) + 0x10))();
        }
        FUN__text__005f2d98(lVar37,local_200,lVar41);
        uVar39 = FUN__text__005f3244(lVar41);
        FUN__text__0012c9f0(lVar28,uVar42,uVar39,0xb);
        (**(code **)(*(long *)(lVar41 + 0x48) + 0x18))((long *)(lVar41 + 0x48));
        if (lVar37 == 0) {
          uVar42 = 0x72cc78;
          if (param_2 != 0) {
            uVar42 = 0x72cc80;
          }
          lVar41 = *(long *)(*(long *)(param_1 + 0x2d0) + 0x2e8);
        }
        else {
          plVar36 = (long *)(lVar37 + 0x48);
          (**(code **)(*plVar36 + 0x18))(plVar36);
          uVar42 = 0x72cc78;
          if (param_2 != 0) {
            uVar42 = 0x72cc80;
          }
          (**(code **)(*plVar36 + 0x10))(plVar36);
          lVar41 = *(long *)(*(long *)(param_1 + 0x2d0) + 0x2e8);
        }
        local_200[0] = 0x491342038992d5d;
        if (lVar41 != 0) {
          local_200[0] = 0x491342038992d5d;
          (**(code **)(*(long *)(lVar41 + 0x48) + 0x10))();
        }
        FUN__text__005f2d98(lVar37,local_200,lVar41);
        uVar39 = FUN__text__005f3244(lVar41);
        FUN__text__0012c9f0(lVar28,uVar42,uVar39,0xb);
        (**(code **)(*(long *)(lVar41 + 0x48) + 0x18))((long *)(lVar41 + 0x48));
        plVar36 = (long *)(lVar37 + 0x48);
        (**(code **)(*plVar36 + 0x18))(plVar36);
        bVar12 = param_2 != 0;
        uVar42 = 0x72cc88;
        if (bVar12) {
          uVar42 = 0x72cc90;
        }
        uVar39 = 0x72cc98;
        if (bVar12) {
          uVar39 = 0x72cca0;
        }
        uVar33 = 0x72cca8;
        if (bVar12) {
          uVar33 = 0x72ccb0;
        }
        lVar41 = FUN__text__003c79c0(*(undefined8 *)(param_1 + 0x2d0),uVar42);
        *(byte *)(lVar41 + 0x58) = *(byte *)(lVar41 + 0x58) & 0xfe;
        lVar41 = FUN__text__003c79c0(*(undefined8 *)(param_1 + 0x2d0),uVar39);
        *(byte *)(lVar41 + 0x58) = *(byte *)(lVar41 + 0x58) & 0xfe;
        (**(code **)(*plVar36 + 0x10))(plVar36);
        local_200[0] = -0x4a706dfccc81cd4;
        lVar41 = *(long *)(*(long *)(param_1 + 0x2d0) + 0x2e8);
        if (lVar41 != 0) {
          (**(code **)(*(long *)(lVar41 + 0x48) + 0x10))();
        }
        FUN__text__005f2d98(lVar37,local_200,lVar41);
        uVar42 = FUN__text__005f3244(lVar41);
        FUN__text__0012c9f0(lVar28,uVar33,uVar42,0xb);
        (**(code **)(*(long *)(lVar41 + 0x48) + 0x18))((long *)(lVar41 + 0x48));
        (**(code **)(*(long *)(lVar37 + 0x48) + 0x18))();
        FUN__text__002579c0(param_1,uVar45,param_3);
        goto joined_r0x0025ac68;
      }
    }
  }
  else {
    *(byte *)(lVar29 + 0x58) = *(byte *)(lVar29 + 0x58) | 1;
    lVar29 = *(long *)(param_1 + 0x588);
    if (lVar29 != 0) {
      (**(code **)(*(long *)(lVar29 + 0x48) + 0x10))();
    }
    uVar20 = FUN__text__00306af0(local_78,4);
    FUN__text__003c61b8(lVar29,uVar20,uVar39,uVar33,0,0);
    (**(code **)(*(long *)(lVar29 + 0x48) + 0x18))((long *)(lVar29 + 0x48));
    if ((bVar13 & 1) != 0) goto LAB__text__0025a7a4;
LAB__text__0025a738:
    uVar30 = FUN__text__00196294(&local_78,*(undefined4 *)(param_1 + 0x1004));
    if ((uVar30 & 1) == 0) goto LAB__text__0025a7a4;
    local_200[0] = 0x4839a20388d9d53;
    lVar29 = *(long *)(lVar41 + 0x2e8);
    if (lVar29 == 0) {
      FUN__text__005f2d98(lVar37,local_200,0);
    }
    else {
      plVar36 = (long *)(lVar29 + 0x48);
      (**(code **)(*plVar36 + 0x10))(plVar36);
      FUN__text__005f2d98(lVar37,local_200,lVar29);
      (**(code **)(*plVar36 + 0x18))(plVar36);
    }
    uVar20 = FUN__text__00306638(local_78);
    FUN__text__00165e88(lVar46,0,uVar20);
    uVar39 = 0x72cc38;
    if (param_2 != 0) {
      uVar39 = 0x72cc40;
    }
    FUN__text__003c8c20(lVar41,uVar39,0xb);
  }
  lVar29 = *(long *)(lVar41 + 0x2e8);
  local_200[0] = -0x47e7cdfcca5e042;
  if (lVar29 == 0) {
    FUN__text__005f2d98(lVar37,local_200,0);
  }
  else {
    plVar36 = (long *)(lVar29 + 0x48);
    (**(code **)(*plVar36 + 0x10))(plVar36);
    FUN__text__005f2d98(lVar37,local_200,lVar29);
    (**(code **)(*plVar36 + 0x18))(plVar36);
  }
  uVar20 = FUN__text__00306630(local_78);
  FUN__text__00165fc8(lVar46,0,uVar20);
  uVar39 = 0x72cc48;
  if (param_2 != 0) {
    uVar39 = 0x72cc50;
  }
  FUN__text__003c8c20(lVar41,uVar39,0xb);
  lVar29 = *(long *)(lVar41 + 0x2e8);
  local_200[0] = 0x47cae203887a0a1;
  if (lVar29 == 0) {
    FUN__text__005f2d98(lVar37,local_200,0);
  }
  else {
    plVar36 = (long *)(lVar29 + 0x48);
    (**(code **)(*plVar36 + 0x10))(plVar36);
    FUN__text__005f2d98(lVar37,local_200,lVar29);
    (**(code **)(*plVar36 + 0x18))(plVar36);
  }
  uVar17 = FUN__text__003068a0(local_78);
  FUN__text__00166248(lVar46,0,uVar17,1);
  uVar39 = 0x72cc58;
  if (param_2 != 0) {
    uVar39 = 0x72cc60;
  }
  FUN__text__003c8c20(lVar41,uVar39,0xb);
  lVar29 = *(long *)(lVar41 + 0x2e8);
  local_200[0] = 0x48dad2038961221;
  if (lVar29 == 0) {
    FUN__text__005f2d98(lVar37,local_200,0);
  }
  else {
    plVar36 = (long *)(lVar29 + 0x48);
    (**(code **)(*plVar36 + 0x10))(plVar36);
    FUN__text__005f2d98(lVar37,local_200,lVar29);
    (**(code **)(*plVar36 + 0x18))(plVar36);
  }
  FUN__text__00165c48(lVar46,0,&local_78);
  uVar39 = 0x72cc68;
  if (param_2 != 0) {
    uVar39 = 0x72cc70;
  }
  FUN__text__003c8c20(lVar41,uVar39,0xb);
  uVar39 = FUN__text__00306bc4(local_78);
  uVar30 = FUN__text__00205e30(uVar39,&local_98);
  lVar29 = *(long *)(lVar41 + 0x2e8);
  uVar20 = 5;
  if ((uVar30 & 1) != 0) {
    uVar20 = 6;
  }
  local_200[0] = 0x491312038992844;
  if (lVar29 == 0) {
    FUN__text__005f2d98(lVar37,local_200,0);
    lVar29 = *(long *)(lVar41 + 0x2e0);
  }
  else {
    plVar36 = (long *)(lVar29 + 0x48);
    (**(code **)(*plVar36 + 0x10))(plVar36);
    FUN__text__005f2d98(lVar37,local_200,lVar29);
    (**(code **)(*plVar36 + 0x18))(plVar36);
    lVar29 = *(long *)(lVar41 + 0x2e0);
  }
  if (lVar29 != 0) {
    (**(code **)(*(long *)(lVar29 + 0x48) + 0x10))();
  }
  FUN__text__00166508(lVar29,0,local_98 & 0xffffffff,uVar20,2,1);
  (**(code **)(*(long *)(lVar29 + 0x48) + 0x18))((long *)(lVar29 + 0x48));
  bVar12 = param_2 != 0;
  uVar39 = 0x72cc78;
  if (bVar12) {
    uVar39 = 0x72cc80;
  }
  uVar33 = 0x72cc88;
  if (bVar12) {
    uVar33 = 0x72cc90;
  }
  uVar10 = 0x72cc98;
  if (bVar12) {
    uVar10 = 0x72cca0;
  }
  FUN__text__003c8c20(lVar41,uVar39,0xb);
  lVar29 = FUN__text__003c79c0(*(undefined8 *)(param_1 + 0x2d0),uVar33);
  *(byte *)(lVar29 + 0x58) = *(byte *)(lVar29 + 0x58) | 1;
  lVar29 = FUN__text__003c79c0(*(undefined8 *)(param_1 + 0x2d0),uVar10);
  local_200[0] = 0x4ced5141a6dbd3c6;
  local_200[1] = 0x71f238;
  *(byte *)(lVar29 + 0x58) = *(byte *)(lVar29 + 0x58) | 1;
  local_200[2] = 0x1a;
  local_200[3] = 0;
  FUN__text__00115650(&local_98,uVar42,local_200,0xb);
  lVar29 = *(long *)(local_98 + 0x60);
  if ((lVar29 == 0) || ((**(code **)(*(long *)(lVar29 + 0x48) + 0x10))(), local_98 != 0)) {
    (**(code **)(*(long *)(local_98 + 0x48) + 0x18))();
    local_98 = 0;
  }
  uVar42 = 0;
  if (local_200[3] != 0) {
    uVar42 = (**(code **)(*(long *)(local_200[3] + 0x48) + 0x18))();
  }
  lVar40 = local_78;
  local_108 = local_78;
  if (local_78 != 0) {
    uVar42 = (**(code **)(*(long *)(local_78 + 0x48) + 0x10))();
  }
  local_200[0] = FUN__text__0025c600(uVar42,&local_108);
  lVar44 = *(long *)(lVar41 + 0x2e8);
  if (lVar44 == 0) {
    FUN__text__005f2d98(lVar37,local_200,0);
  }
  else {
    plVar36 = (long *)(lVar44 + 0x48);
    (**(code **)(*plVar36 + 0x10))(plVar36);
    FUN__text__005f2d98(lVar37,local_200,lVar44);
    (**(code **)(*plVar36 + 0x18))(plVar36);
  }
  if (lVar40 != 0) {
    plVar36 = (long *)(lVar40 + 0x48);
    (**(code **)(*plVar36 + 0x18))(plVar36);
    local_108 = 0;
  }
  local_110 = lVar46;
  if (lVar46 != 0) {
    (**(code **)(*(long *)(lVar46 + 0x48) + 0x10))((long *)(lVar46 + 0x48));
  }
  FUN__text__00205630(&local_110,0,&local_78);
  if (local_110 != 0) {
    (**(code **)(*(long *)(local_110 + 0x48) + 0x18))();
    local_110 = 0;
  }
  iVar27 = FUN__text__00306628(local_78,4);
  FUN__text__00166508(lVar46,1,iVar27 + 2000,4,0,1);
  uVar20 = FUN__text__00306628(local_78,5);
  FUN__text__00166508(lVar46,2,uVar20,2,0,1);
  uVar20 = FUN__text__00306628(local_78,6);
  FUN__text__00166508(lVar46,3,uVar20,2,0,1);
  FUN__text__003c8c20(lVar41,uVar33,0xb);
  memcpy(local_200,(void *)0x72c020,0xf0);
  uVar20 = FUN__text__003068b8(local_78);
  uVar21 = FUN__text__0030682c(local_78,0);
  uVar22 = FUN__text__0030682c(local_78,1);
  uVar23 = FUN__text__0030682c(local_78,2);
  uVar24 = FUN__text__0030682c(local_78,3);
  uVar25 = FUN__text__0030682c(local_78,4);
  uVar26 = FUN__text__0030682c(local_78,5);
  uVar30 = FUN__text__002061e0(uVar20,uVar21,uVar22,uVar23,uVar24,uVar25,uVar26);
  if (lVar29 != 0) {
    (**(code **)(*(long *)(lVar29 + 0x48) + 0x10))();
  }
  lVar40 = *(long *)(*(long *)(param_1 + 0x2d0) + 0x2e8);
  if (lVar40 != 0) {
    (**(code **)(*(long *)(lVar40 + 0x48) + 0x10))();
  }
  FUN__text__005f2d98(lVar29,local_200 + (uVar30 & 0xff),lVar40);
  uVar42 = FUN__text__005f3244(lVar40);
  FUN__text__0012c9f0(lVar28,uVar10,uVar42,0xb);
  (**(code **)(*(long *)(lVar40 + 0x48) + 0x18))((long *)(lVar40 + 0x48));
  plVar36 = (long *)(lVar29 + 0x48);
  (**(code **)(*plVar36 + 0x18))(plVar36);
  (**(code **)(*plVar36 + 0x18))(plVar36);
  uVar20 = FUN__text__003065f8(local_78);
  local_200[0] = -0x4a703dfccc817bb;
  lVar29 = *(long *)(lVar41 + 0x2e8);
  if (lVar29 == 0) {
    FUN__text__005f2d98(lVar37,local_200,0);
    lVar29 = *(long *)(lVar41 + 0x2e0);
  }
  else {
    plVar36 = (long *)(lVar29 + 0x48);
    (**(code **)(*plVar36 + 0x10))(plVar36);
    FUN__text__005f2d98(lVar37,local_200,lVar29);
    (**(code **)(*plVar36 + 0x18))(plVar36);
    lVar29 = *(long *)(lVar41 + 0x2e0);
  }
  if (lVar29 != 0) {
    (**(code **)(*(long *)(lVar29 + 0x48) + 0x10))();
  }
  FUN__text__00166508(lVar29,0,uVar20,4,2,1);
  (**(code **)(*(long *)(lVar29 + 0x48) + 0x18))((long *)(lVar29 + 0x48));
  uVar42 = 0x72cca8;
  if (param_2 != 0) {
    uVar42 = 0x72ccb0;
  }
  FUN__text__003c8c20(lVar41,uVar42,0xb);
  FUN__text__002579c0(param_1,uVar45,param_3);
joined_r0x0025ac68:
  if (lVar38 != 0) {
    (**(code **)(*(long *)(lVar38 + 0x48) + 0x18))((long *)(lVar38 + 0x48));
  }
  if ((uVar18 & 1) == 0) {
    iVar27 = FUN__text__003069a8(local_78,0);
    lVar41 = (long)(int)param_2 * 0x90 + 0x8aa540;
    FUN__text__0012c300(lVar28,*(undefined8 *)(lVar41 + (long)iVar27 * 8));
    iVar27 = FUN__text__003069a8(local_78,1);
    FUN__text__0012c300(lVar28,*(undefined8 *)(lVar41 + (long)iVar27 * 8 + 0x18));
    iVar27 = FUN__text__003069a8(local_78,2);
    FUN__text__0012c300(lVar28,*(undefined8 *)(lVar41 + (long)iVar27 * 8 + 0x30));
    iVar27 = FUN__text__003069a8(local_78,3);
    FUN__text__0012c300(lVar28,*(undefined8 *)(lVar41 + (long)iVar27 * 8 + 0x48));
    iVar27 = FUN__text__003069a8(local_78,4);
    FUN__text__0012c300(lVar28,*(undefined8 *)(lVar41 + (long)iVar27 * 8 + 0x60));
    iVar27 = FUN__text__003069a8(local_78,5);
    lVar41 = (long)iVar27;
  }
  else {
    lVar41 = (long)(int)param_2 * 0x90;
    FUN__text__0012c300(lVar28,*(undefined8 *)(lVar41 + 0x8aa540));
    FUN__text__0012c300(lVar28,*(undefined8 *)(lVar41 + 0x8aa558));
    FUN__text__0012c300(lVar28,*(undefined8 *)(lVar41 + 0x8aa570));
    FUN__text__0012c300(lVar28,*(undefined8 *)(lVar41 + 0x8aa588));
    FUN__text__0012c300(lVar28,*(undefined8 *)(lVar41 + 0x8aa5a0));
    lVar41 = 0;
  }
  FUN__text__0012c300(lVar28,*(undefined8 *)((long)(int)param_2 * 0x90 + lVar41 * 8 + 0x8aa5b8));
  lVar41 = *(long *)(param_1 + 0x560);
  if (lVar41 != 0) {
    (**(code **)(*(long *)(lVar41 + 0x48) + 0x10))();
  }
  uVar20 = FUN__text__003069d0(local_78);
  plVar36 = (long *)&DAT_0072ccb8;
  if (param_2 != 0) {
    plVar36 = (long *)&DAT_0072ccc0;
  }
  lVar38 = *plVar36;
  uVar42 = 0;
  if ((lVar38 != -0x340d631b7bddd9bb) && (lVar38 != 0)) {
    local_200[0] = lVar38;
    uVar42 = FUN__text__00155100(*(undefined8 *)(param_1 + 0x2d0),local_200,0);
  }
  FUN__text__003c6808(lVar41,uVar20,uVar42,0,0);
  lVar38 = FUN__text__003c79c0(*(undefined8 *)(param_1 + 0x2d0),plVar36);
  *(byte *)(lVar38 + 0x58) = *(byte *)(lVar38 + 0x58) & 0xfe | (bVar13 ^ 0xff) & 1;
  (**(code **)(*(long *)(lVar41 + 0x48) + 0x18))((long *)(lVar41 + 0x48));
  FUN__text__0025c9c8(param_1,param_2,param_3);
  if (lVar46 != 0) {
    (**(code **)(*(long *)(lVar46 + 0x48) + 0x18))((long *)(lVar46 + 0x48));
  }
  if (lVar37 != 0) {
    (**(code **)(*(long *)(lVar37 + 0x48) + 0x18))((long *)(lVar37 + 0x48));
  }
  if (local_78 != 0) {
    (**(code **)(*(long *)(local_78 + 0x48) + 0x18))();
  }
  return;
}


