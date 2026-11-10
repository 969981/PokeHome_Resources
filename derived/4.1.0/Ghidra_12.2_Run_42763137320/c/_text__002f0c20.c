/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002f0c20; name: FUN_.text__002f0c20
 */


long FUN__text__002f0c20(void)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  
  if (DAT_008e5278 != 0) {
    plVar2 = *(long **)(DAT_008e5278 + 0x1f0);
    for (plVar1 = *(long **)(DAT_008e5278 + 0x1e8); plVar1 != plVar2; plVar1 = plVar1 + 1) {
      lVar5 = *plVar1;
      plVar3 = (long *)(*(code *)**(undefined8 **)(lVar5 + 0x50))();
      plVar4 = (long *)FUN__text__002d65d0();
      if (plVar4 == plVar3) {
        return lVar5;
      }
      do {
        plVar3 = (long *)*plVar3;
      } while (plVar3 != plVar4 && plVar3 != (long *)0x0);
      if (plVar3 != (long *)0x0) {
        if (lVar5 != 0) {
          return lVar5;
        }
        break;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl();
}


