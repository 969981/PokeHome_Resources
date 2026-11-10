/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0029dea4; name: FUN_.text__0029dea4
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0029dea4(long *param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long local_38;
  
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
  *_DAT_008a2338 = 1;
  lVar2 = _DAT_008a2340;
  *(undefined8 *)((long)param_1 + 0x40008c) = 0;
  *param_1 = lVar2 + 0x10;
  param_1[1] = lVar3;
  param_1[9] = lVar2 + 0x40;
  memset(param_1 + 10,0,0x400038);
  nn::os::InitializeLightEvent((long)param_1 + 0x400094,0,1);
  nn::os::InitializeLightEvent(param_1 + 0x80014,0,1);
  *(undefined1 *)((long)param_1 + 0x4000ac) = 0;
  param_1[10] = param_1[1];
  FUN__text__0029dfc4(&local_38,param_1[1],param_1 + 10);
  if (param_1[0xc] != 0) {
    (**(code **)(*(long *)(param_1[0xc] + 0x48) + 0x18))();
  }
  param_1[0xc] = local_38;
  return;
}


