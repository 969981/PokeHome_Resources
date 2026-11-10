/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005081a0; name: FUN_.text__005081a0
 */


void FUN__text__005081a0(undefined8 param_1,long param_2,double *param_3)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  double local_60;
  double dStack_58;
  double local_50;
  double local_48;
  double local_40;
  double local_38;
  
  lVar4 = *(long *)(param_2 + 0x58);
  if ((((lVar4 != -1) &&
       (lVar2 = FUN__text__0050c320(param_1,*(undefined8 *)(param_2 + 0x68)), lVar2 != 0)) &&
      (lVar4 = FUN__text__00526100(lVar2,lVar4), lVar4 != 0)) &&
     (uVar3 = FUN__text__00521c6c(*param_3,param_3[1],param_3[2]), (uVar3 & 1) != 0)) {
    iVar1 = FUN__text__0052163c(lVar4,lVar2);
    local_40 = 0.0;
    local_38 = 0.0;
    local_48 = 0.0;
    uVar3 = FUN__text__00521b44(*param_3,param_3[1],param_3[2],lVar4,iVar1);
    if ((uVar3 & 1) == 0) {
      local_60 = *param_3;
      dStack_58 = param_3[1];
      local_50 = param_3[2];
      uVar3 = FUN__text__00521060(lVar4,iVar1,&local_60,&local_48);
      if ((uVar3 & 1) != 0) {
        fVar6 = *(float *)(lVar4 + 0x38);
        fVar7 = 0.01;
        if (iVar1 != 0) {
          fVar7 = -0.01;
        }
        fVar5 = *(float *)(lVar4 + 0x34);
        *param_3 = local_48 + (double)(fVar7 * *(float *)(lVar4 + 0x30));
        param_3[1] = local_40 + (double)(fVar7 * fVar5);
        param_3[2] = local_38 + (double)(fVar7 * fVar6);
      }
    }
  }
  return;
}


