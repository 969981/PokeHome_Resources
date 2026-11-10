/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00677154; name: FUN_.text__00677154
 */


void FUN__text__00677154(long param_1,char *param_2)

{
  uint *puVar1;
  size_t __n;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  ulong local_98;
  undefined1 local_90 [56];
  ulong local_58;
  
  memset(&local_e0,0,0x90);
  local_d8 = 0x6a09e667;
  uStack_d0 = 0xbb67ae85;
  local_c8 = 0x3c6ef372;
  uStack_c0 = 0xa54ff53a;
  local_b8 = 0x510e527f;
  uStack_b0 = 0x9b05688c;
  local_a8 = 0x1f83d9ab;
  uStack_a0 = 0x5be0cd19;
  strlen(param_2);
  uVar2 = FUN__text__0067826c();
  if (uVar2 == 0) {
    local_98 = 0;
  }
  else {
    uVar4 = (ulong)uVar2;
    do {
      uVar5 = uVar4 - 0x40;
      if ((uVar4 < 0x40) || (local_98 != 0)) {
        __n = uVar4;
        if (0x40 - local_98 <= uVar4) {
          __n = 0x40 - local_98;
        }
        memcpy(local_90 + local_98,param_2,__n);
        param_2 = param_2 + __n;
        uVar5 = uVar4 - __n;
        local_98 = local_98 + __n;
        if (local_98 == 0x40) {
          FUN__text__0067737c(&local_e0,local_90);
          local_98 = 0;
          goto LAB__text__00677270;
        }
      }
      else {
        FUN__text__0067737c(&local_e0,param_2);
        param_2 = param_2 + 0x40;
LAB__text__00677270:
        local_e0 = local_e0 + 0x200;
      }
      uVar4 = uVar5;
    } while (uVar5 != 0);
    if (0x3f < local_98) {
      return;
    }
  }
  local_90[local_98] = 0x80;
  local_e0 = local_e0 + local_98 * 8;
  lVar3 = local_98 + 1;
  uVar4 = local_98;
  if (local_98 < 0x38) goto joined_r0x006772f8;
  for (; local_98 = lVar3, uVar4 != 0x3f; uVar4 = uVar4 + 1) {
    local_90[uVar4 + 1] = 0;
    lVar3 = uVar4 + 2;
  }
  FUN__text__0067737c(&local_e0,local_90);
  local_98 = 0;
  do {
    local_90[local_98] = 0;
    lVar3 = local_98 + 1;
joined_r0x006772f8:
    local_98 = lVar3;
  } while (local_98 != 0x38);
  uVar4 = (local_e0 & 0xff00ff00ff00ff00) >> 8 | (local_e0 & 0xff00ff00ff00ff) << 8;
  uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
  local_58 = uVar4 >> 0x20 | uVar4 << 0x20;
  FUN__text__0067737c(&local_e0,local_90);
  lVar3 = 0;
  param_1 = param_1 + 1;
  do {
    puVar1 = (uint *)((long)&local_d8 + lVar3);
    lVar3 = lVar3 + 8;
    uVar2 = (*puVar1 & 0xff00ff00) >> 8 | (*puVar1 & 0xff00ff) << 8;
    *(uint *)(param_1 + -1) = uVar2 >> 0x10 | uVar2 << 0x10;
    param_1 = param_1 + 4;
  } while (lVar3 != 0x40);
  return;
}


