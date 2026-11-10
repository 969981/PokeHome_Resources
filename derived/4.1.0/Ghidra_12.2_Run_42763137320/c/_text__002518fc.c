/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002518fc; name: FUN_.text__002518fc
 */


void FUN__text__002518fc(undefined8 param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  undefined1 auStack_40 [24];
  long local_28;
  
  lVar1 = *param_2;
  *param_2 = 0;
  FUN__text__005e927c(auStack_40,0x8752b0);
  FUN__text__003a1de4(lVar1,auStack_40);
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
  }
  plVar2 = (long *)(lVar1 + 0x48);
  (**(code **)(*plVar2 + 0x18))(plVar2);
  return;
}


