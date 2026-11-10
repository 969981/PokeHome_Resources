/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005da60c; name: FUN_.text__005da60c
 */


void FUN__text__005da60c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0xe0);
  *(undefined8 *)(param_1 + 0xe0) = 0;
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
  }
  lVar1 = *(long *)(param_1 + 0xe8);
  *(undefined8 *)(param_1 + 0xe8) = 0;
  if (lVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x005da650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
  return;
}


