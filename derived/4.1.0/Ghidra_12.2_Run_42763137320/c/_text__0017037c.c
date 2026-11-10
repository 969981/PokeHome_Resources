/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0017037c; name: FUN_.text__0017037c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN__text__0017037c(int *param_1,int *param_2,long param_3,long *param_4)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 local_40;
  undefined8 uStack_38;
  
  if (*(long *)(param_1 + 2) != 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl();
  }
  iVar1 = *param_2;
  *param_1 = iVar1;
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN__text__0011a180(0x717b65);
  }
  lVar3 = *_DAT_008a12d0;
  *(long **)(lVar3 + 0x10) = param_4;
  *(long *)(lVar3 + 0x20) = param_3;
  lVar2 = (**(code **)(*param_4 + 0x10))(param_4,param_3,8);
  *(long *)(lVar3 + 0x18) = lVar2;
  if (lVar2 == 0) {
    (**(code **)(**(long **)(lVar3 + 0x10) + 0xb8))();
    lVar2 = *(long *)(lVar3 + 0x18);
  }
  FUN__text__005f6b94(lVar2,lVar2 + 0xa8,param_3 + -0xa8,0);
  *(long *)(lVar3 + 8) = lVar2;
  *(long *)(param_1 + 2) = lVar2;
  FUN__text__0016afa0(&local_40,lVar2);
  *(undefined8 *)(param_1 + 4) = local_40;
  *(undefined8 *)(param_1 + 6) = uStack_38;
  return *(undefined8 *)(param_1 + 2);
}


