/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0063d6e0; name: FUN_.text__0063d6e0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0063d6e0(long *param_1)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  long local_58;
  long *local_50;
  long *local_48;
  long local_40;
  long *local_38;
  
  lVar4 = param_1[1] - *param_1 >> 4;
  uVar7 = lVar4 * -0xf0f0f0f0f0f0f0f + 1;
  if (0xf0f0f0f0f0f0f0 < uVar7) {
    FUN__text__0063db34(param_1);
                    /* WARNING: Does not return */
    pcVar2 = (code *)UndefinedInstructionException(0,0x63d914);
    (*pcVar2)();
  }
  plVar6 = param_1 + 3;
  lVar3 = param_1[2] - *param_1 >> 4;
  uVar5 = lVar3 * -0x1e1e1e1e1e1e1e1e;
  if (uVar5 <= uVar7) {
    uVar5 = uVar7;
  }
  if (0x78787878787877 < (ulong)(lVar3 * -0xf0f0f0f0f0f0f0f)) {
    uVar5 = 0xf0f0f0f0f0f0f0;
  }
  local_38 = plVar6;
  if (uVar5 != 0) {
    local_58 = (**(code **)(*(long *)*plVar6 + 0x10))((long *)*plVar6,uVar5 * 0x110,0x10);
    if (local_58 != 0) goto LAB__text__0063d790;
    (**(code **)(*(long *)*plVar6 + 0xb8))();
  }
  local_58 = 0;
LAB__text__0063d790:
  plVar6 = (long *)(local_58 + lVar4 * 0x10);
  local_40 = local_58 + uVar5 * 0x110;
  uVar7 = tpidr_el0;
  uVar7 = uVar7 & 0xffffffffffffe000;
  local_50 = plVar6;
  local_48 = plVar6;
  if (*(long *)(uVar7 + 0x98) == 0x10) {
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10();
  }
  *(long *)(uVar7 + *(long *)(uVar7 + 0x98) * 8 + 0x18) = param_1[3];
  *(long *)(uVar7 + 0x98) = *(long *)(uVar7 + 0x98) + 1;
  memset(plVar6,0,0x110);
  *plVar6 = _DAT_0089f6e0 + 0x10;
  *(long *)(uVar7 + 0x98) = *(long *)(uVar7 + 0x98) + -1;
  local_48 = local_48 + 0x22;
  FUN__text__0063d920(param_1,&local_58);
  plVar1 = local_50;
  plVar6 = local_48;
  while (plVar6 != plVar1) {
    local_48 = plVar6 + -0x22;
    *local_48 = 0x867958;
    plVar8 = plVar6 + -0x21;
    if (*plVar8 == 0) {
      *plVar8 = 0;
      pcVar2 = (code *)plVar6[-0xf];
    }
    else {
      FUN__text__005d9290();
      lVar4 = *plVar8;
      *plVar8 = 0;
      if (lVar4 != 0) {
        (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))();
      }
      pcVar2 = (code *)plVar6[-0xf];
    }
    if (pcVar2 != (code *)0x0) {
      plVar6[-0xe] = 0;
      plVar6[-0xd] = 0;
      plVar6[-0x10] = 0;
      plVar6[-0xf] = 0;
      (*pcVar2)(plVar6 + -0xc);
    }
    pcVar2 = (code *)plVar6[-0x1f];
    if (pcVar2 != (code *)0x0) {
      plVar6[-0x1e] = 0;
      plVar6[-0x1d] = 0;
      plVar6[-0x20] = 0;
      plVar6[-0x1f] = 0;
      (*pcVar2)(plVar6 + -0x1c);
    }
    plVar6 = local_48;
    if (*plVar8 != 0) {
      (**(code **)(*(long *)(*plVar8 + 0x48) + 0x18))();
      *plVar8 = 0;
      plVar6 = local_48;
    }
  }
  if (local_58 != 0) {
    local_48 = plVar6;
    (**(code **)(*(long *)*local_38 + 0x18))((long *)*local_38,local_58,local_40 - local_58,0x10);
  }
  return;
}


