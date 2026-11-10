/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001c6f34; name: FUN_.text__001c6f34
 */


void FUN__text__001c6f34(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  
  iVar1 = *(int *)(*(long *)(param_1 + 0x30) + 0x1e4);
  if (*(long *)(param_1 + 0x38) == param_3) {
    lVar2 = *(long *)(param_1 + 8);
    if ((lVar2 == 0) || (lVar3 = *(long *)(param_1 + 0x18), lVar3 == 0)) {
LAB__text__001c6fe8:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl();
    }
    iVar4 = iVar1 + 1;
  }
  else {
    if (*(long *)(param_1 + 0xa8) != param_3) {
      return;
    }
    lVar2 = *(long *)(param_1 + 8);
    if ((lVar2 == 0) || (lVar3 = *(long *)(param_1 + 0x18), lVar3 == 0)) goto LAB__text__001c6fe8;
    iVar4 = iVar1 + 2;
  }
  FUN__text__001c3230(lVar2,lVar3,1);
  if (iVar4 % 3 == iVar1) {
    return;
  }
  FUN__text__0019e830(*(undefined8 *)(param_1 + 0x30),iVar1);
  return;
}


