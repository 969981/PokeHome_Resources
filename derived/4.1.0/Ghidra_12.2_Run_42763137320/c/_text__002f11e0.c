/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002f11e0; name: FUN_.text__002f11e0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN__text__002f11e0(undefined4 param_1)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  undefined1 auStack_48 [24];
  long local_30;
  undefined4 local_24;
  
  uVar1 = *_DAT_008a2580;
  local_24 = param_1;
  FUN__text__005e927c(auStack_48,_DAT_008a2688);
  uVar1 = FUN__text__002f95a0(uVar1,auStack_48);
  auVar2 = FUN__text__002f1260(uVar1,&local_24);
  if (local_30 != 0) {
    (**(code **)(*(long *)(local_30 + 0x48) + 0x18))();
  }
  return auVar2;
}


