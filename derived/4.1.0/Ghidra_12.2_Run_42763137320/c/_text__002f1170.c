/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002f1170; name: FUN_.text__002f1170
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__002f1170(undefined4 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [24];
  long local_30;
  undefined8 local_28;
  undefined4 local_4;
  
  uVar1 = *_DAT_008a2580;
  local_28 = param_2;
  local_4 = param_1;
  FUN__text__005e927c(auStack_48,_DAT_008a2688);
  uVar1 = FUN__text__002f95a0(uVar1,auStack_48);
  FUN__text__002f14c0(uVar1,&local_4,&local_28);
  if (local_30 != 0) {
    (**(code **)(*(long *)(local_30 + 0x48) + 0x18))();
  }
  return;
}


