/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002d4d6c; name: FUN_.text__002d4d6c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__002d4d6c(long param_1)

{
  undefined8 uVar1;
  undefined8 local_48;
  undefined1 auStack_40 [24];
  long local_28;
  
  uVar1 = *_DAT_008a2580;
  FUN__text__005e927c(auStack_40,_DAT_008a2688);
  uVar1 = FUN__text__002f95a0(uVar1,auStack_40);
  local_48 = 0x27068;
  FUN__text__002d5360(uVar1,0x733910,param_1 + 0x60,&local_48);
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
  }
  return;
}


