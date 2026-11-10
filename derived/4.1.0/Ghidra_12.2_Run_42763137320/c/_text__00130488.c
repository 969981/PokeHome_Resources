/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00130488; name: FUN_.text__00130488
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00130488(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  
  lVar1 = _DAT_0089fab0 + 0x10;
  puVar5 = (undefined8 *)param_1[0xdf];
  lVar2 = _DAT_0089fab0 + 0xb8;
  lVar3 = _DAT_0089fab0 + 0xf8;
  lVar4 = _DAT_0089f6b0 + 0x10;
  param_1[0xdf] = 0;
  *param_1 = lVar1;
  param_1[9] = lVar2;
  param_1[10] = lVar3;
  param_1[0xd3] = lVar4;
  if (puVar5 != (undefined8 *)0x0) {
    (**(code **)*puVar5)(puVar5);
    (**(code **)(*(long *)param_1[0xe0] + 0x18))
              ((long *)param_1[0xe0],puVar5,param_1[0xe1],param_1[0xe2]);
  }
  puVar5 = (undefined8 *)param_1[0xdb];
  param_1[0xdb] = 0;
  if (puVar5 != (undefined8 *)0x0) {
    (**(code **)*puVar5)(puVar5);
    (**(code **)(*(long *)param_1[0xdc] + 0x18))
              ((long *)param_1[0xdc],puVar5,param_1[0xdd],param_1[0xde]);
  }
  puVar5 = (undefined8 *)param_1[0xd7];
  param_1[0xd7] = 0;
  if (puVar5 != (undefined8 *)0x0) {
    (**(code **)*puVar5)(puVar5);
    (**(code **)(*(long *)param_1[0xd8] + 0x18))
              ((long *)param_1[0xd8],puVar5,param_1[0xd9],param_1[0xda]);
  }
  puVar5 = (undefined8 *)param_1[0xce];
  param_1[0xce] = 0;
  if (puVar5 != (undefined8 *)0x0) {
    (**(code **)*puVar5)(puVar5);
    (**(code **)(*(long *)param_1[0xcf] + 0x18))
              ((long *)param_1[0xcf],puVar5,param_1[0xd0],param_1[0xd1]);
  }
  puVar5 = (undefined8 *)param_1[0xca];
  param_1[0xca] = 0;
  if (puVar5 != (undefined8 *)0x0) {
    (**(code **)*puVar5)(puVar5);
    (**(code **)(*(long *)param_1[0xcb] + 0x18))
              ((long *)param_1[0xcb],puVar5,param_1[0xcc],param_1[0xcd]);
  }
  if (param_1[0xc9] != 0) {
    (**(code **)(*(long *)(param_1[0xc9] + 0x48) + 0x18))();
    param_1[0xc9] = 0;
  }
  if (param_1[200] != 0) {
    (**(code **)(*(long *)(param_1[200] + 0x48) + 0x18))();
    param_1[200] = 0;
  }
  FUN__text__00128620(param_1);
  return;
}


