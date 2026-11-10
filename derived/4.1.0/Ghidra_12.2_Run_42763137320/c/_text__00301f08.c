/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00301f08; name: FUN_.text__00301f08
 */


void FUN__text__00301f08(long param_1,long *param_2,uint param_3,uint param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  uint uVar8;
  long lVar9;
  long *plVar10;
  long local_48;
  
  if ((param_4 < 0x1e) && (param_3 < *(uint *)(param_1 + 0x700fdc))) {
    FUN__text__00300448(&local_48,param_1,param_3,param_4,*(undefined8 *)(param_1 + 8));
    uVar4 = FUN__text__00306588(local_48);
    lVar9 = local_48;
    if ((uVar4 & 1) == 0) {
      if (local_48 != 0) {
        plVar10 = (long *)(local_48 + 0x48);
        (**(code **)(*plVar10 + 0x10))(plVar10);
        (**(code **)(*plVar10 + 0x10))(plVar10);
      }
      uVar4 = FUN__text__00306588(lVar9);
      if (((uVar4 & 1) == 0) &&
         (lVar5 = FUN__text__00637404(*(undefined8 *)(lVar9 + 0x58)), lVar5 == 0)) {
        uVar4 = FUN__text__003065f8(lVar9);
        uVar6 = FUN__text__003067fc(lVar9);
        lVar5 = param_1 + (uVar4 & 0xffffffff) * 8;
        if ((uVar6 & 1) == 0) {
          uVar8 = 0xfe0;
        }
        else {
          uVar8 = 0xfe4;
        }
        *(int *)(lVar5 + (ulong)(uVar8 | 0x700000)) =
             *(int *)(lVar5 + (ulong)(uVar8 | 0x700000)) + -1;
      }
      plVar10 = (long *)(lVar9 + 0x48);
      (**(code **)(*plVar10 + 0x18))(plVar10);
      (**(code **)(*plVar10 + 0x18))(plVar10);
    }
    lVar9 = *param_2;
    if (lVar9 != 0) {
      (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))();
    }
    lVar5 = param_1 + (ulong)param_3 * 0x5fa0 + (ulong)param_4 * 0x330;
    FUN__text__005fc068(lVar5 + 0x58,*(undefined8 *)(lVar9 + 0x58));
    uVar7 = *(undefined8 *)(lVar9 + 0x68);
    *(undefined8 *)(lVar5 + 0x2f0) = *(undefined8 *)(lVar9 + 0x60);
    *(undefined8 *)(lVar5 + 0x2f8) = uVar7;
    uVar7 = *(undefined8 *)(lVar9 + 0x80);
    uVar1 = *(undefined8 *)(lVar9 + 0x88);
    uVar2 = *(undefined8 *)(lVar9 + 0x78);
    *(undefined8 *)(lVar5 + 0x300) = *(undefined8 *)(lVar9 + 0x70);
    *(undefined8 *)(lVar5 + 0x318) = uVar1;
    *(undefined8 *)(lVar5 + 0x310) = uVar7;
    *(undefined8 *)(lVar5 + 0x308) = uVar2;
    uVar7 = *(undefined8 *)(lVar9 + 0xa0);
    uVar1 = *(undefined8 *)(lVar9 + 0xa8);
    uVar2 = *(undefined8 *)(lVar9 + 0x98);
    *(undefined8 *)(lVar5 + 800) = *(undefined8 *)(lVar9 + 0x90);
    *(undefined8 *)(lVar5 + 0x338) = uVar1;
    *(undefined8 *)(lVar5 + 0x330) = uVar7;
    *(undefined8 *)(lVar5 + 0x328) = uVar2;
    uVar3 = FUN__text__003065f8(lVar9);
    *(undefined4 *)(lVar5 + 0x340) = uVar3;
    uVar7 = FUN__text__00637404(*(undefined8 *)(lVar9 + 0x58));
    *(undefined8 *)(lVar5 + 0x348) = uVar7;
    (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))((long *)(lVar9 + 0x48));
    uVar4 = FUN__text__00306588(*param_2);
    if ((uVar4 & 1) == 0) {
      lVar9 = *param_2;
      if (lVar9 != 0) {
        plVar10 = (long *)(lVar9 + 0x48);
        (**(code **)(*plVar10 + 0x10))(plVar10);
        (**(code **)(*plVar10 + 0x10))(plVar10);
      }
      uVar4 = FUN__text__00306588(lVar9);
      if (((uVar4 & 1) == 0) &&
         (lVar5 = FUN__text__00637404(*(undefined8 *)(lVar9 + 0x58)), lVar5 == 0)) {
        uVar4 = FUN__text__003065f8(lVar9);
        uVar6 = FUN__text__003067fc(lVar9);
        param_1 = param_1 + (uVar4 & 0xffffffff) * 8;
        if ((uVar6 & 1) == 0) {
          uVar8 = 0xfe0;
        }
        else {
          uVar8 = 0xfe4;
        }
        *(int *)(param_1 + (ulong)(uVar8 | 0x700000)) =
             *(int *)(param_1 + (ulong)(uVar8 | 0x700000)) + 1;
      }
      plVar10 = (long *)(lVar9 + 0x48);
      (**(code **)(*plVar10 + 0x18))(plVar10);
      (**(code **)(*plVar10 + 0x18))(plVar10);
    }
    if (local_48 != 0) {
      (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
    }
  }
  return;
}


