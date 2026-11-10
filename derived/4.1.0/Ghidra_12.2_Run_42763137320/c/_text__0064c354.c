/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0064c354; name: FUN_.text__0064c354
 */


void FUN__text__0064c354(long param_1)

{
  undefined8 *puVar1;
  
  if (*(long *)(param_1 + 0xce0) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0xce0) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0xce0) = 0;
  }
  nn::os::FinalizeMutex((MutexType *)(param_1 + 0xcc0));
  puVar1 = *(undefined8 **)(param_1 + 0xca0);
  *(undefined8 *)(param_1 + 0xca0) = 0;
  if (puVar1 == (undefined8 *)0x0) {
    return;
  }
  (**(code **)*puVar1)(puVar1);
                    /* WARNING: Could not recover jumptable at 0x0064c3c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0xca8) + 0x18))
            (*(long **)(param_1 + 0xca8),puVar1,*(undefined8 *)(param_1 + 0xcb0),
             *(undefined8 *)(param_1 + 0xcb8));
  return;
}


