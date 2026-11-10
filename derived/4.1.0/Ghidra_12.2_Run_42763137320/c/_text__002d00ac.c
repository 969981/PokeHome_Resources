/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002d00ac; name: FUN_.text__002d00ac
 */


void FUN__text__002d00ac(long param_1)

{
  long lVar1;
  
  if (*(long *)(param_1 + 0xa0) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0xa0) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0xa0) = 0;
  }
  if (*(long *)(param_1 + 0x90) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x90) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x90) = 0;
  }
  if (*(long *)(param_1 + 0x88) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x88) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x88) = 0;
  }
  if (*(long *)(param_1 + 0x80) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x80) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x80) = 0;
  }
  lVar1 = *(long *)(param_1 + 0x50);
  if (lVar1 == 0) {
    return;
  }
  *(long *)(param_1 + 0x58) = lVar1;
                    /* WARNING: Could not recover jumptable at 0x002d0144. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x68) + 0x18))
            (*(long **)(param_1 + 0x68),lVar1,*(long *)(param_1 + 0x60) - lVar1,4);
  return;
}


