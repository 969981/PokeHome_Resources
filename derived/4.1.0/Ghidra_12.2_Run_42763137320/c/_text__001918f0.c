/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001918f0; name: FUN_.text__001918f0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__001918f0(long *param_1,long *param_2,ulong param_3,long param_4)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long lStack_68;
  
  lVar5 = _DAT_008a0588;
  param_1[2] = param_4;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = lVar5 + 0x10;
  param_1[1] = param_3;
  memset((void *)((long)param_1 + 0x2c),0,0x3c4);
  FUN__text__0015c5c4(&lStack_68,param_2,_DAT_008a0590);
  if (param_1[4] != 0) {
    (**(code **)(*(long *)(param_1[4] + 0x48) + 0x18))();
  }
  lVar5 = 0;
  param_1[4] = lStack_68;
  uVar6 = param_3 & 0xffffffff |
          (ulong)(uint)((int)param_4 + (int)((ulong)param_4 >> 0x20) * 6 +
                       (int)(param_3 >> 0x20) * 0x1e) << 0x20;
  uVar8 = tpidr_el0;
  uVar8 = uVar8 & 0xffffffffffffe000;
  lVar7 = 0;
  while( true ) {
    uVar1 = (**(code **)(*param_2 + 0x10))(param_2,0x60,8);
    if (*(long *)(uVar8 + 0x98) == 0x10) break;
    lVar4 = uVar8 + 0x18;
    *(long **)(lVar4 + *(long *)(uVar8 + 0x98) * 8) = param_2;
    *(long *)(uVar8 + 0x98) = *(long *)(uVar8 + 0x98) + 1;
    FUN__text__00191894(uVar1,param_2,uVar6,lVar5);
    *(long *)(uVar8 + 0x98) = *(long *)(uVar8 + 0x98) + -1;
    lVar3 = *(long *)((long)param_1 + lVar7 + 0x30);
    *(undefined8 *)((long)param_1 + lVar7 + 0x30) = uVar1;
    if (lVar3 != 0) {
      plVar2 = *(long **)((long)param_1 + lVar7 + 0x38);
      (**(code **)(*plVar2 + 0x18))
                (plVar2,lVar3,*(undefined8 *)((long)param_1 + lVar7 + 0x40),
                 *(undefined8 *)((long)param_1 + lVar7 + 0x48));
    }
    *(long **)((long)param_1 + lVar7 + 0x38) = param_2;
    *(undefined8 *)((long)param_1 + lVar7 + 0x40) = 0x60;
    *(undefined8 *)((long)param_1 + lVar7 + 0x48) = 8;
    uVar1 = (**(code **)(*param_2 + 0x10))(param_2,0x60,8);
    if (*(long *)(uVar8 + 0x98) == 0x10) break;
    *(long **)(lVar4 + *(long *)(uVar8 + 0x98) * 8) = param_2;
    *(long *)(uVar8 + 0x98) = *(long *)(uVar8 + 0x98) + 1;
    FUN__text__00191894(uVar1,param_2,uVar6,lVar5 + 1);
    *(long *)(uVar8 + 0x98) = *(long *)(uVar8 + 0x98) + -1;
    lVar3 = *(long *)((long)param_1 + lVar7 + 0xd0);
    *(undefined8 *)((long)param_1 + lVar7 + 0xd0) = uVar1;
    if (lVar3 != 0) {
      plVar2 = *(long **)((long)param_1 + lVar7 + 0xd8);
      (**(code **)(*plVar2 + 0x18))
                (plVar2,lVar3,*(undefined8 *)((long)param_1 + lVar7 + 0xe0),
                 *(undefined8 *)((long)param_1 + lVar7 + 0xe8));
    }
    *(long **)((long)param_1 + lVar7 + 0xd8) = param_2;
    *(undefined8 *)((long)param_1 + lVar7 + 0xe0) = 0x60;
    *(undefined8 *)((long)param_1 + lVar7 + 0xe8) = 8;
    uVar1 = (**(code **)(*param_2 + 0x10))(param_2,0x60,8);
    if (*(long *)(uVar8 + 0x98) == 0x10) break;
    *(long **)(lVar4 + *(long *)(uVar8 + 0x98) * 8) = param_2;
    *(long *)(uVar8 + 0x98) = *(long *)(uVar8 + 0x98) + 1;
    FUN__text__00191894(uVar1,param_2,uVar6,lVar5 + 2);
    *(long *)(uVar8 + 0x98) = *(long *)(uVar8 + 0x98) + -1;
    lVar3 = *(long *)((long)param_1 + lVar7 + 0x170);
    *(undefined8 *)((long)param_1 + lVar7 + 0x170) = uVar1;
    if (lVar3 != 0) {
      plVar2 = *(long **)((long)param_1 + lVar7 + 0x178);
      (**(code **)(*plVar2 + 0x18))
                (plVar2,lVar3,*(undefined8 *)((long)param_1 + lVar7 + 0x180),
                 *(undefined8 *)((long)param_1 + lVar7 + 0x188));
    }
    *(long **)((long)param_1 + lVar7 + 0x178) = param_2;
    *(undefined8 *)((long)param_1 + lVar7 + 0x180) = 0x60;
    *(undefined8 *)((long)param_1 + lVar7 + 0x188) = 8;
    uVar1 = (**(code **)(*param_2 + 0x10))(param_2,0x60,8);
    if (*(long *)(uVar8 + 0x98) == 0x10) break;
    *(long **)(lVar4 + *(long *)(uVar8 + 0x98) * 8) = param_2;
    *(long *)(uVar8 + 0x98) = *(long *)(uVar8 + 0x98) + 1;
    FUN__text__00191894(uVar1,param_2,uVar6,lVar5 + 3);
    *(long *)(uVar8 + 0x98) = *(long *)(uVar8 + 0x98) + -1;
    lVar3 = *(long *)((long)param_1 + lVar7 + 0x210);
    *(undefined8 *)((long)param_1 + lVar7 + 0x210) = uVar1;
    if (lVar3 != 0) {
      plVar2 = *(long **)((long)param_1 + lVar7 + 0x218);
      (**(code **)(*plVar2 + 0x18))
                (plVar2,lVar3,*(undefined8 *)((long)param_1 + lVar7 + 0x220),
                 *(undefined8 *)((long)param_1 + lVar7 + 0x228));
    }
    *(long **)((long)param_1 + lVar7 + 0x218) = param_2;
    *(undefined8 *)((long)param_1 + lVar7 + 0x220) = 0x60;
    *(undefined8 *)((long)param_1 + lVar7 + 0x228) = 8;
    uVar1 = (**(code **)(*param_2 + 0x10))(param_2,0x60,8);
    if (*(long *)(uVar8 + 0x98) == 0x10) break;
    *(long **)(lVar4 + *(long *)(uVar8 + 0x98) * 8) = param_2;
    *(long *)(uVar8 + 0x98) = *(long *)(uVar8 + 0x98) + 1;
    FUN__text__00191894(uVar1,param_2,uVar6,lVar5 + 4);
    *(long *)(uVar8 + 0x98) = *(long *)(uVar8 + 0x98) + -1;
    lVar3 = *(long *)((long)param_1 + lVar7 + 0x2b0);
    *(undefined8 *)((long)param_1 + lVar7 + 0x2b0) = uVar1;
    if (lVar3 != 0) {
      plVar2 = *(long **)((long)param_1 + lVar7 + 0x2b8);
      (**(code **)(*plVar2 + 0x18))
                (plVar2,lVar3,*(undefined8 *)((long)param_1 + lVar7 + 0x2c0),
                 *(undefined8 *)((long)param_1 + lVar7 + 0x2c8));
    }
    *(long **)((long)param_1 + lVar7 + 0x2b8) = param_2;
    *(undefined8 *)((long)param_1 + lVar7 + 0x2c0) = 0x60;
    *(undefined8 *)((long)param_1 + lVar7 + 0x2c8) = 8;
    uVar1 = (**(code **)(*param_2 + 0x10))(param_2,0x60,8);
    if (*(long *)(uVar8 + 0x98) == 0x10) break;
    *(long **)(lVar4 + *(long *)(uVar8 + 0x98) * 8) = param_2;
    *(long *)(uVar8 + 0x98) = *(long *)(uVar8 + 0x98) + 1;
    FUN__text__00191894(uVar1,param_2,uVar6,lVar5 + 5);
    *(long *)(uVar8 + 0x98) = *(long *)(uVar8 + 0x98) + -1;
    lVar4 = *(long *)((long)param_1 + lVar7 + 0x350);
    *(undefined8 *)((long)param_1 + lVar7 + 0x350) = uVar1;
    if (lVar4 != 0) {
      plVar2 = *(long **)((long)param_1 + lVar7 + 0x358);
      (**(code **)(*plVar2 + 0x18))
                (plVar2,lVar4,*(undefined8 *)((long)param_1 + lVar7 + 0x360),
                 *(undefined8 *)((long)param_1 + lVar7 + 0x368));
    }
    lVar4 = lVar7 + 0x20;
    *(long **)((long)param_1 + lVar7 + 0x358) = param_2;
    lVar5 = lVar5 + 0x100000000;
    *(undefined8 *)((long)param_1 + lVar7 + 0x360) = 0x60;
    *(undefined8 *)((long)param_1 + lVar7 + 0x368) = 8;
    lVar7 = lVar4;
    if (lVar4 == 0xa0) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN__text__00102c10();
}


