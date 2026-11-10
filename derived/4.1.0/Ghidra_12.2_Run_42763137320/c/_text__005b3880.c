/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005b3880; name: FUN_.text__005b3880
 */


void FUN__text__005b3880(long *param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  FUN__text__005b39e0();
  if (param_1[8] == 0) {
    puVar5 = (undefined8 *)param_1[1];
    puVar6 = (undefined8 *)param_1[2];
  }
  else {
    uVar4 = param_1[7];
    puVar5 = (undefined8 *)param_1[1];
    if ((uVar4 != 0) && (uVar4 % 0x38 != 0)) {
      puVar6 = puVar5;
      do {
        puVar6 = puVar6 + 1;
      } while (puVar6 <= puVar5 + uVar4 / 0x38);
    }
    puVar6 = (undefined8 *)param_1[2];
    uVar4 = uVar4 + param_1[8];
    uVar1 = ((long)puVar6 - (long)puVar5) * 7;
    if (uVar4 != uVar1) {
      uVar4 = uVar4 / 0x38;
      if (uVar4 <= uVar1 / 0x38 && uVar1 % 0x38 != 0) {
        puVar3 = puVar5 + uVar4;
        do {
          puVar3 = puVar3 + 1;
        } while (puVar3 <= puVar5 + uVar1 / 0x38);
      }
    }
  }
  if (puVar5 != puVar6) {
    do {
      puVar3 = puVar5 + 1;
      (**(code **)(*(long *)param_1[9] + 0x18))((long *)param_1[9],*puVar5,0xfc0,8);
      puVar5 = puVar3;
    } while (puVar3 != puVar6);
    puVar6 = (undefined8 *)param_1[1];
  }
  puVar5 = (undefined8 *)param_1[2];
  if (puVar5 != puVar6) {
    param_1[2] = (long)puVar5 + ((long)puVar6 + (7 - (long)puVar5) & 0xfffffffffffffff8U);
  }
  lVar2 = *param_1;
  if (lVar2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x005b39c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[4] + 0x18))((long *)param_1[4],lVar2,param_1[3] - lVar2,8);
  return;
}


