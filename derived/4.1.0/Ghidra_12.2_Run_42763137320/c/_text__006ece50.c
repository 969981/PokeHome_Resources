/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006ece50; name: FUN_.text__006ece50
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__006ece50(long param_1,long *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  
  puVar1 = _DAT_008a6e00;
  uVar3 = (ulong)*(byte *)((long)param_2 + 0x25);
  if (uVar3 != 0) {
    lVar2 = *param_2;
    do {
      (*(code *)*puVar1)(*(undefined8 *)(param_1 + 0xb0),lVar2);
      lVar2 = lVar2 + 8;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  (*(code *)*_DAT_008a6e08)(*(undefined8 *)(param_1 + 0xb0),(long)param_2 + 0xc);
  (*(code *)*_DAT_008a6e10)(*(undefined8 *)(param_1 + 0xb0),param_2 + 1);
                    /* WARNING: Could not recover jumptable at 0x006ecef0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*_DAT_008a6e18)(*(undefined8 *)(param_1 + 0xb0),param_2 + 2);
  return;
}


