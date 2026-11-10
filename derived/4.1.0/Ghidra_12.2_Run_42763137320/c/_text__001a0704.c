/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001a0704; name: FUN_.text__001a0704
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__001a0704(long param_1)

{
  code *pcVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_c0 [24];
  long local_a8;
  undefined8 local_a0;
  code *local_98;
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
  undefined8 local_30;
  undefined8 uStack_28;
  
  FUN__text__001a4200(*(undefined8 *)(param_1 + 0x28));
  iVar2 = FUN__text__001a5700(*(undefined8 *)(param_1 + 0x128));
  if (iVar2 == 0) {
    if (*(int *)(param_1 + 0x1e8) == 5) {
      *(undefined4 *)(param_1 + 0x1e8) = 0;
    }
    lVar4 = *_DAT_0089f598;
    uVar3 = _DAT_008a0658;
  }
  else {
    FUN__text__001ca664(*(undefined8 *)(param_1 + 0x68),0);
    FUN__text__001ca664(*(undefined8 *)(param_1 + 0x88),0);
    FUN__text__001ca664(*(undefined8 *)(param_1 + 0xa8),0);
    FUN__text__001ca664(*(undefined8 *)(param_1 + 200),0);
    lVar4 = *_DAT_0089f598;
    uVar3 = _DAT_008a0608;
  }
  FUN__text__005e927c(auStack_c0,uVar3);
  uVar3 = FUN__text__003eec14(lVar4);
  local_30 = 0;
  uStack_28 = 0;
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
  local_98 = (code *)0x0;
  iVar2 = FUN__text__003ef560(lVar4,auStack_c0,uVar3,0);
  if (iVar2 != 0) {
    FUN__text__0015e5bc(*(undefined8 *)(lVar4 + 0x210),auStack_c0,iVar2,uVar3,0,&local_a0,0);
    pcVar1 = local_98;
    if (local_98 != (code *)0x0) {
      local_90 = 0;
      uStack_88 = 0;
      local_a0 = 0;
      local_98 = (code *)0x0;
      (*pcVar1)(&local_80);
    }
  }
  if (local_a8 != 0) {
    (**(code **)(*(long *)(local_a8 + 0x48) + 0x18))();
  }
  return;
}


