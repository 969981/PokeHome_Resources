/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001257d8; name: FUN_.text__001257d8
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__001257d8(long *param_1)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  
  lVar2 = _DAT_0089f978 + 0xf0;
  lVar1 = _DAT_0089f978 + 0x130;
  *param_1 = _DAT_0089f978 + 0x10;
  param_1[9] = lVar2;
  param_1[10] = lVar1;
  if (param_1[0xb9] != 0) {
    (**(code **)(*(long *)(param_1[0xb9] + 0x48) + 0x18))();
    param_1[0xb9] = 0;
  }
  FUN__text__00125df0(param_1 + 0x9e);
  FUN__text__00125df0(param_1 + 0x84);
  FUN__text__00125df0(param_1 + 0x6a);
  if (param_1[0x69] != 0) {
    (**(code **)(*(long *)(param_1[0x69] + 0x48) + 0x18))();
    param_1[0x69] = 0;
  }
  if (param_1[0x67] != 0) {
    (**(code **)(*(long *)(param_1[0x67] + 0x48) + 0x18))();
    param_1[0x67] = 0;
  }
  FUN__text__0012595c(param_1 + 0x1b);
  puVar3 = (undefined8 *)param_1[0x17];
  param_1[0x17] = 0;
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)(puVar3);
    (**(code **)(*(long *)param_1[0x18] + 0x18))
              ((long *)param_1[0x18],puVar3,param_1[0x19],param_1[0x1a]);
  }
  lVar2 = param_1[0x13];
  param_1[0x13] = 0;
  if (lVar2 != 0) {
    FUN__text__00125bd0(param_1 + 0x14);
  }
  FUN__text__00126f00(param_1);
  return;
}


