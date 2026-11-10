/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00600ce8; name: FUN_.text__00600ce8
 */


void FUN__text__00600ce8(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  *param_1 = 0;
  if (puVar1 == (undefined8 *)0x0) {
    return;
  }
  (**(code **)*puVar1)(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00600d30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[1] + 0x18))((long *)param_1[1],puVar1,param_1[2],param_1[3]);
  return;
}


