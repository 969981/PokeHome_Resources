/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001cf5fc; name: FUN_.text__001cf5fc
 */


void FUN__text__001cf5fc(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  if (*(long *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl();
  }
  lVar3 = *(long *)(param_1 + 8);
  lVar1 = FUN__text__001961e8(*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x10),
                              *(undefined4 *)
                               (*(long *)(param_1 + 0x38) + (long)*(int *)(param_1 + 0x30) * 4 +
                               0x1b0));
  if (*(int *)(lVar1 + 8) == 1) {
    lVar3 = lVar3 + 0x110;
    uVar2 = FUN__text__0012cb14(lVar3,param_1 + 0xd0);
    FUN__text__003a14e8(uVar2,0);
    uVar2 = FUN__text__0012cb14(lVar3,param_1 + 0x140);
    FUN__text__003a14e8(uVar2,0);
  }
  FUN__text__001ca7a0(param_1,0);
  FUN__text__001cab30(param_1);
  return;
}


