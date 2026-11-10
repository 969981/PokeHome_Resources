/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0069d5ac; name: FUN_.text__0069d5ac
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0069d5ac(long *param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  
  param_1[1] = 0;
  lVar2 = _DAT_008a68b8;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *param_1 = lVar2 + 0x10;
  plVar1 = (long *)FUN__text__006a0f04(0xd8);
  if (plVar1 != (long *)0x0) {
    *(undefined4 *)(plVar1 + 2) = 0;
    lVar2 = _DAT_008a68c0;
    plVar1[7] = 0;
    plVar1[3] = 0;
    plVar1[4] = 0;
    plVar1[5] = 0;
    plVar1[6] = 0;
    *plVar1 = lVar2 + 0x10;
    plVar1[1] = -1;
    FUN__text__006f5bcc(plVar1 + 8);
    FUN__text__006f4e0c(plVar1 + 0x11);
    plVar1[0x1a] = -0x100000000;
  }
  param_1[1] = (long)plVar1;
  plVar1[7] = (long)param_1;
  lVar2 = FUN__text__006c1db0(param_2);
  param_1[2] = lVar2;
  return;
}


