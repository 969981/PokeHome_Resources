/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002131f0; name: FUN_.text__002131f0
 */


void FUN__text__002131f0(long param_1)

{
  long *plVar1;
  long local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined1 local_64;
  undefined4 local_62;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined1 local_24;
  undefined8 local_8;
  
  local_30 = 0;
  local_24 = 1;
  local_64 = 1;
  local_62 = 0xffff;
  local_28 = 0x1000100;
  local_50 = 0;
  uStack_48 = 0;
  plVar1 = (long *)(*(long *)(*(long *)(param_1 + 0x78) + 0x640) + 0x60);
  local_70 = 0x8abaf272a347e952;
  local_78 = 0;
  local_68 = 4;
  local_88 = 0;
  uStack_80 = 0;
  local_a0 = 0;
  local_98 = 0;
  uStack_90 = 0;
  (**(code **)(*plVar1 + 8))(plVar1,0);
  if (*(long *)(param_1 + 0x80) != 0) {
    local_8 = 0x229c3ea546748d5c;
    FUN__text__005f2d98(*(long *)(param_1 + 0x80),&local_8,*(undefined8 *)(param_1 + 0x88));
    local_8 = 0xfe7650a653d1f132;
    FUN__text__005f2d98(*(undefined8 *)(param_1 + 0x80),&local_8,*(undefined8 *)(param_1 + 0x90));
    local_8 = 0xfa151c506b6da084;
    FUN__text__005f2d98(*(undefined8 *)(param_1 + 0x80),&local_8,*(undefined8 *)(param_1 + 0x98));
  }
  local_b0 = *(long *)(param_1 + 0x90);
  uStack_a8 = *(undefined8 *)(param_1 + 0x98);
  local_38 = *(undefined8 *)(param_1 + 0x88);
  if (local_b0 == 0) {
    FUN__text__00131da0(*(undefined8 *)(param_1 + 0x78),&local_38);
  }
  else {
    FUN__text__00131e04(*(undefined8 *)(param_1 + 0x78),&local_38,&local_b0);
  }
  FUN__text__00128ec0(*(undefined8 *)(param_1 + 0x78),0);
  return;
}


