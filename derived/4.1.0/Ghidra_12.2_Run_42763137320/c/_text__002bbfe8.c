/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002bbfe8; name: FUN_.text__002bbfe8
 */


void FUN__text__002bbfe8(undefined8 *param_1)

{
  long lVar1;
  code *pcVar2;
  
  param_1[-9] = 0x87a460;
  *param_1 = 0x87a4c0;
  param_1[1] = 0x87a500;
  pcVar2 = (code *)param_1[0xa9e6];
  if (pcVar2 != (code *)0x0) {
    param_1[0xa9e7] = 0;
    param_1[0xa9e8] = 0;
    param_1[0xa9e5] = 0;
    param_1[0xa9e6] = 0;
    (*pcVar2)(param_1 + 0xa9e9);
  }
  lVar1 = param_1[0xa9e3];
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
    param_1[0xa9e3] = 0;
  }
  param_1[-9] = 0x867b90;
  *param_1 = 0x867bd0;
  param_1[1] = 0x867c10;
  if (param_1[2] != 0) {
    (**(code **)(*(long *)(param_1[2] + 0x48) + 0x18))();
    param_1[2] = 0;
  }
  return;
}


