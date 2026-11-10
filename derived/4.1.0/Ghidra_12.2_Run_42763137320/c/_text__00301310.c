/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00301310; name: FUN_.text__00301310
 */


bool FUN__text__00301310(long param_1,uint param_2,uint param_3,long *param_4,uint param_5)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  
  lVar7 = param_1 + (ulong)param_2 * 0x5fa0 + 0x58;
  iVar1 = *(int *)(lVar7 + (ulong)param_3 * 0x330 + 0x2e8);
  if ((-1 < iVar1) && ((param_5 & 1) != 0)) {
    return iVar1 != 0;
  }
  lVar6 = *param_4;
  if (lVar6 != 0) {
    plVar8 = (long *)(lVar6 + 0x48);
    (**(code **)(*plVar8 + 0x10))(plVar8);
    if ((299 < param_2) || (0x1d < param_3)) goto LAB__text__00301418;
    (**(code **)(*plVar8 + 0x10))(plVar8);
  }
  lVar7 = lVar7 + (ulong)param_3 * 0x330;
  FUN__text__00306b04(lVar6,lVar7);
  uVar3 = *(undefined8 *)(lVar7 + 0x2a0);
  *(undefined8 *)(lVar6 + 0x60) = *(undefined8 *)(lVar7 + 0x298);
  *(undefined8 *)(lVar6 + 0x68) = uVar3;
  uVar3 = *(undefined8 *)(lVar7 + 0x2a8);
  uVar4 = *(undefined8 *)(lVar7 + 0x2b0);
  uVar5 = *(undefined8 *)(lVar7 + 0x2c0);
  *(undefined8 *)(lVar6 + 0x80) = *(undefined8 *)(lVar7 + 0x2b8);
  *(undefined8 *)(lVar6 + 0x88) = uVar5;
  *(undefined8 *)(lVar6 + 0x70) = uVar3;
  *(undefined8 *)(lVar6 + 0x78) = uVar4;
  uVar3 = *(undefined8 *)(lVar7 + 0x2d0);
  uVar4 = *(undefined8 *)(lVar7 + 0x2d8);
  uVar5 = *(undefined8 *)(lVar7 + 0x2e0);
  *(undefined8 *)(lVar6 + 0x90) = *(undefined8 *)(lVar7 + 0x2c8);
  *(undefined8 *)(lVar6 + 0x98) = uVar3;
  *(undefined8 *)(lVar6 + 0xa0) = uVar4;
  *(undefined8 *)(lVar6 + 0xa8) = uVar5;
  (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))();
LAB__text__00301418:
  (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
  uVar2 = FUN__text__00306588(*param_4);
  if (((uVar2 & 1) == 0) &&
     (((param_5 & 1) != 0 || (uVar2 = FUN__text__00306a08(*param_4,2), (uVar2 & 1) == 0)))) {
    return true;
  }
  return false;
}


