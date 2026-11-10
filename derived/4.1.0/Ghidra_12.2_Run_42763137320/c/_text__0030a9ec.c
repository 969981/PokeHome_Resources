/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0030a9ec; name: FUN_.text__0030a9ec
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0030a9ec(long *param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  
  param_1[7] = 0;
  lVar3 = _DAT_0089f690;
  *(undefined4 *)(param_1 + 8) = 0;
  uVar1 = tpidr_el0;
  uVar1 = uVar1 & 0xffffffffffffe000;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  *param_1 = lVar3 + 0x10;
  lVar3 = 0;
  if (uVar1 != 0) {
    if (*(long *)(uVar1 + 0x98) == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = *(long *)(uVar1 + *(long *)(uVar1 + 0x98) * 8 + 0x10);
    }
  }
  *(undefined4 *)(param_1 + 10) = 0;
  lVar2 = _DAT_008a2a98;
  param_1[0x31e] = 0;
  param_1[799] = 0;
  param_1[800] = 0;
  param_1[0x321] = 0;
  param_1[0x30d] = 0;
  param_1[0x30e] = 0;
  param_1[0x30f] = 0;
  param_1[0x310] = 0;
  param_1[9] = lVar2 + 0x68;
  *param_1 = lVar2 + 0x10;
  param_1[1] = lVar3;
  param_1[0x311] = 0;
  param_1[0x340] = 0;
  param_1[0x341] = 0;
  param_1[0x342] = 0;
  param_1[0x343] = 0;
  param_1[0x333] = 0;
  param_1[0x332] = 0;
  param_1[0x331] = 0;
  param_1[0x330] = 0;
  param_1[0x32f] = 0;
  param_1[0x362] = 0;
  param_1[0x363] = 0;
  param_1[0x364] = 0;
  param_1[0x30c] = 0x8679f8;
  param_1[0x32e] = 0x8679f8;
  param_1[0x350] = 0x8679f8;
  param_1[0x372] = 0x8679f8;
  param_1[0x394] = 0x8679f8;
  param_1[0x3b6] = 0x8679f8;
  param_1[0x3d8] = 0x8679f8;
  param_1[0x3fa] = 0x8679f8;
  param_1[0x41c] = 0x8679f8;
  param_1[0x43e] = 0x8679f8;
  param_1[0x460] = 0x8679f8;
  param_1[0x482] = 0x8679f8;
  param_1[0x4a4] = 0xc800000064;
  param_1[0x4a5] = 0x64000000fa;
  param_1[0x365] = 0;
  param_1[0x351] = 0;
  param_1[0x352] = 0;
  param_1[0x353] = 0;
  param_1[0x354] = 0;
  param_1[0x355] = 0;
  param_1[900] = 0;
  param_1[0x385] = 0;
  param_1[0x386] = 0;
  param_1[0x387] = 0;
  param_1[0x377] = 0;
  param_1[0x376] = 0;
  param_1[0x375] = 0;
  param_1[0x374] = 0;
  param_1[0x373] = 0;
  param_1[0x3a9] = 0;
  param_1[0x3a8] = 0;
  param_1[0x3a7] = 0;
  param_1[0x3a6] = 0;
  param_1[0x399] = 0;
  param_1[0x398] = 0;
  param_1[0x397] = 0;
  param_1[0x396] = 0;
  param_1[0x395] = 0;
  param_1[0x3cb] = 0;
  param_1[0x3ca] = 0;
  param_1[0x3c9] = 0;
  param_1[0x3c8] = 0;
  param_1[0x3bb] = 0;
  param_1[0x3ba] = 0;
  param_1[0x3b9] = 0;
  param_1[0x3b8] = 0;
  param_1[0x3b7] = 0;
  param_1[0x3ed] = 0;
  param_1[0x3ec] = 0;
  param_1[0x3eb] = 0;
  param_1[0x3ea] = 0;
  param_1[0x3dd] = 0;
  param_1[0x3dc] = 0;
  param_1[0x3db] = 0;
  param_1[0x3da] = 0;
  param_1[0x3d9] = 0;
  param_1[0x40f] = 0;
  param_1[0x40e] = 0;
  param_1[0x40d] = 0;
  param_1[0x40c] = 0;
  param_1[0x3ff] = 0;
  param_1[0x3fe] = 0;
  param_1[0x3fd] = 0;
  param_1[0x3fc] = 0;
  param_1[0x3fb] = 0;
  param_1[0x431] = 0;
  param_1[0x430] = 0;
  param_1[0x42f] = 0;
  param_1[0x42e] = 0;
  param_1[0x421] = 0;
  param_1[0x420] = 0;
  param_1[0x41f] = 0;
  param_1[0x41e] = 0;
  param_1[0x41d] = 0;
  param_1[0x453] = 0;
  param_1[0x452] = 0;
  param_1[0x451] = 0;
  param_1[0x450] = 0;
  param_1[0x443] = 0;
  param_1[0x442] = 0;
  param_1[0x441] = 0;
  param_1[0x440] = 0;
  param_1[0x43f] = 0;
  param_1[0x475] = 0;
  param_1[0x474] = 0;
  param_1[0x473] = 0;
  param_1[0x472] = 0;
  param_1[0x465] = 0;
  param_1[0x464] = 0;
  param_1[0x463] = 0;
  param_1[0x462] = 0;
  param_1[0x461] = 0;
  param_1[0x497] = 0;
  param_1[0x496] = 0;
  param_1[0x495] = 0;
  param_1[0x494] = 0;
  param_1[0x487] = 0;
  param_1[0x486] = 0;
  param_1[0x485] = 0;
  param_1[0x484] = 0;
  param_1[0x483] = 0;
  param_1[0x4a6] = 0xfa000000c8;
  memset(param_1 + 0xb,0,0x1800);
  param_1[0x240] = -0x340d631b7bddd9bb;
  memset(param_1 + 0x241,0,0x148);
  *(undefined1 *)(param_1 + 0x26a) = 1;
  return;
}


