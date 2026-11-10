/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0044a854; name: FUN_.text__0044a854
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0044a854(long *param_1)

{
  undefined4 *puVar1;
  long lVar2;
  undefined4 *puVar3;
  long *plVar4;
  bool bVar5;
  
  param_1[1] = 0;
  param_1[2] = 0;
  puVar3 = (undefined4 *)DAT_00aea670;
  bVar5 = DAT_00aea678 != 0;
  plVar4 = param_1;
  param_1[3] = (long)DAT_00aea670;
  DAT_00aea670 = plVar4;
  lVar2 = _DAT_008a4b18;
  DAT_00aea668 = DAT_00aea668 + 1;
  puVar1 = &DAT_00aea668;
  if (bVar5) {
    puVar1 = puVar3;
  }
  *(long **)(puVar1 + 4) = param_1;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *param_1 = lVar2 + 0x10;
  return;
}


