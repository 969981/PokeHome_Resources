/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005c2650; name: FUN_.text__005c2650
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__005c2650(long *param_1,ulong param_2)

{
  long lVar1;
  code *pcVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  long local_78;
  long *local_70;
  long *local_68;
  long local_60;
  long *local_58;
  
  plVar5 = (long *)param_1[1];
  if (param_2 <= (ulong)((param_1[2] - (long)plVar5 >> 5) * -0x71c71c71c71c71c7)) {
    plVar6 = plVar5;
    if (param_2 != 0) {
      plVar6 = plVar5 + param_2 * 0x24;
      uVar7 = tpidr_el0;
      uVar7 = uVar7 & 0xffffffffffffe000;
      lVar1 = *(long *)(uVar7 + 0x98);
      lVar4 = _DAT_0089f4c8 + 0x10;
      do {
        if (lVar1 == 0x10) goto LAB__text__005c2958;
        *(long *)((uVar7 | 0x18) + lVar1 * 8) = param_1[3];
        *(long *)(uVar7 + 0x98) = *(long *)(uVar7 + 0x98) + 1;
        memset(plVar5,0,0x110);
        *plVar5 = lVar4;
        *(undefined4 *)(plVar5 + 0x22) = 0;
        plVar5 = plVar5 + 0x24;
        lVar1 = *(long *)(uVar7 + 0x98) + -1;
        *(long *)(uVar7 + 0x98) = lVar1;
      } while (plVar5 != plVar6);
    }
    param_1[1] = (long)plVar6;
    return;
  }
  plVar6 = param_1 + 3;
  lVar4 = (long)plVar5 - *param_1 >> 5;
  uVar7 = lVar4 * -0x71c71c71c71c71c7 + param_2;
  if (0xe38e38e38e38e3 < uVar7) {
    FUN__text__005c2b90(param_1);
                    /* WARNING: Does not return */
    pcVar2 = (code *)UndefinedInstructionException(0,0x5c2964);
    (*pcVar2)();
  }
  lVar1 = param_1[2] - *param_1 >> 5;
  uVar3 = lVar1 * 0x1c71c71c71c71c72;
  if (uVar3 <= uVar7) {
    uVar3 = uVar7;
  }
  if (0x71c71c71c71c70 < (ulong)(lVar1 * -0x71c71c71c71c71c7)) {
    uVar3 = 0xe38e38e38e38e3;
  }
  local_58 = plVar6;
  if (uVar3 != 0) {
    local_78 = (**(code **)(*(long *)*plVar6 + 0x10))((long *)*plVar6,uVar3 * 0x120,0x10);
    if (local_78 != 0) goto LAB__text__005c2738;
    (**(code **)(*(long *)*plVar6 + 0xb8))();
  }
  local_78 = 0;
LAB__text__005c2738:
  plVar5 = (long *)(local_78 + lVar4 * 0x20);
  local_60 = local_78 + uVar3 * 0x120;
  plVar6 = plVar5 + param_2 * 0x24;
  uVar7 = tpidr_el0;
  uVar7 = uVar7 & 0xffffffffffffe000;
  lVar1 = *(long *)(uVar7 + 0x98);
  lVar4 = _DAT_0089f4c8 + 0x10;
  local_70 = plVar5;
  while (lVar1 != 0x10) {
    *(long *)((uVar7 | 0x18) + lVar1 * 8) = *local_58;
    *(long *)(uVar7 + 0x98) = *(long *)(uVar7 + 0x98) + 1;
    memset(plVar5,0,0x110);
    *plVar5 = lVar4;
    *(undefined4 *)(plVar5 + 0x22) = 0;
    plVar5 = plVar5 + 0x24;
    lVar1 = *(long *)(uVar7 + 0x98) + -1;
    *(long *)(uVar7 + 0x98) = lVar1;
    if (plVar5 == plVar6) {
      local_68 = plVar6;
      FUN__text__005c2970(param_1,&local_78);
      plVar6 = local_70;
      plVar5 = local_68;
      while (plVar5 != plVar6) {
        local_68 = plVar5 + -0x24;
        *local_68 = 0x867588;
        plVar8 = plVar5 + -0x23;
        if (*plVar8 == 0) {
          *plVar8 = 0;
          pcVar2 = (code *)plVar5[-0x11];
        }
        else {
          FUN__text__005d9290(*plVar8,local_68);
          lVar4 = *plVar8;
          *plVar8 = 0;
          if (lVar4 != 0) {
            (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))();
          }
          pcVar2 = (code *)plVar5[-0x11];
        }
        if (pcVar2 != (code *)0x0) {
          plVar5[-0x10] = 0;
          plVar5[-0xf] = 0;
          plVar5[-0x12] = 0;
          plVar5[-0x11] = 0;
          (*pcVar2)(plVar5 + -0xe);
        }
        pcVar2 = (code *)plVar5[-0x21];
        if (pcVar2 != (code *)0x0) {
          plVar5[-0x20] = 0;
          plVar5[-0x1f] = 0;
          plVar5[-0x22] = 0;
          plVar5[-0x21] = 0;
          (*pcVar2)(plVar5 + -0x1e);
        }
        plVar5 = local_68;
        if (*plVar8 != 0) {
          (**(code **)(*(long *)(*plVar8 + 0x48) + 0x18))();
          *plVar8 = 0;
          plVar5 = local_68;
        }
      }
      if (local_78 != 0) {
        local_68 = plVar5;
        (**(code **)(*(long *)*local_58 + 0x18))
                  ((long *)*local_58,local_78,local_60 - local_78,0x10);
      }
      return;
    }
  }
LAB__text__005c2958:
                    /* WARNING: Subroutine does not return */
  FUN__text__00102c10();
}


