/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0019427c; name: FUN_.text__0019427c
 */


undefined4 FUN__text__0019427c(long param_1)

{
  undefined4 uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  
  lVar2 = FUN__text__00195358();
  if ((lVar2 != 0) && (*(int *)(lVar2 + 0x18) != 0)) {
    uVar3 = *(ulong *)(lVar2 + 8);
    lVar4 = *(long *)(*(long *)(*(long *)(*(long *)(param_1 + 0x40) + (uVar3 & 0xffffffff) * 0x20 +
                                         0x10) + 0x10) + 8);
    if (lVar4 != 0) {
      uVar6 = *(undefined8 *)(lVar2 + 0x10);
      plVar5 = (long *)(lVar4 + 0x48);
      (**(code **)(*plVar5 + 0x10))(plVar5);
      uVar1 = FUN__text__00303c20(lVar4,uVar3 >> 0x20,(int)uVar6 + (int)((ulong)uVar6 >> 0x20) * 6);
      (**(code **)(*plVar5 + 0x18))(plVar5);
      return uVar1;
    }
  }
  return 0;
}


