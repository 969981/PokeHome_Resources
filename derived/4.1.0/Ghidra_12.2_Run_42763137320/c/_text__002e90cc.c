/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002e90cc; name: FUN_.text__002e90cc
 */


void FUN__text__002e90cc(long param_1,long *param_2,undefined4 param_3,undefined4 param_4,
                        long param_5)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  long *plVar8;
  long local_c0;
  long local_b8;
  undefined8 local_b0;
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
  
  if (*param_2 == 0) {
    return;
  }
  FUN__text__0063116c();
  local_38 = *param_2;
  if (local_38 == 0) {
    FUN__text__002e8e5c(param_1,&local_38,param_3,param_4);
    lVar5 = *param_2;
  }
  else {
    plVar8 = (long *)(local_38 + 0x48);
    (**(code **)(*plVar8 + 0x10))(plVar8);
    FUN__text__002e8e5c(param_1,&local_38,param_3,param_4);
    (**(code **)(*plVar8 + 0x18))(plVar8);
    lVar5 = *param_2;
  }
  if (lVar5 == 0) {
    return;
  }
  uVar6 = FUN__text__00631174();
  if ((uVar6 & 1) != 0) {
    return;
  }
  local_60 = 0;
  uStack_58 = 0;
  local_70 = 0;
  uStack_68 = 0;
  uVar7 = FUN__text__002f0b90();
  FUN__text__002c758c(uVar7,&local_70);
  uVar3 = FUN__text__00633b08(*param_2);
  local_80 = 0;
  uStack_78 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  FUN__text__00633b00(*param_2,&local_b0,0x20);
  if (uVar3 == local_70._4_1_) {
    iVar4 = wcsncmp((wchar_t *)((ulong)&local_70 | 6),(wchar_t *)&local_b0,0x1a);
    bVar1 = iVar4 == 0;
    if (1 < *(int *)(param_5 + 0x38) - 1U) goto LAB__text__002e9218;
LAB__text__002e9208:
    cVar2 = FUN__text__00633b10(*param_2);
    if (cVar2 != '\0') goto LAB__text__002e9218;
    lVar5 = *param_2;
LAB__text__002e9254:
    FUN__text__00633b18(lVar5,0x32);
    FUN__text__0063131c(*param_2,0);
    FUN__text__006339a4(*param_2,&local_70);
  }
  else {
    bVar1 = false;
    if (*(int *)(param_5 + 0x38) - 1U < 2) goto LAB__text__002e9208;
LAB__text__002e9218:
    uVar6 = FUN__text__00633938(*param_2,&local_70);
    lVar5 = *param_2;
    if ((uVar6 & 1) == 0) {
      if (bVar1) {
        FUN__text__00633ac8(lVar5,1);
        goto LAB__text__002e9280;
      }
      goto LAB__text__002e9254;
    }
    FUN__text__00633ac8(lVar5,0);
  }
  if (!bVar1) {
    FUN__text__006337ac(*param_2);
  }
LAB__text__002e9280:
  iVar4 = FUN__text__0063152c(*param_2,0);
  if ((iVar4 == 0x1f) && (uVar6 = FUN__text__006315dc(*param_2,0), (uVar6 & 1) != 0)) {
    FUN__text__00631988(*param_2,0);
  }
  iVar4 = FUN__text__0063152c(*param_2,1);
  if ((iVar4 == 0x1f) && (uVar6 = FUN__text__006315dc(*param_2,1), (uVar6 & 1) != 0)) {
    FUN__text__00631988(*param_2,1);
  }
  iVar4 = FUN__text__0063152c(*param_2,2);
  if ((iVar4 == 0x1f) && (uVar6 = FUN__text__006315dc(*param_2,2), (uVar6 & 1) != 0)) {
    FUN__text__00631988(*param_2,2);
  }
  iVar4 = FUN__text__0063152c(*param_2,3);
  if ((iVar4 == 0x1f) && (uVar6 = FUN__text__006315dc(*param_2,3), (uVar6 & 1) != 0)) {
    FUN__text__00631988(*param_2,3);
  }
  iVar4 = FUN__text__0063152c(*param_2,4);
  if ((iVar4 == 0x1f) && (uVar6 = FUN__text__006315dc(*param_2,4), (uVar6 & 1) != 0)) {
    FUN__text__00631988(*param_2,4);
  }
  iVar4 = FUN__text__0063152c(*param_2,5);
  if ((iVar4 == 0x1f) && (uVar6 = FUN__text__006315dc(*param_2,5), (uVar6 & 1) != 0)) {
    FUN__text__00631988(*param_2,5);
  }
  FUN__text__00630fcc(*param_2);
  FUN__text__00633b2c(*param_2,0);
  FUN__text__002e946c(&local_b8,*(undefined8 *)(param_1 + 8),param_2);
  local_c0 = local_b8;
  if (local_b8 == 0) {
    FUN__text__002e8ab0(param_1,&local_c0,param_3,param_4);
    uVar7 = FUN__text__002f0f10();
    FUN__text__002d1e48(uVar7,*param_2);
  }
  else {
    plVar8 = (long *)(local_b8 + 0x48);
    (**(code **)(*plVar8 + 0x10))(plVar8);
    FUN__text__002e8ab0(param_1,&local_c0,param_3,param_4);
    (**(code **)(*plVar8 + 0x18))(plVar8);
    uVar7 = FUN__text__002f0f10();
    FUN__text__002d1e48(uVar7,*param_2);
  }
  if (local_b8 != 0) {
    (**(code **)(*(long *)(local_b8 + 0x48) + 0x18))();
  }
  return;
}


