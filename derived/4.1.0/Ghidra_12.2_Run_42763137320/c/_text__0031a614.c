/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0031a614; name: FUN_.text__0031a614
 */


undefined8 FUN__text__0031a614(long param_1,undefined8 param_2)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  char local_70 [64];
  
  lVar1 = DAT_008e1d78;
  if (DAT_008e1d78 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl();
  }
  uVar3 = FUN__text__00305120(DAT_008e1d78);
  if ((uVar3 & 1) != 0) {
    return 0;
  }
  uVar3 = FUN__text__003056e0(lVar1);
  if ((uVar3 & 1) == 0) {
    return 1;
  }
  lVar4 = FUN__text__00304b90();
  if (lVar4 == 0) {
    return 0;
  }
  local_70[0x30] = '\0';
  local_70[0x31] = '\0';
  local_70[0x32] = '\0';
  local_70[0x33] = '\0';
  local_70[0x34] = '\0';
  local_70[0x35] = '\0';
  local_70[0x36] = '\0';
  local_70[0x37] = '\0';
  local_70[0x38] = '\0';
  local_70[0x39] = '\0';
  local_70[0x3a] = '\0';
  local_70[0x3b] = '\0';
  local_70[0x3c] = '\0';
  local_70[0x3d] = '\0';
  local_70[0x3e] = '\0';
  local_70[0x3f] = '\0';
  local_70[0x20] = '\0';
  local_70[0x21] = '\0';
  local_70[0x22] = '\0';
  local_70[0x23] = '\0';
  local_70[0x24] = '\0';
  local_70[0x25] = '\0';
  local_70[0x26] = '\0';
  local_70[0x27] = '\0';
  local_70[0x28] = '\0';
  local_70[0x29] = '\0';
  local_70[0x2a] = '\0';
  local_70[0x2b] = '\0';
  local_70[0x2c] = '\0';
  local_70[0x2d] = '\0';
  local_70[0x2e] = '\0';
  local_70[0x2f] = '\0';
  local_70[0x10] = '\0';
  local_70[0x11] = '\0';
  local_70[0x12] = '\0';
  local_70[0x13] = '\0';
  local_70[0x14] = '\0';
  local_70[0x15] = '\0';
  local_70[0x16] = '\0';
  local_70[0x17] = '\0';
  local_70[0x18] = '\0';
  local_70[0x19] = '\0';
  local_70[0x1a] = '\0';
  local_70[0x1b] = '\0';
  local_70[0x1c] = '\0';
  local_70[0x1d] = '\0';
  local_70[0x1e] = '\0';
  local_70[0x1f] = '\0';
  local_70[0] = '\0';
  local_70[1] = '\0';
  local_70[2] = '\0';
  local_70[3] = '\0';
  local_70[4] = '\0';
  local_70[5] = '\0';
  local_70[6] = '\0';
  local_70[7] = '\0';
  local_70[8] = '\0';
  local_70[9] = '\0';
  local_70[10] = '\0';
  local_70[0xb] = '\0';
  local_70[0xc] = '\0';
  local_70[0xd] = '\0';
  local_70[0xe] = '\0';
  local_70[0xf] = '\0';
  uVar3 = FUN__text__00317e00(param_1,local_70,0x715112,param_2);
  if (((uVar3 & 1) == 0) || (iVar2 = atoi(local_70), *(char *)(param_1 + 0x3941448) != '\0')) {
    local_70[0x30] = '\0';
    local_70[0x31] = '\0';
    local_70[0x32] = '\0';
    local_70[0x33] = '\0';
    local_70[0x34] = '\0';
    local_70[0x35] = '\0';
    local_70[0x36] = '\0';
    local_70[0x37] = '\0';
    local_70[0x38] = '\0';
    local_70[0x39] = '\0';
    local_70[0x3a] = '\0';
    local_70[0x3b] = '\0';
    local_70[0x3c] = '\0';
    local_70[0x3d] = '\0';
    local_70[0x3e] = '\0';
    local_70[0x3f] = '\0';
    local_70[0x20] = '\0';
    local_70[0x21] = '\0';
    local_70[0x22] = '\0';
    local_70[0x23] = '\0';
    local_70[0x24] = '\0';
    local_70[0x25] = '\0';
    local_70[0x26] = '\0';
    local_70[0x27] = '\0';
    local_70[0x28] = '\0';
    local_70[0x29] = '\0';
    local_70[0x2a] = '\0';
    local_70[0x2b] = '\0';
    local_70[0x2c] = '\0';
    local_70[0x2d] = '\0';
    local_70[0x2e] = '\0';
    local_70[0x2f] = '\0';
    local_70[0x10] = '\0';
    local_70[0x11] = '\0';
    local_70[0x12] = '\0';
    local_70[0x13] = '\0';
    local_70[0x14] = '\0';
    local_70[0x15] = '\0';
    local_70[0x16] = '\0';
    local_70[0x17] = '\0';
    local_70[0x18] = '\0';
    local_70[0x19] = '\0';
    local_70[0x1a] = '\0';
    local_70[0x1b] = '\0';
    local_70[0x1c] = '\0';
    local_70[0x1d] = '\0';
    local_70[0x1e] = '\0';
    local_70[0x1f] = '\0';
    local_70[0] = '\0';
    local_70[1] = '\0';
    local_70[2] = '\0';
    local_70[3] = '\0';
    local_70[4] = '\0';
    local_70[5] = '\0';
    local_70[6] = '\0';
    local_70[7] = '\0';
    local_70[8] = '\0';
    local_70[9] = '\0';
    local_70[10] = '\0';
    local_70[0xb] = '\0';
    local_70[0xc] = '\0';
    local_70[0xd] = '\0';
    local_70[0xe] = '\0';
    local_70[0xf] = '\0';
    uVar3 = FUN__text__00317e00(param_1,local_70,0x713e42,param_2);
    if ((uVar3 & 1) == 0) {
      return 0;
    }
  }
  else {
    *(int *)(lVar4 + 8) = iVar2;
    local_70[0x30] = '\0';
    local_70[0x31] = '\0';
    local_70[0x32] = '\0';
    local_70[0x33] = '\0';
    local_70[0x34] = '\0';
    local_70[0x35] = '\0';
    local_70[0x36] = '\0';
    local_70[0x37] = '\0';
    local_70[0x38] = '\0';
    local_70[0x39] = '\0';
    local_70[0x3a] = '\0';
    local_70[0x3b] = '\0';
    local_70[0x3c] = '\0';
    local_70[0x3d] = '\0';
    local_70[0x3e] = '\0';
    local_70[0x3f] = '\0';
    local_70[0x20] = '\0';
    local_70[0x21] = '\0';
    local_70[0x22] = '\0';
    local_70[0x23] = '\0';
    local_70[0x24] = '\0';
    local_70[0x25] = '\0';
    local_70[0x26] = '\0';
    local_70[0x27] = '\0';
    local_70[0x28] = '\0';
    local_70[0x29] = '\0';
    local_70[0x2a] = '\0';
    local_70[0x2b] = '\0';
    local_70[0x2c] = '\0';
    local_70[0x2d] = '\0';
    local_70[0x2e] = '\0';
    local_70[0x2f] = '\0';
    local_70[0x10] = '\0';
    local_70[0x11] = '\0';
    local_70[0x12] = '\0';
    local_70[0x13] = '\0';
    local_70[0x14] = '\0';
    local_70[0x15] = '\0';
    local_70[0x16] = '\0';
    local_70[0x17] = '\0';
    local_70[0x18] = '\0';
    local_70[0x19] = '\0';
    local_70[0x1a] = '\0';
    local_70[0x1b] = '\0';
    local_70[0x1c] = '\0';
    local_70[0x1d] = '\0';
    local_70[0x1e] = '\0';
    local_70[0x1f] = '\0';
    local_70[0] = '\0';
    local_70[1] = '\0';
    local_70[2] = '\0';
    local_70[3] = '\0';
    local_70[4] = '\0';
    local_70[5] = '\0';
    local_70[6] = '\0';
    local_70[7] = '\0';
    local_70[8] = '\0';
    local_70[9] = '\0';
    local_70[10] = '\0';
    local_70[0xb] = '\0';
    local_70[0xc] = '\0';
    local_70[0xd] = '\0';
    local_70[0xe] = '\0';
    local_70[0xf] = '\0';
    uVar3 = FUN__text__00317e00(param_1,local_70,0x713e42,param_2);
    if ((uVar3 & 1) == 0) goto LAB__text__0031a6f8;
  }
  iVar2 = atoi(local_70);
  *(int *)(lVar4 + 4) = iVar2;
LAB__text__0031a6f8:
  uVar3 = FUN__text__00305318(lVar1);
  if ((uVar3 & 1) != 0) {
    return 1;
  }
  uVar3 = FUN__text__00304ee0(lVar1,1);
  if ((uVar3 & 1) == 0) {
    FUN__text__00304fc8(lVar1,1);
  }
  return 0;
}


