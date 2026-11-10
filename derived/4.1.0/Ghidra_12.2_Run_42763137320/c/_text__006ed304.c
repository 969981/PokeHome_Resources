/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006ed304; name: FUN_.text__006ed304
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__006ed304(long param_1,long param_2,undefined2 *param_3,undefined4 param_4,
                        undefined4 param_5,undefined4 param_6,long param_7,undefined4 *param_8)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  int local_90;
  int iStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  int local_78;
  int iStack_74;
  int local_70;
  undefined4 local_6c;
  int local_68;
  undefined4 uStack_64;
  
  puVar1 = _DAT_008a6940;
  iVar3 = (*(code *)*_DAT_008a6940)(*(undefined8 *)(param_7 + 8));
  uVar4 = (*(code *)*puVar1)(*(undefined8 *)(param_2 + 8));
  puVar1 = _DAT_008a6948;
  uStack_64 = param_8[1];
  local_6c = param_8[2];
  local_68 = param_8[4];
  local_70 = param_8[5];
  if (iVar3 == 3) {
    piVar5 = &local_68;
    puVar6 = &uStack_64;
  }
  else {
    if (iVar3 != 6 && iVar3 != 4) goto LAB__text__006ed3bc;
    piVar5 = &local_70;
    puVar6 = &local_6c;
  }
  iVar3 = param_8[8];
  *puVar6 = param_8[7];
  if (iVar3 < 2) {
    iVar3 = 1;
  }
  *piVar5 = iVar3;
LAB__text__006ed3bc:
  local_88 = *param_8;
  uStack_94 = param_8[3];
  if (uVar4 == 3) {
    local_9c = *(undefined4 *)(param_3 + 2);
  }
  else {
    local_9c = param_5;
    if ((uVar4 & 0xfffffffd) == 4) {
      param_6 = *(undefined4 *)(param_3 + 2);
    }
  }
  local_b0 = 0;
  uStack_a8 = 0;
  local_a0 = param_4;
  local_98 = param_6;
  local_90 = local_68;
  iStack_8c = local_70;
  uStack_84 = uStack_64;
  local_80 = local_6c;
  uStack_7c = uStack_94;
  local_78 = local_68;
  iStack_74 = local_70;
  (*(code *)*_DAT_008a6948)(&local_b0);
  puVar2 = _DAT_008a6950;
  (*(code *)*_DAT_008a6950)(&local_b0,*(undefined2 *)(param_8 + 6),1);
  local_c0 = 0;
  uStack_b8 = 0;
  (*(code *)*puVar1)(&local_c0);
  (*(code *)*puVar2)(&local_c0,*param_3,1);
  (*(code *)*_DAT_008a6958)
            (*(undefined8 *)(param_1 + 0xb0),*(undefined8 *)(param_7 + 8),&local_b0,&local_88,
             *(undefined8 *)(param_2 + 8),&local_c0,&local_a0,0);
  return;
}


