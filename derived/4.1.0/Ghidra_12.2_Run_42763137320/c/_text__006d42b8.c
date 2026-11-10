/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006d42b8; name: FUN_.text__006d42b8
 */


undefined8
FUN__text__006d42b8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,long param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  undefined4 uVar2;
  char local_98 [72];
  
  local_98[0x40] = '\0';
  local_98[0x41] = '\0';
  local_98[0x42] = '\0';
  local_98[0x43] = '\0';
  local_98[0x44] = '\0';
  local_98[0x45] = '\0';
  local_98[0x46] = '\0';
  local_98[0x30] = '\0';
  local_98[0x31] = '\0';
  local_98[0x32] = '\0';
  local_98[0x33] = '\0';
  local_98[0x34] = '\0';
  local_98[0x35] = '\0';
  local_98[0x36] = '\0';
  local_98[0x37] = '\0';
  local_98[0x38] = '\0';
  local_98[0x39] = '\0';
  local_98[0x3a] = '\0';
  local_98[0x3b] = '\0';
  local_98[0x3c] = '\0';
  local_98[0x3d] = '\0';
  local_98[0x3e] = '\0';
  local_98[0x3f] = 0;
  local_98[0x20] = '\0';
  local_98[0x21] = '\0';
  local_98[0x22] = '\0';
  local_98[0x23] = '\0';
  local_98[0x24] = '\0';
  local_98[0x25] = '\0';
  local_98[0x26] = '\0';
  local_98[0x27] = '\0';
  local_98[0x28] = '\0';
  local_98[0x29] = '\0';
  local_98[0x2a] = '\0';
  local_98[0x2b] = '\0';
  local_98[0x2c] = '\0';
  local_98[0x2d] = '\0';
  local_98[0x2e] = '\0';
  local_98[0x2f] = '\0';
  local_98[0x10] = '\0';
  local_98[0x11] = '\0';
  local_98[0x12] = '\0';
  local_98[0x13] = '\0';
  local_98[0x14] = '\0';
  local_98[0x15] = '\0';
  local_98[0x16] = '\0';
  local_98[0x17] = '\0';
  local_98[0x18] = '\0';
  local_98[0x19] = '\0';
  local_98[0x1a] = '\0';
  local_98[0x1b] = '\0';
  local_98[0x1c] = '\0';
  local_98[0x1d] = '\0';
  local_98[0x1e] = '\0';
  local_98[0x1f] = '\0';
  local_98[0] = '\0';
  local_98[1] = '\0';
  local_98[2] = '\0';
  local_98[3] = '\0';
  local_98[4] = '\0';
  local_98[5] = '\0';
  local_98[6] = '\0';
  local_98[7] = '\0';
  local_98[8] = '\0';
  local_98[9] = '\0';
  local_98[10] = '\0';
  local_98[0xb] = '\0';
  local_98[0xc] = '\0';
  local_98[0xd] = '\0';
  local_98[0xe] = '\0';
  local_98[0xf] = '\0';
  nn::util::SNPrintf(local_98,0x47,(char *)0x710b16,param_7,(ulong)*(uint *)(param_6 + 4));
  uVar1 = *(ushort *)(param_6 + 10) - 1;
  if (uVar1 < 3) {
    uVar2 = *(undefined4 *)((long)(short)uVar1 * 4 + 0x766874);
  }
  else {
    uVar2 = 0;
  }
  *(undefined4 *)(param_1 + 0x154) = uVar2;
  FUN__text__006d38c0(param_1 + 0x20,param_2,param_3,param_5,param_4,param_8,0,0);
  FUN__text__006d3fb0(param_1,param_3,param_5);
  return 1;
}


