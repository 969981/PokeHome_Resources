/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0012fe0c; name: FUN_.text__0012fe0c
 */


undefined8 FUN__text__0012fe0c(long *param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = (**(code **)(*param_1 + 0x28))();
  if ((uVar1 & 1) == 0) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x0012fe40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(*param_1 + 0x20))(param_1);
  return uVar2;
}


