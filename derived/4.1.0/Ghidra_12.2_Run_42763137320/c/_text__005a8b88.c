/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005a8b88; name: FUN_.text__005a8b88
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__005a8b88(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = _DAT_008a0448;
  FUN__text__006f5658(param_1 + 0x4208,_DAT_008a0448);
  FUN__text__006f5658(param_1 + 0x4260,uVar1);
  lVar2 = *(long *)(param_1 + 0x160);
  *(undefined8 *)(param_1 + 0x160) = 0;
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
  }
  (*(code *)*_DAT_008a5688)(param_1 + 0x1e0);
  lVar2 = *(long *)(param_1 + 0x1d8);
  *(undefined8 *)(param_1 + 0x1d8) = 0;
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
  }
  lVar2 = *(long *)(param_1 + 0x168);
  *(undefined8 *)(param_1 + 0x168) = 0;
  if (lVar2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x005a8c20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
  return;
}


