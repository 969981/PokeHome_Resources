/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003d13e8; name: FUN_.text__003d13e8
 */


void FUN__text__003d13e8(long *param_1,long param_2,long param_3,undefined4 param_4)

{
  long lVar1;
  
  param_1[2] = param_2;
  param_1[3] = param_3;
  *(undefined4 *)(param_1 + 4) = param_4;
  param_1[6] = param_2;
  param_1[0x58] = param_2;
  lVar1 = FUN__text__006b4514(param_3);
  param_1[0xb2] = *(long *)(*(long *)(lVar1 + 0x18) + (long)(int)param_1[4] * 0x10 + 8);
                    /* WARNING: Could not recover jumptable at 0x003d1438. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x10))(param_1);
  return;
}


