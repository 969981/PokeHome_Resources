/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001a0ee0; name: FUN_.text__001a0ee0
 */


undefined4 FUN__text__001a0ee0(long param_1,long *param_2,long param_3)

{
  undefined4 uVar1;
  ulong uVar2;
  undefined4 uVar3;
  long lVar4;
  long local_18;
  
  if ((*(long *)(param_1 + 0x18) == 0) ||
     (lVar4 = *(long *)(*(long *)(param_1 + 0x18) + 0x10), lVar4 == 0)) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl();
  }
  local_18 = *param_2;
  if (local_18 != 0) {
    (**(code **)(*(long *)(local_18 + 0x48) + 0x10))();
  }
  FUN__text__00194ca0(lVar4,&local_18,param_3);
  if (local_18 != 0) {
    (**(code **)(*(long *)(local_18 + 0x48) + 0x18))();
    local_18 = 0;
  }
  uVar2 = FUN__text__00306588(*param_2);
  if ((uVar2 & 1) != 0) {
    return 8;
  }
  uVar2 = FUN__text__00306a08(*param_2,2);
  if ((uVar2 & 1) != 0) {
    return 1;
  }
  uVar2 = FUN__text__00307ba4(*param_2);
  if ((uVar2 & 1) != 0) {
    return 3;
  }
  uVar2 = FUN__text__00196b90(param_2);
  if ((uVar2 & 1) == 0) {
    return 4;
  }
  uVar3 = *(undefined4 *)(param_3 + 4);
  uVar1 = FUN__text__00191374(param_3 + 8);
  uVar2 = thunk_FUN__text__00321ad0(uVar3,uVar1,param_2);
  uVar3 = 8;
  if ((uVar2 & 2) != 0) {
    uVar3 = 2;
  }
  return uVar3;
}


