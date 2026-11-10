/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004caff4; name: FUN_.text__004caff4
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN__text__004caff4(long param_1)

{
  long lVar1;
  
  lVar1 = FUN__text__004319c0(*_DAT_008a4658);
  if (lVar1 == 0) {
    return 2;
  }
  if (*(long *)(lVar1 + 0x28) == 0) {
    *(long *)(lVar1 + 0x20) = param_1;
    *(long *)(lVar1 + 0x28) = param_1;
    *(undefined8 *)(param_1 + 8) = 0;
    return 1;
  }
  *(long *)(param_1 + 8) = *(long *)(lVar1 + 0x28);
  *(long *)(lVar1 + 0x28) = param_1;
  return 1;
}


