/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00187930; name: FUN_.text__00187930
 */


void FUN__text__00187930(long param_1)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 local_e0;
  long local_d8;
  long local_d0;
  long local_c8;
  long local_c0;
  long local_b8;
  long local_b0;
  long local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined1 local_74;
  undefined4 local_72;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined1 local_34;
  long local_18;
  
  local_88 = 0;
  local_c0 = 0;
  local_80 = 0x8abaf272a347e952;
  local_78 = 4;
  local_60 = 0;
  uStack_58 = 0;
  puVar3 = *(undefined8 **)(*(long *)(param_1 + 0x60) + 0x60);
  local_38 = 0x1000101;
  local_34 = 1;
  local_74 = 1;
  local_48 = 0;
  local_40 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_72 = 0xffff;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  plVar1 = (long *)(**(code **)*puVar3)(puVar3);
  plVar2 = (long *)FUN__text__0012615c();
  if (plVar2 != plVar1) {
    do {
      plVar1 = (long *)*plVar1;
    } while (plVar1 != plVar2 && plVar1 != (long *)0x0);
  }
  FUN__text__001156d0(&local_18,*(undefined8 *)(puVar3[0xaf] + 0xb0),0);
  lVar4 = *(long *)(local_18 + 0x60);
  if ((lVar4 == 0) || ((**(code **)(*(long *)(lVar4 + 0x48) + 0x10))(), local_18 != 0)) {
    (**(code **)(*(long *)(local_18 + 0x48) + 0x18))();
  }
  local_18 = 0x5769bf9354bd9841;
  FUN__text__005f2d98(lVar4,&local_18,*(undefined8 *)(param_1 + 0x118));
  local_c8 = CONCAT44(local_c8._4_4_,0x200);
  FUN__text__00111970(&local_18,*(undefined8 *)(param_1 + 8),&local_c8);
  local_c8 = 0x13fa00777b30fe85;
  FUN__text__005f2d98(lVar4,&local_c8,local_18);
  local_d0 = CONCAT44(local_d0._4_4_,0x200);
  FUN__text__00111970(&local_c8,*(undefined8 *)(param_1 + 8),&local_d0);
  local_d0 = 0x13fd86777b34180e;
  FUN__text__005f2d98(lVar4,&local_d0,local_c8);
  local_d8 = CONCAT44(local_d8._4_4_,0x200);
  FUN__text__00111970(&local_d0,*(undefined8 *)(param_1 + 8),&local_d8);
  local_d8 = 0x14008c777b365817;
  FUN__text__005f2d98(lVar4,&local_d8,local_d0);
  local_e0 = CONCAT44(local_e0._4_4_,0x200);
  FUN__text__00111970(&local_d8,*(undefined8 *)(param_1 + 8),&local_e0);
  local_e0 = 0x6349f077a87f68f9;
  FUN__text__005f2d98(lVar4,&local_e0,local_d8);
  local_48 = *(undefined8 *)(param_1 + 0x118);
  local_38 = CONCAT31(local_38._1_3_,1);
  local_40 = CONCAT44(local_40._4_4_,1);
  local_c0 = local_18;
  local_b8 = local_c8;
  local_b0 = local_d0;
  local_a8 = local_d8;
  FUN__text__00131e04(*(undefined8 *)(param_1 + 0x110),&local_48,&local_c0);
  FUN__text__00128ec0(*(undefined8 *)(param_1 + 0x110),0);
  *(undefined1 *)(param_1 + 0x122) = 1;
  if (local_d8 != 0) {
    (**(code **)(*(long *)(local_d8 + 0x48) + 0x18))();
  }
  if (local_d0 != 0) {
    (**(code **)(*(long *)(local_d0 + 0x48) + 0x18))();
  }
  if (local_c8 != 0) {
    (**(code **)(*(long *)(local_c8 + 0x48) + 0x18))();
  }
  if (local_18 != 0) {
    (**(code **)(*(long *)(local_18 + 0x48) + 0x18))();
  }
  (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
  return;
}


