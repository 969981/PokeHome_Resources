/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006582c0; name: FUN_.text__006582c0
 */


int FUN__text__006582c0(long param_1,long param_2,long param_3,int param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  bool bVar7;
  int iVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  byte bVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  
  puVar10 = (undefined8 *)(param_1 + 0x50);
  FUN__text__0066bd88(*puVar10);
  *puVar10 = 0;
  if (*(int *)(param_1 + 0x88) == 1) {
    *(undefined4 *)(param_1 + 0x88) = 1;
    *(undefined8 *)(param_1 + 0x90) = 0;
    *(undefined8 *)(param_1 + 0x98) = 0;
  }
  lVar13 = *(long *)(param_1 + 0x60);
  if (lVar13 == 0) {
    lVar13 = FUN__text__00658688(*(undefined8 *)(param_1 + 0x58),0x7180e8);
  }
  lVar11 = lVar13;
  if (lVar13 == 0) {
    lVar11 = param_2;
  }
  if (lVar11 == 0) {
    if (*(int *)(param_1 + 0x18) == 4) {
      lVar11 = 0x718d7c;
    }
    else if (*(int *)(param_1 + 0x18) == 2) {
      lVar11 = FUN__text__00658238(*(undefined8 *)(param_1 + 0x68));
      if (((lVar11 == 0) &&
          (lVar11 = FUN__text__00658238(*(undefined8 *)(param_1 + 0x20)), lVar11 == 0)) &&
         (lVar11 = 0, *(long *)(param_1 + 0x68) != 0)) {
        lVar11 = 0x70f198;
      }
    }
    else {
      lVar11 = FUN__text__00658238(*(undefined8 *)(param_1 + 0x68));
    }
  }
  if (*(int *)(param_1 + 0x18) == 4) {
    lVar15 = *(long *)(param_1 + 0x40);
    lVar13 = 0;
    if (lVar15 != 0) {
      lVar13 = lVar15 + 0x20;
    }
  }
  else {
    lVar15 = 0;
    if ((lVar13 == 0) && (lVar11 != 0)) {
      iVar8 = FUN__text__0066c234(lVar11,0x71af47);
      if ((iVar8 != 0) && ((param_4 == 0 || (*(long *)(param_1 + 0x68) == 0)))) {
        lVar11 = 0;
      }
      lVar15 = 0;
      lVar13 = 0;
    }
    else {
      lVar13 = 0;
    }
  }
  lVar9 = FUN__text__00658688(*(undefined8 *)(param_1 + 0x58),0x70bc71);
  if (lVar9 != 0) goto LAB__text__006583fc;
  if (param_3 == 0) {
    if ((*(long *)(param_1 + 0x68) != 0) || (*(long *)(param_1 + 0x70) != 0)) {
LAB__text__00658454:
      param_3 = 0x70e8bf;
      goto LAB__text__0065845c;
    }
    if (lVar11 != 0) {
      iVar8 = FUN__text__0066c2d8(lVar11,0x70fcb0,10);
      if (iVar8 == 0) goto LAB__text__00658454;
      goto LAB__text__00658400;
    }
LAB__text__00658578:
    bVar12 = 0;
  }
  else {
LAB__text__0065845c:
    iVar8 = thunk_FUN__text__0066c234(param_3,0x70e8bf);
    if ((iVar8 == 0) || (*(long *)(param_1 + 0x70) != 0)) {
      if (param_3 != 0) {
        if (*(long *)(param_1 + 0x70) == 0) goto LAB__text__006584c0;
        lVar9 = FUN__text__006586e4();
        if (lVar9 != 0) goto LAB__text__006584c4;
        lVar14 = 0;
LAB__text__006584d8:
        iVar8 = 0x1b;
        goto LAB__text__00658540;
      }
    }
    else if ((param_3 != 0) && (*(long *)(param_1 + 0x68) != 0)) {
LAB__text__006584c0:
      lVar9 = 0;
LAB__text__006584c4:
      if (*(long *)(param_1 + 0x68) == 0) {
        lVar14 = 0;
      }
      else {
        lVar14 = FUN__text__006586e4();
        if (lVar14 == 0) goto LAB__text__006584d8;
      }
      bVar7 = lVar9 != 0;
      uVar1 = 0x70f683;
      if (bVar7) {
        uVar1 = 0x7154ac;
      }
      lVar2 = 0x70f683;
      if (bVar7) {
        lVar2 = lVar9;
      }
      uVar3 = 0x70f683;
      if (bVar7) {
        uVar3 = 0x719831;
      }
      bVar7 = lVar14 != 0;
      uVar4 = 0x70f683;
      if (bVar7) {
        uVar4 = 0x71626a;
      }
      lVar5 = 0x70f683;
      if (bVar7) {
        lVar5 = lVar14;
      }
      uVar6 = 0x70f683;
      if (bVar7) {
        uVar6 = 0x719831;
      }
      iVar8 = FUN__text__00658180(puVar10,0x715488,param_3,uVar1,lVar2,uVar3,uVar4,lVar5,uVar6);
LAB__text__00658540:
      FUN__text__006783e4(lVar9);
      FUN__text__006783e4(lVar14);
      if (iVar8 != 0) {
        return iVar8;
      }
    }
LAB__text__006583fc:
    if (lVar11 == 0) goto LAB__text__00658578;
LAB__text__00658400:
    uVar1 = 0x70f683;
    if (lVar13 != 0) {
      uVar1 = 0x71bbae;
    }
    lVar9 = 0x70f683;
    if (lVar13 != 0) {
      lVar9 = lVar13;
    }
    iVar8 = FUN__text__00658180(puVar10,0x7175f4,lVar11,uVar1,lVar9);
    if (iVar8 != 0) {
      return iVar8;
    }
    bVar12 = 1;
  }
  lVar13 = FUN__text__00658688(*(undefined8 *)(param_1 + 0x58),0x70bc85);
  if (lVar13 == 0) {
    if (*(long **)(param_1 + 0xa0) == (long *)0x0) {
      bVar7 = (bool)(bVar12 ^ 1);
      if (param_4 != 0) {
        bVar7 = true;
      }
      if ((bVar7) || (*(int *)(param_1 + 0x18) == 4)) goto LAB__text__00658590;
      lVar13 = 0x718d8c;
    }
    else {
      lVar13 = **(long **)(param_1 + 0xa0);
      if (lVar13 == 0) goto LAB__text__00658590;
    }
    iVar8 = FUN__text__00658180(puVar10,0x71a417,lVar13);
    if (iVar8 != 0) {
      return iVar8;
    }
  }
LAB__text__00658590:
  if (*(int *)(param_1 + 0x88) == 1) {
    *(undefined4 *)(param_1 + 0x88) = 1;
    *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(param_1 + 0x50);
    *(undefined8 *)(param_1 + 0x98) = 0;
  }
  if ((lVar15 != 0) && (*(int *)(param_1 + 0x18) == 4)) {
    iVar8 = FUN__text__0066c234(lVar11,0x712b9d);
    lVar13 = *(long *)(lVar15 + 0x10);
    uVar1 = 0;
    if (iVar8 != 0) {
      uVar1 = 0x71d2fa;
    }
    for (; lVar13 != 0; lVar13 = *(long *)(lVar13 + 0x10)) {
      iVar8 = FUN__text__006582c0(lVar13,0,uVar1,param_4);
      if (iVar8 != 0) {
        return iVar8;
      }
    }
  }
  return 0;
}


