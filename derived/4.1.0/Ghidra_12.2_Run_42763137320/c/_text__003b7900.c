/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003b7900; name: FUN_.text__003b7900
 */


void FUN__text__003b7900(float param_1,float param_2,float param_3,float param_4,long param_5)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float local_70;
  float fStack_6c;
  undefined8 local_68;
  
  fVar12 = *(float *)(param_5 + 8);
  fVar13 = *(float *)(param_5 + 0xc);
  fVar10 = *(float *)(param_5 + 0x10);
  fVar11 = *(float *)(param_5 + 0x14);
  fVar7 = param_2;
  iVar2 = (**(code **)(**(long **)(param_5 + 0x18) + 8))();
  if (iVar2 != 0) {
    uVar4 = 0;
    do {
      fVar5 = (float)(**(code **)**(undefined8 **)(param_5 + 0x18))
                               (*(undefined8 **)(param_5 + 0x18),uVar4);
      fVar8 = param_3 * 0.5;
      param_3 = param_4 * 0.5;
      fVar6 = ABS((fVar13 + param_2) - fVar7);
      fVar9 = fVar11 * 0.5 + param_3;
      bVar1 = false;
      if ((ABS((fVar12 + param_1) - fVar5) < fVar10 * 0.5 + fVar8) &&
         (bVar1 = false, !NAN(fVar6) && !NAN(fVar9))) {
        bVar1 = fVar6 < fVar9;
      }
      if (bVar1) {
        (**(code **)(**(long **)(param_5 + 0x18) + 0x18))(*(long **)(param_5 + 0x18),uVar4);
        local_70 = fVar5 - param_1;
        local_68 = 0;
        fVar9 = fVar7 - param_2;
        fStack_6c = fVar9;
        (**(code **)(**(long **)(param_5 + 0x18) + 0x10))
                  (*(long **)(param_5 + 0x18),uVar4,&local_70);
      }
      fVar7 = fVar9;
      uVar4 = uVar4 + 1;
      uVar3 = (**(code **)(**(long **)(param_5 + 0x18) + 8))();
    } while (uVar4 < uVar3);
  }
  return;
}


