/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005bec90; name: FUN_.text__005bec90
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN__text__005bec90(long param_1,undefined4 *param_2,undefined8 *param_3,ulong *param_4,
                         long param_5,ulong *param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined2 *puVar8;
  ulong uVar9;
  ulong uVar10;
  undefined4 *puVar11;
  ulong uVar12;
  long *plVar13;
  undefined8 uVar14;
  undefined8 local_90;
  undefined4 local_84;
  undefined4 local_80 [2];
  long local_78;
  long local_70;
  undefined1 uStack_61;
  
  local_80[0] = *param_2;
  local_78 = 0;
  local_70 = 0;
  uVar10 = tpidr_el0;
  uVar10 = uVar10 & 0xffffffffffffe000;
  if (*(long *)(uVar10 + 0x98) == 0x10) {
LAB__text__005bf0b4:
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10();
  }
  plVar13 = *(long **)(param_1 + 0x10);
  uVar9 = *param_4;
  uVar14 = *(undefined8 *)(*_DAT_008a0228 + 0x10);
  *(long **)(uVar10 + 0x18 + *(long *)(uVar10 + 0x98) * 8) = plVar13;
  *(long *)(uVar10 + 0x98) = *(long *)(uVar10 + 0x98) + 1;
  lVar5 = (**(code **)(*plVar13 + 0x10))(plVar13,0x1b0,8);
  if (lVar5 == 0) {
    (**(code **)(*plVar13 + 0xb8))(plVar13);
  }
  FUN__text__005d7230(lVar5,param_1 + 0x848,6,(int)uVar9,1,uVar14);
  *(long **)(lVar5 + 8) = plVar13;
  *(long *)(lVar5 + 0x10) = lVar5;
  *(undefined8 *)(lVar5 + 0x18) = 0x1b0;
  *(undefined8 *)(lVar5 + 0x20) = 8;
  *(long *)(uVar10 + 0x98) = *(long *)(uVar10 + 0x98) + -1;
  (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  if (local_78 != 0) {
    (**(code **)(*(long *)(local_78 + 0x48) + 0x18))();
  }
  lVar6 = local_70;
  local_78 = lVar5;
  if (*param_6 == 0) {
    local_70 = 0;
    if (lVar6 != 0) {
      (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))();
    }
    lVar6 = 0;
    lVar5 = *(long *)(*(long *)(lVar5 + 0x98) + 0x58);
    puVar7 = (undefined8 *)thunk_FUN__text__006ec5f4(lVar5);
    uVar9 = *param_4;
  }
  else {
    local_84 = (undefined4)*param_6;
    local_90 = *(undefined8 *)(*_DAT_008a0228 + 0x10);
    lVar6 = FUN__text__005c1710(&uStack_61,*(undefined8 *)(param_1 + 0x10),&local_84,&local_90);
    if (lVar6 != 0) {
      (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
    }
    if (local_70 != 0) {
      (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0x98) + 0x58);
    local_70 = lVar6;
    puVar7 = (undefined8 *)thunk_FUN__text__006ec5f4(lVar5);
    uVar9 = *param_4;
  }
  if (uVar9 != 0) {
    uVar9 = 0;
    do {
      uVar14 = *param_3;
      uVar2 = param_3[1];
      uVar9 = uVar9 + 1;
      uVar3 = param_3[3];
      iVar4 = *(int *)(lVar5 + 0x68);
      puVar7[2] = param_3[2];
      puVar7[3] = uVar3;
      *puVar7 = uVar14;
      puVar7[1] = uVar2;
      uVar14 = param_3[4];
      uVar2 = param_3[5];
      puVar1 = param_3 + 6;
      uVar3 = param_3[7];
      param_3 = param_3 + 8;
      puVar7[6] = *puVar1;
      puVar7[7] = uVar3;
      puVar7[4] = uVar14;
      puVar7[5] = uVar2;
      puVar7 = (undefined8 *)((long)puVar7 + (long)iVar4);
    } while (uVar9 < *param_4);
  }
  thunk_FUN__text__006ec608(lVar5);
  if (*param_6 != 0) {
    puVar8 = (undefined2 *)thunk_FUN__text__006ec5f4(lVar6 + 0x58);
    if (*param_6 != 0) {
      uVar9 = 0;
      do {
        lVar5 = uVar9 * 2;
        uVar9 = uVar9 + 1;
        iVar4 = *(int *)(lVar6 + 0xc0);
        *puVar8 = *(undefined2 *)(param_5 + lVar5);
        puVar8 = (undefined2 *)((long)puVar8 + (long)iVar4);
      } while (uVar9 < *param_6);
    }
    thunk_FUN__text__006ec608(lVar6 + 0x58);
  }
  lVar5 = local_78;
  puVar11 = *(undefined4 **)(param_1 + 0x7c0);
  uVar9 = ((long)puVar11 - *(long *)(param_1 + 0x7b8) >> 3) * -0x5555555555555555;
  if ((int)uVar9 != 0) {
    uVar12 = 0;
    plVar13 = (long *)(*(long *)(param_1 + 0x7b8) + 8);
    do {
      if (*plVar13 == 0) {
        *(undefined4 *)(plVar13 + -1) = local_80[0];
        if (local_78 == 0) {
          *plVar13 = 0;
          lVar5 = local_70;
        }
        else {
          (**(code **)(*(long *)(local_78 + 0x48) + 0x10))();
          lVar6 = *plVar13;
          *plVar13 = lVar5;
          lVar5 = local_70;
          if (lVar6 != 0) {
            (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))();
            lVar5 = local_70;
          }
        }
        local_70 = lVar5;
        if (lVar5 != 0) {
          (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
        }
        lVar6 = plVar13[1];
        plVar13[1] = lVar5;
        if (lVar6 == 0) {
          uVar9 = uVar12 & 0xffffffff;
        }
        else {
          (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))();
          uVar9 = uVar12 & 0xffffffff;
        }
        goto joined_r0x005bf0ac;
      }
      uVar12 = uVar12 + 1;
      plVar13 = plVar13 + 3;
    } while ((uVar9 & 0xffffffff) != uVar12);
  }
  if (puVar11 == *(undefined4 **)(param_1 + 0x7c8)) {
    FUN__text__005c18a0(param_1 + 0x7b8,local_80);
  }
  else {
    if (*(long *)(uVar10 + 0x98) == 0x10) goto LAB__text__005bf0b4;
    *(undefined8 *)(uVar10 + 0x18 + *(long *)(uVar10 + 0x98) * 8) = *(undefined8 *)(param_1 + 2000);
    *(long *)(uVar10 + 0x98) = *(long *)(uVar10 + 0x98) + 1;
    *puVar11 = local_80[0];
    *(long *)(puVar11 + 2) = local_78;
    if (local_78 != 0) {
      (**(code **)(*(long *)(local_78 + 0x48) + 0x10))();
    }
    *(long *)(puVar11 + 4) = local_70;
    if (local_70 != 0) {
      (**(code **)(*(long *)(local_70 + 0x48) + 0x10))();
    }
    *(long *)(uVar10 + 0x98) = *(long *)(uVar10 + 0x98) + -1;
    *(undefined4 **)(param_1 + 0x7c0) = puVar11 + 6;
  }
joined_r0x005bf0ac:
  if (local_70 != 0) {
    (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
    local_70 = 0;
  }
  if (local_78 != 0) {
    (**(code **)(*(long *)(local_78 + 0x48) + 0x18))();
  }
  return uVar9 & 0xffffffff;
}


