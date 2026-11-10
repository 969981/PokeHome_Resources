/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005b25b4; name: FUN_.text__005b25b4
 */


void FUN__text__005b25b4(long param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 *puVar1;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  
  nn::os::InitializeLightEvent(param_1,0,1);
  *(undefined1 *)(param_1 + 2) = 0x4f;
  *(undefined1 *)(param_1 + 3) = 0;
  local_60 = 0;
  local_38 = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  uStack_68 = 0;
  uStack_40 = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = param_2;
  *(undefined8 *)(param_1 + 0x30) = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  uStack_78 = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = param_2;
  *(undefined8 *)(param_1 + 0x58) = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_70 = param_2;
  local_48 = param_2;
  FUN__text__005b3880(&local_90);
  puVar1 = (undefined8 *)(param_1 + 0xa0);
  *puVar1 = 0;
  *(undefined8 **)(param_1 + 0xa8) = puVar1;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(long *)(param_1 + 0x70) = param_1 + 0x70;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined1 *)(param_1 + 0xc0) = param_3;
  *(undefined8 *)(param_1 + 200) = 0;
  *(long *)(param_1 + 0x78) = param_1 + 0x70;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(long *)(param_1 + 0x88) = param_1 + 0x88;
  *(long *)(param_1 + 0x90) = param_1 + 0x88;
  *(undefined8 **)(param_1 + 0xb0) = puVar1;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  return;
}


