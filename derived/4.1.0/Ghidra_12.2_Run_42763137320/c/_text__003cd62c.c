/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003cd62c; name: FUN_.text__003cd62c
 */


bool FUN__text__003cd62c(undefined1 param_1 [16],float param_2,long param_3,undefined8 param_4,
                        undefined8 *param_5,undefined8 *param_6)

{
  byte bVar1;
  byte bVar2;
  float fVar3;
  float fVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  undefined8 uVar8;
  float fVar9;
  
  lVar5 = FUN__text__003c79c0(*(undefined8 *)(param_3 + 0x58));
  if (lVar5 == 0) {
    uVar8 = 0;
    param_5[1] = 0;
    *param_5 = 0;
  }
  else {
    fVar6 = (float)FUN__text__003c7af0(lVar5);
    fVar9 = param_2;
    fVar7 = (float)FUN__text__003c7bd0(lVar5);
    bVar1 = *(byte *)(lVar5 + 0x5b) & 3;
    bVar2 = *(byte *)(lVar5 + 0x5b) >> 2 & 3;
    fVar3 = fVar7 * 0.5;
    fVar4 = fVar6 - fVar7 * 0.5;
    if (bVar1 == 1) {
      fVar3 = fVar7;
      fVar4 = fVar6;
    }
    fVar7 = fVar6 - fVar7;
    if (bVar1 != 2) {
      fVar6 = fVar6 + fVar3;
      fVar7 = fVar4;
    }
    fVar3 = fVar9 * 0.5;
    fVar4 = param_2 + fVar9 * 0.5;
    if (bVar2 == 1) {
      fVar3 = fVar9;
      fVar4 = param_2;
    }
    fVar9 = param_2 + fVar9;
    if (bVar2 != 2) {
      fVar9 = fVar4;
    }
    if (bVar2 != 2) {
      param_2 = param_2 - fVar3;
    }
    uVar8 = CONCAT44(param_2,fVar6);
    param_5[1] = 0;
    *param_5 = CONCAT44(fVar9,fVar7);
  }
  param_6[1] = 0;
  *param_6 = uVar8;
  return lVar5 != 0;
}


