/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003b6b04; name: FUN_.text__003b6b04
 */


void FUN__text__003b6b04(float param_1,long param_2)

{
  long lVar1;
  undefined1 (*pauVar2) [16];
  float fVar3;
  float fVar4;
  undefined4 extraout_var;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  ulong extraout_var_00;
  float fVar7;
  float local_60;
  undefined4 uStack_5c;
  undefined8 uStack_58;
  undefined8 local_50;
  ulong uStack_48;
  
  if (*(char *)(param_2 + 8) != '\0') {
    auVar6 = (**(code **)(**(long **)(param_2 + 0x10) + 0x30))
                       (*(long **)(param_2 + 0x10),param_2 + 0x28);
    fVar3 = (float)(**(code **)(**(long **)(param_2 + 0x10) + 0x30))
                             (*(long **)(param_2 + 0x10),param_2 + 0x30);
    fVar3 = fVar3 - auVar6._0_4_;
    if (*(int *)(param_2 + 0x54) == 0) {
      *(undefined4 *)(param_2 + 0x80) = 0;
      lVar1 = param_2 + 0x20;
      (**(code **)(**(long **)(param_2 + 0x10) + 0x50))(*(long **)(param_2 + 0x10),lVar1);
      local_50 = CONCAT44(extraout_var,fVar3);
      uStack_48 = extraout_var_00;
      (**(code **)(**(long **)(param_2 + 0x10) + 0x48))(*(long **)(param_2 + 0x10),lVar1,&local_50);
      *(ulong *)(param_2 + 0x68) = uStack_48 & 0xffffffff;
      *(undefined8 *)(param_2 + 0x60) = local_50;
      _local_60 = CONCAT44(auVar6._4_4_,auVar6._0_4_ + fVar3 * 0.5);
      uStack_58 = auVar6._8_8_;
      (**(code **)(**(long **)(param_2 + 0x10) + 0x28))(*(long **)(param_2 + 0x10),lVar1,&local_60);
      (**(code **)(**(long **)(param_2 + 0x10) + 0x60))(*(long **)(param_2 + 0x10),param_2 + 0x18,0)
      ;
    }
    else {
      auVar6 = (**(code **)(**(long **)(param_2 + 0x10) + 0x50))
                         (*(long **)(param_2 + 0x10),param_2 + 0x20);
      fVar4 = auVar6._0_4_;
      pauVar2 = (undefined1 (*) [16])(param_2 + 0x60);
      *pauVar2 = auVar6;
      fVar7 = (float)NEON_ucvtf(*(undefined4 *)(param_2 + 0x54));
      if (*(int *)(param_2 + 0x5c) == 0) {
        fVar4 = fVar3 + fVar7 * fVar3 * -0.05;
        if (fVar4 <= 40.0) {
          fVar4 = 40.0;
        }
        *(float *)*pauVar2 = fVar4;
        fVar4 = (float)*(undefined8 *)*pauVar2;
      }
      *(float *)(param_2 + 0x80) = (fVar3 - fVar4) / fVar7;
      (**(code **)(**(long **)(param_2 + 0x10) + 0x48))(*(long **)(param_2 + 0x10),param_2 + 0x20);
    }
    uVar5 = (**(code **)(**(long **)(param_2 + 0x10) + 0x30))
                      (*(long **)(param_2 + 0x10),param_2 + 0x28);
    *(int *)(param_2 + 0x74) = (int)((ulong)uVar5 >> 0x20);
    *(float *)(param_2 + 0x70) = (float)uVar5 + *(float *)(param_2 + 0x60) * 0.5;
    uStack_48 = *(undefined8 *)(param_2 + 0x78);
    fVar3 = (float)(int)param_1;
    if (*(char *)(param_2 + 0x84) != '\0') {
      fVar3 = param_1;
    }
    local_50 = CONCAT44((int)((ulong)*(undefined8 *)(param_2 + 0x70) >> 0x20),
                        (float)*(undefined8 *)(param_2 + 0x70) + fVar3 * *(float *)(param_2 + 0x80))
    ;
    (**(code **)(**(long **)(param_2 + 0x10) + 0x28))
              (*(long **)(param_2 + 0x10),param_2 + 0x20,&local_50);
  }
  return;
}


