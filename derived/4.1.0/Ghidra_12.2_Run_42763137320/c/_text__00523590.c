/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00523590; name: FUN_.text__00523590
 */


void FUN__text__00523590(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(*(long *)(param_1 + 0x50) + 0x20);
  lVar2 = FUN__text__00506b30();
  if (lVar2 == 0) {
    return;
  }
  lVar1 = 0;
  if (lVar3 != 0) {
    lVar1 = lVar3 + -0x70;
  }
  FUN__text__00526134(lVar1,param_1,param_2,lVar2);
  return;
}


