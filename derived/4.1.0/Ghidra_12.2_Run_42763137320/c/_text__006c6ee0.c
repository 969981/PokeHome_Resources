/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006c6ee0; name: FUN_.text__006c6ee0
 */


void FUN__text__006c6ee0(long *param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  if ((*(byte *)((long)param_1 + 0xdd) & 1) != 0) {
    *(byte *)((long)param_1 + 0xdd) = *(byte *)((long)param_1 + 0xdd) & 0xfe;
    FUN__text__006b4450(param_1,param_3,1);
    if ((*(byte *)((long)param_1 + 0xdd) >> 1 & 1) == 0) {
      if (*(uint *)((long)param_1 + 0xd4) < 2) {
        FUN__text__006c6f90();
      }
      else {
        FUN__text__006c7960();
      }
    }
    else if (*(uint *)((long)param_1 + 0xd4) < 2) {
      FUN__text__006c7b00();
    }
    else {
      FUN__text__006c84e0(param_1);
    }
  }
  FUN__text__006b34b0(param_1,param_2,param_3,param_4 & 1);
                    /* WARNING: Could not recover jumptable at 0x006c6f88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xf8))(param_1,param_2);
  return;
}


