/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001bd5f8; name: FUN_.text__001bd5f8
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__001bd5f8(long param_1)

{
  code *pcVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined1 auStack_d0 [24];
  long local_b8;
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
  
  lVar4 = *(long *)(*(long *)(param_1 + 8) + 0x2d0);
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  local_b0 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x38) + 0xe8) + 0x2c);
  FUN__text__001bd730(param_1,param_1 + 0x5a58,&local_b0);
  lVar5 = *_DAT_0089f598;
  FUN__text__005e927c(auStack_d0,_DAT_008a0608);
  uVar3 = FUN__text__003eec14(lVar5);
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
  iVar2 = FUN__text__003ef560(lVar5,auStack_d0,uVar3,0);
  if (iVar2 != 0) {
    FUN__text__0015e5bc(*(undefined8 *)(lVar5 + 0x210),auStack_d0,iVar2,uVar3,0,&local_b0,0);
    pcVar1 = local_a8;
    if (local_a8 != (code *)0x0) {
      local_a0 = 0;
      uStack_98 = 0;
      local_b0 = 0;
      local_a8 = (code *)0x0;
      (*pcVar1)(&local_90);
    }
  }
  if (local_b8 != 0) {
    (**(code **)(*(long *)(local_b8 + 0x48) + 0x18))();
  }
  FUN__text__001a0248(*(undefined8 *)(param_1 + 0x38));
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
  }
  return;
}


