/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006a2180; name: FUN_.text__006a2180
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN__text__006a2180(long *param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5,
                   long param_6,long param_7)

{
  void *pvVar1;
  int iVar2;
  int *piVar3;
  long lVar4;
  void *__s;
  undefined8 uVar5;
  size_t __n;
  long lVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  undefined4 uVar11;
  undefined1 auStack_218 [32];
  undefined8 local_1f8;
  undefined8 local_1f0;
  long local_1e8;
  long *plStack_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  long *local_1c8;
  undefined8 local_1c0;
  long *plStack_1b8;
  undefined8 local_1b0;
  undefined1 *puStack_1a8;
  undefined8 local_1a0;
  undefined2 local_198;
  undefined2 local_194;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined8 local_140;
  long *local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  long local_118;
  undefined1 local_108;
  undefined2 local_107;
  undefined4 local_104;
  undefined1 local_100;
  undefined2 local_ff;
  undefined1 local_fd;
  undefined1 local_fc;
  undefined1 local_fb;
  undefined2 local_fa;
  undefined4 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined4 local_e0;
  long local_d8;
  long lStack_d0;
  int local_c8;
  undefined4 local_c4;
  long local_c0;
  long local_b8;
  int local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  
  param_1[8] = param_5;
  memset(auStack_218,0,0x170);
  if (param_7 == 0) {
    local_1a0 = 0;
    local_1d8 = 0x3f8000003f800000;
  }
  else {
    local_1a0 = *(undefined8 *)(param_7 + 0x20);
    local_1d8 = *(undefined8 *)(param_7 + 0x28);
  }
  local_108 = *(undefined1 *)(param_6 + 0xd0);
  local_1b0 = *(undefined8 *)(param_6 + 0x28);
  puStack_1a8 = auStack_218;
  local_198 = 0;
  local_194 = 0;
  local_107 = *(undefined2 *)(param_6 + 0xd1);
  local_168 = *(undefined8 *)(param_6 + 0x70);
  uStack_160 = *(undefined8 *)(param_6 + 0x78);
  local_158 = *(undefined8 *)(param_6 + 0x80);
  uStack_150 = *(undefined8 *)(param_6 + 0x88);
  local_188 = *(undefined8 *)(param_6 + 0x50);
  uStack_180 = *(undefined8 *)(param_6 + 0x58);
  local_178 = *(undefined8 *)(param_6 + 0x60);
  uStack_170 = *(undefined8 *)(param_6 + 0x68);
  local_148 = *(undefined4 *)(param_6 + 0x90);
  uStack_144 = *(undefined4 *)(param_6 + 0x94);
  local_128 = *(undefined8 *)(param_6 + 0xb0);
  uStack_120 = *(undefined8 *)(param_6 + 0xb8);
  local_130 = *(undefined1 *)(param_6 + 0xa8);
  local_ff = *(undefined2 *)(param_6 + 0xd9);
  local_100 = *(undefined1 *)(param_6 + 0xd8);
  local_fd = *(undefined1 *)(param_6 + 0xdb);
  local_fc = *(undefined1 *)(param_6 + 0xdc);
  local_fb = *(undefined1 *)(param_6 + 0xdd);
  local_fa = *(undefined2 *)(param_6 + 0xde);
  local_f8 = *(undefined4 *)(param_6 + 0xe0);
  local_f0 = *(undefined8 *)(param_6 + 0xe8);
  uStack_e8 = *(undefined8 *)(param_6 + 0xf0);
  local_138 = *(long **)(param_6 + 0xa0);
  local_1c8 = *(long **)(param_6 + 0x10);
  local_1c0 = *(undefined8 *)(param_6 + 0x18);
  local_1d0 = 0;
  local_104 = *(undefined4 *)(param_4 + 8);
  local_140 = 0;
  lVar7 = local_138[4];
  *(int *)(local_138 + 1) = (int)local_138[1] + 1;
  if (lVar7 != 0) {
    plVar9 = (long *)(*(long *)(lVar7 + 0x20) + (long)*(int *)(lVar7 + 0x28) * 0x68);
    *(int *)(lVar7 + 0x28) = *(int *)(lVar7 + 0x28) + 1;
    *(int *)(local_138 + 3) = (int)local_138[3] + 1;
    lVar7 = local_138[4];
    *(undefined4 *)(plVar9 + 9) = 0;
    *(undefined4 *)(plVar9 + 0xc) = 0;
    plVar9[2] = (long)param_1;
    lVar10 = *plVar9;
    plVar9[5] = param_7;
    plVar9[6] = lVar7;
    plVar8 = (long *)local_138[2];
    *plVar9 = *plVar8;
    *(long **)(lVar10 + 8) = plVar8;
    *(long **)(*plVar8 + 8) = plVar9;
    *plVar8 = lVar10;
    *(long **)(*local_138 + (long)(int)local_138[1] * 8 + -8) = plVar9;
  }
  local_d8 = param_4 + (ulong)*(ushort *)(param_4 + 6);
  local_1e8 = param_5;
  plStack_1e0 = param_1;
  plStack_1b8 = param_1;
  FUN__text__006a1980(auStack_218,param_4);
  if (local_c8 < 0x316e6170) goto LAB__text__006a2420;
  do {
    lVar7 = local_d8;
    if (local_c8 < 0x31747063) {
      if (local_c8 < 0x31726373) {
        if (local_c8 == 0x316e6170) goto LAB__text__006a25b0;
        if (local_c8 == 0x31707267) {
          lVar10 = param_1[4];
          if (lVar10 == 0) {
            lVar7 = (*(code *)*_DAT_008a6960)(0x10,4,*_DAT_008a6970);
            if (lVar7 != 0) {
              *(long *)lVar7 = lVar7;
              *(long *)(lVar7 + 8) = lVar7;
            }
            param_1[4] = lVar7;
          }
          else if (local_b0 == 1) {
            lVar6 = param_1[3];
            lVar4 = (*(code *)*_DAT_008a6960)(0x38,4,*_DAT_008a6970);
            if (lVar4 != 0) {
              FUN__text__0069e360(lVar4,lVar7,lVar6);
            }
            FUN__text__0069e6a0(lVar10,lVar4);
          }
        }
      }
      else {
        if (local_c8 == 0x31726373) goto LAB__text__006a25b0;
        if ((local_c8 == 0x31746e63) && (local_1c8 != (long *)0x0)) {
          local_78 = 0;
          uStack_70 = 0;
          local_88 = 0;
          uStack_80 = 0;
          local_98 = 0;
          uStack_90 = 0;
          local_a8 = 0;
          uStack_a0 = 0;
          FUN__text__006a7fd0(&local_a8,local_d8,lStack_d0);
          (**(code **)(*local_1c8 + 0x10))(local_1c8,param_3,param_1,&local_a8);
        }
      }
    }
    else if (local_c8 < 0x31747874) {
      if (local_c8 == 0x31747063) goto LAB__text__006a25b0;
      if (local_c8 == 0x31747270) goto LAB__text__006a25b0;
    }
    else {
      if (local_c8 == 0x31747874) goto LAB__text__006a25b0;
      if (local_c8 == 0x3174796c) {
        *(undefined4 *)(param_1 + 5) = *(undefined4 *)(local_d8 + 0xc);
        uVar11 = *(undefined4 *)(local_d8 + 0x10);
        param_1[6] = local_d8 + 0x1c;
        param_1[7] = lStack_d0;
        *(undefined4 *)((long)param_1 + 0x2c) = uVar11;
      }
    }
LAB__text__006a25e4:
    while( true ) {
      if (local_c0 == 0) {
        if (local_138[4] != 0) {
          iVar2 = (int)local_138[1];
          uVar5 = 0;
          if ((0 < iVar2) && (iVar2 <= *_DAT_008a6990)) {
            uVar5 = *(undefined8 *)(*local_138 + (ulong)(iVar2 - 1) * 8);
          }
          FUN__text__006a2890(param_1,uVar5);
        }
        iVar2 = (int)local_138[1] + -1;
        if ((int)local_138[1] < 1) {
          iVar2 = 0;
        }
        *(int *)(local_138 + 1) = iVar2;
        return 1;
      }
      local_d8 = local_c0;
      local_e0 = local_c4;
      FUN__text__006a1980(auStack_218,param_4);
      if (0x316e616f < local_c8) break;
LAB__text__006a2420:
      plVar8 = local_138;
      piVar3 = _DAT_008a6990;
      if (local_c8 < 0x31696c61) goto LAB__text__006a2494;
      if (local_c8 < 0x316c7463) {
        if (local_c8 == 0x31696c61) goto LAB__text__006a25b0;
        if (local_c8 == 0x316c6776) goto LAB__text__006a2614;
      }
      else if (local_c8 == 0x316c7463) {
LAB__text__006a2614:
        if (local_138[4] == 0) {
          __s = (void *)local_138[5];
          *local_138 = (long)__s;
          __n = (long)*piVar3 * 8;
          *(int *)((long)local_138 + 0xc) = *piVar3;
          pvVar1 = (void *)((long)__s + __n);
          memset(__s,0,__n);
          *(void **)pvVar1 = pvVar1;
          *(void **)((long)pvVar1 + 8) = pvVar1;
          plVar8[2] = (long)pvVar1;
          FUN__text__006a4430((long)pvVar1 + 0x10,(long)pvVar1 + 0x40);
          plVar8[4] = (long)pvVar1 + 0x10;
          lVar7 = local_138[4];
          if (lVar7 != 0) {
            plVar9 = (long *)(*(long *)(lVar7 + 0x20) + (long)*(int *)(lVar7 + 0x28) * 0x68);
            *(int *)(lVar7 + 0x28) = *(int *)(lVar7 + 0x28) + 1;
            *(int *)(local_138 + 3) = (int)local_138[3] + 1;
            lVar7 = local_138[4];
            *(undefined4 *)(plVar9 + 9) = 0;
            *(undefined4 *)(plVar9 + 0xc) = 0;
            plVar9[2] = (long)param_1;
            lVar10 = *plVar9;
            plVar9[5] = param_7;
            plVar9[6] = lVar7;
            plVar8 = (long *)local_138[2];
            *plVar9 = *plVar8;
            *(long **)(lVar10 + 8) = plVar8;
            *(long **)(*plVar8 + 8) = plVar9;
            *plVar8 = lVar10;
            *(long **)(*local_138 + (long)(int)local_138[1] * 8 + -8) = plVar9;
          }
        }
        if (local_c8 == 0x316c7463) {
          *(undefined8 *)(*(long *)(*local_138 + (ulong)((int)local_138[1] - 1) * 8) + 0x18) =
               local_1f8;
          *(undefined1 *)(*(long *)(*local_138 + (ulong)((int)local_138[1] - 1) * 8) + 100) =
               *(undefined1 *)(param_6 + 0xd9);
          *(undefined1 *)(*(long *)(*local_138 + (ulong)((int)local_138[1] - 1) * 8) + 0x65) =
               *(undefined1 *)(param_6 + 0xdb);
        }
        if (local_c8 == 0x316c6776) {
          *(undefined8 *)(*(long *)(*local_138 + (ulong)((int)local_138[1] - 1) * 8) + 0x20) =
               local_1f0;
        }
      }
      else if (local_c8 == 0x316d7473) {
        FUN__text__006a1d80(param_1,auStack_218,param_3,param_7);
      }
    }
  } while( true );
LAB__text__006a2494:
  if (((local_c8 == 0x31636970) || (local_c8 == 0x31646e62)) || (local_c8 == 0x31646e77)) {
LAB__text__006a25b0:
    local_118 = lStack_d0;
    lVar7 = (**(code **)(*param_1 + 0x88))
                      (param_1,param_2,param_3,local_d8,param_7,&local_1d8,auStack_218);
    if (lVar7 != 0) {
      local_b8 = lVar7;
    }
  }
  goto LAB__text__006a25e4;
}


