/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006a0114; name: FUN_.text__006a0114
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__006a0114(long *param_1)

{
  long lVar1;
  long *plVar2;
  
  FUN__text__0069d5ac();
  *param_1 = _DAT_008a6880 + 0x10;
  plVar2 = (long *)FUN__text__006a0f04(0xd8);
  if (plVar2 != (long *)0x0) {
    *(undefined4 *)(plVar2 + 2) = 0;
    lVar1 = _DAT_008a68c0;
    plVar2[7] = 0;
    plVar2[3] = 0;
    plVar2[4] = 0;
    plVar2[5] = 0;
    plVar2[6] = 0;
    *plVar2 = lVar1 + 0x10;
    plVar2[1] = -1;
    FUN__text__006f5bcc(plVar2 + 8);
    FUN__text__006f4e0c(plVar2 + 0x11);
    plVar2[0x1a] = -0x100000000;
  }
  param_1[4] = (long)plVar2;
  *(undefined2 *)(param_1 + 0xc) = 0;
  param_1[8] = 0xb0100000000;
  *(undefined4 *)(param_1 + 5) = 0x3f800000;
  param_1[6] = 0;
  param_1[7] = 0;
  return;
}


