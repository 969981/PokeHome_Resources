/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006a83e8; name: FUN_.text__006a83e8
 */


void FUN__text__006a83e8(long *param_1,undefined8 param_2,undefined8 param_3,int param_4,
                        uint param_5)

{
  uint uVar1;
  long lVar2;
  
  (**(code **)(*param_1 + 0x100))();
  uVar1 = FUN__text__00699b8c(param_2);
  if (param_4 < (int)(uVar1 & 0xffff)) {
    lVar2 = FUN__text__00699ba4(param_2);
    lVar2 = FUN__text__0069e6c0(param_3,lVar2 + (long)param_4 * 0x24);
    (**(code **)(*param_1 + 0x58))(param_1,lVar2);
    param_1[9] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x006a8480. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x20))(param_1,param_5 & 1);
    return;
  }
  return;
}


