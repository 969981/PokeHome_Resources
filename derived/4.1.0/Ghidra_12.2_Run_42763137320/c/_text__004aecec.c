/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004aecec; name: FUN_.text__004aecec
 */


int FUN__text__004aecec(undefined8 param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN__text__004aea70();
  iVar2 = 0x38;
  if (param_3 == 0) {
    iVar2 = 1;
  }
  if (iVar1 != 1) {
    iVar2 = iVar1;
  }
  return iVar2;
}


