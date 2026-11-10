/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0038c898; name: FUN_.text__0038c898
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0038c898(long param_1)

{
  undefined8 uVar1;
  undefined8 local_50;
  undefined4 local_44;
  long local_40 [3];
  long local_28;
  
  uVar1 = *_DAT_0089f518;
  FUN__text__005e927c(local_40,_DAT_008a3150);
  uVar1 = FUN__text__0039b7d0(uVar1,local_40);
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
  }
  local_44 = 0x1720a5e0;
  local_40[0] = param_1 + 0x60;
  local_50 = 0x400;
  FUN__text__0038c5a0(uVar1,&local_44,local_40,&local_50);
  return;
}


