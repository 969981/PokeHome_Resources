/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002c5678; name: FUN_.text__002c5678
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__002c5678(long *param_1)

{
  long lVar1;
  code *pcVar2;
  
  lVar1 = _DAT_0089f718 + 0x10;
  *param_1 = _DAT_008a2568 + 0x10;
  param_1[2] = lVar1;
  if (param_1[3] == 0) {
    param_1[3] = 0;
    pcVar2 = (code *)param_1[0x15];
  }
  else {
    FUN__text__005d9290();
    lVar1 = param_1[3];
    param_1[3] = 0;
    if (lVar1 != 0) {
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
    }
    pcVar2 = (code *)param_1[0x15];
  }
  if (pcVar2 != (code *)0x0) {
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    (*pcVar2)(param_1 + 0x18);
  }
  pcVar2 = (code *)param_1[5];
  if (pcVar2 != (code *)0x0) {
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    (*pcVar2)(param_1 + 8);
  }
  if (param_1[3] != 0) {
    (**(code **)(*(long *)(param_1[3] + 0x48) + 0x18))();
  }
  operator_delete(param_1);
  return;
}


