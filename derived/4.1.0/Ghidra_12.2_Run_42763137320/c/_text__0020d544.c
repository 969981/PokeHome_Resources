/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0020d544; name: FUN_.text__0020d544
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0020d544(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined4 uVar6;
  undefined1 auStack_d8 [24];
  long local_c0;
  undefined4 local_b4;
  undefined8 local_b0;
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
  undefined8 local_18;
  
  local_18 = param_3;
  uVar3 = (**(code **)(**(long **)(param_1 + 0x720) + 0x10))();
  if ((uVar3 & 1) == 0) {
    local_b4 = 0;
    uVar3 = FUN__text__0020f29c(*(undefined8 *)(param_1 + 0x6e0),&local_18,&local_b4);
    if ((uVar3 & 1) == 0) {
      return;
    }
    lVar5 = *_DAT_0089f598;
    FUN__text__005e927c(auStack_d8,0x8700e8);
    uVar4 = FUN__text__003eec14(lVar5);
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
    iVar2 = FUN__text__003ef560(lVar5,auStack_d8,uVar4,0);
    if ((iVar2 != 0) &&
       (FUN__text__0015e5bc(*(undefined8 *)(lVar5 + 0x210),auStack_d8,iVar2,uVar4,0,&local_b0,0),
       pcVar1 = local_a8, local_a8 != (code *)0x0)) {
      local_a0 = 0;
      uStack_98 = 0;
      local_b0 = 0;
      local_a8 = (code *)0x0;
      (*pcVar1)(&local_90);
    }
    if (local_c0 != 0) {
      (**(code **)(*(long *)(local_c0 + 0x48) + 0x18))();
    }
    FUN__text__003a14c4(*(undefined8 *)(param_1 + 0x6d8),0);
    FUN__text__00128ca0(param_1,0,1);
    lVar5 = *(long *)(param_1 + 0x6d0);
    uVar6 = 6;
  }
  else {
    iVar2 = *(int *)(*(long *)(param_1 + 0x720) + 0xf8);
    *(undefined4 *)(*(long *)(param_1 + 0x720) + 0xf8) = 0;
    lVar5 = *(long *)(param_1 + 0x6d0);
    if (iVar2 == 1) {
      uVar6 = 4;
    }
    else {
      uVar6 = 5;
    }
  }
  *(undefined4 *)(lVar5 + 0x6c) = uVar6;
  return;
}


