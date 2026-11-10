/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00546ac0; name: FUN_.text__00546ac0
 */


undefined8 FUN__text__00546ac0(undefined8 param_1,long param_2,float *param_3,undefined8 param_4)

{
  float *pfVar1;
  ulong uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  iVar3 = *(int *)(param_2 + 0x200);
  if (*(int *)(param_2 + 0x204) < 1) {
    if (0 < iVar3) {
      lVar5 = 0;
      lVar6 = 0x30;
      do {
        pfVar1 = (float *)(param_2 + lVar5);
        if ((((*param_3 <= pfVar1[3]) && (*pfVar1 <= param_3[3])) && (param_3[1] <= pfVar1[4])) &&
           (((pfVar1[1] <= param_3[4] && (param_3[2] <= pfVar1[5])) && (pfVar1[2] <= param_3[5]))))
        {
          uVar2 = FUN__text__00546c74(param_4,*(undefined8 *)(param_2 + lVar6 * 8));
          if ((uVar2 & 1) == 0) {
            return 0;
          }
          iVar3 = *(int *)(param_2 + 0x200);
        }
        lVar4 = lVar6 + -0x2f;
        lVar6 = lVar6 + 1;
        lVar5 = lVar5 + 0x18;
      } while (lVar4 < iVar3);
    }
  }
  else if (0 < iVar3) {
    lVar5 = 0;
    lVar6 = 0x30;
    do {
      pfVar1 = (float *)(param_2 + lVar5);
      if (((*param_3 <= pfVar1[3]) && (*pfVar1 <= param_3[3])) &&
         ((param_3[1] <= pfVar1[4] &&
          (((pfVar1[1] <= param_3[4] && (param_3[2] <= pfVar1[5])) && (pfVar1[2] <= param_3[5]))))))
      {
        uVar2 = FUN__text__00546ac0(param_1,*(undefined8 *)(param_2 + lVar6 * 8),param_3,param_4);
        if ((uVar2 & 1) == 0) {
          return 0;
        }
        iVar3 = *(int *)(param_2 + 0x200);
      }
      lVar4 = lVar6 + -0x2f;
      lVar6 = lVar6 + 1;
      lVar5 = lVar5 + 0x18;
    } while (lVar4 < iVar3);
  }
  return 1;
}


