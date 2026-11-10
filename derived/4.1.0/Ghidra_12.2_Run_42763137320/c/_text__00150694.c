/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00150694; name: FUN_.text__00150694
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00150694(long *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined1 auStack_50 [24];
  long local_38;
  
  local_68 = 0x479b38b8c6ba91d1;
  uStack_60 = 0x718615;
  local_58 = 0x13;
  FUN__text__005e927c(auStack_50,&local_68);
  FUN__text__005a2540(param_1,auStack_50,2);
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
  }
  lVar3 = _DAT_008a00e8;
  *(undefined1 *)(param_1 + 0x4c) = 0;
  *param_1 = lVar3 + 0x10;
  param_1[9] = lVar3 + 0xb0;
  param_1[10] = lVar3 + 0xf0;
  plVar1 = _DAT_0089f5b8;
  *(undefined4 *)(param_1 + 0x35) = 0x7fffffff;
  lVar3 = *(long *)(*plVar1 + 0x168);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  if (param_1[0x16] != 0) {
    (**(code **)(*(long *)(param_1[0x16] + 0x48) + 0x18))();
  }
  lVar2 = *plVar1;
  param_1[0x16] = lVar3;
  lVar3 = *(long *)(*(long *)(lVar2 + 0x168) + 0xa8);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  if (param_1[0x26] != 0) {
    (**(code **)(*(long *)(param_1[0x26] + 0x48) + 0x18))();
  }
  param_1[0x26] = lVar3;
  param_1[0x4b] = 0;
  return;
}


