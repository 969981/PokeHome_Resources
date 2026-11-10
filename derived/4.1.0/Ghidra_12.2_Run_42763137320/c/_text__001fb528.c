/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001fb528; name: FUN_.text__001fb528
 */


uint FUN__text__001fb528(undefined8 param_1,long *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  uint uVar2;
  long lVar3;
  long local_40;
  long local_38;
  
  if ((DAT_008e2080 == 0) || (lVar3 = *(long *)(DAT_008e2080 + 0x70), lVar3 == 0)) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl();
  }
  uVar1 = FUN__text__001933c8(lVar3);
  local_38 = *param_2;
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x10))();
  }
  FUN__text__0019485c(lVar3,&local_38,param_3);
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    local_38 = 0;
  }
  lVar3 = FUN__text__00306bc4(*param_2);
  uVar2 = FUN__text__003069e8(*param_2,uVar1);
  local_40 = lVar3;
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))((long *)(lVar3 + 0x48));
  }
  FUN__text__005fc7ec(&local_40,uVar1);
  if (local_40 != 0) {
    (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
  }
  return (uVar2 ^ 0xffffffff) & 1;
}


