/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006a899c; name: FUN_.text__006a899c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__006a899c(long *param_1,undefined8 param_2,undefined8 param_3,long param_4,
                        undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_4 + 0x60);
  FUN__text__006a0f74();
  lVar1 = _DAT_008a69e8;
  param_1[0xc] = lVar2;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *param_1 = lVar1 + 0x10;
  *(undefined4 *)(param_1 + 0x10) = 2;
  FUN__text__006a2c60(param_1,param_2,param_3,param_4,param_5,param_6);
                    /* WARNING: Could not recover jumptable at 0x006a8a34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xe0))(param_1,param_2);
  return;
}


