/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006ed284; name: FUN_.text__006ed284
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__006ed284(long param_1,long param_2,long param_3,long param_4,long param_5,
                        undefined8 param_6)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  
  puVar1 = _DAT_008a6cf8;
  lVar2 = (*(code *)*_DAT_008a6cf8)(*(undefined8 *)(param_4 + 8));
  lVar3 = (*(code *)*puVar1)(*(undefined8 *)(param_2 + 8));
                    /* WARNING: Could not recover jumptable at 0x006ed300. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*_DAT_008a6ed0)
            (*(undefined8 *)(param_1 + 0xb0),lVar2 + param_5,lVar3 + param_3,param_6,0);
  return;
}


