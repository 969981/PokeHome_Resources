/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00308288; name: FUN_.text__00308288
 */


undefined8 FUN__text__00308288(long param_1)

{
  int iVar1;
  
  iVar1 = FUN__text__00631008(*(undefined8 *)(param_1 + 0x58));
  if (iVar1 < 0x2ce) {
    if (10 < iVar1 - 0x1e3U || (1 << (ulong)(iVar1 - 0x1e3U & 0x1f) & 0x413U) == 0) {
      if (6 < iVar1 - 0x281U) {
        return 0;
      }
      if ((1 << (ulong)(iVar1 - 0x281U & 0x1f) & 0x53U) == 0) {
        return 0;
      }
    }
  }
  else if (iVar1 < 0x389) {
    if ((iVar1 != 0x2ce) && (iVar1 != 0x2d0)) {
      return 0;
    }
  }
  else if ((iVar1 != 0x389) && (iVar1 != 0x3f9)) {
    return 0;
  }
  return 1;
}


