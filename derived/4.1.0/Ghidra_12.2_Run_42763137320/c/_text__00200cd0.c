/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00200cd0; name: FUN_.text__00200cd0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00200cd0(long *param_1,uint *param_2,undefined4 *param_3,long *param_4)

{
  uint uVar1;
  undefined4 uVar2;
  byte bVar3;
  bool bVar4;
  long *plVar5;
  long *plVar6;
  undefined8 uVar7;
  byte *pbVar8;
  ulong uVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined4 uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long local_2a0;
  undefined7 local_298;
  undefined4 uStack_291;
  undefined2 uStack_28d;
  undefined3 uStack_28b;
  undefined5 local_288;
  undefined3 uStack_283;
  long local_280;
  ulong local_98;
  undefined8 local_90;
  long local_88;
  undefined4 local_80;
  long local_78;
  undefined8 local_70;
  undefined8 local_68;
  
  uVar1 = *param_2;
  local_80 = 0;
  local_68 = 0;
  uVar2 = *param_3;
  lVar10 = *param_4;
  lVar15 = *param_1;
  local_90 = 0;
  local_88 = 0;
  local_78 = 0;
  local_70 = 0;
  if (lVar10 == 0) goto LAB__text__00201170;
  puVar11 = *(undefined8 **)(*(long *)(lVar15 + 0x60) + 0x60);
  plVar5 = (long *)(**(code **)*puVar11)(puVar11);
  plVar6 = (long *)FUN__text__0012615c();
  if (plVar6 != plVar5) {
    do {
      plVar5 = (long *)*plVar5;
    } while (plVar5 != plVar6 && plVar5 != (long *)0x0);
  }
  local_298 = 0xe317e01e0d8d12;
  uStack_291 = 0x7126a130;
  uStack_28d = 0;
  uStack_28b = 0;
  local_288 = 0x16;
  uStack_283 = 0;
  local_280 = 0;
  uVar7 = FUN__text__0013bb90(puVar11[0xaf],&local_298);
  if (local_280 != 0) {
    (**(code **)(*(long *)(local_280 + 0x48) + 0x18))();
  }
  local_88 = (ulong)uVar1 << 0x20;
  local_90 = uVar7;
  local_80 = uVar2;
  local_78 = lVar10 + 0x110;
  local_70 = FUN__text__0013dcb8(lVar10,0,uVar2);
  local_68 = FUN__text__0013dcb8(lVar10,9,uVar2);
  uVar12 = local_80;
  lVar14 = *(long *)(lVar15 + 0x80);
  *(long *)(lVar14 + 8) = lVar10 + 0x110;
  FUN__text__0013dde8(uVar7,local_80);
  if ((int)local_88 == 0) {
    FUN__text__0013e06c(uVar7,0,uVar12);
    if (uVar1 == 0) goto LAB__text__00200f04;
LAB__text__00200e10:
    local_98 = 0;
    memset(&local_298,0,0x200);
    if (uVar1 == 1) {
      local_98 = 0xcbf29ce484222645;
      local_298 = (undefined7)_DAT_00711a3e;
      uStack_291._0_1_ = (undefined1)((ulong)_DAT_00711a3e >> 0x38);
      uStack_291._1_3_ = (undefined3)_DAT_00711a46;
      uStack_28d = (undefined2)((uint5)_DAT_00711a46 >> 0x18);
      uVar9 = 0x6e;
      uStack_28b = _DAT_00711a4b;
      local_288 = uRam0000000000711a4e;
      pbVar8 = (byte *)((ulong)&local_298 | 1);
      do {
        local_98 = local_98 ^ uVar9;
        bVar3 = *pbVar8;
        uVar9 = (ulong)bVar3;
        local_98 = local_98 * 0x100000001b3;
        pbVar8 = pbVar8 + 1;
      } while (bVar3 != 0);
      uVar7 = *(undefined8 *)(lVar15 + 0x80);
      local_2a0 = *(long *)(*(long *)(lVar15 + 0xa0) + 0x60);
      if (local_2a0 != 0) {
        (**(code **)(*(long *)(local_2a0 + 0x48) + 0x10))();
      }
      FUN__text__001ac1fc(uVar7,&local_70,&local_2a0,&local_98);
      if (local_2a0 != 0) {
        (**(code **)(*(long *)(local_2a0 + 0x48) + 0x18))();
        local_2a0 = 0;
      }
    }
    else {
      if (uVar1 == 2) {
        local_298 = (undefined7)_DAT_007173e2;
        uStack_291._0_1_ = (undefined1)((ulong)_DAT_007173e2 >> 0x38);
        uStack_291 = CONCAT31(0x3070,(undefined1)uStack_291);
        local_98 = 0xcbf29ce484222645;
        uVar9 = 0x69;
        pbVar8 = (byte *)((ulong)&local_298 | 1);
        do {
          local_98 = local_98 ^ uVar9;
          bVar3 = *pbVar8;
          uVar9 = (ulong)bVar3;
          local_98 = local_98 * 0x100000001b3;
          pbVar8 = pbVar8 + 1;
        } while (bVar3 != 0);
        uVar7 = *(undefined8 *)(lVar15 + 0x80);
        local_2a0 = *(long *)(*(long *)(lVar15 + 0xe8) + 0x60);
        if (local_2a0 != 0) {
          (**(code **)(*(long *)(local_2a0 + 0x48) + 0x10))();
        }
        FUN__text__001ac1fc(uVar7,&local_70,&local_2a0,&local_98);
        if (local_2a0 != 0) {
          (**(code **)(*(long *)(local_2a0 + 0x48) + 0x18))();
          local_2a0 = 0;
        }
        bVar4 = *(int *)(lVar15 + 0x1dbc) != 0;
        goto LAB__text__00201138;
      }
      uVar1 = uVar1 - 3;
      if (((int)uVar1 < 0) || (0x398 < uVar1)) {
LAB__text__00201170:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl();
      }
      uVar12 = *(undefined4 *)(lVar15 + (ulong)uVar1 * 4 + 0x2b470);
      lVar13 = *(long *)(*(long *)(lVar15 + 0xa0) + 0x60);
      if (lVar13 == 0) {
        uVar7 = *(undefined8 *)(lVar15 + 0x80);
        local_2a0 = 0;
        local_98 = 0x7fc3474483fb7d45;
      }
      else {
        plVar5 = (long *)(lVar13 + 0x48);
        (**(code **)(*plVar5 + 0x10))(plVar5);
        uVar7 = *(undefined8 *)(lVar15 + 0x80);
        local_98 = 0x7fc3474483fb7d45;
        local_2a0 = lVar13;
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
      FUN__text__001ac8c4(uVar7,&local_70,&local_2a0,&local_98,0,uVar12);
      if (local_2a0 != 0) {
        (**(code **)(*(long *)(local_2a0 + 0x48) + 0x18))();
        local_2a0 = 0;
      }
      if (lVar13 != 0) {
        plVar5 = (long *)(lVar13 + 0x48);
        lVar15 = *plVar5;
        goto LAB__text__0020112c;
      }
    }
  }
  else {
    FUN__text__0013e15c(uVar7,0,uVar12);
    if (uVar1 != 0) goto LAB__text__00200e10;
LAB__text__00200f04:
    uVar9 = *(ulong *)(*(long *)(lVar15 + 0xa0) + 0x60);
    if (uVar9 == 0) {
      local_298 = 0xc3474483fb7d45;
      uStack_291 = CONCAT31(uStack_291._1_3_,0x7f);
      uVar7 = *(undefined8 *)(lVar15 + 0x80);
      uVar12 = *(undefined4 *)(lVar15 + (ulong)*(uint *)(param_1 + 1) * 4 + 0xa8);
      local_98 = 0;
    }
    else {
      plVar5 = (long *)(uVar9 + 0x48);
      (**(code **)(*plVar5 + 0x10))(plVar5);
      local_298 = 0xc3474483fb7d45;
      uStack_291 = CONCAT31(uStack_291._1_3_,0x7f);
      uVar7 = *(undefined8 *)(lVar15 + 0x80);
      uVar12 = *(undefined4 *)(lVar15 + (ulong)*(uint *)(param_1 + 1) * 4 + 0xa8);
      local_98 = uVar9;
      (**(code **)(*plVar5 + 0x10))(plVar5);
    }
    FUN__text__001ac8c4(uVar7,&local_70,&local_98,&local_298,0,uVar12);
    if (local_98 != 0) {
      (**(code **)(*(long *)(local_98 + 0x48) + 0x18))();
      local_98 = 0;
    }
    if (uVar9 != 0) {
      plVar5 = (long *)(uVar9 + 0x48);
      lVar15 = *plVar5;
LAB__text__0020112c:
      (**(code **)(lVar15 + 0x18))(plVar5);
    }
  }
  bVar4 = true;
LAB__text__00201138:
  uVar7 = FUN__text__0013e1c4(lVar10,uVar2);
  FUN__text__003a14c4(uVar7,bVar4);
  *(undefined8 *)(lVar14 + 8) = 0;
  return;
}


