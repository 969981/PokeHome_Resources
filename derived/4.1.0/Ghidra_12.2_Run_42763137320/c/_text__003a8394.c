/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003a8394; name: FUN_.text__003a8394
 */


void FUN__text__003a8394(long param_1,int param_2,int param_3,undefined1 param_4)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  int iVar5;
  code *pcVar6;
  long *plVar7;
  long *local_60;
  long *local_58;
  int local_50;
  int iStack_4c;
  int local_48;
  int local_44;
  long **local_40;
  undefined8 uStack_38;
  long *local_18;
  
  lVar4 = *(long *)(param_1 + 0x408);
  iVar5 = *(int *)(lVar4 + 0x1c);
  if (iVar5 == 0) {
    iVar1 = *(int *)(lVar4 + 0xc);
    local_44 = 0;
    if (iVar1 != 0) {
      local_44 = param_3 / iVar1;
    }
    local_48 = param_3 - local_44 * iVar1;
    iStack_4c = 0;
    if (iVar1 != 0) {
      iStack_4c = param_2 / iVar1;
    }
    local_50 = param_2 - iStack_4c * iVar1;
    pcVar6 = *(code **)(param_1 + 0xb0);
  }
  else {
    iVar1 = *(int *)(lVar4 + 0x10);
    local_48 = 0;
    if (iVar1 != 0) {
      local_48 = param_3 / iVar1;
    }
    local_44 = param_3 - local_48 * iVar1;
    local_50 = 0;
    if (iVar1 != 0) {
      local_50 = param_2 / iVar1;
    }
    iStack_4c = param_2 - local_50 * iVar1;
    pcVar6 = *(code **)(param_1 + 0xb0);
  }
  if (pcVar6 != (code *)0x0) {
    local_40 = (long **)(CONCAT71(local_40._1_7_,param_4) & 0xffffffffffffff01);
    (*pcVar6)(param_1 + 0xd0,&local_50,&local_48,&local_40);
    lVar4 = *(long *)(param_1 + 0x408);
    iVar5 = *(int *)(lVar4 + 0x1c);
  }
  if (iVar5 == 0) {
    iVar5 = local_48 + *(int *)(lVar4 + 0xc) * local_44;
  }
  else {
    iVar5 = local_44 + *(int *)(lVar4 + 0x10) * local_48;
  }
  uStack_38 = FUN__text__003b5bc4(lVar4,iVar5);
  local_40 = &local_18;
  local_18 = (long *)0x0;
  FUN__text__003aa1c0(param_1,&local_40,0);
  plVar2 = local_18;
  lVar4 = *(long *)(param_1 + 0x408);
  if (*(int *)(lVar4 + 0x1c) == 0) {
    iVar5 = local_50 + *(int *)(lVar4 + 0xc) * iStack_4c;
  }
  else {
    iVar5 = iStack_4c + *(int *)(lVar4 + 0x10) * local_50;
  }
  uStack_38 = FUN__text__003b5bc4(lVar4,iVar5);
  local_40 = &local_18;
  local_18 = (long *)0x0;
  FUN__text__003aa1c0(param_1,&local_40,0);
  plVar3 = local_18;
  if (plVar2 == (long *)0x0) {
    plVar7 = *(long **)(param_1 + 0x3b8);
    if (plVar7 == (long *)0x0) goto LAB__text__003a8578;
    local_58 = (long *)0x0;
  }
  else {
    (**(code **)(*plVar2 + 0xe8))(plVar2);
    plVar7 = *(long **)(param_1 + 0x3b8);
    if (plVar7 == (long *)0x0) goto LAB__text__003a8578;
    local_58 = plVar2;
    (**(code **)(plVar2[9] + 0x10))(plVar2 + 9);
  }
  local_60 = plVar3;
  if (plVar3 != (long *)0x0) {
    (**(code **)(plVar3[9] + 0x10))();
  }
  (**(code **)(*plVar7 + 0xf8))(plVar7,&local_58,&local_60);
  if (local_60 != (long *)0x0) {
    (**(code **)(local_60[9] + 0x18))();
    local_60 = (long *)0x0;
  }
  if (local_58 != (long *)0x0) {
    (**(code **)(local_58[9] + 0x18))();
    local_58 = (long *)0x0;
  }
LAB__text__003a8578:
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0xe0))(plVar3);
  }
  return;
}


