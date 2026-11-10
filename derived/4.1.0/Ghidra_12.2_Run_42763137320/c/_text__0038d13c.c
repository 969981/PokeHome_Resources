/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0038d13c; name: FUN_.text__0038d13c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0038d13c(undefined4 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_40 [24];
  long local_28;
  undefined4 local_8;
  undefined4 local_4;
  
  uVar1 = *_DAT_0089f518;
  local_4 = param_1;
  FUN__text__005e927c(auStack_40,_DAT_008a3150);
  uVar1 = FUN__text__0039b7d0(uVar1,auStack_40);
  local_8 = 0xadb4fe17;
  FUN__text__0038d1c0(uVar1,&local_8,&local_4);
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
  }
  return;
}


