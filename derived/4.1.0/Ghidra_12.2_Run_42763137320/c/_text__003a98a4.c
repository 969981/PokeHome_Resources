/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003a98a4; name: FUN_.text__003a98a4
 */


undefined8 FUN__text__003a98a4(long param_1,int param_2)

{
  ulong uVar1;
  long lVar2;
  undefined1 auStack_50 [24];
  long local_38;
  
  lVar2 = param_1 + -0xa0;
  if (param_2 == 0) {
    FUN__text__003a8c30(lVar2,*(undefined4 *)(param_1 + 0x328),
                        *(undefined4 *)(*(long *)(param_1 + 0x368) + 8));
    FUN__text__005e927c(auStack_50,0x8820d8);
    FUN__text__003c1e4c(auStack_50);
    if (local_38 != 0) {
      (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    }
    return 1;
  }
  uVar1 = FUN__text__003a8e60(lVar2);
  if ((uVar1 & 1) == 0) {
    return 0;
  }
  *(undefined1 *)(param_1 + -0x1b) = 1;
  FUN__text__003a1648(lVar2,0);
  return 1;
}


