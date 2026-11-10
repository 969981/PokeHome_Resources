/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0059ab60; name: FUN_.text__0059ab60
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0059ab60(long *param_1,long *param_2,undefined8 param_3)

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
  lVar1 = (**(code **)(*param_2 + 0x10))(param_2,0x100,0x10);
  if (lVar1 == 0) {
    (**(code **)(*param_2 + 0xb8))(param_2);
    FUN__text__00598af8(0,param_3);
    _DAT_00000010 = 0;
    _DAT_00000018 = 0x100;
    _DAT_00000020 = 0x10;
    _DAT_00000008 = param_2;
    *(long *)(uVar2 + 0x98) = *(long *)(uVar2 + 0x98) + -1;
    *param_1 = 0;
    return;
  }
  FUN__text__00598af8(lVar1,param_3);
  *(long **)(lVar1 + 8) = param_2;
  *(long *)(lVar1 + 0x10) = lVar1;
  *(undefined8 *)(lVar1 + 0x18) = 0x100;
  *(undefined8 *)(lVar1 + 0x20) = 0x10;
  *(long *)(uVar2 + 0x98) = *(long *)(uVar2 + 0x98) + -1;
  (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  *param_1 = lVar1;
  return;
}


