/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006b4514; name: FUN_.text__006b4514
 */


undefined8 FUN__text__006b4514(long *param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = (**(code **)(*param_1 + 0x50))();
  if (cVar1 == '\0') {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x006b4550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(*param_1 + 0x58))(param_1,0);
  return uVar2;
}


