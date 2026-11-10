/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002008b8; name: FUN_.text__002008b8
 */


void FUN__text__002008b8(long *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  int local_50 [2];
  long local_48;
  long lStack_40;
  undefined8 local_38;
  
  uVar1 = *param_2;
  uVar2 = uVar1 - 3;
  lVar3 = *param_1;
  if (uVar1 < 3) {
    if ((uVar1 != 0) ||
       (local_50[0] = *(int *)(lVar3 + (ulong)*(uint *)(param_1 + 1) * 4 + 0xa8), local_50[0] == 0))
    {
      FUN__text__0013f43c(*(undefined8 *)(lVar3 + 0xd8));
      return;
    }
  }
  else {
    if (((int)uVar2 < 0) || (0x398 < uVar2)) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl();
    }
    local_50[0] = *(int *)(lVar3 + (ulong)uVar2 * 4 + 0x2b470);
  }
  lVar4 = *(long *)(lVar3 + 0xa0);
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  lStack_40 = param_1[2];
  local_38 = *(undefined8 *)(lStack_40 + 0x390);
  local_48 = lVar4;
  FUN__text__0013f4cc(*(undefined8 *)(lVar3 + 0xd8),local_50);
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
  }
  return;
}


