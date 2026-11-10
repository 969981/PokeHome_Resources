/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0064ec40; name: FUN_.text__0064ec40
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN__text__0064ec40(uint param_1,uint param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  iVar1 = DAT_00c5f5d4;
  DAT_00c5f5d4 = DAT_00c5f5d4 + 1;
  if (iVar1 != 0) {
    return 0;
  }
  if ((param_2 & 1) != 0) {
    FUN__text__00678358();
  }
  FUN__text__006784a0();
  lVar2 = FUN__text__00686bd8();
  if (((lVar2 == 0) || (iVar1 = FUN__text__00677a40(), iVar1 == 0)) ||
     (iVar1 = FUN__text__0064f238(), iVar1 != 0)) {
    uVar3 = 2;
  }
  else {
    if ((param_1 >> 2 & 1) != 0) {
      *_DAT_008a6578 = 1;
    }
    FUN__text__00677568();
    uVar3 = 0;
  }
  return uVar3;
}


