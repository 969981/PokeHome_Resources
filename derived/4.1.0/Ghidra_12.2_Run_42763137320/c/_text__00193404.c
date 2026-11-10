/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00193404; name: FUN_.text__00193404
 */


void FUN__text__00193404(long *param_1,long param_2,undefined8 param_3,undefined4 *param_4,
                        int *param_5)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  
  if ((param_4 == (undefined4 *)0x0) || (param_5 == (int *)0x0)) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl();
  }
  lVar3 = FUN__text__00195358();
  if ((lVar3 == 0) || (*(int *)(lVar3 + 0x18) == 0)) {
    *param_1 = 0;
    *param_5 = -1;
    *param_4 = 0xffffffff;
    return;
  }
  uVar1 = *(ulong *)(lVar3 + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x10);
  lVar3 = *(long *)(*(long *)(*(long *)(*(long *)(param_2 + 0x40) + (uVar1 & 0xffffffff) * 0x20 +
                                       0x10) + 0x10) + 8);
  *param_1 = lVar3;
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  *param_5 = (int)uVar2 + (int)((ulong)uVar2 >> 0x20) * 6;
  *param_4 = (int)(uVar1 >> 0x20);
  return;
}


