/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002d3f58; name: FUN_.text__002d3f58
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__002d3f58(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = param_1[0x4e];
  lVar1 = _DAT_008a27f8 + 0x68;
  lVar2 = _DAT_008a27f8 + 0xa8;
  *param_1 = _DAT_008a27f8 + 0x10;
  param_1[9] = lVar1;
  param_1[10] = lVar2;
  if (lVar3 != 0) {
    param_1[0x4f] = lVar3;
    (**(code **)(*(long *)param_1[0x51] + 0x18))
              ((long *)param_1[0x51],lVar3,param_1[0x50] - lVar3,8);
  }
  FUN__text__002ce070(param_1);
  return;
}


