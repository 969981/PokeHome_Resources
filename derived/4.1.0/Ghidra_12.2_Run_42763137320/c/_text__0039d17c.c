/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0039d17c; name: FUN_.text__0039d17c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0039d17c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_40 [24];
  long local_28;
  
  uVar1 = *param_1;
  FUN__text__005e927c(auStack_40,_DAT_008a3150);
  FUN__text__0039bc40(uVar1,auStack_40,param_2);
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
  }
  FUN__text__005e927c(auStack_40,_DAT_008a3468);
  FUN__text__0039bc40(uVar1,auStack_40,param_2);
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
  }
  return;
}


