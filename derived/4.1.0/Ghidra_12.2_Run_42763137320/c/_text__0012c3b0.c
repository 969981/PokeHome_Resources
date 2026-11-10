/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0012c3b0; name: FUN_.text__0012c3b0
 */


bool FUN__text__0012c3b0(long param_1,byte *param_2,undefined8 *param_3)

{
  byte bVar1;
  code *pcVar2;
  long lVar3;
  undefined8 local_1e0;
  code *local_1d8;
  code *local_1d0;
  undefined8 uStack_1c8;
  undefined1 auStack_1c0 [104];
  ulong local_158;
  ulong local_150 [2];
  undefined1 *local_140;
  code *local_138;
  undefined1 *local_130;
  undefined1 *local_128;
  long local_120;
  ulong uStack_118;
  undefined8 local_c0;
  code *local_b8;
  code *local_b0;
  undefined8 uStack_a8;
  undefined1 auStack_a0 [96];
  
  if (param_2 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl();
  }
  local_158 = 0xcbf29ce484222645;
  bVar1 = *param_2;
  while (bVar1 != 0) {
    param_2 = param_2 + 1;
    local_158 = (local_158 ^ bVar1) * 0x100000001b3;
    bVar1 = *param_2;
  }
  local_1e0 = 0;
  local_1d8 = (code *)0x0;
  local_1d0 = (code *)0x0;
  uStack_1c8 = 0;
  if ((code *)param_3[2] != (code *)0x0) {
    (*(code *)param_3[2])(param_3 + 4,auStack_1c0);
    local_1e0 = *param_3;
    local_1d8 = (code *)param_3[1];
    local_1d0 = (code *)param_3[2];
    uStack_1c8 = param_3[3];
  }
  lVar3 = *(long *)(param_1 + 0x1c0);
  local_150[0] = 0;
  local_140 = (undefined1 *)0x0;
  local_138 = (code *)0x0;
  local_130 = (undefined1 *)0x0;
  local_128 = (undefined1 *)0x0;
  local_c0 = 0;
  local_b8 = (code *)0x0;
  local_b0 = (code *)0x0;
  uStack_a8 = 0;
  if (lVar3 != 0) {
    FUN__text__003c7d90(lVar3,&local_158);
    local_138 = FUN__text__0012ee60;
    local_130 = &LAB__text__0012ee64;
    local_140 = &LAB__text__0012ee50;
    local_128 = &LAB__text__0012ee70;
    local_150[0] = local_158;
    uStack_118 = local_158;
    local_120 = param_1;
    if (local_1d0 != (code *)0x0) {
      (*local_1d0)(auStack_1c0,auStack_a0);
      local_c0 = local_1e0;
      local_b8 = local_1d8;
      local_b0 = local_1d0;
      uStack_a8 = uStack_1c8;
    }
    FUN__text__0012c684(param_1,local_150);
    pcVar2 = local_b8;
    if (local_b8 != (code *)0x0) {
      local_b0 = (code *)0x0;
      uStack_a8 = 0;
      local_c0 = 0;
      local_b8 = (code *)0x0;
      (*pcVar2)(auStack_a0);
    }
  }
  pcVar2 = local_138;
  if (local_138 != (code *)0x0) {
    local_130 = (undefined1 *)0x0;
    local_128 = (undefined1 *)0x0;
    local_140 = (undefined1 *)0x0;
    local_138 = (code *)0x0;
    (*pcVar2)(&local_120);
  }
  if (local_1d8 != (code *)0x0) {
    (*local_1d8)(auStack_1c0);
  }
  return lVar3 != 0;
}


