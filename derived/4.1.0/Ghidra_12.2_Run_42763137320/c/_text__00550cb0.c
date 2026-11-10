/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00550cb0; name: FUN_.text__00550cb0
 */


void FUN__text__00550cb0(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4,
                        long *param_5)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  ulong uVar10;
  long lVar11;
  
  uVar2 = *(uint *)(param_5 + 5);
  plVar1 = param_5 + 3;
  if (param_4 != 0) {
    plVar1 = param_5 + 4;
  }
  puVar7 = (undefined8 *)*plVar1;
  puVar6 = (undefined8 *)*param_5;
  puVar9 = (undefined4 *)param_5[1];
  puVar8 = (undefined4 *)param_5[2];
  uVar5 = param_3;
  if ((uVar2 & 1) != 0) {
    uVar5 = param_2;
    param_2 = param_3;
  }
  uVar3 = *(uint *)((long)param_5 + 0x2c) >> ((int)param_5[6] == 1);
  if ((param_4 == 1) && ((int)param_5[6] == 1)) {
    uVar10 = (ulong)(uVar2 - 1);
    (*(code *)puVar7[uVar10])(uVar3,puVar9[uVar10],puVar8[uVar10],param_1,puVar6[uVar10],uVar5);
    if (uVar2 - 1 != 0) {
      do {
        uVar4 = param_2;
        (*(code *)*puVar7)(uVar3,*puVar9,*puVar8,uVar5,*puVar6,uVar4);
        uVar10 = uVar10 - 1;
        param_2 = uVar5;
        uVar5 = uVar4;
        puVar6 = puVar6 + 1;
        puVar7 = puVar7 + 1;
        puVar8 = puVar8 + 1;
        puVar9 = puVar9 + 1;
      } while (uVar10 != 0);
    }
  }
  else {
    (*(code *)*puVar7)(uVar3,*puVar9,*puVar8,param_1,*puVar6,uVar5);
    if (1 < uVar2) {
      lVar11 = (ulong)uVar2 - 1;
      do {
        uVar4 = param_2;
        puVar9 = puVar9 + 1;
        puVar8 = puVar8 + 1;
        puVar7 = puVar7 + 1;
        puVar6 = puVar6 + 1;
        (*(code *)*puVar7)(uVar3,*puVar9,*puVar8,uVar5,*puVar6,uVar4);
        lVar11 = lVar11 + -1;
        param_2 = uVar5;
        uVar5 = uVar4;
      } while (lVar11 != 0);
    }
  }
  return;
}


