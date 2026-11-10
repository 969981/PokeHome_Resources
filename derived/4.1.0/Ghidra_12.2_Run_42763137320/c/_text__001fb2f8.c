/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001fb2f8; name: FUN_.text__001fb2f8
 */


bool FUN__text__001fb2f8(long param_1,uint param_2)

{
  byte bVar1;
  bool bVar2;
  long lVar3;
  
  if (param_2 < 4) {
    lVar3 = FUN__text__0013e1f0(*(undefined8 *)(param_1 + 0xd0));
    if (lVar3 != 0) {
      bVar1 = *(int *)(param_1 + 0xa8) != 0;
      if (*(int *)(param_1 + 0xac) != 0) {
        bVar1 = bVar1 + 1;
      }
      if (*(int *)(param_1 + 0xb0) != 0) {
        bVar1 = bVar1 + 1;
      }
      if (*(int *)(param_1 + 0xb4) != 0) {
        bVar1 = bVar1 + 1;
      }
      if ((bVar1 < 2) || (*(int *)(param_1 + (ulong)param_2 * 4 + 0xa8) == 0)) {
        return false;
      }
      bVar2 = false;
      if ((*(uint *)(param_1 + 0xe0) != param_2) && (-1 < (int)*(uint *)(param_1 + 0xe0))) {
        lVar3 = FUN__text__0013e1f0(*(undefined8 *)(param_1 + 0xd0),param_2);
        bVar2 = *(char *)(lVar3 + 0x82) != '\0';
      }
      return bVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl();
}


