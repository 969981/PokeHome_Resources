/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001d64dc; name: FUN_.text__001d64dc
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__001d64dc(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long *plVar4;
  long *plVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 *local_78;
  long *local_70;
  undefined8 local_68;
  undefined8 local_60;
  long local_58;
  long local_50;
  long local_48;
  
  local_50 = *(long *)(param_1 + 0x650);
  plVar5 = *(long **)(param_1 + 8);
  local_48 = *(long *)(param_1 + 0x640);
  local_58 = param_1;
  puVar2 = (undefined8 *)(**(code **)(*plVar5 + 0x10))(plVar5,0x50,8);
  uVar7 = tpidr_el0;
  uVar7 = uVar7 & 0xffffffffffffe000;
  if (*(long *)(uVar7 + 0x98) != 0x10) {
    lVar1 = uVar7 + 0x18;
    *(long **)(lVar1 + *(long *)(uVar7 + 0x98) * 8) = plVar5;
    *(long *)(uVar7 + 0x98) = *(long *)(uVar7 + 0x98) + 1;
    puVar2[1] = local_58;
    puVar2[2] = local_50;
    puVar2[3] = local_48;
    *(undefined1 *)(puVar2 + 4) = 1;
    puVar2[9] = 0;
    puVar2[7] = 0;
    puVar2[5] = 0;
    puVar2[6] = 0;
    *(undefined8 *)((long)puVar2 + 0x3e) = 0;
    *puVar2 = 0x86e270;
    *(long *)(uVar7 + 0x98) = *(long *)(uVar7 + 0x98) + -1;
    puVar6 = *(undefined8 **)(param_1 + 0x670);
    *(undefined8 **)(param_1 + 0x670) = puVar2;
    if (puVar6 != (undefined8 *)0x0) {
      (**(code **)*puVar6)(puVar6);
      (**(code **)(**(long **)(param_1 + 0x678) + 0x18))
                (*(long **)(param_1 + 0x678),puVar6,*(undefined8 *)(param_1 + 0x680),
                 *(undefined8 *)(param_1 + 0x688));
    }
    *(long **)(param_1 + 0x678) = plVar5;
    *(undefined8 *)(param_1 + 0x680) = 0x50;
    *(undefined8 *)(param_1 + 0x688) = 8;
    uVar3 = (**(code **)(*plVar5 + 0x10))(plVar5,0x6e8,8);
    if (*(long *)(uVar7 + 0x98) != 0x10) {
      *(long **)(lVar1 + *(long *)(uVar7 + 0x98) * 8) = plVar5;
      *(long *)(uVar7 + 0x98) = *(long *)(uVar7 + 0x98) + 1;
      FUN__text__001d7248(uVar3,&local_58);
      *(long *)(uVar7 + 0x98) = *(long *)(uVar7 + 0x98) + -1;
      puVar2 = *(undefined8 **)(param_1 + 0x690);
      *(undefined8 *)(param_1 + 0x690) = uVar3;
      if (puVar2 != (undefined8 *)0x0) {
        (**(code **)*puVar2)(puVar2);
        (**(code **)(**(long **)(param_1 + 0x698) + 0x18))
                  (*(long **)(param_1 + 0x698),puVar2,*(undefined8 *)(param_1 + 0x6a0),
                   *(undefined8 *)(param_1 + 0x6a8));
      }
      *(long **)(param_1 + 0x698) = plVar5;
      *(undefined8 *)(param_1 + 0x6a0) = 0x6e8;
      *(undefined8 *)(param_1 + 0x6a8) = 8;
      plVar4 = (long *)(**(code **)(*plVar5 + 0x10))(plVar5,0x4f8,8);
      if (*(long *)(uVar7 + 0x98) != 0x10) {
        *(long **)(lVar1 + *(long *)(uVar7 + 0x98) * 8) = plVar5;
        *(long *)(uVar7 + 0x98) = *(long *)(uVar7 + 0x98) + 1;
        *plVar4 = 0x86d9c8;
        plVar4[1] = local_58;
        lVar1 = _DAT_008a1078;
        plVar4[2] = local_50;
        plVar4[5] = 0;
        plVar4[6] = 0;
        plVar4[7] = 0;
        plVar4[8] = 0;
        *(undefined1 *)(plVar4 + 4) = 1;
        plVar4[3] = local_48;
        *plVar4 = lVar1 + 0x10;
        memset(plVar4 + 9,0,0x4a9);
        *(long *)(uVar7 + 0x98) = *(long *)(uVar7 + 0x98) + -1;
        puVar2 = *(undefined8 **)(param_1 + 0x6b0);
        *(long **)(param_1 + 0x6b0) = plVar4;
        if (puVar2 != (undefined8 *)0x0) {
          (**(code **)*puVar2)(puVar2);
          (**(code **)(**(long **)(param_1 + 0x6b8) + 0x18))
                    (*(long **)(param_1 + 0x6b8),puVar2,*(undefined8 *)(param_1 + 0x6c0),
                     *(undefined8 *)(param_1 + 0x6c8));
        }
        *(long **)(param_1 + 0x6b8) = plVar5;
        *(undefined8 *)(param_1 + 0x6c0) = 0x4f8;
        *(undefined8 *)(param_1 + 0x6c8) = 8;
        FUN__text__001d76dc(*(undefined8 *)(param_1 + 0x670));
        FUN__text__001d7d50(*(undefined8 *)(param_1 + 0x690));
        FUN__text__001ad4d0(*(undefined8 *)(param_1 + 0x6b0),0);
        FUN__text__001b1b44(*(undefined8 *)(param_1 + 0x670),1);
        FUN__text__001b1b44(*(undefined8 *)(param_1 + 0x690),1);
        FUN__text__001b1b44(*(undefined8 *)(param_1 + 0x6b0),1);
        FUN__text__001d6f10(&local_78,plVar5,&local_58);
        puVar2 = local_78;
        local_78 = (undefined8 *)0x0;
        puVar6 = *(undefined8 **)(param_1 + 0x6d0);
        *(undefined8 **)(param_1 + 0x6d0) = puVar2;
        if (puVar6 == (undefined8 *)0x0) {
          *(long **)(param_1 + 0x6d8) = local_70;
          *(undefined8 *)(param_1 + 0x6e0) = local_68;
          *(undefined8 *)(param_1 + 0x6e8) = local_60;
        }
        else {
          (**(code **)*puVar6)(puVar6);
          (**(code **)(**(long **)(param_1 + 0x6d8) + 0x18))
                    (*(long **)(param_1 + 0x6d8),puVar6,*(undefined8 *)(param_1 + 0x6e0),
                     *(undefined8 *)(param_1 + 0x6e8));
          puVar2 = local_78;
          local_78 = (undefined8 *)0x0;
          *(long **)(param_1 + 0x6d8) = local_70;
          *(undefined8 *)(param_1 + 0x6e0) = local_68;
          *(undefined8 *)(param_1 + 0x6e8) = local_60;
          if (puVar2 != (undefined8 *)0x0) {
            (**(code **)*puVar2)(puVar2);
            (**(code **)(*local_70 + 0x18))(local_70,puVar2,local_68,local_60);
          }
        }
        FUN__text__001d97f0(*(undefined8 *)(param_1 + 0x6d0),*(undefined8 *)(param_1 + 0x6b0),
                            *(undefined8 *)(param_1 + 0x670),*(undefined8 *)(param_1 + 0x690));
        FUN__text__001b1b44(*(undefined8 *)(param_1 + 0x6d0),1);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN__text__00102c10();
}


