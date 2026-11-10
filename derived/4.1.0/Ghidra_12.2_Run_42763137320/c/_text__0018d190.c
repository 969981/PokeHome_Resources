/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0018d190; name: FUN_.text__0018d190
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0018d190(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = _DAT_008a0528 + 0xf0;
  lVar1 = _DAT_008a0528 + 0x130;
  *param_1 = _DAT_008a0528 + 0x10;
  param_1[9] = lVar2;
  param_1[10] = lVar1;
  if (param_1[0x1a6] != 0) {
    (**(code **)(*(long *)(param_1[0x1a6] + 0x48) + 0x18))();
    param_1[0x1a6] = 0;
  }
  lVar2 = param_1[0x1a3];
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x3b8) + 0x18))(lVar2 + 0x3b8);
    param_1[0x1a3] = 0;
  }
  lVar2 = param_1[0x1a2];
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x3b8) + 0x18))(lVar2 + 0x3b8);
    param_1[0x1a2] = 0;
  }
  lVar2 = param_1[0x1a1];
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x3b8) + 0x18))(lVar2 + 0x3b8);
    param_1[0x1a1] = 0;
  }
  if (param_1[0x1a0] != 0) {
    (**(code **)(*(long *)(param_1[0x1a0] + 0x48) + 0x18))();
    param_1[0x1a0] = 0;
  }
  if (param_1[0x19f] != 0) {
    (**(code **)(*(long *)(param_1[0x19f] + 0x48) + 0x18))();
    param_1[0x19f] = 0;
  }
  if (param_1[0x19e] != 0) {
    (**(code **)(*(long *)(param_1[0x19e] + 0x48) + 0x18))();
    param_1[0x19e] = 0;
  }
  if (param_1[0x19d] != 0) {
    (**(code **)(*(long *)(param_1[0x19d] + 0x48) + 0x18))();
    param_1[0x19d] = 0;
  }
  if (param_1[0x19c] != 0) {
    (**(code **)(*(long *)(param_1[0x19c] + 0x48) + 0x18))();
    param_1[0x19c] = 0;
  }
  if (param_1[0x19b] != 0) {
    (**(code **)(*(long *)(param_1[0x19b] + 0x48) + 0x18))();
    param_1[0x19b] = 0;
  }
  if (param_1[0x19a] != 0) {
    (**(code **)(*(long *)(param_1[0x19a] + 0x48) + 0x18))();
    param_1[0x19a] = 0;
  }
  if (param_1[0x199] != 0) {
    (**(code **)(*(long *)(param_1[0x199] + 0x48) + 0x18))();
    param_1[0x199] = 0;
  }
  lVar2 = param_1[0x195];
  param_1[0x195] = 0;
  if (lVar2 != 0) {
    FUN__text__00190de0(lVar2);
    (**(code **)(*(long *)param_1[0x196] + 0x18))
              ((long *)param_1[0x196],lVar2,param_1[0x197],param_1[0x198]);
  }
  FUN__text__00175020(param_1 + 0xbf);
  param_1[0xba] = _DAT_008a04f8 + 0x10;
  FUN__text__001257d8(param_1);
  return;
}


