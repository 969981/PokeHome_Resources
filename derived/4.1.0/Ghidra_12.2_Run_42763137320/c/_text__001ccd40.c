/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001ccd40; name: FUN_.text__001ccd40
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__001ccd40(undefined1 param_1 [16],undefined4 param_2,long param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  undefined4 uVar16;
  undefined8 local_220;
  code *local_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  long local_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  long local_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  long local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  long local_158;
  undefined1 auStack_148 [24];
  long local_130;
  undefined1 auStack_128 [8];
  undefined1 auStack_120 [152];
  undefined1 auStack_88 [40];
  
  piVar1 = (int *)(param_3 + 0x5790);
  if (*(char *)(param_3 + 0x587c) == '\0') {
    return;
  }
  lVar12 = *(long *)(param_3 + 8);
  lVar10 = *(long *)(lVar12 + 0x2d0);
  if (lVar10 != 0) {
    (**(code **)(*(long *)(lVar10 + 0x48) + 0x10))();
  }
  lVar11 = *(long *)(param_3 + 0x38);
  lVar9 = *(long *)(lVar11 + 0x148);
  iVar5 = *(int *)(lVar9 + 0x20);
  iVar2 = *(int *)(lVar9 + 0x24);
  uVar13 = *(ulong *)(lVar9 + 0x28) >> 0x20;
  uVar14 = *(ulong *)(lVar9 + 0x28) & 0xffffffff;
  uVar15 = (ulong)(*(int *)(lVar11 + 0x1b0) != iVar5 && *(int *)(lVar11 + 0x1b4) == iVar5);
  memcpy(auStack_128,(void *)(param_3 + uVar14 * 0x3c0 + uVar13 * 0xc0 + 0x40f0),0xc0);
  iVar3 = *(int *)(param_3 + 0x5880);
  if (iVar3 == 2) {
    FUN__text__001a011c(lVar11);
    FUN__text__001a1600(*(undefined8 *)(param_3 + 0x38));
    FUN__text__003c7c60(lVar10,auStack_120,0);
    uVar8 = FUN__text__00192b40(*(undefined8 *)(param_3 + 0x5788),*piVar1);
    local_220 = 0;
    lVar12 = FUN__text__001920e4(uVar8,&local_220);
    if ((iVar2 == *piVar1) && (iVar5 == *(int *)(lVar12 + 8))) {
      FUN__text__003c7c60(lVar10,param_3 + uVar14 * 0x3c0 + uVar13 * 0xc0 + 0x13f8,1);
    }
    if (*(long *)(param_3 + 0x5788) != 0) {
      FUN__text__001d0690(param_3,*piVar1,0);
    }
    FUN__text__001ad4a8(*(undefined8 *)(param_3 + 0x4d0));
    FUN__text__001a193c(*(undefined8 *)(param_3 + 0x38));
    iVar5 = *(int *)(param_3 + 0x5880);
    *(undefined1 *)(param_3 + 0x587c) = 0;
  }
  else {
    if (iVar3 == 1) {
      uVar16 = FUN__text__001a010c(lVar11);
      local_220 = CONCAT44(param_2,uVar16);
      uVar6 = FUN__text__0019694c(*_DAT_008a05f0,&local_220,&local_220,param_3 + 0x586c);
      FUN__text__001a0114(*(undefined8 *)(param_3 + 0x38),&local_220);
      if (((*(long *)(lVar12 + 0x2d0) != 0) &&
          (uVar7 = FUN__text__003c7ec0(*(long *)(lVar12 + 0x2d0),auStack_88), ((uVar7 ^ 1) & 1) != 0
          )) || (((uVar6 ^ 1) & 1) != 0)) goto LAB__text__001cd1fc;
    }
    else {
      if (iVar3 != 0) goto LAB__text__001cd1fc;
      FUN__text__0012c378(lVar12 + 0x110,auStack_88);
      lVar12 = *_DAT_0089f598;
      FUN__text__005e927c(auStack_148,_DAT_008a0618);
      uVar8 = FUN__text__003eec14(lVar12);
      local_1b0 = 0;
      local_1a8 = 0;
      local_1c0 = 0;
      uStack_1b8 = 0;
      local_1d0 = 0;
      local_1c8 = 0;
      local_1e0 = 0;
      uStack_1d8 = 0;
      local_1f0 = 0;
      uStack_1e8 = 0;
      local_200 = 0;
      uStack_1f8 = 0;
      local_210 = 0;
      uStack_208 = 0;
      local_220 = 0;
      local_218 = (code *)0x0;
      iVar5 = FUN__text__003ef560(lVar12,auStack_148,uVar8,0);
      if ((iVar5 != 0) &&
         (FUN__text__0015e5bc(*(undefined8 *)(lVar12 + 0x210),auStack_148,iVar5,uVar8,0,&local_220,0
                             ), pcVar4 = local_218, local_218 != (code *)0x0)) {
        local_210 = 0;
        uStack_208 = 0;
        local_220 = 0;
        local_218 = (code *)0x0;
        (*pcVar4)(&local_200);
      }
      if (local_130 != 0) {
        (**(code **)(*(long *)(local_130 + 0x48) + 0x18))();
      }
      uVar16 = FUN__text__001a010c(*(undefined8 *)(param_3 + 0x38));
      *(undefined4 *)(param_3 + 0x586c) = uVar16;
      *(undefined4 *)(param_3 + 0x5870) = param_2;
      iVar5 = *(int *)(*(long *)(param_3 + 0x38) + uVar15 * 4 + 0x1bc);
      if (iVar5 != 0) {
        lVar12 = *(long *)(param_3 + 0x38) + uVar15 * 0x20;
        if (iVar5 == 4) {
          lVar12 = *(long *)(lVar12 + 0xa8);
          if (iVar2 == *(int *)(lVar12 + 0x5790)) {
            memcpy(&local_220,(void *)(lVar12 + uVar14 * 0x3c0 + uVar13 * 0xc0 + 0x13f0),0xc0);
            uVar16 = FUN__text__003c7a60(lVar10,&local_218);
            *(undefined4 *)(param_3 + 0x586c) = uVar16;
            *(undefined4 *)(param_3 + 0x5870) = param_2;
          }
          else {
            local_200 = *(undefined8 *)(lVar12 + 0x1d0);
            uStack_1f8 = *(undefined8 *)(lVar12 + 0x1d8);
            local_1f0 = *(undefined8 *)(lVar12 + 0x1e0);
            uStack_1e8 = *(undefined8 *)(lVar12 + 0x1e8);
            local_220 = *(undefined8 *)(lVar12 + 0x1b0);
            local_218 = *(code **)(lVar12 + 0x1b8);
            local_210 = *(undefined8 *)(lVar12 + 0x1c0);
            uStack_208 = *(undefined8 *)(lVar12 + 0x1c8);
LAB__text__001cd0a8:
            local_1c8 = *(long *)(lVar12 + 0x208);
            local_1e0 = *(undefined8 *)(lVar12 + 0x1f0);
            uStack_1d8 = *(undefined8 *)(lVar12 + 0x1f8);
            local_1d0 = *(undefined8 *)(lVar12 + 0x200);
            if (local_1c8 != 0) {
              (**(code **)(*(long *)(local_1c8 + 0x48) + 0x10))();
            }
            local_1c0 = *(undefined8 *)(lVar12 + 0x210);
            uStack_1b8 = *(undefined8 *)(lVar12 + 0x218);
            local_1b0 = *(undefined8 *)(lVar12 + 0x220);
            local_1a8 = *(long *)(lVar12 + 0x228);
            if (local_1a8 != 0) {
              (**(code **)(*(long *)(local_1a8 + 0x48) + 0x10))();
            }
            local_1a0 = *(undefined8 *)(lVar12 + 0x230);
            uStack_198 = *(undefined8 *)(lVar12 + 0x238);
            local_190 = *(undefined8 *)(lVar12 + 0x240);
            uStack_188 = *(undefined8 *)(lVar12 + 0x248);
            local_180 = *(undefined8 *)(lVar12 + 0x250);
            local_178 = *(long *)(lVar12 + 600);
            if (local_178 != 0) {
              (**(code **)(*(long *)(local_178 + 0x48) + 0x10))();
            }
            local_170 = *(undefined8 *)(lVar12 + 0x260);
            uStack_168 = *(undefined8 *)(lVar12 + 0x268);
            local_160 = *(undefined8 *)(lVar12 + 0x270);
            local_158 = *(long *)(lVar12 + 0x278);
            if (local_158 != 0) {
              (**(code **)(*(long *)(local_158 + 0x48) + 0x10))();
            }
            uVar16 = FUN__text__003c7a60(lVar10,&local_218);
            *(undefined4 *)(param_3 + 0x586c) = uVar16;
            *(undefined4 *)(param_3 + 0x5870) = param_2;
            if (local_158 != 0) {
              (**(code **)(*(long *)(local_158 + 0x48) + 0x18))();
              local_158 = 0;
            }
            if (local_178 != 0) {
              (**(code **)(*(long *)(local_178 + 0x48) + 0x18))();
              local_178 = 0;
            }
            if (local_1a8 != 0) {
              (**(code **)(*(long *)(local_1a8 + 0x48) + 0x18))();
              local_1a8 = 0;
            }
            if (local_1c8 != 0) {
              (**(code **)(*(long *)(local_1c8 + 0x48) + 0x18))();
            }
          }
        }
        else {
          lVar12 = *(long *)(lVar12 + 0x68);
          if (*(char *)(lVar12 + 0x5a58) != '\0') {
            local_200 = *(undefined8 *)(lVar12 + 0x1d0);
            uStack_1f8 = *(undefined8 *)(lVar12 + 0x1d8);
            local_1f0 = *(undefined8 *)(lVar12 + 0x1e0);
            uStack_1e8 = *(undefined8 *)(lVar12 + 0x1e8);
            local_220 = *(undefined8 *)(lVar12 + 0x1b0);
            local_218 = *(code **)(lVar12 + 0x1b8);
            local_210 = *(undefined8 *)(lVar12 + 0x1c0);
            uStack_208 = *(undefined8 *)(lVar12 + 0x1c8);
            goto LAB__text__001cd0a8;
          }
          FUN__text__001be354(&local_220);
          uVar16 = FUN__text__003c7a60(lVar10,&local_218);
          *(undefined4 *)(param_3 + 0x586c) = uVar16;
          *(undefined4 *)(param_3 + 0x5870) = param_2;
          FUN__text__001be464(&local_220);
        }
      }
    }
    iVar5 = *(int *)(param_3 + 0x5880);
  }
  *(int *)(param_3 + 0x5880) = iVar5 + 1;
LAB__text__001cd1fc:
  if (lVar10 != 0) {
    (**(code **)(*(long *)(lVar10 + 0x48) + 0x18))((long *)(lVar10 + 0x48));
  }
  return;
}


