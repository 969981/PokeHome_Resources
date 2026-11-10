/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00526f60; name: FUN_.text__00526f60
 */


float FUN__text__00526f60(double param_1,double param_2,double param_3,double param_4,long param_5,
                         long param_6)

{
  ulong uVar1;
  double dVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  float fVar7;
  double dVar8;
  double dVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  double local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  double dStack_90;
  double local_88;
  float local_80;
  float local_7c;
  undefined1 auStack_78 [8];
  double local_70;
  double local_68;
  double local_60;
  double local_58;
  
  uVar1 = (ulong)*(uint *)((long)param_4 + 0x60);
  local_70 = 0.0;
  local_68 = param_1;
  local_60 = param_2;
  local_58 = param_3;
  if (*(uint *)((long)param_4 + 0x60) == 0) {
    lVar5 = 0;
    fVar11 = 1.0;
  }
  else {
    plVar3 = *(long **)((long)param_4 + 0x58);
    fVar11 = 1.0;
    fVar12 = 3.4028235e+38;
    lVar5 = 0;
    plVar6 = plVar3;
    do {
      lVar4 = *plVar6;
      if (*(char *)(lVar4 + 0x568) != '\0') {
        FUN__text__00521214(lVar4,&local_98,&local_b0);
        local_70 = 0.0;
        if ((((local_98 != 0.0) && (dVar2 = local_98, *(long *)((long)local_98 + 0x78) == param_6))
            || ((local_b0 != 0.0 && (dVar2 = local_b0, *(long *)((long)local_b0 + 0x78) == param_6))
               )) && ((local_70 = dVar2,
                      uVar1 = FUN__text__00521678(lVar4,&local_68,&local_70,auStack_78,&local_7c,
                                                  &local_80), (uVar1 & 1) != 0 &&
                      (local_80 < fVar12)))) {
          lVar5 = lVar4;
          fVar12 = local_80;
          fVar11 = local_7c;
        }
        plVar3 = *(long **)((long)param_4 + 0x58);
        uVar1 = (ulong)*(uint *)((long)param_4 + 0x60);
      }
      plVar6 = plVar6 + 1;
    } while (plVar6 != plVar3 + uVar1);
    if (local_70 == param_4) {
      dVar2 = local_60;
      dVar9 = local_58;
      dVar8 = (double)FUN__text__005213f4(local_68,local_60,local_58,param_5);
      if (lVar5 == param_5) {
        dVar2 = local_60;
        dVar9 = local_58;
        dVar8 = (double)FUN__text__005214a4(local_68,local_60,local_58,param_5,local_70);
        local_60 = local_60 - dVar2;
        local_68 = local_68 - dVar8;
        local_58 = local_58 - dVar9;
      }
      else {
        local_68 = local_68 - dVar8;
        local_58 = local_58 - dVar9;
        local_60 = local_60 - dVar2;
      }
      return (float)SQRT(local_68 * local_68 + local_60 * local_60 + local_58 * local_58);
    }
    if (local_70 != 0.0) {
      param_6 = *(long *)((long)local_70 + 0x78);
    }
  }
  dVar2 = local_60;
  dVar9 = local_58;
  local_98 = (double)FUN__text__00521364(local_68,param_5,param_6);
  local_b0 = 0.0;
  local_a8 = 0.0;
  local_a0 = 0.0;
  dStack_90 = dVar2;
  local_88 = dVar9;
  FUN__text__00520ce4(param_5,&local_98,&local_68,&local_b0);
  fVar12 = (float)(SQRT((local_b0 - local_68) * (local_b0 - local_68) +
                        (local_a8 - local_60) * (local_a8 - local_60) +
                        (local_a0 - local_58) * (local_a0 - local_58)) +
                  SQRT((local_b0 - local_98) * (local_b0 - local_98) +
                       (local_a8 - dStack_90) * (local_a8 - dStack_90) +
                       (local_a0 - local_88) * (local_a0 - local_88)));
  if (lVar5 != 0) {
    fVar10 = 1.0;
    if (lVar5 != param_5) {
      fVar10 = fVar11 * fVar11;
    }
    dVar2 = local_60;
    dVar9 = local_58;
    dVar8 = (double)FUN__text__005213f4(param_5);
    fVar7 = (float)SQRT((local_68 - dVar8) * (local_68 - dVar8) +
                        (local_60 - dVar2) * (local_60 - dVar2) +
                        (local_58 - dVar9) * (local_58 - dVar9));
    fVar12 = fVar7 + (fVar12 - fVar7) * fVar10 * fVar11;
  }
  return fVar12;
}


