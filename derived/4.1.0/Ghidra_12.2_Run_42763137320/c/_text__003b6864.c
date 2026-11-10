/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003b6864; name: FUN_.text__003b6864
 */


void FUN__text__003b6864(long param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  undefined1 (*pauVar3) [16];
  long lVar4;
  long *plVar5;
  float fVar6;
  float fVar7;
  undefined4 extraout_var;
  undefined8 uVar8;
  undefined1 auVar9 [16];
  ulong extraout_var_00;
  float fVar10;
  float local_60;
  undefined4 uStack_5c;
  undefined8 uStack_58;
  undefined8 local_50;
  ulong uStack_48;
  
  lVar4 = *param_2;
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  lVar2 = *(long *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar4;
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
  }
  plVar5 = (long *)(param_1 + 0x18);
  *plVar5 = param_2[1];
  lVar4 = param_2[2];
  lVar2 = param_2[3];
  lVar1 = param_2[5];
  *(long *)(param_1 + 0x30) = param_2[4];
  *(long *)(param_1 + 0x38) = lVar1;
  *(long *)(param_1 + 0x20) = lVar4;
  *(long *)(param_1 + 0x28) = lVar2;
  lVar4 = param_2[6];
  lVar2 = param_2[7];
  lVar1 = param_2[9];
  *(long *)(param_1 + 0x50) = param_2[8];
  *(long *)(param_1 + 0x58) = lVar1;
  *(long *)(param_1 + 0x40) = lVar4;
  *(long *)(param_1 + 0x48) = lVar2;
  if (((((param_2[1] == -0x340d631b7bddd9bb) || (param_2[1] == 0)) ||
       (param_2[2] == -0x340d631b7bddd9bb)) ||
      ((param_2[2] == 0 || (param_2[3] == -0x340d631b7bddd9bb)))) ||
     ((param_2[3] == 0 || ((param_2[4] == -0x340d631b7bddd9bb || (param_2[4] == 0)))))) {
    *(undefined1 *)(param_1 + 8) = 0;
    return;
  }
  *(undefined1 *)(param_1 + 8) = 1;
  auVar9 = (**(code **)(**(long **)(param_1 + 0x10) + 0x30))
                     (*(long **)(param_1 + 0x10),param_1 + 0x28);
  fVar6 = (float)(**(code **)(**(long **)(param_1 + 0x10) + 0x30))
                           (*(long **)(param_1 + 0x10),param_1 + 0x30);
  fVar6 = fVar6 - auVar9._0_4_;
  if (*(int *)(param_1 + 0x54) == 0) {
    *(undefined4 *)(param_1 + 0x80) = 0;
    lVar4 = param_1 + 0x20;
    (**(code **)(**(long **)(param_1 + 0x10) + 0x50))(*(long **)(param_1 + 0x10),lVar4);
    local_50 = CONCAT44(extraout_var,fVar6);
    uStack_48 = extraout_var_00;
    (**(code **)(**(long **)(param_1 + 0x10) + 0x48))(*(long **)(param_1 + 0x10),lVar4,&local_50);
    *(ulong *)(param_1 + 0x68) = uStack_48 & 0xffffffff;
    *(undefined8 *)(param_1 + 0x60) = local_50;
    _local_60 = CONCAT44(auVar9._4_4_,auVar9._0_4_ + fVar6 * 0.5);
    uStack_58 = auVar9._8_8_;
    (**(code **)(**(long **)(param_1 + 0x10) + 0x28))(*(long **)(param_1 + 0x10),lVar4,&local_60);
    (**(code **)(**(long **)(param_1 + 0x10) + 0x60))(*(long **)(param_1 + 0x10),plVar5,0);
  }
  else {
    auVar9 = (**(code **)(**(long **)(param_1 + 0x10) + 0x50))
                       (*(long **)(param_1 + 0x10),param_1 + 0x20);
    fVar7 = auVar9._0_4_;
    pauVar3 = (undefined1 (*) [16])(param_1 + 0x60);
    *pauVar3 = auVar9;
    fVar10 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 0x54));
    if (*(int *)(param_1 + 0x5c) == 0) {
      fVar7 = fVar6 + fVar10 * fVar6 * -0.05;
      if (fVar7 <= 40.0) {
        fVar7 = 40.0;
      }
      *(float *)*pauVar3 = fVar7;
      fVar7 = (float)*(undefined8 *)*pauVar3;
    }
    *(float *)(param_1 + 0x80) = (fVar6 - fVar7) / fVar10;
    (**(code **)(**(long **)(param_1 + 0x10) + 0x48))(*(long **)(param_1 + 0x10),param_1 + 0x20);
  }
  uVar8 = (**(code **)(**(long **)(param_1 + 0x10) + 0x30))
                    (*(long **)(param_1 + 0x10),param_1 + 0x28);
  *(int *)(param_1 + 0x74) = (int)((ulong)uVar8 >> 0x20);
  *(float *)(param_1 + 0x70) = (float)uVar8 + *(float *)(param_1 + 0x60) * 0.5;
  (**(code **)(**(long **)(param_1 + 0x10) + 0x60))(*(long **)(param_1 + 0x10),plVar5,1);
  return;
}


