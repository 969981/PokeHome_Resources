/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005214a4; name: FUN_.text__005214a4
 */


undefined1  [16]
FUN__text__005214a4(double param_1,double param_2,double param_3,double param_4,
                   undefined1 param_5 [16],undefined1 param_6 [16],float param_7,long param_8,
                   long param_9)

{
  int iVar1;
  double dVar2;
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  float fVar6;
  float fVar7;
  double local_78;
  double dStack_70;
  double local_68;
  
  dVar4 = param_2;
  dVar5 = param_3;
  local_78 = param_1;
  dStack_70 = param_2;
  local_68 = param_3;
  dVar2 = (double)FUN__text__00520f94(param_8,&local_78);
  fVar6 = (float)(param_1 - dVar2);
  fVar7 = SQRT(fVar6 * fVar6 + (float)(param_2 - dVar4) * (float)(param_2 - dVar4) +
               (float)(param_3 - dVar5) * (float)(param_3 - dVar5));
  if (fVar7 <= 0.0) {
    fVar6 = *(float *)(param_8 + 0x30);
    iVar1 = *(int *)(param_8 + 0x60);
    if (iVar1 != 0) {
      if (((iVar1 != 1) && (**(long **)(param_8 + 0x58) != param_9)) &&
         ((*(long **)(param_8 + 0x58))[1] == param_9)) {
        fVar6 = -fVar6;
      }
      goto LAB__text__0052158c;
    }
  }
  else {
    iVar1 = *(int *)(param_8 + 0x60);
    fVar6 = (1.0 / fVar7) * fVar6;
    if (iVar1 != 0) {
LAB__text__0052158c:
      if (((iVar1 != 1) && (**(long **)(param_8 + 0x58) != param_9)) &&
         ((*(long **)(param_8 + 0x58))[1] == param_9)) {
        fVar7 = *(float *)(param_8 + 0x590);
        goto LAB__text__005215b8;
      }
    }
  }
  fVar7 = 1.0 - *(float *)(param_8 + 0x590);
LAB__text__005215b8:
  auVar3._0_8_ = param_4 * (double)param_7 +
                 (double)(1.0 - param_7) *
                 (dVar2 + (double)(fVar6 * *(float *)(param_8 + 0x44) * (fVar7 + fVar7)));
  auVar3._8_8_ = 0;
  return auVar3;
}


