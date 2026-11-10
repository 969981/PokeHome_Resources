/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002fb01c; name: FUN_.text__002fb01c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__002fb01c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_40 [24];
  long local_28;
  
  uVar1 = *param_1;
  FUN__text__005e927c(auStack_40,_DAT_008a2688);
  FUN__text__002f9aa0(uVar1,auStack_40,param_2);
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
  }
  return;
}


