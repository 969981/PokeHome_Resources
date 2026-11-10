/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006ed12c; name: FUN_.text__006ed12c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__006ed12c(long param_1,undefined4 param_2,undefined8 *param_3,undefined8 param_4,
                        undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0xb0);
  uVar1 = FUN__text__006f23c4(*param_3,param_3[1]);
                    /* WARNING: Could not recover jumptable at 0x006ed178. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*_DAT_008a6ea8)(uVar2,param_2,uVar1,param_5);
  return;
}


