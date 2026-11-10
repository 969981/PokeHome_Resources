/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004ea4c8; name: FUN_.text__004ea4c8
 */


void FUN__text__004ea4c8(long param_1,uint param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  int iVar4;
  float *pfVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  long *local_1a0;
  undefined1 local_198;
  undefined8 local_190;
  undefined4 local_188;
  undefined4 local_180;
  undefined1 local_178;
  undefined1 local_170;
  undefined8 local_168;
  long local_88;
  long *local_28;
  
  *(int *)(*(long *)(param_1 + 0x10) + 0x48) = *(int *)(*(long *)(param_1 + 0x10) + 0x48) + 1;
  lVar2 = *(long *)(param_1 + 0x10);
  if ((*(byte *)(lVar2 + 0x5a) & 3) == 0 || (*(byte *)(lVar2 + 0x5a) & 0x10) != 0)
  goto LAB__text__004ea6ec;
  FUN__text__004f6114(&local_190,lVar2,0);
  if (local_88 == 0) {
    plVar3 = (long *)0x0;
    FUN__text__004f6174(&local_190);
LAB__text__004ea640:
    fVar10 = (float)param_2;
  }
  else {
    plVar1 = (long *)FUN__text__004f6178(&local_190,&local_1a0);
    plVar3 = local_1a0;
    if (plVar1 != (long *)0x0) {
      plVar3 = plVar1;
    }
    FUN__text__004f6174(&local_190);
    if ((plVar3 == (long *)0x0) || (*(char *)(param_1 + 0x50) != '\0')) goto LAB__text__004ea640;
    pfVar5 = (float *)(param_1 + 0x4c);
    fVar9 = *pfVar5;
    if (*(char *)(param_1 + 0x51) != '\0') {
      FUN__text__004ec36c(*(undefined8 *)(param_1 + 0x10));
    }
    local_168 = 0;
    *(undefined4 *)(param_1 + 0x4c) = 0x3f800000;
    local_178 = 0xff;
    local_170 = 0xff;
    local_190 = *(undefined8 *)(param_1 + 0x30);
    local_180 = 0;
    local_188 = *(undefined4 *)(param_1 + 0x2c);
    (**(code **)(*plVar3 + 0x2a0))(plVar3,pfVar5,&local_190);
    fVar6 = *(float *)(param_1 + 0x4c);
    fVar10 = (float)param_2;
    fVar8 = 4.0;
    if (fVar6 <= 4.0) {
      fVar8 = fVar6;
    }
    fVar7 = 0.25;
    if (0.25 <= fVar6) {
      fVar7 = fVar8;
    }
    fVar8 = 0.5;
    if (fVar7 * fVar10 <= 0.0) {
      fVar8 = -0.5;
    }
    fVar8 = (float)(uint)(int)(fVar8 + fVar7 * fVar10) / fVar10;
    *pfVar5 = fVar8;
    if (fVar8 - fVar9 != 0.0) {
      FUN__text__004ec360(*(undefined8 *)(param_1 + 0x10),0x36);
    }
    *(undefined2 *)(param_1 + 0x50) = 1;
  }
  local_1a0 = (long *)0x0;
  local_198 = 0;
  fVar10 = *(float *)(param_1 + 0x4c) * fVar10;
  fVar9 = 0.5;
  if (fVar10 <= 0.0) {
    fVar9 = -0.5;
  }
  iVar4 = (int)(fVar9 + fVar10);
  *(int *)(param_1 + 0x48) = iVar4;
  (**(code **)(**(long **)(param_1 + 0x10) + 0xa8))
            (*(long **)(param_1 + 0x10),*(undefined8 *)(param_1 + 8),iVar4,&local_1a0);
  FUN__text__004e7260(*(undefined4 *)(param_1 + 0x4c),param_1 + 0x58,iVar4);
  *(ulong *)(param_1 + 8) = *(long *)(param_1 + 8) + (ulong)*(uint *)(param_1 + 0x48);
  FUN__text__004ebe70(*(undefined8 *)(param_1 + 0x10));
  FUN__text__004f6114(&local_190,*(undefined8 *)(param_1 + 0x10),0);
  if (local_88 == 0) {
    FUN__text__004f6174(&local_190);
    if (plVar3 != (long *)0x0) goto LAB__text__004ea6e4;
  }
  else {
    plVar1 = (long *)FUN__text__004f6178(&local_190,&local_28);
    if (plVar1 != (long *)0x0) {
      local_28 = plVar1;
    }
    FUN__text__004f6174(&local_190);
    if (local_28 != plVar3) {
LAB__text__004ea6e4:
      *(undefined1 *)(param_1 + 0x50) = 0;
    }
  }
  lVar2 = *(long *)(param_1 + 0x10);
LAB__text__004ea6ec:
  FUN__text__004eb980(lVar2);
  return;
}


