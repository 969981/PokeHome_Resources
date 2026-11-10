/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001b99d8; name: FUN_.text__001b99d8
 */


void FUN__text__001b99d8(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = *(long *)(param_1 + 0x18);
  if ((lVar3 == 0) || (lVar4 = *(long *)(lVar3 + 0x10), lVar4 == 0)) goto LAB__text__001b9b1c;
  iVar1 = *(int *)(param_1 + 0x30);
  if ((iVar1 == 0) && (**(int **)(lVar3 + 0x38) == 0)) {
    *(undefined4 *)(param_1 + 0x4cc) = 0;
    lVar3 = *(long *)(param_1 + 8) + 0x110;
    uVar2 = FUN__text__0012cb14(lVar3,param_1 + 0x1b0);
    FUN__text__003a14c4(uVar2,0);
    if (*(int *)(param_1 + 0x4cc) != 0) {
      iVar1 = *(int *)(param_1 + 0x30);
      goto LAB__text__001b9a20;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x4cc) = 2;
    lVar3 = *(long *)(param_1 + 8) + 0x110;
LAB__text__001b9a20:
    FUN__text__001961e8(lVar4,*(undefined4 *)(*(long *)(param_1 + 0x38) + (long)iVar1 * 4 + 0x1b0));
    iVar1 = FUN__text__00192b70();
    if (iVar1 == 1) {
      uVar2 = FUN__text__0012cb14(lVar3,param_1 + 0xd0);
      FUN__text__003a14e8(uVar2,0);
      uVar2 = FUN__text__0012cb14(lVar3,param_1 + 0x140);
      FUN__text__003a14e8(uVar2,0);
    }
  }
  FUN__text__001ca748(param_1,*(undefined4 *)(param_1 + 0x4cc),0);
  lVar4 = FUN__text__0012cb14(lVar3,param_1 + 0xd0);
  *(bool *)(lVar4 + 0x15a) = *(int *)(param_1 + 0x4cc) == 2;
  lVar3 = FUN__text__0012cb14(lVar3,param_1 + 0x140);
  *(bool *)(lVar3 + 0x15a) = *(int *)(param_1 + 0x4cc) == 2;
  if (*(undefined8 **)(param_1 + 0x18) != (undefined8 *)0x0) {
    FUN__text__001ca91c(param_1,*(int *)**(undefined8 **)(param_1 + 0x18) != 1 &&
                                *(int *)(param_1 + 0x4cc) == 2);
    FUN__text__001cab30(param_1);
    return;
  }
LAB__text__001b9b1c:
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl();
}


