/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005aa624; name: FUN_.text__005aa624
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__005aa624(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  int *piVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long *plVar8;
  long *plVar9;
  uint uVar10;
  ulong uVar11;
  code *pcVar12;
  undefined8 *puVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  
  FUN__text__005a0018(*(undefined8 *)(param_1 + 0x160));
  piVar3 = _DAT_008a0300;
  lVar14 = *(long *)(param_1 + 0x160);
  iVar2 = *_DAT_008a0300;
  if (*(int *)(lVar14 + 0x100) == 0) {
    lVar15 = *(long *)(lVar14 + 0x58) + (long)iVar2 * 0x168;
    FUN__text__006ec8e0(lVar15);
    FUN__text__005ae600(param_1);
    if (*(int *)(lVar15 + 0x160) != 0) {
      FUN__text__006eddd4(lVar15);
      *(undefined4 *)(lVar15 + 0x160) = 0;
    }
    FUN__text__006ec93c(lVar15);
  }
  else {
    pcVar12 = *(code **)(lVar14 + 0x88);
    *(int *)(lVar14 + 0x104) = iVar2;
    if (pcVar12 != (code *)0x0) {
      *(undefined8 *)(lVar14 + 0x90) = 0;
      *(undefined8 *)(lVar14 + 0x98) = 0;
      *(undefined8 *)(lVar14 + 0x80) = 0;
      *(undefined8 *)(lVar14 + 0x88) = 0;
      (*pcVar12)(lVar14 + 0xa0);
      iVar2 = *(int *)(lVar14 + 0x104);
    }
    *(long *)(lVar14 + 0xa0) = param_1;
    *(code **)(lVar14 + 0x80) = FUN__text__005b1e44;
    *(undefined **)(lVar14 + 0x88) = &DAT__text__005b1e4c;
    lVar15 = *(long *)(lVar14 + 0x58) + (long)iVar2 * 0x168;
    *(undefined1 **)(lVar14 + 0x90) = &LAB__text__005b1e50;
    *(undefined1 **)(lVar14 + 0x98) = &LAB__text__005b1e5c;
    FUN__text__006ec8e0(lVar15);
    (**(code **)(lVar14 + 0x80))((long *)(lVar14 + 0xa0));
    if (*(int *)(lVar15 + 0x160) != 0) {
      FUN__text__006eddd4(lVar15);
      *(undefined4 *)(lVar15 + 0x160) = 0;
    }
    FUN__text__006ec93c(lVar15);
    FUN__text__005b5520(*_DAT_0089f418,lVar14);
  }
  *(undefined1 *)(lVar14 + 0x109) = 1;
  FUN__text__006f2bd4(param_1 + 0x21e0,
                      *(long *)(*(long *)(param_1 + 0x160) + 0x58) + (long)*piVar3 * 0x168,
                      param_1 + (long)*piVar3 * 0x58 + 0x4208);
  lVar15 = *(long *)(*(long *)(param_1 + 0x168) + 0xd0);
  nn::os::GetSystemTick();
  lVar14 = nn::os::ConvertToTimeSpan();
  piVar3 = _DAT_008a0300;
  if (*(char *)(param_1 + 0x85a8) == '\0') {
    *(undefined1 *)(param_1 + 0x85a8) = 1;
  }
  else {
    FUN__text__006f5690(param_1 + (long)*_DAT_008a0300 * -0x58 + 0x4260,1000000000);
  }
  nn::os::GetSystemTick();
  lVar4 = nn::os::ConvertToTimeSpan();
  iVar2 = *piVar3;
  lVar16 = *(long *)(param_1 + 0x1d8);
  *(int *)(lVar16 + 0x138) = (int)(1 - (long)iVar2);
  puVar13 = _DAT_0089f418;
  FUN__text__005b52c0(*_DAT_0089f418,lVar16);
  lVar16 = lVar16 + (1 - (long)iVar2) * 0x70 + 0x58;
  lVar5 = thunk_FUN__text__006ec5f4(lVar16);
  uVar6 = FUN__text__006ec680();
  uVar7 = FUN__text__006ec680(lVar5 + 0x10);
  uVar6 = FUN__text__006ec690(uVar6,uVar7);
  *(undefined8 *)(param_1 + 0x1d0) = uVar6;
  thunk_FUN__text__006ec608(lVar16);
  FUN__text__005aa320(DAT_00b11098);
  FUN__text__005aa480(DAT_008e1498);
  FUN__text__005b5bb0(*puVar13);
  lVar16 = **(long **)(param_1 + 0x120);
  plVar8 = (long *)(*(code *)**(undefined8 **)(lVar16 + 0x58))();
  plVar9 = (long *)FUN__text__005ae4d4();
  if (plVar9 != plVar8) {
    do {
      plVar8 = (long *)*plVar8;
    } while (plVar8 != plVar9 && plVar8 != (long *)0x0);
    if (plVar8 == (long *)0x0) goto LAB__text__005aa198;
  }
  uVar11 = (ulong)~*(uint *)(lVar16 + 0x98) & 1;
  lVar5 = lVar16 + uVar11 * 0x18;
  *(ulong *)(lVar16 + 0x98) = uVar11;
  *(undefined8 *)(lVar5 + 0x68) = *(undefined8 *)(lVar5 + 0x70);
LAB__text__005aa198:
  nn::os::GetSystemTick();
  lVar16 = nn::os::ConvertToTimeSpan();
  lVar16 = lVar16 - *(long *)(param_1 + 0x1a8);
  *(long *)(param_1 + 0x1b0) = lVar16;
  *(long *)(param_1 + 0x1c0) = (lVar14 - (lVar15 + lVar4)) + lVar16;
  lVar14 = (*(code *)**(undefined8 **)*param_2)((undefined8 *)*param_2,0);
  uVar10 = (uint)((double)*(long *)(lVar14 + 8) / 16666666.0);
  if ((int)uVar10 < 2) {
    uVar10 = 1;
  }
  if (4 < uVar10) {
    uVar10 = 5;
  }
  if (*(char *)(param_1 + 0x85a9) != '\0') {
    uVar10 = 0;
  }
  lVar14 = param_1 + 0x21e0;
  FUN__text__005b254c(*(undefined8 *)(param_1 + 0x168),lVar14,uVar10);
  if ((double)*(long *)(param_1 + 0x1b0) / 1000000.0 < 4.0) {
    FUN__text__006f2c40(lVar14);
  }
  if ((*(int *)(param_1 + 0x70) != *(int *)(param_1 + 0x8588)) ||
     (*(int *)(param_1 + 0x859c) != *(int *)(param_1 + 0x8598))) {
    FUN__text__006f2c40(lVar14);
    if (*(int *)(param_1 + 0x70) != *(int *)(param_1 + 0x8588)) {
      *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x8588);
      puVar1 = *(undefined8 **)(*(long *)(param_1 + 0x8580) + 0x68);
      for (puVar13 = *(undefined8 **)(*(long *)(param_1 + 0x8580) + 0x60); puVar13 != puVar1;
          puVar13 = puVar13 + 1) {
        (**(code **)(*(long *)*puVar13 + 8))();
      }
    }
  }
  if (*(int *)(param_1 + 0x859c) != *(int *)(param_1 + 0x8598)) {
    *(int *)(param_1 + 0x859c) = *(int *)(param_1 + 0x8598);
    puVar1 = *(undefined8 **)(*(long *)(param_1 + 0x8590) + 0x68);
    for (puVar13 = *(undefined8 **)(*(long *)(param_1 + 0x8590) + 0x60); puVar13 != puVar1;
        puVar13 = puVar13 + 1) {
      (**(code **)(*(long *)*puVar13 + 8))();
    }
  }
  *(undefined4 *)(param_1 + 0x85a4) = *(undefined4 *)(param_1 + 0x85a0);
  nn::os::GetSystemTick();
  uVar6 = nn::os::ConvertToTimeSpan();
  *(undefined8 *)(param_1 + 0x1a8) = uVar6;
  return;
}


