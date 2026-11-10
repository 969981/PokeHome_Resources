/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005e8798; name: FUN_.text__005e8798
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__005e8798(long *param_1)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  
  lVar2 = _DAT_008a5b40 + 0x10;
  lVar1 = _DAT_008a5b40 + 0x88;
  param_1[0xb] = _DAT_008a5b40 + 0xb8;
  pcVar3 = (code *)param_1[0x5f];
  *param_1 = lVar2;
  param_1[9] = lVar1;
  if (pcVar3 != (code *)0x0) {
    param_1[0x61] = 0;
    param_1[0x60] = 0;
    param_1[0x5f] = 0;
    param_1[0x5e] = 0;
    (*pcVar3)(param_1 + 0x62);
  }
  pcVar3 = (code *)param_1[0x4f];
  if (pcVar3 != (code *)0x0) {
    param_1[0x51] = 0;
    param_1[0x50] = 0;
    param_1[0x4f] = 0;
    param_1[0x4e] = 0;
    (*pcVar3)(param_1 + 0x52);
  }
  nn::os::FinalizeLightEvent((LightEventType *)(param_1 + 0x4a));
  lVar2 = param_1[0x44];
  param_1[0x44] = 0;
  if (lVar2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x005e8838. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[0x45] + 0x18))
            ((long *)param_1[0x45],lVar2,param_1[0x46],param_1[0x47]);
  return;
}


