/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001ad0c0; name: FUN_.text__001ad0c0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__001ad0c0(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  long *plVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  
  lVar7 = *(long *)(param_1 + 0x10);
  if ((lVar7 == 0) || (lVar10 = *(long *)(param_1 + 0x18), lVar10 == 0)) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl();
  }
  lVar9 = *(long *)(param_1 + 8);
  plVar5 = *(long **)(lVar9 + 8);
  puVar3 = (undefined8 *)(**(code **)(*plVar5 + 0x10))(plVar5,0x4f8,8);
  uVar8 = tpidr_el0;
  uVar8 = uVar8 & 0xffffffffffffe000;
  if (*(long *)(uVar8 + 0x98) != 0x10) {
    lVar1 = uVar8 + 0x18;
    *(long **)(lVar1 + *(long *)(uVar8 + 0x98) * 8) = plVar5;
    *(long *)(uVar8 + 0x98) = *(long *)(uVar8 + 0x98) + 1;
    *(undefined1 *)(puVar3 + 4) = 1;
    puVar3[2] = lVar7;
    puVar3[3] = lVar10;
    puVar3[5] = 0;
    puVar3[6] = 0;
    puVar3[7] = 0;
    puVar3[8] = 0;
    *puVar3 = 0x86db40;
    puVar3[1] = lVar9;
    memset(puVar3 + 9,0,0x4a9);
    *(long *)(uVar8 + 0x98) = *(long *)(uVar8 + 0x98) + -1;
    puVar6 = *(undefined8 **)(param_1 + 0x20);
    *(undefined8 **)(param_1 + 0x20) = puVar3;
    if (puVar6 != (undefined8 *)0x0) {
      (**(code **)*puVar6)(puVar6);
      (**(code **)(**(long **)(param_1 + 0x28) + 0x18))
                (*(long **)(param_1 + 0x28),puVar6,*(undefined8 *)(param_1 + 0x30),
                 *(undefined8 *)(param_1 + 0x38));
    }
    *(long **)(param_1 + 0x28) = plVar5;
    *(undefined8 *)(param_1 + 0x30) = 0x4f8;
    *(undefined8 *)(param_1 + 0x38) = 8;
    plVar4 = (long *)(**(code **)(*plVar5 + 0x10))(plVar5,0x450,8);
    if (*(long *)(uVar8 + 0x98) != 0x10) {
      *(long **)(lVar1 + *(long *)(uVar8 + 0x98) * 8) = plVar5;
      *(long *)(uVar8 + 0x98) = *(long *)(uVar8 + 0x98) + 1;
      lVar2 = _DAT_008a0fa0;
      *(undefined1 *)(plVar4 + 4) = 1;
      plVar4[2] = lVar7;
      plVar4[3] = lVar10;
      plVar4[5] = 0;
      plVar4[6] = 0;
      plVar4[7] = 0;
      plVar4[8] = 0;
      *(undefined4 *)(plVar4 + 9) = 0;
      *(undefined1 *)((long)plVar4 + 0x43c) = 0;
      plVar4[0x88] = 0;
      plVar4[0x89] = 0;
      *plVar4 = lVar2 + 0x10;
      plVar4[1] = lVar9;
      memset(plVar4 + 10,0,0x3e9);
      *(long *)(uVar8 + 0x98) = *(long *)(uVar8 + 0x98) + -1;
      puVar3 = *(undefined8 **)(param_1 + 0x40);
      *(long **)(param_1 + 0x40) = plVar4;
      if (puVar3 != (undefined8 *)0x0) {
        (**(code **)*puVar3)(puVar3);
        (**(code **)(**(long **)(param_1 + 0x48) + 0x18))
                  (*(long **)(param_1 + 0x48),puVar3,*(undefined8 *)(param_1 + 0x50),
                   *(undefined8 *)(param_1 + 0x58));
      }
      *(undefined8 *)(param_1 + 0x58) = 8;
      *(long **)(param_1 + 0x48) = plVar5;
      *(undefined8 *)(param_1 + 0x50) = 0x450;
      plVar4 = (long *)(**(code **)(*plVar5 + 0x10))(plVar5,0x450,8);
      if (*(long *)(uVar8 + 0x98) != 0x10) {
        *(long **)(lVar1 + *(long *)(uVar8 + 0x98) * 8) = plVar5;
        *(long *)(uVar8 + 0x98) = *(long *)(uVar8 + 0x98) + 1;
        plVar4[2] = lVar7;
        plVar4[3] = lVar10;
        *(undefined4 *)(plVar4 + 9) = 0;
        plVar4[5] = 0;
        plVar4[6] = 0;
        *(undefined1 *)((long)plVar4 + 0x43c) = 0;
        plVar4[0x88] = 0;
        plVar4[0x89] = 0;
        *(undefined1 *)(plVar4 + 4) = 1;
        plVar4[7] = 0;
        plVar4[8] = 0;
        *plVar4 = lVar2 + 0x10;
        plVar4[1] = lVar9;
        memset(plVar4 + 10,0,0x3e9);
        *(long *)(uVar8 + 0x98) = *(long *)(uVar8 + 0x98) + -1;
        puVar3 = *(undefined8 **)(param_1 + 0x60);
        *(long **)(param_1 + 0x60) = plVar4;
        if (puVar3 != (undefined8 *)0x0) {
          (**(code **)*puVar3)(puVar3);
          (**(code **)(**(long **)(param_1 + 0x68) + 0x18))
                    (*(long **)(param_1 + 0x68),puVar3,*(undefined8 *)(param_1 + 0x70),
                     *(undefined8 *)(param_1 + 0x78));
        }
        *(long **)(param_1 + 0x68) = plVar5;
        *(undefined8 *)(param_1 + 0x70) = 0x450;
        *(undefined8 *)(param_1 + 0x78) = 8;
        FUN__text__001ad4d0(*(undefined8 *)(param_1 + 0x20),1);
        FUN__text__001b05e0(*(undefined8 *)(param_1 + 0x40),0,param_2);
        FUN__text__001b05e0(*(undefined8 *)(param_1 + 0x60),1,param_2);
        FUN__text__001b1b44(*(undefined8 *)(param_1 + 0x20),1);
        FUN__text__001b1b44(*(undefined8 *)(param_1 + 0x40),1);
        FUN__text__001b1b44(*(undefined8 *)(param_1 + 0x60),1);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN__text__00102c10();
}


