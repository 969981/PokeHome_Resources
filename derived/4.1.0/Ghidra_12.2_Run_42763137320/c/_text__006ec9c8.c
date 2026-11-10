/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006ec9c8; name: FUN_.text__006ec9c8
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__006ec9c8(long param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                        undefined4 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0xb0);
  uVar1 = FUN__text__006f2350(param_2);
                    /* WARNING: Could not recover jumptable at 0x006eca2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*_DAT_008a6dc0)(uVar2,uVar1,param_4,param_3,param_6,param_5);
  return;
}


