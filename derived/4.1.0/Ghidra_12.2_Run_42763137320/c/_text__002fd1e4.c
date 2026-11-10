/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002fd1e4; name: FUN_.text__002fd1e4
 */


void FUN__text__002fd1e4(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1);
    (**(code **)(*(long *)param_1[1] + 0x18))((long *)param_1[1],puVar1,0x50,8);
    param_1[1] = 0;
    *param_1 = 0;
  }
  param_1[1] = param_3;
  *param_1 = param_2;
  return;
}


