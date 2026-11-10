/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001b9b20; name: FUN_.text__001b9b20
 */


void FUN__text__001b9b20(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  if (*(int *)(param_1 + 0x4cc) == 0 || *(int *)(param_1 + 0x4cc) == (int)param_2) {
    return;
  }
  *(int *)(param_1 + 0x4cc) = (int)param_2;
  lVar2 = *(long *)(param_1 + 8) + 0x110;
  FUN__text__001ca748(param_1,param_2,0);
  lVar1 = FUN__text__0012cb14(lVar2,param_1 + 0xd0);
  *(bool *)(lVar1 + 0x15a) = *(int *)(param_1 + 0x4cc) == 2;
  lVar2 = FUN__text__0012cb14(lVar2,param_1 + 0x140);
  *(bool *)(lVar2 + 0x15a) = *(int *)(param_1 + 0x4cc) == 2;
  if (*(undefined8 **)(param_1 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl();
  }
  FUN__text__001ca91c(param_1,*(int *)**(undefined8 **)(param_1 + 0x18) != 1 &&
                              *(int *)(param_1 + 0x4cc) == 2);
  return;
}


