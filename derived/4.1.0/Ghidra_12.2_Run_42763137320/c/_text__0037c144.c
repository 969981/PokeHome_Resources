/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0037c144; name: FUN_.text__0037c144
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0037c144(long *param_1)

{
  long lVar1;
  code *pcVar2;
  
  lVar1 = _DAT_008a3170 + 0x10;
  param_1[9] = _DAT_008a3170 + 0x40;
  pcVar2 = (code *)param_1[0x15];
  *param_1 = lVar1;
  if (pcVar2 != (code *)0x0) {
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    (*pcVar2)(param_1 + 0x18);
  }
  if (param_1[0x12] != 0) {
    (**(code **)(*(long *)(param_1[0x12] + 0x48) + 0x18))();
    param_1[0x12] = 0;
  }
  if (param_1[0xe] != 0) {
    (**(code **)(*(long *)(param_1[0xe] + 0x48) + 0x18))();
    param_1[0xe] = 0;
  }
  return;
}


