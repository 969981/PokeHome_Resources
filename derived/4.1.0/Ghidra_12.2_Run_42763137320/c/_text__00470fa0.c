/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00470fa0; name: FUN_.text__00470fa0
 */


void FUN__text__00470fa0(long param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = &DAT_00aea740;
  do {
    lVar2 = *plVar1;
    plVar1 = (long *)(lVar2 + 0x40);
  } while (lVar2 != 0 && lVar2 != param_1);
  if (lVar2 != 0) {
    return;
  }
  *(undefined8 *)(param_1 + 0x40) = 0;
  plVar1 = &DAT_00aea740;
  if (DAT_00aea740 != 0) {
    plVar1 = (long *)(DAT_00aea738 + 0x40);
  }
  DAT_00aea738 = param_1;
  *plVar1 = param_1;
  DAT_00aea730 = DAT_00aea730 + 1;
  return;
}


