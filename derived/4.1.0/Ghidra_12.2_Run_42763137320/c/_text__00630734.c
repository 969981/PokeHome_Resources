/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00630734; name: FUN_.text__00630734
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00630734(long *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  lVar3 = _DAT_0089f690;
  uVar1 = tpidr_el0;
  uVar1 = uVar1 & 0xffffffffffffe000;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = lVar3 + 0x10;
  if (uVar1 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = 0;
    if (*(long *)(uVar1 + 0x98) != 0) {
      lVar3 = *(long *)(uVar1 + *(long *)(uVar1 + 0x98) * 8 + 0x10);
    }
  }
  *(undefined4 *)(param_1 + 10) = 0;
  lVar2 = _DAT_008a62e8;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  param_1[0x60] = 0;
  param_1[0x61] = 0;
  *param_1 = lVar2 + 0x10;
  param_1[1] = lVar3;
  param_1[9] = lVar2 + 0x48;
  *(undefined1 *)((long)param_1 + 0x54) = 2;
  lVar3 = (**(code **)(*param_2 + 0x10))(param_2,0x20,8);
  if (*(long *)(uVar1 + 0x98) == 0x10) {
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10();
  }
  *(long **)(uVar1 + *(long *)(uVar1 + 0x98) * 8 + 0x18) = param_2;
  *(long *)(uVar1 + 0x98) = *(long *)(uVar1 + 0x98) + 1;
  FUN__text__0060eea4();
  *(long *)(uVar1 + 0x98) = *(long *)(uVar1 + 0x98) + -1;
  puVar4 = (undefined8 *)param_1[0x5e];
  param_1[0x5e] = lVar3;
  if (puVar4 != (undefined8 *)0x0) {
    (**(code **)*puVar4)(puVar4);
    (**(code **)(*(long *)param_1[0x5f] + 0x18))
              ((long *)param_1[0x5f],puVar4,param_1[0x60],param_1[0x61]);
    lVar3 = param_1[0x5e];
  }
  param_1[0x5f] = (long)param_2;
  param_1[0x60] = 0x20;
  param_1[0x61] = 8;
  FUN__text__0060ef50(lVar3,(long)param_1 + 0x55);
  return;
}


