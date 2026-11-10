/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001be4f8; name: FUN_.text__001be4f8
 */


void FUN__text__001be4f8(long param_1)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long local_28;
  
  lVar4 = *(long *)(param_1 + 0x18);
  if (((lVar4 != 0) && (*(long *)(lVar4 + 0x48) != 0)) &&
     (lVar5 = *(long *)(lVar4 + 0x158), lVar5 != 0)) {
    lVar3 = *(long *)(lVar4 + 0x10);
    plVar2 = (long *)(lVar5 + 0x48);
    (**(code **)(*plVar2 + 0x10))(plVar2);
    if (lVar3 != 0) {
      local_28 = lVar5;
      (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))(plVar2);
      uVar1 = FUN__text__00194730(lVar3,&local_28,*(undefined8 *)(lVar4 + 0x48));
      if (local_28 != 0) {
        (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
        local_28 = 0;
      }
      if ((uVar1 & 1) != 0) {
        FUN__text__001be228(param_1,*(undefined8 *)(lVar4 + 0x48));
      }
      (**(code **)(*plVar2 + 0x18))(plVar2);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl();
}


