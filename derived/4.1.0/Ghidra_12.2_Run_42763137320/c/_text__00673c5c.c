/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00673c5c; name: FUN_.text__00673c5c
 */


bool FUN__text__00673c5c(undefined8 param_1,undefined8 *param_2)

{
  bool bVar1;
  ulong uVar2;
  
  uVar2 = FUN__text__00673c98(param_1,*param_2);
  bVar1 = (uVar2 & 1) != 0;
  if (bVar1) {
    param_2[1] = param_1;
  }
  return bVar1;
}


