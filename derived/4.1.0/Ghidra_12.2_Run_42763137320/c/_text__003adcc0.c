/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003adcc0; name: FUN_.text__003adcc0
 */


void FUN__text__003adcc0(long param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  long *plVar4;
  long *plVar5;
  code *pcVar6;
  long *plVar7;
  long **local_e0;
  code *local_d8;
  code *local_d0;
  undefined1 *puStack_c8;
  long local_c0 [13];
  long *local_58;
  long *local_50;
  undefined4 local_44;
  long *local_28;
  
  uVar1 = FUN__text__003b7414(*(undefined8 *)(param_1 + 0x800));
  uVar2 = (**(code **)(**(long **)(param_1 + 0xb0) + 0x50))();
  if (uVar2 <= uVar1) {
    return;
  }
  *(undefined4 *)(param_1 + 0x848) = param_2;
  *(undefined4 *)(*(long *)(param_1 + 0x800) + 0x14) = param_2;
  *(int *)(param_1 + 0x84c) = param_3;
  *(int *)(*(long *)(param_1 + 0x800) + 0x10) = param_3;
  FUN__text__003b6b04((float)param_3,*(undefined8 *)(param_1 + 0x7e0));
  if (*(long *)(param_1 + 0x1c0) != 0) {
    puVar3 = (undefined8 *)FUN__text__003b8e30(param_1 + 0x788,uVar1);
    local_e0 = (long **)*puVar3;
    local_44 = *(undefined4 *)(puVar3 + 2);
    local_28 = (long *)CONCAT44(local_28._4_4_,uVar1);
    (**(code **)(param_1 + 0x1c0))(param_1 + 0x1e0,&local_28,&local_e0,&local_44);
  }
  puVar3 = (undefined8 *)FUN__text__003b8e30(param_1 + 0x788,uVar1);
  if (puVar3 == (undefined8 *)0x0) {
    return;
  }
  local_d8 = *(code **)(param_1 + 0x840);
  plVar7 = (long *)0x0;
  if ((local_d8 != (code *)0xcbf29ce484222645) && (local_d8 != (code *)0x0)) {
    local_e0 = &local_28;
    local_28 = (long *)0x0;
    FUN__text__003aa1c0(param_1,&local_e0,0);
    plVar7 = local_28;
    (**(code **)(*local_28 + 0xe8))(local_28);
    plVar4 = (long *)(**(code **)plVar7[10])();
    plVar5 = (long *)FUN__text__0012ea34();
    if (plVar5 == plVar4) {
LAB__text__003ade08:
      pcVar6 = (code *)plVar7[0x51];
      plVar4 = plVar7;
    }
    else {
      do {
        plVar4 = (long *)*plVar4;
      } while (plVar4 != plVar5 && plVar4 != (long *)0x0);
      if (plVar4 != (long *)0x0) goto LAB__text__003ade08;
      plVar4 = (long *)0x0;
      pcVar6 = pcRam0000000000000288;
    }
    if (pcVar6 != (code *)0x0) {
      plVar4[0x53] = 0;
      plVar4[0x52] = 0;
      plVar4[0x51] = 0;
      plVar4[0x50] = 0;
      (*pcVar6)(plVar4 + 0x54);
    }
  }
  local_d8 = (code *)*puVar3;
  local_e0 = &local_28;
  local_28 = (long *)0x0;
  FUN__text__003aa1c0(param_1,&local_e0,0);
  plVar4 = local_28;
  plVar5 = *(long **)(param_1 + 2000);
  if (plVar5 != (long *)0x0) {
    local_50 = plVar7;
    if (plVar7 != (long *)0x0) {
      (**(code **)(plVar7[9] + 0x10))(plVar7 + 9);
    }
    local_58 = plVar4;
    if (plVar4 != (long *)0x0) {
      (**(code **)(plVar4[9] + 0x10))();
    }
    (**(code **)(*plVar5 + 0xf8))(plVar5,&local_50,&local_58);
    if (local_58 != (long *)0x0) {
      (**(code **)(local_58[9] + 0x18))();
      local_58 = (long *)0x0;
    }
    if (local_50 != (long *)0x0) {
      (**(code **)(local_50[9] + 0x18))();
      local_50 = (long *)0x0;
    }
  }
  if (plVar4 == (long *)0x0) {
    return;
  }
  *(undefined8 *)(param_1 + 0x840) = *puVar3;
  (**(code **)(*plVar4 + 0xe0))(plVar4);
  plVar7 = (long *)(**(code **)plVar4[10])();
  plVar5 = (long *)FUN__text__0012ea34();
  if (plVar5 != plVar7) {
    do {
      plVar7 = (long *)*plVar7;
    } while (plVar7 != plVar5 && plVar7 != (long *)0x0);
  }
  pcVar6 = (code *)plVar4[0x51];
  local_e0 = (long **)&LAB__text__003b52f0;
  local_d8 = FUN__text__003b53cc;
  local_d0 = FUN__text__003b53d0;
  puStack_c8 = &LAB__text__003b53dc;
  local_c0[0] = param_1;
  if (pcVar6 != (code *)0x0) {
    plVar4[0x52] = 0;
    plVar4[0x53] = 0;
    plVar4[0x50] = 0;
    plVar4[0x51] = 0;
    (*pcVar6)(plVar4 + 0x54);
    if (local_d0 == (code *)0x0) goto LAB__text__003adf94;
  }
  (*local_d0)(local_c0,plVar4 + 0x54);
  plVar4[0x50] = (long)local_e0;
  plVar4[0x51] = (long)local_d8;
  plVar4[0x52] = (long)local_d0;
  plVar4[0x53] = (long)puStack_c8;
LAB__text__003adf94:
  pcVar6 = local_d8;
  if (local_d8 != (code *)0x0) {
    local_d0 = (code *)0x0;
    puStack_c8 = (undefined1 *)0x0;
    local_e0 = (long **)0x0;
    local_d8 = (code *)0x0;
    (*pcVar6)(local_c0);
  }
  return;
}


