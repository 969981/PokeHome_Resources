/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00466054; name: FUN_.text__00466054
 */


void FUN__text__00466054(long *param_1,uint param_2,undefined4 param_3,byte param_4,long param_5)

{
  long lVar1;
  
  lVar1 = FUN__text__004ceab0(param_1 + 0x17,param_5,param_1);
  if (lVar1 != 0) {
    if (*(char *)(lVar1 + (ulong)param_2 * 8 + 0x28) != '\0') {
      return;
    }
    lVar1 = lVar1 + (ulong)param_2 * 8;
    *(undefined4 *)(lVar1 + 0x24) = param_3;
    *(byte *)(lVar1 + 0x29) = param_4 & 1;
  }
  if (param_5 == 0) {
    FUN__text__004cf770(param_1 + 0x17,param_2,param_3,param_4 & 1);
  }
                    /* WARNING: Could not recover jumptable at 0x00466104. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xf8))(param_1,param_2,param_5);
  return;
}


