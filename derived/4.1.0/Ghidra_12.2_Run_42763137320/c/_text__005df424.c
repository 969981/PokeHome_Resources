/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005df424; name: FUN_.text__005df424
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__005df424(long *param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined1 uStack_11;
  
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
  param_1[10] = 0;
  *_DAT_008a5a80 = 1;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *param_1 = 0x897560;
  param_1[1] = lVar3;
  param_1[9] = 0x897590;
  nn::oe::Initialize();
  nn::oe::SetPerformanceModeChangedNotificationEnabled(true);
  lVar3 = FUN__text__005abdcc(&uStack_11,param_1[1]);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  lVar2 = param_1[10];
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
  }
  param_1[10] = lVar3;
  lVar3 = FUN__text__005abdcc(&uStack_11,param_1[1]);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  if (param_1[0xb] != 0) {
    (**(code **)(*(long *)(param_1[0xb] + 0x48) + 0x18))();
  }
  param_1[0xb] = lVar3;
  lVar3 = FUN__text__005abdcc(&uStack_11,param_1[1]);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  if (param_1[0xc] != 0) {
    (**(code **)(*(long *)(param_1[0xc] + 0x48) + 0x18))();
  }
  param_1[0xc] = lVar3;
  lVar3 = FUN__text__005abdcc(&uStack_11,param_1[1]);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  if (param_1[0xd] != 0) {
    (**(code **)(*(long *)(param_1[0xd] + 0x48) + 0x18))();
  }
  param_1[0xd] = lVar3;
  lVar3 = FUN__text__005abdcc(&uStack_11,param_1[1]);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  if (param_1[0xe] != 0) {
    (**(code **)(*(long *)(param_1[0xe] + 0x48) + 0x18))();
  }
  param_1[0xe] = lVar3;
  return;
}


