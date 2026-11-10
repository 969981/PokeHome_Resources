/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003cd834; name: FUN_.text__003cd834
 */


undefined8
FUN__text__003cd834(undefined1 param_1 [16],float param_2,long param_3,undefined8 param_4,
                   int *param_5)

{
  byte bVar1;
  byte bVar2;
  float fVar3;
  bool bVar4;
  bool bVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  lVar6 = FUN__text__003c79c0(*(undefined8 *)(param_3 + 0x58));
  if (lVar6 == 0) {
    return 0;
  }
  fVar7 = (float)FUN__text__003c7af0();
  fVar10 = param_2;
  fVar8 = (float)FUN__text__003c7bd0(lVar6);
  bVar1 = *(byte *)(lVar6 + 0x5b) & 3;
  bVar2 = *(byte *)(lVar6 + 0x5b) >> 2 & 3;
  if (bVar1 == 2) {
    fVar9 = fVar7 - fVar8;
    if (bVar2 == 2) goto LAB__text__003cd8c4;
LAB__text__003cd8a8:
    if (bVar2 == 1) {
      fVar8 = param_2 - fVar10;
      goto LAB__text__003cd8d8;
    }
    fVar10 = fVar10 * 0.5;
    fVar8 = param_2 - fVar10;
  }
  else {
    fVar3 = fVar8 * 0.5;
    fVar9 = fVar7 - fVar8 * 0.5;
    if (bVar1 == 1) {
      fVar3 = fVar8;
      fVar9 = fVar7;
    }
    fVar7 = fVar7 + fVar3;
    if (bVar2 != 2) goto LAB__text__003cd8a8;
LAB__text__003cd8c4:
    fVar8 = param_2;
  }
  param_2 = param_2 + fVar10;
LAB__text__003cd8d8:
  fVar10 = (float)*param_5;
  fVar7 = (fVar7 * 1280.0) / 1920.0;
  bVar4 = true;
  bVar5 = false;
  if ((fVar9 * 1280.0) / 1920.0 <= fVar10) {
    bVar4 = false;
    bVar5 = true;
    if (!NAN(fVar7) && !NAN(fVar10)) {
      bVar4 = fVar7 < fVar10;
      bVar5 = false;
    }
  }
  if (((bVar4 == bVar5) && ((fVar8 * 720.0) / 1080.0 <= (float)param_5[1])) &&
     ((float)param_5[1] <= (param_2 * 720.0) / 1080.0)) {
    return 1;
  }
  return 0;
}


