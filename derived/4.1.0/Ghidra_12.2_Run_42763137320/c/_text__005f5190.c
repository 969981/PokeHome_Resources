/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005f5190; name: FUN_.text__005f5190
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__005f5190(long *param_1)

{
  long lVar1;
  
  lVar1 = _DAT_008a03f0 + 0xb0;
  param_1[-9] = _DAT_008a03f0 + 0x10;
  *param_1 = lVar1;
  if (param_1[8] != 0) {
    (**(code **)(*(long *)(param_1[8] + 0x48) + 0x18))();
    param_1[8] = 0;
  }
  if (param_1[6] != 0) {
    (**(code **)(*(long *)(param_1[6] + 0x48) + 0x18))();
    param_1[6] = 0;
  }
  lVar1 = param_1[2];
  param_1[2] = 0;
  if (lVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x005f520c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[3] + 0x18))((long *)param_1[3],lVar1,param_1[4],param_1[5]);
  return;
}


