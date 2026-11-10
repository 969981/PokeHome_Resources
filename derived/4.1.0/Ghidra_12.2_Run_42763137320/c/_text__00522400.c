/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00522400; name: FUN_.text__00522400
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00522400(undefined8 param_1,double param_2,double param_3,long param_4,
                        undefined8 param_5,long param_6,long param_7)

{
  int iVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  double dVar7;
  double dVar8;
  float fVar9;
  undefined8 local_90;
  undefined8 local_88;
  double local_80;
  double local_78;
  double dStack_70;
  double local_68;
  
  iVar1 = *(int *)(param_4 + 0x60);
  if (iVar1 == 0) {
    bVar2 = false;
    lVar5 = 0;
    lVar4 = 0;
    lVar3 = _DAT_00000078;
  }
  else {
    lVar5 = **(long **)(param_4 + 0x58);
    if (iVar1 == 1) {
      bVar2 = false;
      lVar4 = 0;
      lVar3 = *(long *)(lVar5 + 0x78);
    }
    else {
      lVar4 = (*(long **)(param_4 + 0x58))[1];
      bVar2 = true;
      lVar3 = *(long *)(lVar5 + 0x78);
    }
  }
  dVar7 = param_2;
  dVar8 = param_3;
  local_90 = param_1;
  local_88 = param_2;
  local_80 = param_3;
  if (lVar3 == param_6) {
    if (lVar4 == 0) {
      if ((((iVar1 == 0) || (**(long **)(param_4 + 0x58) == lVar5)) || (!bVar2)) ||
         ((*(long **)(param_4 + 0x58))[1] != lVar5)) {
        lVar5 = 0;
      }
      else {
        lVar5 = 1;
      }
      *(undefined4 *)(param_4 + lVar5 * 0x40 + 200) = 0;
      return;
    }
    lVar3 = *(long *)(lVar4 + 0x78);
    local_78 = (double)FUN__text__00520f94(param_4,&local_90);
  }
  else {
    local_78 = (double)FUN__text__00520f94(param_4,&local_90);
    lVar5 = lVar4;
  }
  if (iVar1 == 0) {
    lVar4 = -1;
  }
  else {
    lVar4 = *(long *)(**(long **)(param_4 + 0x58) + 0x78);
  }
  local_90 = *(undefined8 *)(lVar5 + 0x30);
  fVar9 = -*(float *)(param_4 + 0x44);
  if (lVar4 != lVar3) {
    fVar9 = *(float *)(param_4 + 0x44);
  }
  local_78 = local_78 + (double)(fVar9 * *(float *)(param_4 + 0x30));
  dVar7 = dVar7 + (double)(fVar9 * *(float *)(param_4 + 0x34));
  dVar8 = dVar8 + (double)(fVar9 * *(float *)(param_4 + 0x38));
  local_80 = *(double *)(lVar5 + 0x28);
  local_88 = (double)CONCAT44(*(undefined4 *)(lVar5 + 0x24),*(undefined4 *)(lVar5 + 0x38));
  dStack_70 = dVar7;
  local_68 = dVar8;
  uVar6 = FUN__text__0047da2c(*(undefined8 *)(*(long *)(param_7 + 8) + 0x20));
  if (((*(uint *)(param_4 + 0x60) == 0) || (**(long **)(param_4 + 0x58) == lVar5)) ||
     ((*(uint *)(param_4 + 0x60) < 2 || ((*(long **)(param_4 + 0x58))[1] != lVar5)))) {
    lVar3 = 0;
  }
  else {
    lVar3 = 1;
  }
  FUN__text__0052ec10(param_1,param_2,param_3,uVar6,dVar7,dVar8,*(undefined4 *)(param_7 + 0x50),
                      param_5,param_7 + 0x100,
                      *(undefined8 *)(*(long *)(*(long *)(param_7 + 8) + 0x38) + 0x68),&local_90,
                      *(undefined8 *)(param_4 + 0x70),*(undefined8 *)(lVar5 + 0x78),
                      param_4 + lVar3 * 0x40 + 0x90);
  return;
}


