/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0025f6a8; name: FUN_.text__0025f6a8
 */


void FUN__text__0025f6a8(long param_1,undefined8 param_2)

{
  long *plVar1;
  long local_28;
  undefined8 local_8;
  
  plVar1 = (long *)(param_1 + 0x88);
  *plVar1 = 0;
  *(undefined8 *)(param_1 + 0x6c) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x74) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x7c) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 0x4c) = 0;
  *(undefined8 *)(param_1 + 0x54) = 0;
  *(undefined8 *)(param_1 + 0x5c) = 0;
  *(undefined8 *)(param_1 + 100) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x95) = 0;
  local_8 = param_2;
  FUN__text__0014ce28(&local_28,param_2,&local_8);
  if (*plVar1 != 0) {
    (**(code **)(*(long *)(*plVar1 + 0x48) + 0x18))();
  }
  *plVar1 = local_28;
  return;
}


