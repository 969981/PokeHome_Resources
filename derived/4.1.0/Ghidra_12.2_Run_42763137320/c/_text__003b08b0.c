/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003b08b0; name: FUN_.text__003b08b0
 */


undefined8 FUN__text__003b08b0(long param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 local_48;
  
  if (*(int *)(param_1 + 0x8ec) == 1) goto LAB__text__003b0a2c;
  if (*(int *)(param_1 + 0x8ec) != 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x7b4) == 1) {
    if (*(int *)(param_1 + 0x8f8) == 1) {
      iVar5 = 2;
      goto LAB__text__003b0910;
    }
  }
  else if (*(int *)(param_1 + 0x7b4) == 3) {
    iVar5 = *(int *)(param_1 + 0x8f8) + 1;
LAB__text__003b0910:
    *(int *)(param_1 + 0x8f8) = iVar5;
  }
  uVar7 = FUN__text__003b9238(*(undefined8 *)(param_1 + 0x748));
  if ((uVar7 & 1) != 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x8f8) == 2) {
    uVar1 = FUN__text__003b7414(*(long *)(param_1 + 0x800),
                                *(undefined4 *)(*(long *)(param_1 + 0x800) + 0x14),
                                (int)*(float *)(*(long *)(param_1 + 0x748) + 0x1d4));
    uVar2 = (**(code **)(**(long **)(param_1 + 0xb0) + 0x50))();
    lVar9 = *(long *)(param_1 + 0x800);
    if (uVar1 < uVar2) {
      *(int *)(lVar9 + 0x10) = (int)*(float *)(*(long *)(param_1 + 0x748) + 0x1d4);
      uVar8 = *(undefined8 *)(param_1 + 0x7e0);
      fVar10 = *(float *)(*(long *)(param_1 + 0x748) + 0x1d4);
    }
    else {
      *(undefined4 *)(lVar9 + 0x10) = *(undefined4 *)(lVar9 + 0xc);
      uVar8 = *(undefined8 *)(param_1 + 0x7e0);
      fVar10 = (float)*(int *)(*(long *)(param_1 + 0x800) + 0xc);
    }
    FUN__text__003b6b04(fVar10,uVar8);
    lVar9 = *(long *)(param_1 + 0x800);
    *(undefined4 *)(param_1 + 0x8f8) = 0;
    uVar4 = FUN__text__003b7414(lVar9,*(undefined4 *)(lVar9 + 0x14),*(undefined4 *)(lVar9 + 0x10));
    local_48 = FUN__text__003b7494(lVar9,uVar4);
    iVar5 = FUN__text__003b7340(lVar9,&local_48);
    uVar8 = *(undefined8 *)(param_1 + 0x800);
    uVar4 = FUN__text__003b73b4(uVar8,param_1 + 0x8f0);
    local_48 = FUN__text__003b7494(uVar8,uVar4);
    iVar6 = FUN__text__003b7340(uVar8,&local_48);
    FUN__text__003b9248((float)((iVar6 - iVar5) + *(int *)(*(long *)(param_1 + 0x800) + 0x10)),
                        *(undefined8 *)(param_1 + 0x748),*(undefined4 *)(param_1 + 0x8a4));
    return 0;
  }
  if ((*(int *)(param_1 + 0x8f0) == *(int *)(param_1 + 0x7b8)) &&
     (*(int *)(param_1 + 0x8f4) == *(int *)(param_1 + 0x7bc))) {
    lVar9 = *(long *)(param_1 + 0x748);
    if ((*(float *)(lVar9 + 0x1d4) < *(float *)(lVar9 + 0x1a4)) &&
       (*(float *)(lVar9 + 0x1a0) < *(float *)(lVar9 + 0x1d4))) {
      fVar10 = *(float *)(param_1 + 0x894);
      lVar9 = param_1 + 0x8f0;
      iVar5 = FUN__text__003b7340(*(undefined8 *)(param_1 + 0x800),lVar9);
      fVar11 = *(float *)(param_1 + 0x898);
      iVar6 = FUN__text__003b7340(*(undefined8 *)(param_1 + 0x800),lVar9);
      fVar12 = *(float *)(param_1 + 0x89c);
      iVar3 = FUN__text__003b7340(*(undefined8 *)(param_1 + 0x800),lVar9);
      FUN__text__003b9350(fVar10 * (float)iVar5,fVar11 * (float)iVar6,fVar12 * (float)iVar3,
                          *(undefined8 *)(param_1 + 0x748),*(undefined4 *)(param_1 + 0x8a0));
    }
  }
  *(undefined4 *)(param_1 + 0x8ec) = 1;
LAB__text__003b0a2c:
  if (((*(int *)(param_1 + 0x7b4) == 3) ||
      ((*(int *)(param_1 + 0x7b4) == 0 && (*(char *)(param_1 + 0x7c0) == '\0')))) &&
     (uVar7 = FUN__text__003b9400(*(undefined8 *)(param_1 + 0x748)), (uVar7 & 1) == 0)) {
    FUN__text__003b93bc(0x3f800000,*(undefined8 *)(param_1 + 0x748));
  }
  uVar7 = FUN__text__003b9238(*(undefined8 *)(param_1 + 0x748));
  if ((uVar7 & 1) != 0) {
    return 0;
  }
  FUN__text__003a1648(param_1,0);
  *(undefined1 *)(param_1 + 0x85) = 1;
  FUN__text__003a14e8(*(undefined8 *)(param_1 + 2000),1);
  uVar1 = FUN__text__003b7414(*(long *)(param_1 + 0x800),
                              *(undefined4 *)(*(long *)(param_1 + 0x800) + 0x14),
                              (int)*(float *)(*(long *)(param_1 + 0x748) + 0x1d4));
  uVar2 = (**(code **)(**(long **)(param_1 + 0xb0) + 0x50))();
  lVar9 = *(long *)(param_1 + 0x800);
  if (uVar1 < uVar2) {
    uVar4 = *(undefined4 *)(lVar9 + 0x14);
  }
  else {
    *(undefined4 *)(lVar9 + 0x10) = *(undefined4 *)(lVar9 + 0xc);
    uVar4 = FUN__text__003b7160(*(undefined8 *)(param_1 + 0x800));
  }
  FUN__text__003adcc0(param_1,uVar4,(int)*(float *)(*(long *)(param_1 + 0x748) + 0x1d4));
  *(undefined1 *)(param_1 + 0xa14) = 0;
  return 1;
}


