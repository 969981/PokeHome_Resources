/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005f8c90; name: FUN_.text__005f8c90
 */


void FUN__text__005f8c90(long *param_1)

{
  char cVar1;
  
  (**(code **)(*param_1 + 0x38))();
  FUN__text__005f7f54();
  cVar1 = (char)param_1[0x2e];
  while (cVar1 == '\0') {
    FUN__text__005df1b0(DAT_008e1898);
    (**(code **)(*param_1 + 0x20))(param_1);
    (**(code **)(*param_1 + 0x18))(param_1);
    cVar1 = (char)param_1[0x2e];
  }
                    /* WARNING: Could not recover jumptable at 0x005f8d04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x40))(param_1);
  return;
}


