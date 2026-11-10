/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005a55c8; name: FUN_.text__005a55c8
 */


void FUN__text__005a55c8(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  
  param_1[2] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  plVar2 = *(long **)(DAT_008e1c28 + 0x10);
  if (plVar2 != (long *)0x0) {
    lVar3 = *plVar2;
    if (lVar3 == 0) {
      *param_1 = 0;
      lVar3 = plVar2[1];
    }
    else {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
      lVar1 = *param_1;
      *param_1 = lVar3;
      if (lVar1 != 0) {
        (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
      }
      lVar3 = plVar2[1];
    }
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
    }
    lVar1 = param_1[1];
    param_1[1] = lVar3;
    if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x005a5660. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
      return;
    }
  }
  return;
}


