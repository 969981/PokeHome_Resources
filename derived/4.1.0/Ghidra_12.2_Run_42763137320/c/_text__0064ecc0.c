/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0064ecc0; name: FUN_.text__0064ecc0
 */


undefined8
FUN__text__0064ecc0(undefined8 param_1,long param_2,long param_3,long param_4,long param_5,
                   long param_6)

{
  undefined8 uVar1;
  
  uVar1 = 2;
  if ((((param_2 != 0) && (param_3 != 0)) && (param_4 != 0)) && ((param_5 != 0 && (param_6 != 0))))
  {
    if (DAT_00c5f5d4 == 0) {
      FUN__text__0067839c(param_2,param_3,param_4,param_5,param_6);
      uVar1 = FUN__text__0064ec40(param_1,0);
      return uVar1;
    }
    uVar1 = 0;
    DAT_00c5f5d4 = DAT_00c5f5d4 + 1;
  }
  return uVar1;
}


