/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001be228; name: FUN_.text__001be228
 */


void FUN__text__001be228(long param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long local_50;
  undefined4 local_44;
  long local_28;
  
  lVar2 = *(long *)(param_1 + 0x18);
  if ((lVar2 != 0) && (lVar4 = *(long *)(lVar2 + 0x10), lVar4 != 0)) {
    lVar2 = *(long *)(lVar2 + 0x250);
    local_28 = lVar2;
    if (lVar2 != 0) {
      plVar3 = (long *)(lVar2 + 0x48);
      (**(code **)(*plVar3 + 0x10))(plVar3);
      local_44 = 0;
      local_50 = lVar2;
      (**(code **)(*plVar3 + 0x10))(plVar3);
      uVar1 = FUN__text__001949dc(lVar4,&local_50,&local_44,param_2,0);
      if (local_50 != 0) {
        (**(code **)(*(long *)(local_50 + 0x48) + 0x18))();
        local_50 = 0;
      }
      if ((uVar1 & 1) == 0) {
        lVar2 = 0;
      }
      else {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
      FUN__text__001ad488(*(undefined8 *)(param_1 + 0x4d0),param_2);
      FUN__text__001a1914(*(undefined8 *)(param_1 + 0x38),&local_28);
      if (lVar2 != 0) {
        (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
      }
      if (local_28 != 0) {
        (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl();
}


