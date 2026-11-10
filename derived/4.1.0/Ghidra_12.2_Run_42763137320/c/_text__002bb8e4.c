/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002bb8e4; name: FUN_.text__002bb8e4
 */


void FUN__text__002bb8e4(long param_1,uint param_2,uint param_3,long param_4,long *param_5)

{
  undefined8 uVar1;
  long lVar2;
  bool bVar3;
  char cVar4;
  short sVar5;
  uint uVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  ulong uVar11;
  long *plVar12;
  long local_c8;
  undefined4 local_c0;
  undefined2 local_bc;
  long local_b8;
  long *local_b0;
  undefined8 uStack_a8;
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
  long local_38;
  
  uVar11 = (ulong)param_3;
  local_b0 = param_5;
  FUN__text__002a32ac(&local_38,param_5,&local_b0);
  lVar2 = local_38;
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x10))();
  }
  if ((param_2 < 0x20) && (param_3 < 0x1e)) {
    FUN__text__005fc278(lVar2,param_1 + (ulong)param_2 * 0x2a30 + uVar11 * 0x168 + 0x60);
  }
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
  }
  if (local_38 == 0) {
    return;
  }
  uVar8 = FUN__text__00631174();
  uVar1 = DAT_008e1610;
  if ((uVar8 & 1) != 0) goto LAB__text__002bbda0;
  local_60 = 0;
  uStack_58 = 0;
  local_70 = 0;
  uStack_68 = 0;
  FUN__text__002b2020(&local_b0,DAT_008e1610);
  FUN__text__002afa5c(local_b0,&local_70);
  if (local_b0 != (long *)0x0) {
    (**(code **)(local_b0[9] + 0x18))();
  }
  uVar6 = FUN__text__00633b08(local_38);
  local_80 = 0;
  uStack_78 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_b0 = (long *)0x0;
  uStack_a8 = 0;
  FUN__text__00633b00(local_38,&local_b0,0x20);
  if (uVar6 == local_70._4_1_) {
    iVar7 = wcsncmp((wchar_t *)((ulong)&local_70 | 6),(wchar_t *)&local_b0,0x1a);
    bVar3 = iVar7 == 0;
    if (1 < *(int *)(param_4 + 0x38) - 1U) goto LAB__text__002bba5c;
LAB__text__002bba4c:
    cVar4 = FUN__text__00633b10(local_38);
    if (cVar4 != '\0') goto LAB__text__002bba5c;
LAB__text__002bbaa4:
    FUN__text__00633b18(local_38,0x32);
    FUN__text__0063131c(local_38,0);
    FUN__text__006339a4(local_38,&local_70);
    iVar7 = FUN__text__0063152c(local_38,0);
  }
  else {
    bVar3 = false;
    if (*(int *)(param_4 + 0x38) - 1U < 2) goto LAB__text__002bba4c;
LAB__text__002bba5c:
    uVar8 = FUN__text__00633938(local_38,&local_70);
    if ((uVar8 & 1) == 0) {
      if (!bVar3) goto LAB__text__002bbaa4;
      uVar10 = 1;
    }
    else {
      uVar10 = 0;
    }
    FUN__text__00633ac8(local_38,uVar10);
    iVar7 = FUN__text__0063152c(local_38,0);
  }
  if ((iVar7 == 0x1f) && (uVar8 = FUN__text__006315dc(local_38,0), (uVar8 & 1) != 0)) {
    FUN__text__00631988(local_38,0);
  }
  iVar7 = FUN__text__0063152c(local_38,1);
  if ((iVar7 == 0x1f) && (uVar8 = FUN__text__006315dc(local_38,1), (uVar8 & 1) != 0)) {
    FUN__text__00631988(local_38,1);
  }
  iVar7 = FUN__text__0063152c(local_38,2);
  if ((iVar7 == 0x1f) && (uVar8 = FUN__text__006315dc(local_38,2), (uVar8 & 1) != 0)) {
    FUN__text__00631988(local_38,2);
  }
  iVar7 = FUN__text__0063152c(local_38,3);
  if ((iVar7 == 0x1f) && (uVar8 = FUN__text__006315dc(local_38,3), (uVar8 & 1) != 0)) {
    FUN__text__00631988(local_38,3);
  }
  iVar7 = FUN__text__0063152c(local_38,4);
  if ((iVar7 == 0x1f) && (uVar8 = FUN__text__006315dc(local_38,4), (uVar8 & 1) != 0)) {
    FUN__text__00631988(local_38,4);
  }
  iVar7 = FUN__text__0063152c(local_38,5);
  if ((iVar7 == 0x1f) && (uVar8 = FUN__text__006315dc(local_38,5), (uVar8 & 1) != 0)) {
    FUN__text__00631988(local_38,5);
  }
  FUN__text__00630fcc(local_38);
  FUN__text__00633b2c(local_38,0);
  local_b8 = local_38;
  if (local_38 == 0) {
    FUN__text__002bb5e4(param_1,&local_b8,param_2,uVar11);
  }
  else {
    plVar12 = (long *)(local_38 + 0x48);
    (**(code **)(*plVar12 + 0x10))(plVar12);
    FUN__text__002bb5e4(param_1,&local_b8,param_2,uVar11);
    (**(code **)(*plVar12 + 0x18))(plVar12);
  }
  local_c0 = 0x1000000;
  local_bc = 0;
  FUN__text__002b203c(&local_c8,uVar1);
  FUN__text__002c0dec(local_c8,local_38,&local_c0);
  if (local_c8 != 0) {
    (**(code **)(*(long *)(local_c8 + 0x48) + 0x18))();
  }
  iVar7 = FUN__text__00631008(local_38);
  if ((iVar7 == 0x1ec) && (sVar5 = FUN__text__00631010(local_38), lVar2 = local_38, sVar5 == 1)) {
    uVar11 = tpidr_el0;
    uVar11 = uVar11 & 0xffffffffffffe000;
    if (*(long *)(uVar11 + 0x98) == 0x10) {
                    /* WARNING: Subroutine does not return */
      FUN__text__00102c10();
    }
    *(long **)(uVar11 + *(long *)(uVar11 + 0x98) * 8 + 0x18) = param_5;
    *(long *)(uVar11 + 0x98) = *(long *)(uVar11 + 0x98) + 1;
    lVar9 = (**(code **)(*param_5 + 0x10))(param_5,0x310,8);
    if (lVar9 == 0) {
      (**(code **)(*param_5 + 0xb8))(param_5);
    }
    FUN__text__00637528(lVar9,param_5,lVar2);
    *(long **)(lVar9 + 8) = param_5;
    *(long *)(lVar9 + 0x10) = lVar9;
    *(undefined8 *)(lVar9 + 0x18) = 0x310;
    *(undefined8 *)(lVar9 + 0x20) = 8;
    *(long *)(uVar11 + 0x98) = *(long *)(uVar11 + 0x98) + -1;
    plVar12 = (long *)(lVar9 + 0x48);
    (**(code **)(*plVar12 + 0x10))(plVar12);
    FUN__text__00633c7c(lVar9,0,0);
    FUN__text__002b203c(&local_c8,uVar1);
    FUN__text__002c0dec(local_c8,lVar9,&local_c0);
    if (local_c8 != 0) {
      (**(code **)(*(long *)(local_c8 + 0x48) + 0x18))();
    }
    (**(code **)(*plVar12 + 0x18))(plVar12);
  }
LAB__text__002bbda0:
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
  }
  return;
}


