/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001e6c50; name: FUN_.text__001e6c50
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__001e6c50(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  code *pcVar9;
  code *pcVar10;
  undefined8 *puVar11;
  long local_2b0;
  undefined8 uStack_2a8;
  undefined8 local_2a0;
  undefined8 local_250;
  code *local_248;
  code *local_240;
  undefined8 uStack_238;
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
  undefined1 *local_150;
  code *local_148;
  code *local_140;
  undefined *local_138;
  undefined1 auStack_130 [96];
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
  *(undefined4 *)(param_2 + 0x85) = *(undefined4 *)(*(long *)(param_1 + 0x1a0) + 0x23280);
  uVar1 = *(undefined4 *)(*(long *)(param_1 + 0x1a0) + 0x23288);
  *(undefined4 *)(param_2 + 0xba) = uVar1;
  *(undefined4 *)(param_1 + 0xa4) = uVar1;
  *(undefined1 *)(param_1 + 0xa0) = 1;
  puVar11 = *(undefined8 **)(*(long *)(param_1 + 0x60) + 0x60);
  plVar5 = (long *)(**(code **)*puVar11)(puVar11);
  plVar6 = (long *)FUN__text__0012615c();
  if (plVar6 != plVar5) {
    do {
      plVar5 = (long *)*plVar5;
    } while (plVar5 != plVar6 && plVar5 != (long *)0x0);
  }
  local_150 = (undefined1 *)0xa86b4b41bf58463e;
  local_148 = (code *)0x70c2e8;
  local_140 = (code *)0x1a;
  local_138 = (undefined *)0x0;
  lVar7 = FUN__text__00137c10(puVar11[0xaf],&local_150);
  if (local_138 != (undefined *)0x0) {
    (**(code **)(*(long *)((long)local_138 + 0x48) + 0x18))();
  }
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
  }
  lVar8 = param_2[0xbb];
  param_2[0xbb] = lVar7;
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))();
  }
  pcVar9 = (code *)param_2[0x61];
  local_150 = &LAB__text__001e9c24;
  local_148 = FUN__text__001e9c2c;
  local_140 = FUN__text__001e9c30;
  local_138 = &DAT__text__001e9c34;
  if (pcVar9 == (code *)0x0) {
LAB__text__001e6de0:
    (*local_140)(auStack_130,param_2 + 100);
    param_2[0x60] = local_150;
    param_2[0x61] = local_148;
    param_2[0x62] = local_140;
    param_2[99] = local_138;
  }
  else {
    param_2[0x62] = 0;
    param_2[99] = 0;
    param_2[0x60] = 0;
    param_2[0x61] = 0;
    (*pcVar9)(param_2 + 100);
    if (local_140 != (code *)0x0) goto LAB__text__001e6de0;
  }
  pcVar4 = _DAT_008a0758;
  uVar3 = _DAT_008a0750;
  pcVar9 = _DAT_008a0748;
  uVar2 = _DAT_008a0730;
  local_1a0 = 0;
  uStack_1a8 = _DAT_008a09d8;
  local_1d0 = _DAT_008a0710;
  local_1c8 = _DAT_008a0718;
  local_1c0 = _DAT_008a0738;
  uStack_1b8 = _DAT_008a0720;
  local_220 = 0;
  local_250 = _DAT_008a0710;
  local_248 = _DAT_008a0718;
  local_240 = _DAT_008a0738;
  uStack_238 = _DAT_008a0720;
  pcVar10 = (code *)param_2[1];
  uStack_228 = _DAT_008a09e0;
  uStack_2a8 = _DAT_008a09e8;
  local_2a0 = 0;
  local_2b0 = param_1;
  local_230 = param_1;
  local_1b0 = param_1;
  if (pcVar10 != (code *)0x0) {
    param_2[2] = 0;
    param_2[3] = 0;
    *param_2 = 0;
    param_2[1] = 0;
    (*pcVar10)(param_2 + 4);
    if (local_1c0 == (code *)0x0) goto LAB__text__001e6ed0;
  }
  (*local_1c0)(&local_1b0,param_2 + 4);
  *param_2 = local_1d0;
  param_2[1] = local_1c8;
  param_2[2] = local_1c0;
  param_2[3] = uStack_1b8;
LAB__text__001e6ed0:
  pcVar10 = (code *)param_2[0x11];
  if (pcVar10 != (code *)0x0) {
    param_2[0x12] = 0;
    param_2[0x13] = 0;
    param_2[0x10] = 0;
    param_2[0x11] = 0;
    (*pcVar10)(param_2 + 0x14);
  }
  if (local_240 != (code *)0x0) {
    (*local_240)(&local_230,param_2 + 0x14);
    param_2[0x10] = local_250;
    param_2[0x11] = local_248;
    param_2[0x12] = local_240;
    param_2[0x13] = uStack_238;
  }
  pcVar10 = (code *)param_2[0x87];
  if (pcVar10 != (code *)0x0) {
    param_2[0x88] = 0;
    param_2[0x89] = 0;
    param_2[0x86] = 0;
    param_2[0x87] = 0;
    (*pcVar10)(param_2 + 0x8a);
  }
  if (pcVar9 != (code *)0x0) {
    (*pcVar9)(&local_2b0,param_2 + 0x8a);
    param_2[0x86] = uVar3;
    param_2[0x87] = pcVar4;
    param_2[0x88] = pcVar9;
    param_2[0x89] = uVar2;
  }
  if (pcVar4 != (code *)0x0) {
    (*pcVar4)(&local_2b0);
  }
  pcVar9 = local_248;
  if (local_248 != (code *)0x0) {
    local_240 = (code *)0x0;
    uStack_238 = 0;
    local_250 = 0;
    local_248 = (code *)0x0;
    (*pcVar9)(&local_230);
  }
  pcVar9 = local_1c8;
  if (local_1c8 != (code *)0x0) {
    local_1c0 = (code *)0x0;
    uStack_1b8 = 0;
    local_1d0 = 0;
    local_1c8 = (code *)0x0;
    (*pcVar9)(&local_1b0);
  }
  pcVar9 = local_148;
  if (local_148 != (code *)0x0) {
    local_140 = (code *)0x0;
    local_138 = (undefined *)0x0;
    local_150 = (undefined1 *)0x0;
    local_148 = (code *)0x0;
    (*pcVar9)(auStack_130);
  }
  pcVar9 = local_c8;
  if (local_c8 != (code *)0x0) {
    local_c0 = 0;
    uStack_b8 = 0;
    local_d0 = (code *)0x0;
    local_c8 = (code *)0x0;
    (*pcVar9)(auStack_b0);
  }
  return;
}


