/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003cc8c0; name: FUN_.text__003cc8c0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__003cc8c0(long *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  long local_78;
  long *local_70;
  long *local_68;
  long local_60;
  long *local_58;
  
  plVar6 = (long *)param_1[1];
  if (param_2 <= (ulong)((param_1[2] - (long)plVar6 >> 4) * -0xf0f0f0f0f0f0f0f)) {
    plVar7 = plVar6;
    if (param_2 != 0) {
      lVar1 = param_2 * 0x110;
      plVar7 = plVar6 + param_2 * 0x22;
      uVar8 = tpidr_el0;
      uVar8 = uVar8 & 0xffffffffffffe000;
      lVar2 = *(long *)(uVar8 + 0x98);
      lVar5 = _DAT_0089f590 + 0x10;
      do {
        if (lVar2 == 0x10) goto LAB__text__003ccbb8;
        *(long *)((uVar8 | 0x18) + lVar2 * 8) = param_1[3];
        *(long *)(uVar8 + 0x98) = *(long *)(uVar8 + 0x98) + 1;
        memset(plVar6,0,0x110);
        *plVar6 = lVar5;
        plVar6 = plVar6 + 0x22;
        lVar1 = lVar1 + -0x110;
        lVar2 = *(long *)(uVar8 + 0x98) + -1;
        *(long *)(uVar8 + 0x98) = lVar2;
      } while (lVar1 != 0);
    }
    param_1[1] = (long)plVar7;
    return;
  }
  plVar7 = param_1 + 3;
  lVar5 = (long)plVar6 - *param_1 >> 4;
  uVar8 = lVar5 * -0xf0f0f0f0f0f0f0f + param_2;
  if (0xf0f0f0f0f0f0f0 < uVar8) {
    FUN__text__003cb830(param_1);
                    /* WARNING: Does not return */
    pcVar3 = (code *)UndefinedInstructionException(0,0x3ccbc4);
    (*pcVar3)();
  }
  lVar1 = param_1[2] - *param_1 >> 4;
  uVar4 = lVar1 * -0x1e1e1e1e1e1e1e1e;
  if (uVar4 <= uVar8) {
    uVar4 = uVar8;
  }
  if (0x78787878787877 < (ulong)(lVar1 * -0xf0f0f0f0f0f0f0f)) {
    uVar4 = 0xf0f0f0f0f0f0f0;
  }
  local_58 = plVar7;
  if (uVar4 != 0) {
    local_78 = (**(code **)(*(long *)*plVar7 + 0x10))((long *)*plVar7,uVar4 * 0x110,0x10);
    if (local_78 != 0) goto LAB__text__003cc990;
    (**(code **)(*(long *)*plVar7 + 0xb8))();
  }
  local_78 = 0;
LAB__text__003cc990:
  uVar8 = tpidr_el0;
  plVar6 = (long *)(local_78 + lVar5 * 0x10);
  uVar8 = uVar8 & 0xffffffffffffe000;
  local_60 = local_78 + uVar4 * 0x110;
  lVar1 = param_2 * 0x110;
  lVar2 = *(long *)(uVar8 + 0x98);
  plVar7 = plVar6 + param_2 * 0x22;
  lVar5 = _DAT_0089f590 + 0x10;
  local_70 = plVar6;
  while (lVar2 != 0x10) {
    *(long *)((uVar8 | 0x18) + lVar2 * 8) = *local_58;
    *(long *)(uVar8 + 0x98) = *(long *)(uVar8 + 0x98) + 1;
    memset(plVar6,0,0x110);
    *plVar6 = lVar5;
    plVar6 = plVar6 + 0x22;
    lVar1 = lVar1 + -0x110;
    lVar2 = *(long *)(uVar8 + 0x98) + -1;
    *(long *)(uVar8 + 0x98) = lVar2;
    if (lVar1 == 0) {
      local_68 = plVar7;
      FUN__text__003ccbd0(param_1,&local_78);
      plVar7 = local_70;
      plVar6 = local_68;
      while (plVar6 != plVar7) {
        local_68 = plVar6 + -0x22;
        *local_68 = 0x8678c8;
        plVar9 = plVar6 + -0x21;
        if (*plVar9 == 0) {
          *plVar9 = 0;
          pcVar3 = (code *)plVar6[-0xf];
        }
        else {
          FUN__text__005d9290();
          lVar5 = *plVar9;
          *plVar9 = 0;
          if (lVar5 != 0) {
            (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))();
          }
          pcVar3 = (code *)plVar6[-0xf];
        }
        if (pcVar3 != (code *)0x0) {
          plVar6[-0xe] = 0;
          plVar6[-0xd] = 0;
          plVar6[-0x10] = 0;
          plVar6[-0xf] = 0;
          (*pcVar3)(plVar6 + -0xc);
        }
        pcVar3 = (code *)plVar6[-0x1f];
        if (pcVar3 != (code *)0x0) {
          plVar6[-0x1e] = 0;
          plVar6[-0x1d] = 0;
          plVar6[-0x20] = 0;
          plVar6[-0x1f] = 0;
          (*pcVar3)(plVar6 + -0x1c);
        }
        plVar6 = local_68;
        if (*plVar9 != 0) {
          (**(code **)(*(long *)(*plVar9 + 0x48) + 0x18))();
          *plVar9 = 0;
          plVar6 = local_68;
        }
      }
      if (local_78 != 0) {
        local_68 = plVar6;
        (**(code **)(*(long *)*local_58 + 0x18))
                  ((long *)*local_58,local_78,local_60 - local_78,0x10);
      }
      return;
    }
  }
LAB__text__003ccbb8:
                    /* WARNING: Subroutine does not return */
  FUN__text__00102c10();
}


