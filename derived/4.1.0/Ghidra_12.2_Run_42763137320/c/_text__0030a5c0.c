/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0030a5c0; name: FUN_.text__0030a5c0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0030a5c0(long *param_1)

{
  ulong uVar1;
  long lVar2;
  long local_8;
  
  param_1[7] = 0;
  lVar2 = _DAT_0089f690;
  *(undefined4 *)(param_1 + 8) = 0;
  uVar1 = tpidr_el0;
  uVar1 = uVar1 & 0xffffffffffffe000;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  *param_1 = lVar2 + 0x10;
  if ((uVar1 == 0) || (*(long *)(uVar1 + 0x98) == 0)) {
    lVar2 = 0;
  }
  else {
    lVar2 = *(long *)(uVar1 + *(long *)(uVar1 + 0x98) * 8 + 0x10);
  }
  *_DAT_008a29f0 = 1;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[9] = 0x87cac0;
  param_1[10] = 0;
  *param_1 = 0x87ca90;
  param_1[1] = lVar2;
  FUN__text__0030a714(&local_8);
  if (param_1[10] != 0) {
    (**(code **)(*(long *)(param_1[10] + 0x48) + 0x18))();
  }
  param_1[10] = local_8;
  *(undefined4 *)(local_8 + 0x700fd8) = 0;
  FUN__text__0030a714(&local_8,param_1[1]);
  if (param_1[0xb] != 0) {
    (**(code **)(*(long *)(param_1[0xb] + 0x48) + 0x18))();
  }
  param_1[0xb] = local_8;
  *(undefined4 *)(local_8 + 0x700fd8) = 0;
  FUN__text__0030a714(&local_8,param_1[1]);
  if (param_1[0xc] != 0) {
    (**(code **)(*(long *)(param_1[0xc] + 0x48) + 0x18))();
  }
  param_1[0xc] = local_8;
  FUN__text__0030a714(&local_8,param_1[1]);
  if (param_1[0xd] != 0) {
    (**(code **)(*(long *)(param_1[0xd] + 0x48) + 0x18))();
  }
  param_1[0xd] = local_8;
  *(undefined4 *)(local_8 + 0x700fd8) = 0;
  return;
}


