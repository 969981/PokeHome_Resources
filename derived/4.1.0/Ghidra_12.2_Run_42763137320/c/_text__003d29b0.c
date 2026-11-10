/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003d29b0; name: FUN_.text__003d29b0
 */


void FUN__text__003d29b0(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4
                        ,undefined8 *param_5)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined8 local_140;
  code *local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined1 auStack_120 [104];
  long local_b8 [5];
  undefined4 local_90;
  undefined4 local_84;
  long local_80 [5];
  undefined4 local_58;
  
  local_80[4] = 0;
  local_58 = 0;
  local_84 = 0;
  local_80[0] = 0;
  local_80[1] = 0xcbf29ce484222645;
  local_80[2] = 0x70f683;
  local_80[3] = 0;
  FUN__text__003d2568(local_80,&local_84,param_2,param_3);
  local_b8[4] = 0;
  local_b8[0] = 0;
  local_b8[1] = 0xcbf29ce484222645;
  local_90 = 0;
  local_b8[2] = 0x70f683;
  local_b8[3] = 0;
  FUN__text__003d26e0(local_b8,param_2,param_3);
  uVar2 = local_84;
  local_140 = 0;
  local_138 = (code *)0x0;
  local_130 = 0;
  uStack_128 = 0;
  if ((code *)param_5[2] != (code *)0x0) {
    (*(code *)param_5[2])(param_5 + 4,auStack_120);
    local_140 = *param_5;
    local_138 = (code *)param_5[1];
    local_130 = param_5[2];
    uStack_128 = param_5[3];
  }
  FUN__text__003d143c(param_1,local_b8,local_80,uVar2,1,param_4,&local_140);
  pcVar1 = local_138;
  if (local_138 != (code *)0x0) {
    local_130 = 0;
    uStack_128 = 0;
    local_140 = 0;
    local_138 = (code *)0x0;
    (*pcVar1)(auStack_120);
  }
  if ((local_b8[3] != 0) && (local_b8[0] != 0)) {
    (**(code **)(*(long *)(local_b8[0] + 0x48) + 0x18))();
  }
  local_b8[0] = 0;
  local_b8[1] = 0xcbf29ce484222645;
  local_b8[2] = 0x70f683;
  local_b8[3] = 0;
  if (local_b8[4] != 0) {
    (**(code **)(*(long *)(local_b8[4] + 0x48) + 0x18))();
  }
  if ((local_80[3] != 0) && (local_80[0] != 0)) {
    (**(code **)(*(long *)(local_80[0] + 0x48) + 0x18))();
  }
  local_80[0] = 0;
  local_80[1] = 0xcbf29ce484222645;
  local_80[2] = 0x70f683;
  local_80[3] = 0;
  if (local_80[4] != 0) {
    (**(code **)(*(long *)(local_80[4] + 0x48) + 0x18))();
  }
  return;
}


