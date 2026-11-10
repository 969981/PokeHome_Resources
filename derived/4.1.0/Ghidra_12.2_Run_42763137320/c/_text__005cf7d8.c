/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005cf7d8; name: FUN_.text__005cf7d8
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__005cf7d8(long *param_1,long param_2,undefined4 param_3,undefined4 param_4)

{
  long lVar1;
  
  *param_1 = _DAT_0089f4a8 + 0x10;
  lVar1 = *(long *)(param_2 + 8);
  param_1[1] = lVar1;
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  }
  param_1[2] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[3] = 0;
  if (*(code **)(param_2 + 0x20) != (code *)0x0) {
    (**(code **)(param_2 + 0x20))(param_2 + 0x30,param_1 + 6);
    lVar1 = *(long *)(param_2 + 0x28);
    param_1[3] = *(long *)(param_2 + 0x18);
    param_1[5] = lVar1;
    lVar1 = *(long *)(param_2 + 0x10);
    param_1[4] = *(long *)(param_2 + 0x20);
    param_1[2] = lVar1;
  }
  param_1[0x12] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x13] = 0;
  if (*(code **)(param_2 + 0xa0) != (code *)0x0) {
    (**(code **)(param_2 + 0xa0))(param_2 + 0xb0,param_1 + 0x16);
    lVar1 = *(long *)(param_2 + 0xa8);
    param_1[0x13] = *(long *)(param_2 + 0x98);
    param_1[0x15] = lVar1;
    lVar1 = *(long *)(param_2 + 0x90);
    param_1[0x14] = *(long *)(param_2 + 0xa0);
    param_1[0x12] = lVar1;
  }
  lVar1 = _DAT_0089f4c8;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = param_3;
  *(undefined4 *)((long)param_1 + 0x11c) = param_4;
  *param_1 = lVar1 + 0x10;
  lVar1 = FUN__text__005cfd84(param_1[1],param_3);
  param_1[0x22] = lVar1;
  return;
}


