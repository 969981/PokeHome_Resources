/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0046c780; name: FUN_.text__0046c780
 */


void FUN__text__0046c780(void)

{
  long *plVar1;
  ulong uVar2;
  
  if (DAT_00aea708 != 0) {
    uVar2 = 0;
    do {
      plVar1 = *(long **)(DAT_00aea700 + uVar2 * 8);
      while (plVar1 != (long *)0x0) {
        plVar1 = (long *)*plVar1;
        FUN__text__00400fc0(0);
      }
      *(undefined8 *)(DAT_00aea700 + uVar2 * 8) = 0;
      uVar2 = uVar2 + 1;
    } while (uVar2 < DAT_00aea708);
  }
  DAT_00aea710 = 0;
  if (DAT_00aea700 != 0) {
    DAT_00aea708 = 0;
    FUN__text__00400fc0(0);
    DAT_00aea700 = 0;
    DAT_00aea70c = 0;
  }
  return;
}


