/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002e844c; name: FUN_.text__002e844c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__002e844c(long param_1)

{
  undefined8 uVar1;
  long local_58;
  long local_50;
  undefined4 local_44;
  undefined1 auStack_40 [24];
  long local_28;
  
  uVar1 = *_DAT_008a2580;
  FUN__text__005e927c(auStack_40,_DAT_008a2688);
  uVar1 = FUN__text__002f95a0(uVar1,auStack_40);
  local_44 = 0xd66012c;
  local_50 = *(long *)(param_1 + 0x9c0);
  local_58 = *(long *)(param_1 + 0x9c8) - local_50;
  FUN__text__002e9e90(uVar1,&local_44,&local_50,&local_58);
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
  }
  return;
}


