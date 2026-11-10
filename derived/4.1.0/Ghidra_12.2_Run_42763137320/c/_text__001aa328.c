/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001aa328; name: FUN_.text__001aa328
 */


bool FUN__text__001aa328(long param_1,char *param_2)

{
  undefined8 uVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  if ((((*(char *)(param_1 + 0x20) == *param_2) &&
       (*(int *)(param_1 + 0x24) == *(int *)(param_2 + 4))) &&
      (*(int *)(param_1 + 0x28) == *(int *)(param_2 + 8))) &&
     ((*(int *)(param_1 + 0x2c) == *(int *)(param_2 + 0xc) &&
      (*(int *)(param_1 + 0x30) == *(int *)(param_2 + 0x10))))) {
    bVar2 = true;
  }
  else {
    if (*(long *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl();
    }
    uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x10);
    lVar3 = FUN__text__00195358(uVar5);
    bVar2 = false;
    if (lVar3 != 0) {
      uVar1 = *(undefined8 *)(lVar3 + 8);
      lVar3 = *(long *)(lVar3 + 0x10);
      lVar4 = FUN__text__00195358(uVar5,(char *)(param_1 + 0x20));
      bVar2 = false;
      if (lVar4 != 0) {
        if ((int)*(undefined8 *)(lVar4 + 8) == (int)uVar1) {
          return (int)((ulong)*(undefined8 *)(lVar4 + 8) >> 0x20) == (int)((ulong)uVar1 >> 0x20) &&
                 *(long *)(lVar4 + 0x10) == lVar3;
        }
        return false;
      }
    }
  }
  return bVar2;
}


