/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005f626c; name: FUN_.text__005f626c
 */


void FUN__text__005f626c(undefined8 param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  long lVar2;
  
  lVar2 = FUN__text__005f62cc();
  if (lVar2 == 0) {
    return;
  }
  lVar1 = param_3;
  if ((param_4 & 1) == 0) {
    lVar1 = 0;
  }
  FUN__text__005f60bc(param_1,lVar2,param_2 - lVar1,param_3);
  return;
}


