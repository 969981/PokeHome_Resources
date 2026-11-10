/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005a51b0; name: FUN_.text__005a51b0
 */


void FUN__text__005a51b0(long *param_1,long *param_2,long *param_3)

{
  long lVar1;
  bool bVar2;
  bool bVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  
  uVar4 = *(ulong *)(*param_2 + 0xa0);
  bVar2 = (ulong)param_2[1] < (ulong)param_1[1];
  if (uVar4 != *(ulong *)(*param_1 + 0xa0)) {
    bVar2 = uVar4 < *(ulong *)(*param_1 + 0xa0);
  }
  bVar3 = (ulong)param_3[1] < (ulong)param_2[1];
  if (*(ulong *)(*param_3 + 0xa0) != uVar4) {
    bVar3 = *(ulong *)(*param_3 + 0xa0) < uVar4;
  }
  if (bVar2) {
    if (bVar3) {
      lVar1 = param_3[1];
      lVar6 = *param_1;
      lVar5 = param_1[1];
      *param_1 = *param_3;
      param_1[1] = lVar1;
    }
    else {
      lVar6 = *param_1;
      lVar5 = param_1[1];
      lVar1 = param_2[1];
      *param_1 = *param_2;
      param_1[1] = lVar1;
      *param_2 = lVar6;
      param_2[1] = lVar5;
      bVar2 = (ulong)param_3[1] < (ulong)param_2[1];
      if (*(ulong *)(*param_3 + 0xa0) != *(ulong *)(*param_2 + 0xa0)) {
        bVar2 = *(ulong *)(*param_3 + 0xa0) < *(ulong *)(*param_2 + 0xa0);
      }
      if (!bVar2) {
        return;
      }
      lVar6 = *param_2;
      lVar5 = param_2[1];
      lVar1 = param_3[1];
      *param_2 = *param_3;
      param_2[1] = lVar1;
    }
    *param_3 = lVar6;
    param_3[1] = lVar5;
  }
  else if (bVar3) {
    lVar6 = *param_2;
    lVar5 = param_2[1];
    lVar1 = param_3[1];
    *param_2 = *param_3;
    param_2[1] = lVar1;
    *param_3 = lVar6;
    param_3[1] = lVar5;
    bVar2 = (ulong)param_2[1] < (ulong)param_1[1];
    if (*(ulong *)(*param_2 + 0xa0) != *(ulong *)(*param_1 + 0xa0)) {
      bVar2 = *(ulong *)(*param_2 + 0xa0) < *(ulong *)(*param_1 + 0xa0);
    }
    if (bVar2) {
      lVar6 = *param_1;
      lVar5 = param_1[1];
      lVar1 = param_2[1];
      *param_1 = *param_2;
      param_1[1] = lVar1;
      *param_2 = lVar6;
      param_2[1] = lVar5;
      return;
    }
  }
  return;
}


