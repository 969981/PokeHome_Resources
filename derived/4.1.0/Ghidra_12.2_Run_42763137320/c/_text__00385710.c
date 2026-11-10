/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00385710; name: FUN_.text__00385710
 */


void FUN__text__00385710(undefined8 *param_1)

{
  long lVar1;
  code *pcVar2;
  
  if (param_1[0x13c] != 0) {
    (**(code **)(*(long *)(param_1[0x13c] + 0x48) + 0x18))();
    param_1[0x13c] = 0;
  }
  if (param_1[0x13b] != 0) {
    (**(code **)(*(long *)(param_1[0x13b] + 0x48) + 0x18))();
    param_1[0x13b] = 0;
  }
  lVar1 = param_1[0x135];
  if (lVar1 != 0) {
    param_1[0x136] = lVar1;
    (**(code **)(*(long *)param_1[0x138] + 0x18))
              ((long *)param_1[0x138],lVar1,param_1[0x137] - lVar1,1);
  }
  pcVar2 = (code *)param_1[0x126];
  if (pcVar2 != (code *)0x0) {
    param_1[0x128] = 0;
    param_1[0x127] = 0;
    param_1[0x126] = 0;
    param_1[0x125] = 0;
    (*pcVar2)(param_1 + 0x129);
  }
  if (param_1[0x124] != 0) {
    (**(code **)(*(long *)(param_1[0x124] + 0x48) + 0x18))();
    param_1[0x124] = 0;
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


