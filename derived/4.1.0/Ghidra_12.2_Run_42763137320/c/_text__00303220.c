/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00303220; name: FUN_.text__00303220
 */


void FUN__text__00303220(long param_1,undefined8 *param_2,uint param_3,uint param_4,uint param_5,
                        uint param_6)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  
  if ((3 < param_5) || (3 < param_6)) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl();
  }
  if ((0x1d < param_4) || (*(uint *)(param_1 + 0x700fdc) <= param_3)) {
    return;
  }
  lVar2 = param_1 + (ulong)param_3 * 0x5fa0 + (ulong)param_4 * 0x330 + (ulong)param_6 * 0xc;
  uVar1 = FUN__text__00306bc4(*param_2);
  FUN__text__00633304(uVar1,param_5,*(undefined4 *)(lVar2 + 0x354));
  FUN__text__00632a04(uVar1,param_5,*(undefined4 *)(lVar2 + 0x358));
  FUN__text__00632cb4(uVar1,param_5,*(undefined4 *)(lVar2 + 0x35c));
  lVar2 = *(long *)(DAT_008e15a0 + 0x80);
  if (lVar2 == 0) {
    FUN__text__00205890(0,uVar1);
    return;
  }
  plVar3 = (long *)(lVar2 + 0x48);
  (**(code **)(*plVar3 + 0x10))(plVar3);
  FUN__text__00205890(lVar2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x003032fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x18))(plVar3);
  return;
}


