/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00145438; name: FUN_.text__00145438
 */


void FUN__text__00145438(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = 0;
  if (lVar1 != 0) {
    FUN__text__00146d30(lVar1);
    (**(code **)(**(long **)(param_1 + 0x60) + 0x18))
              (*(long **)(param_1 + 0x60),lVar1,*(undefined8 *)(param_1 + 0x68),
               *(undefined8 *)(param_1 + 0x70));
    lVar1 = *(long *)(param_1 + 0x58);
    *(undefined8 *)(param_1 + 0x58) = 0;
    if (lVar1 != 0) {
      FUN__text__00146d30(lVar1);
                    /* WARNING: Could not recover jumptable at 0x001454a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(long **)(param_1 + 0x60) + 0x18))
                (*(long **)(param_1 + 0x60),lVar1,*(undefined8 *)(param_1 + 0x68),
                 *(undefined8 *)(param_1 + 0x70));
      return;
    }
  }
  return;
}


