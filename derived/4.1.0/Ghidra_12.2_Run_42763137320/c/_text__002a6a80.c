/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002a6a80; name: FUN_.text__002a6a80
 */


void FUN__text__002a6a80(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  plVar2 = (long *)param_1[0xfe];
  param_1[0xfe] = 0;
  if (plVar2 != (long *)0x0) {
    plVar1 = (long *)plVar2[5];
    while (plVar1 != (long *)0x0) {
      lVar3 = *plVar1;
      (**(code **)(*(long *)plVar2[6] + 0x18))((long *)plVar2[6],plVar1,0x20,8);
      plVar1 = (long *)lVar3;
    }
    lVar3 = *plVar2;
    *plVar2 = 0;
    if (lVar3 != 0) {
      (**(code **)(*(long *)plVar2[2] + 0x18))((long *)plVar2[2],lVar3,plVar2[1] << 3,8);
    }
    (**(code **)(*(long *)param_1[0xff] + 0x18))
              ((long *)param_1[0xff],plVar2,param_1[0x100],param_1[0x101]);
  }
  plVar2 = (long *)param_1[0xfa];
  param_1[0xfa] = 0;
  if (plVar2 != (long *)0x0) {
    plVar1 = (long *)plVar2[5];
    while (plVar1 != (long *)0x0) {
      lVar3 = *plVar1;
      (**(code **)(*(long *)plVar2[6] + 0x18))((long *)plVar2[6],plVar1,0x20,8);
      plVar1 = (long *)lVar3;
    }
    lVar3 = *plVar2;
    *plVar2 = 0;
    if (lVar3 != 0) {
      (**(code **)(*(long *)plVar2[2] + 0x18))((long *)plVar2[2],lVar3,plVar2[1] << 3,8);
    }
    (**(code **)(*(long *)param_1[0xfb] + 0x18))
              ((long *)param_1[0xfb],plVar2,param_1[0xfc],param_1[0xfd]);
  }
  FUN__text__002a6be8(param_1 + 0x72);
  FUN__text__002a6e4c(param_1 + 0xc);
  *param_1 = 0x867b90;
  param_1[9] = 0x867bd0;
  param_1[10] = 0x867c10;
  if (param_1[0xb] != 0) {
    (**(code **)(*(long *)(param_1[0xb] + 0x48) + 0x18))();
    param_1[0xb] = 0;
  }
  return;
}


