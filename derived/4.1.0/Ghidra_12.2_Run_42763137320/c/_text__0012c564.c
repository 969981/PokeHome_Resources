/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0012c564; name: FUN_.text__0012c564
 */


bool FUN__text__0012c564(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  code *pcVar1;
  long lVar2;
  undefined8 local_160 [2];
  undefined1 *local_150;
  code *local_148;
  undefined1 *local_140;
  undefined1 *local_138;
  long local_130;
  undefined8 uStack_128;
  undefined8 local_d0;
  code *local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined1 auStack_b0 [96];
  
  lVar2 = *(long *)(param_1 + 0x1c0);
  local_160[0] = 0;
  local_150 = (undefined1 *)0x0;
  local_148 = (code *)0x0;
  local_140 = (undefined1 *)0x0;
  local_138 = (undefined1 *)0x0;
  local_d0 = 0;
  local_c8 = (code *)0x0;
  local_c0 = 0;
  uStack_b8 = 0;
  if (lVar2 != 0) {
    FUN__text__003c7d90(lVar2);
    local_148 = FUN__text__0012ee60;
    local_140 = &LAB__text__0012ee64;
    local_160[0] = *param_2;
    local_150 = &LAB__text__0012ee50;
    local_138 = &LAB__text__0012ee70;
    local_130 = param_1;
    uStack_128 = local_160[0];
    if ((code *)param_3[2] != (code *)0x0) {
      (*(code *)param_3[2])(param_3 + 4,auStack_b0);
      local_d0 = *param_3;
      local_c8 = (code *)param_3[1];
      local_c0 = param_3[2];
      uStack_b8 = param_3[3];
    }
    FUN__text__0012c684(param_1,local_160);
    pcVar1 = local_c8;
    if (local_c8 != (code *)0x0) {
      local_c0 = 0;
      uStack_b8 = 0;
      local_d0 = 0;
      local_c8 = (code *)0x0;
      (*pcVar1)(auStack_b0);
    }
  }
  pcVar1 = local_148;
  if (local_148 != (code *)0x0) {
    local_140 = (undefined1 *)0x0;
    local_138 = (undefined1 *)0x0;
    local_150 = (undefined1 *)0x0;
    local_148 = (code *)0x0;
    (*pcVar1)(&local_130);
  }
  return lVar2 != 0;
}


