/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001d8bac; name: FUN_.text__001d8bac
 */


void FUN__text__001d8bac(long param_1)

{
  char cVar1;
  long lVar2;
  long lVar3;
  
  if (*(long *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl();
  }
  if (**(char **)(*(long *)(param_1 + 0x18) + 0x30) != '\0') {
    lVar3 = *(long *)(param_1 + 8) + 0x110;
    lVar2 = FUN__text__0012cb14(lVar3,param_1 + 0x208);
    lVar3 = FUN__text__0012cb14(lVar3,param_1 + 0x278);
    if (*(char *)(param_1 + 0x6e0) != '\0') {
      if (*(char *)(lVar2 + 0x82) == '\0') {
        FUN__text__003a14c4(lVar2,1);
        cVar1 = *(char *)(lVar3 + 0x82);
      }
      else {
        cVar1 = *(char *)(lVar3 + 0x82);
      }
      if (cVar1 == '\0') {
        FUN__text__003a14c4(lVar3,1);
        return;
      }
    }
  }
  return;
}


