/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005dec04; name: FUN_.text__005dec04
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__005dec04(long *param_1)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  
  param_1[7] = 0;
  lVar2 = _DAT_0089f690;
  *(undefined4 *)(param_1 + 8) = 0;
  uVar1 = tpidr_el0;
  uVar1 = uVar1 & 0xffffffffffffe000;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  *param_1 = lVar2 + 0x10;
  lVar2 = _DAT_0089fff8;
  if (uVar1 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = 0;
    if (*(long *)(uVar1 + 0x98) != 0) {
      lVar4 = *(long *)(uVar1 + *(long *)(uVar1 + 0x98) * 8 + 0x10);
    }
  }
  param_1[0xb] = 0;
  param_1[10] = lVar2 + 0xc0;
  *param_1 = lVar2 + 0x10;
  param_1[1] = lVar4;
  param_1[9] = lVar2 + 0x50;
  if (*(long *)(uVar1 + 0x98) == 0x10) {
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10();
  }
  plVar5 = *(long **)(*_DAT_0089f7d0 + 8);
  *(long **)(uVar1 + *(long *)(uVar1 + 0x98) * 8 + 0x18) = plVar5;
  *(long *)(uVar1 + 0x98) = *(long *)(uVar1 + 0x98) + 1;
  plVar3 = (long *)(**(code **)(*plVar5 + 0x10))(plVar5,0x68,8);
  lVar2 = _DAT_0089f7d8;
  if (plVar3 == (long *)0x0) {
    (**(code **)(*plVar5 + 0xb8))(plVar5);
    return;
  }
  plVar3[7] = 0;
  *(undefined4 *)(plVar3 + 8) = 0;
  *(undefined4 *)(plVar3 + 6) = 0;
  plVar3[0xc] = (long)(param_1 + 10);
  plVar3[10] = 0;
  plVar3[0xb] = 0;
  plVar3[9] = lVar2 + 0x48;
  *plVar3 = lVar2 + 0x10;
  plVar3[1] = (long)plVar5;
  plVar3[2] = (long)plVar3;
  plVar3[3] = 0x68;
  plVar3[4] = 8;
  plVar3[5] = 0;
  *(long *)(uVar1 + 0x98) = *(long *)(uVar1 + 0x98) + -1;
  (**(code **)(plVar3[9] + 0x10))();
  if (param_1[0xb] != 0) {
    (**(code **)(*(long *)(param_1[0xb] + 0x48) + 0x18))();
  }
  param_1[0xb] = (long)plVar3;
  return;
}


