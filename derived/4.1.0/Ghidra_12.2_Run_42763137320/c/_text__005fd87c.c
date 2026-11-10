/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005fd87c; name: FUN_.text__005fd87c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__005fd87c(long *param_1)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  
  lVar2 = _DAT_008a5d70 + 0x40;
  lVar1 = _DAT_0089f718 + 0x10;
  *param_1 = _DAT_008a5d70 + 0x10;
  param_1[9] = lVar2;
  param_1[10] = lVar1;
  if (param_1[0xb] == 0) {
    param_1[0xb] = 0;
    pcVar3 = (code *)param_1[0x1d];
  }
  else {
    FUN__text__005d9290();
    lVar2 = param_1[0xb];
    param_1[0xb] = 0;
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
    }
    pcVar3 = (code *)param_1[0x1d];
  }
  if (pcVar3 != (code *)0x0) {
    param_1[0x1e] = 0;
    param_1[0x1f] = 0;
    param_1[0x1c] = 0;
    param_1[0x1d] = 0;
    (*pcVar3)(param_1 + 0x20);
  }
  pcVar3 = (code *)param_1[0xd];
  if (pcVar3 != (code *)0x0) {
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    (*pcVar3)(param_1 + 0x10);
  }
  if (param_1[0xb] != 0) {
    (**(code **)(*(long *)(param_1[0xb] + 0x48) + 0x18))();
    param_1[0xb] = 0;
  }
  return;
}


