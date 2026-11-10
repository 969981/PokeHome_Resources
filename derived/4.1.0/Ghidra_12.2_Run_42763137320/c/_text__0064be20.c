/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0064be20; name: FUN_.text__0064be20
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0064be20(undefined8 param_1,undefined8 *param_2)

{
  long *plVar1;
  
  plVar1 = _DAT_008a1468;
  if (*_DAT_008a1468 == 0) {
    FUN__text__0064bed0(param_1);
    FUN__text__0064c3d4(*plVar1,param_1);
  }
  else {
    FUN__text__0064c3d4(*_DAT_008a1468,param_1);
  }
  if (DAT_008e1630 == 0) {
    FUN__text__0064c004(param_1);
  }
  FUN__text__0064e4b4(DAT_008e1630,param_1);
  FUN__text__0064d3f4(param_1);
  DAT_00c5f590 = param_1;
  DAT_00c5f5a0 = param_2[1];
  DAT_00c5f5a8 = param_2[2];
  DAT_00c5f598 = *param_2;
  return;
}


