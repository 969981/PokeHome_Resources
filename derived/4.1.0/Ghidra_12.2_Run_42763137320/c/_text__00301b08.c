/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00301b08; name: FUN_.text__00301b08
 */


undefined8 FUN__text__00301b08(long param_1,long *param_2,long *param_3,uint param_4,uint param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  uint uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  undefined4 *puVar13;
  
  lVar10 = *param_3;
  if (lVar10 == 0) {
    lVar11 = param_1 + (ulong)param_4 * 0x5fa0 + 0x58;
    lVar6 = lVar11 + (ulong)param_5 * 0x330;
    puVar13 = (undefined4 *)(lVar6 + 0x2e8);
    iVar1 = *(int *)(lVar6 + 0x2e8);
    if (iVar1 < 0) {
LAB__text__00301bec:
      lVar6 = lVar11 + (ulong)param_5 * 0x330;
      FUN__text__00306b04(lVar10,lVar6);
      uVar3 = *(undefined8 *)(lVar6 + 0x2a0);
      *(undefined8 *)(lVar10 + 0x60) = *(undefined8 *)(lVar6 + 0x298);
      *(undefined8 *)(lVar10 + 0x68) = uVar3;
      uVar3 = *(undefined8 *)(lVar6 + 0x2a8);
      uVar8 = *(undefined8 *)(lVar6 + 0x2b0);
      uVar9 = *(undefined8 *)(lVar6 + 0x2c0);
      *(undefined8 *)(lVar10 + 0x80) = *(undefined8 *)(lVar6 + 0x2b8);
      *(undefined8 *)(lVar10 + 0x88) = uVar9;
      *(undefined8 *)(lVar10 + 0x70) = uVar3;
      *(undefined8 *)(lVar10 + 0x78) = uVar8;
      uVar3 = *(undefined8 *)(lVar6 + 0x2d0);
      uVar8 = *(undefined8 *)(lVar6 + 0x2d8);
      uVar9 = *(undefined8 *)(lVar6 + 0x2e0);
      *(undefined8 *)(lVar10 + 0x90) = *(undefined8 *)(lVar6 + 0x2c8);
      *(undefined8 *)(lVar10 + 0x98) = uVar3;
      *(undefined8 *)(lVar10 + 0xa0) = uVar8;
      *(undefined8 *)(lVar10 + 0xa8) = uVar9;
      (**(code **)(*(long *)(lVar10 + 0x48) + 0x18))();
      goto LAB__text__00301c4c;
    }
    if (iVar1 != 0) goto LAB__text__00301b88;
LAB__text__00301c80:
    lVar10 = *param_2;
    if (lVar10 != 0) {
      (**(code **)(*(long *)(lVar10 + 0x48) + 0x10))();
    }
    lVar11 = lVar11 + (ulong)param_5 * 0x330;
    FUN__text__005fc068(lVar11,*(undefined8 *)(lVar10 + 0x58));
    uVar3 = *(undefined8 *)(lVar10 + 0x68);
    *(undefined8 *)(lVar11 + 0x298) = *(undefined8 *)(lVar10 + 0x60);
    *(undefined8 *)(lVar11 + 0x2a0) = uVar3;
    uVar3 = *(undefined8 *)(lVar10 + 0x80);
    uVar8 = *(undefined8 *)(lVar10 + 0x88);
    uVar9 = *(undefined8 *)(lVar10 + 0x78);
    *(undefined8 *)(lVar11 + 0x2a8) = *(undefined8 *)(lVar10 + 0x70);
    *(undefined8 *)(lVar11 + 0x2c0) = uVar8;
    *(undefined8 *)(lVar11 + 0x2b8) = uVar3;
    *(undefined8 *)(lVar11 + 0x2b0) = uVar9;
    uVar3 = *(undefined8 *)(lVar10 + 0xa0);
    uVar8 = *(undefined8 *)(lVar10 + 0xa8);
    uVar9 = *(undefined8 *)(lVar10 + 0x98);
    *(undefined8 *)(lVar11 + 0x2c8) = *(undefined8 *)(lVar10 + 0x90);
    *(undefined8 *)(lVar11 + 0x2e0) = uVar8;
    *(undefined8 *)(lVar11 + 0x2d8) = uVar3;
    *(undefined8 *)(lVar11 + 0x2d0) = uVar9;
    uVar2 = FUN__text__003065f8(lVar10);
    *puVar13 = uVar2;
    uVar3 = FUN__text__00637404(*(undefined8 *)(lVar10 + 0x58));
    *(undefined8 *)(lVar11 + 0x2f0) = uVar3;
    (**(code **)(*(long *)(lVar10 + 0x48) + 0x18))((long *)(lVar10 + 0x48));
    uVar4 = FUN__text__00306588(*param_2);
    if ((uVar4 & 1) == 0) {
      lVar10 = *param_2;
      if (lVar10 != 0) {
        plVar12 = (long *)(lVar10 + 0x48);
        (**(code **)(*plVar12 + 0x10))(plVar12);
        (**(code **)(*plVar12 + 0x10))(plVar12);
      }
      uVar4 = FUN__text__00306588(lVar10);
      if (((uVar4 & 1) == 0) &&
         (lVar11 = FUN__text__00637404(*(undefined8 *)(lVar10 + 0x58)), lVar11 == 0)) {
        uVar4 = FUN__text__003065f8(lVar10);
        uVar5 = FUN__text__003067fc(lVar10);
        param_1 = param_1 + (uVar4 & 0xffffffff) * 8;
        if ((uVar5 & 1) == 0) {
          uVar7 = 0xfe0;
        }
        else {
          uVar7 = 0xfe4;
        }
        *(int *)(param_1 + (ulong)(uVar7 | 0x700000)) =
             *(int *)(param_1 + (ulong)(uVar7 | 0x700000)) + 1;
      }
      plVar12 = (long *)(lVar10 + 0x48);
      (**(code **)(*plVar12 + 0x18))(plVar12);
      (**(code **)(*plVar12 + 0x18))(plVar12);
    }
    uVar3 = 1;
  }
  else {
    plVar12 = (long *)(lVar10 + 0x48);
    (**(code **)(*plVar12 + 0x10))(plVar12);
    lVar11 = param_1 + (ulong)param_4 * 0x5fa0 + 0x58;
    lVar6 = lVar11 + (ulong)param_5 * 0x330;
    iVar1 = *(int *)(lVar6 + 0x2e8);
    puVar13 = (undefined4 *)(lVar6 + 0x2e8);
    if (iVar1 < 0) {
      (**(code **)(*plVar12 + 0x10))(plVar12);
      if ((param_4 < 300) && (param_5 < 0x1e)) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
        goto LAB__text__00301bec;
      }
LAB__text__00301c4c:
      plVar12 = (long *)(lVar10 + 0x48);
      (**(code **)(*plVar12 + 0x18))(plVar12);
      uVar4 = FUN__text__00306588(lVar10);
      (**(code **)(*plVar12 + 0x18))(plVar12);
      if ((uVar4 & 1) != 0) goto LAB__text__00301c80;
    }
    else {
      (**(code **)(*plVar12 + 0x18))(plVar12);
      if (iVar1 == 0) goto LAB__text__00301c80;
    }
LAB__text__00301b88:
    uVar3 = 0;
  }
  return uVar3;
}


