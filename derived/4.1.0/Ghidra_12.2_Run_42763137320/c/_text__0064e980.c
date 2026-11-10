/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0064e980; name: FUN_.text__0064e980
 */


void FUN__text__0064e980(long *param_1,undefined8 *param_2,long param_3,long param_4,
                        undefined8 param_5)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  
  uVar4 = param_2[10];
  uVar6 = param_2[1];
  if ((param_4 - uVar4) + param_2[9] <= uVar6 - uVar4) {
    uVar1 = param_2[9] + param_4;
    uVar2 = uVar4 << 3;
    if (4 < uVar4 >> 0x3d) {
      uVar2 = 0xffffffffffffffff;
    }
    if (uVar4 >> 0x3d == 0) {
      uVar2 = (uVar4 << 3) / 5;
    }
    if (uVar6 <= uVar2) {
      uVar2 = uVar6;
    }
    if (uVar1 <= uVar2) {
      uVar1 = uVar2;
    }
    if (uVar1 <= uVar6) {
      lVar8 = param_2[8];
      lVar5 = (**(code **)(*(long *)*param_2 + 0x10))((long *)*param_2,uVar1 << 5,8);
      puVar3 = (undefined8 *)param_2[8];
      FUN__text__0064eb10(param_2,puVar3,param_3,puVar3 + param_2[9] * 4,lVar5,param_4,param_5);
      if (puVar3 != (undefined8 *)0x0) {
        for (lVar9 = param_2[9]; lVar9 != 0; lVar9 = lVar9 + -1) {
          puVar7 = (undefined8 *)*puVar3;
          *puVar3 = 0;
          if (puVar7 != (undefined8 *)0x0) {
            (**(code **)*puVar7)(puVar7);
            (**(code **)(*(long *)puVar3[1] + 0x18))((long *)puVar3[1],puVar7,puVar3[2],puVar3[3]);
          }
          puVar3 = puVar3 + 4;
        }
        (**(code **)(*(long *)*param_2 + 0x18))((long *)*param_2,param_2[8],param_2[10] << 5,8);
      }
      param_2[10] = uVar1;
      param_2[8] = lVar5;
      param_2[9] = param_2[9] + param_4;
      *param_1 = lVar5 + (param_3 - lVar8);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


