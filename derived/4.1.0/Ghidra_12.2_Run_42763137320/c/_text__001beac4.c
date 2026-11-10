/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001beac4; name: FUN_.text__001beac4
 */


void FUN__text__001beac4(long param_1)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = *(long *)(*(long *)(param_1 + 8) + 0x2d0);
  if (lVar1 == 0) {
    FUN__text__001beb50(param_1);
    FUN__text__001be704(*(undefined8 *)(*(long *)(param_1 + 0x38) + 0x68));
    FUN__text__001be704(*(undefined8 *)(*(long *)(param_1 + 0x38) + 0x88));
    return;
  }
  plVar2 = (long *)(lVar1 + 0x48);
  (**(code **)(*plVar2 + 0x10))(plVar2);
  FUN__text__001beb50(param_1);
  FUN__text__001be704(*(undefined8 *)(*(long *)(param_1 + 0x38) + 0x68));
  FUN__text__001be704(*(undefined8 *)(*(long *)(param_1 + 0x38) + 0x88));
                    /* WARNING: Could not recover jumptable at 0x001beb24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x18))(plVar2);
  return;
}


