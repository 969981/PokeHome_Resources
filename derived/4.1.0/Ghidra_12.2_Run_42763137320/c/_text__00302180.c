/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00302180; name: FUN_.text__00302180
 */


int FUN__text__00302180(long param_1,uint param_2,long *param_3,uint param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  int iVar5;
  long lVar6;
  uint uVar7;
  long *plVar8;
  int *piVar9;
  long lVar10;
  
  iVar5 = 0;
  lVar10 = 0x1e;
  piVar9 = (int *)(param_1 + (ulong)param_2 * 0x5fa0 + 0x340);
  do {
    lVar6 = *param_3;
    if (lVar6 == 0) {
      if ((*piVar9 < 0) || ((param_4 & 1) == 0)) {
LAB__text__00302278:
        FUN__text__00306b04(lVar6,piVar9 + -0xba);
        uVar1 = *(undefined8 *)(piVar9 + -0x12);
        *(undefined8 *)(lVar6 + 0x60) = *(undefined8 *)(piVar9 + -0x14);
        *(undefined8 *)(lVar6 + 0x68) = uVar1;
        uVar1 = *(undefined8 *)(piVar9 + -0x10);
        uVar2 = *(undefined8 *)(piVar9 + -0xe);
        uVar3 = *(undefined8 *)(piVar9 + -10);
        *(undefined8 *)(lVar6 + 0x80) = *(undefined8 *)(piVar9 + -0xc);
        *(undefined8 *)(lVar6 + 0x88) = uVar3;
        *(undefined8 *)(lVar6 + 0x70) = uVar1;
        *(undefined8 *)(lVar6 + 0x78) = uVar2;
        uVar2 = *(undefined8 *)(piVar9 + -6);
        uVar1 = *(undefined8 *)(piVar9 + -4);
        uVar3 = *(undefined8 *)(piVar9 + -2);
        *(undefined8 *)(lVar6 + 0x90) = *(undefined8 *)(piVar9 + -8);
        *(undefined8 *)(lVar6 + 0x98) = uVar2;
        *(undefined8 *)(lVar6 + 0xa0) = uVar1;
        *(undefined8 *)(lVar6 + 0xa8) = uVar3;
        (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))();
LAB__text__003022bc:
        (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))();
        uVar4 = FUN__text__00306588(lVar6);
        if (((uVar4 & 1) == 0) &&
           (((param_4 & 1) != 0 || (uVar4 = FUN__text__00306a08(lVar6,2), (uVar4 & 1) == 0)))) {
          uVar7 = 1;
        }
        else {
          uVar7 = 0;
        }
        goto LAB__text__003021c4;
      }
      uVar7 = (uint)(*piVar9 != 0);
    }
    else {
      plVar8 = (long *)(lVar6 + 0x48);
      (**(code **)(*plVar8 + 0x10))(plVar8);
      if ((*piVar9 < 0) || ((param_4 & 1) == 0)) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
        if (param_2 < 300) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
          goto LAB__text__00302278;
        }
        goto LAB__text__003022bc;
      }
      uVar7 = (uint)(*piVar9 != 0);
LAB__text__003021c4:
      (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
    }
    lVar10 = lVar10 + -1;
    piVar9 = piVar9 + 0xcc;
    iVar5 = iVar5 + uVar7;
    if (lVar10 == 0) {
      return iVar5;
    }
  } while( true );
}


