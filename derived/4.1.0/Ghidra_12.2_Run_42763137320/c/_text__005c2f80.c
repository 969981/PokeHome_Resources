/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005c2f80; name: FUN_.text__005c2f80
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__005c2f80(long *param_1,long param_2,undefined4 *param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  long local_88;
  long *local_80;
  long *local_78;
  long local_70;
  long *local_68;
  
  lVar6 = param_1[1] - *param_1 >> 5;
  uVar10 = lVar6 * -0x71c71c71c71c71c7 + 1;
  if (0xe38e38e38e38e3 < uVar10) {
    FUN__text__005c2b90(param_1);
                    /* WARNING: Does not return */
    pcVar4 = (code *)UndefinedInstructionException(0,0x5c32a4);
    (*pcVar4)();
  }
  plVar1 = param_1 + 3;
  lVar5 = param_1[2] - *param_1 >> 5;
  uVar7 = lVar5 * 0x1c71c71c71c71c72;
  if (uVar7 <= uVar10) {
    uVar7 = uVar10;
  }
  if (0x71c71c71c71c70 < (ulong)(lVar5 * -0x71c71c71c71c71c7)) {
    uVar7 = 0xe38e38e38e38e3;
  }
  local_68 = plVar1;
  if (uVar7 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = (**(code **)(*(long *)*plVar1 + 0x10))((long *)*plVar1,uVar7 * 0x120,0x10);
    if (lVar5 == 0) {
      (**(code **)(*(long *)*plVar1 + 0xb8))();
    }
  }
  plVar9 = (long *)(lVar5 + lVar6 * 0x20);
  local_70 = lVar5 + uVar7 * 0x120;
  uVar10 = tpidr_el0;
  uVar10 = uVar10 & 0xffffffffffffe000;
  local_88 = lVar5;
  local_80 = plVar9;
  local_78 = plVar9;
  if (*(long *)(uVar10 + 0x98) == 0x10) {
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10();
  }
  *(long *)(uVar10 + *(long *)(uVar10 + 0x98) * 8 + 0x18) = *plVar1;
  *(long *)(uVar10 + 0x98) = *(long *)(uVar10 + 0x98) + 1;
  lVar2 = _DAT_0089f4a8;
  *plVar9 = _DAT_0089f4a8 + 0x10;
  lVar3 = *(long *)(param_2 + 8);
  plVar9[1] = lVar3;
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  plVar9[2] = 0;
  plVar9[4] = 0;
  plVar9[5] = 0;
  plVar9[3] = 0;
  if (*(code **)(param_2 + 0x20) != (code *)0x0) {
    (**(code **)(param_2 + 0x20))(param_2 + 0x30,plVar9 + 6);
    lVar3 = *(long *)(param_2 + 0x28);
    plVar9[3] = *(long *)(param_2 + 0x18);
    plVar9[5] = lVar3;
    lVar3 = *(long *)(param_2 + 0x10);
    plVar9[4] = *(long *)(param_2 + 0x20);
    plVar9[2] = lVar3;
  }
  plVar9[0x12] = 0;
  plVar9[0x14] = 0;
  plVar9[0x15] = 0;
  plVar9[0x13] = 0;
  if (*(code **)(param_2 + 0xa0) != (code *)0x0) {
    (**(code **)(param_2 + 0xa0))(param_2 + 0xb0,plVar9 + 0x16);
    lVar3 = *(long *)(param_2 + 0xa8);
    plVar9[0x13] = *(long *)(param_2 + 0x98);
    plVar9[0x15] = lVar3;
    lVar3 = *(long *)(param_2 + 0x90);
    plVar9[0x14] = *(long *)(param_2 + 0xa0);
    plVar9[0x12] = lVar3;
  }
  *plVar9 = _DAT_0089f4c8 + 0x10;
  *(undefined4 *)(lVar5 + lVar6 * 0x20 + 0x110) = *param_3;
  *(long *)(uVar10 + 0x98) = *(long *)(uVar10 + 0x98) + -1;
  local_78 = local_78 + 0x24;
  FUN__text__005c2970(param_1,&local_88);
  plVar1 = local_80;
  if (local_78 != local_80) {
    plVar9 = local_78;
    do {
      local_78 = plVar9 + -0x24;
      *local_78 = lVar2 + 0x10;
      plVar8 = plVar9 + -0x23;
      if (*plVar8 == 0) {
        *plVar8 = 0;
        pcVar4 = (code *)plVar9[-0x11];
      }
      else {
        FUN__text__005d9290(*plVar8,local_78);
        lVar6 = *plVar8;
        *plVar8 = 0;
        if (lVar6 != 0) {
          (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))();
        }
        pcVar4 = (code *)plVar9[-0x11];
      }
      if (pcVar4 != (code *)0x0) {
        plVar9[-0x10] = 0;
        plVar9[-0xf] = 0;
        plVar9[-0x12] = 0;
        plVar9[-0x11] = 0;
        (*pcVar4)(plVar9 + -0xe);
      }
      pcVar4 = (code *)plVar9[-0x21];
      if (pcVar4 != (code *)0x0) {
        plVar9[-0x20] = 0;
        plVar9[-0x1f] = 0;
        plVar9[-0x22] = 0;
        plVar9[-0x21] = 0;
        (*pcVar4)(plVar9 + -0x1e);
      }
      if (*plVar8 != 0) {
        (**(code **)(*(long *)(*plVar8 + 0x48) + 0x18))();
        *plVar8 = 0;
      }
      plVar9 = local_78;
    } while (local_78 != plVar1);
  }
  if (local_88 != 0) {
    (**(code **)(*(long *)*local_68 + 0x18))((long *)*local_68,local_88,local_70 - local_88,0x10);
  }
  return;
}


