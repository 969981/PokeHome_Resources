/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001e6580; name: FUN_.text__001e6580
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__001e6580(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uVar4;
  code *pcVar5;
  code *pcVar6;
  long local_230;
  undefined8 uStack_228;
  undefined8 local_220;
  undefined8 local_1d0;
  code *local_1c8;
  code *local_1c0;
  undefined8 uStack_1b8;
  long local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 local_150;
  code *local_148;
  code *local_140;
  undefined8 uStack_138;
  long local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  code *local_d0;
  code *local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined1 auStack_b0 [96];
  
  local_c0 = 0;
  uStack_b8 = 0;
  local_d0 = (code *)0x0;
  local_c8 = (code *)0x0;
  (*(code *)param_3[2])(param_3 + 4,auStack_b0);
  local_d0 = (code *)*param_3;
  local_c8 = (code *)param_3[1];
  local_c0 = param_3[2];
  uStack_b8 = param_3[3];
  (*local_d0)(auStack_b0);
  uStack_128 = _DAT_008a0998;
  local_120 = 0;
  local_1a0 = 0;
  *(undefined4 *)(param_2 + 0x85) = *(undefined4 *)(*(long *)(param_1 + 0x180) + 0x23280);
  uStack_228 = _DAT_008a09a8;
  local_150 = _DAT_008a0710;
  local_148 = _DAT_008a0718;
  uStack_1a8 = _DAT_008a09a0;
  local_1d0 = _DAT_008a0710;
  local_1c8 = _DAT_008a0718;
  uVar1 = *(undefined4 *)(*(long *)(param_1 + 0x180) + 0x23288);
  local_140 = _DAT_008a0738;
  uStack_138 = _DAT_008a0720;
  local_1c0 = _DAT_008a0738;
  uStack_1b8 = _DAT_008a0720;
  *(undefined4 *)(param_2 + 0xba) = uVar1;
  *(undefined1 *)(param_1 + 0xa0) = 1;
  *(undefined4 *)(param_1 + 0xa4) = uVar1;
  pcVar5 = _DAT_008a0758;
  uVar4 = _DAT_008a0750;
  pcVar3 = _DAT_008a0748;
  uVar2 = _DAT_008a0730;
  pcVar6 = (code *)param_2[1];
  local_220 = 0;
  local_230 = param_1;
  local_1b0 = param_1;
  local_130 = param_1;
  if (pcVar6 != (code *)0x0) {
    param_2[2] = 0;
    param_2[3] = 0;
    *param_2 = 0;
    param_2[1] = 0;
    (*pcVar6)(param_2 + 4);
    if (local_140 == (code *)0x0) goto LAB__text__001e66e4;
  }
  (*local_140)(&local_130,param_2 + 4);
  *param_2 = local_150;
  param_2[1] = local_148;
  param_2[2] = local_140;
  param_2[3] = uStack_138;
LAB__text__001e66e4:
  pcVar6 = (code *)param_2[0x11];
  if (pcVar6 != (code *)0x0) {
    param_2[0x12] = 0;
    param_2[0x13] = 0;
    param_2[0x10] = 0;
    param_2[0x11] = 0;
    (*pcVar6)(param_2 + 0x14);
  }
  if (local_1c0 != (code *)0x0) {
    (*local_1c0)(&local_1b0,param_2 + 0x14);
    param_2[0x10] = local_1d0;
    param_2[0x11] = local_1c8;
    param_2[0x12] = local_1c0;
    param_2[0x13] = uStack_1b8;
  }
  pcVar6 = (code *)param_2[0x87];
  if (pcVar6 != (code *)0x0) {
    param_2[0x88] = 0;
    param_2[0x89] = 0;
    param_2[0x86] = 0;
    param_2[0x87] = 0;
    (*pcVar6)(param_2 + 0x8a);
  }
  if (pcVar3 != (code *)0x0) {
    (*pcVar3)(&local_230,param_2 + 0x8a);
    param_2[0x86] = uVar4;
    param_2[0x87] = pcVar5;
    param_2[0x88] = pcVar3;
    param_2[0x89] = uVar2;
  }
  if (pcVar5 != (code *)0x0) {
    (*pcVar5)(&local_230);
  }
  pcVar3 = local_1c8;
  if (local_1c8 != (code *)0x0) {
    local_1c0 = (code *)0x0;
    uStack_1b8 = 0;
    local_1d0 = 0;
    local_1c8 = (code *)0x0;
    (*pcVar3)(&local_1b0);
  }
  pcVar3 = local_148;
  if (local_148 != (code *)0x0) {
    local_140 = (code *)0x0;
    uStack_138 = 0;
    local_150 = 0;
    local_148 = (code *)0x0;
    (*pcVar3)(&local_130);
  }
  pcVar3 = local_c8;
  if (local_c8 != (code *)0x0) {
    local_c0 = 0;
    uStack_b8 = 0;
    local_d0 = (code *)0x0;
    local_c8 = (code *)0x0;
    (*pcVar3)(auStack_b0);
  }
  return;
}


