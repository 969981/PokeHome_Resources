/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003d044c; name: FUN_.text__003d044c
 */


void FUN__text__003d044c(undefined8 param_1,undefined4 param_2)

{
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  long local_108;
  long local_100 [5];
  undefined4 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  long local_b8;
  long local_b0 [5];
  undefined4 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  long local_68;
  long local_60 [5];
  undefined4 local_38;
  
  local_80 = 0x9d48769e1959b26a;
  uStack_78 = 0x71f649;
  local_70 = 0x1a;
  local_68 = 0;
  FUN__text__003cf880(local_60,param_1,&local_80,0xb);
  local_d0 = 0x5d9d54fe6cba821a;
  uStack_c8 = 0x71e82a;
  local_c0 = 0x17;
  local_b8 = 0;
  FUN__text__003cf880(local_b0,param_1,&local_d0,0xb);
  local_120 = 0x19c5bb6ad5561c80;
  uStack_118 = 0x70d284;
  local_110 = 0x1c;
  local_108 = 0;
  FUN__text__003cf880(local_100,param_1,&local_120,0xb);
  FUN__text__003cfd20(param_1,local_60,local_b0,local_100,param_2);
  if ((local_100[3] != 0) && (local_100[0] != 0)) {
    (**(code **)(*(long *)(local_100[0] + 0x48) + 0x18))();
  }
  local_100[0] = 0;
  local_100[1] = 0xcbf29ce484222645;
  local_100[2] = 0x70f683;
  local_100[3] = 0;
  if (local_100[4] != 0) {
    (**(code **)(*(long *)(local_100[4] + 0x48) + 0x18))();
  }
  local_100[4] = 0;
  local_d8 = 0;
  if (local_108 != 0) {
    (**(code **)(*(long *)(local_108 + 0x48) + 0x18))();
  }
  if ((local_b0[3] != 0) && (local_b0[0] != 0)) {
    (**(code **)(*(long *)(local_b0[0] + 0x48) + 0x18))();
  }
  local_b0[0] = 0;
  local_b0[1] = 0xcbf29ce484222645;
  local_b0[2] = 0x70f683;
  local_b0[3] = 0;
  if (local_b0[4] != 0) {
    (**(code **)(*(long *)(local_b0[4] + 0x48) + 0x18))();
  }
  local_b0[4] = 0;
  local_88 = 0;
  if (local_b8 != 0) {
    (**(code **)(*(long *)(local_b8 + 0x48) + 0x18))();
  }
  if ((local_60[3] != 0) && (local_60[0] != 0)) {
    (**(code **)(*(long *)(local_60[0] + 0x48) + 0x18))();
  }
  local_60[0] = 0;
  local_60[1] = 0xcbf29ce484222645;
  local_60[2] = 0x70f683;
  local_60[3] = 0;
  if (local_60[4] != 0) {
    (**(code **)(*(long *)(local_60[4] + 0x48) + 0x18))();
  }
  local_60[4] = 0;
  local_38 = 0;
  if (local_68 != 0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
  }
  return;
}


