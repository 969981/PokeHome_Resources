/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006f296c; name: FUN_.text__006f296c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__006f296c(undefined8 param_1,byte *param_2)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  undefined8 uVar4;
  int iVar5;
  undefined4 uVar6;
  
  (*(code *)*_DAT_008a7580)();
  uVar1 = *(ushort *)(param_2 + 6);
  uVar2 = uVar1 >> 4 & 3;
  if (uVar2 == 2) {
    iVar5 = 5;
    if ((uVar1 & 3) != 2) {
      iVar5 = 1;
    }
    iVar3 = 3;
    if ((uVar1 & 3) != 1) {
      iVar3 = iVar5;
    }
  }
  else {
    if (uVar2 != 1) goto LAB__text__006f2b28;
    iVar3 = 2;
    if ((uVar1 & 3) != 1) {
      iVar3 = (uint)((uVar1 & 3) == 2) << 2;
    }
  }
  uVar1 = uVar1 >> 2 & 3;
  if (uVar1 == 1) {
    uVar4 = 0;
  }
  else {
    if (uVar1 != 2) {
LAB__text__006f2b28:
      nn::detail::UnexpectedDefaultImpl();
      return;
    }
    uVar4 = 1;
  }
  (*(code *)*_DAT_008a7588)(param_1,iVar3,uVar4);
  (*DAT_00c60618)(param_1,*(undefined4 *)((ulong)*param_2 * 4 + 0x77f198),
                  *(undefined4 *)((ulong)param_2[1] * 4 + 0x77f198),
                  *(undefined4 *)((ulong)param_2[2] * 4 + 0x77f198));
  (*(code *)*_DAT_008a7598)(*(undefined4 *)(param_2 + 8),*(undefined4 *)(param_2 + 0xc),param_1);
  (*(code *)*_DAT_008a75a0)(*(undefined4 *)(param_2 + 0x10),param_1);
  (*DAT_00c60630)(param_1,*(ushort *)(param_2 + 6) >> 7 & 1,
                  *(undefined4 *)((ulong)param_2[3] * 4 + 0x724fd0));
  (*DAT_00c60638)(param_1,(ulong)param_2[4] * 0x10 + 0x77f1d0);
  uVar1 = *(ushort *)(param_2 + 6);
  if ((uVar1 >> 6 & 1) != 0) {
    uVar6 = NEON_ucvtf((uint)param_2[5]);
    (*(code *)*_DAT_008a75c8)(uVar6,param_1);
    uVar1 = *(ushort *)(param_2 + 6);
  }
                    /* WARNING: Could not recover jumptable at 0x006f2b24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_00c60658)(param_1,*(undefined4 *)((ulong)(uVar1 >> 8 & 3) * 4 + 0x77f1c4));
  return;
}


