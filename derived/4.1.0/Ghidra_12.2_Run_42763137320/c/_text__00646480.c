/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00646480; name: FUN_.text__00646480
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00646480(long *param_1)

{
  int *piVar1;
  long lVar2;
  long lVar3;
  ushort uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  uint *puVar10;
  ulong uVar11;
  long *plVar12;
  long lVar13;
  undefined8 *puVar14;
  ulong uVar15;
  long local_90 [6];
  long local_48;
  
  puVar5 = _DAT_008a6488;
  uVar15 = tpidr_el0;
  lVar13 = 0x402;
  uVar15 = uVar15 & 0xffffffffffffe000;
  puVar14 = _DAT_008a6488 + 2;
  do {
    puVar6 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x30,8);
    if (*(long *)(uVar15 + 0x98) == 0x10) {
                    /* WARNING: Subroutine does not return */
      FUN__text__00102c10();
    }
    *(long **)(uVar15 + 0x18 + *(long *)(uVar15 + 0x98) * 8) = param_1;
    *(long *)(uVar15 + 0x98) = *(long *)(uVar15 + 0x98) + 1;
    puVar6[4] = 0;
    puVar6[5] = 0;
    puVar6[2] = 0;
    puVar6[3] = 0;
    *puVar6 = 0;
    puVar6[1] = 0;
    if ((uVar15 == 0) || (*(long *)(uVar15 + 0x98) == 0)) {
LAB__text__00646560:
      lVar7 = FUN__text__005f52b0();
    }
    else {
      lVar7 = *(long *)(uVar15 + 0x18 + *(long *)(uVar15 + 0x98) * 8 + -8);
      if (lVar7 == 0) goto LAB__text__00646560;
    }
    puVar6[3] = lVar7;
    puVar6[4] = 0;
    *(undefined4 *)(puVar6 + 5) = 0;
    *(long *)(uVar15 + 0x98) = *(long *)(uVar15 + 0x98) + -1;
    plVar12 = (long *)puVar14[-2];
    puVar14[-2] = puVar6;
    if (plVar12 != (long *)0x0) {
      lVar7 = *plVar12;
      if (lVar7 != 0) {
        plVar12[1] = lVar7;
        (**(code **)(*(long *)plVar12[3] + 0x18))((long *)plVar12[3],lVar7,plVar12[2] - lVar7,8);
      }
      (**(code **)(*(long *)puVar14[-1] + 0x18))((long *)puVar14[-1],plVar12,*puVar14,puVar14[1]);
    }
    puVar14[-1] = param_1;
    *puVar14 = 0x30;
    lVar13 = lVar13 + -1;
    puVar14[1] = 8;
    puVar14 = puVar14 + 4;
  } while (lVar13 != 0);
  FUN__text__00601c10(local_90);
  FUN__text__00113bb0(&local_48,*_DAT_0089f550,0,local_90,0,0,0);
  if (DAT_00c3eec8 != 0) {
    (**(code **)(*(long *)(DAT_00c3eec8 + 0x48) + 0x18))();
  }
  DAT_00c3eec8 = local_48;
  if (local_48 != 0) {
    plVar12 = (long *)(local_48 + 0x48);
    (**(code **)(*plVar12 + 0x10))(plVar12);
    if (DAT_00c3eed0 != 0 || DAT_00c3ef50 != 0) {
      FUN__text__005d9010(local_48,_DAT_008a6490,1);
    }
    FUN__text__005d8de0(local_48);
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))(plVar12);
  }
  if ((local_90[3] != 0) && (local_90[0] != 0)) {
    (**(code **)(*(long *)(local_90[0] + 0x48) + 0x18))();
  }
  local_90[0] = 0;
  local_90[1] = 0xcbf29ce484222645;
  local_90[2] = 0x70f683;
  local_90[3] = 0;
  if (local_90[4] != 0) {
    (**(code **)(*(long *)(local_90[4] + 0x48) + 0x18))();
  }
  puVar10 = *(uint **)(DAT_00c3eec8 + 400);
  piVar1 = (int *)((long)puVar10 + (ulong)*puVar10);
  uVar9 = (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1));
  uVar15 = (ulong)*(uint *)((long)piVar1 + uVar9);
  if (*(int *)((long)((long)piVar1 + uVar9) + uVar15) != 0) {
    uVar11 = 0;
    lVar13 = (long)puVar10 + (ulong)*puVar10 + 10;
    do {
      lVar7 = uVar9 + uVar15 + (ulong)*(uint *)(lVar13 + uVar9 + uVar15 + -6);
      lVar2 = lVar13 + lVar7;
      lVar7 = lVar7 - *(int *)(lVar2 + -6);
      lVar3 = lVar13 + lVar7;
      uVar4 = *(ushort *)(lVar3 + -6);
      if (uVar4 < 5) {
        uVar15 = 0;
LAB__text__00646744:
        uVar9 = 0;
      }
      else {
        uVar9 = (ulong)*(ushort *)(lVar3 + -2);
        uVar15 = 0;
        if (uVar9 != 0) {
          uVar15 = (ulong)*(ushort *)(lVar2 + uVar9 + -6);
        }
        if ((uVar4 < 7) || (uVar9 = (ulong)*(ushort *)(lVar13 + lVar7), uVar9 == 0))
        goto LAB__text__00646744;
        uVar9 = (ulong)*(ushort *)(lVar2 + uVar9 + -6);
      }
      puVar14 = puVar5 + uVar15 * 4;
      plVar12 = (long *)*puVar14;
      lVar7 = *plVar12;
      uVar15 = plVar12[1] - lVar7 >> 3;
      if (uVar15 <= uVar9) {
        FUN__text__006469e0(plVar12,(uVar9 - uVar15) + 1);
        plVar12 = (long *)*puVar14;
        lVar7 = *plVar12;
        uVar15 = plVar12[1] - lVar7 >> 3;
      }
      if (uVar15 <= uVar9) goto LAB__text__006467f0;
      *(int **)(lVar7 + uVar9 * 8) = (int *)(lVar2 + -6);
      uVar11 = uVar11 + 1;
      lVar13 = lVar13 + 4;
      uVar9 = (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1));
      uVar15 = (ulong)*(uint *)((long)piVar1 + uVar9);
    } while (uVar11 < *(uint *)((long)((long)piVar1 + uVar9) + uVar15));
  }
  plVar8 = (long *)*puVar5;
  plVar12 = (long *)*plVar8;
  if ((long *)plVar8[1] == plVar12) {
LAB__text__006467f0:
    FUN__text__00646bdc();
  }
  else if (*plVar12 != 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl();
}


