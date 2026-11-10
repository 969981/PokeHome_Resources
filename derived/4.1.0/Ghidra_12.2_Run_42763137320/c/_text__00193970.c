/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00193970; name: FUN_.text__00193970
 */


void FUN__text__00193970(long param_1,long *param_2,undefined8 param_3,uint param_4,uint param_5)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  long local_38;
  
  if ((3 < param_4) || (3 < param_5)) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl();
  }
  lVar1 = FUN__text__00195358(param_1,param_3);
  if ((lVar1 != 0) && (*(int *)(lVar1 + 0x18) != 0)) {
    uVar2 = *(ulong *)(lVar1 + 8);
    lVar4 = *(long *)(*(long *)(*(long *)(*(long *)(param_1 + 0x40) + (uVar2 & 0xffffffff) * 0x20 +
                                         0x10) + 0x10) + 8);
    if (lVar4 != 0) {
      uVar5 = *(undefined8 *)(lVar1 + 0x10);
      plVar3 = (long *)(lVar4 + 0x48);
      (**(code **)(*plVar3 + 0x10))(plVar3);
      local_38 = *param_2;
      if (local_38 != 0) {
        (**(code **)(*(long *)(local_38 + 0x48) + 0x10))();
      }
      FUN__text__00303220(lVar4,&local_38,uVar2 >> 0x20,(int)uVar5 + (int)((ulong)uVar5 >> 0x20) * 6
                          ,param_4,param_5);
      if (local_38 != 0) {
        (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
        local_38 = 0;
      }
      (**(code **)(*plVar3 + 0x18))(plVar3);
    }
  }
  return;
}


