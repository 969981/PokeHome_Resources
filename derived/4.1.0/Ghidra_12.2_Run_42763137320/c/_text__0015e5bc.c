/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0015e5bc; name: FUN_.text__0015e5bc
 */


void FUN__text__0015e5bc(long param_1,long param_2,undefined4 param_3,undefined8 param_4,
                        undefined4 param_5,undefined8 *param_6,undefined8 param_7)

{
  code *pcVar1;
  long local_190;
  undefined8 local_188;
  undefined4 local_180;
  undefined8 local_170;
  code *local_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined1 auStack_150 [96];
  undefined8 local_f0;
  code *local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined1 auStack_d0 [96];
  undefined8 local_70;
  undefined4 local_54;
  
  local_54 = param_3;
  nn::os::LockMutex((MutexType *)(param_1 + 0x58));
  FUN__text__00109fd4(&local_190,*(undefined8 *)(param_2 + 8));
  local_170 = 0;
  local_168 = (code *)0x0;
  local_160 = 0;
  uStack_158 = 0;
  local_f0 = 0;
  local_e8 = (code *)0x0;
  local_e0 = 0;
  uStack_d8 = 0;
  local_188 = param_4;
  local_180 = param_5;
  if ((code *)param_6[3] != (code *)0x0) {
    (*(code *)param_6[3])(param_6 + 4,auStack_d0);
    local_f0 = *param_6;
    local_e8 = (code *)param_6[1];
    local_e0 = param_6[2];
    uStack_d8 = param_6[3];
    if (local_e8 != (code *)0x0) {
      param_6[2] = 0;
      param_6[3] = 0;
      *param_6 = 0;
      param_6[1] = 0;
      (*local_e8)(param_6 + 4);
    }
  }
  local_70 = param_7;
  FUN__text__0015e700(param_1,&local_54,&local_54,&local_190);
  pcVar1 = local_e8;
  if (local_e8 != (code *)0x0) {
    local_e0 = 0;
    uStack_d8 = 0;
    local_f0 = 0;
    local_e8 = (code *)0x0;
    (*pcVar1)(auStack_d0);
  }
  pcVar1 = local_168;
  if (local_168 != (code *)0x0) {
    local_160 = 0;
    uStack_158 = 0;
    local_170 = 0;
    local_168 = (code *)0x0;
    (*pcVar1)(auStack_150);
  }
  if (local_190 != 0) {
    (**(code **)(*(long *)(local_190 + 0x48) + 0x18))();
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x58));
  return;
}


