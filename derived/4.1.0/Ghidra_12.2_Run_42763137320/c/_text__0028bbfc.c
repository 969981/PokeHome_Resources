/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0028bbfc; name: FUN_.text__0028bbfc
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0028bbfc(long *param_1)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  
  lVar1 = _DAT_008a21a0 + 0xb8;
  lVar2 = _DAT_008a21a0 + 0xf8;
  *param_1 = _DAT_008a21a0 + 0x10;
  param_1[9] = lVar1;
  param_1[10] = lVar2;
  if (param_1[0x10a] != 0) {
    (**(code **)(*(long *)(param_1[0x10a] + 0x48) + 0x18))();
    param_1[0x10a] = 0;
  }
  if (param_1[0x107] != 0) {
    (**(code **)(*(long *)(param_1[0x107] + 0x48) + 0x18))();
    param_1[0x107] = 0;
  }
  if (param_1[0x104] != 0) {
    (**(code **)(*(long *)(param_1[0x104] + 0x48) + 0x18))();
    param_1[0x104] = 0;
  }
  if (param_1[0x101] != 0) {
    (**(code **)(*(long *)(param_1[0x101] + 0x48) + 0x18))();
    param_1[0x101] = 0;
  }
  if (param_1[0xfe] != 0) {
    (**(code **)(*(long *)(param_1[0xfe] + 0x48) + 0x18))();
    param_1[0xfe] = 0;
  }
  if (param_1[0xfb] != 0) {
    (**(code **)(*(long *)(param_1[0xfb] + 0x48) + 0x18))();
    param_1[0xfb] = 0;
  }
  if (param_1[0xf8] != 0) {
    (**(code **)(*(long *)(param_1[0xf8] + 0x48) + 0x18))();
    param_1[0xf8] = 0;
  }
  if (param_1[0xf5] != 0) {
    (**(code **)(*(long *)(param_1[0xf5] + 0x48) + 0x18))();
    param_1[0xf5] = 0;
  }
  if (param_1[0xf2] != 0) {
    (**(code **)(*(long *)(param_1[0xf2] + 0x48) + 0x18))();
    param_1[0xf2] = 0;
  }
  if (param_1[0xef] != 0) {
    (**(code **)(*(long *)(param_1[0xef] + 0x48) + 0x18))();
    param_1[0xef] = 0;
  }
  if (param_1[0xec] != 0) {
    (**(code **)(*(long *)(param_1[0xec] + 0x48) + 0x18))();
    param_1[0xec] = 0;
  }
  if (param_1[0xe9] != 0) {
    (**(code **)(*(long *)(param_1[0xe9] + 0x48) + 0x18))();
    param_1[0xe9] = 0;
  }
  if (param_1[0xe6] != 0) {
    (**(code **)(*(long *)(param_1[0xe6] + 0x48) + 0x18))();
    param_1[0xe6] = 0;
  }
  if (param_1[0xe3] != 0) {
    (**(code **)(*(long *)(param_1[0xe3] + 0x48) + 0x18))();
    param_1[0xe3] = 0;
  }
  if (param_1[0xe0] != 0) {
    (**(code **)(*(long *)(param_1[0xe0] + 0x48) + 0x18))();
    param_1[0xe0] = 0;
  }
  if (param_1[0xdd] != 0) {
    (**(code **)(*(long *)(param_1[0xdd] + 0x48) + 0x18))();
    param_1[0xdd] = 0;
  }
  if (param_1[0xda] != 0) {
    (**(code **)(*(long *)(param_1[0xda] + 0x48) + 0x18))();
    param_1[0xda] = 0;
  }
  pcVar3 = (code *)param_1[0xcb];
  if (pcVar3 != (code *)0x0) {
    param_1[0xcd] = 0;
    param_1[0xcc] = 0;
    param_1[0xcb] = 0;
    param_1[0xca] = 0;
    (*pcVar3)(param_1 + 0xce);
  }
  FUN__text__00128620(param_1);
  return;
}


