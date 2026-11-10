/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0069f7d0; name: FUN_.text__0069f7d0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN__text__0069f7d0(undefined8 param_1)

{
  long *plVar1;
  
  plVar1 = (long *)FUN__text__006a0ee8(0xe0);
  if (plVar1 != (long *)0x0) {
    FUN__text__006b19a4(plVar1);
    *plVar1 = _DAT_008a6910 + 0x10;
    plVar1[4] = (long)(plVar1 + 4);
    plVar1[5] = (long)(plVar1 + 4);
    FUN__text__006b2810(plVar1,param_1,0,0,0);
  }
  return plVar1;
}


