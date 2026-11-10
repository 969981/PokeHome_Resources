/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0066307c; name: FUN_.text__0066307c
 */


long FUN__text__0066307c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4
                        ,undefined8 *param_5)

{
  long lVar1;
  int local_4;
  
  local_4 = 0;
  if ((code *)param_5[0xb6] != (code *)0x0) {
    lVar1 = (*(code *)param_5[0xb6])(param_5,0,param_2,param_3,&local_4);
    if ((local_4 == 0x51) || (lVar1 == 0)) {
      return -0x1f8;
    }
    if (lVar1 != -1) {
      return lVar1;
    }
    FUN__text__0066713c(*param_5,0x7162d2);
  }
  return -0x386;
}


