/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00597548; name: FUN_.text__00597548
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00597548(long *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  long lVar2;
  undefined1 auStack_40 [24];
  long local_28;
  
  FUN__text__005e927c(auStack_40,0x893e60);
  FUN__text__005a2540(param_1,auStack_40,2);
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
  }
  lVar2 = _DAT_008a54e0;
  *param_1 = _DAT_008a54e0 + 0x10;
  param_1[9] = lVar2 + 0xb0;
  param_1[10] = lVar2 + 0xf0;
  uVar1 = *param_2;
  param_1[0x50] = 0x3f800000;
  param_1[0x55] = 0x3f800000;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  *(undefined4 *)(param_1 + 0x4e) = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0x3f80000000000000;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  param_1[0x56] = 0;
  param_1[0x57] = 0x3f80000000000000;
  *(undefined4 *)(param_1 + 0x35) = 0x7fffffff;
  *(undefined4 *)(param_1 + 0x4b) = uVar1;
  if (param_1[0x26] != 0) {
    (**(code **)(*(long *)(param_1[0x26] + 0x48) + 0x18))();
  }
  param_1[0x26] = 0;
  return;
}


