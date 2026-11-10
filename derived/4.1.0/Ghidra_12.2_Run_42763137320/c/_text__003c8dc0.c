/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003c8dc0; name: FUN_.text__003c8dc0
 */


void FUN__text__003c8dc0(long *param_1,undefined8 *param_2,long param_3,long param_4,
                        undefined8 param_5)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
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
      lVar9 = param_2[8];
      lVar5 = (**(code **)(*(long *)*param_2 + 0x10))((long *)*param_2,uVar1 << 4,8);
      lVar3 = param_2[8];
      FUN__text__003c8f40(param_2,lVar3,param_3,lVar3 + param_2[9] * 0x10,lVar5,param_4,param_5);
      if (lVar3 != 0) {
        lVar7 = param_2[9];
        if (lVar7 != 0) {
          plVar8 = (long *)(lVar3 + 8);
          do {
            if (*plVar8 != 0) {
              (**(code **)(*(long *)(*plVar8 + 0x48) + 0x18))();
              *plVar8 = 0;
            }
            lVar7 = lVar7 + -1;
            plVar8 = plVar8 + 2;
          } while (lVar7 != 0);
        }
        (**(code **)(*(long *)*param_2 + 0x18))((long *)*param_2,param_2[8],param_2[10] << 4,8);
      }
      param_2[10] = uVar1;
      param_2[8] = lVar5;
      param_2[9] = param_2[9] + param_4;
      *param_1 = lVar5 + (param_3 - lVar9);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


