/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00447620; name: FUN_.text__00447620
 */


void FUN__text__00447620(long param_1)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  
  FUN__text__00447700(param_1,0);
  FUN__text__00447940(param_1,0xfffffffffffffffe);
  if (*(int *)(param_1 + 0x38) != 0) {
    uVar3 = 0;
    do {
      lVar2 = *(long *)(param_1 + 0x30);
      plVar1 = *(long **)(lVar2 + uVar3 * 8);
      if (plVar1 != (long *)0x0) {
        do {
          plVar1 = (long *)*plVar1;
          FUN__text__00400fc0(0);
        } while (plVar1 != (long *)0x0);
        lVar2 = *(long *)(param_1 + 0x30);
      }
      *(undefined8 *)(lVar2 + uVar3 * 8) = 0;
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)(param_1 + 0x38));
  }
  *(undefined4 *)(param_1 + 0x40) = 0;
  if (*(long *)(param_1 + 0x30) != 0) {
    *(undefined4 *)(param_1 + 0x38) = 0;
    FUN__text__00400fc0(0);
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined4 *)(param_1 + 0x3c) = 0;
  }
  FUN__text__00447a30(param_1);
  if (DAT_00aea5f8 != 0) {
    DAT_00aea600 = 0;
    FUN__text__00400fc0(0);
    DAT_00aea5f8 = 0;
    DAT_00aea604 = 0;
  }
  return;
}


