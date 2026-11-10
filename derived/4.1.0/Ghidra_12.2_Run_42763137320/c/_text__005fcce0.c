/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005fcce0; name: FUN_.text__005fcce0
 */


void FUN__text__005fcce0(int *param_1,int param_2,uint param_3,uint param_4,undefined8 param_5,
                        int param_6)

{
  short sVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  int *piVar6;
  ulong uVar7;
  long lVar8;
  
  if (param_2 == 0) {
    return;
  }
  uVar5 = FUN__text__0063db50(param_2,param_4);
  if ((uVar5 & 1) == 0) {
    return;
  }
  if (((((param_4 & 0xff) == 2) && ((param_3 - 1 & 0xff) < 2)) && (param_6 - 1U < 2)) &&
     ((iVar3 = FUN__text__006312d8(param_5), iVar3 != 0x2c &&
      (iVar3 = FUN__text__006312d8(param_5), iVar3 != 0x2d)))) {
    uVar5 = FUN__text__00600108(param_5,param_2,param_4,0,0);
  }
  else {
    if ((param_4 & 0xff) == (param_3 & 0xff)) goto LAB__text__005fcdb0;
    uVar5 = FUN__text__00600108(param_5,param_2,param_4,1,1);
  }
  if ((uVar5 & 1) == 0) {
    return;
  }
LAB__text__005fcdb0:
  if ((param_4 & 0xff) == 7) {
    lVar8 = 0;
    do {
      if (((*(int *)(lVar8 + 0x757dc4) == param_2) &&
          (iVar3 = *(int *)(lVar8 + 0x757dbc), iVar4 = FUN__text__00631008(param_5), iVar3 == iVar4)
          ) && (sVar1 = *(short *)(lVar8 + 0x757dc0), sVar2 = FUN__text__00631010(param_5),
               sVar1 == sVar2)) {
        return;
      }
      lVar8 = lVar8 + 0x10;
    } while (lVar8 != 0x200);
  }
  uVar5 = (ulong)(uint)param_1[0x399];
  if (param_1[0x399] == 0) {
    uVar5 = 0;
  }
  else {
    piVar6 = param_1;
    uVar7 = uVar5;
    do {
      if (*piVar6 == param_2) {
        return;
      }
      uVar7 = uVar7 - 1;
      piVar6 = piVar6 + 1;
    } while (uVar7 != 0);
  }
  param_1[uVar5] = param_2;
  param_1[0x399] = param_1[0x399] + 1;
  return;
}


