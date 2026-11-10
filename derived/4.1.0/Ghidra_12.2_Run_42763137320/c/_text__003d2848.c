/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003d2848; name: FUN_.text__003d2848
 */


void FUN__text__003d2848(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  code *pcVar1;
  undefined8 local_130;
  code *local_128;
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
  undefined8 local_c0;
  undefined8 uStack_b8;
  long local_a8 [5];
  undefined4 local_80;
  undefined4 local_74;
  long local_70 [5];
  undefined4 local_48;
  
  local_70[4] = 0;
  local_48 = 0;
  local_74 = 0;
  local_70[0] = 0;
  local_70[1] = 0xcbf29ce484222645;
  local_70[2] = 0x70f683;
  local_70[3] = 0;
  FUN__text__003d2568(local_70,&local_74,param_2,param_3);
  local_a8[4] = 0;
  local_a8[0] = 0;
  local_a8[1] = 0xcbf29ce484222645;
  local_80 = 0;
  local_a8[2] = 0x70f683;
  local_a8[3] = 0;
  FUN__text__003d26e0(local_a8,param_2,param_3);
  local_130 = 0;
  local_128 = (code *)0x0;
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
  local_c0 = 0;
  uStack_b8 = 0;
  FUN__text__003d143c(param_1,local_a8,local_70,local_74,0,2,&local_130);
  pcVar1 = local_128;
  if (local_128 != (code *)0x0) {
    local_120 = 0;
    uStack_118 = 0;
    local_130 = 0;
    local_128 = (code *)0x0;
    (*pcVar1)(&local_110);
  }
  if ((local_a8[3] != 0) && (local_a8[0] != 0)) {
    (**(code **)(*(long *)(local_a8[0] + 0x48) + 0x18))();
  }
  local_a8[0] = 0;
  local_a8[1] = 0xcbf29ce484222645;
  local_a8[2] = 0x70f683;
  local_a8[3] = 0;
  if (local_a8[4] != 0) {
    (**(code **)(*(long *)(local_a8[4] + 0x48) + 0x18))();
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


