/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006ed17c; name: FUN_.text__006ed17c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__006ed17c(long param_1,long *param_2)

{
  long lVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  (*(code *)*_DAT_008a6eb0)
            ((float)(double)param_2[4],(float)(double)param_2[5],*(undefined8 *)(param_1 + 0xb0));
  puVar3 = _DAT_008a6eb8;
  (*(code *)*_DAT_008a6eb8)(*(undefined8 *)(param_1 + 0xb0),0,1,param_2 + 2);
  puVar4 = _DAT_008a6ec0;
  (*(code *)*_DAT_008a6ec0)(*(undefined8 *)(param_1 + 0xb0),0,1,param_2 + 6);
  if ((int)param_2[1] < 2) {
    return;
  }
  uVar2 = (int)param_2[1] - 1;
  lVar1 = *param_2 + (ulong)uVar2 * 0x10;
  (*(code *)*puVar3)(*(undefined8 *)(param_1 + 0xb0),1,uVar2);
  (*(code *)*_DAT_008a6ec8)(*(undefined8 *)(param_1 + 0xb0),1,uVar2,lVar1);
                    /* WARNING: Could not recover jumptable at 0x006ed26c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar4)(*(undefined8 *)(param_1 + 0xb0),1,uVar2,lVar1 + (ulong)uVar2 * 8);
  return;
}


