/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003d59b8; name: FUN_.text__003d59b8
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__003d59b8(long *param_1)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  
  lVar2 = _DAT_008a37d8 + 0x60;
  lVar1 = _DAT_0089f718 + 0x10;
  param_1[-9] = _DAT_008a37d8 + 0x10;
  *param_1 = lVar2;
  param_1[3] = lVar1;
  if (param_1[4] == 0) {
    param_1[4] = 0;
    pcVar3 = (code *)param_1[0x16];
  }
  else {
    FUN__text__005d9290();
    lVar2 = param_1[4];
    param_1[4] = 0;
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
    }
    pcVar3 = (code *)param_1[0x16];
  }
  if (pcVar3 != (code *)0x0) {
    param_1[0x17] = 0;
    param_1[0x18] = 0;
    param_1[0x15] = 0;
    param_1[0x16] = 0;
    (*pcVar3)(param_1 + 0x19);
  }
  pcVar3 = (code *)param_1[6];
  if (pcVar3 != (code *)0x0) {
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    (*pcVar3)(param_1 + 9);
  }
  if (param_1[4] != 0) {
    (**(code **)(*(long *)(param_1[4] + 0x48) + 0x18))();
    param_1[4] = 0;
  }
  return;
}


