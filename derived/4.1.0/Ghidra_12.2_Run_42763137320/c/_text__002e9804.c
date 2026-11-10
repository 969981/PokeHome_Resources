/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002e9804; name: FUN_.text__002e9804
 */


void FUN__text__002e9804(undefined8 *param_1)

{
  long lVar1;
  code *pcVar2;
  
  if (param_1[0x136] != 0) {
    (**(code **)(*(long *)(param_1[0x136] + 0x48) + 0x18))();
    param_1[0x136] = 0;
  }
  if (param_1[0x135] != 0) {
    (**(code **)(*(long *)(param_1[0x135] + 0x48) + 0x18))();
    param_1[0x135] = 0;
  }
  lVar1 = param_1[0x12f];
  if (lVar1 != 0) {
    param_1[0x130] = lVar1;
    (**(code **)(*(long *)param_1[0x132] + 0x18))
              ((long *)param_1[0x132],lVar1,param_1[0x131] - lVar1,1);
  }
  pcVar2 = (code *)param_1[0x120];
  if (pcVar2 != (code *)0x0) {
    param_1[0x122] = 0;
    param_1[0x121] = 0;
    param_1[0x120] = 0;
    param_1[0x11f] = 0;
    (*pcVar2)(param_1 + 0x123);
  }
  if (param_1[0x11e] != 0) {
    (**(code **)(*(long *)(param_1[0x11e] + 0x48) + 0x18))();
    param_1[0x11e] = 0;
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


