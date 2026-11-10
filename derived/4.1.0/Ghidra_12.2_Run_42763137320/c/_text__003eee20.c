/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003eee20; name: FUN_.text__003eee20
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__003eee20(long param_1)

{
  long *plVar1;
  long *plVar2;
  undefined4 *puVar3;
  byte bVar4;
  code *pcVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  byte *pbVar9;
  byte *pbVar10;
  undefined4 *puVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  undefined8 local_e0;
  code *local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [24];
  long local_48;
  
  lVar14 = *(long *)(param_1 + 0x78);
  lVar8 = *(long *)(param_1 + 0x80);
  if (lVar14 != lVar8) {
    do {
      FUN__text__005e9290(auStack_60,lVar14);
      local_70 = 0;
      uStack_68 = 0;
      local_80 = 0;
      uStack_78 = 0;
      local_90 = 0;
      uStack_88 = 0;
      local_a0 = 0;
      uStack_98 = 0;
      local_b0 = 0;
      uStack_a8 = 0;
      local_c0 = 0;
      uStack_b8 = 0;
      local_d0 = 0;
      uStack_c8 = 0;
      local_e0 = 0;
      local_d8 = (code *)0x0;
      uVar7 = FUN__text__003f0ff8(*(undefined8 *)(param_1 + 0x230),auStack_60,0,&local_e0,0);
      if ((uVar7 & 1) != 0) {
        FUN__text__003f2bcc(*(undefined8 *)(param_1 + 0x1f0),auStack_60,0,0,0);
      }
      pcVar5 = local_d8;
      if (local_d8 != (code *)0x0) {
        local_d0 = 0;
        uStack_c8 = 0;
        local_e0 = 0;
        local_d8 = (code *)0x0;
        (*pcVar5)(&local_c0);
      }
      if (local_48 != 0) {
        (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
      }
      lVar14 = lVar14 + 8;
    } while (lVar14 != lVar8);
  }
  plVar1 = (long *)(param_1 + 0x108);
  if ((*(long *)(param_1 + 0x108) != 0) && (**(char **)(*(long *)(param_1 + 0x108) + 0x60) != '\0'))
  {
    FUN__text__005e9290(auStack_60,plVar1);
    local_70 = 0;
    uStack_68 = 0;
    local_80 = 0;
    uStack_78 = 0;
    local_90 = 0;
    uStack_88 = 0;
    local_a0 = 0;
    uStack_98 = 0;
    local_b0 = 0;
    uStack_a8 = 0;
    local_c0 = 0;
    uStack_b8 = 0;
    local_d0 = 0;
    uStack_c8 = 0;
    local_e0 = 0;
    local_d8 = (code *)0x0;
    uVar7 = FUN__text__003f0ff8(*(undefined8 *)(param_1 + 0x230),auStack_60,0,&local_e0,0);
    if ((uVar7 & 1) != 0) {
      FUN__text__003f2bcc(*(undefined8 *)(param_1 + 0x1f0),auStack_60,0,0,0);
    }
    pcVar5 = local_d8;
    if (local_d8 != (code *)0x0) {
      local_d0 = 0;
      uStack_c8 = 0;
      local_e0 = 0;
      local_d8 = (code *)0x0;
      (*pcVar5)(&local_c0);
    }
    if (local_48 != 0) {
      (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
    }
  }
  puVar3 = *(undefined4 **)(param_1 + 0xe0);
  for (puVar11 = *(undefined4 **)(param_1 + 0xd8); puVar11 != puVar3; puVar11 = puVar11 + 1) {
    FUN__text__003f2b48(*(undefined8 *)(param_1 + 0x1f0),*puVar11);
  }
  plVar2 = *(long **)(param_1 + 0x78);
  if (*(long **)(param_1 + 0x80) != plVar2) {
    plVar13 = *(long **)(param_1 + 0x80);
    do {
      plVar12 = plVar13 + -1;
      if (*plVar12 != 0) {
        (**(code **)(*(long *)(*plVar12 + 0x48) + 0x18))();
        plVar13[-1] = 0;
      }
      plVar13 = plVar12;
    } while (plVar12 != plVar2);
  }
  *(long **)(param_1 + 0x80) = plVar2;
  plVar2 = *(long **)(param_1 + 0xa8);
  *(undefined8 *)(param_1 + 0xe0) = *(undefined8 *)(param_1 + 0xd8);
  if (*(long **)(param_1 + 0xb0) != plVar2) {
    plVar13 = *(long **)(param_1 + 0xb0);
    do {
      plVar12 = plVar13 + -1;
      if (*plVar12 != 0) {
        (**(code **)(*(long *)(*plVar12 + 0x48) + 0x18))();
        plVar13[-1] = 0;
      }
      plVar13 = plVar12;
    } while (plVar12 != plVar2);
  }
  *(long **)(param_1 + 0xb0) = plVar2;
  plVar2 = _DAT_0089f970;
  pbVar9 = _DAT_0089f968;
  if (((*_DAT_0089f968 & 1) == 0) && (iVar6 = __cxa_guard_acquire(_DAT_0089f968), iVar6 != 0)) {
    if (((*_DAT_0089f750 & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(_DAT_0089f750), plVar13 = _DAT_0089f758, iVar6 != 0)) {
      _DAT_0089f758[7] = 0;
      *(undefined4 *)(plVar13 + 8) = 0;
      lVar14 = _DAT_0089f690;
      uVar7 = tpidr_el0;
      plVar13[2] = 0;
      plVar13[3] = 0;
      plVar13[4] = 0;
      plVar13[5] = 0;
      *(undefined4 *)(plVar13 + 6) = 0;
      uVar7 = uVar7 & 0xffffffffffffe000;
      *plVar13 = lVar14 + 0x10;
      if (uVar7 == 0) {
        lVar14 = 0;
      }
      else {
        lVar14 = 0;
        if (*(long *)(uVar7 + 0x98) != 0) {
          lVar14 = *(long *)(uVar7 + *(long *)(uVar7 + 0x98) * 8 + 0x10);
        }
      }
      *(undefined4 *)(plVar13 + 10) = 0;
      lVar8 = _DAT_0089f760;
      plVar13[0xd] = 0;
      uVar7 = 0xcbf29ce484222645;
      *plVar13 = lVar8 + 0x10;
      plVar13[1] = lVar14;
      plVar13[9] = lVar8 + 0x48;
      pbVar10 = (byte *)*_DAT_0089f768;
      plVar13[0xb] = -0x340d631b7bddd9bb;
      plVar13[0xc] = (long)pbVar10;
      bVar4 = *pbVar10;
      while (bVar4 != 0) {
        pbVar10 = pbVar10 + 1;
        uVar7 = (uVar7 ^ bVar4) * 0x100000001b3;
        bVar4 = *pbVar10;
      }
      plVar13[0xb] = uVar7;
      plVar13[0xd] = 0;
      plVar13[1] = 0;
      plVar13[2] = (long)plVar13;
      __cxa_guard_release(_DAT_0089f750);
    }
    plVar13 = _DAT_0089f758;
    *plVar2 = (long)_DAT_0089f758;
    (**(code **)(plVar13[9] + 0x10))();
    FUN__text__001001d0(_DAT_0089f960,plVar2,&__DT_FINI_ARRAY);
    __cxa_guard_release(_DAT_0089f968);
  }
  lVar14 = *plVar2;
  if (lVar14 != 0) {
    (**(code **)(*(long *)(lVar14 + 0x48) + 0x10))();
  }
  lVar8 = *plVar1;
  *plVar1 = lVar14;
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))();
  }
  if (((*pbVar9 & 1) == 0) &&
     (iVar6 = __cxa_guard_acquire(_DAT_0089f968), plVar1 = _DAT_0089f758, iVar6 != 0)) {
    if (((*_DAT_0089f750 & 1) == 0) && (iVar6 = __cxa_guard_acquire(_DAT_0089f750), iVar6 != 0)) {
      plVar1[7] = 0;
      lVar14 = _DAT_0089f690;
      *(undefined4 *)(plVar1 + 8) = 0;
      uVar7 = tpidr_el0;
      uVar7 = uVar7 & 0xffffffffffffe000;
      plVar1[2] = 0;
      plVar1[3] = 0;
      plVar1[4] = 0;
      plVar1[5] = 0;
      *(undefined4 *)(plVar1 + 6) = 0;
      *plVar1 = lVar14 + 0x10;
      if (uVar7 == 0) {
        lVar14 = 0;
      }
      else {
        lVar14 = 0;
        if (*(long *)(uVar7 + 0x98) != 0) {
          lVar14 = *(long *)(uVar7 + *(long *)(uVar7 + 0x98) * 8 + 0x10);
        }
      }
      *(undefined4 *)(plVar1 + 10) = 0;
      lVar8 = _DAT_0089f760;
      plVar1[0xd] = 0;
      uVar7 = 0xcbf29ce484222645;
      *plVar1 = lVar8 + 0x10;
      plVar1[1] = lVar14;
      plVar1[9] = lVar8 + 0x48;
      pbVar9 = (byte *)*_DAT_0089f768;
      plVar1[0xb] = -0x340d631b7bddd9bb;
      plVar1[0xc] = (long)pbVar9;
      bVar4 = *pbVar9;
      while (bVar4 != 0) {
        pbVar9 = pbVar9 + 1;
        uVar7 = (uVar7 ^ bVar4) * 0x100000001b3;
        bVar4 = *pbVar9;
      }
      plVar1[0xb] = uVar7;
      plVar1[0xd] = 0;
      plVar1[1] = 0;
      plVar1[2] = (long)plVar1;
      __cxa_guard_release(_DAT_0089f750);
    }
    *plVar2 = (long)plVar1;
    (**(code **)(plVar1[9] + 0x10))(plVar1 + 9);
    FUN__text__001001d0(_DAT_0089f960,plVar2,&__DT_FINI_ARRAY);
    __cxa_guard_release(_DAT_0089f968);
  }
  lVar14 = *plVar2;
  if (lVar14 != 0) {
    (**(code **)(*(long *)(lVar14 + 0x48) + 0x10))();
  }
  lVar8 = *(long *)(param_1 + 0x110);
  *(long *)(param_1 + 0x110) = lVar14;
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))();
  }
  return;
}


