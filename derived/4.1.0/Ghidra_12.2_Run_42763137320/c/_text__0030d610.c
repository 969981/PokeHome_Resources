/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0030d610; name: FUN_.text__0030d610
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0030d610(void)

{
  undefined8 *puVar1;
  long *plVar2;
  long *plVar3;
  undefined8 *puVar4;
  int iVar5;
  long local_f0;
  undefined8 uStack_e8;
  long local_e0;
  long local_d8;
  long local_d0;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  long local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  long local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  puVar4 = _DAT_0089f550;
  puVar1 = (undefined8 *)(DAT_008e55f8 + 0xf00098);
  FUN__text__005da7f0(&local_70,*_DAT_0089f550,DAT_008e55f8 + 0x68,*puVar1);
  local_c0 = local_70;
  uStack_b8 = uStack_68;
  local_b0 = local_60;
  local_a8 = local_58;
  uStack_a0 = uStack_50;
  local_98 = local_48;
  local_90 = local_40;
  if (local_40 != 0) {
    (**(code **)(*(long *)(local_40 + 0x48) + 0x10))();
  }
  local_88 = local_38;
  uStack_80 = uStack_30;
  local_78 = local_28;
  iVar5 = FUN__text__005dd608(&local_c0);
  if (iVar5 == 3) {
    iVar5 = FUN__text__005dd648(&local_c0,*puVar1);
  }
  else {
    iVar5 = 0;
  }
  if (local_90 != 0) {
    (**(code **)(*(long *)(local_90 + 0x48) + 0x18))();
    local_90 = 0;
  }
  if (iVar5 == 0) {
    FUN__text__0029ef3c(&local_f0,0x70b9e8,&local_70);
    plVar2 = _DAT_0089f5d0;
    if (local_f0 != 0) {
      plVar2 = (long *)(local_f0 + 0x60);
    }
    plVar3 = &local_e0;
    if (local_d8 != 0) {
      plVar3 = plVar2;
    }
    nn::fs::DeleteFile((char *)*plVar3);
    FUN__text__005dd758(&local_70);
    FUN__text__005daa98(*puVar4,&local_70);
    if ((local_d8 != 0) && (local_f0 != 0)) {
      (**(code **)(*(long *)(local_f0 + 0x48) + 0x18))();
    }
    local_f0 = 0;
    uStack_e8 = 0xcbf29ce484222645;
    local_e0 = 0x70f683;
    local_d8 = 0;
    if (local_d0 != 0) {
      (**(code **)(*(long *)(local_d0 + 0x48) + 0x18))();
    }
  }
  if (local_40 != 0) {
    (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
  }
  return;
}


