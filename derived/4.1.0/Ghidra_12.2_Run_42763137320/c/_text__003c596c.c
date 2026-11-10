/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003c596c; name: FUN_.text__003c596c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__003c596c(undefined8 param_1,int param_2)

{
  if (param_2 < 0xc) {
    FUN__text__003d0ed4(param_1,*(undefined8 *)
                                 ((long)*(int *)((long)param_2 * 4 + 0x73a7f0) * 8 + 0x883b70));
    return;
  }
  FUN__text__003d0ed4(param_1,_DAT_00883b80);
  return;
}


