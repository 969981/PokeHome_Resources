/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002feedc; name: FUN_.text__002feedc
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__002feedc(undefined8 *param_1,long *param_2,undefined8 *param_3,undefined8 param_4)

{
  long lVar1;
  ulong uVar2;
  
  *param_1 = *param_3;
  param_1[1] = param_3[1];
  param_1[2] = param_3[2];
  lVar1 = param_3[3];
  param_1[3] = lVar1;
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  }
  uVar2 = tpidr_el0;
  uVar2 = uVar2 & 0xffffffffffffe000;
  if (*(long *)(uVar2 + 0x98) == 0x10) {
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10();
  }
  *(long **)(uVar2 + *(long *)(uVar2 + 0x98) * 8 + 0x18) = param_2;
  *(long *)(uVar2 + 0x98) = *(long *)(uVar2 + 0x98) + 1;
  lVar1 = (**(code **)(*param_2 + 0x10))(param_2,0x490,0x10);
  if (lVar1 == 0) {
    (**(code **)(*param_2 + 0xb8))(param_2);
    FUN__text__002ff2c0(0,param_3,param_4);
    _DAT_00000010 = 0;
    _DAT_00000018 = 0x490;
    _DAT_00000020 = 0x10;
    _DAT_00000008 = param_2;
    *(long *)(uVar2 + 0x98) = *(long *)(uVar2 + 0x98) + -1;
  }
  else {
    FUN__text__002ff2c0(lVar1,param_3,param_4);
    *(long **)(lVar1 + 8) = param_2;
    *(long *)(lVar1 + 0x10) = lVar1;
    *(undefined8 *)(lVar1 + 0x18) = 0x490;
    *(undefined8 *)(lVar1 + 0x20) = 0x10;
    *(long *)(uVar2 + 0x98) = *(long *)(uVar2 + 0x98) + -1;
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  }
  param_1[4] = lVar1;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  return;
}


