/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001358f8; name: FUN_.text__001358f8
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__001358f8(long *param_1)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  
  lVar1 = _DAT_0089fb58 + 0xb8;
  lVar2 = _DAT_0089fb58 + 0xf8;
  *param_1 = _DAT_0089fb58 + 0x10;
  param_1[9] = lVar1;
  param_1[10] = lVar2;
  if (param_1[0xd9] != 0) {
    (**(code **)(*(long *)(param_1[0xd9] + 0x48) + 0x18))();
    param_1[0xd9] = 0;
  }
  pcVar3 = (code *)param_1[0xc9];
  if (pcVar3 != (code *)0x0) {
    param_1[0xca] = 0;
    param_1[0xcb] = 0;
    param_1[200] = 0;
    param_1[0xc9] = 0;
    (*pcVar3)(param_1 + 0xcc);
  }
  FUN__text__00128620(param_1);
  return;
}


