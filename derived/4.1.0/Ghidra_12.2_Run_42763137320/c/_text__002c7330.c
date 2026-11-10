/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002c7330; name: FUN_.text__002c7330
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__002c7330(long param_1)

{
  long *plVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 local_60;
  undefined8 *puStack_58;
  undefined1 auStack_50 [24];
  long local_38;
  undefined4 local_14;
  
  plVar1 = _DAT_008a2680;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *plVar1 = param_1;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined1 *)(param_1 + 100) = 0x34;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  uVar2 = FUN__text__0016a510();
  *(undefined1 *)(param_1 + 0x67) = uVar2;
  *(undefined1 *)(param_1 + 0x65) = 1;
  *(undefined4 *)(param_1 + 0x98) = 1;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined2 *)(param_1 + 0x88) = 0;
  *(undefined1 *)(param_1 + 0xc3) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0x9c) = 0;
  *(undefined8 *)(param_1 + 0xa4) = 0;
  *(undefined4 *)(param_1 + 0xd0) = 100;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  uVar3 = *_DAT_008a2580;
  *(undefined8 *)(param_1 + 0xac) = 0;
  *(undefined8 *)(param_1 + 0xb2) = 0;
  FUN__text__005e927c(auStack_50,_DAT_008a2688);
  uVar3 = FUN__text__002f95a0(uVar3,auStack_50);
  local_14 = 0xe3e89bd1;
  local_60 = 0x78;
  puStack_58 = (undefined8 *)(param_1 + 0x60);
  FUN__text__002c8430(uVar3,&local_14,&puStack_58,&local_60);
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
  }
  return;
}


