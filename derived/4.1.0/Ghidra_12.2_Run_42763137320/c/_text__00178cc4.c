/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00178cc4; name: FUN_.text__00178cc4
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN__text__00178cc4(uint *param_1,uint *param_2,long param_3,long *param_4)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  undefined8 local_60;
  undefined8 uStack_58;
  
  if (*(long *)(param_1 + 2) != 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl();
  }
  uVar2 = *param_2;
  *param_1 = uVar2;
  if (1 < uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN__text__0011a180(0x717b65);
  }
  lVar4 = *_DAT_008a1640;
  lVar1 = lVar4 + 8 + (ulong)uVar2 * 0x20;
  *(long *)(lVar1 + 0x18) = param_3;
  *(undefined8 *)(lVar1 + 8) = param_4;
  lVar3 = (**(code **)(*param_4 + 0x10))(param_4,param_3,8);
  *(long *)(lVar1 + 0x10) = lVar3;
  if (lVar3 == 0) {
    (**(code **)(**(long **)(lVar1 + 8) + 0xb8))();
    lVar3 = *(long *)(lVar1 + 0x10);
  }
  FUN__text__005f6b94(lVar3,lVar3 + 0xa8,param_3 + -0xa8,0);
  *(long *)(lVar4 + 8 + (ulong)uVar2 * 0x20) = lVar3;
  *(long *)(param_1 + 2) = lVar3;
  FUN__text__0016afa0(&local_60,lVar3);
  *(undefined8 *)(param_1 + 4) = local_60;
  *(undefined8 *)(param_1 + 6) = uStack_58;
  return *(undefined8 *)(param_1 + 2);
}


