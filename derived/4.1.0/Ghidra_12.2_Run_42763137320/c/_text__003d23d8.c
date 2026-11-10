/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003d23d8; name: FUN_.text__003d23d8
 */


void FUN__text__003d23d8(undefined8 param_1,undefined4 param_2,undefined2 param_3,undefined4 param_4
                        ,undefined1 param_5,ulong param_6,undefined4 param_7)

{
  code *pcVar1;
  undefined8 local_140;
  code *local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  long local_c0 [5];
  undefined4 local_98;
  undefined4 local_8c;
  undefined2 local_88;
  undefined4 local_84;
  undefined1 local_80;
  undefined1 local_7f;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  long local_70 [5];
  undefined4 local_48;
  undefined4 local_24;
  
  local_70[0] = 0;
  local_70[1] = 0xcbf29ce484222645;
  local_78 = 2;
  if ((param_6 & 1) == 0) {
    local_78 = 0;
  }
  local_70[4] = 0;
  local_48 = 0;
  local_24 = 0;
  local_70[2] = 0x70f683;
  local_70[3] = 0;
  local_7f = 0;
  local_7c = 0;
  uStack_74 = 0xffffffff;
  local_8c = param_2;
  local_88 = param_3;
  local_84 = param_4;
  local_80 = param_5;
  FUN__text__003d2568(local_70,&local_24,&local_8c,param_7);
  local_c0[4] = 0;
  local_c0[0] = 0;
  local_c0[1] = 0xcbf29ce484222645;
  local_98 = 0;
  local_c0[2] = 0x70f683;
  local_c0[3] = 0;
  FUN__text__003d26e0(local_c0,&local_8c,param_7);
  local_140 = 0;
  local_138 = (code *)0x0;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  uStack_118 = 0;
  local_110 = 0;
  uStack_108 = 0;
  local_100 = 0;
  uStack_f8 = 0;
  local_f0 = 0;
  uStack_e8 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  local_d0 = 0;
  uStack_c8 = 0;
  FUN__text__003d143c(param_1,local_c0,local_70,local_24,0,2,&local_140);
  pcVar1 = local_138;
  if (local_138 != (code *)0x0) {
    local_130 = 0;
    uStack_128 = 0;
    local_140 = 0;
    local_138 = (code *)0x0;
    (*pcVar1)(&local_120);
  }
  if ((local_c0[3] != 0) && (local_c0[0] != 0)) {
    (**(code **)(*(long *)(local_c0[0] + 0x48) + 0x18))();
  }
  local_c0[0] = 0;
  local_c0[1] = 0xcbf29ce484222645;
  local_c0[2] = 0x70f683;
  local_c0[3] = 0;
  if (local_c0[4] != 0) {
    (**(code **)(*(long *)(local_c0[4] + 0x48) + 0x18))();
  }
  if ((local_70[3] != 0) && (local_70[0] != 0)) {
    (**(code **)(*(long *)(local_70[0] + 0x48) + 0x18))();
  }
  local_70[0] = 0;
  local_70[1] = 0xcbf29ce484222645;
  local_70[2] = 0x70f683;
  local_70[3] = 0;
  if (local_70[4] != 0) {
    (**(code **)(*(long *)(local_70[4] + 0x48) + 0x18))();
  }
  return;
}


