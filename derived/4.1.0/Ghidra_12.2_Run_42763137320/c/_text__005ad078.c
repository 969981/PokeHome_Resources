/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005ad078; name: FUN_.text__005ad078
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__005ad078(long *param_1)

{
  long lVar1;
  long lVar2;
  
  FUN__text__006ee718(param_1 + 0x2b,_DAT_008a0448);
  FUN__text__006ee67c(param_1 + 0x2b);
  lVar2 = param_1[0x27];
  param_1[0x27] = 0;
  if (lVar2 != 0) {
    (**(code **)(*(long *)param_1[0x28] + 0x18))
              ((long *)param_1[0x28],lVar2,param_1[0x29],param_1[0x2a]);
  }
  lVar2 = _DAT_008a5760 + 0x90;
  lVar1 = _DAT_008a5760 + 0xc0;
  *param_1 = _DAT_008a5760 + 0x10;
  param_1[9] = lVar2;
  param_1[0xb] = lVar1;
  FUN__text__005b2670(param_1 + 0xd);
  return;
}


