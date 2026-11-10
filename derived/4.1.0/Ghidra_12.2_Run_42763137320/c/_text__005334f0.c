/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005334f0; name: FUN_.text__005334f0
 */


bool FUN__text__005334f0(undefined1 param_1 [16],undefined1 param_2 [16],double param_3,long param_4
                        ,uint param_5,long param_6,long param_7,long param_8)

{
  undefined4 uVar1;
  ulong uVar2;
  ulong uVar3;
  double *pdVar4;
  long lVar5;
  double dVar6;
  undefined8 uVar7;
  float fVar8;
  double dVar9;
  float fVar10;
  ulong uVar11;
  float fVar12;
  undefined8 local_a0;
  ulong uStack_98;
  ulong local_90;
  double local_88;
  double dStack_80;
  double local_78;
  
  if (param_5 < *(uint *)(param_4 + 0x80)) {
    pdVar4 = (double *)(*(long *)(param_4 + 0x78) + (ulong)param_5 * 0x18);
  }
  else {
    pdVar4 = (double *)
             (*(long *)(*(long *)(*(long *)(param_4 + 8) + 8) + 0x20) + (ulong)param_5 * 0x38 + 0x18
             );
  }
  local_88 = *pdVar4;
  dVar9 = pdVar4[1];
  local_78 = pdVar4[2];
  dStack_80 = dVar9;
  dVar6 = (double)FUN__text__00520f94(param_8,&local_88);
  lVar5 = param_7 + 8;
  fVar8 = (float)(dVar9 - dStack_80);
  uVar3 = (ulong)(uint)fVar8;
  fVar12 = *(float *)(param_7 + 0x128);
  fVar10 = (float)(param_3 - local_78);
  uVar11 = (ulong)(uint)fVar10;
  *(float *)(param_7 + 0x2c) = fVar12;
  fVar8 = (float)(dVar6 - local_88) * (float)(dVar6 - local_88) + fVar8 * fVar8 + fVar10 * fVar10;
  if (fVar12 * fVar12 <= fVar8) {
    (**(code **)(*(long *)(param_7 + 8) + 0x10))(lVar5);
    *(undefined2 *)(param_7 + 0x31) = 0x100;
    lVar5 = *(long *)(*(long *)(*(long *)(param_4 + 8) + 0x38) + 0x58);
  }
  else {
    uVar2 = FUN__text__00521260(param_8,*(undefined8 *)(param_6 + 0x78));
    if ((uVar2 & 1) == 0) goto LAB__text__005336a8;
    uVar1 = FUN__text__0052163c(param_8,param_6);
    uVar7 = FUN__text__00521904(param_8,uVar1);
    local_a0 = uVar7;
    uStack_98 = uVar3;
    local_90 = uVar11;
    if ((*(long *)(*(long *)(*(long *)(param_4 + 8) + 0x38) + 0x58) == *(long *)(param_8 + 0x70)) ||
       ((uVar2 = FUN__text__00521b44(local_88,dStack_80,local_78,param_8,uVar1), (uVar2 & 1) != 0 &&
        (uVar3 = FUN__text__00533100(local_88,dStack_80,local_78,uVar7,uVar3,uVar11,
                                     *(undefined8 *)(param_6 + 0xb0),0,lVar5), (uVar3 & 1) != 0))))
    {
      FUN__text__0052b1ac(lVar5,&local_88,&local_a0);
      lVar5 = *(long *)(*(long *)(*(long *)(param_4 + 8) + 0x38) + 0x58);
    }
    else {
      FUN__text__0052b23c(lVar5);
      lVar5 = *(long *)(*(long *)(*(long *)(param_4 + 8) + 0x38) + 0x58);
    }
  }
  if (lVar5 != -1) {
    *(undefined1 *)(param_7 + 0x33) = 0;
  }
LAB__text__005336a8:
  return fVar8 < fVar12 * fVar12;
}


