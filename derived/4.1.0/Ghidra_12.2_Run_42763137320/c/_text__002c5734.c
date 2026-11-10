/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002c5734; name: FUN_.text__002c5734
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__002c5734(long *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = _DAT_008a2560 + 0x10;
  FUN__text__002c62fc(param_1[1]);
  puVar1 = (undefined8 *)param_1[1];
  param_1[1] = 0;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1);
    (**(code **)(*(long *)param_1[2] + 0x18))((long *)param_1[2],puVar1,param_1[3],param_1[4]);
  }
  FUN__text__002c5ba4(param_1[5]);
  puVar1 = (undefined8 *)param_1[5];
  param_1[5] = 0;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1);
    (**(code **)(*(long *)param_1[6] + 0x18))((long *)param_1[6],puVar1,param_1[7],param_1[8]);
    puVar1 = (undefined8 *)param_1[5];
    param_1[5] = 0;
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1);
      (**(code **)(*(long *)param_1[6] + 0x18))((long *)param_1[6],puVar1,param_1[7],param_1[8]);
    }
  }
  puVar1 = (undefined8 *)param_1[1];
  param_1[1] = 0;
  if (puVar1 == (undefined8 *)0x0) {
    return;
  }
  (**(code **)*puVar1)(puVar1);
                    /* WARNING: Could not recover jumptable at 0x002c5838. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[2] + 0x18))((long *)param_1[2],puVar1,param_1[3],param_1[4]);
  return;
}


