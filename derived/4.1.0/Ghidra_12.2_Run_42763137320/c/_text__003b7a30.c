/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003b7a30; name: FUN_.text__003b7a30
 */


void FUN__text__003b7a30(float param_1,float param_2,float param_3,float param_4,long param_5)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float local_80;
  float fStack_7c;
  undefined8 local_78;
  
  fVar10 = *(float *)(param_5 + 0x10);
  fVar11 = *(float *)(param_5 + 0x14);
  fVar13 = *(float *)(param_5 + 0xc) + param_2;
  fVar12 = *(float *)(param_5 + 8) + param_1;
  fVar6 = *(float *)(param_5 + 0xc) + param_4;
  fVar14 = *(float *)(param_5 + 8) + param_3;
  fVar8 = param_2;
  iVar3 = (**(code **)(**(long **)(param_5 + 0x18) + 8))();
  if (iVar3 != 0) {
    uVar5 = 0;
    do {
      fVar7 = (float)(**(code **)**(undefined8 **)(param_5 + 0x18))
                               (*(undefined8 **)(param_5 + 0x18),uVar5);
      fVar9 = fVar10 * 0.5 + param_3 * 0.5;
      param_3 = fVar11 * 0.5 + param_4 * 0.5;
      if ((ABS(fVar14 - fVar7) < fVar9) &&
         (ABS(fVar6 - fVar8) < param_3 &&
          (fVar9 <= ABS(fVar12 - fVar7) || param_3 <= ABS(fVar13 - fVar8)))) {
        (**(code **)(**(long **)(param_5 + 0x18) + 0x20))(*(long **)(param_5 + 0x18),uVar5);
      }
      uVar5 = uVar5 + 1;
      uVar4 = (**(code **)(**(long **)(param_5 + 0x18) + 8))();
    } while (uVar5 < uVar4);
  }
  iVar3 = (**(code **)(**(long **)(param_5 + 0x18) + 8))();
  if (iVar3 != 0) {
    uVar5 = 0;
    do {
      fVar9 = (float)(**(code **)**(undefined8 **)(param_5 + 0x18))
                               (*(undefined8 **)(param_5 + 0x18),uVar5);
      param_4 = fVar11 * 0.5 + param_4 * 0.5;
      fVar7 = fVar10 * 0.5 + param_3 * 0.5;
      bVar1 = ABS(fVar13 - fVar8) < param_4;
      bVar2 = ABS(fVar12 - fVar9) < fVar7;
      param_3 = ABS(fVar6 - fVar8);
      if ((fVar7 <= ABS(fVar14 - fVar9) || param_4 <= param_3) && (bVar2 && bVar1)) {
        (**(code **)(**(long **)(param_5 + 0x18) + 0x18))(*(long **)(param_5 + 0x18),uVar5);
      }
      if (bVar2 && bVar1) {
        local_78 = 0;
        local_80 = fVar9 - param_1;
        fVar7 = fVar8 - param_2;
        fStack_7c = fVar7;
        (**(code **)(**(long **)(param_5 + 0x18) + 0x10))
                  (*(long **)(param_5 + 0x18),uVar5,&local_80);
      }
      fVar8 = fVar7;
      uVar5 = uVar5 + 1;
      uVar4 = (**(code **)(**(long **)(param_5 + 0x18) + 8))();
    } while (uVar5 < uVar4);
  }
  return;
}


