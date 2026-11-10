/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0016bedc; name: FUN_.text__0016bedc
 */


void FUN__text__0016bedc(long param_1)

{
  long lVar1;
  
  if (*(long *)(param_1 + 0x310) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x310) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x310) = 0;
  }
  if (*(long *)(param_1 + 0x308) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x308) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x308) = 0;
  }
  lVar1 = *(long *)(param_1 + 0x2e8);
  *(undefined8 *)(param_1 + 0x2e8) = 0;
  if (lVar1 != 0) {
    (**(code **)(**(long **)(param_1 + 0x2f0) + 0x18))
              (*(long **)(param_1 + 0x2f0),lVar1,*(undefined8 *)(param_1 + 0x2f8),
               *(undefined8 *)(param_1 + 0x300));
  }
  lVar1 = *(long *)(param_1 + 0x2c8);
  *(undefined8 *)(param_1 + 0x2c8) = 0;
  if (lVar1 == 0) {
    return;
  }
  FUN__text__0016f2b4(lVar1);
                    /* WARNING: Could not recover jumptable at 0x0016bf74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x2d0) + 0x18))
            (*(long **)(param_1 + 0x2d0),lVar1,*(undefined8 *)(param_1 + 0x2d8),
             *(undefined8 *)(param_1 + 0x2e0));
  return;
}


