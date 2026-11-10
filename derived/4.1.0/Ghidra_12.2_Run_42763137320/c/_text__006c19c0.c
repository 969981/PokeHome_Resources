/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006c19c0; name: FUN_.text__006c19c0
 */


uint * FUN__text__006c19c0(long param_1,char *param_2)

{
  int iVar1;
  uint *puVar2;
  ulong uVar3;
  char local_88 [72];
  
  if (*(short *)(param_1 + 8) != 0) {
    uVar3 = 0;
    puVar2 = (uint *)(param_1 + 0xc);
    do {
      local_88[0x40] = '\0';
      local_88[0x41] = '\0';
      local_88[0x42] = '\0';
      local_88[0x43] = '\0';
      local_88[0x44] = '\0';
      local_88[0x45] = '\0';
      local_88[0x46] = '\0';
      local_88[0x30] = '\0';
      local_88[0x31] = '\0';
      local_88[0x32] = '\0';
      local_88[0x33] = '\0';
      local_88[0x34] = '\0';
      local_88[0x35] = '\0';
      local_88[0x36] = '\0';
      local_88[0x37] = '\0';
      local_88[0x38] = '\0';
      local_88[0x39] = '\0';
      local_88[0x3a] = '\0';
      local_88[0x3b] = '\0';
      local_88[0x3c] = '\0';
      local_88[0x3d] = '\0';
      local_88[0x3e] = '\0';
      local_88[0x3f] = 0;
      local_88[0x20] = '\0';
      local_88[0x21] = '\0';
      local_88[0x22] = '\0';
      local_88[0x23] = '\0';
      local_88[0x24] = '\0';
      local_88[0x25] = '\0';
      local_88[0x26] = '\0';
      local_88[0x27] = '\0';
      local_88[0x28] = '\0';
      local_88[0x29] = '\0';
      local_88[0x2a] = '\0';
      local_88[0x2b] = '\0';
      local_88[0x2c] = '\0';
      local_88[0x2d] = '\0';
      local_88[0x2e] = '\0';
      local_88[0x2f] = '\0';
      local_88[0x10] = '\0';
      local_88[0x11] = '\0';
      local_88[0x12] = '\0';
      local_88[0x13] = '\0';
      local_88[0x14] = '\0';
      local_88[0x15] = '\0';
      local_88[0x16] = '\0';
      local_88[0x17] = '\0';
      local_88[0x18] = '\0';
      local_88[0x19] = '\0';
      local_88[0x1a] = '\0';
      local_88[0x1b] = '\0';
      local_88[0x1c] = '\0';
      local_88[0x1d] = '\0';
      local_88[0x1e] = '\0';
      local_88[0x1f] = '\0';
      local_88[0] = '\0';
      local_88[1] = '\0';
      local_88[2] = '\0';
      local_88[3] = '\0';
      local_88[4] = '\0';
      local_88[5] = '\0';
      local_88[6] = '\0';
      local_88[7] = '\0';
      local_88[8] = '\0';
      local_88[9] = '\0';
      local_88[10] = '\0';
      local_88[0xb] = '\0';
      local_88[0xc] = '\0';
      local_88[0xd] = '\0';
      local_88[0xe] = '\0';
      local_88[0xf] = '\0';
      FUN__text__006d3e78(local_88,0x47,param_1 + 0xc + (ulong)*puVar2,puVar2);
      iVar1 = strcmp(local_88,param_2);
      if (iVar1 == 0) {
        return puVar2;
      }
      uVar3 = uVar3 + 1;
      puVar2 = puVar2 + 4;
    } while (uVar3 < *(ushort *)(param_1 + 8));
  }
  return (uint *)0x0;
}


