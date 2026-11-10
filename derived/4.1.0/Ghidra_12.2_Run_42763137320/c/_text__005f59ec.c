/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005f59ec; name: FUN_.text__005f59ec
 */


long FUN__text__005f59ec(long param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  
  uVar2 = 0;
  if (param_2 != 0) {
    uVar2 = (param_1 + 0x10U) / param_2;
  }
  lVar3 = (param_1 + 0x10U) - uVar2 * param_2;
  lVar1 = 0;
  if (lVar3 != 0) {
    lVar1 = param_2 - lVar3;
  }
  return lVar1;
}


