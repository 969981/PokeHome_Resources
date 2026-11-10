/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005466b0; name: FUN_.text__005466b0
 */


undefined8 FUN__text__005466b0(undefined8 param_1,long param_2,double *param_3,long *param_4)

{
  double *pdVar1;
  ulong uVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 local_6c;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_5c;
  undefined4 local_54;
  
  iVar4 = *(int *)(param_2 + 0x380);
  if (*(int *)(param_2 + 900) < 1) {
    if (0 < iVar4) {
      lVar7 = 0;
      lVar8 = 0x60;
      do {
        pdVar1 = (double *)(param_2 + lVar7);
        if ((((*param_3 <= pdVar1[3]) && (*pdVar1 <= param_3[3])) && (param_3[1] <= pdVar1[4])) &&
           (((pdVar1[1] <= param_3[4] && (param_3[2] <= pdVar1[5])) && (pdVar1[2] <= param_3[5]))))
        {
          lVar6 = *(long *)(param_2 + lVar8 * 8);
          FUN__text__005468d0(*param_4,lVar6);
          lVar3 = *param_4;
          lVar5 = *(long *)(lVar6 + 8);
          local_68 = *(undefined8 *)(lVar3 + 0x38);
          lVar6 = *(long *)(lVar5 + 0x38);
          uStack_74 = (undefined4)((ulong)*(undefined8 *)(lVar3 + 0x40) >> 0x20);
          uStack_70 = (undefined4)*(undefined8 *)(lVar3 + 0x48);
          local_6c = (undefined4)((ulong)*(undefined8 *)(lVar3 + 0x48) >> 0x20);
          local_60 = *(undefined4 *)(lVar3 + 0x40);
          local_5c = CONCAT44(uStack_70,uStack_74);
          local_54 = local_6c;
          if (lVar6 != 0) {
            FUN__text__00546ac0(lVar5 + 0x30,lVar6,&local_68);
            lVar3 = *param_4;
          }
          *(undefined8 *)(lVar3 + 0x50) = 0;
          iVar4 = *(int *)(param_2 + 0x380);
        }
        lVar6 = lVar8 + -0x5f;
        lVar8 = lVar8 + 1;
        lVar7 = lVar7 + 0x30;
      } while (lVar6 < iVar4);
    }
  }
  else if (0 < iVar4) {
    lVar7 = 0;
    lVar8 = 0x60;
    do {
      pdVar1 = (double *)(param_2 + lVar7);
      if (((*param_3 <= pdVar1[3]) && (*pdVar1 <= param_3[3])) &&
         ((param_3[1] <= pdVar1[4] &&
          (((pdVar1[1] <= param_3[4] && (param_3[2] <= pdVar1[5])) && (pdVar1[2] <= param_3[5]))))))
      {
        uVar2 = FUN__text__005466b0(param_1,*(undefined8 *)(param_2 + lVar8 * 8),param_3,param_4);
        if ((uVar2 & 1) == 0) {
          return 0;
        }
        iVar4 = *(int *)(param_2 + 0x380);
      }
      lVar6 = lVar8 + -0x5f;
      lVar8 = lVar8 + 1;
      lVar7 = lVar7 + 0x30;
    } while (lVar6 < iVar4);
  }
  return 1;
}


