/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0059aa78; name: FUN_.text__0059aa78
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0059aa78(long *param_1,undefined4 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long local_28;
  undefined4 local_4;
  
  local_4 = param_2;
  FUN__text__005deba0(param_1,2);
  lVar3 = _DAT_008a5520;
  *(undefined1 *)(param_1 + 0x15) = 0;
  *(undefined8 *)((long)param_1 + 0xac) = 0;
  *(undefined4 *)((long)param_1 + 0xb4) = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  *param_1 = lVar3 + 0x10;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[9] = lVar3 + 0x1a0;
  param_1[10] = lVar3 + 0x210;
  param_1[0xf] = lVar3 + 0x238;
  param_1[0x10] = lVar3 + 0x300;
  param_1[0x13] = lVar3 + 0x608;
  param_1[0x14] = 0;
  lVar2 = lRam0000000000724898;
  lVar1 = _DAT_00724890;
  param_1[0x1a] = 0x3f80000000000000;
  param_1[0x1b] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0x3f80000000000000;
  param_1[0x24] = 0;
  param_1[0x25] = 0x3f80000000000000;
  param_1[0x28] = 0x447a0000;
  param_1[0x11] = lVar3 + 0x410;
  param_1[0x12] = lVar3 + 0x4f0;
  param_1[0x19] = lVar2;
  param_1[0x18] = lVar1;
  FUN__text__0059ab60(&local_28,param_1[1],&local_4);
  if (param_1[0x14] != 0) {
    (**(code **)(*(long *)(param_1[0x14] + 0x48) + 0x18))();
  }
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[0x14] = local_28;
  param_1[0x27] = param_1[0x27] | 0x10;
  return;
}


