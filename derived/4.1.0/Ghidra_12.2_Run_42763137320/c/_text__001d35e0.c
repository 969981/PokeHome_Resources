/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001d35e0; name: FUN_.text__001d35e0
 */


undefined4 FUN__text__001d35e0(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined4 uVar3;
  
  uVar1 = param_2[1];
  *(undefined8 *)(param_1 + 0x20) = *param_2;
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  if (*(long *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl();
  }
  lVar2 = FUN__text__001961a8(*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x10),
                              (undefined8 *)(param_1 + 0x20));
  uVar3 = 0;
  if ((lVar2 != 0) && (uVar3 = 1, *(int *)(lVar2 + 0x2c) != 0x1e)) {
    uVar3 = 2;
  }
  return uVar3;
}


