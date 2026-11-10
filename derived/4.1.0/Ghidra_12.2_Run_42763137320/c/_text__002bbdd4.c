/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002bbdd4; name: FUN_.text__002bbdd4
 */


void FUN__text__002bbdd4(undefined8 *param_1)

{
  long lVar1;
  code *pcVar2;
  
  *param_1 = 0x87a460;
  param_1[9] = 0x87a4c0;
  param_1[10] = 0x87a500;
  pcVar2 = (code *)param_1[0xa9ef];
  if (pcVar2 != (code *)0x0) {
    param_1[0xa9f0] = 0;
    param_1[0xa9f1] = 0;
    param_1[0xa9ee] = 0;
    param_1[0xa9ef] = 0;
    (*pcVar2)(param_1 + 0xa9f2);
  }
  lVar1 = param_1[0xa9ec];
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
    param_1[0xa9ec] = 0;
  }
  *param_1 = 0x867b90;
  param_1[9] = 0x867bd0;
  param_1[10] = 0x867c10;
  if (param_1[0xb] != 0) {
    (**(code **)(*(long *)(param_1[0xb] + 0x48) + 0x18))();
    param_1[0xb] = 0;
  }
  return;
}


