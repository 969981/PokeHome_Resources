/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00662c1c; name: FUN_.text__00662c1c
 */


bool FUN__text__00662c1c(undefined8 *param_1)

{
  bool bVar1;
  int iVar2;
  
  if (param_1[0x12] != 0) {
    return false;
  }
  iVar2 = FUN__text__0067f104(*param_1);
  if (iVar2 == 0) {
    iVar2 = FUN__text__0067f844(*param_1);
    bVar1 = iVar2 == 0;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}


