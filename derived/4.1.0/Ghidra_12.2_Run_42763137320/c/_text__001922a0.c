/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001922a0; name: FUN_.text__001922a0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__001922a0(long *param_1,long *param_2)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long local_48;
  
  param_1[1] = 0;
  lVar5 = _DAT_008a05a8;
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = lVar5 + 0x10;
  memset((void *)((long)param_1 + 0x14),0,0x3c4);
  FUN__text__0015c5c4(&local_48,param_2,_DAT_008a0590);
  if (param_1[1] != 0) {
    (**(code **)(*(long *)(param_1[1] + 0x48) + 0x18))();
  }
  param_1[1] = local_48;
  uVar6 = tpidr_el0;
  uVar6 = uVar6 & 0xffffffffffffe000;
  lVar5 = 0;
  while( true ) {
    uVar1 = (**(code **)(*param_2 + 0x10))(param_2,0x20,8);
    if (*(long *)(uVar6 + 0x98) == 0x10) break;
    lVar4 = uVar6 + 0x18;
    *(long **)(lVar4 + *(long *)(uVar6 + 0x98) * 8) = param_2;
    *(long *)(uVar6 + 0x98) = *(long *)(uVar6 + 0x98) + 1;
    FUN__text__00192280(uVar1,param_2);
    *(long *)(uVar6 + 0x98) = *(long *)(uVar6 + 0x98) + -1;
    lVar3 = *(long *)((long)param_1 + lVar5 + 0x18);
    *(undefined8 *)((long)param_1 + lVar5 + 0x18) = uVar1;
    if (lVar3 != 0) {
      plVar2 = *(long **)((long)param_1 + lVar5 + 0x20);
      (**(code **)(*plVar2 + 0x18))
                (plVar2,lVar3,*(undefined8 *)((long)param_1 + lVar5 + 0x28),
                 *(undefined8 *)((long)param_1 + lVar5 + 0x30));
    }
    *(long **)((long)param_1 + lVar5 + 0x20) = param_2;
    *(undefined8 *)((long)param_1 + lVar5 + 0x28) = 0x20;
    *(undefined8 *)((long)param_1 + lVar5 + 0x30) = 8;
    uVar1 = (**(code **)(*param_2 + 0x10))(param_2,0x20,8);
    if (*(long *)(uVar6 + 0x98) == 0x10) break;
    *(long **)(lVar4 + *(long *)(uVar6 + 0x98) * 8) = param_2;
    *(long *)(uVar6 + 0x98) = *(long *)(uVar6 + 0x98) + 1;
    FUN__text__00192280(uVar1,param_2);
    *(long *)(uVar6 + 0x98) = *(long *)(uVar6 + 0x98) + -1;
    lVar3 = *(long *)((long)param_1 + lVar5 + 0xb8);
    *(undefined8 *)((long)param_1 + lVar5 + 0xb8) = uVar1;
    if (lVar3 != 0) {
      plVar2 = *(long **)((long)param_1 + lVar5 + 0xc0);
      (**(code **)(*plVar2 + 0x18))
                (plVar2,lVar3,*(undefined8 *)((long)param_1 + lVar5 + 200),
                 *(undefined8 *)((long)param_1 + lVar5 + 0xd0));
    }
    *(long **)((long)param_1 + lVar5 + 0xc0) = param_2;
    *(undefined8 *)((long)param_1 + lVar5 + 200) = 0x20;
    *(undefined8 *)((long)param_1 + lVar5 + 0xd0) = 8;
    uVar1 = (**(code **)(*param_2 + 0x10))(param_2,0x20,8);
    if (*(long *)(uVar6 + 0x98) == 0x10) break;
    *(long **)(lVar4 + *(long *)(uVar6 + 0x98) * 8) = param_2;
    *(long *)(uVar6 + 0x98) = *(long *)(uVar6 + 0x98) + 1;
    FUN__text__00192280(uVar1,param_2);
    *(long *)(uVar6 + 0x98) = *(long *)(uVar6 + 0x98) + -1;
    lVar3 = *(long *)((long)param_1 + lVar5 + 0x158);
    *(undefined8 *)((long)param_1 + lVar5 + 0x158) = uVar1;
    if (lVar3 != 0) {
      plVar2 = *(long **)((long)param_1 + lVar5 + 0x160);
      (**(code **)(*plVar2 + 0x18))
                (plVar2,lVar3,*(undefined8 *)((long)param_1 + lVar5 + 0x168),
                 *(undefined8 *)((long)param_1 + lVar5 + 0x170));
    }
    *(long **)((long)param_1 + lVar5 + 0x160) = param_2;
    *(undefined8 *)((long)param_1 + lVar5 + 0x168) = 0x20;
    *(undefined8 *)((long)param_1 + lVar5 + 0x170) = 8;
    uVar1 = (**(code **)(*param_2 + 0x10))(param_2,0x20,8);
    if (*(long *)(uVar6 + 0x98) == 0x10) break;
    *(long **)(lVar4 + *(long *)(uVar6 + 0x98) * 8) = param_2;
    *(long *)(uVar6 + 0x98) = *(long *)(uVar6 + 0x98) + 1;
    FUN__text__00192280(uVar1,param_2);
    *(long *)(uVar6 + 0x98) = *(long *)(uVar6 + 0x98) + -1;
    lVar3 = *(long *)((long)param_1 + lVar5 + 0x1f8);
    *(undefined8 *)((long)param_1 + lVar5 + 0x1f8) = uVar1;
    if (lVar3 != 0) {
      plVar2 = *(long **)((long)param_1 + lVar5 + 0x200);
      (**(code **)(*plVar2 + 0x18))
                (plVar2,lVar3,*(undefined8 *)((long)param_1 + lVar5 + 0x208),
                 *(undefined8 *)((long)param_1 + lVar5 + 0x210));
    }
    *(long **)((long)param_1 + lVar5 + 0x200) = param_2;
    *(undefined8 *)((long)param_1 + lVar5 + 0x208) = 0x20;
    *(undefined8 *)((long)param_1 + lVar5 + 0x210) = 8;
    uVar1 = (**(code **)(*param_2 + 0x10))(param_2,0x20,8);
    if (*(long *)(uVar6 + 0x98) == 0x10) break;
    *(long **)(lVar4 + *(long *)(uVar6 + 0x98) * 8) = param_2;
    *(long *)(uVar6 + 0x98) = *(long *)(uVar6 + 0x98) + 1;
    FUN__text__00192280(uVar1,param_2);
    *(long *)(uVar6 + 0x98) = *(long *)(uVar6 + 0x98) + -1;
    lVar3 = *(long *)((long)param_1 + lVar5 + 0x298);
    *(undefined8 *)((long)param_1 + lVar5 + 0x298) = uVar1;
    if (lVar3 != 0) {
      plVar2 = *(long **)((long)param_1 + lVar5 + 0x2a0);
      (**(code **)(*plVar2 + 0x18))
                (plVar2,lVar3,*(undefined8 *)((long)param_1 + lVar5 + 0x2a8),
                 *(undefined8 *)((long)param_1 + lVar5 + 0x2b0));
    }
    *(long **)((long)param_1 + lVar5 + 0x2a0) = param_2;
    *(undefined8 *)((long)param_1 + lVar5 + 0x2a8) = 0x20;
    *(undefined8 *)((long)param_1 + lVar5 + 0x2b0) = 8;
    uVar1 = (**(code **)(*param_2 + 0x10))(param_2,0x20,8);
    if (*(long *)(uVar6 + 0x98) == 0x10) break;
    *(long **)(lVar4 + *(long *)(uVar6 + 0x98) * 8) = param_2;
    *(long *)(uVar6 + 0x98) = *(long *)(uVar6 + 0x98) + 1;
    FUN__text__00192280(uVar1,param_2);
    *(long *)(uVar6 + 0x98) = *(long *)(uVar6 + 0x98) + -1;
    lVar4 = *(long *)((long)param_1 + lVar5 + 0x338);
    *(undefined8 *)((long)param_1 + lVar5 + 0x338) = uVar1;
    if (lVar4 != 0) {
      plVar2 = *(long **)((long)param_1 + lVar5 + 0x340);
      (**(code **)(*plVar2 + 0x18))
                (plVar2,lVar4,*(undefined8 *)((long)param_1 + lVar5 + 0x348),
                 *(undefined8 *)((long)param_1 + lVar5 + 0x350));
    }
    lVar4 = lVar5 + 0x20;
    *(long **)((long)param_1 + lVar5 + 0x340) = param_2;
    *(undefined8 *)((long)param_1 + lVar5 + 0x348) = 0x20;
    *(undefined8 *)((long)param_1 + lVar5 + 0x350) = 8;
    lVar5 = lVar4;
    if (lVar4 == 0xa0) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN__text__00102c10();
}


