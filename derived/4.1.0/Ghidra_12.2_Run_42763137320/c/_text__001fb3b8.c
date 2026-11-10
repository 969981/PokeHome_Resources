/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001fb3b8; name: FUN_.text__001fb3b8
 */


void FUN__text__001fb3b8(long param_1,uint param_2)

{
  undefined4 *puVar1;
  long lVar2;
  undefined4 uVar3;
  long lVar4;
  undefined4 local_40 [2];
  long local_38;
  long local_30;
  long local_28;
  
  if (3 < param_2) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl();
  }
  if (*(int *)(param_1 + (ulong)param_2 * 4 + 0xa8) != 0) {
    if (*(uint *)(param_1 + 0xe0) == 0xffffffff) {
      FUN__text__0013e288(*(undefined8 *)(param_1 + 0xd0),param_2,1);
      *(uint *)(param_1 + 0xe0) = param_2;
      FUN__text__0013dbf8(*(undefined8 *)(param_1 + 0xd0));
      return;
    }
    if (*(uint *)(param_1 + 0xe0) != param_2) {
      if ((param_2 < 4) && (*(uint *)(param_1 + 0xe0) < 4)) {
        lVar2 = param_1 + 0xa8;
        lVar4 = (ulong)*(uint *)(param_1 + 0xe0) * 4;
        puVar1 = (undefined4 *)(lVar2 + (ulong)param_2 * 4);
        uVar3 = *(undefined4 *)(lVar2 + lVar4);
        *(undefined4 *)(lVar2 + lVar4) = *puVar1;
        *puVar1 = uVar3;
        if (*(int *)(param_1 + 0xe0) != -1) {
          FUN__text__0013e288(*(undefined8 *)(param_1 + 0xd0),*(int *)(param_1 + 0xe0),0);
        }
        *(undefined4 *)(param_1 + 0xe0) = 0xffffffff;
        FUN__text__0013dbf8(*(undefined8 *)(param_1 + 0xd0));
        local_40[0] = *puVar1;
        local_38 = *(long *)(param_1 + 0xa0);
        if (local_38 != 0) {
          (**(code **)(*(long *)(local_38 + 0x48) + 0x10))();
        }
        if (DAT_008e2080 != 0) {
          local_30 = DAT_008e2080;
          local_28 = *(long *)(DAT_008e2080 + 0x390);
          if (local_28 != 0) {
            FUN__text__0013f4cc(*(undefined8 *)(param_1 + 0xd8),local_40);
            if (local_38 != 0) {
              (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
            }
            FUN__text__0013dbf8(*(undefined8 *)(param_1 + 0xd0));
            return;
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl();
    }
  }
  return;
}


