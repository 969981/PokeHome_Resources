/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003cb630; name: FUN_.text__003cb630
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__003cb630(long *param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  
  if (param_4 != 0) {
    if (0xf0f0f0f0f0f0f0 < param_4) {
      FUN__text__003cb830(param_1);
                    /* WARNING: Subroutine does not return */
      FUN__text__001187c0(0x71a95e);
    }
    lVar4 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],param_4 * 0x110,0x10);
    if (lVar4 == 0) {
      (**(code **)(*(long *)param_1[3] + 0xb8))();
    }
    *param_1 = lVar4;
    param_1[1] = lVar4;
    param_1[2] = lVar4 + param_4 * 0x110;
    if (param_2 != param_3) {
      uVar7 = tpidr_el0;
      lVar6 = 0;
      uVar7 = uVar7 & 0xffffffffffffe000;
      lVar5 = *(long *)(uVar7 + 0x98);
      lVar1 = _DAT_0089f6b8 + 0x10;
      do {
        if (lVar5 == 0x10) {
                    /* WARNING: Subroutine does not return */
          FUN__text__00102c10();
        }
        plVar2 = (long *)(lVar4 + lVar6);
        lVar3 = param_2 + lVar6;
        *(long *)((uVar7 | 0x18) + lVar5 * 8) = param_1[3];
        *(long *)(uVar7 + 0x98) = *(long *)(uVar7 + 0x98) + 1;
        *plVar2 = lVar1;
        lVar5 = *(long *)(lVar3 + 8);
        plVar2[1] = lVar5;
        if (lVar5 != 0) {
          (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
        }
        plVar2[2] = 0;
        plVar2[4] = 0;
        plVar2[5] = 0;
        plVar2[3] = 0;
        if (*(code **)(lVar3 + 0x20) != (code *)0x0) {
          (**(code **)(lVar3 + 0x20))(lVar3 + 0x30,plVar2 + 6);
          lVar5 = *(long *)(lVar3 + 0x28);
          plVar2[3] = *(long *)(lVar3 + 0x18);
          plVar2[5] = lVar5;
          lVar5 = *(long *)(lVar3 + 0x10);
          plVar2[4] = *(long *)(lVar3 + 0x20);
          plVar2[2] = lVar5;
        }
        plVar2[0x12] = 0;
        plVar2[0x14] = 0;
        plVar2[0x15] = 0;
        plVar2[0x13] = 0;
        if (*(code **)(lVar3 + 0xa0) != (code *)0x0) {
          (**(code **)(lVar3 + 0xa0))(lVar3 + 0xb0,plVar2 + 0x16);
          lVar5 = *(long *)(lVar3 + 0xa8);
          plVar2[0x13] = *(long *)(lVar3 + 0x98);
          plVar2[0x15] = lVar5;
          lVar5 = *(long *)(lVar3 + 0x90);
          plVar2[0x14] = *(long *)(lVar3 + 0xa0);
          plVar2[0x12] = lVar5;
        }
        *(undefined8 *)(lVar4 + lVar6) = 0x8678a8;
        lVar6 = lVar6 + 0x110;
        lVar5 = *(long *)(uVar7 + 0x98) + -1;
        *(long *)(uVar7 + 0x98) = lVar5;
      } while (param_2 + lVar6 != param_3);
      lVar4 = lVar4 + lVar6;
    }
    param_1[1] = lVar4;
  }
  return;
}


