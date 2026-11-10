/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00467330; name: FUN_.text__00467330
 */


undefined1  [16] FUN__text__00467330(long param_1,undefined8 param_2)

{
  ulong uVar1;
  byte *pbVar2;
  uint uVar3;
  undefined4 extraout_s0;
  uint uVar4;
  undefined4 extraout_var;
  undefined8 extraout_var_00;
  undefined1 auVar5 [16];
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_40;
  undefined1 local_38;
  undefined1 local_30;
  undefined8 local_28;
  uint local_4;
  
  if ((*(long *)(param_1 + 0x78) != 0) && ((*(byte *)(param_1 + 0x98) & 1) == 0)) {
    FUN__text__00467330();
    auVar5._4_4_ = extraout_var;
    auVar5._0_4_ = extraout_s0;
    auVar5._8_8_ = extraout_var_00;
    return auVar5;
  }
  local_4 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0xff;
  local_30 = 0xff;
  local_28 = 0;
  local_50 = param_2;
  FUN__text__00467430(param_1,&local_4,7,&local_50);
  uVar4 = 0x42480000;
  if (((local_4 ^ 0xffffffff) & 0x7f800000) != 0) {
    uVar4 = local_4;
  }
  if ((*(char *)(param_1 + 0xd3) < '\0') &&
     (pbVar2 = *(byte **)(param_1 + 0x90), pbVar2 != (byte *)0x0)) {
    uVar3 = (uint)*pbVar2;
    if (*pbVar2 < 2) {
      uVar3 = 1;
    }
    uVar1 = (ulong)uVar3;
    do {
      pbVar2 = pbVar2 + 1;
      if (*pbVar2 == 8) break;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return ZEXT416(uVar4);
}


