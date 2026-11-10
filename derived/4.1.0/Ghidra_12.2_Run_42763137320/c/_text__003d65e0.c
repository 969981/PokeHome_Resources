/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003d65e0; name: FUN_.text__003d65e0
 */


ulong FUN__text__003d65e0(long *param_1,void *param_2,ulong param_3)

{
  void *__src;
  long lVar1;
  ulong uVar2;
  long lVar3;
  int iVar4;
  ulong __n;
  long lVar5;
  ulong __n_00;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  
  plVar8 = param_1 + 2;
  iVar4 = *(int *)((long)param_1 + 0x3c);
  if (*plVar8 == param_1[3] && iVar4 == 0) {
    lVar1 = (**(code **)(*param_1 + 0x10))(param_1,param_1[5],param_1[6]);
    if (lVar1 != 0) {
      param_1[1] = param_1[1] + param_1[3];
      param_1[2] = 0;
      param_1[3] = lVar1;
      param_1[4] = -1;
    }
    iVar4 = *(int *)((long)param_1 + 0x3c);
  }
  if (iVar4 != 0) {
    return 0;
  }
  __n = param_1[3] - param_1[2];
  __src = (void *)(param_1[5] + param_1[2]);
  if (param_3 <= __n) {
    memcpy(param_2,__src,param_3);
    *plVar8 = *plVar8 + param_3;
    return param_3;
  }
  memcpy(param_2,__src,__n);
  __n_00 = param_3 - __n;
  param_2 = (void *)((long)param_2 + __n);
  if (__n_00 < (ulong)param_1[6]) {
    uVar2 = (**(code **)(*param_1 + 0x10))(param_1,param_1[5]);
    if (uVar2 != 0) {
      uVar7 = uVar2;
      if (uVar2 <= __n_00) {
        do {
          lVar1 = (**(code **)(*param_1 + 0x10))(param_1,param_1[5] + uVar7,param_1[6] - uVar7);
          if (lVar1 == 0) {
            if (uVar2 == 0) goto LAB__text__003d67f4;
            memcpy(param_2,(void *)param_1[5],uVar7);
            __n = uVar7 + __n;
            lVar1 = param_1[3] + uVar7 + param_1[1];
            goto LAB__text__003d6758;
          }
          uVar7 = lVar1 + uVar7;
        } while (uVar7 <= __n_00);
      }
      memcpy(param_2,(void *)param_1[5],__n_00);
      lVar1 = param_1[3];
      param_1[3] = uVar7;
      param_1[1] = param_1[1] + lVar1;
      param_1[2] = __n_00;
      return param_3;
    }
  }
  else {
    lVar1 = (**(code **)(*param_1 + 0x10))(param_1,param_2,__n_00);
    if (lVar1 != 0) {
      lVar6 = __n_00 - lVar1;
      __n = lVar1 + __n;
      param_1[1] = param_1[1] + lVar1;
      if (lVar6 != 0) {
        lVar5 = (long)param_2 + lVar1;
        do {
          lVar3 = (**(code **)(*param_1 + 0x10))(param_1,lVar5,lVar6);
          if (lVar3 == 0) break;
          lVar6 = lVar6 - lVar3;
          lVar5 = lVar5 + lVar3;
          __n = lVar3 + __n;
          param_1[1] = param_1[1] + lVar3;
        } while (lVar6 != 0);
        if (lVar1 == 0) goto LAB__text__003d67f4;
      }
      lVar1 = param_1[1] + param_1[3];
LAB__text__003d6758:
      param_1[1] = lVar1;
      *plVar8 = 0;
      param_1[3] = 0;
      param_1[4] = -1;
      return __n;
    }
  }
LAB__text__003d67f4:
  param_1[2] = param_1[3];
  return __n;
}


