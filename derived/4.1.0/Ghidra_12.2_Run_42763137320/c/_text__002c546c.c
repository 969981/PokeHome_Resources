/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002c546c; name: FUN_.text__002c546c
 */


void FUN__text__002c546c(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)param_1[0xb];
  param_1[0xb] = 0;
  *param_1 = 0x87abb8;
  param_1[9] = 0x87abf0;
  if (puVar1 == (undefined8 *)0x0) {
    return;
  }
  (**(code **)*puVar1)(puVar1);
                    /* WARNING: Could not recover jumptable at 0x002c54cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[0xc] + 0x18))((long *)param_1[0xc],puVar1,param_1[0xd],param_1[0xe])
  ;
  return;
}


