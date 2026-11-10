/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005c5300; name: FUN_.text__005c5300
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__005c5300(long *param_1)

{
  long lVar1;
  code *pcVar2;
  long *local_8;
  
  lVar1 = _DAT_008a58b0 + 0x10;
  param_1[9] = _DAT_008a58b0 + 0x50;
  *param_1 = lVar1;
  if ((code *)param_1[0x56] != (code *)0x0) {
    local_8 = param_1 + 0xb;
    (*(code *)param_1[0x56])(param_1 + 0x5a,&local_8);
  }
  pcVar2 = (code *)param_1[0x57];
  if (pcVar2 != (code *)0x0) {
    param_1[0x58] = 0;
    param_1[0x59] = 0;
    param_1[0x56] = 0;
    param_1[0x57] = 0;
    (*pcVar2)(param_1 + 0x5a);
  }
  FUN__text__005c5508(param_1 + 0xb);
  FUN__text__005b5108(param_1);
  return;
}


