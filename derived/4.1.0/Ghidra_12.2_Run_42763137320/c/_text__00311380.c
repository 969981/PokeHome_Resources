/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00311380; name: FUN_.text__00311380
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00311380(long *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  lVar3 = _DAT_0089f690;
  uVar1 = tpidr_el0;
  uVar1 = uVar1 & 0xffffffffffffe000;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  *param_1 = lVar3 + 0x10;
  lVar3 = _DAT_008a2a80;
  if (uVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = 0;
    if (*(long *)(uVar1 + 0x98) != 0) {
      lVar2 = *(long *)(uVar1 + *(long *)(uVar1 + 0x98) * 8 + 0x10);
    }
  }
  *(undefined4 *)(param_1 + 10) = 0;
  *param_1 = lVar3 + 0x10;
  param_1[1] = lVar2;
  param_1[9] = lVar3 + 0x60;
  memset((void *)((long)param_1 + 0x54),0,260000);
  memset(param_1 + 0xfdf3,0,0x1f48);
  lVar3 = 0;
  do {
    if (*(long *)(uVar1 + 0x98) == 0x10) {
                    /* WARNING: Subroutine does not return */
      FUN__text__00102c10();
    }
    *(long **)(uVar1 + 0x18 + *(long *)(uVar1 + 0x98) * 8) = param_2;
    *(long *)(uVar1 + 0x98) = *(long *)(uVar1 + 0x98) + 1;
    lVar2 = (**(code **)(*param_2 + 0x10))(param_2,0x310,8);
    if (lVar2 == 0) {
      (**(code **)(*param_2 + 0xb8))(param_2);
    }
    FUN__text__00637458(lVar2,param_2,0,0,0);
    *(long **)(lVar2 + 8) = param_2;
    *(long *)(lVar2 + 0x10) = lVar2;
    *(undefined8 *)(lVar2 + 0x18) = 0x310;
    *(undefined8 *)(lVar2 + 0x20) = 8;
    *(long *)(uVar1 + 0x98) = *(long *)(uVar1 + 0x98) + -1;
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
    if (param_1[lVar3 + 0xfdf4] != 0) {
      (**(code **)(*(long *)(param_1[lVar3 + 0xfdf4] + 0x48) + 0x18))();
    }
    param_1[lVar3 + 0xfdf4] = lVar2;
    lVar3 = lVar3 + 1;
  } while (lVar3 != 1000);
  return;
}


