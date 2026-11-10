/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005c5480; name: FUN_.text__005c5480
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__005c5480(long *param_1)

{
  long lVar1;
  code *pcVar2;
  long *local_28;
  
  lVar1 = _DAT_008a58b0 + 0x10;
  *param_1 = _DAT_008a58b0 + 0x50;
  param_1[-9] = lVar1;
  if ((code *)param_1[0x4d] != (code *)0x0) {
    local_28 = param_1 + 2;
    (*(code *)param_1[0x4d])(param_1 + 0x51,&local_28);
  }
  pcVar2 = (code *)param_1[0x4e];
  if (pcVar2 != (code *)0x0) {
    param_1[0x4f] = 0;
    param_1[0x50] = 0;
    param_1[0x4d] = 0;
    param_1[0x4e] = 0;
    (*pcVar2)(param_1 + 0x51);
  }
  FUN__text__005c5508(param_1 + 2);
  FUN__text__005b5108(param_1 + -9);
  return;
}


