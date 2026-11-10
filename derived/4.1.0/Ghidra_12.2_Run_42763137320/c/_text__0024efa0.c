/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0024efa0; name: FUN_.text__0024efa0
 */


void FUN__text__0024efa0(long param_1,long *param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  long local_38;
  
  lVar3 = *(long *)(param_1 + 0x60);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl();
  }
  local_38 = *param_2;
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x10))();
  }
  FUN__text__0019b868(lVar3,&local_38,param_3,param_4);
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    local_38 = 0;
  }
  lVar3 = *(long *)(DAT_008e15a0 + 0x80);
  if (lVar3 == 0) {
    uVar1 = FUN__text__00306bc4(*param_2);
    FUN__text__00205890(0,uVar1);
    return;
  }
  plVar2 = (long *)(lVar3 + 0x48);
  (**(code **)(*plVar2 + 0x10))(plVar2);
  uVar1 = FUN__text__00306bc4(*param_2);
  FUN__text__00205890(lVar3,uVar1);
  (**(code **)(*plVar2 + 0x18))(plVar2);
  return;
}


