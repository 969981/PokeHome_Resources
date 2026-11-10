/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0045df80; name: FUN_.text__0045df80
 */


ulong FUN__text__0045df80(long *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  
  lVar4 = param_1[0x16];
  if (lVar4 != 0) {
    if (*(int *)(lVar4 + 4) != 0) {
      return 1;
    }
    if (*(int *)(lVar4 + 0xc) != 0) {
      return 1;
    }
    if (*(int *)(lVar4 + 0x14) != 0) {
      return 1;
    }
    if (*(int *)(lVar4 + 0x1c) != 0) {
      return 1;
    }
  }
  iVar3 = (**(code **)(*param_1 + 0x80))(param_1);
  if (iVar3 == 10) {
    return 1;
  }
  uVar1 = *(uint *)((long)param_1 + 0x114);
  uVar2 = uVar1 >> 8 & 0xf;
  if ((3 < uVar2) || (((uVar1 & 0xff) == 0 && (uVar2 != 3)))) {
    if (((uVar1 ^ 0xffffffff) & 0xe00) == 0) {
      return 1;
    }
    if (((((*(uint *)((long)param_1 + 0xd2) & 0x780000) == 0) && (param_1[0x10] != 0)) &&
        ((*(uint *)((long)param_1 + 0xd2) >> 0x12 & 1) == 0)) &&
       ((((param_1[0x13] & 0xe0000U) == 0 && (param_1[0x1e] == 0)) && (param_1[0x11] == 0)))) {
      if ((ulong *)param_1[0xb] == (ulong *)0x0) {
        return 0;
      }
      uVar5 = *(ulong *)param_1[0xb];
      if ((uVar5 & 0x280000000020) == 0) {
        return uVar5 >> 0x2c & 1;
      }
      return 1;
    }
  }
  return 1;
}


