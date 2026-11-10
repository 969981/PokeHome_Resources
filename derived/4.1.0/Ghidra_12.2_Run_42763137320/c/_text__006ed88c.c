/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006ed88c; name: FUN_.text__006ed88c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__006ed88c(long param_1,long param_2,undefined4 *param_3,long param_4,
                        undefined4 *param_5,uint param_6)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  int local_88;
  int iStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  int local_70;
  int iStack_6c;
  int local_68;
  undefined4 local_64;
  int local_60;
  undefined4 uStack_5c;
  int local_58;
  undefined4 local_54;
  int local_38;
  undefined4 local_34;
  
  puVar1 = _DAT_008a6940;
  iVar3 = (*(code *)*_DAT_008a6940)(*(undefined8 *)(param_2 + 8));
  local_34 = param_3[1];
  local_54 = param_3[2];
  local_38 = param_3[4];
  local_58 = param_3[5];
  if (iVar3 == 3) {
    piVar4 = &local_38;
    puVar5 = &local_34;
LAB__text__006ed90c:
    iVar3 = param_3[8];
    *puVar5 = param_3[7];
    if (iVar3 < 2) {
      iVar3 = 1;
    }
    *piVar4 = iVar3;
  }
  else if (iVar3 == 6 || iVar3 == 4) {
    piVar4 = &local_58;
    puVar5 = &local_54;
    goto LAB__text__006ed90c;
  }
  iVar3 = (*(code *)*puVar1)(*(undefined8 *)(param_4 + 8));
  puVar1 = _DAT_008a6948;
  uStack_5c = param_5[1];
  local_64 = param_5[2];
  local_60 = param_5[4];
  local_68 = param_5[5];
  if (iVar3 == 3) {
    piVar4 = &local_60;
    puVar5 = &uStack_5c;
  }
  else {
    if ((iVar3 != 6) && (iVar3 != 4)) goto LAB__text__006ed984;
    piVar4 = &local_68;
    puVar5 = &local_64;
  }
  iVar3 = param_5[8];
  *puVar5 = param_5[7];
  if (iVar3 < 2) {
    iVar3 = 1;
  }
  *piVar4 = iVar3;
LAB__text__006ed984:
  local_80 = *param_3;
  uStack_7c = local_34;
  uStack_74 = param_3[3];
  local_78 = local_54;
  local_70 = local_38;
  iStack_6c = local_58;
  local_98 = *param_5;
  uStack_8c = param_5[3];
  local_a8 = 0;
  uStack_a0 = 0;
  uStack_94 = uStack_5c;
  local_90 = local_64;
  local_88 = local_60;
  iStack_84 = local_68;
  (*(code *)*_DAT_008a6948)(&local_a8);
  puVar2 = _DAT_008a6950;
  (*(code *)*_DAT_008a6950)(&local_a8,*(undefined2 *)(param_3 + 6),1);
  local_b8 = 0;
  uStack_b0 = 0;
  (*(code *)*puVar1)(&local_b8);
  (*(code *)*puVar2)(&local_b8,*(undefined2 *)(param_5 + 6),1);
  (*(code *)*_DAT_008a6958)
            (*(undefined8 *)(param_1 + 0xb0),*(undefined8 *)(param_4 + 8),&local_b8,&local_98,
             *(undefined8 *)(param_2 + 8),&local_a8,&local_80,param_6 & 1);
  return;
}


