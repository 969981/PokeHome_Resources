/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005f504c; name: FUN_.text__005f504c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__005f504c(long *param_1)

{
  long lVar1;
  
  lVar1 = _DAT_008a03f0 + 0xb0;
  *param_1 = _DAT_008a03f0 + 0x10;
  param_1[9] = lVar1;
  if (param_1[0x11] != 0) {
    (**(code **)(*(long *)(param_1[0x11] + 0x48) + 0x18))();
    param_1[0x11] = 0;
  }
  if (param_1[0xf] != 0) {
    (**(code **)(*(long *)(param_1[0xf] + 0x48) + 0x18))();
    param_1[0xf] = 0;
  }
  lVar1 = param_1[0xb];
  param_1[0xb] = 0;
  if (lVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x005f50c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[0xc] + 0x18))((long *)param_1[0xc],lVar1,param_1[0xd],param_1[0xe]);
  return;
}


