/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004681b0; name: FUN_.text__004681b0
 */


undefined8 FUN__text__004681b0(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  int iVar2;
  undefined4 uVar3;
  byte bVar4;
  undefined8 uVar5;
  int *piVar6;
  int *piVar7;
  long lVar8;
  
  bVar4 = *(byte *)*param_2;
  *param_2 = (byte *)*param_2 + 1;
  uVar1 = 0;
  if ((bVar4 & 1) != 0) {
    uVar1 = 0x18000200000;
  }
  param_1[0x13] = uVar1 | param_1[0x13] & 0xfffffe7fffdfffffU;
  (**(code **)(*param_1 + 0x188))(param_1,0,0);
  *(uint *)((long)param_1 + 0xd2) =
       *(uint *)((long)param_1 + 0xd2) & 0xfff80000 |
       *(uint *)((long)param_1 + 0xd2) & 0x3ffff | (bVar4 >> 1 & 1) << 0x12;
  uVar1 = 0;
  if ((bVar4 & 4) != 0) {
    uVar1 = 0x7f83c00000;
  }
  param_1[0x13] = param_1[0x13] & 0xffffff807c3fffffU | uVar1;
  (**(code **)(*param_1 + 0x188))(param_1,0,0);
  param_1[0x13] =
       param_1[0x13] & 0xffffffff80000000U |
       param_1[0x13] & 0x3fffffffU | ((ulong)(bVar4 >> 4) & 1) << 0x1e;
  (**(code **)(*param_1 + 0x188))(param_1,0,0);
  if ((bVar4 >> 3 & 1) == 0) {
    if ((undefined4 *)param_1[0x11] != (undefined4 *)0x0) {
      *(undefined4 *)param_1[0x11] = 0;
      (**(code **)(*param_1 + 0x188))(param_1,0,0);
      if (param_1[0x11] != 0) {
        *(undefined4 *)(param_1[0x11] + 4) = 0;
        (**(code **)(*param_1 + 0x188))(param_1,0,0);
        if (param_1[0x11] == 0) goto LAB__text__00468474;
        *(undefined4 *)(param_1[0x11] + 8) = 0;
        (**(code **)(*param_1 + 0x188))(param_1,0,0);
        if (param_1[0x11] == 0) goto LAB__text__00468474;
        *(undefined4 *)(param_1[0x11] + 0xc) = 0;
        goto LAB__text__0046845c;
      }
    }
  }
  else {
    piVar6 = (int *)*param_2 + 1;
    iVar2 = *(int *)*param_2;
    *param_2 = piVar6;
    piVar7 = (int *)param_1[0x11];
    if ((iVar2 != 0) && (piVar7 == (int *)0x0)) {
      piVar7 = (int *)FUN__text__00400f80(2,0x10);
      if (piVar7 != (int *)0x0) {
        FUN__text__00467304();
        param_1[0x11] = (long)piVar7;
LAB__text__00468344:
        *piVar7 = iVar2;
        (**(code **)(*param_1 + 0x188))(param_1,0,0);
        piVar6 = (int *)*param_2;
        goto LAB__text__00468364;
      }
LAB__text__00468448:
      param_1[0x11] = 0;
      uVar5 = 0x34;
      goto LAB__text__00468478;
    }
    if (piVar7 != (int *)0x0) goto LAB__text__00468344;
LAB__text__00468364:
    piVar7 = piVar6 + 1;
    iVar2 = *piVar6;
    *param_2 = piVar7;
    lVar8 = param_1[0x11];
    if ((iVar2 == 0) || (lVar8 != 0)) {
      if (lVar8 != 0) goto LAB__text__0046839c;
    }
    else {
      lVar8 = FUN__text__00400f80(2,0x10);
      if (lVar8 == 0) goto LAB__text__00468448;
      FUN__text__00467304();
      param_1[0x11] = lVar8;
LAB__text__0046839c:
      *(int *)(lVar8 + 4) = iVar2;
      (**(code **)(*param_1 + 0x188))(param_1,0,0);
      piVar7 = (int *)*param_2;
    }
    piVar6 = piVar7 + 1;
    iVar2 = *piVar7;
    *param_2 = piVar6;
    lVar8 = param_1[0x11];
    if ((iVar2 == 0) || (lVar8 != 0)) {
      if (lVar8 != 0) goto LAB__text__004683f4;
    }
    else {
      lVar8 = FUN__text__00400f80(2,0x10);
      if (lVar8 == 0) goto LAB__text__00468448;
      FUN__text__00467304();
      param_1[0x11] = lVar8;
LAB__text__004683f4:
      *(int *)(lVar8 + 8) = iVar2;
      (**(code **)(*param_1 + 0x188))(param_1,0,0);
      piVar6 = (int *)*param_2;
    }
    iVar2 = *piVar6;
    *param_2 = piVar6 + 1;
    lVar8 = param_1[0x11];
    if ((iVar2 == 0) || (lVar8 != 0)) {
      if (lVar8 == 0) goto LAB__text__00468474;
    }
    else {
      lVar8 = FUN__text__00400f80(2,0x10);
      if (lVar8 == 0) goto LAB__text__00468448;
      FUN__text__00467304();
      param_1[0x11] = lVar8;
    }
    *(int *)(lVar8 + 0xc) = iVar2;
LAB__text__0046845c:
    (**(code **)(*param_1 + 0x188))(param_1,0,0);
  }
LAB__text__00468474:
  uVar5 = 1;
LAB__text__00468478:
  uVar3 = *(undefined4 *)*param_2;
  *param_2 = (undefined4 *)*param_2 + 1;
  *(undefined4 *)(param_1 + 0x14) = uVar3;
  return uVar5;
}


