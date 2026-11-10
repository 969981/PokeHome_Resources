/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00600a20; name: FUN_.text__00600a20
 */


undefined8 FUN__text__00600a20(long *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x78))();
  if (iVar1 - 0xfeU < 2 || iVar1 == 0) {
    return 1;
  }
  return 0;
}


