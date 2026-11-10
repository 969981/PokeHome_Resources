/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001941b8; name: FUN_.text__001941b8
 */


undefined8 FUN__text__001941b8(long param_1,undefined8 param_2,undefined4 param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  
  lVar1 = FUN__text__00195358();
  if (lVar1 == 0) {
    return 0;
  }
  if (*(int *)(lVar1 + 0x18) != 0) {
    uVar2 = *(ulong *)(lVar1 + 8);
    lVar3 = *(long *)(*(long *)(*(long *)(*(long *)(param_1 + 0x40) + (uVar2 & 0xffffffff) * 0x20 +
                                         0x10) + 0x10) + 8);
    if (lVar3 != 0) {
      uVar5 = *(undefined8 *)(lVar1 + 0x10);
      plVar4 = (long *)(lVar3 + 0x48);
      (**(code **)(*plVar4 + 0x10))(plVar4);
      FUN__text__00303bec(lVar3,uVar2 >> 0x20,(int)uVar5 + (int)((ulong)uVar5 >> 0x20) * 6,param_3);
      (**(code **)(*plVar4 + 0x18))(plVar4);
      return 1;
    }
  }
  return 0;
}


