/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0059fe10; name: FUN_.text__0059fe10
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0059fe10(long *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                        undefined8 param_5)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *param_1 = _DAT_0089f690 + 0x10;
  uVar2 = tpidr_el0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  lVar1 = _DAT_008a5580;
  uVar2 = uVar2 & 0xffffffffffffe000;
  if ((uVar2 == 0) || (*(long *)(uVar2 + 0x98) == 0)) {
    plVar3 = (long *)0x0;
  }
  else {
    plVar3 = *(long **)(uVar2 + *(long *)(uVar2 + 0x98) * 8 + 0x10);
  }
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  plVar5 = param_1 + 0xb;
  *plVar5 = 0;
  param_1[0xe] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x20) = param_4;
  param_1[9] = lVar1 + 0x50;
  *(undefined4 *)((long)param_1 + 0x104) = 0xffffffff;
  *(undefined2 *)(param_1 + 0x21) = 1;
  *param_1 = lVar1 + 0x10;
  param_1[1] = (long)plVar3;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  lVar1 = (**(code **)(*plVar3 + 0x10))(plVar3,0x2d0,8);
  if (*(long *)(uVar2 + 0x98) == 0x10) {
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10();
  }
  *(long **)(uVar2 + *(long *)(uVar2 + 0x98) * 8 + 0x18) = plVar3;
  *(long *)(uVar2 + 0x98) = *(long *)(uVar2 + 0x98) + 1;
  FUN__text__005a03e4(lVar1,plVar3,param_5,param_2,param_3,param_4);
  FUN__text__005a03e4(lVar1 + 0x168,plVar3,param_5,param_2,param_3,param_4);
  *(long *)(uVar2 + 0x98) = *(long *)(uVar2 + 0x98) + -1;
  lVar4 = *plVar5;
  *plVar5 = lVar1;
  if (lVar4 != 0) {
    uVar2 = param_1[0xd];
    if (0x167 < uVar2) {
      uVar2 = uVar2 / 0x168;
      lVar1 = lVar4;
      do {
        FUN__text__005a0590(lVar1);
        uVar2 = uVar2 - 1;
        lVar1 = lVar1 + 0x168;
      } while (uVar2 != 0);
      uVar2 = param_1[0xd];
    }
    (**(code **)(*(long *)param_1[0xc] + 0x18))((long *)param_1[0xc],lVar4,uVar2,param_1[0xe]);
  }
  param_1[0xc] = (long)plVar3;
  param_1[0xd] = 0x2d0;
  param_1[0xe] = 8;
  return;
}


