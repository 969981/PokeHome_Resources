/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00214dfc; name: FUN_.text__00214dfc
 */


int FUN__text__00214dfc(long *param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  
  uVar3 = tpidr_el0;
  uVar3 = uVar3 & 0xffffffffffffe000;
  lVar2 = *(long *)(uVar3 + 0x98);
  if (param_4 == (long *)0x0) {
    if (lVar2 == 0x10) goto LAB__text__00214f2c;
    param_4 = *(long **)(DAT_008e1540 + 8);
  }
  else if (lVar2 == 0x10) {
LAB__text__00214f2c:
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10();
  }
  *(long **)(uVar3 + lVar2 * 8 + 0x18) = param_4;
  *(long *)(uVar3 + 0x98) = *(long *)(uVar3 + 0x98) + 1;
  lVar2 = (**(code **)(*param_4 + 0x10))(param_4,0xb0,8);
  if (lVar2 == 0) {
    (**(code **)(*param_4 + 0xb8))(param_4);
  }
  FUN__text__005dbcb4(lVar2,param_2,param_3,0);
  *(long **)(lVar2 + 8) = param_4;
  *(long *)(lVar2 + 0x10) = lVar2;
  *(undefined8 *)(lVar2 + 0x18) = 0xb0;
  *(undefined8 *)(lVar2 + 0x20) = 8;
  *(long *)(uVar3 + 0x98) = *(long *)(uVar3 + 0x98) + -1;
  (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  if (*param_1 != 0) {
    (**(code **)(*(long *)(*param_1 + 0x48) + 0x18))();
  }
  *param_1 = lVar2;
  iVar1 = FUN__text__005dbdec(lVar2);
  if ((iVar1 != 0) && (*param_1 != 0)) {
    (**(code **)(*(long *)(*param_1 + 0x48) + 0x18))();
    *param_1 = 0;
  }
  return iVar1;
}


