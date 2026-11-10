/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001438d0; name: FUN_.text__001438d0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__001438d0(int *param_1)

{
  long lVar1;
  
  if (param_1 == (int *)0x0) {
    param_1 = (int *)0x0;
    lVar1 = _DAT_00000008;
  }
  else {
    if (*param_1 != 0x736b6264) {
      param_1 = (int *)0x0;
    }
    lVar1 = *(long *)(param_1 + 2);
  }
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
    param_1[2] = 0;
    param_1[3] = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x0014392c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 4) + 0x18))(*(long **)(param_1 + 4),param_1,0x18,8);
  return;
}


