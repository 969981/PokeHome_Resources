/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0025e354; name: FUN_.text__0025e354
 */


void FUN__text__0025e354(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  long local_18;
  
  if (*(char *)(param_1 + 0x6f0) != '\0') {
    return;
  }
  lVar5 = *(long *)(param_1 + 0x640);
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl();
  }
  uVar2 = *(undefined4 *)(param_1 + 0x6ec);
  local_18 = *(long *)(param_1 + 0xfe0);
  if (local_18 != 0) {
    (**(code **)(*(long *)(local_18 + 0x48) + 0x10))();
  }
  FUN__text__0024efa0(lVar5,&local_18,param_1 + 0x1004,uVar2);
  if (local_18 != 0) {
    (**(code **)(*(long *)(local_18 + 0x48) + 0x18))();
  }
  iVar3 = *(int *)(param_1 + 0x1004);
  lVar5 = *(long *)(param_1 + 0xfe0);
  iVar1 = 3;
  if (iVar3 != 0) {
    iVar1 = iVar3;
  }
  *(bool *)(param_1 + 0x1008) = iVar3 == 0;
  *(int *)(param_1 + 0x1000) = iVar1;
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  uVar4 = FUN__text__00306a08(lVar5,2);
  if ((uVar4 & 1) == 0) {
    FUN__text__00327990(*(undefined4 *)(param_1 + 0x1000));
    if (*(uint *)(param_1 + 0x6e8) < 4) {
                    /* WARNING: Could not emulate address calculation at 0x0025e438 */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&UNK__text__0025e444 +
                (ulong)*(byte *)((ulong)*(uint *)(param_1 + 0x6e8) + 0x72bf9a) * 4))();
      return;
    }
  }
  (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
  return;
}


