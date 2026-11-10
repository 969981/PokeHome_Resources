/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004f23f0; name: FUN_.text__004f23f0
 */


void FUN__text__004f23f0(long *param_1)

{
  undefined8 *puVar2;
  undefined8 *puVar1;
  
  if ((int)param_1[0x20] != 0) {
    puVar1 = (undefined8 *)param_1[0x1f];
    do {
      puVar2 = puVar1 + 1;
      (**(code **)(*(long *)*puVar1 + 0x140))();
      puVar1 = puVar2;
    } while (puVar2 != (undefined8 *)(param_1[0x1f] + (ulong)*(uint *)(param_1 + 0x20) * 8));
  }
                    /* WARNING: Could not recover jumptable at 0x004f2448. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x2b0))(param_1);
  return;
}


