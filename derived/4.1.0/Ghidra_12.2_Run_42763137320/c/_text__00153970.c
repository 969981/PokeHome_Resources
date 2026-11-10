/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00153970; name: FUN_.text__00153970
 */


void FUN__text__00153970(long param_1,undefined8 param_2)

{
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  long local_18;
  
  local_30 = 0x5751139dfc7f9bae;
  uStack_28 = 0x70ed12;
  local_20 = 0xe;
  local_18 = 0;
  FUN__text__005bc9a0(*(undefined8 *)(param_1 + 600),&local_30,param_2,4);
  if (local_18 != 0) {
    (**(code **)(*(long *)(local_18 + 0x48) + 0x18))();
  }
  return;
}


