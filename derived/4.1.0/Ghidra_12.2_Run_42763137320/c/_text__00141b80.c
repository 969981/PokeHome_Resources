/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00141b80; name: FUN_.text__00141b80
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00141b80(long *param_1)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  
  lVar1 = _DAT_0089fa98 + 0xa8;
  lVar2 = _DAT_0089fa98 + 0xe8;
  *param_1 = _DAT_0089fa98 + 0x10;
  param_1[9] = lVar1;
  param_1[10] = lVar2;
  if (param_1[0x11a] != 0) {
    (**(code **)(*(long *)(param_1[0x11a] + 0x48) + 0x18))();
    param_1[0x11a] = 0;
  }
  pcVar3 = (code *)param_1[0x10b];
  if (pcVar3 != (code *)0x0) {
    param_1[0x10d] = 0;
    param_1[0x10c] = 0;
    param_1[0x10b] = 0;
    param_1[0x10a] = 0;
    (*pcVar3)(param_1 + 0x10e);
  }
  pcVar3 = (code *)param_1[0xfb];
  if (pcVar3 != (code *)0x0) {
    param_1[0xfd] = 0;
    param_1[0xfc] = 0;
    param_1[0xfb] = 0;
    param_1[0xfa] = 0;
    (*pcVar3)(param_1 + 0xfe);
  }
  pcVar3 = (code *)param_1[0xeb];
  if (pcVar3 != (code *)0x0) {
    param_1[0xed] = 0;
    param_1[0xec] = 0;
    param_1[0xeb] = 0;
    param_1[0xea] = 0;
    (*pcVar3)(param_1 + 0xee);
  }
  pcVar3 = (code *)param_1[0xdb];
  if (pcVar3 != (code *)0x0) {
    param_1[0xdd] = 0;
    param_1[0xdc] = 0;
    param_1[0xdb] = 0;
    param_1[0xda] = 0;
    (*pcVar3)(param_1 + 0xde);
  }
  pcVar3 = (code *)param_1[0xcb];
  if (pcVar3 != (code *)0x0) {
    param_1[0xcc] = 0;
    param_1[0xcd] = 0;
    param_1[0xca] = 0;
    param_1[0xcb] = 0;
    (*pcVar3)(param_1 + 0xce);
  }
  FUN__text__00128620(param_1);
  return;
}


