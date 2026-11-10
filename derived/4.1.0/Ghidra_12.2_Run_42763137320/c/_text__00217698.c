/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00217698; name: FUN_.text__00217698
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00217698(long param_1)

{
  code *pcVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  long local_b8;
  long local_b0;
  code *local_a8;
  undefined8 local_a0;
  long local_98;
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
  
  lVar6 = *_DAT_0089f598;
  local_d0 = 0xb7c21a541bc97583;
  uStack_c8 = 0x710db5;
  local_c0 = 0x14;
  local_b8 = 0;
  uVar3 = FUN__text__003eec14(lVar6);
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
  local_98 = 0;
  local_b0 = 0;
  local_a8 = (code *)0x0;
  iVar2 = FUN__text__003ef560(lVar6,&local_d0,uVar3,0);
  if (iVar2 != 0) {
    FUN__text__0015e5bc(*(undefined8 *)(lVar6 + 0x210),&local_d0,iVar2,uVar3,0,&local_b0,0);
    pcVar1 = local_a8;
    if (local_a8 != (code *)0x0) {
      local_a0 = 0;
      local_98 = 0;
      local_b0 = 0;
      local_a8 = (code *)0x0;
      (*pcVar1)(&local_90);
    }
  }
  if (local_b8 != 0) {
    (**(code **)(*(long *)(local_b8 + 0x48) + 0x18))();
  }
  FUN__text__00125548(param_1,param_1 + 0x5d0,0x2000000);
  FUN__text__0012559c(param_1);
  FUN__text__001820d0(&local_b0);
  if (*(long *)(param_1 + 0x5c8) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x5c8) + 0x48) + 0x18))();
  }
  lVar6 = local_b0;
  *(long *)(param_1 + 0x5c8) = local_b0;
  lVar5 = *(long *)(param_1 + 0x338);
  if (lVar5 != 0) {
    plVar7 = (long *)(lVar5 + 0x48);
    (**(code **)(*plVar7 + 0x10))(plVar7);
    (**(code **)(*plVar7 + 0x10))(plVar7);
  }
  lVar4 = *(long *)(lVar6 + 0x58);
  *(long *)(lVar6 + 0x58) = lVar5;
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))();
  }
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
  }
  if (*(long *)(param_1 + 0x5c8) != 0) {
    plVar7 = (long *)(*(long *)(param_1 + 0x5c8) + 0x48);
    (**(code **)(*plVar7 + 0x10))(plVar7);
    (**(code **)(*plVar7 + 0x18))(plVar7);
  }
  FUN__text__002178c0(param_1);
  FUN__text__00181a9c(param_1);
  FUN__text__00181cd0(param_1);
  local_b0 = 0x806a75b771aae16;
  local_a8 = (code *)0x719236;
  local_a0 = 0x1f;
  local_98 = 0;
  if (*(long *)(param_1 + 0xb8) != 0) {
    FUN__text__00115454(*(long *)(param_1 + 0xb8),&local_b0,0xb);
    if (local_98 != 0) {
      (**(code **)(*(long *)(local_98 + 0x48) + 0x18))();
    }
  }
  FUN__text__00130104(0x71e39f,0x710dca,*(undefined8 *)(param_1 + 0x5c8));
  return;
}


