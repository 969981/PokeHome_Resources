/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002a3654; name: FUN_.text__002a3654
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__002a3654(long param_1,uint param_2,uint param_3,long param_4,long *param_5)

{
  bool bVar1;
  char cVar2;
  short sVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  long *plVar11;
  undefined8 uVar12;
  long local_c8;
  long local_c0;
  long *local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  long local_58;
  
  local_b8 = param_5;
  FUN__text__002a32ac(&local_78,param_5,&local_b8);
  FUN__text__002a33c8(&local_58,local_b8,&local_78);
  lVar10 = local_58;
  if (local_58 == 0) {
    if ((param_2 < 0x28) && (param_3 < 0x1e)) goto LAB__text__002a36e4;
  }
  else {
    (**(code **)(*(long *)(local_58 + 0x48) + 0x10))();
    if ((param_2 < 0x28) && (param_3 < 0x1e)) {
LAB__text__002a36e4:
      FUN__text__005fc3e8(*(undefined8 *)(lVar10 + 0x58),
                          param_1 + (ulong)param_2 * 0x2850 + (ulong)param_3 * 0x158 + 0x54);
    }
    plVar11 = (long *)(lVar10 + 0x48);
    (**(code **)(*plVar11 + 0x18))(plVar11);
  }
  if (local_78 != 0) {
    (**(code **)(*(long *)(local_78 + 0x48) + 0x18))();
  }
  if (local_58 == 0) {
    return;
  }
  uVar8 = FUN__text__00306588();
  if ((uVar8 & 1) != 0) goto LAB__text__002a3b64;
  uVar9 = FUN__text__00306bc4(local_58);
  local_68 = 0;
  uStack_60 = 0;
  uVar12 = *_DAT_0089f5b0;
  local_78 = 0;
  uStack_70 = 0;
  FUN__text__0029e844(&local_b8,uVar12);
  FUN__text__0029de48(local_b8,&local_78);
  if (local_b8 != (long *)0x0) {
    (**(code **)(local_b8[9] + 0x18))();
  }
  uVar4 = FUN__text__00633b08(uVar9);
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b8 = (long *)0x0;
  uStack_b0 = 0;
  FUN__text__00633b00(uVar9,&local_b8,0x20);
  if (uVar4 == local_78._4_1_) {
    iVar5 = wcsncmp((wchar_t *)((ulong)&local_78 | 6),(wchar_t *)&local_b8,0x1a);
    bVar1 = iVar5 == 0;
    if (1 < *(int *)(param_4 + 0x38) - 1U) goto LAB__text__002a380c;
LAB__text__002a37fc:
    cVar2 = FUN__text__00633b10(uVar9);
    if (cVar2 != '\0') goto LAB__text__002a380c;
LAB__text__002a3840:
    FUN__text__00633b18(uVar9,0x32);
    FUN__text__0063131c(uVar9,0);
    FUN__text__006339a4(uVar9,&local_78);
  }
  else {
    bVar1 = false;
    if (*(int *)(param_4 + 0x38) - 1U < 2) goto LAB__text__002a37fc;
LAB__text__002a380c:
    uVar8 = FUN__text__00633938(uVar9,&local_78);
    if ((uVar8 & 1) == 0) {
      if (!bVar1) goto LAB__text__002a3840;
      FUN__text__00633ac8(uVar9,1);
    }
    else {
      FUN__text__00633ac8(uVar9,0);
    }
  }
  iVar5 = FUN__text__0063152c(uVar9,0);
  if ((iVar5 == 0x1f) && (uVar8 = FUN__text__006315dc(uVar9,0), (uVar8 & 1) != 0)) {
    FUN__text__00631988(uVar9,0);
  }
  iVar5 = FUN__text__0063152c(uVar9,1);
  if ((iVar5 == 0x1f) && (uVar8 = FUN__text__006315dc(uVar9,1), (uVar8 & 1) != 0)) {
    FUN__text__00631988(uVar9,1);
  }
  iVar5 = FUN__text__0063152c(uVar9,2);
  if ((iVar5 == 0x1f) && (uVar8 = FUN__text__006315dc(uVar9,2), (uVar8 & 1) != 0)) {
    FUN__text__00631988(uVar9,2);
  }
  iVar5 = FUN__text__0063152c(uVar9,3);
  if ((iVar5 == 0x1f) && (uVar8 = FUN__text__006315dc(uVar9,3), (uVar8 & 1) != 0)) {
    FUN__text__00631988(uVar9,3);
  }
  iVar5 = FUN__text__0063152c(uVar9,4);
  if ((iVar5 == 0x1f) && (uVar8 = FUN__text__006315dc(uVar9,4), (uVar8 & 1) != 0)) {
    FUN__text__00631988(uVar9,4);
  }
  iVar5 = FUN__text__0063152c(uVar9,5);
  if ((iVar5 == 0x1f) && (uVar8 = FUN__text__006315dc(uVar9,5), (uVar8 & 1) != 0)) {
    FUN__text__00631988(uVar9,5);
  }
  FUN__text__00630fcc(uVar9);
  FUN__text__00633b2c(uVar9,0);
  lVar10 = local_58;
  if (local_58 == 0) {
    if ((param_2 < 0x28) && (param_3 < 0x1e)) goto LAB__text__002a39d4;
  }
  else {
    (**(code **)(*(long *)(local_58 + 0x48) + 0x10))();
    if ((param_2 < 0x28) && (param_3 < 0x1e)) {
LAB__text__002a39d4:
      FUN__text__005fc2e8(param_1 + (ulong)param_2 * 0x2850 + (ulong)param_3 * 0x158 + 0x54,
                          *(undefined8 *)(lVar10 + 0x58));
    }
    plVar11 = (long *)(lVar10 + 0x48);
    (**(code **)(*plVar11 + 0x18))(plVar11);
  }
  FUN__text__0029e824(&local_c0,uVar12);
  FUN__text__002a2378(local_c0,uVar9,3);
  iVar5 = FUN__text__00631008(uVar9);
  if ((iVar5 == 0x1ec) && (sVar3 = FUN__text__00631010(uVar9), sVar3 == 1)) {
    uVar8 = tpidr_el0;
    uVar8 = uVar8 & 0xffffffffffffe000;
    if (*(long *)(uVar8 + 0x98) == 0x10) {
                    /* WARNING: Subroutine does not return */
      FUN__text__00102c10();
    }
    *(long **)(uVar8 + *(long *)(uVar8 + 0x98) * 8 + 0x18) = param_5;
    *(long *)(uVar8 + 0x98) = *(long *)(uVar8 + 0x98) + 1;
    lVar10 = (**(code **)(*param_5 + 0x10))(param_5,0x310,8);
    if (lVar10 == 0) {
      (**(code **)(*param_5 + 0xb8))(param_5);
    }
    FUN__text__00637528(lVar10,param_5,uVar9);
    *(long **)(lVar10 + 8) = param_5;
    *(long *)(lVar10 + 0x10) = lVar10;
    *(undefined8 *)(lVar10 + 0x18) = 0x310;
    *(undefined8 *)(lVar10 + 0x20) = 8;
    *(long *)(uVar8 + 0x98) = *(long *)(uVar8 + 0x98) + -1;
    plVar11 = (long *)(lVar10 + 0x48);
    (**(code **)(*plVar11 + 0x10))(plVar11);
    FUN__text__00633c7c(lVar10,0,0);
    FUN__text__002a2378(local_c0,lVar10,3);
    (**(code **)(*plVar11 + 0x18))(plVar11);
  }
  FUN__text__0029e884(&local_c8,uVar12);
  lVar10 = local_c8;
  uVar6 = FUN__text__00631008(uVar9);
  uVar7 = FUN__text__00631010(uVar9);
  FUN__text__002a3c7c(lVar10,uVar6,uVar7);
  if (local_c8 != 0) {
    (**(code **)(*(long *)(local_c8 + 0x48) + 0x18))();
  }
  if (local_c0 != 0) {
    (**(code **)(*(long *)(local_c0 + 0x48) + 0x18))();
  }
LAB__text__002a3b64:
  if (local_58 != 0) {
    (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
  }
  return;
}


