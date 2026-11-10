/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00308324; name: FUN_.text__00308324
 */


undefined8 FUN__text__00308324(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  lVar1 = FUN__text__00637404(*(undefined8 *)(param_1 + 0x58));
  if (((lVar1 == 0) && (*(long *)(param_1 + 0x58) != 0)) &&
     (uVar2 = FUN__text__00631174(), (uVar2 & 1) == 0)) {
    lVar1 = FUN__text__00325bc0();
    if (*(int *)(lVar1 + 0x2c) - 5U < 2) {
      FUN__text__00631008(*(undefined8 *)(param_1 + 0x58));
      uVar3 = FUN__text__00306190();
      return uVar3;
    }
  }
  return 0;
}


