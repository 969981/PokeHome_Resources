/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00650e64; name: FUN_.text__00650e64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN__text__00650e64(long param_1,undefined4 param_2)

{
  int iVar1;
  long lVar2;
  
  lVar2 = FUN__text__0064ed38();
  *(long *)(param_1 + 0x50) = lVar2;
  if (lVar2 == 0) {
    iVar1 = 1;
  }
  else {
    iVar1 = FUN__text__00653dc4(param_1,param_2,_DAT_008a6580,_DAT_008a6588,&LAB__text__00650edc);
    if (iVar1 == 0) {
      *(long *)(*(long *)(param_1 + 0x50) + 0x1100) = param_1;
    }
    else {
      FUN__text__0066fef4();
      *(undefined8 *)(param_1 + 0x50) = 0;
    }
  }
  return iVar1;
}


