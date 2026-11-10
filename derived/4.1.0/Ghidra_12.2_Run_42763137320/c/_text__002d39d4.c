/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002d39d4; name: FUN_.text__002d39d4
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__002d39d4(undefined8 *param_1,long param_2,long param_3)

{
  int *piVar1;
  uint *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  lVar4 = _DAT_0089f718;
  param_1[4] = _DAT_0089f718 + 0x10;
  lVar3 = *(long *)(param_2 + 8);
  param_1[5] = lVar3;
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  param_1[6] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[7] = 0;
  if (*(code **)(param_2 + 0x20) != (code *)0x0) {
    (**(code **)(param_2 + 0x20))(param_2 + 0x30,param_1 + 10);
    uVar5 = *(undefined8 *)(param_2 + 0x28);
    param_1[7] = *(undefined8 *)(param_2 + 0x18);
    param_1[9] = uVar5;
    uVar5 = *(undefined8 *)(param_2 + 0x10);
    param_1[8] = *(undefined8 *)(param_2 + 0x20);
    param_1[6] = uVar5;
  }
  param_1[0x16] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x17] = 0;
  if (*(code **)(param_2 + 0xa0) != (code *)0x0) {
    (**(code **)(param_2 + 0xa0))(param_2 + 0xb0,param_1 + 0x1a);
    uVar5 = *(undefined8 *)(param_2 + 0xa8);
    param_1[0x17] = *(undefined8 *)(param_2 + 0x98);
    param_1[0x19] = uVar5;
    uVar5 = *(undefined8 *)(param_2 + 0x90);
    param_1[0x18] = *(undefined8 *)(param_2 + 0xa0);
    param_1[0x16] = uVar5;
  }
  param_1[4] = 0x867938;
  param_1[0x26] = lVar4 + 0x10;
  lVar4 = *(long *)(param_3 + 8);
  param_1[0x27] = lVar4;
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  if (*(code **)(param_3 + 0x20) != (code *)0x0) {
    (**(code **)(param_3 + 0x20))(param_3 + 0x30,param_1 + 0x2c);
    uVar5 = *(undefined8 *)(param_3 + 0x28);
    param_1[0x29] = *(undefined8 *)(param_3 + 0x18);
    param_1[0x2b] = uVar5;
    uVar5 = *(undefined8 *)(param_3 + 0x10);
    param_1[0x2a] = *(undefined8 *)(param_3 + 0x20);
    param_1[0x28] = uVar5;
  }
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  if (*(code **)(param_3 + 0xa0) != (code *)0x0) {
    (**(code **)(param_3 + 0xa0))(param_3 + 0xb0,param_1 + 0x3c);
    uVar5 = *(undefined8 *)(param_3 + 0xa8);
    param_1[0x39] = *(undefined8 *)(param_3 + 0x98);
    param_1[0x3b] = uVar5;
    uVar5 = *(undefined8 *)(param_3 + 0x90);
    param_1[0x3a] = *(undefined8 *)(param_3 + 0xa0);
    param_1[0x38] = uVar5;
  }
  param_1[0x26] = 0x867938;
  lVar4 = *(long *)(param_2 + 8);
  if ((((lVar4 != 0) && (*(char *)(lVar4 + 0x170) != '\0')) &&
      (lVar3 = *(long *)(param_3 + 8), lVar3 != 0)) && (*(char *)(lVar3 + 0x170) != '\0')) {
    piVar1 = (int *)((long)*(uint **)(lVar3 + 400) + (ulong)**(uint **)(lVar3 + 400));
    if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 0xd) ||
       (uVar6 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[6], uVar6 == 0)) {
      lVar3 = 0;
    }
    else {
      puVar2 = (uint *)((long)piVar1 + uVar6);
      lVar3 = (long)puVar2 + (ulong)*puVar2;
    }
    FUN__text__002d3890(&local_58,(long)*(uint **)(lVar4 + 400) + (ulong)**(uint **)(lVar4 + 400),
                        lVar3);
    *param_1 = local_58;
    param_1[1] = uStack_50;
    param_1[2] = local_48;
  }
  return;
}


