/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00550e20; name: FUN_.text__00550e20
 */


void FUN__text__00550e20(undefined8 param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined8 *puVar9;
  
  uVar2 = *(uint *)(param_4 + 5);
  puVar6 = (undefined8 *)*param_4;
  puVar8 = (undefined4 *)param_4[1];
  puVar7 = (undefined4 *)param_4[2];
  puVar9 = (undefined8 *)param_4[3];
  uVar1 = param_3;
  if ((uVar2 & 1) != 0) {
    uVar1 = param_2;
  }
  uVar3 = *(uint *)((long)param_4 + 0x2c) >> ((int)param_4[6] == 1);
  (*(code *)*puVar9)(uVar3,*puVar8,*puVar7,param_1,*puVar6,uVar1);
  if (1 < uVar2) {
    lVar5 = (ulong)uVar2 - 1;
    if ((uVar2 & 1) != 0) {
      param_2 = param_3;
    }
    do {
      uVar4 = uVar1;
      puVar9 = puVar9 + 1;
      puVar8 = puVar8 + 1;
      puVar7 = puVar7 + 1;
      puVar6 = puVar6 + 1;
      (*(code *)*puVar9)(uVar3,*puVar8,*puVar7,uVar4,*puVar6,param_2);
      lVar5 = lVar5 + -1;
      uVar1 = param_2;
      param_2 = uVar4;
    } while (lVar5 != 0);
  }
  return;
}


