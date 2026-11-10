/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0015cb00; name: FUN_.text__0015cb00
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0015cb00(long *param_1)

{
  long lVar1;
  
  lVar1 = _DAT_008a03a0 + 0xb0;
  *param_1 = _DAT_008a03a0 + 0x10;
  param_1[9] = lVar1;
  if (*(int *)((long)param_1 + 0x184) != -1) {
    FUN__text__00161470(DAT_008e1550);
  }
  if (param_1[0x37] != 0) {
    (**(code **)(*(long *)(param_1[0x37] + 0x48) + 0x18))();
    param_1[0x37] = 0;
  }
  if (param_1[0x36] != 0) {
    (**(code **)(*(long *)(param_1[0x36] + 0x48) + 0x18))();
    param_1[0x36] = 0;
  }
  if (param_1[0x35] != 0) {
    (**(code **)(*(long *)(param_1[0x35] + 0x48) + 0x18))();
    param_1[0x35] = 0;
  }
  if (param_1[0x34] != 0) {
    (**(code **)(*(long *)(param_1[0x34] + 0x48) + 0x18))();
    param_1[0x34] = 0;
  }
  if (param_1[0x32] != 0) {
    (**(code **)(*(long *)(param_1[0x32] + 0x48) + 0x18))();
    param_1[0x32] = 0;
  }
  FUN__text__0068e57c(param_1 + 0x24);
  *param_1 = 0x8982a8;
  param_1[9] = 0x898348;
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
                    /* WARNING: Could not recover jumptable at 0x0015cc30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[0xc] + 0x18))((long *)param_1[0xc],lVar1,param_1[0xd],param_1[0xe]);
  return;
}


