/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006ed4ac; name: FUN_.text__006ed4ac
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__006ed4ac(long param_1,long param_2,long param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  int *piVar9;
  int iVar10;
  undefined8 local_88;
  undefined8 uStack_80;
  int local_78;
  int iStack_74;
  int local_70;
  int iStack_6c;
  int local_68;
  int iStack_64;
  int local_60;
  int local_5c;
  int local_58;
  int iStack_54;
  
  iVar2 = (*(code *)*_DAT_008a6940)(*(undefined8 *)(param_2 + 8));
  iStack_54 = param_4[4];
  local_5c = param_4[5];
  local_58 = param_4[7];
  local_60 = param_4[8];
  if (iVar2 == 3) {
    piVar8 = &local_58;
    piVar9 = &iStack_54;
  }
  else {
    if (iVar2 != 6 && iVar2 != 4) goto LAB__text__006ed540;
    piVar8 = &local_60;
    piVar9 = &local_5c;
  }
  iVar2 = param_4[0xb];
  *piVar9 = param_4[10];
  if (iVar2 < 2) {
    iVar2 = 1;
  }
  *piVar8 = iVar2;
LAB__text__006ed540:
  local_78 = param_4[3];
  iStack_6c = param_4[6];
  local_88 = 0;
  uStack_80 = 0;
  iStack_74 = iStack_54;
  local_70 = local_5c;
  local_68 = local_58;
  iStack_64 = local_60;
  (*DAT_00c60498)(&local_88);
  (*(code *)*_DAT_008a6950)(&local_88,(short)param_4[9],1);
  lVar6 = (*(code *)*_DAT_008a6cf8)(*(undefined8 *)(param_3 + 8));
  iVar2 = *param_4;
  if (param_4[1] == 0 && param_4[2] == 0) {
    iVar10 = 0;
  }
  else {
    (*(code *)*_DAT_008a6ed8)(*(undefined8 *)(param_2 + 8));
    iVar3 = FUN__text__006f2680();
    iVar3 = iVar3 >> 8;
    iVar1 = param_4[6];
    if (param_4[1] != 0) {
      iVar1 = param_4[1];
    }
    iVar4 = FUN__text__006ebfd0(iVar3);
    uVar7 = FUN__text__006ebfc0(iVar3);
    iVar10 = iVar1 * iVar4;
    if ((uVar7 & 1) != 0) {
      iVar5 = FUN__text__006ebf60(iVar3);
      iVar3 = FUN__text__006ebf90(iVar3);
      iVar10 = 0;
      if (iVar3 * iVar5 != 0) {
        iVar10 = (iVar1 * iVar4) / (iVar3 * iVar5);
      }
    }
  }
  iVar3 = param_4[2];
  (*DAT_00c60db8)(*(undefined8 *)(param_1 + 0xb0),(long)iVar10);
  (*(code *)*_DAT_008a6ee8)(*(undefined8 *)(param_1 + 0xb0),(long)iVar3 * (long)iVar10);
  (*(code *)*_DAT_008a6ef0)
            (*(undefined8 *)(param_1 + 0xb0),lVar6 + iVar2,*(undefined8 *)(param_2 + 8),&local_88,
             &local_78,0);
  return;
}


