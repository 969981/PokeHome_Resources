/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003b200c; name: FUN_.text__003b200c
 */


undefined8 FUN__text__003b200c(long param_1,int param_2)

{
  ulong uVar1;
  undefined1 auStack_40 [24];
  long local_28;
  
  if (param_2 == 0) {
    FUN__text__003b0f04(param_1);
    FUN__text__005e927c(auStack_40,0x882660);
    FUN__text__003c1e4c(auStack_40);
    if (local_28 != 0) {
      (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
    }
    return 1;
  }
  uVar1 = FUN__text__003b11fc(param_1);
  if ((uVar1 & 1) == 0) {
    return 0;
  }
  *(undefined1 *)(param_1 + 0x85) = 1;
  FUN__text__003a1648(param_1,0);
  *(undefined4 *)(param_1 + 0x868) = 0xffffffff;
  return 1;
}


