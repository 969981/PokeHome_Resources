/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0030e2f0; name: FUN_.text__0030e2f0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0030e2f0(long *param_1,long *param_2,undefined8 *param_3)

{
  long lVar1;
  ulong uVar2;
  
  uVar2 = tpidr_el0;
  uVar2 = uVar2 & 0xffffffffffffe000;
  if (*(long *)(uVar2 + 0x98) == 0x10) {
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10();
  }
  *(long **)(uVar2 + *(long *)(uVar2 + 0x98) * 8 + 0x18) = param_2;
  *(long *)(uVar2 + 0x98) = *(long *)(uVar2 + 0x98) + 1;
  lVar1 = (**(code **)(*param_2 + 0x10))(param_2,0x1b8,8);
  if (lVar1 == 0) {
    (**(code **)(*param_2 + 0xb8))(param_2);
    FUN__text__0030e61c(0,*param_3);
    _DAT_00000018 = 0;
    _DAT_00000020 = 0x1b8;
    _DAT_00000028 = 8;
    _DAT_00000010 = param_2;
    *(long *)(uVar2 + 0x98) = *(long *)(uVar2 + 0x98) + -1;
    *param_1 = 0;
    return;
  }
  FUN__text__0030e61c(lVar1,*param_3);
  *(long **)(lVar1 + 0x10) = param_2;
  *(long *)(lVar1 + 0x18) = lVar1;
  *(undefined8 *)(lVar1 + 0x20) = 0x1b8;
  *(undefined8 *)(lVar1 + 0x28) = 8;
  *(long *)(uVar2 + 0x98) = *(long *)(uVar2 + 0x98) + -1;
  (**(code **)(*(long *)(lVar1 + 0x50) + 0x10))();
  *param_1 = lVar1;
  return;
}


