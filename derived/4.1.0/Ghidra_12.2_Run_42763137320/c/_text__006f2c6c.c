/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006f2c6c; name: FUN_.text__006f2c6c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__006f2c6c(undefined8 *param_1,long param_2,int param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined4 local_44;
  
  iVar7 = (*(code *)*_DAT_008a7260)(*(undefined8 *)(param_2 + 8));
  if (iVar7 != param_3) {
    (*(code *)*_DAT_008a7268)(*(undefined8 *)(param_2 + 8),param_3);
  }
  puVar6 = _DAT_008a7bb8;
  puVar5 = _DAT_008a7b98;
  puVar4 = _DAT_008a7b90;
  puVar3 = _DAT_008a7250;
  if ((*(byte *)(param_2 + 0x191) & 3) == 1) {
    uVar8 = *(undefined8 *)(param_2 + 8);
    *(byte *)(param_2 + 0x191) = *(byte *)(param_2 + 0x191) & 0xfe;
    local_44 = 0xffffffff;
    uVar1 = param_1[1];
    local_70 = 0;
    uStack_68 = 0;
    local_80 = 0;
    uStack_78 = 0;
    local_90 = 0;
    uStack_88 = 0;
    local_a0 = 0;
    uStack_98 = 0;
    (*(code *)*puVar4)(&local_a0,*(undefined8 *)*param_1);
    (*(code *)*puVar3)(uVar8,&local_a0,&local_44);
    (*(code *)*puVar6)(uVar1,&local_a0);
    (*(code *)*puVar5)(&local_a0);
    *(undefined4 *)(param_2 + 0x194) = local_44;
    uVar2 = local_44;
  }
  else {
    uVar2 = *(undefined4 *)(param_2 + 0x194);
  }
  (*(code *)*_DAT_008a71d0)(param_1[1],*(undefined8 *)(param_2 + 8),uVar2);
  if ((*(byte *)(param_2 + 0x191) >> 1 & 1) == 0) {
    uVar1 = param_1[1];
    uVar8 = *(undefined8 *)(param_2 + 8);
    local_44 = 0xffffffff;
    local_70 = 0;
    uStack_68 = 0;
    local_80 = 0;
    uStack_78 = 0;
    local_90 = 0;
    uStack_88 = 0;
    local_a0 = 0;
    uStack_98 = 0;
    (*(code *)*puVar4)(&local_a0,*(undefined8 *)*param_1);
    (*(code *)*puVar3)(uVar8,&local_a0,&local_44);
    (*(code *)*puVar6)(uVar1,&local_a0);
    (*(code *)*puVar5)(&local_a0);
    *(undefined4 *)(param_2 + 0x194) = local_44;
  }
  return;
}


