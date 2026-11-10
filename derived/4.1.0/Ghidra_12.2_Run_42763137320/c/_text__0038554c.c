/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0038554c; name: FUN_.text__0038554c
 */


void FUN__text__0038554c(undefined8 *param_1)

{
  long lVar1;
  code *pcVar2;
  
  if (param_1[0x145] != 0) {
    (**(code **)(*(long *)(param_1[0x145] + 0x48) + 0x18))();
    param_1[0x145] = 0;
  }
  if (param_1[0x144] != 0) {
    (**(code **)(*(long *)(param_1[0x144] + 0x48) + 0x18))();
    param_1[0x144] = 0;
  }
  lVar1 = param_1[0x13e];
  if (lVar1 != 0) {
    param_1[0x13f] = lVar1;
    (**(code **)(*(long *)param_1[0x141] + 0x18))
              ((long *)param_1[0x141],lVar1,param_1[0x140] - lVar1,1);
  }
  pcVar2 = (code *)param_1[0x12f];
  if (pcVar2 != (code *)0x0) {
    param_1[0x131] = 0;
    param_1[0x130] = 0;
    param_1[0x12f] = 0;
    param_1[0x12e] = 0;
    (*pcVar2)(param_1 + 0x132);
  }
  if (param_1[0x12d] != 0) {
    (**(code **)(*(long *)(param_1[0x12d] + 0x48) + 0x18))();
    param_1[0x12d] = 0;
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


