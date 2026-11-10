/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006eabc0; name: FUN_.text__006eabc0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__006eabc0(code *param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  
  plVar1 = _DAT_008a6c38;
  if (0 < DAT_00c5fc38) {
    lVar2 = 0;
    lVar3 = 0x28;
    do {
      (*param_1)(*plVar1 + lVar3,*plVar1 + lVar3 + 8,param_2);
      lVar2 = lVar2 + 1;
      lVar3 = lVar3 + 0xa8;
    } while (lVar2 < DAT_00c5fc38);
  }
  return;
}


