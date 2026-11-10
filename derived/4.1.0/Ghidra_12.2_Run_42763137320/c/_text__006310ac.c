/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006310ac; name: FUN_.text__006310ac
 */


void FUN__text__006310ac(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)param_1[0x5e];
  param_1[0x5e] = 0;
  *param_1 = 0x8988f0;
  param_1[9] = 0x898928;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1);
    (**(code **)(*(long *)param_1[0x5f] + 0x18))
              ((long *)param_1[0x5f],puVar1,param_1[0x60],param_1[0x61]);
    puVar1 = (undefined8 *)param_1[0x5e];
    param_1[0x5e] = 0;
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00631148. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)param_1[0x5f] + 0x18))
                ((long *)param_1[0x5f],puVar1,param_1[0x60],param_1[0x61]);
      return;
    }
  }
  return;
}


