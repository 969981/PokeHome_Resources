/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00592e20; name: FUN_.text__00592e20
 */


/* WARNING: Type propagation algorithm not settling */

void FUN__text__00592e20(long *param_1)

{
  long lVar1;
  void *pvVar2;
  
  pvVar2 = (void *)param_1[1];
  if (pvVar2 == (void *)0x0 || *param_1 == 0) {
    *(undefined4 *)(param_1 + 3) = 0;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    lVar1 = param_1[4];
    pvVar2 = (void *)param_1[5];
  }
  else {
    param_1[2] = (long)pvVar2;
    memset(pvVar2,0,(ulong)(uint)((int)*param_1 << 2));
    lVar1 = param_1[4];
    pvVar2 = (void *)param_1[5];
  }
  if ((pvVar2 == (void *)0x0) || (lVar1 == 0)) {
    *(undefined4 *)(param_1 + 7) = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    lVar1 = param_1[8];
    pvVar2 = (void *)param_1[9];
  }
  else {
    param_1[6] = (long)pvVar2;
    memset(pvVar2,0,(ulong)(uint)((int)lVar1 << 2));
    lVar1 = param_1[8];
    pvVar2 = (void *)param_1[9];
  }
  if ((pvVar2 == (void *)0x0) || (lVar1 == 0)) {
    *(undefined4 *)(param_1 + 0xb) = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    lVar1 = param_1[0xc];
    pvVar2 = (void *)param_1[0xd];
  }
  else {
    param_1[10] = (long)pvVar2;
    memset(pvVar2,0,(ulong)(uint)((int)lVar1 << 2));
    lVar1 = param_1[0xc];
    pvVar2 = (void *)param_1[0xd];
  }
  if ((pvVar2 == (void *)0x0) || (lVar1 == 0)) {
    *(undefined4 *)(param_1 + 0xf) = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    lVar1 = param_1[0x10];
    pvVar2 = (void *)param_1[0x11];
  }
  else {
    param_1[0xe] = (long)pvVar2;
    memset(pvVar2,0,(ulong)(uint)((int)lVar1 << 2));
    lVar1 = param_1[0x10];
    pvVar2 = (void *)param_1[0x11];
  }
  if ((pvVar2 == (void *)0x0) || (lVar1 == 0)) {
    *(undefined4 *)(param_1 + 0x13) = 0;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    param_1[0x12] = 0;
    lVar1 = param_1[0x14];
    pvVar2 = (void *)param_1[0x15];
  }
  else {
    param_1[0x12] = (long)pvVar2;
    memset(pvVar2,0,(ulong)(uint)((int)lVar1 << 2));
    lVar1 = param_1[0x14];
    pvVar2 = (void *)param_1[0x15];
  }
  if ((pvVar2 == (void *)0x0) || (lVar1 == 0)) {
    *(undefined4 *)(param_1 + 0x17) = 0;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    param_1[0x16] = 0;
    lVar1 = param_1[0x18];
    pvVar2 = (void *)param_1[0x19];
  }
  else {
    param_1[0x16] = (long)pvVar2;
    memset(pvVar2,0,(ulong)(uint)((int)lVar1 << 2));
    lVar1 = param_1[0x18];
    pvVar2 = (void *)param_1[0x19];
  }
  if ((pvVar2 == (void *)0x0) || (lVar1 == 0)) {
    *(undefined4 *)(param_1 + 0x1b) = 0;
    param_1[0x18] = 0;
    param_1[0x19] = 0;
    param_1[0x1a] = 0;
    lVar1 = param_1[0x1c];
    pvVar2 = (void *)param_1[0x1d];
  }
  else {
    param_1[0x1a] = (long)pvVar2;
    memset(pvVar2,0,(ulong)(uint)((int)lVar1 << 2));
    lVar1 = param_1[0x1c];
    pvVar2 = (void *)param_1[0x1d];
  }
  if ((pvVar2 == (void *)0x0) || (lVar1 == 0)) {
    *(undefined4 *)(param_1 + 0x1f) = 0;
    param_1[0x1c] = 0;
    param_1[0x1d] = 0;
    param_1[0x1e] = 0;
    pvVar2 = (void *)param_1[0x21];
  }
  else {
    param_1[0x1e] = (long)pvVar2;
    memset(pvVar2,0,(ulong)(uint)((int)lVar1 << 2));
    pvVar2 = (void *)param_1[0x21];
  }
  if ((pvVar2 == (void *)0x0) || (param_1[0x20] == 0)) {
    *(undefined4 *)(param_1 + 0x23) = 0;
    param_1[0x20] = 0;
    param_1[0x21] = 0;
    param_1[0x22] = 0;
    pvVar2 = (void *)param_1[0x25];
  }
  else {
    param_1[0x22] = (long)pvVar2;
    memset(pvVar2,0,(ulong)(uint)((int)param_1[0x20] << 2));
    pvVar2 = (void *)param_1[0x25];
  }
  if ((pvVar2 == (void *)0x0) || (param_1[0x24] == 0)) {
    *(undefined4 *)(param_1 + 0x27) = 0;
    param_1[0x24] = 0;
    param_1[0x25] = 0;
    param_1[0x26] = 0;
    pvVar2 = (void *)param_1[0x29];
  }
  else {
    param_1[0x26] = (long)pvVar2;
    memset(pvVar2,0,(ulong)(uint)((int)param_1[0x24] << 2));
    pvVar2 = (void *)param_1[0x29];
  }
  if ((pvVar2 == (void *)0x0) || (param_1[0x28] == 0)) {
    *(undefined4 *)(param_1 + 0x2b) = 0;
    param_1[0x28] = 0;
    param_1[0x29] = 0;
    param_1[0x2a] = 0;
    pvVar2 = (void *)param_1[0x2d];
  }
  else {
    param_1[0x2a] = (long)pvVar2;
    memset(pvVar2,0,(ulong)(uint)((int)param_1[0x28] << 2));
    pvVar2 = (void *)param_1[0x2d];
  }
  if ((pvVar2 == (void *)0x0) || (param_1[0x2c] == 0)) {
    *(undefined4 *)(param_1 + 0x2f) = 0;
    param_1[0x2c] = 0;
    param_1[0x2d] = 0;
    param_1[0x2e] = 0;
  }
  else {
    param_1[0x2e] = (long)pvVar2;
    memset(pvVar2,0,(ulong)(uint)((int)param_1[0x2c] << 2));
  }
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x3b) = 0;
  param_1[0x40] = 0;
  param_1[0x31] = 0x3ff0000000000000;
  param_1[0x32] = 0;
  param_1[0x41] = 0x3fe0000000000000;
  param_1[0x42] = 0x3fe69fbe76c8b439;
  param_1[0x45] = 0;
  param_1[0x44] = 0;
  param_1[0x43] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0x3fe0000000000000;
  param_1[0x37] = 0x3fe69fbe76c8b439;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3c] = 0x3ff0000000000000;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  return;
}


