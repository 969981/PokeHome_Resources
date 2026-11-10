/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001188f8; name: FUN_.text__001188f8
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__001188f8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  long *plVar4;
  long *plVar5;
  undefined8 *puVar6;
  ulong uVar7;
  
  *(undefined8 *)(param_1 + 0x408) = param_2;
  nn::hid::InitializeNpad();
  plVar4 = *(long **)(param_1 + 0x408);
  *(undefined1 **)(param_1 + 0xf0) = &LAB__text__00118b80;
  *(undefined1 **)(param_1 + 0xf8) = &LAB__text__00118b90;
  puVar3 = (undefined8 *)(**(code **)(*plVar4 + 0x10))(plVar4,0x40,8);
  uVar7 = tpidr_el0;
  uVar7 = uVar7 & 0xffffffffffffe000;
  if (*(long *)(uVar7 + 0x98) != 0x10) {
    lVar1 = uVar7 + 0x18;
    *(long **)(lVar1 + *(long *)(uVar7 + 0x98) * 8) = plVar4;
    *(long *)(uVar7 + 0x98) = *(long *)(uVar7 + 0x98) + 1;
    puVar3[6] = 0;
    puVar3[7] = 0;
    puVar3[2] = 0;
    puVar3[3] = 0;
    *(undefined4 *)(puVar3 + 6) = 0x3f000000;
    puVar3[4] = 0;
    puVar3[5] = 0x3f4f04ff00000020;
    *puVar3 = 0x868710;
    puVar3[1] = 0;
    *(long *)(uVar7 + 0x98) = *(long *)(uVar7 + 0x98) + -1;
    puVar6 = *(undefined8 **)(param_1 + 0x90);
    *(undefined8 **)(param_1 + 0x90) = puVar3;
    if (puVar6 != (undefined8 *)0x0) {
      (**(code **)*puVar6)(puVar6);
      (**(code **)(**(long **)(param_1 + 0x98) + 0x18))
                (*(long **)(param_1 + 0x98),puVar6,*(undefined8 *)(param_1 + 0xa0),
                 *(undefined8 *)(param_1 + 0xa8));
    }
    *(long **)(param_1 + 0x98) = plVar4;
    *(undefined8 *)(param_1 + 0xa0) = 0x40;
    plVar5 = *(long **)(param_1 + 0x408);
    *(undefined8 *)(param_1 + 0xa8) = 8;
    plVar4 = (long *)(**(code **)(*plVar5 + 0x10))(plVar5,0x40,8);
    if (*(long *)(uVar7 + 0x98) != 0x10) {
      *(long **)(lVar1 + *(long *)(uVar7 + 0x98) * 8) = plVar5;
      *(long *)(uVar7 + 0x98) = *(long *)(uVar7 + 0x98) + 1;
      plVar4[6] = 0;
      plVar4[7] = 0;
      plVar4[2] = 0;
      plVar4[3] = 0;
      plVar4[4] = 0;
      plVar4[5] = 0x3f4f04ff00000020;
      lVar2 = _DAT_0089fe70;
      *(undefined4 *)(plVar4 + 6) = 0x3f000000;
      *plVar4 = lVar2 + 0x10;
      plVar4[1] = 0;
      *(long *)(uVar7 + 0x98) = *(long *)(uVar7 + 0x98) + -1;
      puVar3 = *(undefined8 **)(param_1 + 0xb0);
      *(long **)(param_1 + 0xb0) = plVar4;
      if (puVar3 != (undefined8 *)0x0) {
        (**(code **)*puVar3)(puVar3);
        (**(code **)(**(long **)(param_1 + 0xb8) + 0x18))
                  (*(long **)(param_1 + 0xb8),puVar3,*(undefined8 *)(param_1 + 0xc0),
                   *(undefined8 *)(param_1 + 200));
      }
      *(long **)(param_1 + 0xb8) = plVar5;
      *(undefined8 *)(param_1 + 0xc0) = 0x40;
      plVar5 = *(long **)(param_1 + 0x408);
      *(undefined8 *)(param_1 + 200) = 8;
      plVar4 = (long *)(**(code **)(*plVar5 + 0x10))(plVar5,0x40,8);
      if (*(long *)(uVar7 + 0x98) != 0x10) {
        *(long **)(lVar1 + *(long *)(uVar7 + 0x98) * 8) = plVar5;
        *(long *)(uVar7 + 0x98) = *(long *)(uVar7 + 0x98) + 1;
        plVar4[6] = 0;
        plVar4[7] = 0;
        plVar4[4] = 0;
        plVar4[5] = 0;
        plVar4[2] = 0;
        plVar4[3] = 0;
        *plVar4 = _DAT_0089fe98 + 0x10;
        plVar4[1] = 0;
        *(undefined4 *)(plVar4 + 1) = 0x20;
        *(long *)(uVar7 + 0x98) = *(long *)(uVar7 + 0x98) + -1;
        puVar3 = *(undefined8 **)(param_1 + 0x3b0);
        *(long **)(param_1 + 0x3b0) = plVar4;
        if (puVar3 != (undefined8 *)0x0) {
          (**(code **)*puVar3)(puVar3);
          (**(code **)(**(long **)(param_1 + 0x3b8) + 0x18))
                    (*(long **)(param_1 + 0x3b8),puVar3,*(undefined8 *)(param_1 + 0x3c0),
                     *(undefined8 *)(param_1 + 0x3c8));
        }
        *(long **)(param_1 + 0x3b8) = plVar5;
        *(undefined8 *)(param_1 + 0x3c0) = 0x40;
        *(undefined8 *)(param_1 + 0x3c8) = 8;
        *(long *)(param_1 + 400) = param_1 + 0x3d0;
        FUN__text__00118bcc(param_1);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN__text__00102c10();
}


