/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006668b8; name: FUN_.text__006668b8
 */


undefined8 FUN__text__006668b8(undefined8 param_1,undefined1 *param_2,ulong param_3)

{
  ulong uVar1;
  int iVar2;
  undefined8 uVar3;
  int extraout_w1;
  ulong uVar4;
  undefined1 *puVar5;
  uint local_64;
  
  if (param_3 == 0) {
    return 0x2b;
  }
  do {
    local_64 = 0;
    uVar1 = param_3;
    if (3 < param_3) {
      uVar1 = 4;
    }
    uVar3 = FUN__text__00677e50(param_1,&local_64,4);
    if ((int)uVar3 != 0) {
      if ((int)uVar3 != 4) {
        return uVar3;
      }
      if (DAT_00c5f614 != '\x01') {
        iVar2 = FUN__text__0066c6a8();
        FUN__text__00666f74(param_1,0x7181e5);
        DAT_00c5f610 = (extraout_w1 + iVar2 + DAT_00c5f610) * -0x7f82434b + 0xa70427df;
        DAT_00c5f614 = '\x01';
      }
      DAT_00c5f610 = DAT_00c5f610 * 0x41c64e6d + 0x3039;
      local_64 = DAT_00c5f610 >> 0x10 | DAT_00c5f610 * 0x10000;
    }
    uVar4 = uVar1;
    puVar5 = param_2;
    do {
      param_2 = puVar5 + 1;
      *puVar5 = (char)local_64;
      uVar4 = uVar4 - 1;
      local_64 = local_64 >> 8;
      puVar5 = param_2;
    } while (uVar4 != 0);
    param_3 = param_3 - uVar1;
  } while (param_3 != 0);
  return 0;
}


