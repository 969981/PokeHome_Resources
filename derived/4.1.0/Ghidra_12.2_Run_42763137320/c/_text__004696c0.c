/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004696c0; name: FUN_.text__004696c0
 */


undefined4 FUN__text__004696c0(long param_1,undefined4 param_2,undefined8 param_3,uint param_4)

{
  ulong uVar1;
  
  do {
    uVar1 = FUN__text__0042e870(param_1 + 0x28,param_2,param_3);
    if ((uVar1 & 1) != 0) {
      return 1;
    }
    if ((param_4 & 1) == 0) {
      if (*(long *)(param_1 + 0x80) == 0) {
        param_4 = 0;
      }
      else {
        uVar1 = FUN__text__00460fc0(*(long *)(param_1 + 0x80),param_2,param_3);
        param_4 = 1;
        if ((uVar1 & 1) != 0) {
          return 1;
        }
      }
    }
    else {
      param_4 = 1;
    }
    param_1 = *(long *)(param_1 + 0x78);
  } while (param_1 != 0);
  return 0;
}


