/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002cb320; name: FUN_.text__002cb320
 */


void FUN__text__002cb320(long param_1)

{
  code *pcVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined8 uVar7;
  undefined8 local_e0;
  code *local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined1 auStack_c0 [96];
  undefined1 auStack_60 [24];
  long local_48;
  
  uVar7 = *(undefined8 *)(param_1 + 0x50);
  FUN__text__005e927c(auStack_60,0x87aec0);
  local_d0 = 0;
  uStack_c8 = 0;
  local_e0 = 0;
  local_d8 = (code *)0x0;
  uVar2 = FUN__text__002ce1c4(uVar7,auStack_60,&local_e0);
  pcVar1 = local_d8;
  if (local_d8 != (code *)0x0) {
    local_d0 = 0;
    uStack_c8 = 0;
    local_e0 = 0;
    local_d8 = (code *)0x0;
    (*pcVar1)(auStack_c0);
  }
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
  }
  uVar7 = *(undefined8 *)(param_1 + 0x58);
  FUN__text__005e927c(auStack_60,0x87aed8);
  local_d0 = 0;
  uStack_c8 = 0;
  local_e0 = 0;
  local_d8 = (code *)0x0;
  uVar3 = FUN__text__002ce1c4(uVar7,auStack_60,&local_e0);
  pcVar1 = local_d8;
  if (local_d8 != (code *)0x0) {
    local_d0 = 0;
    uStack_c8 = 0;
    local_e0 = 0;
    local_d8 = (code *)0x0;
    (*pcVar1)(auStack_c0);
  }
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
  }
  uVar7 = *(undefined8 *)(param_1 + 0x60);
  FUN__text__005e927c(auStack_60,0x87aef0);
  local_d0 = 0;
  uStack_c8 = 0;
  local_e0 = 0;
  local_d8 = (code *)0x0;
  uVar4 = FUN__text__002ce1c4(uVar7,auStack_60,&local_e0);
  pcVar1 = local_d8;
  if (local_d8 != (code *)0x0) {
    local_d0 = 0;
    uStack_c8 = 0;
    local_e0 = 0;
    local_d8 = (code *)0x0;
    (*pcVar1)(auStack_c0);
  }
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
  }
  uVar7 = *(undefined8 *)(param_1 + 0x68);
  FUN__text__005e927c(auStack_60,0x87af08);
  local_d0 = 0;
  uStack_c8 = 0;
  local_e0 = 0;
  local_d8 = (code *)0x0;
  uVar5 = FUN__text__002ce1c4(uVar7,auStack_60,&local_e0);
  pcVar1 = local_d8;
  if (local_d8 != (code *)0x0) {
    local_d0 = 0;
    uStack_c8 = 0;
    local_e0 = 0;
    local_d8 = (code *)0x0;
    (*pcVar1)(auStack_c0);
  }
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
  }
  uVar7 = *(undefined8 *)(param_1 + 0x70);
  FUN__text__005e927c(auStack_60,0x87af20);
  local_d0 = 0;
  uStack_c8 = 0;
  local_e0 = 0;
  local_d8 = (code *)0x0;
  uVar6 = FUN__text__002ce1c4(uVar7,auStack_60,&local_e0);
  pcVar1 = local_d8;
  if (local_d8 != (code *)0x0) {
    local_d0 = 0;
    uStack_c8 = 0;
    local_e0 = 0;
    local_d8 = (code *)0x0;
    (*pcVar1)(auStack_c0);
  }
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
  }
  if ((uVar2 & uVar3 & uVar4 & uVar5 & uVar6 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl();
  }
  return;
}


