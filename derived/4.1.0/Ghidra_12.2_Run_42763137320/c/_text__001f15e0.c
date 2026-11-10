/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001f15e0; name: FUN_.text__001f15e0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN__text__001f15e0(long param_1)

{
  code *pcVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  long *plVar5;
  long *plVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  undefined1 auStack_f8 [24];
  long local_e0;
  long local_d8;
  long local_d0;
  long local_c8;
  long local_c0;
  long local_b8;
  long local_b0;
  code *local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  puVar10 = *(undefined8 **)(*(long *)(param_1 + 0x60) + 0x60);
  plVar5 = (long *)(**(code **)*puVar10)(puVar10);
  plVar6 = (long *)FUN__text__0012615c();
  if (plVar6 != plVar5) {
    do {
      plVar5 = (long *)*plVar5;
    } while (plVar5 != plVar6 && plVar5 != (long *)0x0);
  }
  FUN__text__001156d0(&local_b0,puVar10[0xd],1);
  lVar11 = *(long *)(local_b0 + 0x60);
  if ((lVar11 == 0) || ((**(code **)(*(long *)(lVar11 + 0x48) + 0x10))(), local_b0 != 0)) {
    (**(code **)(*(long *)(local_b0 + 0x48) + 0x18))();
  }
  if (*(long *)(param_1 + 0x68) == 0) {
LAB__text__001f16c8:
    iVar3 = *(int *)(param_1 + 0x270);
joined_r0x001f17c0:
    puVar10 = (undefined8 *)0x0;
    if (iVar3 != 0) goto LAB__text__001f16d0;
LAB__text__001f17c4:
    uVar8 = FUN__text__00132134(*(undefined8 *)(param_1 + 200));
    if ((uVar8 & 1) != 0) {
      local_b8 = puVar10[0x4e];
      if (local_b8 != 0) {
        (**(code **)(*(long *)(local_b8 + 0x48) + 0x10))();
      }
      local_c0 = puVar10[0x4f];
      if (local_c0 != 0) {
        (**(code **)(*(long *)(local_c0 + 0x48) + 0x10))();
      }
      local_c8 = puVar10[0x50];
      if (local_c8 != 0) {
        (**(code **)(*(long *)(local_c8 + 0x48) + 0x10))();
      }
      local_d0 = lVar11;
      if (lVar11 != 0) {
        (**(code **)(*(long *)(lVar11 + 0x48) + 0x10))();
      }
      bVar2 = FUN__text__001d5230(&local_b8,&local_c0,&local_c8,&local_d0,puVar10[0xe]);
      if (local_d0 != 0) {
        (**(code **)(*(long *)(local_d0 + 0x48) + 0x18))();
        local_d0 = 0;
      }
      if (local_c8 != 0) {
        (**(code **)(*(long *)(local_c8 + 0x48) + 0x18))();
        local_c8 = 0;
      }
      if (local_c0 != 0) {
        (**(code **)(*(long *)(local_c0 + 0x48) + 0x18))();
        local_c0 = 0;
      }
      if (local_b8 != 0) {
        (**(code **)(*(long *)(local_b8 + 0x48) + 0x18))();
        local_b8 = 0;
      }
      *(byte *)((long)puVar10 + 0x179) = bVar2 & 1;
      FUN__text__003204d0(&local_b0);
      lVar12 = local_b0;
      if ((((local_b0 == 0) || (puVar10[0x72] == 0)) ||
          (lVar9 = *(long *)(puVar10[0x72] + 0x158), lVar9 == 0)) ||
         (local_d8 = lVar9, (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))(), puVar10[0xe] == 0)) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl();
      }
      uVar4 = FUN__text__001933c8();
      FUN__text__00303330(lVar12,&local_d8,uVar4);
      if (local_d8 != 0) {
        (**(code **)(*(long *)(local_d8 + 0x48) + 0x18))();
        local_d8 = 0;
      }
      FUN__text__00321dc0();
      *(undefined4 *)(param_1 + 0x270) = 1;
      if (local_b0 != 0) {
        (**(code **)(*(long *)(local_b0 + 0x48) + 0x18))();
      }
    }
  }
  else {
    puVar10 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
    if (puVar10 == (undefined8 *)0x0) {
      iVar3 = *(int *)(param_1 + 0x270);
      goto joined_r0x001f17c0;
    }
    plVar5 = (long *)(**(code **)*puVar10)(puVar10);
    plVar6 = (long *)FUN__text__0018d6a0();
    if (plVar6 != plVar5) {
      do {
        plVar5 = (long *)*plVar5;
      } while (plVar5 != plVar6 && plVar5 != (long *)0x0);
      if (plVar5 == (long *)0x0) goto LAB__text__001f16c8;
    }
    puVar10 = puVar10 + -10;
    if (*(int *)(param_1 + 0x270) == 0) goto LAB__text__001f17c4;
LAB__text__001f16d0:
    iVar3 = 0x1e;
    if (*(int *)(param_1 + 0x274) < 0x1e) {
      iVar3 = *(int *)(param_1 + 0x274) + 1;
    }
    *(int *)(param_1 + 0x274) = iVar3;
    uVar8 = FUN__text__003221c0();
    if (((uVar8 & 1) != 0) && (0x1d < *(int *)(param_1 + 0x274))) {
      lVar12 = *_DAT_0089f598;
      FUN__text__005e927c(auStack_f8,_DAT_008a05f8);
      uVar7 = FUN__text__003eec14(lVar12);
      local_40 = 0;
      uStack_38 = 0;
      local_50 = 0;
      uStack_48 = 0;
      local_60 = 0;
      uStack_58 = 0;
      local_70 = 0;
      uStack_68 = 0;
      local_80 = 0;
      uStack_78 = 0;
      local_90 = 0;
      uStack_88 = 0;
      local_a0 = 0;
      uStack_98 = 0;
      local_b0 = 0;
      local_a8 = (code *)0x0;
      iVar3 = FUN__text__003ef560(lVar12,auStack_f8,uVar7,0);
      if ((iVar3 != 0) &&
         (FUN__text__0015e5bc(*(undefined8 *)(lVar12 + 0x210),auStack_f8,iVar3,uVar7,0,&local_b0,0),
         pcVar1 = local_a8, local_a8 != (code *)0x0)) {
        local_a0 = 0;
        uStack_98 = 0;
        local_b0 = 0;
        local_a8 = (code *)0x0;
        (*pcVar1)(&local_90);
      }
      if (local_e0 != 0) {
        (**(code **)(*(long *)(local_e0 + 0x48) + 0x18))();
      }
      uVar7 = 0;
      goto joined_r0x001f196c;
    }
  }
  uVar7 = 1;
joined_r0x001f196c:
  if (lVar11 != 0) {
    (**(code **)(*(long *)(lVar11 + 0x48) + 0x18))((long *)(lVar11 + 0x48));
  }
  return uVar7;
}


