/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00501574; name: FUN_.text__00501574
 */


bool FUN__text__00501574(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  undefined1 auStack_40 [32];
  
  FUN__text__004e2bd8(auStack_40,*param_2,*(undefined4 *)(param_2 + 1));
  iVar1 = FUN__text__005015cc(param_1,auStack_40);
  FUN__text__004e2bf8(auStack_40);
  return iVar1 == 1;
}


