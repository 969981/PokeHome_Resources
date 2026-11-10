/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003b20c4; name: FUN_.text__003b20c4
 */


undefined8 FUN__text__003b20c4(long param_1,int param_2)

{
  ulong uVar1;
  long lVar2;
  undefined1 auStack_50 [24];
  long local_38;
  
  lVar2 = param_1 + -0xa8;
  if (param_2 == 0) {
    FUN__text__003b0f04(lVar2);
    FUN__text__005e927c(auStack_50,0x882660);
    FUN__text__003c1e4c(auStack_50);
    if (local_38 != 0) {
      (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    }
    return 1;
  }
  uVar1 = FUN__text__003b11fc(lVar2);
  if ((uVar1 & 1) == 0) {
    return 0;
  }
  *(undefined1 *)(param_1 + -0x23) = 1;
  FUN__text__003a1648(lVar2,0);
  *(undefined4 *)(param_1 + 0x7c0) = 0xffffffff;
  return 1;
}


