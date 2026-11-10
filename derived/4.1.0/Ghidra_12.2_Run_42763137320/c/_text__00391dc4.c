/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00391dc4; name: FUN_.text__00391dc4
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00391dc4(long param_1)

{
  undefined8 uVar1;
  undefined8 local_58;
  long lStack_50;
  undefined4 local_44;
  undefined1 auStack_40 [24];
  long local_28;
  
  uVar1 = *_DAT_0089f518;
  FUN__text__005e927c(auStack_40,_DAT_008a3150);
  uVar1 = FUN__text__0039b7d0(uVar1,auStack_40);
  local_44 = 0xdeaaebd;
  lStack_50 = param_1 + 0x60;
  local_58 = 0xbd24;
  FUN__text__00391f00(uVar1,&local_44,&lStack_50,&local_58);
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
  }
  return;
}


