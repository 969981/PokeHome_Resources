/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00220214; name: FUN_.text__00220214
 */


void FUN__text__00220214(long param_1,ulong param_2,undefined2 param_3,undefined1 param_4)

{
  long lVar1;
  undefined8 local_b0;
  long local_a8;
  long local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined1 local_64;
  undefined2 local_62;
  undefined2 local_60;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined2 local_28;
  undefined1 local_26;
  undefined1 local_25;
  undefined1 local_24;
  
  local_26 = 0;
  local_28 = 0x101;
  local_78 = 0;
  local_70 = 0x8abaf272a347e952;
  local_68 = 4;
  local_64 = 1;
  local_a0 = 0;
  local_62 = 0xffff;
  lVar1 = param_1 + (param_2 & 0xffffffff) * 0x20;
  local_38 = *(undefined8 *)(lVar1 + 0xf8);
  local_b0 = *(undefined8 *)(lVar1 + 0x100);
  uStack_30 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_50 = 0;
  uStack_48 = 0;
  local_a8 = *(long *)(lVar1 + 0x108);
  if (*(long *)(lVar1 + 0x110) != 0) {
    local_a8 = *(long *)(lVar1 + 0x110);
    local_a0 = *(long *)(lVar1 + 0x108);
  }
  local_60 = param_3;
  local_25 = param_4;
  local_24 = param_4;
  FUN__text__00131e04(*(undefined8 *)(param_1 + 0xf0),&local_38,&local_b0);
  FUN__text__00128ec0(*(undefined8 *)(param_1 + 0xf0),0);
  return;
}


