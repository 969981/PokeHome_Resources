/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003e8c40; name: FUN_.text__003e8c40
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__003e8c40(long param_1,long *param_2,uint param_3,undefined8 param_4,
                        undefined8 param_5,undefined8 param_6)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  undefined8 uVar13;
  long *plVar14;
  ulong uVar15;
  long local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  long local_1a8;
  long local_1a0;
  long local_190;
  long local_188;
  long local_180;
  code *local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160 [12];
  long local_100;
  code *local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined1 auStack_e0 [96];
  undefined1 auStack_80 [16];
  long local_70 [2];
  
  FUN__text__003e7c18(&local_190,*_DAT_0089f438);
  if (*(long *)(param_1 + 0xb0) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0xb0) + 0x48) + 0x18))();
  }
  plVar12 = *(long **)(param_1 + 8);
  *(long *)(param_1 + 0xb0) = local_190;
  uVar7 = (**(code **)(*plVar12 + 0x10))(plVar12,0x60,8);
  uVar15 = tpidr_el0;
  uVar15 = uVar15 & 0xffffffffffffe000;
  if (*(long *)(uVar15 + 0x98) == 0x10) {
LAB__text__003e9250:
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10();
  }
  lVar11 = uVar15 + 0x18;
  *(long **)(lVar11 + *(long *)(uVar15 + 0x98) * 8) = plVar12;
  *(long *)(uVar15 + 0x98) = *(long *)(uVar15 + 0x98) + 1;
  FUN__text__006a0f74();
  *(long *)(uVar15 + 0x98) = *(long *)(uVar15 + 0x98) + -1;
  plVar14 = *(long **)(param_1 + 0xc0);
  *(undefined8 *)(param_1 + 0xc0) = uVar7;
  if (plVar14 != (long *)0x0) {
    (**(code **)(*plVar14 + 8))(plVar14);
    (**(code **)(**(long **)(param_1 + 200) + 0x18))
              (*(long **)(param_1 + 200),plVar14,*(undefined8 *)(param_1 + 0xd0),
               *(undefined8 *)(param_1 + 0xd8));
  }
  *(long **)(param_1 + 200) = plVar12;
  *(undefined8 *)(param_1 + 0xd0) = 0x60;
  *(undefined8 *)(param_1 + 0xd8) = 8;
  FUN__text__0069d5a4(auStack_80);
  local_160[0] = 0;
  uVar13 = *(undefined8 *)(param_1 + 0xc0);
  local_180 = 0;
  local_178 = (code *)0x0;
  local_190 = 0;
  local_188 = 0;
  uStack_168 = 0;
  local_170 = 0x101;
  uVar7 = FUN__text__003e751c(*param_2);
  uVar8 = FUN__text__003e73e0(*param_2,param_4);
  FUN__text__006a1164(uVar13,auStack_80,_DAT_008a0448,uVar7,param_6,param_5,uVar8,&local_190,0);
  FUN__text__003e9254(param_1);
  FUN__text__003e93d4(param_1,auStack_80);
  lVar10 = *(long *)(param_1 + 0xb0);
  if ((lVar10 != 0) && (*(int *)(lVar10 + 0x54) != 0)) {
    piVar1 = (int *)(lVar10 + 0x54);
    iVar6 = *(int *)(lVar10 + 0x54);
    do {
      plVar14 = *(long **)(lVar10 + 0x58);
      plVar12 = (long *)FUN__text__003eac70();
      if (plVar12 != plVar14) {
        do {
          plVar14 = (long *)*plVar14;
        } while (plVar14 != plVar12 && plVar14 != (long *)0x0);
        if (plVar14 == (long *)0x0) break;
      }
      iVar2 = *piVar1;
      if (iVar2 == iVar6) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar6 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') {
          lVar10 = *(long *)(lVar10 + 0x60);
          if (lVar10 != 0) {
            *(long *)(param_1 + 0x198) = lVar10 + 0x10;
            (**(code **)(*(long *)(lVar10 + -8) + 0x18))();
            *(long *)(param_1 + 0x1a8) = param_1 + 0x2d0;
            *(long *)(param_1 + 0x1b0) = param_1 + 0x2d0;
            iVar6 = FUN__text__003e8b90(*(undefined8 *)(param_1 + 0xc0));
            goto joined_r0x003e8e78;
          }
          break;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar6 = iVar2;
    } while (iVar2 != 0);
  }
  *(undefined8 *)(param_1 + 0x198) = 0x60;
  *(long *)(param_1 + 0x1a8) = param_1 + 0x2d0;
  *(long *)(param_1 + 0x1b0) = param_1 + 0x2d0;
  iVar6 = FUN__text__003e8b90(*(undefined8 *)(param_1 + 0xc0));
joined_r0x003e8e78:
  if (0 < iVar6) {
    local_f0 = 0;
    uStack_e8 = 0;
    local_100 = 0;
    local_f8 = (code *)0x0;
    local_180 = 0;
    local_178 = (code *)0x0;
    local_170 = 0;
    uStack_168 = 0;
    local_190 = _DAT_0089f4c8 + 0x10;
    local_188 = 0;
    FUN__text__0010c1a0(&local_1c0,_DAT_0089f558,0x70c1fa,0x70f683);
    lVar9 = *_DAT_0089f550;
    lVar10 = *(long *)(lVar9 + 8);
    if (*(long *)(lVar9 + 0x1c8) != 0) {
      lVar10 = *(long *)(lVar9 + 0x1c8);
    }
    FUN__text__0010a590(local_70,lVar9,0,&local_1c0,0,lVar10,0);
    if (local_188 != 0) {
      (**(code **)(*(long *)(local_188 + 0x48) + 0x18))();
    }
    local_188 = local_70[0];
    if (local_70[0] != 0) {
      plVar12 = (long *)(local_70[0] + 0x48);
      (**(code **)(*plVar12 + 0x10))(plVar12);
      if (local_180 != 0 || local_100 != 0) {
        FUN__text__005d9010(local_70[0],&local_190,1);
      }
      FUN__text__005d8de0(local_70[0]);
      (**(code **)(*(long *)(local_70[0] + 0x48) + 0x18))(plVar12);
    }
    if ((local_1a8 != 0) && (local_1c0 != 0)) {
      (**(code **)(*(long *)(local_1c0 + 0x48) + 0x18))();
    }
    local_1c0 = 0;
    uStack_1b8 = 0xcbf29ce484222645;
    local_1b0 = 0x70f683;
    local_1a8 = 0;
    if (local_1a0 != 0) {
      (**(code **)(*(long *)(local_1a0 + 0x48) + 0x18))();
    }
    if (*(long *)(uVar15 + 0x98) == 0x10) goto LAB__text__003e9250;
    plVar12 = *(long **)(param_1 + 8);
    *(long **)(lVar11 + *(long *)(uVar15 + 0x98) * 8) = plVar12;
    *(long *)(uVar15 + 0x98) = *(long *)(uVar15 + 0x98) + 1;
    lVar10 = (**(code **)(*plVar12 + 0x10))(plVar12,0x68,8);
    if (lVar10 == 0) {
      (**(code **)(*plVar12 + 0xb8))(plVar12);
    }
    FUN__text__003eb86c(lVar10,plVar12,&local_190);
    *(long **)(lVar10 + 8) = plVar12;
    *(long *)(lVar10 + 0x10) = lVar10;
    *(undefined8 *)(lVar10 + 0x18) = 0x68;
    *(undefined8 *)(lVar10 + 0x20) = 8;
    *(long *)(uVar15 + 0x98) = *(long *)(uVar15 + 0x98) + -1;
    (**(code **)(*(long *)(lVar10 + 0x48) + 0x10))();
    if (*(long *)(param_1 + 0x340) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 0x340) + 0x48) + 0x18))();
    }
    *(long *)(param_1 + 0x340) = lVar10;
    FUN__text__003ebbec(lVar10,param_1 + 0xe0);
    local_190 = _DAT_0089f4a8 + 0x10;
    if (local_188 == 0) {
      local_188 = 0;
      pcVar5 = local_f8;
    }
    else {
      FUN__text__005d9290(local_188,&local_190);
      lVar10 = local_188;
      local_188 = 0;
      pcVar5 = local_f8;
      if (lVar10 != 0) {
        (**(code **)(*(long *)(lVar10 + 0x48) + 0x18))();
        pcVar5 = local_f8;
      }
    }
    local_f8 = pcVar5;
    if (pcVar5 != (code *)0x0) {
      local_f0 = 0;
      uStack_e8 = 0;
      local_100 = 0;
      local_f8 = (code *)0x0;
      (*pcVar5)(auStack_e0);
    }
    pcVar5 = local_178;
    if (local_178 != (code *)0x0) {
      local_170 = 0;
      uStack_168 = 0;
      local_180 = 0;
      local_178 = (code *)0x0;
      (*pcVar5)(local_160);
    }
    if (local_188 != 0) {
      (**(code **)(*(long *)(local_188 + 0x48) + 0x18))();
    }
  }
  if (param_3 != 0) {
    plVar12 = *(long **)(param_1 + 8);
    lVar10 = (**(code **)(*plVar12 + 0x10))(plVar12,(ulong)param_3 << 6,8);
    if (*(long *)(uVar15 + 0x98) == 0x10) goto LAB__text__003e9250;
    *(long **)(lVar11 + *(long *)(uVar15 + 0x98) * 8) = plVar12;
    lVar11 = 0;
    *(long *)(uVar15 + 0x98) = *(long *)(uVar15 + 0x98) + 1;
    do {
      FUN__text__003eb2e4(lVar10 + lVar11);
      lVar11 = lVar11 + 0x40;
    } while ((ulong)param_3 * 0x40 != lVar11);
    *(long *)(uVar15 + 0x98) = *(long *)(uVar15 + 0x98) + -1;
    lVar11 = *(long *)(param_1 + 0x298);
    *(long *)(param_1 + 0x298) = lVar10;
    if (lVar11 != 0) {
      uVar15 = *(ulong *)(param_1 + 0x2a8);
      if (0x3f < uVar15) {
        uVar15 = uVar15 >> 6;
        lVar10 = lVar11;
        do {
          FUN__text__003eb320(lVar10);
          uVar15 = uVar15 - 1;
          lVar10 = lVar10 + 0x40;
        } while (uVar15 != 0);
        uVar15 = *(ulong *)(param_1 + 0x2a8);
      }
      (**(code **)(**(long **)(param_1 + 0x2a0) + 0x18))
                (*(long **)(param_1 + 0x2a0),lVar11,uVar15,*(undefined8 *)(param_1 + 0x2b0));
    }
    *(long **)(param_1 + 0x2a0) = plVar12;
    *(ulong *)(param_1 + 0x2a8) = (ulong)param_3 << 6;
    *(undefined8 *)(param_1 + 0x2b0) = 8;
  }
  *(uint *)(param_1 + 0x2b8) = param_3;
  lVar11 = *param_2;
  if (lVar11 != 0) {
    (**(code **)(*(long *)(lVar11 + 0x48) + 0x10))();
  }
  lVar10 = *(long *)(param_1 + 0x2c0);
  *(long *)(param_1 + 0x2c0) = lVar11;
  if (lVar10 != 0) {
    (**(code **)(*(long *)(lVar10 + 0x48) + 0x18))();
  }
  *(undefined2 *)(param_1 + 0xb8) = 0x101;
  return;
}


