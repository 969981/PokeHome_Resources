/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00193c9c; name: FUN_.text__00193c9c
 */


void FUN__text__00193c9c(long param_1,undefined8 param_2,uint param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  
  lVar1 = FUN__text__00195358();
  if ((lVar1 != 0) && (*(int *)(lVar1 + 0x18) != 0)) {
    uVar2 = *(ulong *)(lVar1 + 8);
    lVar3 = *(long *)(*(long *)(*(long *)(*(long *)(param_1 + 0x40) + (uVar2 & 0xffffffff) * 0x20 +
                                         0x10) + 0x10) + 8);
    if (lVar3 != 0) {
      uVar5 = *(undefined8 *)(lVar1 + 0x10);
      plVar4 = (long *)(lVar3 + 0x48);
      (**(code **)(*plVar4 + 0x10))(plVar4);
      FUN__text__003031e8(lVar3,uVar2 >> 0x20,(int)uVar5 + (int)((ulong)uVar5 >> 0x20) * 6,
                          param_3 & 1);
                    /* WARNING: Could not recover jumptable at 0x00193d3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 0x18))(plVar4);
      return;
    }
  }
  return;
}


